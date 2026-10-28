#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ec4ef0 */
GEN_FRAME uint GEN_STDCALL F_00ec4ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec4ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec4f30 */
GEN_FRAME uint GEN_THISCALL F_00ec4f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec4f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x114) < param_1) {
    uVar4 = F_00eba6b0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x110) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x10c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x10c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x110));
    }
    iVar1 = *(int *)((int)this + 0x114);
    iVar2 = *(int *)((int)this + 0x10c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x10c) = uVar4;
    *(uint *)((int)this + 0x114) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5020 */
GEN_FRAME uint GEN_THISCALL F_00ec5020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x110) == *(int *)((int)this + 0x114)) {
    F_00ec4f30(this GEN_EDX_FWD,*(int *)((int)this + 0x114) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10c) + *(int *)((int)this + 0x110) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x110) = *(int *)((int)this + 0x110) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec50b0 */
GEN_FRAME uint GEN_THISCALL F_00ec50b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec50b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5020((undefined *)((int)this - 0x118) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec50e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec50e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec50e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 2;
  uVar1 = F_00eba750((undefined *)((int)this + 4) GEN_EDX_ARG,2,0);
  *(uint *)((int)this + 0xb0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6c0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) = (*(undefined * PTR32 (*)[3])REFP(0x115d6b0));
  return (uint)this;
}

/* ref: FUN_00ec5180 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca260((undefined *)((int)this - 0xbc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec5190 */
GEN_FRAME uint GEN_THISCALL F_00ec5190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec51b0 */
GEN_FRAME uint GEN_STDCALL F_00ec51b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec51b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec51f0 */
GEN_FRAME uint GEN_THISCALL F_00ec51f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec51f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xb4) < param_1) {
    uVar4 = F_00eba750(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xb0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xac) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xac) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xb0));
    }
    iVar1 = *(int *)((int)this + 0xb4);
    iVar2 = *(int *)((int)this + 0xac);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0xac) = uVar4;
    *(uint *)((int)this + 0xb4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec52e0 */
GEN_FRAME uint GEN_THISCALL F_00ec52e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec52e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xb0) == *(int *)((int)this + 0xb4)) {
    F_00ec51f0(this GEN_EDX_FWD,*(int *)((int)this + 0xb4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xac) + *(int *)((int)this + 0xb0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5370 */
GEN_FRAME uint GEN_THISCALL F_00ec5370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec52e0((undefined *)((int)this - 0xb8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec53a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec53a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec53a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 7;
  uVar1 = F_00eba7f0((undefined *)((int)this + 4) GEN_EDX_ARG,7,0);
  *(uint *)((int)this + 0x1a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6d8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d6c8));
  return (uint)this;
}

/* ref: FUN_00ec5440 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca2a0((undefined *)((int)this - 0x1ac) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec5450 */
GEN_FRAME uint GEN_THISCALL F_00ec5450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec5470 */
GEN_FRAME uint GEN_STDCALL F_00ec5470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec54b0 */
GEN_FRAME uint GEN_THISCALL F_00ec54b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec54b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x1a4) < param_1) {
    uVar4 = F_00eba7f0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x1a0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x19c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x19c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x1a0));
    }
    iVar1 = *(int *)((int)this + 0x1a4);
    iVar2 = *(int *)((int)this + 0x19c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x19c) = uVar4;
    *(uint *)((int)this + 0x1a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec55a0 */
GEN_FRAME uint GEN_THISCALL F_00ec55a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec55a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x1a0) == *(int *)((int)this + 0x1a4)) {
    F_00ec54b0(this GEN_EDX_FWD,*(int *)((int)this + 0x1a4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + *(int *)((int)this + 0x1a0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x1a0) = *(int *)((int)this + 0x1a0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5630 */
GEN_FRAME uint GEN_THISCALL F_00ec5630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec55a0((undefined *)((int)this - 0x1a8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec5660 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 3;
  uVar1 = F_00eba890((undefined *)((int)this + 4) GEN_EDX_ARG,3,0);
  *(uint *)((int)this + 0xe0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d6f0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) = (*(undefined * PTR32 (*)[3])REFP(0x115d6e0));
  return (uint)this;
}

/* ref: FUN_00ec5700 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca2e0((undefined *)((int)this - 0xec) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec5710 */
GEN_FRAME uint GEN_THISCALL F_00ec5710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec5730 */
GEN_FRAME uint GEN_STDCALL F_00ec5730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5770 */
GEN_FRAME uint GEN_THISCALL F_00ec5770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xe4) < param_1) {
    uVar4 = F_00eba890(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xe0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xdc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xdc) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xe0));
    }
    iVar1 = *(int *)((int)this + 0xe4);
    iVar2 = *(int *)((int)this + 0xdc);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0xdc) = uVar4;
    *(uint *)((int)this + 0xe4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5860 */
GEN_FRAME uint GEN_THISCALL F_00ec5860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xe0) == *(int *)((int)this + 0xe4)) {
    F_00ec5770(this GEN_EDX_FWD,*(int *)((int)this + 0xe4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + *(int *)((int)this + 0xe0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec58f0 */
GEN_FRAME uint GEN_THISCALL F_00ec58f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec58f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5860((undefined *)((int)this - 0xe8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec5920 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 9;
  uVar1 = F_00eba930((undefined *)((int)this + 4) GEN_EDX_ARG,9,0);
  *(uint *)((int)this + 0x200) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d708));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) = (*(undefined * PTR32 (*)[3])REFP(0x115d6f8));
  return (uint)this;
}

/* ref: FUN_00ec59c0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec59c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec59c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca320((undefined *)((int)this - 0x20c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec59d0 */
GEN_FRAME uint GEN_THISCALL F_00ec59d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec59d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec59f0 */
GEN_FRAME uint GEN_STDCALL F_00ec59f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec59f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5a30 */
GEN_FRAME uint GEN_THISCALL F_00ec5a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x204) < param_1) {
    uVar4 = F_00eba930(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x200) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x1fc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x1fc) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x200));
    }
    iVar1 = *(int *)((int)this + 0x204);
    iVar2 = *(int *)((int)this + 0x1fc);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x1fc) = uVar4;
    *(uint *)((int)this + 0x204) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5b20 */
GEN_FRAME uint GEN_THISCALL F_00ec5b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x200) == *(int *)((int)this + 0x204)) {
    F_00ec5a30(this GEN_EDX_FWD,*(int *)((int)this + 0x204) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + *(int *)((int)this + 0x200) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5bb0 */
GEN_FRAME uint GEN_THISCALL F_00ec5bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5b20((undefined *)((int)this - 0x208) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec5be0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 10;
  uVar1 = F_00eba9d0((undefined *)((int)this + 4) GEN_EDX_ARG,10,0);
  *(uint *)((int)this + 0x230) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x23c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d720));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x23c) = (*(undefined * PTR32 (*)[3])REFP(0x115d710));
  return (uint)this;
}

/* ref: FUN_00ec5c80 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca360((undefined *)((int)this - 0x23c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec5c90 */
GEN_FRAME uint GEN_THISCALL F_00ec5c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec5cb0 */
GEN_FRAME uint GEN_STDCALL F_00ec5cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec5cf0 */
GEN_FRAME uint GEN_THISCALL F_00ec5cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x234) < param_1) {
    uVar4 = F_00eba9d0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x230) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x22c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x22c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x230));
    }
    iVar1 = *(int *)((int)this + 0x234);
    iVar2 = *(int *)((int)this + 0x22c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x22c) = uVar4;
    *(uint *)((int)this + 0x234) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec5de0 */
GEN_FRAME uint GEN_THISCALL F_00ec5de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x230) == *(int *)((int)this + 0x234)) {
    F_00ec5cf0(this GEN_EDX_FWD,*(int *)((int)this + 0x234) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x22c) + *(int *)((int)this + 0x230) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x230) = *(int *)((int)this + 0x230) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec5e70 */
GEN_FRAME uint GEN_THISCALL F_00ec5e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec5de0((undefined *)((int)this - 0x238) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec5ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec5ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec5ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 3;
  uVar1 = F_00ebaa70((undefined *)((int)this + 8) GEN_EDX_ARG,3,0);
  *(uint *)((int)this + 0xb4) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  return (uint)this;
}

/* ref: FUN_00ec5ef0 */
GEN_FRAME uint GEN_THISCALL F_00ec5ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xac) + param_2 * 4;
}

/* ref: FUN_00ec5f30 */
GEN_FRAME uint GEN_STDCALL F_00ec5f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec5f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec5f50 */
GEN_FRAME uint GEN_THISCALL F_00ec5f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0xb8);
  if (*(int *)((int)this + 0xb8) != 0) {
    return *(uint *)((int)this + 0xb4);
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec5f80 */
GEN_FRAME uint GEN_THISCALL F_00ec5f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xb8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xb8));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec5fe0 */
GEN_FRAME uint GEN_THISCALL F_00ec5fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec5fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xb8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xb8));
  }
  return 0;
}

/* ref: FUN_00ec6040 */
GEN_FRAME uint GEN_THISCALL F_00ec6040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0xb4) < param_1) {
    puVar4 = (undefined4 *)F_00ebaa70(this GEN_EDX_FWD,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0xb0) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xac) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0xb0));
    }
    iVar1 = *(int *)((int)this + 0xac);
    iVar2 = *(int *)((int)this + 0xb4);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 - 8) = iVar2;
    *(undefined4 *)(iVar1 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 - 1) * -0x10 - 0x20;
    *(undefined4 * PTR32 *)((int)this + 0xac) = puVar4;
    *(uint *)((int)this + 0xb4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec60e0 */
GEN_FRAME uint GEN_THISCALL F_00ec60e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec60e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xb0) == *(int *)((int)this + 0xb4)) {
    F_00ec6040(this GEN_EDX_FWD,*(int *)((int)this + 0xb4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xac) + *(int *)((int)this + 0xb0) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6130 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  uVar1 = F_00ebfee0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return uVar1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec6150 */
GEN_FRAME uint GEN_THISCALL F_00ec6150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xb8) == *(int *)((int)this + 0xbc)) {
    F_00ec6040((undefined *)((int)this + 8) GEN_EDX_FWD,*(int *)((int)this + 0xbc) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xb4) + *(int *)((int)this + 0xb8) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0xb8) = *(int *)((int)this + 0xb8) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec61a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec61a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec61a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 8;
  uVar1 = F_00ebab10((undefined *)((int)this + 4) GEN_EDX_ARG,8,0);
  *(uint *)((int)this + 0x1d0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d750));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) = (*(undefined * PTR32 (*)[3])REFP(0x115d740));
  return (uint)this;
}

/* ref: FUN_00ec6240 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca3d0((undefined *)((int)this - 0x1dc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec6250 */
GEN_FRAME uint GEN_THISCALL F_00ec6250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec6270 */
GEN_FRAME uint GEN_STDCALL F_00ec6270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec62b0 */
GEN_FRAME uint GEN_THISCALL F_00ec62b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec62b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x1d4) < param_1) {
    uVar4 = F_00ebab10(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x1d0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x1cc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x1cc) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x1d0));
    }
    iVar1 = *(int *)((int)this + 0x1d4);
    iVar2 = *(int *)((int)this + 0x1cc);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x1cc) = uVar4;
    *(uint *)((int)this + 0x1d4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec63a0 */
GEN_FRAME uint GEN_THISCALL F_00ec63a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec63a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x1d0) == *(int *)((int)this + 0x1d4)) {
    F_00ec62b0(this GEN_EDX_FWD,*(int *)((int)this + 0x1d4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1cc) + *(int *)((int)this + 0x1d0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6430 */
GEN_FRAME uint GEN_THISCALL F_00ec6430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec63a0((undefined *)((int)this - 0x1d8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec6460 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 6;
  uVar1 = F_00ebabb0((undefined *)((int)this + 4) GEN_EDX_ARG,6,0);
  *(uint *)((int)this + 0x170) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d768));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) = (*(undefined * PTR32 (*)[3])REFP(0x115d758));
  return (uint)this;
}

/* ref: FUN_00ec6500 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca410((undefined *)((int)this - 0x17c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec6510 */
GEN_FRAME uint GEN_THISCALL F_00ec6510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec6530 */
GEN_FRAME uint GEN_STDCALL F_00ec6530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec6570 */
GEN_FRAME uint GEN_THISCALL F_00ec6570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x174) < param_1) {
    uVar4 = F_00ebabb0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x170) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x16c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x16c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x170));
    }
    iVar1 = *(int *)((int)this + 0x174);
    iVar2 = *(int *)((int)this + 0x16c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x16c) = uVar4;
    *(uint *)((int)this + 0x174) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6660 */
GEN_FRAME uint GEN_THISCALL F_00ec6660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x170) == *(int *)((int)this + 0x174)) {
    F_00ec6570(this GEN_EDX_FWD,*(int *)((int)this + 0x174) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x16c) + *(int *)((int)this + 0x170) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x170) = *(int *)((int)this + 0x170) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec66f0 */
GEN_FRAME uint GEN_THISCALL F_00ec66f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec6660((undefined *)((int)this - 0x178) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec6720 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 4;
  uVar1 = F_00ebac50((undefined *)((int)this + 8) GEN_EDX_ARG,4,0);
  *(uint *)((int)this + 0xd4) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  return (uint)this;
}

/* ref: FUN_00ec6770 */
GEN_FRAME uint GEN_THISCALL F_00ec6770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xcc) + param_2 * 4;
}

/* ref: FUN_00ec67b0 */
GEN_FRAME uint GEN_STDCALL F_00ec67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec67b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec67d0 */
GEN_FRAME uint GEN_THISCALL F_00ec67d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec67d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0xd8);
  if (*(int *)((int)this + 0xd8) != 0) {
    return *(uint *)((int)this + 0xd4);
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec6800 */
GEN_FRAME uint GEN_THISCALL F_00ec6800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xd8));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec6860 */
GEN_FRAME uint GEN_THISCALL F_00ec6860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0xd4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xd8));
  }
  return 0;
}

