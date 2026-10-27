#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ec7eb0 */
uint F_00ec7eb0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb150(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x3b0));
    }
    iVar1 = *(int *)((int)this + 0x3b4);
    iVar2 = *(int *)((int)this + 0x3ac);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x3ac) = uVar4;
    *(uint *)((int)this + 0x3b4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec7fa0 */
uint F_00ec7fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec7fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x3b0) == *(int *)((int)this + 0x3b4)) {
    F_00ec7eb0(this,*(int *)((int)this + 0x3b4) * 2);
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
uint F_00ec8030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec7fa0((undefined *)((int)this + -0x3b8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8060 */
uint F_00ec8060(unsigned int gen_a0)
{
  GEN_ENTER(0xec8060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0xe;
  uVar1 = F_00ebb1f0((undefined *)((int)this + 4),0xe,0);
  *(uint *)((int)this + 0x2f0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d858));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) = (*(undefined * PTR32 (*)[3])REFP(0x115d848));
  return (uint)this;
}

/* ref: FUN_00ec8100 */
uint F_00ec8100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca670((undefined *)((int)this + -0x2fc),param_1);
  return uVar1;
}

/* ref: FUN_00ec8110 */
uint F_00ec8110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8130 */
uint F_00ec8130(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec8170(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb1f0(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x2f0));
    }
    iVar1 = *(int *)((int)this + 0x2f4);
    iVar2 = *(int *)((int)this + 0x2ec);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x2ec) = uVar4;
    *(uint *)((int)this + 0x2f4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8260 */
uint F_00ec8260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x2f0) == *(int *)((int)this + 0x2f4)) {
    F_00ec8170(this,*(int *)((int)this + 0x2f4) * 2);
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
uint F_00ec82f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec82f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8260((undefined *)((int)this + -0x2f8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8320 */
uint F_00ec8320(unsigned int gen_a0)
{
  GEN_ENTER(0xec8320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0x16;
  uVar1 = F_00ebb290((undefined *)((int)this + 4),0x16,0);
  *(uint *)((int)this + 0x470) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d870));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) = (*(undefined * PTR32 (*)[3])REFP(0x115d860));
  return (uint)this;
}

/* ref: FUN_00ec83c0 */
uint F_00ec83c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec83c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca6b0((undefined *)((int)this + -0x47c),param_1);
  return uVar1;
}

/* ref: FUN_00ec83d0 */
uint F_00ec83d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec83f0 */
uint F_00ec83f0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec8430(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb290(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x470));
    }
    iVar1 = *(int *)((int)this + 0x474);
    iVar2 = *(int *)((int)this + 0x46c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x46c) = uVar4;
    *(uint *)((int)this + 0x474) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8520 */
uint F_00ec8520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x470) == *(int *)((int)this + 0x474)) {
    F_00ec8430(this,*(int *)((int)this + 0x474) * 2);
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
uint F_00ec85b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec85b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8520((undefined *)((int)this + -0x478),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec85e0 */
uint F_00ec85e0(unsigned int gen_a0)
{
  GEN_ENTER(0xec85e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0;
  *(undefined4 *)((int)this + 0x7a8) = 0x27;
  uVar1 = F_00ebb330((undefined *)((int)this + 4),0x27,0);
  *(uint *)((int)this + 0x7a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d888));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d878));
  return (uint)this;
}

/* ref: FUN_00ec8680 */
uint F_00ec8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca6f0((undefined *)((int)this + -0x7ac),param_1);
  return uVar1;
}

/* ref: FUN_00ec8690 */
uint F_00ec8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec86b0 */
uint F_00ec86b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec86f0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb330(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x7a0));
    }
    iVar1 = *(int *)((int)this + 0x7a4);
    iVar2 = *(int *)((int)this + 0x79c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x79c) = uVar4;
    *(uint *)((int)this + 0x7a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec87e0 */
uint F_00ec87e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec87e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x7a0) == *(int *)((int)this + 0x7a4)) {
    F_00ec86f0(this,*(int *)((int)this + 0x7a4) * 2);
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
uint F_00ec8870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec87e0((undefined *)((int)this + -0x7a8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec88a0 */
uint F_00ec88a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec88a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0x17;
  uVar1 = F_00ebb3d0((undefined *)((int)this + 4),0x17,0);
  *(uint *)((int)this + 0x4a0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) = (*(undefined * PTR32 (*)[3])REFP(0x115d890));
  return (uint)this;
}

/* ref: FUN_00ec8940 */
uint F_00ec8940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca730((undefined *)((int)this + -0x4ac),param_1);
  return uVar1;
}

/* ref: FUN_00ec8950 */
uint F_00ec8950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8970 */
uint F_00ec8970(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec89b0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb3d0(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x4a0));
    }
    iVar1 = *(int *)((int)this + 0x4a4);
    iVar2 = *(int *)((int)this + 0x49c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x49c) = uVar4;
    *(uint *)((int)this + 0x4a4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8aa0 */
uint F_00ec8aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x4a0) == *(int *)((int)this + 0x4a4)) {
    F_00ec89b0(this,*(int *)((int)this + 0x4a4) * 2);
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
uint F_00ec8b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8aa0((undefined *)((int)this + -0x4a8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8b60 */
uint F_00ec8b60(unsigned int gen_a0)
{
  GEN_ENTER(0xec8b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0x37;
  uVar1 = F_00ebb470((undefined *)((int)this + 4),0x37,0);
  *(uint *)((int)this + 0xaa0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8b8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) = (*(undefined * PTR32 (*)[3])REFP(0x115d8a8));
  return (uint)this;
}

/* ref: FUN_00ec8c00 */
uint F_00ec8c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca770((undefined *)((int)this + -0xaac),param_1);
  return uVar1;
}

/* ref: FUN_00ec8c10 */
uint F_00ec8c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8c30 */
uint F_00ec8c30(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec8c70(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb470(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xaa0));
    }
    iVar1 = *(int *)((int)this + 0xaa4);
    iVar2 = *(int *)((int)this + 0xa9c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0xa9c) = uVar4;
    *(uint *)((int)this + 0xaa4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec8d60 */
uint F_00ec8d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xaa0) == *(int *)((int)this + 0xaa4)) {
    F_00ec8c70(this,*(int *)((int)this + 0xaa4) * 2);
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
uint F_00ec8df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec8d60((undefined *)((int)this + -0xaa8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec8e20 */
uint F_00ec8e20(unsigned int gen_a0)
{
  GEN_ENTER(0xec8e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x890) = 0;
  *(undefined4 *)((int)this + 0x894) = 0;
  *(undefined4 *)((int)this + 0x898) = 0x2c;
  uVar1 = F_00ebb510((undefined *)((int)this + 4),0x2c,0);
  *(uint *)((int)this + 0x890) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8d0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) = (*(undefined * PTR32 (*)[3])REFP(0x115d8c0));
  return (uint)this;
}

/* ref: FUN_00ec8ec0 */
uint F_00ec8ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca7b0((undefined *)((int)this + -0x89c),param_1);
  return uVar1;
}

/* ref: FUN_00ec8ed0 */
uint F_00ec8ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec8ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec8ef0 */
uint F_00ec8ef0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec8f30(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb510(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x890));
    }
    iVar1 = *(int *)((int)this + 0x894);
    iVar2 = *(int *)((int)this + 0x88c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x88c) = uVar4;
    *(uint *)((int)this + 0x894) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9020 */
uint F_00ec9020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x890) == *(int *)((int)this + 0x894)) {
    F_00ec8f30(this,*(int *)((int)this + 0x894) * 2);
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
uint F_00ec90b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec90b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec9020((undefined *)((int)this + -0x898),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec90e0 */
uint F_00ec90e0(unsigned int gen_a0)
{
  GEN_ENTER(0xec90e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0xbc0) = 0;
  *(undefined4 *)((int)this + 0xbc4) = 0;
  *(undefined4 *)((int)this + 0xbc8) = 0x3d;
  uVar1 = F_00ebb5b0((undefined *)((int)this + 4),0x3d,0);
  *(uint *)((int)this + 0xbc0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d8e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) = (*(undefined * PTR32 (*)[3])REFP(0x115d8d8));
  return (uint)this;
}

/* ref: FUN_00ec9180 */
uint F_00ec9180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca7f0((undefined *)((int)this + -0xbcc),param_1);
  return uVar1;
}

/* ref: FUN_00ec9190 */
uint F_00ec9190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec91b0 */
uint F_00ec91b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec91f0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb5b0(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0xbc0));
    }
    iVar1 = *(int *)((int)this + 0xbc4);
    iVar2 = *(int *)((int)this + 0xbbc);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0xbbc) = uVar4;
    *(uint *)((int)this + 0xbc4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec92e0 */
uint F_00ec92e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0xbc0) == *(int *)((int)this + 0xbc4)) {
    F_00ec91f0(this,*(int *)((int)this + 0xbc4) * 2);
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
uint F_00ec9370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec92e0((undefined *)((int)this + -0xbc8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec93a0 */
uint F_00ec93a0(unsigned int gen_a0)
{
  GEN_ENTER(0xec93a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x328) = 0xf;
  uVar1 = F_00ebb650((undefined *)((int)this + 4),0xf,0);
  *(uint *)((int)this + 800) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) = (*(undefined * PTR32 (*)[3])REFP(0x115d8f0));
  return (uint)this;
}

/* ref: FUN_00ec9440 */
uint F_00ec9440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca830((undefined *)((int)this + -0x32c),param_1);
  return uVar1;
}

/* ref: FUN_00ec9450 */
uint F_00ec9450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec9470 */
uint F_00ec9470(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec94b0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb650(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 800));
    }
    iVar1 = *(int *)((int)this + 0x324);
    iVar2 = *(int *)((int)this + 0x31c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x31c) = uVar4;
    *(uint *)((int)this + 0x324) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec95a0 */
uint F_00ec95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 800) == *(int *)((int)this + 0x324)) {
    F_00ec94b0(this,*(int *)((int)this + 0x324) * 2);
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
uint F_00ec9630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec95a0((undefined *)((int)this + -0x328),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec9660 */
uint F_00ec9660(unsigned int gen_a0)
{
  GEN_ENTER(0xec9660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0x12;
  uVar1 = F_00ebb6f0((undefined *)((int)this + 8),0x12,0);
  *(uint *)((int)this + 0x294) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  return (uint)this;
}

/* ref: FUN_00ec96b0 */
uint F_00ec96b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec96b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x28c) + param_2 * 4;
}

/* ref: FUN_00ec96f0 */
uint F_00ec96f0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec9710(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec9740(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x298));
  }
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf3 */
uint F_00ec97a0(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x298));
  }
  return 0;
}