/* ref: FUN_00ec68c0 */
GEN_FRAME uint GEN_THISCALL F_00ec68c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec68c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0xd4) < param_1) {
    puVar4 = (undefined4 *)F_00ebac50(this GEN_EDX_FWD,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0xd0) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xcc) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0xd0));
    }
    iVar1 = *(int *)((int)this + 0xcc);
    iVar2 = *(int *)((int)this + 0xd4);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 - 8) = iVar2;
    *(undefined4 *)(iVar1 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 - 1) * -0x10 - 0x20;
    *(undefined4 * PTR32 *)((int)this + 0xcc) = puVar4;
    *(uint *)((int)this + 0xd4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6960 */
GEN_FRAME uint GEN_THISCALL F_00ec6960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xd0) == *(int *)((int)this + 0xd4)) {
    F_00ec68c0(this GEN_EDX_FWD,*(int *)((int)this + 0xd4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xcc) + *(int *)((int)this + 0xd0) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec69b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ec69b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec69b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec69d0 */
GEN_FRAME uint GEN_THISCALL F_00ec69d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xd8) == *(int *)((int)this + 0xdc)) {
    F_00ec68c0((undefined *)((int)this + 8) GEN_EDX_FWD,*(int *)((int)this + 0xdc) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd4) + *(int *)((int)this + 0xd8) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6a20 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6a20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0;
  *(undefined4 *)((int)this + 0x988) = 0x31;
  uVar1 = F_00ebacf0((undefined *)((int)this + 4) GEN_EDX_ARG,0x31,0);
  *(uint *)((int)this + 0x980) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d798));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98c) = (*(undefined * PTR32 (*)[3])REFP(0x115d788));
  return (uint)this;
}

/* ref: FUN_00ec6ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca480((undefined *)((int)this - 0x98c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec6ad0 */
GEN_FRAME uint GEN_THISCALL F_00ec6ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec6af0 */
GEN_FRAME uint GEN_STDCALL F_00ec6af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec6b30 */
GEN_FRAME uint GEN_THISCALL F_00ec6b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x984) < param_1) {
    uVar4 = F_00ebacf0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x980) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x97c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x97c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x980));
    }
    iVar1 = *(int *)((int)this + 0x984);
    iVar2 = *(int *)((int)this + 0x97c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x97c) = uVar4;
    *(uint *)((int)this + 0x984) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6c20 */
GEN_FRAME uint GEN_THISCALL F_00ec6c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x980) == *(int *)((int)this + 0x984)) {
    F_00ec6b30(this GEN_EDX_FWD,*(int *)((int)this + 0x984) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x97c) + *(int *)((int)this + 0x980) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x980) = *(int *)((int)this + 0x980) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6cb0 */
GEN_FRAME uint GEN_THISCALL F_00ec6cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec6c20((undefined *)((int)this - 0x988) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec6ce0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 8) GEN_EDX_ARG,2,0);
  *(uint *)((int)this + 0x94) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  return (uint)this;
}

/* ref: FUN_00ec6d30 */
GEN_FRAME uint GEN_THISCALL F_00ec6d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x8c) + param_2 * 4;
}

/* ref: FUN_00ec6d70 */
GEN_FRAME uint GEN_STDCALL F_00ec6d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec6d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf2_00ec6d90 */
GEN_FRAME uint GEN_THISCALL F_00ec6d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x98);
  if (*(int *)((int)this + 0x98) != 0) {
    return *(uint *)((int)this + 0x94);
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf4_00ec6dc0 */
GEN_FRAME uint GEN_THISCALL F_00ec6dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x98) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x98));
  }
  return 0;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf3_00ec6e20 */
GEN_FRAME uint GEN_THISCALL F_00ec6e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x98) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x98));
  }
  return 0;
}

/* ref: FUN_00ec6e80 */
GEN_FRAME uint GEN_THISCALL F_00ec6e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0x94) < param_1) {
    puVar4 = (undefined4 *)F_00ebad90(this GEN_EDX_FWD,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0x90) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x90));
    }
    iVar1 = *(int *)((int)this + 0x8c);
    iVar2 = *(int *)((int)this + 0x94);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 - 8) = iVar2;
    *(undefined4 *)(iVar1 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 - 1) * -0x10 - 0x20;
    *(undefined4 * PTR32 *)((int)this + 0x8c) = puVar4;
    *(uint *)((int)this + 0x94) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec6f20 */
GEN_FRAME uint GEN_THISCALL F_00ec6f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x90) == *(int *)((int)this + 0x94)) {
    F_00ec6e80(this GEN_EDX_FWD,*(int *)((int)this + 0x94) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6f70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ec6f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf1_00ec6f90 */
GEN_FRAME uint GEN_THISCALL F_00ec6f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec6f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x98) == *(int *)((int)this + 0x9c)) {
    F_00ec6e80((undefined *)((int)this + 8) GEN_EDX_FWD,*(int *)((int)this + 0x9c) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + *(int *)((int)this + 0x98) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec6fe0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec6fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec6fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0x10;
  uVar1 = F_00ebae30((undefined *)((int)this + 4) GEN_EDX_ARG,0x10,0);
  *(uint *)((int)this + 0x350) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x35c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7c8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x35c) = (*(undefined * PTR32 (*)[3])REFP(0x115d7b8));
  return (uint)this;
}

/* ref: FUN_00ec7080 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca4f0((undefined *)((int)this - 0x35c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec7090 */
GEN_FRAME uint GEN_THISCALL F_00ec7090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec70b0 */
GEN_FRAME uint GEN_STDCALL F_00ec70b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec70b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec70f0 */
GEN_FRAME uint GEN_THISCALL F_00ec70f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec70f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x354) < param_1) {
    uVar4 = F_00ebae30(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x350) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x34c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x34c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x350));
    }
    iVar1 = *(int *)((int)this + 0x354);
    iVar2 = *(int *)((int)this + 0x34c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x34c) = uVar4;
    *(uint *)((int)this + 0x354) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec71e0 */
GEN_FRAME uint GEN_THISCALL F_00ec71e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec71e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x350) == *(int *)((int)this + 0x354)) {
    F_00ec70f0(this GEN_EDX_FWD,*(int *)((int)this + 0x354) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34c) + *(int *)((int)this + 0x350) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x350) = *(int *)((int)this + 0x350) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7270 */
GEN_FRAME uint GEN_THISCALL F_00ec7270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec71e0((undefined *)((int)this - 0x358) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec72a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec72a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec72a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0x1d;
  uVar1 = F_00ebaed0((undefined *)((int)this + 4) GEN_EDX_ARG,0x1d,0);
  *(uint *)((int)this + 0x5c0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5cc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7e0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5cc) = (*(undefined * PTR32 (*)[3])REFP(0x115d7d0));
  return (uint)this;
}

/* ref: FUN_00ec7340 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca530((undefined *)((int)this - 0x5cc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec7350 */
GEN_FRAME uint GEN_THISCALL F_00ec7350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec7370 */
GEN_FRAME uint GEN_STDCALL F_00ec7370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec73b0 */
GEN_FRAME uint GEN_THISCALL F_00ec73b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec73b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x5c4) < param_1) {
    uVar4 = F_00ebaed0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x5c0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x5bc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x5bc) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x5c0));
    }
    iVar1 = *(int *)((int)this + 0x5c4);
    iVar2 = *(int *)((int)this + 0x5bc);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x5bc) = uVar4;
    *(uint *)((int)this + 0x5c4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec74a0 */
GEN_FRAME uint GEN_THISCALL F_00ec74a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec74a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x5c0) == *(int *)((int)this + 0x5c4)) {
    F_00ec73b0(this GEN_EDX_FWD,*(int *)((int)this + 0x5c4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x5bc) + *(int *)((int)this + 0x5c0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x5c0) = *(int *)((int)this + 0x5c0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7530 */
GEN_FRAME uint GEN_THISCALL F_00ec7530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec74a0((undefined *)((int)this - 0x5c8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec7560 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x2510) = 0;
  *(undefined4 *)((int)this + 0x2514) = 0;
  *(undefined4 *)((int)this + 0x2518) = 0xc4;
  uVar1 = F_00ebaf70((undefined *)((int)this + 4) GEN_EDX_ARG,0xc4,0);
  *(uint *)((int)this + 0x2510) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x251c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d7f8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x251c) = (*(undefined * PTR32 (*)[3])REFP(0x115d7e8));
  return (uint)this;
}

/* ref: FUN_00ec7600 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca570((undefined *)((int)this - 0x251c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec7610 */
GEN_FRAME uint GEN_THISCALL F_00ec7610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec7630 */
GEN_FRAME uint GEN_STDCALL F_00ec7630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7670 */
GEN_FRAME uint GEN_THISCALL F_00ec7670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x2514) < param_1) {
    uVar4 = F_00ebaf70(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x2510) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x250c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x250c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x2510));
    }
    iVar1 = *(int *)((int)this + 0x2514);
    iVar2 = *(int *)((int)this + 0x250c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x250c) = uVar4;
    *(uint *)((int)this + 0x2514) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7760 */
GEN_FRAME uint GEN_THISCALL F_00ec7760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x2510) == *(int *)((int)this + 0x2514)) {
    F_00ec7670(this GEN_EDX_FWD,*(int *)((int)this + 0x2514) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x250c) + *(int *)((int)this + 0x2510) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x2510) = *(int *)((int)this + 0x2510) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec77f0 */
GEN_FRAME uint GEN_THISCALL F_00ec77f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec77f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7760((undefined *)((int)this - 0x2518) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec7820 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0xc;
  uVar1 = F_00ebb010((undefined *)((int)this + 4) GEN_EDX_ARG,0xc,0);
  *(uint *)((int)this + 0x290) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d810));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) = (*(undefined * PTR32 (*)[3])REFP(0x115d800));
  return (uint)this;
}

/* ref: FUN_00ec78c0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec78c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec78c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca5b0((undefined *)((int)this - 0x29c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec78d0 */
GEN_FRAME uint GEN_THISCALL F_00ec78d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec78d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec78f0 */
GEN_FRAME uint GEN_STDCALL F_00ec78f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec78f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7930 */
GEN_FRAME uint GEN_THISCALL F_00ec7930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x294) < param_1) {
    uVar4 = F_00ebb010(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x290) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x28c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x28c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x290));
    }
    iVar1 = *(int *)((int)this + 0x294);
    iVar2 = *(int *)((int)this + 0x28c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x28c) = uVar4;
    *(uint *)((int)this + 0x294) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7a20 */
GEN_FRAME uint GEN_THISCALL F_00ec7a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x290) == *(int *)((int)this + 0x294)) {
    F_00ec7930(this GEN_EDX_FWD,*(int *)((int)this + 0x294) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + *(int *)((int)this + 0x290) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7ab0 */
GEN_FRAME uint GEN_THISCALL F_00ec7ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7a20((undefined *)((int)this - 0x298) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec7ae0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0x14;
  uVar1 = F_00ebb0b0((undefined *)((int)this + 4) GEN_EDX_ARG,0x14,0);
  *(uint *)((int)this + 0x410) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d828));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41c) = (*(undefined * PTR32 (*)[3])REFP(0x115d818));
  return (uint)this;
}

/* ref: FUN_00ec7b80 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca5f0((undefined *)((int)this - 0x41c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec7b90 */
GEN_FRAME uint GEN_THISCALL F_00ec7b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec7bb0 */
GEN_FRAME uint GEN_STDCALL F_00ec7bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7bf0 */
GEN_FRAME uint GEN_THISCALL F_00ec7bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x414) < param_1) {
    uVar4 = F_00ebb0b0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x410) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x40c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x40c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x410));
    }
    iVar1 = *(int *)((int)this + 0x414);
    iVar2 = *(int *)((int)this + 0x40c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x40c) = uVar4;
    *(uint *)((int)this + 0x414) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7ce0 */
GEN_FRAME uint GEN_THISCALL F_00ec7ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x410) == *(int *)((int)this + 0x414)) {
    F_00ec7bf0(this GEN_EDX_FWD,*(int *)((int)this + 0x414) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40c) + *(int *)((int)this + 0x410) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x410) = *(int *)((int)this + 0x410) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec7d70 */
GEN_FRAME uint GEN_THISCALL F_00ec7d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7ce0((undefined *)((int)this - 0x418) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec7da0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec7da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0x12;
  uVar1 = F_00ebb150((undefined *)((int)this + 4) GEN_EDX_ARG,0x12,0);
  *(uint *)((int)this + 0x3b0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d840));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3bc) = (*(undefined * PTR32 (*)[3])REFP(0x115d830));
  return (uint)this;
}

/* ref: FUN_00ec7e40 */
GEN_NOFRAME uint GEN_THISCALL F_00ec7e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca630((undefined *)((int)this - 0x3bc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec7e50 */
GEN_FRAME uint GEN_THISCALL F_00ec7e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec7e70 */
GEN_FRAME uint GEN_STDCALL F_00ec7e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec7eb0 */
GEN_FRAME uint GEN_THISCALL F_00ec7eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x3b4) < param_1) {
    uVar4 = F_00ebb150(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x3b0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x3ac) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x3ac) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x3b0));
    }
    iVar1 = *(int *)((int)this + 0x3b4);
    iVar2 = *(int *)((int)this + 0x3ac);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x3ac) = uVar4;
    *(uint *)((int)this + 0x3b4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7fa0 */
GEN_FRAME uint GEN_THISCALL F_00ec7fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec7fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x3b0) == *(int *)((int)this + 0x3b4)) {
    F_00ec7eb0(this GEN_EDX_FWD,*(int *)((int)this + 0x3b4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3ac) + *(int *)((int)this + 0x3b0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x3b0) = *(int *)((int)this + 0x3b0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8030 */
GEN_FRAME uint GEN_THISCALL F_00ec8030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7fa0((undefined *)((int)this - 0x3b8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec8060 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0xe;
  uVar1 = F_00ebb1f0((undefined *)((int)this + 4) GEN_EDX_ARG,0xe,0);
  *(uint *)((int)this + 0x2f0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d858));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) = (*(undefined * PTR32 (*)[3])REFP(0x115d848));
  return (uint)this;
}

/* ref: FUN_00ec8100 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca670((undefined *)((int)this - 0x2fc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec8110 */
GEN_FRAME uint GEN_THISCALL F_00ec8110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec8130 */
GEN_FRAME uint GEN_STDCALL F_00ec8130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8170 */
GEN_FRAME uint GEN_THISCALL F_00ec8170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x2f4) < param_1) {
    uVar4 = F_00ebb1f0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x2f0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x2ec) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x2ec) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x2f0));
    }
    iVar1 = *(int *)((int)this + 0x2f4);
    iVar2 = *(int *)((int)this + 0x2ec);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x2ec) = uVar4;
    *(uint *)((int)this + 0x2f4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8260 */
GEN_FRAME uint GEN_THISCALL F_00ec8260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x2f0) == *(int *)((int)this + 0x2f4)) {
    F_00ec8170(this GEN_EDX_FWD,*(int *)((int)this + 0x2f4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2ec) + *(int *)((int)this + 0x2f0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x2f0) = *(int *)((int)this + 0x2f0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec82f0 */
GEN_FRAME uint GEN_THISCALL F_00ec82f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec82f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8260((undefined *)((int)this - 0x2f8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec8320 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0x16;
  uVar1 = F_00ebb290((undefined *)((int)this + 4) GEN_EDX_ARG,0x16,0);
  *(uint *)((int)this + 0x470) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d870));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) = (*(undefined * PTR32 (*)[3])REFP(0x115d860));
  return (uint)this;
}

/* ref: FUN_00ec83c0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec83c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec83c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca6b0((undefined *)((int)this - 0x47c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec83d0 */
GEN_FRAME uint GEN_THISCALL F_00ec83d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec83f0 */
GEN_FRAME uint GEN_STDCALL F_00ec83f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec83f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8430 */
GEN_FRAME uint GEN_THISCALL F_00ec8430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x474) < param_1) {
    uVar4 = F_00ebb290(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x470) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x46c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x46c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x470));
    }
    iVar1 = *(int *)((int)this + 0x474);
    iVar2 = *(int *)((int)this + 0x46c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x46c) = uVar4;
    *(uint *)((int)this + 0x474) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8520 */
GEN_FRAME uint GEN_THISCALL F_00ec8520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x470) == *(int *)((int)this + 0x474)) {
    F_00ec8430(this GEN_EDX_FWD,*(int *)((int)this + 0x474) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x46c) + *(int *)((int)this + 0x470) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x470) = *(int *)((int)this + 0x470) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec85b0 */
GEN_FRAME uint GEN_THISCALL F_00ec85b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec85b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8520((undefined *)((int)this - 0x478) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec85e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec85e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec85e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0;
  *(undefined4 *)((int)this + 0x7a8) = 0x27;
  uVar1 = F_00ebb330((undefined *)((int)this + 4) GEN_EDX_ARG,0x27,0);
  *(uint *)((int)this + 0x7a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d888));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d878));
  return (uint)this;
}

/* ref: FUN_00ec8680 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca6f0((undefined *)((int)this - 0x7ac) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec8690 */
GEN_FRAME uint GEN_THISCALL F_00ec8690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec86b0 */
GEN_FRAME uint GEN_STDCALL F_00ec86b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec86b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec86f0 */
GEN_FRAME uint GEN_THISCALL F_00ec86f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec86f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x7a4) < param_1) {
    uVar4 = F_00ebb330(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x7a0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x79c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x79c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x7a0));
    }
    iVar1 = *(int *)((int)this + 0x7a4);
    iVar2 = *(int *)((int)this + 0x79c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x79c) = uVar4;
    *(uint *)((int)this + 0x7a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec87e0 */
GEN_FRAME uint GEN_THISCALL F_00ec87e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec87e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x7a0) == *(int *)((int)this + 0x7a4)) {
    F_00ec86f0(this GEN_EDX_FWD,*(int *)((int)this + 0x7a4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x79c) + *(int *)((int)this + 0x7a0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x7a0) = *(int *)((int)this + 0x7a0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8870 */
GEN_FRAME uint GEN_THISCALL F_00ec8870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec87e0((undefined *)((int)this - 0x7a8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec88a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec88a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec88a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0x17;
  uVar1 = F_00ebb3d0((undefined *)((int)this + 4) GEN_EDX_ARG,0x17,0);
  *(uint *)((int)this + 0x4a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d890));
  return (uint)this;
}

/* ref: FUN_00ec8940 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca730((undefined *)((int)this - 0x4ac) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec8950 */
GEN_FRAME uint GEN_THISCALL F_00ec8950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec8970 */
GEN_FRAME uint GEN_STDCALL F_00ec8970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec89b0 */
GEN_FRAME uint GEN_THISCALL F_00ec89b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec89b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x4a4) < param_1) {
    uVar4 = F_00ebb3d0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x4a0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x49c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x49c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x4a0));
    }
    iVar1 = *(int *)((int)this + 0x4a4);
    iVar2 = *(int *)((int)this + 0x49c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x49c) = uVar4;
    *(uint *)((int)this + 0x4a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8aa0 */
GEN_FRAME uint GEN_THISCALL F_00ec8aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x4a0) == *(int *)((int)this + 0x4a4)) {
    F_00ec89b0(this GEN_EDX_FWD,*(int *)((int)this + 0x4a4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x49c) + *(int *)((int)this + 0x4a0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x4a0) = *(int *)((int)this + 0x4a0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8b30 */
GEN_FRAME uint GEN_THISCALL F_00ec8b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8aa0((undefined *)((int)this - 0x4a8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec8b60 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0x37;
  uVar1 = F_00ebb470((undefined *)((int)this + 4) GEN_EDX_ARG,0x37,0);
  *(uint *)((int)this + 0xaa0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8b8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) = (*(undefined * PTR32 (*)[3])REFP(0x115d8a8));
  return (uint)this;
}

/* ref: FUN_00ec8c00 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca770((undefined *)((int)this - 0xaac) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec8c10 */
GEN_FRAME uint GEN_THISCALL F_00ec8c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec8c30 */
GEN_FRAME uint GEN_STDCALL F_00ec8c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8c70 */
GEN_FRAME uint GEN_THISCALL F_00ec8c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xaa4) < param_1) {
    uVar4 = F_00ebb470(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xaa0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xa9c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xa9c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xaa0));
    }
    iVar1 = *(int *)((int)this + 0xaa4);
    iVar2 = *(int *)((int)this + 0xa9c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0xa9c) = uVar4;
    *(uint *)((int)this + 0xaa4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8d60 */
GEN_FRAME uint GEN_THISCALL F_00ec8d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xaa0) == *(int *)((int)this + 0xaa4)) {
    F_00ec8c70(this GEN_EDX_FWD,*(int *)((int)this + 0xaa4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa9c) + *(int *)((int)this + 0xaa0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xaa0) = *(int *)((int)this + 0xaa0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec8df0 */
GEN_FRAME uint GEN_THISCALL F_00ec8df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8d60((undefined *)((int)this - 0xaa8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec8e20 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec8e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x890) = 0;
  *(undefined4 *)((int)this + 0x894) = 0;
  *(undefined4 *)((int)this + 0x898) = 0x2c;
  uVar1 = F_00ebb510((undefined *)((int)this + 4) GEN_EDX_ARG,0x2c,0);
  *(uint *)((int)this + 0x890) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8d0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) = (*(undefined * PTR32 (*)[3])REFP(0x115d8c0));
  return (uint)this;
}

/* ref: FUN_00ec8ec0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec8ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca7b0((undefined *)((int)this - 0x89c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec8ed0 */
GEN_FRAME uint GEN_THISCALL F_00ec8ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec8ef0 */
GEN_FRAME uint GEN_STDCALL F_00ec8ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec8f30 */
GEN_FRAME uint GEN_THISCALL F_00ec8f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec8f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x894) < param_1) {
    uVar4 = F_00ebb510(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x890) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x88c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x88c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x890));
    }
    iVar1 = *(int *)((int)this + 0x894);
    iVar2 = *(int *)((int)this + 0x88c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x88c) = uVar4;
    *(uint *)((int)this + 0x894) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9020 */
GEN_FRAME uint GEN_THISCALL F_00ec9020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x890) == *(int *)((int)this + 0x894)) {
    F_00ec8f30(this GEN_EDX_FWD,*(int *)((int)this + 0x894) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88c) + *(int *)((int)this + 0x890) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x890) = *(int *)((int)this + 0x890) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec90b0 */
GEN_FRAME uint GEN_THISCALL F_00ec90b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec90b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec9020((undefined *)((int)this - 0x898) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec90e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec90e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec90e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xbc0) = 0;
  *(undefined4 *)((int)this + 0xbc4) = 0;
  *(undefined4 *)((int)this + 0xbc8) = 0x3d;
  uVar1 = F_00ebb5b0((undefined *)((int)this + 4) GEN_EDX_ARG,0x3d,0);
  *(uint *)((int)this + 0xbc0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) = (*(undefined * PTR32 (*)[3])REFP(0x115d8d8));
  return (uint)this;
}

/* ref: FUN_00ec9180 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca7f0((undefined *)((int)this - 0xbcc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec9190 */
GEN_FRAME uint GEN_THISCALL F_00ec9190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec91b0 */
GEN_FRAME uint GEN_STDCALL F_00ec91b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec91b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec91f0 */
GEN_FRAME uint GEN_THISCALL F_00ec91f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec91f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0xbc4) < param_1) {
    uVar4 = F_00ebb5b0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0xbc0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0xbbc) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0xbbc) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xbc0));
    }
    iVar1 = *(int *)((int)this + 0xbc4);
    iVar2 = *(int *)((int)this + 0xbbc);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0xbbc) = uVar4;
    *(uint *)((int)this + 0xbc4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec92e0 */
GEN_FRAME uint GEN_THISCALL F_00ec92e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xbc0) == *(int *)((int)this + 0xbc4)) {
    F_00ec91f0(this GEN_EDX_FWD,*(int *)((int)this + 0xbc4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbbc) + *(int *)((int)this + 0xbc0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0xbc0) = *(int *)((int)this + 0xbc0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9370 */
GEN_FRAME uint GEN_THISCALL F_00ec9370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec92e0((undefined *)((int)this - 0xbc8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec93a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec93a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec93a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0xf;
  uVar1 = F_00ebb650((undefined *)((int)this + 4) GEN_EDX_ARG,0xf,0);
  *(uint *)((int)this + 800) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) = (*(undefined * PTR32 (*)[3])REFP(0x115d8f0));
  return (uint)this;
}

/* ref: FUN_00ec9440 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca830((undefined *)((int)this - 0x32c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec9450 */
GEN_FRAME uint GEN_THISCALL F_00ec9450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec9470 */
GEN_FRAME uint GEN_STDCALL F_00ec9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec94b0 */
GEN_FRAME uint GEN_THISCALL F_00ec94b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec94b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x324) < param_1) {
    uVar4 = F_00ebb650(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 800) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x31c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x31c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 800));
    }
    iVar1 = *(int *)((int)this + 0x324);
    iVar2 = *(int *)((int)this + 0x31c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x31c) = uVar4;
    *(uint *)((int)this + 0x324) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec95a0 */
GEN_FRAME uint GEN_THISCALL F_00ec95a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 800) == *(int *)((int)this + 0x324)) {
    F_00ec94b0(this GEN_EDX_FWD,*(int *)((int)this + 0x324) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x31c) + *(int *)((int)this + 800) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 800) = *(int *)((int)this + 800) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9630 */
GEN_FRAME uint GEN_THISCALL F_00ec9630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec95a0((undefined *)((int)this - 0x328) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec9660 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0x12;
  uVar1 = F_00ebb6f0((undefined *)((int)this + 8) GEN_EDX_ARG,0x12,0);
  *(uint *)((int)this + 0x294) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  return (uint)this;
}

/* ref: FUN_00ec96b0 */
GEN_FRAME uint GEN_THISCALL F_00ec96b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec96b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x28c) + param_2 * 4;
}

/* ref: FUN_00ec96f0 */
GEN_FRAME uint GEN_STDCALL F_00ec96f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec96f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf2 */
GEN_FRAME uint GEN_THISCALL F_00ec9710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x298);
  if (*(int *)((int)this + 0x298) != 0) {
    return *(uint *)((int)this + 0x294);
  }
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ec9740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x298) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x298));
  }
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ec97a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec97a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x298) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x298));
  }
  return 0;
}

/* ref: FUN_00ec9800 */
GEN_FRAME uint GEN_THISCALL F_00ec9800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0x294) < param_1) {
    puVar4 = (undefined4 *)F_00ebb6f0(this GEN_EDX_FWD,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0x290) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x290));
    }
    iVar1 = *(int *)((int)this + 0x28c);
    iVar2 = *(int *)((int)this + 0x294);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 - 8) = iVar2;
    *(undefined4 *)(iVar1 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 - 1) * -0x10 - 0x20;
    *(undefined4 * PTR32 *)((int)this + 0x28c) = puVar4;
    *(uint *)((int)this + 0x294) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec98a0 */
GEN_FRAME uint GEN_THISCALL F_00ec98a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec98a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x290) == *(int *)((int)this + 0x294)) {
    F_00ec9800(this GEN_EDX_FWD,*(int *)((int)this + 0x294) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + *(int *)((int)this + 0x290) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec98f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ec98f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec98f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf1 */
GEN_FRAME uint GEN_THISCALL F_00ec9910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x298) == *(int *)((int)this + 0x29c)) {
    F_00ec9800((undefined *)((int)this + 8) GEN_EDX_FWD,*(int *)((int)this + 0x29c) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + *(int *)((int)this + 0x298) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x298) = *(int *)((int)this + 0x298) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9960 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x9b0) = 0;
  *(undefined4 *)((int)this + 0x9b4) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0x32;
  uVar1 = F_00ebb790((undefined *)((int)this + 4) GEN_EDX_ARG,0x32,0);
  *(uint *)((int)this + 0x9b0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d930));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) = (*(undefined * PTR32 (*)[3])REFP(0x115d920));
  return (uint)this;
}