/* ref: FUN_00ec9800 */
uint F_00ec9800(unsigned int gen_a0, unsigned int gen_a1)
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
    puVar4 = (undefined4 *)F_00ebb6f0(this,param_1,0);
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
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
    *(undefined4 * PTR32 *)((int)this + 0x28c) = puVar4;
    *(uint *)((int)this + 0x294) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec98a0 */
uint F_00ec98a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec98a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x290) == *(int *)((int)this + 0x294)) {
    F_00ec9800(this,*(int *)((int)this + 0x294) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + *(int *)((int)this + 0x290) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x290) = *(int *)((int)this + 0x290) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec98f0 */
unsigned int F_00ec98f0(unsigned int gen_a0)
{
  GEN_ENTER(0xec98f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return 0;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf1 */
uint F_00ec9910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x298) == *(int *)((int)this + 0x29c)) {
    F_00ec9800((undefined *)((int)this + 8),*(int *)((int)this + 0x29c) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + *(int *)((int)this + 0x298) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x298) = *(int *)((int)this + 0x298) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9960 */
uint F_00ec9960(unsigned int gen_a0)
{
  GEN_ENTER(0xec9960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x9b0) = 0;
  *(undefined4 *)((int)this + 0x9b4) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0x32;
  uVar1 = F_00ebb790((undefined *)((int)this + 4),0x32,0);
  *(uint *)((int)this + 0x9b0) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d930));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) = (*(undefined * PTR32 (*)[3])REFP(0x115d920));
  return (uint)this;
}

/* ref: FUN_00ec9a00 */
uint F_00ec9a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca8a0((undefined *)((int)this + -0x9bc),param_1);
  return uVar1;
}

/* ref: FUN_00ec9a10 */
uint F_00ec9a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00ec9a30 */
uint F_00ec9a30(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec9a70(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb790(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x9b0));
    }
    iVar1 = *(int *)((int)this + 0x9b4);
    iVar2 = *(int *)((int)this + 0x9ac);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x9ac) = uVar4;
    *(uint *)((int)this + 0x9b4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9b60 */
uint F_00ec9b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x9b0) == *(int *)((int)this + 0x9b4)) {
    F_00ec9a70(this,*(int *)((int)this + 0x9b4) * 2);
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
uint F_00ec9bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ec9b60((undefined *)((int)this + -0x9b8),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: FUN_00ec9c20 */
uint F_00ec9c20(unsigned int gen_a0)
{
  GEN_ENTER(0xec9c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0x25;
  uVar1 = F_00ebb830((undefined *)((int)this + 8),0x25,0);
  *(uint *)((int)this + 0x4f4) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  return (uint)this;
}

/* ref: FUN_00ec9c70 */
uint F_00ec9c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x4ec) + param_2 * 4;
}

/* ref: FUN_00ec9cb0 */
uint F_00ec9cb0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec9cd0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ec9d00(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      if (-1 < (int)uVar2) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x4f4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x4f8));
  }
  return 0;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf3 */
uint F_00ec9d60(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((short)uVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x4f4) + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x4f8));
  }
  return 0;
}

/* ref: FUN_00ec9dc0 */
uint F_00ec9dc0(unsigned int gen_a0, unsigned int gen_a1)
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
    puVar4 = (undefined4 *)F_00ebb830(this,param_1,0);
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
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar5 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
    *(undefined4 * PTR32 *)((int)this + 0x4ec) = puVar4;
    *(uint *)((int)this + 0x4f4) = param_1;
  }
  return param_1;
}

/* ref: FUN_00ec9e60 */
uint F_00ec9e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x4f0) == *(int *)((int)this + 0x4f4)) {
    F_00ec9dc0(this,*(int *)((int)this + 0x4f4) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4ec) + *(int *)((int)this + 0x4f0) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x4f0) = *(int *)((int)this + 0x4f0) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9eb0 */
unsigned int F_00ec9eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xec9eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  return 0;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf1 */
uint F_00ec9ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x4f8) == *(int *)((int)this + 0x4fc)) {
    F_00ec9dc0((undefined *)((int)this + 8),*(int *)((int)this + 0x4fc) * 2);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4f4) + *(int *)((int)this + 0x4f8) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  *(int *)((int)this + 0x4f8) = *(int *)((int)this + 0x4f8) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00ec9f20 */
uint F_00ec9f20(unsigned int gen_a0)
{
  GEN_ENTER(0xec9f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1970) = 0;
  *(undefined4 *)((int)this + 0x1974) = 0;
  *(undefined4 *)((int)this + 0x1978) = 0x86;
  uVar1 = F_00ebb8d0((undefined *)((int)this + 4),0x86,0);
  *(uint *)((int)this + 0x1970) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x197c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115d960));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x197c) = (*(undefined * PTR32 (*)[3])REFP(0x115d950));
  return (uint)this;
}

/* ref: FUN_00ec9fc0 */
uint F_00ec9fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00eca910((undefined *)((int)this + -0x197c),param_1);
  return uVar1;
}

/* ref: FUN_00ec9fd0 */
uint F_00ec9fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xec9fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + -8);
  if (*(int *)((int)this + -8) != 0) {
    return *(uint *)((int)this + -0xc);
  }
  return 0;
}

/* ref: FUN_00eca000 */
uint F_00eca000(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00eca040(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar4 = F_00ebb8d0(this,param_1,0);
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
        ((code *)*(gen_code32 *)*puVar5)(puVar5,0);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while (uVar6 < *(uint *)((int)this + 0x1970));
    }
    iVar1 = *(int *)((int)this + 0x1974);
    iVar2 = *(int *)((int)this + 0x196c);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar6 - 0x30) + iVar2)));
    *(int *)(iVar2 + -8) = iVar1;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar2 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar1 + -1) * -0x20 + -0x30;
    *(uint *)((int)this + 0x196c) = uVar4;
    *(uint *)((int)this + 0x1974) = param_1;
  }
  return param_1;
}

/* ref: FUN_00eca130 */
uint F_00eca130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x1970) == *(int *)((int)this + 0x1974)) {
    F_00eca040(this,*(int *)((int)this + 0x1974) * 2);
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
uint F_00eca1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00eca130((undefined *)((int)this + -0x1978),param_1);
  return *(int *)((int)this + -0xc) + -0x14 + *(int *)((int)this + -8) * 0x14;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0 */
uint F_00eca1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0 */
uint F_00eca220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca260 */
uint F_00eca260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca2a0 */
uint F_00eca2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca2e0 */
uint F_00eca2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xec) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca320 */
uint F_00eca320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca360 */
uint F_00eca360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x23c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca3a0 */
uint F_00eca3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca3d0 */
uint F_00eca3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_WorkDefinitions_Network_Application::vf0_00eca410 */
uint F_00eca410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca450 */
uint F_00eca450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DB_WorkDefinitions_Network_Application::vf0 */
uint F_00eca480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_WorkDefinitions_Network_Application::vf0_00eca4c0 */
uint F_00eca4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BA_WorkDefinitions_Network_Application::vf0 */
uint F_00eca4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x35c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BN_WorkDefinitions_Network_Application::vf0 */
uint F_00eca530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5cc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_ME_WorkDefinitions_Network_Application::vf0 */
uint F_00eca570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x251c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_M_WorkDefinitions_Network_Application::vf0 */
uint F_00eca5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x29c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BE_WorkDefinitions_Network_Application::vf0 */
uint F_00eca5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x41c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BC_WorkDefinitions_Network_Application::vf0 */
uint F_00eca630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_O_WorkDefinitions_Network_Application::vf0 */
uint F_00eca670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2fc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BG_WorkDefinitions_Network_Application::vf0 */
uint F_00eca6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x47c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_CH_WorkDefinitions_Network_Application::vf0 */
uint F_00eca6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_BH_WorkDefinitions_Network_Application::vf0 */
uint F_00eca730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4ac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DH_WorkDefinitions_Network_Application::vf0 */
uint F_00eca770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xaac) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_CM_WorkDefinitions_Network_Application::vf0 */
uint F_00eca7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x89c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DN_WorkDefinitions_Network_Application::vf0 */
uint F_00eca7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xbcc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_P_WorkDefinitions_Network_Application::vf0 */
uint F_00eca830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x32c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_BC_WorkDefinitions_Network_Application::vf0 */
uint F_00eca870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_DC_WorkDefinitions_Network_Application::vf0 */
uint F_00eca8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9bc) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TaggedBases_CF_WorkDefinitions_Network_Application::vf0 */
uint F_00eca8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SetParameterInfoContainer_IG_WorkDefinitions_Network_Application::vf0 */
uint F_00eca910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeca910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x197c) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eca950 */
unsigned int F_00eca950(unsigned int gen_a0, unsigned int gen_a1)
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
    F_00eca950(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 0x18);
    F_0042c880(piVar3 + 3);
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xb5);
  }
  return 0;
}

/* ref: FUN_00eca9b0 */
unsigned int F_00eca9b0(unsigned int gen_a0, unsigned int gen_a1)
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
    F_00eca9b0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    piVar3[0x1a] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    F_00ea7c20(piVar3 + 0x1a);
    F_0042c880(piVar3 + 4);
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x81);
  }
  return 0;
}

/* ref: FUN_00ecaa10 */
unsigned int F_00ecaa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecaa10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_00ecaa40 */
uint F_00ecaa40(unsigned int gen_a0)
{
  GEN_ENTER(0xecaa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf7 */
uint F_00ecaa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf6 */
uint F_00ecab00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf5 */
uint F_00ecab80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf4 */
uint F_00ecac00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf3 */
uint F_00ecac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
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
          iVar1 = iVar1 + -1 + (uint)bVar7;
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
  *(undefined1 *)((int)puVar2 + 3) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  iVar1 = F_00c472af(puVar9,0x6c,&(*(undefined1 *)(gen_frame + 0x80)),(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec13a0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return param_2;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf2 */
uint F_00ecae80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
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
          iVar1 = iVar1 + -1 + (uint)bVar7;
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
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  iVar1 = F_00c472af(puVar9,0x6c,&(*(undefined1 *)(gen_frame + 0x80)),(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec13a0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return param_2;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf11 */
uint F_00ecb0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    if (*(int *)(uVar8 + 4) != -1) {
      *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    p_Var10 = &(*(undefined4 *)(gen_frame + 0x24));
    uVar8 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x48)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar1 + 0x14),&(*(undefined4 *)(gen_frame + 0x28)));
    uVar8 = F_0105144a(((undefined1 *)(gen_frame + 0x48)),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),uVar8,p_Var10);
    (*(int *)((char *)&(_Var4))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28)))));
    if ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))) != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
      iVar1 = *(int *)((*(int *)((char *)&(_Var4))) + 4);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *(int *)((*(int *)((char *)&(_Var4))) + 4) = iVar1 + -1;
      }
      iVar1 = *(int *)((*(int *)((char *)&(_Var4))) + 4);
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
      puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (*(int *)((char *)&(_Var4))))));
      if (puVar9 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
      }
    }
    if ((((*(undefined1 * PTR32 *)(gen_frame + 0xc)) == ((undefined1 *)(gen_frame + 0x48))) || ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x24))))) != 0)) || (1 < uVar8)) {
      uVar8 = (*(uint *)(gen_frame + 0x1c));
    }
  }
  else {
    uVar8 = **(uint * PTR32 *)((*(int *)&gen_args[6]) + 0x30);
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x28))))) = uVar8;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)),0);
    if (*(int *)(uVar8 + 4) != -1) {
      *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)));
    piVar7 = (int *)F_00ebe910(&(*(undefined4 *)(gen_frame + 0x28)));
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x28)),0);
    iVar1 = *(int *)(uVar8 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(uVar8 + 4) = iVar1 + -1;
    }
    iVar1 = *(int *)(uVar8 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x28)));
    puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar8)));
    if (puVar9 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
    }
    pcVar2 = *(gen_code32 *)(*piVar7 + 0x10);
    (*(uint *)(gen_frame + 0x40)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x3c)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 0)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 2)) << 0x10)));
    (*pcVar2)(piVar7,((undefined4 *)(gen_frame + 0x4c)));
    F_00e691f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),((undefined4 *)(gen_frame + 0x4c)),0,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x60))) {
      F_00406ad0(((undefined4 *)(gen_frame + 0x4c))[0]);
    }
    F_00a17030(&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),1,0);
    ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7,((undefined4 *)(gen_frame + 0x4c)));
    F_00e691f0(&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),((undefined4 *)(gen_frame + 0x4c)),0,0xffffffff);
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
  bVar6 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)puVar9;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf10 */
uint F_00ecb350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
  if (*(int *)(uVar6 + 4) != -1) {
    *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),&(*(char *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar6)));
    if (puVar7 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    }
  }
  pcVar8 = ((char *)(gen_frame + 0x19));
  if ((*(char *)(gen_frame + 0x18)) != '-') {
    pcVar8 = &(*(char *)(gen_frame + 0x18));
  }
  uVar6 = F_0105144a(pcVar8,&(*(char * PTR32 *)(gen_frame + 0x4)),uVar5,&(*(int *)(gen_frame + 0x8)));
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf9 */
uint F_00ecb490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
  if (*(int *)(uVar6 + 4) != -1) {
    *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),&(*(char *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar6)));
    if (puVar7 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    }
  }
  pcVar8 = ((char *)(gen_frame + 0x19));
  if ((*(char *)(gen_frame + 0x18)) != '-') {
    pcVar8 = &(*(char *)(gen_frame + 0x18));
  }
  uVar6 = F_0105144a(pcVar8,&(*(char * PTR32 *)(gen_frame + 0x4)),uVar5,&(*(int *)(gen_frame + 0x8)));
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf8 */
uint F_00ecb5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
  piVar8 = &(*(int *)(gen_frame + 0x8));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = F_01051600(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar7 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf7 */
uint F_00ecb6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
  piVar8 = &(*(int *)(gen_frame + 0x8));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x10)));
  uVar6 = F_0105144a(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar7 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf6 */
uint F_00ecb800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
  piVar8 = &(*(int *)(gen_frame + 0x10));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x8)));
  uVar7 = F_010516a5(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf5 */
uint F_00ecb930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
  if (*(int *)(uVar5 + 4) != -1) {
    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
  piVar8 = &(*(int *)(gen_frame + 0x10));
  uVar5 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),*(undefined4 *)(iVar2 + 0x14),&(*(uint *)(gen_frame + 0x8)));
  uVar7 = F_01051782(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar5,piVar8);
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar5)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
  }
  bVar4 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf1 */
uint F_00ecba60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
  if (*(int *)(uVar7 + 4) != -1) {
    *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
  uVar6 = F_00ec1bc0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),0x800,&(*(uint *)(gen_frame + 0x10)));
  uVar7 = (*(uint *)(gen_frame + 0x10));
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x14)),0);
    iVar2 = *(int *)(uVar7 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar7 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar7 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x14)));
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar7)));
    if (puVar8 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
  }
  uVar7 = F_0105144a(((undefined1 *)(gen_frame + 0x18)),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),uVar6,&(*(int *)(gen_frame + 0xc)));
  bVar5 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecbb90 */
uint F_00ecbb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
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
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar6;
  }
  piVar11 = ((int *)GEN_TOP(**(uint * PTR32 *)(param_5 + 0x30)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar11;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
  if (piVar11[1] != -1) {
    piVar11[1] = piVar11[1] + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
  piVar7 = (int *)F_00ebe910(&(*(int * PTR32 *)(gen_frame + 0x14)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar7;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
  iVar13 = piVar11[1];
  if ((iVar13 != 0) && (iVar13 != -1)) {
    piVar11[1] = iVar13 + -1;
  }
  iVar13 = piVar11[1];
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
  puVar14 = ((undefined4 *)GEN_TOP((~-(uint)(iVar13 != 0) & (uint)piVar11)));
  if (puVar14 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar14)(puVar14,1);
  }
  piVar11 = (*(int * PTR32 *)(gen_frame + 0x14));
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x14)),((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x30)));
  pbVar17 = (*(byte * PTR32 *)(gen_frame + 0x10));
  (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x10));
  (*(char *)(gen_frame + 0x27)) = '\0';
  bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 == 0) {
    bVar5 = F_00ebbac0(param_3);
    if (bVar5 == 0x2b) {
      *pbVar17 = 0x2b;
    }
    else {
      bVar5 = F_00ebbac0(param_3);
      if (bVar5 != 0x2d) goto LAB_00ecbca9;
      *pbVar17 = 0x2d;
    }
    (*(byte * PTR32 *)(gen_frame + 0x28)) = pbVar17 + 1;
    F_00ebbb10(param_3);
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
    bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
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
              uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
              uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
          bVar5 = F_00ebbac0(param_3);
          if ((bVar5 != 0x30) || (iVar13 != 0)) {
            bVar5 = F_00ebbac0(param_3);
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
        F_00ebbb10(param_3);
        bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
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
      uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 8))(piVar11);
      (*(byte *)(gen_frame + 0x26)) = (byte)uVar6;
    }
    pppcVar4 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
    uVar6 = 0xf;
    (*(uint *)(gen_frame + 0x60)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x5c)) = 1;
    (*(undefined2 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] + 0)) = 0;
    ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar4 & 0xffff0000);
    iVar13 = 0;
    bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
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
              uVar8 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
           (bVar5 = F_00ebbac0(param_3), '9' < (char)bVar5)) {
          ppppcVar12 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c))[0];
          if (uVar6 < 0x10) {
            ppppcVar12 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c));
          }
          if (((*(char *)((int)ppppcVar12 + iVar13) == '\0') || ((*(byte *)(gen_frame + 0x26)) == 0)) ||
             (bVar5 = F_00ebbac0(param_3), bVar5 != (*(byte *)(gen_frame + 0x26)))) break;
          F_00a17030(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4c)),1,0);
          iVar13 = iVar13 + 1;
          uVar6 = (*(uint *)(gen_frame + 0x60));
        }
        else {
          (*(char *)(gen_frame + 0x2f)) = '\x01';
          if ((*(int *)(gen_frame + 0x18)) < 0x24) {
            bVar5 = F_00ebbac0(param_3);
            if ((bVar5 != 0x30) || ((*(int *)(gen_frame + 0x18)) != 0)) {
              bVar5 = F_00ebbac0(param_3);
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
        F_00ebbb10(param_3);
        bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
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
        iVar13 = iVar13 + -1;
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
  bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_00ecbff4: ;
        *param_3 = 0;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
    uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 4))((*(int * PTR32 *)(gen_frame + 0x14)));
    if (cVar1 == (char)uVar6) {
      plVar10 = F_00c527f9();
      *(*(byte * PTR32 *)(gen_frame + 0x28)) = *(*(char * PTR32 *)((char *)(plVar10)));
      piVar11 = (int *)*param_3;
      (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
      if (piVar11 != (int *)0x0) {
        if ((*(int *)piVar11[8] == 0) || (piVar7 = (int *)piVar11[0xc], *piVar7 < 1)) {
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11);
        }
        else {
          *piVar7 = *piVar7 + -1;
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
    bVar5 = F_00eb6af0(param_3,uVar3);
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
              uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
            uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11);
          }
          else {
            *piVar7 = *piVar7 + -1;
            pbVar17 = *(byte * PTR32 *)piVar11[8];
            *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
            uVar6 = (uint)*pbVar17;
          }
          if (uVar6 == 0xffffffff) goto LAB_00ecc108;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        bVar5 = F_00eb6af0(param_3,uVar3);
      } while (bVar5 == 0);
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = (*(int *)((char *)&(_Var15)));
    }
    if ((*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) < 0) {
      *(*(byte * PTR32 *)(gen_frame + 0x28)) = 0x30;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) = (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 1;
      (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
    }
  }
  bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
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
            uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
            uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
              uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11);
        }
        else {
          *piVar7 = *piVar7 + -1;
          pbVar17 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc26d;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
    } while (bVar5 == 0);
  }
  else {
LAB_00ecc28c: ;
    if ((*(char *)(gen_frame + 0x2f)) == '\0') goto LAB_00ecc6bc;
  }
  bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 != 0) goto LAB_00ecc6bc;
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_00ecc2dc: ;
      *param_3 = 0;
    }
    else {
      if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
        uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
      uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11);
    }
    else {
      *piVar7 = *piVar7 + -1;
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
  bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
  if (bVar5 == 0) {
    if ((char)param_3[1] == '\0') {
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_00ecc3d2: ;
        *param_3 = 0;
      }
      else {
        if ((*(int *)piVar11[8] == 0) || (*(int *)piVar11[0xc] < 1)) {
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11);
        }
        else {
          *piVar7 = *piVar7 + -1;
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
            uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
        *piVar7 = *piVar7 + -1;
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
  bVar5 = F_00eb6af0(param_3,uVar3);
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
            uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11);
        }
        else {
          *piVar7 = *piVar7 + -1;
          pbVar17 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar17 + 1;
          uVar6 = (uint)*pbVar17;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc541;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3,uVar3);
    } while (bVar5 == 0);
    *(*(byte * PTR32 *)(gen_frame + 0x28)) = 0x30;
    (*(byte * PTR32 *)(gen_frame + 0x28)) = (*(byte * PTR32 *)(gen_frame + 0x28)) + 1;
  }