/* ref: FUN_00ec9a00 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca8a0((undefined *)((int)this - 0x9bc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec9a10 */
GEN_FRAME uint GEN_THISCALL F_00ec9a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00ec9a30 */
GEN_FRAME uint GEN_STDCALL F_00ec9a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9a30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00ec9a70 */
GEN_FRAME uint GEN_THISCALL F_00ec9a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x9b4) < param_1) {
    uVar4 = F_00ebb790(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x9b0) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x9ac) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x9ac) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x9b0));
    }
    iVar1 = *(int *)((int)this + 0x9b4);
    iVar2 = *(int *)((int)this + 0x9ac);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x9ac) = uVar4;
    *(uint *)((int)this + 0x9b4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9b60 */
GEN_FRAME uint GEN_THISCALL F_00ec9b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x9b0) == *(int *)((int)this + 0x9b4)) {
    F_00ec9a70(this GEN_EDX_FWD,*(int *)((int)this + 0x9b4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x9ac) + *(int *)((int)this + 0x9b0) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x9b0) = *(int *)((int)this + 0x9b0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9bf0 */
GEN_FRAME uint GEN_THISCALL F_00ec9bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec9b60((undefined *)((int)this - 0x9b8) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: FUN_00ec9c20 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0x25;
  uVar1 = F_00ebb830((undefined *)((int)this + 8) GEN_EDX_ARG,0x25,0);
  *(uint *)((int)this + 0x4f4) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  return (uint)this;
}

/* ref: FUN_00ec9c70 */
GEN_FRAME uint GEN_THISCALL F_00ec9c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x4ec) + param_2 * 4;
}

/* ref: FUN_00ec9cb0 */
GEN_FRAME uint GEN_STDCALL F_00ec9cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf2 */
GEN_FRAME uint GEN_THISCALL F_00ec9cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x4f8);
  if (*(int *)((int)this + 0x4f8) != 0) {
    return *(uint *)((int)this + 0x4f4);
  }
  return 0;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ec9d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x4f8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x4f4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x4f4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x4f8));
  }
  return 0;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ec9d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x4f8) != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x4f4) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x4f4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x4f8));
  }
  return 0;
}

/* ref: FUN_00ec9dc0 */
GEN_FRAME uint GEN_THISCALL F_00ec9dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  if (*(uint *)((int)this + 0x4f4) < param_1) {
    puVar4 = (undefined4 *)F_00ebb830(this GEN_EDX_FWD,param_1,0);
    uVar5 = 0;
    puVar6 = puVar4;
    if (*(int *)((int)this + 0x4f0) != 0) {
      do {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4ec) + uVar5 * 4)));
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < *(uint *)((int)this + 0x4f0));
    }
    iVar1 = *(int *)((int)this + 0x4ec);
    iVar2 = *(int *)((int)this + 0x4f4);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 - 8) = iVar2;
    *(undefined4 *)(iVar1 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 - 1) * -0x10 - 0x20;
    *(undefined4 * PTR32 *)((int)this + 0x4ec) = puVar4;
    *(uint *)((int)this + 0x4f4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9e60 */
GEN_FRAME uint GEN_THISCALL F_00ec9e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x4f0) == *(int *)((int)this + 0x4f4)) {
    F_00ec9dc0(this GEN_EDX_FWD,*(int *)((int)this + 0x4f4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4ec) + *(int *)((int)this + 0x4f0) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x4f0) = *(int *)((int)this + 0x4f0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9eb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ec9eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf1 */
GEN_FRAME uint GEN_THISCALL F_00ec9ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x4f8) == *(int *)((int)this + 0x4fc)) {
    F_00ec9dc0((undefined *)((int)this + 8) GEN_EDX_FWD,*(int *)((int)this + 0x4fc) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4f4) + *(int *)((int)this + 0x4f8) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x4f8) = *(int *)((int)this + 0x4f8) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9f20 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xec9f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x1970) = 0;
  *(undefined4 *)((int)this + 0x1974) = 0;
  *(undefined4 *)((int)this + 0x1978) = 0x86;
  uVar1 = F_00ebb8d0((undefined *)((int)this + 4) GEN_EDX_ARG,0x86,0);
  *(uint *)((int)this + 0x1970) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x197c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d960));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x197c) = (*(undefined * PTR32 (*)[3])REFP(0x115d950));
  return (uint)this;
}

/* ref: FUN_00ec9fc0 */
GEN_NOFRAME uint GEN_THISCALL F_00ec9fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca910((undefined *)((int)this - 0x197c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00ec9fd0 */
GEN_FRAME uint GEN_THISCALL F_00ec9fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xec9fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this - 8);
  if (*(int *)((int)this - 8) != 0) {
    return *(uint *)((int)this - 0xc);
  }
  return 0;
}

/* ref: FUN_00eca000 */
GEN_FRAME uint GEN_STDCALL F_00eca000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    param_1[1] = *(undefined4 *)(param_2 + 4);
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[3] = *(undefined4 *)(param_2 + 0xc);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00eca040 */
GEN_FRAME uint GEN_THISCALL F_00eca040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  if (*(uint *)((int)this + 0x1974) < param_1) {
    uVar4 = F_00ebb8d0(this GEN_EDX_FWD,param_1,0);
    uVar6 = 0;
    if (*(int *)((int)this + 0x1970) != 0) {
      puVar7 = (undefined4 *)(uVar4 + 0x10);
      do {
        iVar1 = *(int *)((int)this + 0x196c) + (-0x10 - uVar4);
        if (puVar7 != (undefined4 *)0x10) {
          puVar7[-4] = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
          puVar7[-3] = *(undefined4 *)((int)puVar7 + iVar1 + 4);
          puVar7[-2] = *(undefined4 *)((int)puVar7 + iVar1 + 8);
          puVar7[-1] = *(undefined4 *)((int)puVar7 + iVar1 + 0xc);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
          *puVar7 = *(undefined4 *)((int)puVar7 + iVar1 + 0x10);
        }
        puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 0x196c) + (-0x10 - uVar4))));
        ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x1970));
    }
    iVar1 = *(int *)((int)this + 0x1974);
    iVar2 = *(int *)((int)this + 0x196c);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 - 8) = iVar1;
    *(undefined4 *)(iVar2 - 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 - 0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 - 1) * -0x20 - 0x30;
    *(uint *)((int)this + 0x196c) = uVar4;
    *(uint *)((int)this + 0x1974) = param_1;
  }
  return param_1;
}

/* ref: FUN_00eca130 */
GEN_FRAME uint GEN_THISCALL F_00eca130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x1970) == *(int *)((int)this + 0x1974)) {
    F_00eca040(this GEN_EDX_FWD,*(int *)((int)this + 0x1974) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x196c) + *(int *)((int)this + 0x1970) * 0x14)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
  }
  *(int *)((int)this + 0x1970) = *(int *)((int)this + 0x1970) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00eca1c0 */
GEN_FRAME uint GEN_THISCALL F_00eca1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00eca130((undefined *)((int)this - 0x1978) GEN_EDX_FWD,param_1);
  return *(int *)((int)this - 0xc) - 0x14 + *(int *)((int)this - 8) * 0x14;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca260 */
GEN_FRAME uint GEN_THISCALL F_00eca260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca2a0 */
GEN_FRAME uint GEN_THISCALL F_00eca2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca2e0 */
GEN_FRAME uint GEN_THISCALL F_00eca2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca320 */
GEN_FRAME uint GEN_THISCALL F_00eca320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca360 */
GEN_FRAME uint GEN_THISCALL F_00eca360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x23c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca3a0 */
GEN_FRAME uint GEN_THISCALL F_00eca3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca3d0 */
GEN_FRAME uint GEN_THISCALL F_00eca3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca410 */
GEN_FRAME uint GEN_THISCALL F_00eca410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca450 */
GEN_FRAME uint GEN_THISCALL F_00eca450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DB_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca4c0 */
GEN_FRAME uint GEN_THISCALL F_00eca4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BA_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x35c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BN_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5cc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_ME_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x251c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_M_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BE_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BC_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_O_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BG_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_CH_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BH_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DH_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_CM_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DN_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_P_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DC_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_IG_WorkDefinitions_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eca910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x197c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eca950 */
GEN_FRAME unsigned int GEN_THISCALL F_00eca950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0xb5);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00eca950(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 0x18 GEN_EDX_ARG);
    F_0042c880(piVar3 + 3 GEN_EDX_ARG);
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xb5);
  }
  return;
}

/* ref: FUN_00eca9b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00eca9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeca9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x81);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00eca9b0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    piVar3[0x1a] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    F_00ea7c20(piVar3 + 0x1a GEN_EDX_ARG);
    F_0042c880(piVar3 + 4 GEN_EDX_ARG);
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x81);
  }
  return;
}

/* ref: FUN_00ecaa10 */
GEN_FRAME unsigned int GEN_STDCALL F_00ecaa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecaa10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_00ecaa40 */
GEN_NOFRAME uint GEN_THISCALL F_00ecaa40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xecaa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,0);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf7 */
GEN_FRAME uint GEN_THISCALL F_00ecaa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xecaa80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d964),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf6 */
GEN_FRAME uint GEN_THISCALL F_00ecab00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xecab00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d968),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ecab80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xecab80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d96c),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ecac00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xecac00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eb6650(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d970),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec1920(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ecac80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
{
  GEN_ENTER(0xecac80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double param_7 = (double)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined2 * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  iVar1 = *(int *)(param_5 + 0x1c);
  uVar6 = 0;
  uVar4 = *(uint *)(param_5 + 0x18);
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar4 == 0)) && ((*(uint *)(param_5 + 0x14) & 0x2000) == 0))))
  {
    uVar4 = 6;
    iVar1 = 0;
  }
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar4)))) {
    (*(uint *)(gen_frame + 0x8)) = 0x24;
  }
  uVar5 = uVar4 - (*(uint *)(gen_frame + 0x8));
  iVar1 = (iVar1 - ((int)(*(uint *)(gen_frame + 0x8)) >> 0x1f)) - (uint)(uVar4 < (*(uint *)(gen_frame + 0x8)));
  uVar4 = *(uint *)(param_5 + 0x14);
  (*(uint *)(gen_frame + 0xc)) = 0;
  dVar8 = param_7;
  if (((uVar4 & 0x3000) == 0x2000) &&
     (bVar7 = GEN_ISNAN(param_7 * REFG(double, 0x1088108)) || GEN_ISNAN(param_7),
     bVar7 == (bVar7 || param_7 * REFG(double, 0x1088108) == param_7))) {
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(param_7) ^ REFG(ulonglong, 0x110e610));
    }
    if (REFG(double, 0x115d988) <= dVar8) {
      do {
        if (4999 < (*(uint *)(gen_frame + 0xc))) break;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 10;
        dVar8 = dVar8 / REFG(double, 0x115d980);
      } while ((!GEN_ISNAN(dVar8) && !GEN_ISNAN(REFG(double, 0x115d988))) && !(dVar8 < REFG(double, 0x115d988)));
    }
    if ((0.0 < dVar8) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00ecad92;
      while (9 < uVar5) {
LAB_00ecad92: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecadb8;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecadb8: ;
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(dVar8) ^ REFG(ulonglong, 0x110e610));
    }
  }
  (*(undefined1 *)(gen_frame + 0x80)) = 0x25;
  puVar2 = (undefined2 *)&(*(undefined1 *)(gen_frame + 0x81));
  if ((uVar4 & 0x20) != 0) {
    (*(undefined1 *)(gen_frame + 0x81)) = 0x2b;
    puVar2 = &(*(undefined2 *)(gen_frame + 0x82));
  }
  if ((uVar4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  uVar4 = uVar4 & 0x3000;
  *puVar2 = 0x2a2e;
  if (uVar4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar4 != 0x1000) * '\x02' + 'e';
  }
  *(char *)(puVar2 + 1) = cVar3;
  puVar11 = &(*(undefined1 *)(gen_frame + 0x80));
  *(undefined1 *)((int)puVar2 + 3) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  uVar10 = 0x6c;
  iVar1 = F_00c472af(puVar9,0x6c,puVar11,(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec13a0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return param_2;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf2 */
GEN_FRAME uint GEN_THISCALL F_00ecae80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
{
  GEN_ENTER(0xecae80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double param_7 = (double)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined2 * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  iVar1 = *(int *)(param_5 + 0x1c);
  uVar6 = 0;
  uVar4 = *(uint *)(param_5 + 0x18);
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar4 == 0)) && ((*(uint *)(param_5 + 0x14) & 0x2000) == 0))))
  {
    uVar4 = 6;
    iVar1 = 0;
  }
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar4)))) {
    (*(uint *)(gen_frame + 0x8)) = 0x24;
  }
  uVar5 = uVar4 - (*(uint *)(gen_frame + 0x8));
  iVar1 = (iVar1 - ((int)(*(uint *)(gen_frame + 0x8)) >> 0x1f)) - (uint)(uVar4 < (*(uint *)(gen_frame + 0x8)));
  uVar4 = *(uint *)(param_5 + 0x14);
  (*(uint *)(gen_frame + 0xc)) = 0;
  dVar8 = param_7;
  if ((uVar4 & 0x3000) == 0x2000) {
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(param_7) ^ REFG(ulonglong, 0x110e610));
    }
    if (REFG(double, 0x115d988) <= dVar8) {
      do {
        if (4999 < (*(uint *)(gen_frame + 0xc))) break;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 10;
        dVar8 = dVar8 / REFG(double, 0x115d980);
      } while ((!GEN_ISNAN(dVar8) && !GEN_ISNAN(REFG(double, 0x115d988))) && !(dVar8 < REFG(double, 0x115d988)));
    }
    if ((0.0 < dVar8) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00ecaf80;
      while (9 < uVar5) {
LAB_00ecaf80: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecafa6;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecafa6: ;
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(dVar8) ^ REFG(ulonglong, 0x110e610));
    }
  }
  (*(undefined1 *)(gen_frame + 0x80)) = 0x25;
  puVar2 = (undefined2 *)&(*(undefined1 *)(gen_frame + 0x81));
  if ((uVar4 & 0x20) != 0) {
    (*(undefined1 *)(gen_frame + 0x81)) = 0x2b;
    puVar2 = &(*(undefined2 *)(gen_frame + 0x82));
  }
  if ((uVar4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  uVar4 = uVar4 & 0x3000;
  *puVar2 = 0x2a2e;
  *(undefined1 *)(puVar2 + 1) = 0x4c;
  if (uVar4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar4 != 0x1000) * '\x02' + 'e';
  }
  *(char *)((int)puVar2 + 3) = cVar3;
  puVar11 = &(*(undefined1 *)(gen_frame + 0x80));
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  uVar10 = 0x6c;
  iVar1 = F_00c472af(puVar9,0x6c,puVar11,(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec13a0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return param_2;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf11 */
GEN_FRAME uint GEN_THISCALL F_00ecb0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  code * pcVar2;
  uint * puVar3;
  undefined4 _Var4;
  uint uVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * p_Var10;
  
  iVar1 = (*(int *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(uint * PTR32 *)&gen_args[7]);
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[8]);
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  if ((*(uint *)((*(int *)&gen_args[6]) + 0x14) & 0x4000) == 0) {
    puVar3 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) = 0;
    uVar8 = *puVar3;
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))) = uVar8;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_FWD,0);
    if (*(int *)(uVar8 + 4) != -1) {
      *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    p_Var10 = &(*(undefined4 *)(gen_frame + 0x24));
    uVar8 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x48)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar1 + 0x14),&(*(undefined4 *)(gen_frame + 0x28)));
    uVar8 = F_0105144a(((undefined1 *)(gen_frame + 0x48)),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),uVar8,p_Var10);
    (*(int *)((char *)&(_Var4))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28)))));
    if ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))) != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,0);
      iVar1 = *(int *)((*(int *)((char *)&(_Var4))) + 4);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *(int *)((*(int *)((char *)&(_Var4))) + 4) = iVar1 - 1;
      }
      iVar1 = *(int *)((*(int *)((char *)&(_Var4))) + 4);
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (*(int *)((char *)&(_Var4))))));
      if (puVar9 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar9)(puVar9 GEN_EDX_ARG,1);
      }
    }
    if ((((*(undefined1 * PTR32 *)(gen_frame + 0xc)) == ((undefined1 *)(gen_frame + 0x48))) || ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) != 0)) || (1 < uVar8)) {
      uVar8 = (*(uint *)(gen_frame + 0x1c));
    }
  }
  else {
    uVar8 = **(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))) = uVar8;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,0);
    if (*(int *)(uVar8 + 4) != -1) {
      *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    piVar7 = (int *)F_00ebe910(&(*(undefined4 *)(gen_frame + 0x28)));
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,0);
    iVar1 = *(int *)(uVar8 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(uVar8 + 4) = iVar1 - 1;
    }
    iVar1 = *(int *)(uVar8 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar8)));
    if (puVar9 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar9)(puVar9 GEN_EDX_ARG,1);
    }
    pcVar2 = *(gen_code32 *)(*piVar7 + 0x10);
    (*(uint *)(gen_frame + 0x40)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x3c)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 0)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 2)) << 0x10)));
    (*pcVar2)(piVar7,((undefined4 *)(gen_frame + 0x4c)));
    F_00e691f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x4c)),0,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x60))) {
      F_00406ad0(((undefined4 *)(gen_frame + 0x4c))[0]);
    }
    F_00a17030(&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,1,0);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x4c)));
    F_00e691f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x4c)),0,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x60))) {
      F_00406ad0(((undefined4 *)(gen_frame + 0x4c))[0]);
    }
    uVar5 = (*(uint *)(gen_frame + 0x40));
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
    if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
      puVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
    }
    uVar8 = F_00ec3360(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),2,puVar9);
    if (0xf < uVar5) {
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x2c)));
    }
  }
  bVar6 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar6 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x18)) = *(*(uint * PTR32 *)(gen_frame + 0x18)) | 1;
  }
  if ((int)uVar8 < 0) {
    *(*(uint * PTR32 *)(gen_frame + 0x18)) = *(*(uint * PTR32 *)(gen_frame + 0x18)) | 2;
  }
  else {
    *(bool *)(*(undefined4 *)(gen_frame + 0x10)) = uVar8 != 0;
  }
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14))[1] = (*(undefined4 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[2]);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)puVar9;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf10 */
GEN_FRAME uint GEN_THISCALL F_00ecb350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  undefined2 * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  char * pcVar8;
  
  puVar3 = (*(undefined2 * PTR32 *)&gen_args[8]);
  iVar2 = (*(int *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar1 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar6 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x10)) = uVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
  if (*(int *)(uVar6 + 4) != -1) {
    *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),&(*(char *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 - 1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar6)));
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG,1);
    }
  }
  pcVar8 = ((char *)(gen_frame + 0x19));
  if ((*(char *)(gen_frame + 0x18)) != '-') {
    pcVar8 = &(*(char *)(gen_frame + 0x18));
  }
  uVar6 = F_0105144a(pcVar8,&(*(char * PTR32 *)(gen_frame + 0x4)),uVar5,&(*(int *)(gen_frame + 0x8)));
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 1;
  }
  if ((((*(char * PTR32 *)(gen_frame + 0x4)) == pcVar8) || ((*(int *)(gen_frame + 0x8)) != 0)) || (0xffff < uVar6)) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 2;
  }
  else {
    if ((*(char *)(gen_frame + 0x18)) == '-') {
      uVar6 = -uVar6;
    }
    *puVar3 = (short)uVar6;
  }
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf9 */
GEN_FRAME uint GEN_THISCALL F_00ecb490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb490u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  char * pcVar8;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[8]);
  iVar2 = (*(int *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar1 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar6 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x10)) = uVar6;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
  if (*(int *)(uVar6 + 4) != -1) {
    *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),&(*(char *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 - 1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar6)));
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG,1);
    }
  }
  pcVar8 = ((char *)(gen_frame + 0x19));
  if ((*(char *)(gen_frame + 0x18)) != '-') {
    pcVar8 = &(*(char *)(gen_frame + 0x18));
  }
  uVar6 = F_0105144a(pcVar8,&(*(char * PTR32 *)(gen_frame + 0x4)),uVar5,&(*(int *)(gen_frame + 0x8)));
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 1;
  }
  if (((*(char * PTR32 *)(gen_frame + 0x4)) == pcVar8) || ((*(int *)(gen_frame + 0x8)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 2;
  }
  else {
    if ((*(char *)(gen_frame + 0x18)) == '-') {
      uVar6 = -uVar6;
    }
    *puVar3 = uVar6;
  }
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf8 */
GEN_FRAME uint GEN_THISCALL F_00ecb5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[8]);
  iVar2 = (*(int *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar1 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x10)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0x8));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = F_01051600(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 - 1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x4)) == ((undefined1 *)(gen_frame + 0x18))) || ((*(int *)(gen_frame + 0x8)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 2;
  }
  else {
    *puVar3 = uVar6;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf7 */
GEN_FRAME uint GEN_THISCALL F_00ecb6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  puVar3 = (*(uint * PTR32 *)&gen_args[8]);
  iVar2 = (*(int *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar1 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x10)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0x8));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = F_0105144a(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 - 1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x4)) == ((undefined1 *)(gen_frame + 0x18))) || ((*(int *)(gen_frame + 0x8)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 2;
  }
  else {
    *puVar3 = uVar6;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf6 */
GEN_FRAME uint GEN_THISCALL F_00ecb800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb800u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  ulonglong * puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  int * piVar8;
  
  puVar3 = (*(ulonglong * PTR32 *)&gen_args[8]);
  iVar2 = (*(int *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar1 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
  (*(int *)(gen_frame + 0x10)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0x10));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x8)));
  uVar7 = F_010516a5(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 - 1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar6 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x4)) == ((undefined1 *)(gen_frame + 0x18))) || ((*(int *)(gen_frame + 0x10)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 2;
  }
  else {
    *puVar3 = uVar7;
  }
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ecb930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecb930u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  ulonglong * puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  int * piVar8;
  
  puVar3 = (*(ulonglong * PTR32 *)&gen_args[8]);
  iVar2 = (*(int *)&gen_args[6]);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar1 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
  (*(int *)(gen_frame + 0x10)) = 0;
  uVar5 = *puVar1;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  piVar8 = &(*(int *)(gen_frame + 0x10));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x8)));
  uVar7 = F_01051782(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 - 1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar6 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar4 != 0) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x4)) == ((undefined1 *)(gen_frame + 0x18))) || ((*(int *)(gen_frame + 0x10)) != 0)) {
    *(*(uint * PTR32 *)(gen_frame + 0xc)) = *(*(uint * PTR32 *)(gen_frame + 0xc)) | 2;
  }
  else {
    *puVar3 = uVar7;
  }
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf1 */
GEN_FRAME uint GEN_THISCALL F_00ecba60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecba60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  puVar4 = (*(uint * PTR32 *)&gen_args[8]);
  puVar3 = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar1 = *(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar7 = *puVar1;
  (*(uint *)(gen_frame + 0x10)) = uVar7;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_FWD,0);
  if (*(int *)(uVar7 + 4) != -1) {
    *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar6 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),0x800,&(*(uint *)(gen_frame + 0x10)));
  uVar7 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
    iVar2 = *(int *)(uVar7 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar7 + 4) = iVar2 - 1;
    }
    iVar2 = *(int *)(uVar7 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar7)));
    if (puVar8 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar8)(puVar8 GEN_EDX_ARG,1);
    }
  }
  uVar7 = F_0105144a(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),uVar6,&(*(int *)(gen_frame + 0xc)));
  bVar5 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar5 != 0) {
    *puVar3 = *puVar3 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x8)) == ((undefined1 *)(gen_frame + 0x18))) || ((*(int *)(gen_frame + 0xc)) != 0)) {
    *puVar3 = *puVar3 | 2;
  }
  else {
    *puVar4 = uVar7;
  }
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecbb90 */
GEN_FRAME uint F_00ecbb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xecbb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  byte * pbVar2;
  undefined4 uVar3;
  char * PTR32 * PTR32 * pppcVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  char * PTR32 * PTR32 * PTR32 * ppppcVar9;
  undefined * plVar10;
  int * piVar11;
  char * PTR32 * PTR32 * PTR32 * ppppcVar12;
  int iVar13;
  undefined4 * puVar14;
  undefined4 _Var15;
  byte * pbVar16;
  byte * pbVar17;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(byte * PTR32 *)(gen_frame + 0x10)) = param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    uVar6 = F_00ec1ff0(param_1,param_2,param_3,param_4,param_5,param_6);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return uVar6;
  }
  piVar11 = ((int *)GEN_TOP(**(uint * PTR32 *)(param_5 + 0x30)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar11;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  if (piVar11[1] != -1) {
    piVar11[1] = piVar11[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  piVar7 = (int *)F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0x14)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar7;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,0);
  iVar13 = piVar11[1];
  if ((iVar13 != 0) && (iVar13 != -1)) {
    piVar11[1] = iVar13 - 1;
  }
  iVar13 = piVar11[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  puVar14 = ((undefined4 *)GEN_TOP((~-(uint)(iVar13 != 0) & (uint)piVar11)));
  if (puVar14 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar14)(puVar14 GEN_EDX_ARG,1);
  }
  piVar11 = (*(int * PTR32 *)(gen_frame + 0x14));
  ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30)));
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x10));
  (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x10));
  (*(char *)(gen_frame + 0x27)) = '\0';
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 == 0) {
    bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
    if (bVar5 == 0x2b) {
      *pbVar17 = 0x2b;
    }
    else {
      bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
      if (bVar5 != 0x2d) goto LAB_00ecbca9;
      *pbVar17 = 0x2d;
    }
    (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar17 + 1;
    F_00ebbb10(param_3 GEN_EDX_ARG);
  }
LAB_00ecbca9: ;
  (*(char *)(gen_frame + 0x2f)) = '\0';
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = 0;
  ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30))[0];
  if ((*(uint *)(gen_frame + 0x44)) < 0x10) {
    ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30));
  }
  if (*(char *)ppppcVar12 == '\x7f') {
LAB_00ecbeee: ;
    bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
    if (bVar5 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_00ecbf34: ;
            *param_3 = 0;
          }
          else {
            if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
              uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecbf34;
            *(char *)((int)param_3 + 5) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((int)param_3 + 5) < '0') goto LAB_00ecbe8f;
        if ((char)param_3[1] == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_00ecbf7c: ;
            *param_3 = 0;
          }
          else {
            if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
              uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecbf7c;
            *(char *)((int)param_3 + 5) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        iVar13 = (*(int *)(gen_frame + 0x18));
        if ('9' < *(char *)((int)param_3 + 5)) goto LAB_00ecbe8f;
        if ((*(int *)(gen_frame + 0x18)) < 0x24) {
          bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
          if ((bVar5 != 0x30) || (iVar13 != 0)) {
            bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
            *(*(byte * PTR32 *)(gen_frame + 0x28)) = bVar5;
            iVar13 = iVar13 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
            (*(int *)(gen_frame + 0x18)) = iVar13;
          }
        }
        else {
          (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 1;
        }
        (*(char *)(gen_frame + 0x2f)) = '\x01';
        F_00ebbb10(param_3 GEN_EDX_ARG);
        bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
      } while (bVar5 == 0);
LAB_00ecbe98: ;
      if (iVar13 == 0) {
        *(*(byte * PTR32 *)(gen_frame + 0x28)) = 0x30;
        (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
      }
    }
  }
  else {
    ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30))[0];
    if ((*(uint *)(gen_frame + 0x44)) < 0x10) {
      ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30));
    }
    if (*(char *)ppppcVar12 < '\x01') goto LAB_00ecbeee;
    if ((*(int *)(gen_frame + 0x40)) == 0) {
      (*(byte *)(gen_frame + 0x26)) = 0;
    }
    else {
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 8))(piVar11 GEN_EDX_ARG);
      (*(byte *)(gen_frame + 0x26)) = (byte)uVar6;
    }
    pppcVar4 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
    uVar6 = 0xf;
    (*(uint *)(gen_frame + 0x60)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x5c)) = 1;
    (*(undefined2 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] + 0)) = 0;
    ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar4 & 0xffff0000);
    iVar13 = 0;
    bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
    if (bVar5 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_00ecbd56: ;
            *param_3 = 0;
          }
          else {
            if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
              uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar8 = (uint)**(byte * PTR32 *)piVar11[8];
            }
            if (uVar8 == 0xffffffff) goto LAB_00ecbd56;
            *(char *)((int)param_3 + 5) = (char)uVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((*(char *)((int)param_3 + 5) < '0') ||
           (bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG), '9' < (char)bVar5)) {
          ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if (uVar6 < 0x10) {
            ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          if (((*(char *)((int)ppppcVar12 + iVar13) == '\0') || ((*(byte *)(gen_frame + 0x26)) == 0)) ||
             (bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG), bVar5 != (*(byte *)(gen_frame + 0x26)))) break;
          F_00a17030(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,1,0);
          iVar13 = iVar13 + 1;
          uVar6 = (*(uint *)(gen_frame + 0x60));
        }
        else {
          (*(char *)(gen_frame + 0x2f)) = '\x01';
          if ((*(int *)(gen_frame + 0x18)) < 0x24) {
            bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
            if ((bVar5 != 0x30) || ((*(int *)(gen_frame + 0x18)) != 0)) {
              bVar5 = F_00ebbac0(param_3 GEN_EDX_ARG);
              *(*(byte * PTR32 *)(gen_frame + 0x28)) = bVar5;
              (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
              (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
            }
          }
          else {
            (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 1;
          }
          ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if (uVar6 < 0x10) {
            ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          if (*(char *)((int)ppppcVar12 + iVar13) != '\x7f') {
            ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
            if (uVar6 < 0x10) {
              ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
            }
            *(char *)((int)ppppcVar12 + iVar13) = *(char *)((int)ppppcVar12 + iVar13) + '\x01';
            uVar6 = (*(uint *)(gen_frame + 0x60));
          }
        }
        F_00ebbb10(param_3 GEN_EDX_ARG);
        bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
      } while (bVar5 == 0);
      if (iVar13 != 0) {
        ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
        if (uVar6 < 0x10) {
          ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
        }
        if (*(char *)((int)ppppcVar12 + iVar13) < '\x01') {
          (*(char *)(gen_frame + 0x27)) = '\x01';
        }
        else {
          iVar13 = iVar13 + 1;
        }
      }
    }
    ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30))[0];
    if ((*(uint *)(gen_frame + 0x44)) < 0x10) {
      ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30));
    }
    if ((*(char *)(gen_frame + 0x27)) == '\0') {
      while( true ) {
        if ((iVar13 == 0) || (cVar1 = *(char *)ppppcVar12, cVar1 == '\x7f')) goto LAB_00ecbe7e;
        iVar13 = iVar13 - 1;
        if (iVar13 != 0) break;
LAB_00ecbe5e: ;
        if (iVar13 == 0) {
          ppppcVar9 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if (uVar6 < 0x10) {
            ppppcVar9 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          if (cVar1 < *(char *)ppppcVar9) goto LAB_00ecbe7a;
        }
        if ('\0' < *(char *)((int)ppppcVar12 + 1)) {
          ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar12 + 1);
        }
      }
      ppppcVar9 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
      if (uVar6 < 0x10) {
        ppppcVar9 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
      }
      if (cVar1 == *(char *)((int)ppppcVar9 + iVar13)) goto LAB_00ecbe5e;
LAB_00ecbe7a: ;
      (*(char *)(gen_frame + 0x27)) = '\x01';
    }