LAB_00ecc56d: ;
  bVar5 = F_00eb6af0(param_3,uVar3);
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
            uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
            uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
              uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x18))(piVar11);
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
          uVar6 = ((code *)*(gen_code32 *)(*piVar11 + 0x1c))(piVar11);
        }
        else {
          *piVar7 = *piVar7 + -1;
          pbVar16 = *(byte * PTR32 *)piVar11[8];
          *(byte * PTR32 *)piVar11[8] = pbVar16 + 1;
          uVar6 = (uint)*pbVar16;
        }
        if (uVar6 == 0xffffffff) goto LAB_00ecc69c;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      bVar5 = F_00eb6af0(param_3,(*(undefined4 *)(gen_frame + 0x20)));
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
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar6;
}

/* ref: FUN_00ecc700 */
uint F_00ecc700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecc700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b123c0(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ecc720 */
uint F_00ecc720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  F_00eb1600(&(*(int * PTR32 *)&gen_args[2]));
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
            F_00eb2c30((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0xb5) == '\0') {
            if ((*(char *)(*piVar6 + 0xb4) != '\x01') || (*(char *)(piVar6[2] + 0xb4) != '\x01')) {
              if (*(char *)(piVar6[2] + 0xb4) == '\x01') {
                *(undefined1 *)(*piVar6 + 0xb4) = 1;
                *(undefined1 *)(piVar6 + 0x2d) = 0;
                F_00eb2c90((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x2d) = (char)piVar4[0x2d];
              *(undefined1 *)(piVar4 + 0x2d) = 1;
              *(undefined1 *)(piVar6[2] + 0xb4) = 1;
              F_00eb2c30((*(undefined * PTR32 *)&gen_args[0]),piVar4);
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
            F_00eb2c90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0xb5) == '\0') {
            if ((*(char *)(piVar6[2] + 0xb4) == '\x01') && (*(char *)(*piVar6 + 0xb4) == '\x01'))
            goto LAB_00ecc96c;
            if (*(char *)(*piVar6 + 0xb4) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0xb4) = 1;
              *(undefined1 *)(piVar6 + 0x2d) = 0;
              F_00eb2c30((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x2d) = (char)piVar4[0x2d];
            *(undefined1 *)(piVar4 + 0x2d) = 1;
            *(undefined1 *)(*piVar6 + 0xb4) = 1;
            F_00eb2c90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x2d) = 1;
  }
  F_0042c880(piVar3 + 0x18);
  F_0042c880(piVar3 + 3);
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecca10 */
uint F_00ecca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    puVar1 = (uint *)F_00ebe3a0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 0x20) = *(undefined1 *)(param_1 + 0x20);
    local_8 = puVar3;
    if (*(char *)((int)puVar3 + 0x81) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_00ecca10(this,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_00ecca10(this,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_00ecca80 */
uint F_00ecca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  F_00ec0950((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00eccab0 */
uint F_00eccab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeccab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ec39e0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eccac0 */
uint F_00eccac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00eccaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      bVar4 = F_0042c7c0(this_00,puVar5 + 3);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 3,this_00);
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
      puVar5 = (undefined4 *)F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00eaeac0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880((undefined *)((*(int *)&gen_args[2]) + 0x60));
  F_0042c880(this_00);
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00eccc00 */
uint F_00eccc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      bVar4 = F_0042c7c0(this_00,puVar5 + 4);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 4,this_00);
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
      puVar5 = (undefined4 *)F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00eaeb50(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 4,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *(undefined4 *)((*(int *)&gen_args[2]) + 0x68) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((*(int *)&gen_args[2]) + 0x68));
  F_0042c880(this_00);
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00eccd10 */
uint F_00eccd10(unsigned int gen_a0, unsigned int gen_a1)
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
      F_0042cbc0(puVar1 + 3,param_1);
      F_0042cbc0(puVar1 + 0x18,param_1 + 0x54);
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00eccd90 */
uint F_00eccd90(unsigned int gen_a0)
{
  GEN_ENTER(0xeccd90u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  F_00ec3cc0(param_1,10);
  F_00a16e10(param_1);
  return (uint)param_1;
}

/* ref: FUN_00eccdb0 */
uint F_00eccdb0(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar2 = F_00ebe720(this,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_00ebe720(this,0,1,param_1);
  return uVar2;
}

/* ref: FUN_00ecce00 */
uint F_00ecce00(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00ebe820(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (uint)this;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf7 */
uint F_00ecce50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf6 */
uint F_00ecced0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf5 */
uint F_00eccf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf4 */
uint F_00eccfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf3 */
uint F_00ecd050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
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
          iVar1 = iVar1 + -1 + (uint)bVar7;
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
  *(undefined1 *)((int)puVar2 + 3) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  iVar1 = F_00c472af(puVar9,0x6c,&(*(undefined1 *)(gen_frame + 0x80)),(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec3ee0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return param_2;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf2 */
uint F_00ecd250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
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
          iVar1 = iVar1 + -1 + (uint)bVar7;
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
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar9 = ((undefined1 *)(gen_frame + 0x14));
  iVar1 = F_00c472af(puVar9,0x6c,&(*(undefined1 *)(gen_frame + 0x80)),(*(uint *)(gen_frame + 0x8)),(int)(ulonglong)gen_d2bits(dVar8),
                     (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  F_00ec3ee0(param_1,param_2,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),uVar6,uVar5,iVar1,
               puVar9);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return param_2;
}

/* ref: FUN_00ecd4a0 */
uint F_00ecd4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xecd4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00eca950(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ecd4d0 */
uint F_00ecd4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xecd4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00eca9b0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ecd500 */
uint F_00ecd500(unsigned int gen_a0)
{
  GEN_ENTER(0xecd500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    }
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00ecd540 */
uint F_00ecd540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      F_00ea7d20(this_00,puVar2);
      this_00 = this_00 + 6;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (puVar2 = this_00; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    }
    *(undefined4 * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf4 */
uint F_00ecd5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  float fVar5;
  double dVar6;
  int * piVar7;
  
  pfVar2 = (*(float * PTR32 *)&gen_args[8]);
  puVar1 = (*(uint * PTR32 *)&gen_args[7]);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  piVar7 = &(*(int *)(gen_frame + 0x10));
  uVar4 = F_00ecbb90((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x1c)),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[6]),&(*(float *)(gen_frame + 0x18)));
  fVar5 = F_010519a0(((undefined1 *)(gen_frame + 0x1c)),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),uVar4,piVar7);
  (*(float *)(gen_frame + 0x14)) = fVar5;
  if ((*(float *)(gen_frame + 0x18)) != 0.0) {
    dVar6 = F_00c52a5e((double)fVar5,(int)gen_fl2bits((*(float *)(gen_frame + 0x18))) * 4);
    (*(float *)(gen_frame + 0x18)) = (float)dVar6;
    (*(float *)(gen_frame + 0x14)) = (float)dVar6;
  }
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf3 */
uint F_00ecd6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf2 */
uint F_00ecd770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  bVar3 = F_00eb6af0(&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[4]));
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
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecd840 */
uint F_00ecd840(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00ecd8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    F_00eca950(this,piVar2[1]);
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
    F_00ecc720(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ecd990 */
uint F_00ecd990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    F_00eca9b0(this,piVar2[1]);
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
    F_00ec46d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ecda60 */
unsigned int F_00ecda60(unsigned int gen_a0, unsigned int gen_a1)
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
  uVar7 = F_00ecca10(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
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
uint F_00ecdaf0(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00ebe820(param_1,psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return (uint)param_1;
}

/* ref: numpunct_G_std::vf5 */
uint F_00ecdb40(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00ebe820(param_1,psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return (uint)param_1;
}

/* ref: FUN_00ecdb90 */
uint F_00ecdb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    bVar3 = F_0042c7c0((undefined *)(piVar1[2] + 0xc),this_00);
    if (bVar3 != 0) {
      F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eaeac0(&(*(int * PTR32 *)&gen_args[3]));
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[3]) + 3,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0xb5))) == '\0') {
          F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 3,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eb1600(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[3]) + 3), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0xb5))) == '\0') {
          F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec3580((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar4 = (undefined4 *)F_00eccaf0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00ecdd40 */
uint F_00ecdd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 4);
    if (bVar3 != 0) {
      F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    bVar3 = F_0042c7c0((undefined *)(piVar1[2] + 0x10),this_00);
    if (bVar3 != 0) {
      F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 4);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eaeb50(&(*(int * PTR32 *)&gen_args[3]));
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[3]) + 4,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x81))) == '\0') {
          F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 4,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00eacb60(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[3]) + 4), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x81))) == '\0') {
          F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00ec37a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar4 = (undefined4 *)F_00eccc00((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: Component::ServerFramework::JsonParser::StringToken::vf4 */
uint F_00ecdef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecdef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this + 8,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: Component::ServerFramework::JsonParser::SimpleJsonToken::vf4 */
uint F_00ecdf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecdf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this + 8,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00ecdf30 */
uint F_00ecdf30(unsigned int gen_a0, unsigned int gen_a1)
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
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
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
uint F_00ecdf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
    ((code *)*(gen_code32 *)(*(int *)this + 0x1c))
              (this,param_1,param_2,param_3,param_4,(*(undefined4 *)(gen_frame + 0x1c)),(uint)(byte)param_6);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return param_1;
  }
  uVar1 = **(uint * PTR32 *)(param_4 + 0x30);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
  if (*(int *)(uVar1 + 4) != -1) {
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
  piVar5 = (int *)F_00ebe910(&(*(uint *)(gen_frame + 0x14)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
  iVar9 = *(int *)(uVar1 + 4);
  if ((iVar9 != 0) && (iVar9 != -1)) {
    *(int *)(uVar1 + 4) = iVar9 + -1;
  }
  iVar9 = *(int *)(uVar1 + 4);
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
  puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar9 != 0) & (*(uint *)(gen_frame + 0x14)))));
  if (puVar8 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
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
  F_00e45e40(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0x3c)),((undefined4 *)(gen_frame + 0x20)));
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
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: numpunct_D_std::vf3 */
uint F_00ece170(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00bb56c0(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: numpunct_D_std::vf4 */
uint F_00ece1b0(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00bb56c0(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: numpunct_D_std::vf5 */
uint F_00ece1f0(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00bb56c0(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf0 */
uint F_00ece230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d994));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf0 */
uint F_00ece290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9c4));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf0 */
uint F_00ece2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf0 */
uint F_00ece350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da24));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf0 */
uint F_00ece3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da54));
  *(undefined * PTR32 * PTR32 *)(this + 0x230) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf0 */