LAB_00ecbe7e: ;
    if (0xf < uVar6) {
      F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0]);
    }
LAB_00ecbe8f: ;
    iVar13 = (*(int *)(gen_frame + 0x18));
    if ((*(char *)(gen_frame + 0x2f)) != '\0') goto LAB_00ecbe98;
  }
  uVar3 = (*(undefined4 *)(gen_frame + 0x20));
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_00ecbff4: ;
        *param_3 = 0;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
        }
        else {
          uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecbff4;
        *(char *)((int)param_3 + 5) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    cVar1 = *(char *)((int)param_3 + 5);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 4))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    if (cVar1 == (char)uVar6) {
      plVar10 = F_00c527f9();
      *(*(byte * PTR32 *)(gen_frame + 0x28)) = *(*(char * PTR32 *)((char *)(plVar10)));
      piVar11 = (int *)*param_3;
      (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
      if (piVar11 != (int *)0x0) {
        if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_00ecc066;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
  }
LAB_00ecc066: ;
  if ((*(int *)(gen_frame + 0x18)) == 0) {
    bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
    uVar3 = (*(undefined4 *)(gen_frame + 0x20));
    (*(int *)((char *)&(_Var15))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c)))));
    if (bVar5 == 0) {
      do {
        if ((char)param_3[1] == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_00ecc0ba: ;
            *param_3 = 0;
          }
          else {
            if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
              uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecc0ba;
            *(char *)((int)param_3 + 5) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((int)param_3 + 5) != '0') break;
        piVar11 = (int *)*param_3;
        (*(int *)((char *)&(_Var15))) = (*(int *)((char *)&(_Var15))) - 1;
        (*(char *)(gen_frame + 0x2f)) = '\x01';
        if (piVar11 == (int *)0x0) {
LAB_00ecc108: ;
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11 GEN_EDX_ARG);
          }
          else {
            *piVar7 = *piVar7 - 1;
            pbVar17 = *(byte * PTR32 *)piVar11[8];
            *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
            uVar6 = (uint)*pbVar17;
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc108;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
      } while (bVar5 == 0);
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = (*(int *)((char *)&(_Var15)));
    }
    if ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) < 0) {
      *(*(byte * PTR32 *)(gen_frame + 0x28)) = 0x30;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 1;
      (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
    }
  }
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
  iVar13 = (*(int *)(gen_frame + 0x18));
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_00ecc184: ;
          *param_3 = 0;
        }
        else {
          if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc184;
          *(char *)((int)param_3 + 5) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((int)param_3 + 5) < '0') goto LAB_00ecc28c;
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_00ecc1cc: ;
          *param_3 = 0;
        }
        else {
          if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc1cc;
          *(char *)((int)param_3 + 5) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ('9' < *(char *)((int)param_3 + 5)) goto LAB_00ecc28c;
      if (iVar13 < 0x24) {
        if ((char)param_3[1] == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_00ecc219: ;
            *param_3 = 0;
          }
          else {
            if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
              uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecc219;
            *(char *)((int)param_3 + 5) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        *(*(byte * PTR32 *)(gen_frame + 0x28)) = *(byte *)((int)param_3 + 5);
        (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
        iVar13 = iVar13 + 1;
      }
      piVar11 = (int *)*param_3;
      (*(char *)(gen_frame + 0x2f)) = '\x01';
      if (piVar11 == (int *)0x0) {
LAB_00ecc26d: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc26d;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
    } while (bVar5 == 0);
  }
  else {
LAB_00ecc28c: ;
    if ((*(char *)(gen_frame + 0x2f)) == '\0') goto LAB_00ecc6bc;
  }
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 != 0) goto LAB_00ecc6bc;
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_00ecc2dc: ;
      *param_3 = 0;
    }
    else {
      if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
      }
      else {
        uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
      }
      if (uVar6 == 0xffffffff) goto LAB_00ecc2dc;
      *(char *)((int)param_3 + 5) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(char *)((int)param_3 + 5) != 'e') {
    if ((char)param_3[1] == '\0') {
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_00ecc320: ;
        *param_3 = 0;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
        }
        else {
          uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc320;
        *(char *)((int)param_3 + 5) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) != 'E') goto LAB_00ecc6bc;
  }
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x28));
  *(*(byte * PTR32 *)(gen_frame + 0x28)) = 0x65;
  piVar11 = (int *)*param_3;
  pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
  (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar16;
  if (piVar11 == (int *)0x0) {
LAB_00ecc377: ;
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11 GEN_EDX_ARG);
    }
    else {
      *piVar7 = *piVar7 - 1;
      pbVar2 = *(byte * PTR32 *)piVar11[8];
      *(byte * PTR32 *)piVar11[8] = pbVar2 + 1;
      uVar6 = (uint)*pbVar2;
    }
    if (uVar6 == 0xffffffff) goto LAB_00ecc377;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  uVar3 = (*(undefined4 *)(gen_frame + 0x20));
  (*(char *)(gen_frame + 0x2f)) = '\0';
  (*(int *)(gen_frame + 0x18)) = 0;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_00ecc3d2: ;
        *param_3 = 0;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
        }
        else {
          uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc3d2;
        *(char *)((int)param_3 + 5) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) == '+') {
      *pbVar16 = 0x2b;
      piVar11 = (int *)*param_3;
      (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar17 + 2;
      if (piVar11 != (int *)0x0) {
        if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
LAB_00ecc48e: ;
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
LAB_00ecc495: ;
        if (uVar6 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_00ecc4aa;
        }
      }
    }
    else {
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_00ecc450: ;
          *param_3 = 0;
        }
        else {
          if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc450;
          *(char *)((int)param_3 + 5) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((int)param_3 + 5) != '-') goto LAB_00ecc4aa;
      *pbVar16 = 0x2d;
      piVar11 = (int *)*param_3;
      (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar17 + 2;
      if (piVar11 != (int *)0x0) {
        if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1))
        goto LAB_00ecc48e;
        *piVar7 = *piVar7 - 1;
        pbVar17 = *(byte * PTR32 *)piVar11[8];
        *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
        uVar6 = (uint)*pbVar17;
        goto LAB_00ecc495;
      }
    }
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = 0;
  }
LAB_00ecc4aa: ;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_00ecc4f4: ;
          *param_3 = 0;
        }
        else {
          if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc4f4;
          *(char *)((int)param_3 + 5) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((int)param_3 + 5) != '0') {
        if ((*(char *)(gen_frame + 0x2f)) == '\0') goto LAB_00ecc56d;
        break;
      }
      piVar11 = (int *)*param_3;
      (*(char *)(gen_frame + 0x2f)) = '\x01';
      if (piVar11 == (int *)0x0) {
LAB_00ecc541: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar17 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc541;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
    } while (bVar5 == 0);
    *(*(byte * PTR32 *)(gen_frame + 0x28)) = 0x30;
    (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
  }
LAB_00ecc56d: ;
  bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,uVar3);
  iVar13 = (*(int *)(gen_frame + 0x18));
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x28));
  if (bVar5 == 0) {
    do {
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_00ecc5b9: ;
          *param_3 = 0;
        }
        else {
          if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc5b9;
          *(char *)((int)param_3 + 5) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((int)param_3 + 5) < '0') break;
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_00ecc601: ;
          *param_3 = 0;
        }
        else {
          if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
          }
          else {
            uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc601;
          *(char *)((int)param_3 + 5) = (char)uVar6;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ('9' < *(char *)((int)param_3 + 5)) break;
      if (iVar13 < 8) {
        if ((char)param_3[1] == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_00ecc64e: ;
            *param_3 = 0;
          }
          else {
            if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
              uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11 GEN_EDX_ARG);
            }
            else {
              uVar6 = (uint)**(byte * PTR32 *)piVar11[8];
            }
            if (uVar6 == 0xffffffff) goto LAB_00ecc64e;
            *(char *)((int)param_3 + 5) = (char)uVar6;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        *pbVar17 = *(byte *)((int)param_3 + 5);
        pbVar17 = pbVar17 + 1;
        iVar13 = iVar13 + 1;
      }
      piVar11 = (int *)*param_3;
      (*(char *)(gen_frame + 0x2f)) = '\x01';
      if (piVar11 == (int *)0x0) {
LAB_00ecc69c: ;
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11 GEN_EDX_ARG);
        }
        else {
          *piVar7 = *piVar7 - 1;
          pbVar16 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar16 + 1;
          uVar6 = (uint)*pbVar16;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc69c;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
    } while (bVar5 == 0);
    (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar17;
  }
LAB_00ecc6bc: ;
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x10));
  if (((*(char *)(gen_frame + 0x27)) == '\0') && ((*(char *)(gen_frame + 0x2f)) != '\0')) {
    pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x28));
  }
  *pbVar17 = 0;
  if (0xf < (*(uint *)(gen_frame + 0x44))) {
    F_00406ad0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30))[0]);
  }
  uVar6 = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c)))));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00ecc700 */