uint F_00ece410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da84));
  *(undefined * PTR32 * PTR32 *)(this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf0 */
uint F_00ece470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dab4));
  *(undefined * PTR32 * PTR32 *)(this + 0x170) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf0 */
uint F_00ece4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dae4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf0 */
uint F_00ece530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db14));
  *(undefined * PTR32 * PTR32 *)(this + 0x290) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf0 */
uint F_00ece590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db44));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf0 */
uint F_00ece5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db74));
  *(undefined * PTR32 * PTR32 *)(this + 0x2c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf0 */
uint F_00ece650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dba4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf0 */
uint F_00ece6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dbd4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xc4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 200);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf0 */
uint F_00ece710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc04));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf0 */
uint F_00ece770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc34));
  *(undefined * PTR32 * PTR32 *)(this + 0x200) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf0 */
uint F_00ece7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc64));
  *(undefined * PTR32 * PTR32 *)(this + 0xa70) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xe4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80(this + 0xe8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf0 */
uint F_00ece830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc94));
  *(undefined * PTR32 * PTR32 *)(this + 0x280) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf0 */
uint F_00ece890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dcc4));
  *(undefined * PTR32 * PTR32 *)(this + 0x400) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf0 */
uint F_00ece8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dcf4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf0 */
uint F_00ece950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd24));
  *(undefined * PTR32 * PTR32 *)(this + 0x670) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf0 */
uint F_00ece9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xece9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd54));
  *(undefined * PTR32 * PTR32 *)(this + 0x25c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf0 */
uint F_00ecea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd84));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf0 */
uint F_00ecea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115ddb4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf0 */
uint F_00ecead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dde4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf0 */
uint F_00eceb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeceb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de14));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf0 */
uint F_00eceb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeceb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de44));
  *(undefined * PTR32 * PTR32 *)(this + 0x340) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf0 */
uint F_00ecebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de74));
  *(undefined * PTR32 * PTR32 *)(this + 0x4c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf0 */
uint F_00ecec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecec50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dea4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf0 */
uint F_00ececb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xececb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115ded4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf0 */
uint F_00eced10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeced10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df04));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf0 */
uint F_00eced70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeced70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df34));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf0 */
uint F_00ecedd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecedd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df64));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf0 */
uint F_00ecee30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecee30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115df94));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf0 */
uint F_00ecee90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dfc4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf0 */
uint F_00eceef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeceef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dff4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf0 */
uint F_00ecef50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecef50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e024));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf0 */
uint F_00ecefb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecefb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e054));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf0 */
uint F_00ecf010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e084));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf0 */
uint F_00ecf070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e0b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf0 */
uint F_00ecf0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e0e4));
  *(undefined * PTR32 * PTR32 *)(this + 0x460) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf0 */
uint F_00ecf130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e114));
  *(undefined * PTR32 * PTR32 *)(this + 0x3a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf0 */
uint F_00ecf190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e144));
  *(undefined * PTR32 * PTR32 *)(this + 0x1c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf0 */
uint F_00ecf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e174));
  *(undefined * PTR32 * PTR32 *)(this + 0x520) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf0 */
uint F_00ecf250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e1a4));
  *(undefined * PTR32 * PTR32 *)(this + 0x850) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf0 */
uint F_00ecf2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e1d4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf0 */
uint F_00ecf310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e204));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf0 */
uint F_00ecf370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e234));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf0 */
uint F_00ecf3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e264));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf0 */
uint F_00ecf430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e294));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf0 */
uint F_00ecf490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2c4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf0 */
uint F_00ecf4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf0 */
uint F_00ecf550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e324));
  *(undefined * PTR32 * PTR32 *)(this + 0x250) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf0 */
uint F_00ecf5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e354));
  *(undefined * PTR32 * PTR32 *)(this + 0x280) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf0 */
uint F_00ecf610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e384));
  *(undefined * PTR32 * PTR32 *)(this + 0x250) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf0 */
uint F_00ecf670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf0 */
uint F_00ecf6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3e4));
  *(undefined * PTR32 * PTR32 *)(this + 0x400) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf0 */
uint F_00ecf730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e414));
  *(undefined * PTR32 * PTR32 *)(this + 0x4c0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf0 */
uint F_00ecf790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e444));
  *(undefined * PTR32 * PTR32 *)(this + 0x2a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xc4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(this + 200);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  F_00ebfee0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf0 */
uint F_00ecf7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e474));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf0 */
uint F_00ecf850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e4a4));
  *(undefined * PTR32 * PTR32 *)(this + 0x530) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf0 */
uint F_00ecf8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e4d4));
  *(undefined * PTR32 * PTR32 *)(this + 0xb30) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf0 */
uint F_00ecf910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e504));
  *(undefined * PTR32 * PTR32 *)(this + 0x4a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf0 */
uint F_00ecf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e534));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf0 */
uint F_00ecf9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecf9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e564));
  *(undefined * PTR32 * PTR32 *)(this + 0x230) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf0 */
uint F_00ecfa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e594));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf0 */
uint F_00ecfa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfa90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e5c4));
  *(undefined * PTR32 * PTR32 *)(this + 0x220) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(this + 0xa8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf0 */
uint F_00ecfaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e5f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x920) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf0 */
uint F_00ecfb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e624));
  *(undefined * PTR32 * PTR32 *)(this + 0x230) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf0 */
uint F_00ecfbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e654));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf0 */
uint F_00ecfc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e684));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf0 */
uint F_00ecfc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e6b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf0 */
uint F_00ecfcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e6e4));
  *(undefined * PTR32 * PTR32 *)(this + 0xc50) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf0 */
uint F_00ecfd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e714));
  *(undefined * PTR32 * PTR32 *)(this + 0x380) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf0 */
uint F_00ecfd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e744));
  *(undefined * PTR32 * PTR32 *)(this + 0x3b0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf0 */
uint F_00ecfdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e774));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf0 */
uint F_00ecfe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7a4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf0 */
uint F_00ecfeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecfeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7d4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf0 */
uint F_00ecff10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecff10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e804));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf0 */
uint F_00ecff70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecff70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e834));
  *(undefined * PTR32 * PTR32 *)(this + 0xc60) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x2a4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0(this + 0x2a8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf0 */
uint F_00ecffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xecffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e864));
  *(undefined * PTR32 * PTR32 *)(this + 0x1e80) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x504) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0(this + 0x508);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf0 */
uint F_00ed0030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e894));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(this + 0x88);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00ebfe20(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ed0090 */
uint F_00ed0090(unsigned int gen_a0)
{
  GEN_ENTER(0xed0090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ecd540(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed00b0 */
uint F_00ed00b0(unsigned int gen_a0)
{
  GEN_ENTER(0xed00b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ecd8c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed00d0 */
uint F_00ed00d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed00d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(undefined * PTR32 *)&gen_args[1])) {
    F_00ecd990((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    F_00ecda60((*(undefined * PTR32 *)&gen_args[0]),pvVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ed0100 */
uint F_00ed0100(unsigned int gen_a0)
{
  GEN_ENTER(0xed0100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00ecd990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf8 */
uint F_00ed0120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
    ((code *)*(gen_code32 *)(*(int *)this + 0x1c))
              (this,param_1,param_2,param_3,param_4,param_5 & 0xffff,(uint)(byte)param_6);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return param_1;
  }
  uVar1 = **(uint * PTR32 *)(param_4 + 0x30);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
  if (*(int *)(uVar1 + 4) != -1) {
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
  piVar4 = (int *)F_00ebe280(&(*(uint *)(gen_frame + 0x18)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
  iVar7 = *(int *)(uVar1 + 4);
  if ((iVar7 != 0) && (iVar7 != -1)) {
    *(int *)(uVar1 + 4) = iVar7 + -1;
  }
  iVar7 = *(int *)(uVar1 + 4);
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
  puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar7 != 0) & (*(uint *)(gen_frame + 0x18)))));
  if (puVar6 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
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
  F_00ecd840(&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),((undefined4 *)(gen_frame + 0x20)));
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
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: FUN_00ed0300 */
uint F_00ed0300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  F_00ecd840(this,param_1);
  return (uint)this;
}

/* ref: numpunct_G_std::vf3 */
uint F_00ed0330(unsigned int gen_a0, unsigned int gen_a1)
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
  F_00bb56c0(param_1,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return (uint)param_1;
}

/* ref: FUN_00ed0370 */
uint F_00ed0370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed0370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      F_0042cbc0(puVar1 + 3,param_3);
      F_0042cbc0(puVar1 + 0x18,param_3 + 0x54);
    }
    F_00ecdb90(this,param_1,param_2,puVar1);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ed0400 */
uint F_00ed0400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  puVar7 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar7 + 0xb5);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar4 = F_0042c7c0(puVar7 + 3,(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)*puVar7;
    }
    else {
      puVar6 = (undefined4 *)puVar7[2];
      puVar7 = puVar3;
    }
    puVar3 = puVar7;
    puVar7 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0xb5);
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar4 = F_0042c7c0((*(undefined * PTR32 *)(gen_frame + 0x8)),puVar3 + 3), bVar4 == 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return (uint)(puVar3 + 0x18);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),(*(undefined * PTR32 *)(gen_frame + 0x8)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xb4)));
  piVar5 = (int *)F_00ed0370(this,((undefined1 *)(gen_frame + 0x4)),puVar3,((undefined1 *)(gen_frame + 0xc)));
  iVar2 = *piVar5;
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return iVar2 + 0x60;
}