GEN_FRAME uint GEN_THISCALL F_00ecc700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecc700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b123c0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ecc720 */
GEN_FRAME uint GEN_THISCALL F_00ecc720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xecc720u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0xb5))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00eb1600(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0xb5) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0xb5) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0xb5) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x2d];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x2d))) = (char)piVar3[0x2d];
      *(char *)(piVar3 + 0x2d) = (char)iVar1;
      goto LAB_00ecc85f;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0xb5) == '\0') {
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
    if (*(char *)((int)piVar7 + 0xb5) == '\0') {
      piVar4 = (int *)F_00eace00(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0xb5) == '\0') {
      uVar5 = F_00ead920(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00ecc85f: ;
  if ((char)piVar3[0x2d] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x2d] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x2d] == '\0') {
            *(undefined1 *)(piVar6 + 0x2d) = 1;
            *(undefined1 *)(piVar4 + 0x2d) = 0;
            F_00eb2c30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0xb5) == '\0') {
            if ((*(char *)(*piVar6 + 0xb4) != '\x01') || (*(char *)(piVar6[2] + 0xb4) != '\x01')) {
              if (*(char *)(piVar6[2] + 0xb4) == '\x01') {
                *(undefined1 *)(*piVar6 + 0xb4) = 1;
                *(undefined1 *)(piVar6 + 0x2d) = 0;
                F_00eb2c90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x2d) = (char)piVar4[0x2d];
              *(undefined1 *)(piVar4 + 0x2d) = 1;
              *(undefined1 *)(piVar6[2] + 0xb4) = 1;
              F_00eb2c30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00ecc96c: ;
            *(undefined1 *)(piVar6 + 0x2d) = 0;
          }
        }
        else {
          if ((char)piVar6[0x2d] == '\0') {
            *(undefined1 *)(piVar6 + 0x2d) = 1;
            *(undefined1 *)(piVar4 + 0x2d) = 0;
            F_00eb2c90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0xb5) == '\0') {
            if ((*(char *)(piVar6[2] + 0xb4) == '\x01') && (*(char *)(*piVar6 + 0xb4) == '\x01'))
            goto LAB_00ecc96c;
            if (*(char *)(*piVar6 + 0xb4) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0xb4) = 1;
              *(undefined1 *)(piVar6 + 0x2d) = 0;
              F_00eb2c30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x2d) = (char)piVar4[0x2d];
            *(undefined1 *)(piVar4 + 0x2d) = 1;
            *(undefined1 *)(*piVar6 + 0xb4) = 1;
            F_00eb2c90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x2d) = 1;
  }
  F_0042c880(piVar3 + 0x18 GEN_EDX_ARG);
  F_0042c880(piVar3 + 3 GEN_EDX_ARG);
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecca10 */
GEN_FRAME uint GEN_THISCALL F_00ecca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xecca10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *(uint * PTR32 *)((int)this + 4);
  if (*(char *)((int)param_1 + 0x81) == '\0') {
    puVar1 = (uint *)F_00ebe3a0(this GEN_EDX_FWD,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(param_1 + 0x20);
    local_8 = puVar3;
    if (*(char *)((int)puVar3 + 0x81) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00ecca10(this GEN_EDX_ARG,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00ecca10(this GEN_EDX_ARG,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00ecca80 */
GEN_FRAME uint GEN_THISCALL F_00ecca80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xecca80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(undefined4 *)&gen_args[2]) = CONCAT13((undefined1)(*(undefined4 *)&gen_args[2]),(undefined3)(*(undefined4 *)&gen_args[2]));
  F_00ec0950((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00eccab0 */
GEN_FRAME uint F_00eccab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeccab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ec39e0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eccac0 */
GEN_FRAME uint GEN_THISCALL F_00eccac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeccac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ebe4b0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_00eccaf0 */
GEN_FRAME uint GEN_THISCALL F_00eccaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeccaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar5 + 0xb5);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00 GEN_EDX_FWD,puVar5 + 3);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 3 GEN_EDX_ARG,this_00);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0xb5);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00eaeac0(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880((undefined *)((*(int *)&gen_args[2]) + 0x60) GEN_EDX_ARG);
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00eccc00 */
GEN_FRAME uint GEN_THISCALL F_00eccc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeccc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0x10);
  cVar1 = *(char *)((int)puVar5 + 0x81);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00 GEN_EDX_FWD,puVar5 + 4);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 4 GEN_EDX_ARG,this_00);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0x81);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00eaeb50(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 4 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *(undefined4 *)((*(int *)&gen_args[2]) + 0x68) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((*(int *)&gen_args[2]) + 0x68) GEN_EDX_ARG);
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00eccd10 */
GEN_FRAME uint GEN_THISCALL F_00eccd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeccd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_1);
      F_0042cbc0(puVar1 + 0x18 GEN_EDX_ARG,param_1 + 0x54);
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00eccd90 */
GEN_FRAME uint F_00eccd90(unsigned int gen_a0)
{
  GEN_ENTER(0xeccd90u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  F_00ec3cc0(param_1 GEN_EDX_ARG,10);
  F_00a16e10(param_1 GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00eccdb0 */
GEN_FRAME uint GEN_THISCALL F_00eccdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeccdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = *(int *)((int)this + 0x10) + (int)pvVar3;
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (iVar1 != 0) {
    uVar2 = F_00ebe720(this GEN_EDX_FWD,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_00ebe720(this GEN_EDX_ARG,0,1,param_1);
  return uVar2;
}

/* ref: FUN_00ecce00 */
GEN_FRAME uint GEN_THISCALL F_00ecce00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short sVar1;
  short * psVar2;
  
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  F_00ebe820(this GEN_EDX_FWD,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (uint)this;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf7 */
GEN_FRAME uint GEN_THISCALL F_00ecce50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xecce50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d964),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf6 */
GEN_FRAME uint GEN_THISCALL F_00ecced0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xecced0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d968),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf5 */
GEN_FRAME uint GEN_THISCALL F_00eccf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xeccf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d96c),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf4 */
GEN_FRAME uint GEN_THISCALL F_00eccfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xeccfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * _Format;
  int iVar1;
  char * _DstBuf;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  _Format = (char *)F_00eafae0(this,((undefined1 *)(gen_frame + 0x40)),&REFG(undefined, 0x115d970),*(undefined4 *)(param_4 + 0x14));
  _DstBuf = ((char *)(gen_frame + 0x0));
  iVar1 = F_00c472af(_DstBuf,0x40,_Format,param_6,param_7);
  F_00ec4420(this,param_1,param_2,param_3,param_4,param_5,((char *)(gen_frame + 0x0)),iVar1,_DstBuf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ecd050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
{
  GEN_ENTER(0xecd050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double param_7 = (double)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined2 * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar4 = *(uint *)(param_5 + 0x18);
  iVar1 = *(int *)(param_5 + 0x1c);
  uVar6 = 0;
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar4 == 0)) && ((*(uint *)(param_5 + 0x14) & 0x2000) == 0))))
  {
    uVar4 = 6;
    iVar1 = 0;
  }
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar4)))) {
    (*(uint *)(gen_frame + 0x8)) = 0x24;
  }
  uVar5 = uVar4 - (*(uint *)(gen_frame + 0x8));
  iVar1 = (iVar1 - ((int)(*(uint *)(gen_frame + 0x8)) >> 0x1f)) - (uint)(uVar4 < (*(uint *)(gen_frame + 0x8)));
  uVar4 = *(uint *)(param_5 + 0x14);
  (*(uint *)(gen_frame + 0xc)) = 0;
  dVar8 = param_7;
  if (((uVar4 & 0x3000) == 0x2000) &&
     (bVar7 = GEN_ISNAN(param_7 * REFG(double, 0x1088108)) || GEN_ISNAN(param_7),
     bVar7 == (bVar7 || param_7 * REFG(double, 0x1088108) == param_7))) {
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(param_7) ^ REFG(ulonglong, 0x110e610));
    }
    if (REFG(double, 0x115d988) <= dVar8) {
      do {
        if (4999 < (*(uint *)(gen_frame + 0xc))) break;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 10;
        dVar8 = dVar8 / REFG(double, 0x115d980);
      } while ((!GEN_ISNAN(dVar8) && !GEN_ISNAN(REFG(double, 0x115d988))) && !(dVar8 < REFG(double, 0x115d988)));
    }
    uVar6 = 0;
    if ((0.0 < dVar8) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00ecd160;
      while (9 < uVar5) {
LAB_00ecd160: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecd186;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecd186: ;
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(dVar8) ^ REFG(ulonglong, 0x110e610));
    }
  }
  (*(undefined1 *)(gen_frame + 0x80)) = 0x25;
  puVar2 = (undefined2 *)&(*(undefined1 *)(gen_frame + 0x81));
  if ((uVar4 & 0x20) != 0) {
    (*(undefined1 *)(gen_frame + 0x81)) = 0x2b;
    puVar2 = &(*(undefined2 *)(gen_frame + 0x82));
  }
  if ((uVar4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  uVar4 = uVar4 & 0x3000;
  *puVar2 = 0x2a2e;
  if (uVar4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar4 != 0x1000) * '\x02' + 'e';
  }
  *(char *)(puVar2 + 1) = cVar3;
  puVar11 = &(*(undefined1 *)(gen_frame + 0x80));
  *(undefined1 *)((int)puVar2 + 3) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  uVar10 = 0x6c;
  iVar1 = F_00c472af(puVar9,0x6c,puVar11,(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec3ee0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return param_2;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf2 */
GEN_FRAME uint GEN_THISCALL F_00ecd250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
{
  GEN_ENTER(0xecd250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double param_7 = (double)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined2 * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar4 = *(uint *)(param_5 + 0x18);
  iVar1 = *(int *)(param_5 + 0x1c);
  uVar6 = 0;
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar4 == 0)) && ((*(uint *)(param_5 + 0x14) & 0x2000) == 0))))
  {
    uVar4 = 6;
    iVar1 = 0;
  }
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar4)))) {
    (*(uint *)(gen_frame + 0x8)) = 0x24;
  }
  uVar5 = uVar4 - (*(uint *)(gen_frame + 0x8));
  iVar1 = (iVar1 - ((int)(*(uint *)(gen_frame + 0x8)) >> 0x1f)) - (uint)(uVar4 < (*(uint *)(gen_frame + 0x8)));
  uVar4 = *(uint *)(param_5 + 0x14);
  (*(uint *)(gen_frame + 0xc)) = 0;
  dVar8 = param_7;
  if ((uVar4 & 0x3000) == 0x2000) {
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(param_7) ^ REFG(ulonglong, 0x110e610));
    }
    if (REFG(double, 0x115d988) <= dVar8) {
      do {
        if (4999 < (*(uint *)(gen_frame + 0xc))) break;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 10;
        dVar8 = dVar8 / REFG(double, 0x115d980);
      } while ((!GEN_ISNAN(dVar8) && !GEN_ISNAN(REFG(double, 0x115d988))) && !(dVar8 < REFG(double, 0x115d988)));
    }
    if ((0.0 < dVar8) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00ecd344;
      while (9 < uVar5) {
LAB_00ecd344: ;
        do {
          if ((!(dVar8 <= REFG(double, 0x115d978))) || (4999 < uVar6)) goto LAB_00ecd36a;
          bVar7 = 9 < uVar5;
          uVar5 = uVar5 - 10;
          iVar1 = iVar1 - 1 + (uint)bVar7;
          uVar6 = uVar6 + 10;
          dVar8 = dVar8 * REFG(double, 0x115d980);
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00ecd36a: ;
    if (param_7 < 0.0) {
      dVar8 = gen_bits2d((ulonglong)gen_d2bits(dVar8) ^ REFG(ulonglong, 0x110e610));
    }
  }
  (*(undefined1 *)(gen_frame + 0x80)) = 0x25;
  puVar2 = (undefined2 *)&(*(undefined1 *)(gen_frame + 0x81));
  if ((uVar4 & 0x20) != 0) {
    (*(undefined1 *)(gen_frame + 0x81)) = 0x2b;
    puVar2 = &(*(undefined2 *)(gen_frame + 0x82));
  }
  if ((uVar4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  uVar4 = uVar4 & 0x3000;
  *puVar2 = 0x2a2e;
  *(undefined1 *)(puVar2 + 1) = 0x4c;
  if (uVar4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar4 != 0x1000) * '\x02' + 'e';
  }
  *(char *)((int)puVar2 + 3) = cVar3;
  puVar11 = &(*(undefined1 *)(gen_frame + 0x80));
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  uVar10 = 0x6c;
  iVar1 = F_00c472af(puVar9,0x6c,puVar11,(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec3ee0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9,uVar10,puVar11);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return param_2;
}

/* ref: FUN_00ecd4a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ecd4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xecd4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00eca950(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ecd4d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ecd4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xecd4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00eca9b0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ecd500 */
GEN_NOFRAME uint GEN_THISCALL F_00ecd500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xecd500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,0);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00ecd540 */
GEN_FRAME uint GEN_THISCALL F_00ecd540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xecd540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * this_00;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      F_00ea7d20(this_00 GEN_EDX_FWD,puVar2);
      this_00 = this_00 + 6;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar2 = this_00; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,0);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ecd5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecd5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  float * pfVar2;
  byte bVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  int * piVar7;
  
  pfVar2 = (*(float * PTR32 *)&gen_args[8]);
  puVar1 = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  piVar7 = &(*(int *)(gen_frame + 0x10));
  uVar4 = F_00ecbb90((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x1c)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[6]),&(*(float *)(gen_frame + 0x18)));
  fVar6 = F_010519a0(((undefined1 *)(gen_frame + 0x1c)),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),uVar4,piVar7);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  if ((*(float *)(gen_frame + 0x18)) != 0.0) {
    dVar5 = F_00c52a5e((double)fVar6,(int)gen_fl2bits((*(float *)(gen_frame + 0x18))) * 4);
    (*(float *)(gen_frame + 0x18)) = (float)dVar5;
    (*(float *)(gen_frame + 0x14)) = (float)dVar5;
  }
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar3 != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0xc)) == ((undefined1 *)(gen_frame + 0x1c))) || ((*(int *)(gen_frame + 0x10)) != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pfVar2 = (*(float *)(gen_frame + 0x14));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ecd6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecd6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  double * pdVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  
  pdVar2 = (*(double * PTR32 *)&gen_args[8]);
  puVar1 = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  piVar5 = &(*(int *)(gen_frame + 0x18));
  uVar4 = F_00ecbb90((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x1c)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[6]),&(*(int *)(gen_frame + 0x14)));
  (*(double *)(gen_frame + 0x8)) = F_010519e1(((undefined1 *)(gen_frame + 0x1c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),uVar4,piVar5);
  if ((*(int *)(gen_frame + 0x14)) != 0) {
    (*(double *)(gen_frame + 0x8)) = F_00c52a5e((*(double *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar3 != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x10)) == ((undefined1 *)(gen_frame + 0x1c))) || ((*(int *)(gen_frame + 0x18)) != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pdVar2 = (*(double *)(gen_frame + 0x8));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf2 */
GEN_FRAME uint GEN_THISCALL F_00ecd770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xecd770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  double * pdVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  
  pdVar2 = (*(double * PTR32 *)&gen_args[8]);
  puVar1 = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  piVar5 = &(*(int *)(gen_frame + 0x18));
  uVar4 = F_00ecbb90((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x1c)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[6]),&(*(int *)(gen_frame + 0x14)));
  (*(double *)(gen_frame + 0x8)) = F_01051a67(((undefined1 *)(gen_frame + 0x1c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),uVar4,piVar5);
  if ((*(int *)(gen_frame + 0x14)) != 0) {
    (*(double *)(gen_frame + 0x8)) = F_00c52a5e((*(double *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]));
  if (bVar3 != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if (((*(undefined1 * PTR32 *)(gen_frame + 0x10)) == ((undefined1 *)(gen_frame + 0x1c))) || ((*(int *)(gen_frame + 0x18)) != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *pdVar2 = (*(double *)(gen_frame + 0x8));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)&gen_args[3]);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecd840 */
GEN_FRAME uint GEN_THISCALL F_00ecd840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecd840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (7 < *(uint *)((int)this + 0x14)) {
      F_00406ad0(*(undefined4 *)this);
    }
    *(undefined4 *)((int)this + 0x14) = 7;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)this = 0;
    if ((uint)param_1[5] < 8) {
      F_00c46e20(this,param_1,param_1[4] * 2 + 2);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ecd8c0 */
GEN_FRAME uint GEN_THISCALL F_00ecd8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xecd8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00eca950(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xb5) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0xb5) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xb5);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xb5);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xb5);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xb5);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00ecc720(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ecd990 */
GEN_FRAME uint GEN_THISCALL F_00ecd990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xecd990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00eca9b0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x81) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x81) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x81);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x81);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x81);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x81);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00ec46d0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ecda60 */
GEN_FRAME unsigned int GEN_THISCALL F_00ecda60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecda60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 4);
  uVar7 = F_00ecca10(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x81) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x81);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x81);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x81);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x81)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: numpunct_G_std::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ecdaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecdaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  short sVar1;
  short * psVar2;
  short * psVar3;
  
  psVar2 = *(short * PTR32 *)((int)this + 0x10);
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  F_00ebe820(param_1 GEN_EDX_FWD,psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return (uint)param_1;
}