/* ref: FUN_00ed0500 */
uint F_00ed0500(unsigned int gen_a0)
{
  GEN_ENTER(0xed0500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ecd8c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed0530 */
uint F_00ed0530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0530u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(undefined * PTR32 *)&gen_args[1])) {
    F_00ecd990((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    F_00ecda60((*(undefined * PTR32 *)&gen_args[0]),pvVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ed0560 */
uint F_00ed0560(unsigned int gen_a0)
{
  GEN_ENTER(0xed0560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ecd990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed0590 */
uint F_00ed0590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0590u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  byte bVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)&gen_args[1])) {
    iVar1 = (*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1]) >> 0x1f;
    iVar7 = ((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x18 + iVar1;
    uVar8 = iVar7 - iVar1;
    if (iVar7 == iVar1) {
      F_00ecd540((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    iVar1 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    uVar3 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - iVar1) / 0x18;
    if (uVar8 <= uVar3) {
      puVar6 = (undefined4 *)F_00eb6340(*(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[1])[1],iVar1);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      for (; puVar6 != puVar2; puVar6 = puVar6 + 6) {
        ((code *)*(gen_code32 *)*puVar6)(puVar6,0);
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *(int *)(*(undefined * PTR32 *)&gen_args[0]) + (((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x18) * 0x18;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (uVar8 <= (uint)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar1) / 0x18)) {
      iVar7 = *(*(int * PTR32 *)&gen_args[1]) + uVar3 * 0x18;
      F_00eb6340(*(*(int * PTR32 *)&gen_args[1]),iVar7,iVar1);
      uVar8 = F_00ebe4b0(iVar7,(*(int * PTR32 *)&gen_args[1])[1],*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(int * PTR32 *)&gen_args[1]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar8;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (iVar1 != 0) {
      F_00ecaa10(iVar1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      F_00406ad0(*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
    }
    piVar4 = (*(int * PTR32 *)&gen_args[1]);
    bVar5 = F_00eb9a40((*(undefined * PTR32 *)&gen_args[0]),((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x18);
    if (bVar5 != 0) {
      uVar8 = F_00eccac0((*(undefined * PTR32 *)&gen_args[0]),*piVar4,piVar4[1],*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar8;
    }
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ed0700 */
uint F_00ed0700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (((*(uint *)((int)this + 0x40) & 2) == 0) && (**(uint * PTR32 *)((int)this + 0x24) != 0)) {
    uVar1 = **(uint * PTR32 *)((int)this + 0x24);
    if (uVar1 <= *(uint *)((int)this + 0x3c)) {
      uVar1 = *(uint *)((int)this + 0x3c);
    }
    iVar3 = **(int * PTR32 *)((int)this + 0x14);
    iVar2 = uVar1 - iVar3;
  }
  else {
    if (((*(uint *)((int)this + 0x40) & 4) != 0) || (**(int * PTR32 *)((int)this + 0x20) == 0)) {
      (*(uint *)(gen_frame + 0x20)) = 7;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0)) = 0;
      (*(int *)(gen_frame + 0xc)) = (uint)(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 2)) << 0x10;
      *(undefined4 *)(param_1 + 10) = 7;
      *(undefined4 *)(param_1 + 8) = 0;
      *param_1 = 0;
      F_00ecd840(param_1,&(*(int *)(gen_frame + 0xc)));
      goto joined_r0x00ed07c9;
    }
    iVar3 = **(int * PTR32 *)((int)this + 0x10);
    iVar2 = (**(int * PTR32 *)((int)this + 0x30) * 2 - iVar3) + **(int * PTR32 *)((int)this + 0x20);
  }
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 0)) = 0;
  (*(int *)(gen_frame + 0xc)) = (uint)(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0xc)) + 2)) << 0x10;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 7;
  F_00ebe820(&(*(int *)(gen_frame + 0xc)),iVar3,iVar2 >> 1);
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  F_00ecd840(param_1,&(*(int *)(gen_frame + 0xc)));
joined_r0x00ed07c9: ;
  if (7 < (*(uint *)(gen_frame + 0x20))) {
    F_00406ad0((*(int *)(gen_frame + 0xc)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)param_1;
}

/* ref: FUN_00ed07f0 */
uint F_00ed07f0(unsigned int gen_a0)
{
  GEN_ENTER(0xed07f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ecd990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed0820 */
uint F_00ed0820(unsigned int gen_a0)
{
  GEN_ENTER(0xed0820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ecd8c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00ed0850 */
uint F_00ed0850(unsigned int gen_a0)
{
  GEN_ENTER(0xed0850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0xb8);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb4))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb5))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ed08c0 */
uint F_00ed08c0(unsigned int gen_a0)
{
  GEN_ENTER(0xed08c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x88);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x80))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x81))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ed0930 */
uint F_00ed0930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ed0700((undefined *)((int)this + 4),param_1);
  return param_1;
}

/* ref: FUN_00ed0950 */
uint F_00ed0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e46800((undefined *)((int)this + 0x18),param_1);
  return param_1;
}

/* ref: FUN_00ed0970 */
uint F_00ed0970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00ecd990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  F_00406ad0(*(undefined4 *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::Properties::vf0 */
uint F_00ed09b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed09b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115e8d8));
  F_00ecd8c0(this + 4,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 8),*(undefined4 * PTR32 *)(this + 8));
  F_00406ad0(*(undefined4 *)(this + 8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ed0a00 */
uint F_00ed0a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ea7f50(this,param_1);
  return uVar1;
}

/* ref: FUN_00ed0a10 */
uint F_00ed0a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed0a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00ea7d20((undefined4 *)((int)this + 0x58),param_2);
  return (uint)this;
}

/* ref: FUN_00ed0a40 */
uint F_00ed0a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ed0a70 */
uint F_00ed0a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ed0aa0 */
uint F_00ed0aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed0aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00ea7d20((undefined4 *)((int)this + 0x58),param_2);
  return (uint)this;
}

/* ref: FUN_00ed0ad0 */
uint F_00ed0ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed0ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00ea7d20((undefined4 *)((int)this + 0x58),param_2);
  return (uint)this;
}

/* ref: FUN_00ed0b00 */
uint F_00ed0b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed0b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00ea7d20((undefined4 *)((int)this + 0x58),param_2);
  return (uint)this;
}

/* ref: FUN_00ed0b30 */
uint F_00ed0b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ed0b60 */
uint F_00ed0b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed0b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    param_2[2] = 0;
    param_2[4] = 0;
    *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00ed0b90 */
uint F_00ed0b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xed0b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined4 *)0x0) {
      *this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      this[2] = 0;
      this[4] = 0;
      F_00ea7d20(this,iVar1);
    }
    iVar1 = iVar1 + 0x18;
    this = this + 6;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ed0be0 */
uint F_00ed0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00ea7d20((undefined4 *)((int)this + 0x58),param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00ed0c20 */
uint F_00ed0c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed0c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    param_2[2] = 0;
    param_2[4] = 0;
    *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00ed0c50 */
unsigned int F_00ed0c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xed0c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * this;
  int iVar1;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if (this != (undefined4 *)0x0) {
      *this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      this[2] = 0;
      this[4] = 0;
      F_00ea7d20(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    this = this + 6;
  }
  return 0;
}

/* ref: FUN_00ed0cc0 */
uint F_00ed0cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed0cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ed0b90(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ed0cf0 */
unsigned int F_00ed0cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    *(undefined4 *)((int)param_1 + 0x60) = 0;
    *(undefined4 *)((int)param_1 + 0x68) = 0;
    F_00ea7d20((undefined4 *)((int)param_1 + 0x58),param_2 + 0x58);
  }
  return 0;
}

/* ref: FUN_00ed0d30 */
unsigned int F_00ed0d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_00ed0c50(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_00ed0d60 */
uint F_00ed0d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed0d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ed0b90(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ed0d90 */
unsigned int F_00ed0d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed0d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    *(undefined4 *)((int)param_2 + 0x60) = 0;
    *(undefined4 *)((int)param_2 + 0x68) = 0;
    F_00ea7d20((undefined4 *)((int)param_2 + 0x58),param_3 + 0x58);
  }
  return 0;
}

/* ref: FUN_00ed0dd0 */
uint F_00ed0dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if (0xaaaaaaa < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    (*(uint *)(gen_frame + 0x8)) = 0;
    if (param_1 != 0) {
      uVar3 = F_004069f0(param_1 * 0x18);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    F_00ed0b90(*(undefined4 *)this,*(undefined4 *)((int)this + 4),(*(uint *)(gen_frame + 0x8)),(int)this + 0xc,0,
                 param_1);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar4 = *(undefined4 * PTR32 *)this;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
    iVar2 = ((int)puVar1 - (int)puVar4) / 0x18;
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar4 != puVar1) {
        do {
          ((code *)*(gen_code32 *)*puVar4)(puVar4,0);
          puVar4 = puVar4 + 6;
        } while (puVar4 != (*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      }
      F_00406ad0(*(undefined4 *)this);
      uVar5 = (*(uint *)(gen_frame + 0x8));
    }
    uVar3 = iVar2 * 3;
    *(uint *)this = uVar5;
    *(uint *)((int)this + 8) = uVar5 + param_1 * 0x18;
    *(uint *)((int)this + 4) = uVar5 + iVar2 * 0x18;
  }
  return uVar3;
}

/* ref: FUN_00ed0ed0 */
uint F_00ed0ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x88);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x20) = 0;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      F_0042cbc0(puVar1 + 4,param_1);
      puVar1[0x1a] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      puVar1[0x1c] = 0;
      puVar1[0x1e] = 0;
      F_00ea7d20(puVar1 + 0x1a,param_1 + 0x58);
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ed0f60 */
uint F_00ed0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - param_1 < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ed0dd0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ed0dd0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ed0ff0 */
uint F_00ed0ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed0ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ed0ed0(this,param_3);
  F_00ecdd40(this,param_1,param_2,uVar1);
  return param_1;
}