/* ref: numpunct_G_std::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ecdb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecdb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  short sVar1;
  short * psVar2;
  short * psVar3;
  
  psVar2 = *(short * PTR32 *)((int)this + 0x14);
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  F_00ebe820(param_1 GEN_EDX_FWD,psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return (uint)param_1;
}

/* ref: FUN_00ecdb90 */
GEN_FRAME uint GEN_THISCALL F_00ecdb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xecdb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[3]) + 3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    bVar3 = F_0042c7c0((undefined *)(piVar1[2] + 0xc) GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eaeac0(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[3]) + 3 GEN_EDX_ARG,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0xb5))) == '\0') {
          F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eb1600(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]) + 3), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0xb5))) == '\0') {
          F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec3580((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar4 = (undefined4 *)F_00eccaf0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecdd40 */
GEN_FRAME uint GEN_THISCALL F_00ecdd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xecdd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[3]) + 4;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 4);
    if (bVar3 != 0) {
      F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    bVar3 = F_0042c7c0((undefined *)(piVar1[2] + 0x10) GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]) + 4);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eaeb50(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[3]) + 4 GEN_EDX_ARG,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x81))) == '\0') {
          F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 4 GEN_EDX_ARG,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eacb60(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar3 = F_0042c7c0(this_00 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]) + 4), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x81))) == '\0') {
          F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar4 = (undefined4 *)F_00eccc00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: Component::ServerFramework::JsonParser::StringToken::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ecdef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecdef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this + 8 GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: Component::ServerFramework::JsonParser::SimpleJsonToken::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ecdf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecdf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this + 8 GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ecdf30 */
GEN_FRAME uint GEN_THISCALL F_00ecdf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecdf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,0);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf8 */
GEN_FRAME uint GEN_THISCALL F_00ecdf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xecdf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * PTR32 * ppuVar4;
  int * piVar5;
  undefined4 * PTR32 * PTR32 * pppuVar6;
  code * pcVar7;
  undefined4 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1c)) + 0)) = (undefined1)param_5;
  (*(undefined4 *)(gen_frame + 0x1c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1c)), 1, 3),(undefined1)param_5);
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))
              (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,(*(undefined4 *)(gen_frame + 0x1c)),(uint)(byte)param_6);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return param_1;
  }
  uVar1 = **(uint * PTR32 *)(param_4 + 0x30);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  if (*(int *)(uVar1 + 4) != -1) {
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  piVar5 = (int *)F_00ebe910(&(*(uint *)(gen_frame + 0x14)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  iVar9 = *(int *)(uVar1 + 4);
  if ((iVar9 != 0) && (iVar9 != -1)) {
    *(int *)(uVar1 + 4) = iVar9 - 1;
  }
  iVar9 = *(int *)(uVar1 + 4);
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar9 != 0) & (*(uint *)(gen_frame + 0x14)))));
  if (puVar8 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar8)(puVar8 GEN_EDX_ARG,1);
  }
  ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
  (*(uint *)(gen_frame + 0x50)) = 0xf;
  (*(uint *)(gen_frame + 0x4c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0] = (undefined4 * PTR32 *)((uint)ppuVar4 & 0xffffff00);
  if ((byte)param_6 == 0) {
    pcVar7 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x10);
  }
  else {
    pcVar7 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x14);
  }
  (*pcVar7)((*(int * PTR32 *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0x20)));
  F_00e45e40(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x20)));
  if (0xf < (*(uint *)(gen_frame + 0x34))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x20))[0]);
  }
  uVar1 = *(uint *)(param_4 + 0x20);
  if ((*(int *)(param_4 + 0x24) < 0) ||
     (((*(int *)(param_4 + 0x24) < 1 && (uVar1 == 0)) || (uVar1 <= (*(uint *)(gen_frame + 0x4c)))))) {
    iVar9 = 0;
  }
  else {
    iVar9 = uVar1 - (*(uint *)(gen_frame + 0x4c));
  }
  if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
    puVar8 = (undefined4 *)F_00eb7250(this,((undefined1 *)(gen_frame + 0x8)),param_2,param_3,(*(undefined4 *)(gen_frame + 0x1c)),iVar9);
    param_2 = *puVar8;
    param_3 = puVar8[1];
    iVar9 = 0;
  }
  pppuVar6 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0];
  if ((*(uint *)(gen_frame + 0x50)) < 0x10) {
    pppuVar6 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c));
  }
  puVar8 = (undefined4 *)F_00eb71e0(this,((undefined1 *)(gen_frame + 0x8)),param_2,param_3,pppuVar6,(*(uint *)(gen_frame + 0x4c)));
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  *(undefined4 *)(param_4 + 0x20) = 0;
  *(undefined4 *)(param_4 + 0x24) = 0;
  F_00eb7250(this,param_1,uVar2,uVar3,(*(undefined4 *)(gen_frame + 0x1c)),iVar9);
  if (0xf < (*(uint *)(gen_frame + 0x50))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return param_1;
}

/* ref: numpunct_D_std::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ece170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *(char * PTR32 *)((int)this + 8);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: numpunct_D_std::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ece1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *(char * PTR32 *)((int)this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: numpunct_D_std::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ece1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *(char * PTR32 *)((int)this + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d994));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9c4));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da24));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da54));
  *(undefined * PTR32 * PTR32 *)(this + 0x230) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da84));
  *(undefined * PTR32 * PTR32 *)(this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dab4));
  *(undefined * PTR32 * PTR32 *)(this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dae4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db14));
  *(undefined * PTR32 * PTR32 *)(this + 0x290) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db44));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db74));
  *(undefined * PTR32 * PTR32 *)(this + 0x2c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dba4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dbd4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xc4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 200 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc04));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc34));
  *(undefined * PTR32 * PTR32 *)(this + 0x200) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc64));
  *(undefined * PTR32 * PTR32 *)(this + 0xa70) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xe4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80(this + 0xe8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc94));
  *(undefined * PTR32 * PTR32 *)(this + 0x280) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dcc4));
  *(undefined * PTR32 * PTR32 *)(this + 0x400) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dcf4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd24));
  *(undefined * PTR32 * PTR32 *)(this + 0x670) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ece9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xece9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd54));
  *(undefined * PTR32 * PTR32 *)(this + 0x25c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd84));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecea70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115ddb4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecead0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dde4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eceb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeceb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de14));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eceb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeceb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de44));
  *(undefined * PTR32 * PTR32 *)(this + 0x340) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecebf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de74));
  *(undefined * PTR32 * PTR32 *)(this + 0x4c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecec50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecec50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dea4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ececb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xececb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115ded4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eced10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeced10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df04));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eced70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeced70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df34));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecedd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecedd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df64));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecee30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecee30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df94));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dfc4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eceef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeceef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dff4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecef50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecef50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e024));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecefb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecefb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e054));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e084));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e0b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e0e4));
  *(undefined * PTR32 * PTR32 *)(this + 0x460) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e114));
  *(undefined * PTR32 * PTR32 *)(this + 0x3a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e144));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e174));
  *(undefined * PTR32 * PTR32 *)(this + 0x520) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e1a4));
  *(undefined * PTR32 * PTR32 *)(this + 0x850) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e1d4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e204));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e234));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e264));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e294));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2c4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e324));
  *(undefined * PTR32 * PTR32 *)(this + 0x250) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e354));
  *(undefined * PTR32 * PTR32 *)(this + 0x280) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e384));
  *(undefined * PTR32 * PTR32 *)(this + 0x250) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3e4));
  *(undefined * PTR32 * PTR32 *)(this + 0x400) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e414));
  *(undefined * PTR32 * PTR32 *)(this + 0x4c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e444));
  *(undefined * PTR32 * PTR32 *)(this + 0x2a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xc4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 200 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e474));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e4a4));
  *(undefined * PTR32 * PTR32 *)(this + 0x530) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e4d4));
  *(undefined * PTR32 * PTR32 *)(this + 0xb30) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e504));
  *(undefined * PTR32 * PTR32 *)(this + 0x4a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e534));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecf9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecf9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e564));
  *(undefined * PTR32 * PTR32 *)(this + 0x230) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e594));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfa90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfa90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e5c4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e5f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x920) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e624));
  *(undefined * PTR32 * PTR32 *)(this + 0x230) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e654));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e684));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e6b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e6e4));
  *(undefined * PTR32 * PTR32 *)(this + 0xc50) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e714));
  *(undefined * PTR32 * PTR32 *)(this + 0x380) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e744));
  *(undefined * PTR32 * PTR32 *)(this + 0x3b0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e774));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7a4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecfeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecfeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7d4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecff10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecff10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e804));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecff70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecff70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e834));
  *(undefined * PTR32 * PTR32 *)(this + 0xc60) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x2a4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0(this + 0x2a8 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ecffd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xecffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e864));
  *(undefined * PTR32 * PTR32 *)(this + 0x1e80) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x504) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0(this + 0x508 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ed0030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed0030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e894));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ed0090 */
GEN_FRAME uint GEN_THISCALL F_00ed0090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ecd540(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed00b0 */
GEN_FRAME uint GEN_THISCALL F_00ed00b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xed00b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ecd8c0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed00d0 */
GEN_FRAME uint GEN_THISCALL F_00ed00d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed00d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(undefined * PTR32 *)&gen_args[1])) {
    F_00ecd990((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    F_00ecda60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pvVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ed0100 */
GEN_FRAME uint GEN_THISCALL F_00ed0100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xed0100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ecd990(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf8 */
GEN_FRAME uint GEN_THISCALL F_00ed0120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xed0120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  code * pcVar5;
  undefined4 * puVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x1c)) = param_5 & 0xffff;
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))
              (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5 & 0xffff,(uint)(byte)param_6);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return param_1;
  }
  uVar1 = **(uint * PTR32 *)(param_4 + 0x30);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  if (*(int *)(uVar1 + 4) != -1) {
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  piVar4 = (int *)F_00ebe280(&(*(uint *)(gen_frame + 0x18)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  iVar7 = *(int *)(uVar1 + 4);
  if ((iVar7 != 0) && (iVar7 != -1)) {
    *(int *)(uVar1 + 4) = iVar7 - 1;
  }
  iVar7 = *(int *)(uVar1 + 4);
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar7 != 0) & (*(uint *)(gen_frame + 0x18)))));
  if (puVar6 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
  }
  (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 2)) << 0x10)));
  (*(uint *)(gen_frame + 0x50)) = 7;
  (*(uint *)(gen_frame + 0x4c)) = 0;
  if ((byte)param_6 == 0) {
    pcVar5 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x10);
  }
  else {
    pcVar5 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x14);
  }
  (*pcVar5)((*(int * PTR32 *)(gen_frame + 0x14)),((undefined4 *)(gen_frame + 0x20)));
  F_00ecd840(&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x20)));
  if (7 < (*(uint *)(gen_frame + 0x34))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x20))[0]);
  }
  uVar1 = *(uint *)(param_4 + 0x20);
  if ((*(int *)(param_4 + 0x24) < 0) ||
     (((*(int *)(param_4 + 0x24) < 1 && (uVar1 == 0)) || (uVar1 <= (*(uint *)(gen_frame + 0x4c)))))) {
    iVar7 = 0;
  }
  else {
    iVar7 = uVar1 - (*(uint *)(gen_frame + 0x4c));
  }
  if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
    puVar6 = (undefined4 *)F_00eba490(this,((undefined1 *)(gen_frame + 0x8)),param_2,param_3,(*(uint *)(gen_frame + 0x1c)),iVar7);
    param_2 = *puVar6;
    param_3 = puVar6[1];
    iVar7 = 0;
  }
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  if ((*(uint *)(gen_frame + 0x50)) < 8) {
    puVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  }
  puVar6 = (undefined4 *)F_00eba420(this,((undefined1 *)(gen_frame + 0x8)),param_2,param_3,puVar6,(*(uint *)(gen_frame + 0x4c)));
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  *(undefined4 *)(param_4 + 0x20) = 0;
  *(undefined4 *)(param_4 + 0x24) = 0;
  F_00eba490(this,param_1,uVar2,uVar3,(*(uint *)(gen_frame + 0x1c)),iVar7);
  if (7 < (*(uint *)(gen_frame + 0x50))) {
    F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x3c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00ed0300 */
GEN_FRAME uint GEN_THISCALL F_00ed0300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed0300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  F_00ecd840(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: numpunct_G_std::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ed0330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xed0330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  pcVar2 = *(char * PTR32 *)((int)this + 8);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_FWD,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