/* ref: FUN_00ed1020 */
uint F_00ed1020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = param_1;
  puVar6 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x81);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar4 = F_0042c7c0(puVar6 + 4,(*(undefined * PTR32 *)(gen_frame + 0x24)));
    if (bVar4 == 0) {
      puVar7 = (undefined4 *)*puVar6;
    }
    else {
      puVar7 = (undefined4 *)puVar6[2];
      puVar6 = puVar2;
    }
    puVar2 = puVar6;
    puVar6 = puVar7;
    cVar1 = *(char *)((int)puVar7 + 0x81);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar4 = F_0042c7c0((*(undefined * PTR32 *)(gen_frame + 0x24)),puVar2 + 4), bVar4 == 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return (uint)(puVar2 + 0x1a);
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x28)),(*(undefined * PTR32 *)(gen_frame + 0x24)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  F_00ea7d20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x80)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  uVar5 = F_00ed0ed0(this,((undefined1 *)(gen_frame + 0x28)));
  F_00ecdd40(this,&(*(undefined * PTR32 *)(gen_frame + 0x24)),puVar2,uVar5);
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x24));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x80)));
  F_0042c880(((undefined1 *)(gen_frame + 0x28)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (int)pvVar3 + 0x68;
}

/* ref: FUN_00ed1140 */
uint F_00ed1140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1140u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x18;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_00ecd540((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),*(int *)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 0x18,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_00ed0f60((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_00ed0c50(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x18,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x18;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (uVar1 - uVar2) * 0x18;
  }
  return uVar2;
}

/* ref: FUN_00ed11f0 */
unsigned int F_00ed11f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed11f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * this_00;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ed0f60(this,1);
    }
    uVar1 = *(int *)this + ((int)(param_1 - uVar2) / 0x18) * 0x18;
    this_00 = *(undefined4 * PTR32 *)((int)this + 4);
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00ed0f60(this,1);
    }
    this_00 = *(undefined4 * PTR32 *)((int)this + 4);
    uVar1 = param_1;
  }
  if (this_00 != (undefined4 *)0x0) {
    *this_00 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    this_00[2] = 0;
    this_00[4] = 0;
    F_00ea7d20(this_00,uVar1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf1 */
uint F_00ed12a0(void)
{
  GEN_ENTER(0xed12a0u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf2 */
uint F_00ed12b0(void)
{
  GEN_ENTER(0xed12b0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136953c);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf3 */
uint F_00ed12c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed12c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8f64) + param_1 * 4);
}

/* ref: FUN_00ed12e0 */
uint F_00ed12e0(unsigned int gen_a0)
{
  GEN_ENTER(0xed12e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a8f84) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf4 */
uint F_00ed1300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  return 0xffffffff;
}

/* ref: FUN_00ed1340 */
uint F_00ed1340(unsigned int gen_a0)
{
  GEN_ENTER(0xed1340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x17;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf6 */
uint F_00ed1350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x136951c))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf7 */
uint F_00ed1370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8f04) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf8 */
uint F_00ed1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8f44) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf9 */
uint F_00ed13b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed13b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf10 */
uint F_00ed13d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed13d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8f24) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf14 */
uint F_00ed13f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed13f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a8f44) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a8f44) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a8f04) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a8f04) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf13 */
uint F_00ed1470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed1470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a8f04) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a8f04) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf12 */
uint F_00ed14f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xed14f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a38) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a8f24) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf11 */
uint F_00ed1580(unsigned int gen_a0)
{
  GEN_ENTER(0xed1580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,6);
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,7);
  return uVar8 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf17 */
uint F_00ed15f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xed15f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf16 */
uint F_00ed1610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xed1610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf15 */
uint F_00ed1630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed1630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,7,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::Warp_TypeInfo::vf19 */
uint F_00ed16d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed16d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,7,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ed1770 */
unsigned int F_00ed1770(unsigned int gen_a0)
{
  GEN_ENTER(0xed1770u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf2 */
uint F_00ed1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136962c) + 0x10))))(&REFG(undefined * PTR32, 0x136962c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ed17b0 */
uint F_00ed17b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed17b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x136962c) + 0x10))))(&REFG(undefined * PTR32, 0x136962c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf4 */
uint F_00ed17e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed17e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 5;
  case 2: ;
    return in_ecx + 8;
  case 3: ;
    return in_ecx + 0xc;
  case 4: ;
    return in_ecx + 0x10;
  case 5: ;
    return in_ecx + 0x20;
  case 6: ;
    return in_ecx + 0x21;
  case 7: ;
    return in_ecx + 0x28;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::Warp::vf3 */
uint F_00ed1850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed1850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf8 */
byte F_00ed1860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00ed1963: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed1968;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ed1963;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed1968: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00ed1a1a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00ed1a1a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf22 */
byte F_00ed1a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed1a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pWVar5;
  ulonglong uVar6;
  float fVar7;
  undefined * puVar8;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    this[4] = SUB81(uVar6,0);
    return 1;
  case 1: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    this[5] = SUB81(uVar6,0);
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 8) = fVar7;
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    return 1;
  case 4: ;
    iVar4 = 0;
    pWVar5 = this + 0x10;
    break;
  case 5: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar8);
    this[0x20] = (undefined1)(bVar1 != 0);
    return 1;
  case 6: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(pvVar2,puVar8);
    this[0x21] = (undefined1)(bVar1 != 0);
    return 1;
  case 7: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(ulonglong *)(this + 0x28) = uVar6;
    return 1;
  default: ;
    return 0;
  }
  do {
    uVar3 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
    uVar3 = F_00e82f00(uVar3);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)pWVar5 = fVar7;
    iVar4 = iVar4 + 1;
    pWVar5 = pWVar5 + 4;
  } while (iVar4 < 4);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf17 */
byte F_00ed1bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed1bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  undefined * pWVar7;
  ulonglong uVar8;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  this[5] = SUB81(uVar8,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar9 = F_00e50660(uVar3 + 3);
  *(float *)(this + 8) = fVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0xc) = (int)uVar8;
  uVar3 = uVar3 + 1;
  pWVar7 = this + 0x10;
  (*(int *)(gen_frame + 0x0)) = 4;
  do {
    iVar5 = uVar3 + 3;
    uVar3 = F_00c51da0(iVar5,0x22);
    fVar9 = F_00e50660(iVar5);
    *(float *)pWVar7 = fVar9;
    pWVar7 = pWVar7 + 4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  uVar6 = F_00c51da0((char *)(uVar3 + 4),0x22);
  this[0x20] = (undefined1)(*(char *)(uVar3 + 4) != '0');
  uVar3 = F_00c51da0((char *)(uVar6 + 3),0x22);
  this[0x21] = (undefined1)(*(char *)(uVar6 + 3) != '0');
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar8 = F_00e50570(uVar3 + 3);
  *(ulonglong *)(this + 0x28) = uVar8;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf10 */
uint F_00ed1d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed1d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf23 */
byte F_00ed1e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed1e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined1 * puVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 8)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x10))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x10)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  pvVar2 = (undefined *)F_00e9e450(pvVar1,0,0);
  F_00ea7fb0(pvVar2,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  pvVar2 = (undefined *)F_00e9e450(pvVar1,1,0);
  F_00ea7fb0(pvVar2,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x18))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x18)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  pvVar2 = (undefined *)F_00e9e450(pvVar1,2,0);
  F_00ea7fb0(pvVar2,puVar3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x1c))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x1c)) >> 0x20));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  pvVar1 = (undefined *)F_00e9e450(pvVar1,3,0);
  F_00ea7fb0(pvVar1,puVar3);
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x20]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x21]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf9 */
uint F_00ed2100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed2100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf11 */
byte F_00ed2120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed2120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00ed2233: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed2238;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ed2233;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed2238: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00ed23a7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00ed23a7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf24 */
byte F_00ed23c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed23c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pWVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  undefined * puVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    this[4] = SUB81(uVar6,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    this[5] = SUB81(uVar6,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)(this + 8) = fVar7;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(int *)(this + 0xc) = (int)uVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    iVar5 = 0;
    pWVar4 = this + 0x10;
    break;
  case 5: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar8);
    this[0x20] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 6: ;
    puVar8 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar8);
    this[0x21] = (undefined1)(bVar1 == 0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 7: ;
    uVar3 = F_00e82f00(pvVar2);
    uVar3 = F_0042a990(uVar3);
    uVar6 = F_00e50570(uVar3);
    *(ulonglong *)(this + 0x28) = uVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  do {
    uVar3 = F_00e9e450(pvVar2,iVar5,iVar5 >> 0x1f);
    uVar3 = F_00e82f00(uVar3);
    uVar3 = F_0042a990(uVar3);
    fVar7 = F_00e50660(uVar3);
    *(float *)pWVar4 = fVar7;
    iVar5 = iVar5 + 1;
    pWVar4 = pWVar4 + 4;
  } while (iVar5 < 4);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf18 */
byte F_00ed25e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed25e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pWVar6;
  ulonglong uVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[4] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[5] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 8) = fVar8;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(int *)(this + 0xc) = (int)uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369688));
      iVar5 = uVar3 + 10;
      pWVar6 = this + 0x10;
      (*(int *)(gen_frame + 0x4)) = 4;
      do {
        fVar8 = F_00e50660(iVar5);
        *(float *)pWVar6 = fVar8;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pWVar6 = pWVar6 + 4;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        iVar5 = uVar3 + 2;
      } while ((*(int *)(gen_frame + 0x4)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      this[0x20] = (undefined1)(*(char *)(uVar3 + 9) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      this[0x21] = (undefined1)(*(char *)(uVar3 + 9) != '0');
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136968c));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(ulonglong *)(this + 0x28) = uVar7;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf13 */
uint F_00ed2950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed2950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf25 */
byte F_00ed2a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed2a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 8)),
             (int)((ulonglong)gen_d2bits((double)*(float *)(this + 8)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"Vector4");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 4;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0x10;
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x10))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x10))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    iVar5 = (*(int *)(gen_frame + 0x8)) >> 0x1f;
    puVar9 = ((undefined1 *)(gen_frame + 0x68));
    iVar6 = (*(int *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 4;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
  } while ((*(int *)(gen_frame + 0x8)) < 4);
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x20]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x21]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf14 */
byte F_00ed35c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed35c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00ed3712: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ed3717;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ed3712;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ed3717: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00ed361e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00ed361e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Warp::vf16 */
byte F_00ed3870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00ed3a40 */
uint F_00ed3a40(unsigned int gen_a0)
{
  GEN_ENTER(0xed3a40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf1 */
uint F_00ed3a80(void)
{
  GEN_ENTER(0xed3a80u, 0u, 0u, 0u, 0u);
  return 0x11;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf2 */
uint F_00ed3a90(void)
{
  GEN_ENTER(0xed3a90u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x136955c);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf3 */
uint F_00ed3aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8ffc) + param_1 * 4);
}

/* ref: FUN_00ed3ac0 */
uint F_00ed3ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xed3ac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a9018) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf4 */
uint F_00ed3ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 7);
  return 0xffffffff;
}

/* ref: FUN_00ed3b20 */
uint F_00ed3b20(unsigned int gen_a0)
{
  GEN_ENTER(0xed3b20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x4d;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf6 */
uint F_00ed3b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x1369540))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf7 */
uint F_00ed3b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf8 */
uint F_00ed3b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8fe0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf9 */
uint F_00ed3b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf10 */
uint F_00ed3bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf14 */
uint F_00ed3bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a8fe0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a8fe0) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf13 */
uint F_00ed3c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed3c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf12 */
uint F_00ed3cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xed3cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3a58) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x12a8fc4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf11 */
uint F_00ed3d60(unsigned int gen_a0)
{
  GEN_ENTER(0xed3d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,6);
  return uVar7 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf15 */
uint F_00ed3dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,6,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::ActionTarget_TypeInfo::vf19 */
uint F_00ed3e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed3e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,6,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00ed3ee0 */
uint F_00ed3ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xed3ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x12a9304));
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined1 *)(in_ecx + 6) = 0;
  *(undefined8 *)(in_ecx + 7) = 0;
  *(undefined8 *)(in_ecx + 9) = 0;
  *(undefined8 *)(in_ecx + 0xb) = 0;
  *(undefined8 *)(in_ecx + 0xd) = 0;
  *(undefined8 *)(in_ecx + 0xf) = 0;
  *(undefined8 *)(in_ecx + 0x11) = 0;
  *(undefined8 *)(in_ecx + 0x13) = 0;
  *(undefined8 *)(in_ecx + 0x15) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ed3f30 */
unsigned int F_00ed3f30(unsigned int gen_a0)
{
  GEN_ENTER(0xed3f30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf2 */
uint F_00ed3f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369630) + 0x10))))(&REFG(undefined * PTR32, 0x1369630),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00ed3f70 */
uint F_00ed3f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed3f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x1369630) + 0x10))))(&REFG(undefined * PTR32, 0x1369630),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf4 */
uint F_00ed3fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed3fa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x10;
  case 4: ;
    return in_ecx + 0x14;
  case 5: ;
    return in_ecx + 0x18;
  case 6: ;
    return in_ecx + 0x1c;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf3 */
uint F_00ed4010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed4010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x12a8fa8) + param_1 * 4)) && (param_1 == 6)) {
    return (uint)(this + param_2 * 4 + 0x1c);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf6 */
unsigned int F_00ed4040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed4040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pAVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    this[8] = *(undefined *)(param_1 + 2);
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    pAVar5 = this + 0x1c;
    *(int *)(this + 0x14) = param_1[5];
    this[0x18] = *(undefined *)(param_1 + 6);
    iVar6 = 0x10;
    do {
      *(undefined4 *)pAVar5 = *((undefined4 *)GEN_TOP((pAVar5 + ((int)param_1 - (int)this))));
      pAVar5 = pAVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf5 */
uint F_00ed40d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed40d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pAVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2)));
  if ((short)uVar3 == (short)pAVar4) {
    pAVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case (undefined *)0x0: ;
      uVar3 = param_1[1];
      *(uint *)(this + 4) = uVar3;
      return uVar3;
    case (undefined *)0x1: ;
      this[8] = *(undefined *)(param_1 + 2);
      return (uint)pAVar4;
    case (undefined *)0x2: ;
      *(int *)(this + 0xc) = param_1[3];
      return (uint)pAVar4;
    case (undefined *)0x3: ;
      uVar3 = param_1[4];
      *(uint *)(this + 0x10) = uVar3;
      return uVar3;
    case (undefined *)0x4: ;
      *(int *)(this + 0x14) = param_1[5];
      return (uint)pAVar4;
    case (undefined *)0x5: ;
      this[0x18] = *(undefined *)(param_1 + 6);
      return (uint)pAVar4;
    case (undefined *)0x6: ;
      pAVar4 = this + 0x1c;
      iVar5 = 0x10;
      do {
        *(undefined4 *)pAVar4 = *((undefined4 *)GEN_TOP((pAVar4 + ((int)param_1 - (int)this))));
        pAVar4 = pAVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return (uint)pAVar4;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf8 */
byte F_00ed41b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed41b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00ed42b3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed42b8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00ed42b3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed42b8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00ed436a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00ed436a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf22 */
byte F_00ed4380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xed4380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  ulonglong uVar5;
  float fVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar5;
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar5;
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    fVar6 = F_00e50660(uVar1);
    *(float *)(this + 0x14) = fVar6;
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    this[0x18] = SUB81(uVar5,0);
    return 1;
  case 6: ;
    uVar1 = F_00e8c050(param_2);
    iVar3 = 0;
    pAVar4 = this + 0x1c;
    break;
  default: ;
    return 0;
  }
  do {
    if ((int)uVar1 <= iVar3) {
      return 1;
    }
    uVar2 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(int *)pAVar4 = (int)uVar5;
    iVar3 = iVar3 + 1;
    pAVar4 = pAVar4 + 4;
  } while (iVar3 < 0x10);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf17 */
byte F_00ed44e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed44e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  undefined * pAVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar9 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  this[8] = SUB81(uVar9,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar9 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0xc) = (int)uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar9;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  fVar10 = F_00e50660(uVar3 + 3);
  *(float *)(this + 0x14) = fVar10;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  uVar3 = uVar3 + 1;
  this[0x18] = SUB81(uVar9,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  pAVar7 = this + 0x1c;
  while( true ) {
    uVar8 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar8,0x22);
    if ((uVar6 < uVar8) || (uVar6 < uVar3)) break;
    uVar9 = F_00e50570(uVar8);
    *(int *)pAVar7 = (int)uVar9;
    iVar5 = iVar5 + 1;
    pAVar7 = pAVar7 + 4;
    if (0xf < iVar5) {
LAB_00ed4640: ;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00ed4640;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf10 */
uint F_00ed4670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed4670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf23 */
byte F_00ed4790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed4790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * this_00;
  undefined * pAVar2;
  int iVar3;
  undefined1 * puVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x18],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x10,0);
  pAVar2 = this + 0x1c;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pAVar2,0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    this_00 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(this_00,puVar4);
    iVar3 = iVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (iVar3 < 0x10);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf9 */
uint F_00ed4950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed4950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf11 */
byte F_00ed4970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed4970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00ed4a83: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ed4a88;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00ed4a83;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00ed4a88: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00ed4bf7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00ed4bf7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf24 */
byte F_00ed4c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed4c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0xc) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    fVar6 = F_00e50660(uVar1);
    *(float *)(this + 0x14) = fVar6;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    this[0x18] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 6: ;
    uVar1 = F_00e8c050(this_00);
    iVar4 = 0;
    pAVar3 = this + 0x1c;
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  do {
    if ((int)uVar1 <= iVar4) break;
    uVar2 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
    uVar2 = F_00e82f00(uVar2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e505e0(uVar2);
    *(int *)pAVar3 = (int)uVar5;
    iVar4 = iVar4 + 1;
    pAVar3 = pAVar3 + 4;
  } while (iVar4 < 0x10);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf18 */
byte F_00ed4e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xed4e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  undefined * pAVar7;
  ulonglong uVar8;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      *(int *)(this + 4) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      this[8] = SUB81(uVar8,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      *(int *)(this + 0xc) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      *(int *)(this + 0x10) = (int)uVar8;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      fVar9 = F_00e50660(iVar5);
      *(float *)(this + 0x14) = fVar9;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x136971c));
      iVar5 = uVar3 + 9;
      uVar8 = F_00e50570(iVar5);
      this[0x18] = SUB81(uVar8,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x1369718));
      iVar5 = uVar3 + 10;
      pAVar7 = this + 0x1c;
      iVar6 = 0x10;
      do {
        uVar8 = F_00e50570(iVar5);
        *(int *)pAVar7 = (int)uVar8;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pAVar7 = pAVar7 + 4;
        iVar6 = iVar6 + -1;
        iVar5 = uVar3 + 2;
      } while (iVar6 != 0);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf13 */
uint F_00ed5120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed5120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf25 */
byte F_00ed5240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed5240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pAVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0xc),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0x14))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x14)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x18],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 0x10;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  iVar6 = 0;
  pAVar7 = this + 0x1c;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pAVar7,0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar8,iVar5);
    F_00ea7fb0(pvVar2,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    iVar6 = iVar6 + 1;
    pAVar7 = pAVar7 + 4;
  } while (iVar6 < 0x10);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf14 */
byte F_00ed5c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed5c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00ed5d62: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00ed5d67;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00ed5d62;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00ed5d67: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00ed5c6e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00ed5c6e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ActionTarget::vf16 */
byte F_00ed5ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed5ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00ed6090 */
uint F_00ed6090(unsigned int gen_a0)
{
  GEN_ENTER(0xed6090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined1 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined1 *)(in_ecx + 0x18) = 0;
  *(undefined8 *)(in_ecx + 0x1c) = 0;
  *(undefined8 *)(in_ecx + 0x24) = 0;
  *(undefined8 *)(in_ecx + 0x2c) = 0;
  *(undefined8 *)(in_ecx + 0x34) = 0;
  *(undefined8 *)(in_ecx + 0x3c) = 0;
  *(undefined8 *)(in_ecx + 0x44) = 0;
  *(undefined8 *)(in_ecx + 0x4c) = 0;
  *(undefined8 *)(in_ecx + 0x54) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf1 */
uint F_00ed6100(void)
{
  GEN_ENTER(0xed6100u, 0u, 0u, 0u, 0u);
  return 0x1a;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf2 */
uint F_00ed6110(void)
{
  GEN_ENTER(0xed6110u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x13695c8);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf3 */
uint F_00ed6120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed6120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a90d4) + param_1 * 4);
}

/* ref: FUN_00ed6140 */
uint F_00ed6140(unsigned int gen_a0)
{
  GEN_ENTER(0xed6140u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x12a9108) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf4 */
uint F_00ed6160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed6160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xd);
  return 0xffffffff;
}

/* ref: FUN_00ed61a0 */
uint F_00ed61a0(unsigned int gen_a0)
{
  GEN_ENTER(0xed61a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0xea;
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf6 */
uint F_00ed61b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed61b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x1369560))[(int)(param_1)];
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf7 */
uint F_00ed61d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed61d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a9038) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf8 */
uint F_00ed61f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed61f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a90a0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf9 */
uint F_00ed6210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed6210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1369594) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf10 */
uint F_00ed6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed6230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x12a906c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::ThinkState_TypeInfo::vf14 */
uint F_00ed6250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xed6250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x12a90a0) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x12a90a0) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x12a906c) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x1369594) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x12a9038) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x12a906c) + param_1 * 4) * *(int *)(&REFG(undefined, 0x12a9038) + param_1 * 4) + 7;
}

