#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009219d0 */
uint F_009219d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9219d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x2000 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_009219f0 */
uint F_009219f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9219f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x2400 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_00921a10 */
uint F_00921a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x921a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 + -2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0xc00 + param_5 * 4)));
  return (uint)param_1;
}

/* ref: FUN_00921a50 */
uint F_00921a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x921a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 + -2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x1000 + param_5 * 4)))
  ;
  return (uint)param_1;
}

/* ref: FUN_00921a90 */
unsigned int F_00921a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1400 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return 0;
}

/* ref: FUN_00921ad0 */
unsigned int F_00921ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1800 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return 0;
}

/* ref: FUN_00921b10 */
unsigned int F_00921b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1c00 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return 0;
}

/* ref: FUN_00921b50 */
unsigned int F_00921b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x2000 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return 0;
}

/* ref: FUN_00921b90 */
unsigned int F_00921b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x2400 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return 0;
}

/* ref: FUN_00921bd0 */
unsigned int F_00921bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x921bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *((undefined4 *)GEN_TOP((uVar2 + (param_3 + 2 + ((param_2 - 1U & 1) + (param_2 - 1U & 0xfffffffe)) * 2) * 0x1400
            + 0xc00 + param_4 * 4)));
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return 0;
}

/* ref: FUN_00921c20 */
unsigned int F_00921c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x921c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *((undefined4 *)GEN_TOP((uVar2 + (param_3 + 2 + ((param_2 - 1U & 1) + (param_2 - 1U & 0xfffffffe)) * 2) * 0x1400
            + 0x1000 + param_4 * 4)));
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return 0;
}

/* ref: FUN_00921c70 */
unsigned int F_00921c70(unsigned int gen_a0)
{
  GEN_ENTER(0x921c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921cb0 */
uint F_00921cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x921cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  undefined * pvVar4;
  
  pvVar4 = (undefined *)((int)this + 0x518);
  iVar3 = 7;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0x210));
  pvVar4 = (undefined *)((int)this + 0x150);
  iVar3 = 0x27;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -8);
    uVar1 = F_005a2670(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_00921d30 */
unsigned int F_00921d30(unsigned int gen_a0)
{
  GEN_ENTER(0x921d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921d70 */
uint F_00921d70(unsigned int gen_a0)
{
  GEN_ENTER(0x921d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = (undefined *)((int)this + 0x194);
  iVar3 = 0x2f;
  do {
    this_00 = (undefined *)((int)this_00 + -8);
    uVar1 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf14 */
unsigned int F_00921dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921dd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 0x1c) = 0x1f;
  return 0;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf15 */
unsigned int F_00921de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x1c) = 0x1f;
  return 0;
}

/* ref: FUN_00921df0 */
uint F_00921df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943b80((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf2 */
unsigned int F_00921e00(void)
{
  GEN_ENTER(0x921e00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00921e10 */
uint F_00921e10(unsigned int gen_a0)
{
  GEN_ENTER(0x921e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 100));
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00921e60 */
unsigned int F_00921e60(unsigned int gen_a0)
{
  GEN_ENTER(0x921e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921ea0 */
uint F_00921ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943d10((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921eb0 */
unsigned int F_00921eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x921eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921ef0 */
uint F_00921ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943d70((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921f00 */
unsigned int F_00921f00(unsigned int gen_a0)
{
  GEN_ENTER(0x921f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921f40 */
uint F_00921f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943dd0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921f50 */
unsigned int F_00921f50(unsigned int gen_a0)
{
  GEN_ENTER(0x921f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921fa0 */
unsigned int F_00921fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x921fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921fe0 */
uint F_00921fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x921fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0x15c));
  F_0042c880((undefined *)((int)this + 0x70));
  uVar3 = F_0042c880((undefined *)((int)this + 0x1c));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922040 */
unsigned int F_00922040(unsigned int gen_a0)
{
  GEN_ENTER(0x922040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922080 */
uint F_00922080(unsigned int gen_a0)
{
  GEN_ENTER(0x922080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  iVar4 = (int)this + 0xbe38;
  iVar3 = 0x10;
  do {
    iVar4 = iVar4 + -0xa98;
    F_00401530(iVar4,0x544,2,((code *)REFP(0x46fb20)));
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0x5b0));
  F_0042c880((undefined *)((int)this + 0x55c));
  this_00 = (undefined *)((int)this + 0x550);
  iVar4 = 0xe;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    F_0042c880(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  uVar5 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922120 */
uint F_00922120(unsigned int gen_a0)
{
  GEN_ENTER(0x922120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00922170 */
uint F_00922170(unsigned int gen_a0)
{
  GEN_ENTER(0x922170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_009221c0 */
uint F_009221c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9221c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00922210 */
unsigned int F_00922210(unsigned int gen_a0)
{
  GEN_ENTER(0x922210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922250 */
uint F_00922250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944050((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922260 */
uint F_00922260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944050((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00922270 */
uint F_00922270(unsigned int gen_a0)
{
  GEN_ENTER(0x922270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  iVar3 = 4;
  puVar4 = (undefined4 *)((int)this + 0x468);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(puVar4 + -0x19);
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0x70));
  uVar5 = F_0042c880((undefined *)((int)this + 0x1c));
  uVar2 = (uint)uVar5;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_009222f0 */
uint F_009222f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9222f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar1 = param_1;
  puVar3 = (undefined4 *)(param_1 + 4);
  *(undefined1 *)this = *param_1;
  param_1 = (undefined1 *)0x4;
  puVar2 = ((undefined4 *)GEN_TOP((((undefined1 *)GEN_TOP(((int)puVar3 + (8 - (int)puVar1)))) + (int)this)));
  do {
    puVar2[-2] = *puVar3;
    puVar2[-1] = puVar3[1];
    *puVar2 = *((undefined4 *)GEN_TOP((((int)puVar1 - (int)this) + (int)puVar2)));
    F_0042cbc0(puVar2 + 1,puVar3 + 3);
    *(undefined1 *)(puVar2 + 0x16) = *(undefined1 *)(puVar3 + 0x18);
    *(undefined4 *)((int)puVar2 + 0x5a) = *(undefined4 *)((int)puVar3 + 0x62);
    *(undefined4 *)((int)puVar2 + 0x5e) = *(undefined4 *)((int)puVar3 + 0x66);
    *(undefined2 *)((int)puVar2 + 0x62) = *(undefined2 *)((int)puVar3 + 0x6a);
    puVar2[0x19] = puVar3[0x1b];
    *(undefined1 *)(puVar2 + 0x1a) = *(undefined1 *)(puVar3 + 0x1c);
    *(undefined1 *)((int)puVar2 + 0x69) = *(undefined1 *)((int)puVar3 + 0x71);
    *(undefined1 *)((int)puVar2 + 0x6a) = *(undefined1 *)((int)puVar3 + 0x72);
    *(undefined1 *)((int)puVar2 + 0x6b) = *(undefined1 *)((int)puVar3 + 0x73);
    puVar3 = puVar3 + 0x1d;
    puVar2 = puVar2 + 0x1d;
    param_1 = (undefined1 *)((int)param_1 + -1);
  } while (-1 < (int)param_1);
  return (uint)this;
}

/* ref: FUN_00922390 */
uint F_00922390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944080((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_009223a0 */
unsigned int F_009223a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9223a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_009223e0 */
uint F_009223e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9223e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009440e0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_009223f0 */
uint F_009223f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9223f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  iVar3 = 0x13;
  pvVar4 = (undefined *)((int)this + 0x19ac);
  do {
    F_0042c880((undefined *)((int)pvVar4 + -0x68));
    F_0042c880((undefined *)((int)pvVar4 + -0xc0));
    iVar3 = iVar3 + -1;
    pvVar4 = (undefined *)((int)pvVar4 + -0xc0);
  } while (-1 < iVar3);
  iVar3 = 0x18;
  puVar5 = (undefined4 *)((int)this + 0xa70);
  do {
    puVar5[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar6 = F_0042c880(puVar5 + -0x19);
    uVar2 = (uint)uVar6;
    iVar3 = iVar3 + -1;
    puVar5 = puVar5 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922490 */
unsigned int F_00922490(unsigned int gen_a0)
{
  GEN_ENTER(0x922490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_009224d0 */
unsigned int F_009224d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9224d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922510 */
unsigned int F_00922510(unsigned int gen_a0)
{
  GEN_ENTER(0x922510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922550 */
uint F_00922550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944230((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922560 */
uint F_00922560(unsigned int gen_a0)
{
  GEN_ENTER(0x922560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  iVar3 = 9;
  puVar4 = (undefined4 *)((int)this + 0x420);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_009225d0 */
uint F_009225d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9225d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944260((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_009225e0 */
uint F_009225e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9225e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  iVar3 = 0x31;
  puVar4 = (undefined4 *)((int)this + 0x1474);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922640 */
unsigned int F_00922640(unsigned int gen_a0)
{
  GEN_ENTER(0x922640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922680 */
uint F_00922680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922720((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922690 */
uint F_00922690(unsigned int gen_a0)
{
  GEN_ENTER(0x922690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d472c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4720));
  pvVar4 = (undefined *)((int)this + 0x454);
  iVar3 = 10;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0xb8);
  iVar3 = 1;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    uVar5 = F_0042c880(pvVar4);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf0 */
uint F_00922720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922690(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00922750 */
uint F_00922750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_0042c880(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    this_00 = (undefined *)(iVar2 * 0x74 + (int)this);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x74);
      F_0042c880(this_00);
    }
    this = piVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_009227c0 */
unsigned int F_009227c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9227c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922800 */
uint F_00922800(unsigned int gen_a0)
{
  GEN_ENTER(0x922800u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int in_ecx_00;
  int iVar1;
  
  in_ecx_00 = in_ecx + 8;
  iVar1 = 0xf;
  do {
    F_0042b630(in_ecx_00);
    F_0042b630(in_ecx_00 + 0x54);
    in_ecx_00 = in_ecx_00 + 0xc4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0xca8);
  F_0042b630(in_ecx + 0xcfc);
  F_0042b630(in_ecx + 0xd50);
  F_0042b630(in_ecx + 0xda4);
  return in_ecx;
}

/* ref: FUN_00922860 */
uint F_00922860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0090de10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf14 */
unsigned int F_00922890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x922890u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf15 */
unsigned int F_009228a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9228a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return 0;
}

/* ref: FUN_009228b0 */
unsigned int F_009228b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9228b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_009228f0 */
uint F_009228f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9228f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  
  if ((param_1 & 2) == 0) {
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    pvVar3 = (undefined *)(iVar2 * 0xcc + (int)this);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      F_0042c880((undefined *)((int)pvVar3 + -0x78));
      F_0042c880((undefined *)((int)pvVar3 + -0xcc));
      pvVar3 = (undefined *)((int)pvVar3 + -0xcc);
    }
    this = piVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00922980 */
uint F_00922980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00953390((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922990 */
uint F_00922990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  if ((param_1 & 2) != 0) {
    iVar1 = *(int *)((int)this + -4) + -1;
    if (-1 < iVar1) {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + -4) * 0x58 + 4 + (int)this)));
      do {
        this_00 = (undefined *)((int)this_00 + -0x58);
        F_0042c880(this_00);
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30((int)this - 4U);
    }
    return (int)this - 4U;
  }
  F_0042c880((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00922a00 */
unsigned int F_00922a00(unsigned int gen_a0)
{
  GEN_ENTER(0x922a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922a40 */
uint F_00922a40(unsigned int gen_a0)
{
  GEN_ENTER(0x922a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentDetail::vf2 */
unsigned int F_00922a80(void)
{
  GEN_ENTER(0x922a80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922a90 */
uint F_00922a90(unsigned int gen_a0)
{
  GEN_ENTER(0x922a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922ad0 */
uint F_00922ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x922ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922b10 */
uint F_00922b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944740((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922b20 */
unsigned int F_00922b20(unsigned int gen_a0)
{
  GEN_ENTER(0x922b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922b60 */
uint F_00922b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009447c0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922b70 */
unsigned int F_00922b70(unsigned int gen_a0)
{
  GEN_ENTER(0x922b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922bb0 */
uint F_00922bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944840((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922bc0 */
uint F_00922bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009448d0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922bd0 */
uint F_00922bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944940((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922be0 */
uint F_00922be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009449b0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922bf0 */
uint F_00922bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944b30((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c00 */
uint F_00922c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944b30((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00922c10 */
uint F_00922c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944b60((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c20 */
uint F_00922c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944c10((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c30 */
uint F_00922c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944c70((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c40 */
uint F_00922c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0090e260(this,param_1);
  return (uint)this;
}

/* ref: FUN_00922c60 */
uint F_00922c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042ccf0((undefined *)((int)this + 0xc),param_1 + 3);
  *(undefined2 *)((int)this + 0x60) = *(undefined2 *)(param_1 + 0x18);
  return (uint)this;
}

/* ref: FUN_00922ca0 */
unsigned int F_00922ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x922ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentSupportSubList::vf2 */
unsigned int F_00922ce0(void)
{
  GEN_ENTER(0x922ce0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922cf0 */
uint F_00922cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x922cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf2 */
unsigned int F_00922d30(void)
{
  GEN_ENTER(0x922d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922d40 */
unsigned int F_00922d40(unsigned int gen_a0)
{
  GEN_ENTER(0x922d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf2 */
unsigned int F_00922d80(void)
{
  GEN_ENTER(0x922d80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922d90 */
uint F_00922d90(unsigned int gen_a0)
{
  GEN_ENTER(0x922d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0x144));
  F_0042c880((undefined *)((int)this + 0xf0));
  F_0042c880((undefined *)((int)this + 0x9c));
  uVar3 = F_0042c880((undefined *)((int)this + 0x34));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::PopupMenu::vf0 */
uint F_00922df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406b30(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::LogViewer::vf0 */
uint F_00922e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  F_00580e00(this + 0x78);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCursor::vf0 */
uint F_00922e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c467c));
  F_0058d4b0(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFade::vf0 */
uint F_00922ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c477c));
  F_0055b840();
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonDialogue::vf0 */
uint F_00922f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c488c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonDragDrop::vf0 */
uint F_00922f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c498c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFilter::vf0 */
uint F_00922f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4a9c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4a88));
  F_0055b840();
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonOperationGuide::vf0 */
uint F_00922fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4bac));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNowLoading::vf0 */
uint F_00923010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4cac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonYesNo::vf0 */
uint F_00923040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4dac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectOk::vf0 */
uint F_00923070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4eac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf0 */
uint F_009230a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9230a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4fac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonListGrid::vf0 */
uint F_009230d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9230d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c50ac));
  if (*(int *)(this + 0x19c) != 0) {
    F_00406b30(*(int *)(this + 0x19c));
    *(undefined4 *)(this + 0x19c) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonListIcon::vf0 */
uint F_00923120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c51ac));
  if (*(int *)(this + 0x1a0) != 0) {
    F_00406b30(*(int *)(this + 0x1a0));
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonToolTipS::vf0 */
uint F_00923170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c52bc));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInputNumeric::vf0 */
uint F_009231b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9231b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c53bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInputString::vf0 */
uint F_009231e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9231e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c54bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonListColorChooser::vf0 */
uint F_00923210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c55bc));
  if (*(int *)(this + 0x1a8) != 0) {
    F_00406b30(*(int *)(this + 0x1a8));
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContextIconMenu::vf0 */
uint F_00923260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c56bc));
  if (*(int *)(this + 0x1a4) != 0) {
    F_00406b30(*(int *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditCast::vf0 */
uint F_009232b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9232b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c57bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditEnd::vf0 */
uint F_009232e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9232e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c58bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHud::vf0 */
uint F_00923310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c59bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf0 */
uint F_00923340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5abc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursor::vf0 */
uint F_00923370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5bbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf0 */
uint F_009233a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9233a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5cbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBattleTalk::vf0 */
uint F_009233d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9233d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5dbc));
  F_0058d4b0(this + 400);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00923410 */
uint F_00923410(unsigned int gen_a0)
{
  GEN_ENTER(0x923410u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x5c);
  return in_ecx;
}

/* ref: FUN_00923430 */
uint F_00923430(unsigned int gen_a0)
{
  GEN_ENTER(0x923430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf0 */
uint F_00923450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[66])REFP(0x10c6544));
  this_00 = this + 0xff0;
  iVar1 = 0x2b;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonParameter::vf0 */
uint F_009234a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9234a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6654));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonExp::vf0 */
uint F_009234d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9234d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6754));
  this_00 = this + 0x238;
  iVar1 = 1;
  do {
    this_00 = this_00 + -0x30;
    F_0058d4b0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00580e00(this + 0x198);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonEnemyList::vf0 */
uint F_00923530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6854));
  if (*(int *)(this + 0x180) != 0) {
    F_00406b30(*(int *)(this + 0x180));
    *(undefined4 *)(this + 0x180) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBagStatus::vf0 */
uint F_00923580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6954));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMoney::vf0 */
uint F_009235b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9235b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6a54));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNotification::vf0 */
uint F_009235e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9235e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6b54));
  iVar1 = 7;
  this_00 = this + 0x39c;
  do {
    this_00 = this_00 + -0x40;
    F_0058d4b0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNotificationItem::vf0 */
uint F_00923630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6c54));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonDTR::vf0 */
uint F_00923660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6d74));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCastBar::vf0 */
uint F_00923690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6e74));
  F_0042c880(this + 0x1b4);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNaviMap::vf0 */
uint F_009236d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9236d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6f74));
  *(undefined * PTR32 * PTR32 *)(this + 0x1b50) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)(this + 0x1b44) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  F_0055c5b0(this + 0x1b3c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00923720 */
unsigned int F_00923720(unsigned int gen_a0)
{
  GEN_ENTER(0x923720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  puVar2 = (undefined4 *)((int)this + 0x48);
  iVar3 = 100;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 6) = 0;
    *(undefined2 *)((int)puVar2 + 0x1a) = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2 = puVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return 0;
}

/* ref: Client::UI2::AddonPartyList::vf0 */
uint F_009237a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9237a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c707c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf0 */
uint F_009237d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9237d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c719c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf0 */
uint F_00923800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00790ee0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLimitBreak::vf0 */
uint F_00923830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c739c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHudLayout::vf0 */
uint F_00923860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c749c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHudLayoutWindow::vf0 */
uint F_00923890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c75ac));
  if (*(int *)(this + 0x188) != 0) {
    F_00406b30(*(int *)(this + 0x188));
    *(undefined4 *)(this + 0x188) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocial::vf0 */
uint F_009238e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9238e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c76ac));
  F_00590cc0(this + 0x188);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialList::vf0 */
uint F_00923920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c77ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBlackList::vf0 */
uint F_00923950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c78ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonPartyMemberList::vf0 */
uint F_00923980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c77ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterList::vf0 */
uint F_009239b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9239b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7aac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009239e0 */
uint F_009239e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9239e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this + -4) + -1;
    if (-1 < iVar2) {
      pvVar1 = ((undefined *)GEN_TOP((*(int *)((int)this + -4) * 0x104 + 0x58 + (int)this)));
      do {
        F_0042c880((undefined *)((int)pvVar1 + -0xb0));
        F_0042c880((undefined *)((int)pvVar1 + -0x104));
        F_0042c880((undefined *)((int)pvVar1 + -0x158));
        iVar2 = iVar2 + -1;
        pvVar1 = (undefined *)((int)pvVar1 + -0x104);
      } while (-1 < iVar2);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30((int)this - 4U);
    }
    return (int)this - 4U;
  }
  F_0042c880((undefined *)((int)this + 0xac));
  F_0042c880((undefined *)((int)this + 0x58));
  F_0042c880((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterViewer::vf0 */
uint F_00923a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7bac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLinkShell::vf0 */
uint F_00923ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00794760(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterEditor::vf0 */
uint F_00923ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00794e50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRequest::vf0 */
uint F_00923b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7eac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialDetailA::vf0 */
uint F_00923b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00795a50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialDetailB::vf0 */
uint F_00923b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c80ac));
  F_0042c880(this + 0x28c);
  F_0042c880(this + 0x238);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf0 */
uint F_00923bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00796340(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearch::vf0 */
uint F_00923be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007967d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchResult::vf0 */
uint F_00923c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c83ac));
  F_0042c880(this + 0x254);
  F_0042c880(this + 0x200);
  F_0042c880(this + 0x1ac);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf0 */
uint F_00923c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c84ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf0 */
uint F_00923c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c85ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf0 */
uint F_00923cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c86bc));
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf0 */
uint F_00923d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c87bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf0 */
uint F_00923d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c88bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf0 */
uint F_00923d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c89bc));
  F_0042c880(this + 0x200);
  F_0042c880(this + 0x1ac);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf0 */
uint F_00923da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8abc));
  this_00 = this + 0x328;
  iVar1 = 2;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf0 */
uint F_00923df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8bbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf0 */
uint F_00923e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8cbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf0 */
uint F_00923e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8dbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf0 */
uint F_00923e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8ebc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompany::vf0 */
uint F_00923eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8fbc));
  F_00590cc0(this + 0x1c4);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf0 */
uint F_00923ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf0 */
uint F_00923f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf0 */
uint F_00923f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf0 */
uint F_00923f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9424));
  F_0042c880(this + 0x214);
  F_0042c880(this + 0x1c0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf0 */
uint F_00923fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf0 */
uint F_00924000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf0 */
uint F_00924030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9784));
  F_0042c880(this + 0x1a0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournal::vf0 */
uint F_00924070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0079d190(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalAccept::vf0 */
uint F_009240a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9240a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c99bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalDetail::vf0 */
uint F_009240d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9240d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9abc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalResult::vf0 */
uint F_00924100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9bbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeve::vf0 */
uint F_00924130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0079e280(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf0 */
uint F_00924160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9dcc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveHistory::vf0 */
uint F_00924190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ecc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonColosseumRecord::vf0 */
uint F_009241c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9241c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9fcc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSell::vf0 */
uint F_009241f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9241f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca0cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSellList::vf0 */
uint F_00924220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0079ee50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerHistory::vf0 */
uint F_00924250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca2cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf0 */
uint F_00924280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca3cc));
  F_00590cc0(this + 0x1ac);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf0 */
uint F_009242c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9242c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca4cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf0 */
uint F_009242f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9242f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca5cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf0 */
uint F_00924320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca6f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x73c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf0 */
uint F_00924360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca7f4));
  F_0058d4b0(this + 0x3a0);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFishGuide::vf0 */
uint F_009243a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9243a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca8f4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFishRecord::vf0 */
uint F_009243d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9243d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca9f4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinder::vf0 */
uint F_00924400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cab04));
  this_00 = this + 0x720;
  iVar1 = 0xa0;
  do {
    this_00 = this_00 + -8;
    F_005a2670(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590cc0(this + 0x18c);
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf0 */
uint F_00924470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cac04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf0 */
uint F_009244a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9244a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cad04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf0 */
uint F_009244d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9244d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cae04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf0 */
uint F_00924500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10caf04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf0 */
uint F_00924530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb004));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf0 */
uint F_00924560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb104));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf0 */
uint F_00924590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb204));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf0 */
uint F_009245c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9245c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb304));
  this_00 = this + 0xa34;
  iVar1 = 0x17;
  do {
    this_00 = this_00 + -0x5c;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf0 */
uint F_00924610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb404));
  this_00 = this + 0xae0;
  iVar1 = 0x17;
  do {
    this_00 = this_00 + -100;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf0 */
uint F_00924660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb504));
  F_00581600(this + 400);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf0 */
uint F_009246a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9246a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb604));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf0 */
uint F_009246d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9246d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf0 */
uint F_00924700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb804));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf0 */
uint F_00924730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb904));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventory::vf0 */
uint F_00924760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cba04));
  F_00590cc0(this + 0x1c0);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryGrid::vf0 */
uint F_009247a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9247a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbb04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf0 */
uint F_009247d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9247d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbc04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryEvent::vf0 */
uint F_00924800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbd04));
  F_00590cc0(this + 0x1b4);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf0 */
uint F_00924840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbe04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonShop::vf0 */
uint F_00924870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbf04));
  this_00 = this + 0x290;
  iVar1 = 2;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf0 */
uint F_009248c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9248c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc004));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf0 */
uint F_009248f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9248f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc104));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf0 */
uint F_00924920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc204));
  F_0042c880(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTalk::vf0 */
uint F_00924960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc304));
  F_0042c880(this + 0x1e8);
  F_0042c880(this + 0x194);
  F_005a2670(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonEventSkip::vf0 */
uint F_009249b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9249b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc404));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHowTo::vf0 */
uint F_009249e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9249e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc504));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHowToNotice::vf0 */
uint F_00924a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc604));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonChatLogPanel::vf0 */
uint F_00924a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc704));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  F_00580e00(this + 0x218);
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMacro::vf0 */
uint F_00924a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc804));
  this_00 = this + 0x25a0;
  iVar1 = 99;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionDetail::vf0 */
uint F_00924ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc914));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemDetail::vf0 */
uint F_00924b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cca24));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacter::vf0 */
uint F_00924b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ab110(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterStatus::vf0 */
uint F_00924b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccc4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterProfile::vf0 */
uint F_00924bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccd4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterClass::vf0 */
uint F_00924bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cce4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterCurrency::vf0 */
uint F_00924c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccf4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterInspect::vf0 */
uint F_00924c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd04c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterBonus::vf0 */
uint F_00924c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd14c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Atk2DAreaMap::vf0 */
uint F_00924cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  if (*(int *)(this + 0x74) != 0) {
    F_00406b30(*(int *)(this + 0x74));
    *(undefined4 *)(this + 0x74) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonScreenLog::vf0 */
uint F_00924cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd254));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMiniTalk::vf0 */
uint F_00924d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd354));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesis::vf0 */
uint F_00924d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd4cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf0 */
uint F_00924d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd5cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf0 */
uint F_00924db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd6cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionMenu::vf0 */
uint F_00924de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd7cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGathering::vf0 */
uint F_00924e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd8cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFateReward::vf0 */
uint F_00924e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd9cc));
  F_0042c880(this + 0x2e4);
  iVar1 = 2;
  this_00 = this + 0x2e0;
  do {
    this_00 = this_00 + -100;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNamePlate::vf0 */
uint F_00924e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdad4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonArmouryBoard::vf0 */
uint F_00924ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdbd4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHowtoList::vf0 */
uint F_00924ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b29f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCabinet::vf0 */
uint F_00924f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b2c20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf0 */
uint F_00924f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdeec));
  this_00 = this + 0x1444;
  iVar1 = 0x31;
  do {
    this_00 = this_00 + -0x60;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf0 */
uint F_00924fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdfec));
  this_00 = this + 0x3d80;
  iVar1 = 0x9f;
  do {
    this_00 = this_00 + -0x60;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSet::vf0 */
uint F_00924ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce0ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSetView::vf0 */
uint F_00925020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce1ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTrade::vf0 */
uint F_00925050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce2ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCrossEditor::vf0 */
uint F_00925080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce3ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsInfo::vf0 */
uint F_009250b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9250b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce4ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMovieSubtitle::vf0 */
uint F_009250e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9250e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce5ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonPadMouseMode::vf0 */
uint F_00925110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce6ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBank::vf0 */
uint F_00925140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce7ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBuddy::vf0 */
uint F_00925170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce8ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf0 */
uint F_009251a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9251a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce9ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRecommendList::vf0 */
uint F_009251d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9251d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ceaec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCatch::vf0 */
uint F_00925200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cebec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf0 */
uint F_00925230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cecec));
  F_00590cc0(this + 0x19c);
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf0 */
uint F_00925270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cedec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigKeybind::vf0 */
uint F_009252a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9252a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b73c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLog::vf0 */
uint F_009252d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9252d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b7c60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogColor::vf0 */
uint F_00925300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf0ec));
  this_00 = this + 0xda4;
  iVar1 = 0x21;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf0 */
uint F_00925350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b8720(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogFilterInputString::vf0 */
uint F_00925380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf2ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigSystem::vf0 */
uint F_009253b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9253b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf3ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf0 */
uint F_009253e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9253e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf4ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacter::vf0 */
uint F_00925410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf604));
  F_00590cc0(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterBase::vf0 */
uint F_00925450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::vf0 */
uint F_00925480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf804));
  this_00 = this + 0x594;
  iVar1 = 8;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)(this + 0x194) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::CChatLog::vf0 */
uint F_009254f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9254f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::vf0 */
uint F_00925520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x294) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x1fc) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x19c) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHud::vf0 */
uint F_00925560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x290) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x198) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::vf0 */
uint F_009255a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9255a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x434) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x318) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x22c) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::vf0 */
uint F_009255f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9255f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x564) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x488) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x2e8) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x274) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a4) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigPadCustomize::vf0 */
uint F_00925640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cfa7c));
  this_00 = this + 0x61c;
  iVar1 = 0xd;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLogo::vf0 */
uint F_00925690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cfb7c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleLogo::vf0 */
uint F_009256c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9256c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleMenu::vf0 */
uint F_009256f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9256f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleRevision::vf0 */
uint F_00925720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTitleRights::vf0 */
uint F_00925750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTitle::vf0 */
uint F_00925780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d008c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonWarning::vf0 */
uint F_009257b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9257b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d018c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelect::vf0 */
uint F_009257e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9257e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d028c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectInfo::vf0 */
uint F_00925810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d038c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectLegacy::vf0 */
uint F_00925840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d048c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectReturn::vf0 */
uint F_00925870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d058c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectShadow::vf0 */
uint F_009258a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9258a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d068c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectTitle::vf0 */
uint F_009258d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9258d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d078c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf0 */
uint F_00925900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d088c));
  F_0042c880(this + 0x324);
  F_0042c880(this + 0x2d0);
  F_0042c880(this + 0x27c);
  F_0042c880(this + 0x228);
  F_0042c880(this + 0x1d4);
  F_0042c880(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf0 */
uint F_00925970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d098c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf0 */
uint F_009259a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9259a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0a8c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf0 */
uint F_009259d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9259d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0b8c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMake::vf0 */
uint F_00925a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0c8c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeTitle::vf0 */
uint F_00925a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0d8c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeShadow::vf0 */
uint F_00925a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d0e8c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeCity::vf0 */
uint F_00925a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007c3530(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf0 */
uint F_00925ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d108c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf0 */
uint F_00925af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d118c));
  F_0042c880(this + 0x230);
  F_0042c880(this + 0x1dc);
  F_0042c880(this + 0x188);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeHelp::vf0 */
uint F_00925b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d128c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeBgSelector::vf0 */
uint F_00925b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d138c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakePose::vf0 */
uint F_00925ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d148c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf0 */
uint F_00925bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x198) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeClassSelectorSimple::vf0 */
uint F_00925c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x198) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf0 */
uint F_00925c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d159c));
  F_0042c880(this + 0x1c4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf0 */
uint F_00925c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeGuardian::vf0 */
uint F_00925cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf0 */
uint F_00925cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf0 */
uint F_00925d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d199c));
  this_00 = this + 0x378;
  iVar1 = 8;
  do {
    this_00 = this_00 + -0x30;
    F_0058d4b0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubRaceGender::vf0 */
uint F_00925d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf0 */
uint F_00925da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10c41bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataExport::vf0 */
uint F_00925dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1c9c));
  F_0042c880(this + 0x188);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf0 */
uint F_00925e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1d9c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataInputString::vf0 */
uint F_00925e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1e9c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeDataImportDialog::vf0 */
uint F_00925e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d1f9c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf0 */
uint F_00925ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk2::vf18 */
uint F_00925ee0(void)
{
  GEN_ENTER(0x925ee0u, 0u, 0u, 0u, 0u);
  return 0x10d61b4;
}

/* ref: FUN_00925ef0 */
unsigned int F_00925ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x925ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk2::vf0 */
uint F_00925f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk3::vf18 */
uint F_00925f60(void)
{
  GEN_ENTER(0x925f60u, 0u, 0u, 0u, 0u);
  return 0x10d6214;
}

/* ref: FUN_00925f70 */
unsigned int F_00925f70(unsigned int gen_a0)
{
  GEN_ENTER(0x925f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk3::vf0 */
uint F_00925fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk4::vf18 */
uint F_00925fe0(void)
{
  GEN_ENTER(0x925fe0u, 0u, 0u, 0u, 0u);
  return 0x10d6274;
}

/* ref: FUN_00925ff0 */
unsigned int F_00925ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x925ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk4::vf0 */
uint F_00926020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk5::vf18 */
uint F_00926060(void)
{
  GEN_ENTER(0x926060u, 0u, 0u, 0u, 0u);
  return 0x10d62d4;
}

/* ref: FUN_00926070 */
unsigned int F_00926070(unsigned int gen_a0)
{
  GEN_ENTER(0x926070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk5::vf0 */
uint F_009260a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9260a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk6::vf18 */
uint F_009260e0(void)
{
  GEN_ENTER(0x9260e0u, 0u, 0u, 0u, 0u);
  return 0x10d6334;
}

/* ref: FUN_009260f0 */
unsigned int F_009260f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9260f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk6::vf0 */
uint F_00926120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk12::vf18 */
uint F_00926160(void)
{
  GEN_ENTER(0x926160u, 0u, 0u, 0u, 0u);
  return 0x10d6394;
}

/* ref: FUN_00926170 */
unsigned int F_00926170(unsigned int gen_a0)
{
  GEN_ENTER(0x926170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk12::vf0 */
uint F_009261a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9261a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFacePaint::vf18 */
uint F_009261e0(void)
{
  GEN_ENTER(0x9261e0u, 0u, 0u, 0u, 0u);
  return 0x10d63f4;
}

/* ref: FUN_009261f0 */
unsigned int F_009261f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9261f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFacePaint::vf0 */
uint F_00926220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFaceType::vf18 */
uint F_00926260(void)
{
  GEN_ENTER(0x926260u, 0u, 0u, 0u, 0u);
  return 0x10d645c;
}

/* ref: FUN_00926270 */
unsigned int F_00926270(unsigned int gen_a0)
{
  GEN_ENTER(0x926270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFaceType::vf0 */
uint F_009262a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9262a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconHair::vf18 */
uint F_009262e0(void)
{
  GEN_ENTER(0x9262e0u, 0u, 0u, 0u, 0u);
  return 0x10d64c4;
}

/* ref: FUN_009262f0 */
unsigned int F_009262f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9262f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconHair::vf0 */
uint F_00926320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTail::vf18 */
uint F_00926360(void)
{
  GEN_ENTER(0x926360u, 0u, 0u, 0u, 0u);
  return 0x10d6524;
}

/* ref: FUN_00926370 */
unsigned int F_00926370(unsigned int gen_a0)
{
  GEN_ENTER(0x926370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTail::vf0 */
uint F_009263a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9263a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFeature::vf18 */
uint F_009263e0(void)
{
  GEN_ENTER(0x9263e0u, 0u, 0u, 0u, 0u);
  return 0x10d6584;
}

/* ref: FUN_009263f0 */
unsigned int F_009263f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9263f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFeature::vf0 */
uint F_00926420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTatoo::vf18 */
uint F_00926460(void)
{
  GEN_ENTER(0x926460u, 0u, 0u, 0u, 0u);
  return 0x10d65ec;
}

/* ref: FUN_00926470 */
unsigned int F_00926470(unsigned int gen_a0)
{
  GEN_ENTER(0x926470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTatoo::vf0 */
uint F_009264a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9264a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorL::vf18 */
uint F_009264e0(void)
{
  GEN_ENTER(0x9264e0u, 0u, 0u, 0u, 0u);
  return 0x10d6654;
}

/* ref: FUN_009264f0 */
unsigned int F_009264f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9264f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorL::vf0 */
uint F_00926520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorFacePaint::vf18 */
uint F_00926560(void)
{
  GEN_ENTER(0x926560u, 0u, 0u, 0u, 0u);
  return 0x10d66b4;
}

/* ref: FUN_00926570 */
unsigned int F_00926570(unsigned int gen_a0)
{
  GEN_ENTER(0x926570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorFacePaint::vf0 */
uint F_009265a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9265a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorLip::vf18 */
uint F_009265e0(void)
{
  GEN_ENTER(0x9265e0u, 0u, 0u, 0u, 0u);
  return 0x10d671c;
}

/* ref: FUN_009265f0 */
unsigned int F_009265f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9265f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorLip::vf0 */
uint F_00926620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorHair::vf18 */
uint F_00926660(void)
{
  GEN_ENTER(0x926660u, 0u, 0u, 0u, 0u);
  return 0x10d677c;
}

/* ref: FUN_00926670 */
unsigned int F_00926670(unsigned int gen_a0)
{
  GEN_ENTER(0x926670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorHair::vf0 */
uint F_009266a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9266a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorEye::vf18 */
uint F_009266e0(void)
{
  GEN_ENTER(0x9266e0u, 0u, 0u, 0u, 0u);
  return 0x10d67e4;
}

/* ref: FUN_009266f0 */
unsigned int F_009266f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9266f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorEye::vf0 */
uint F_00926720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkSlider::vf18 */
uint F_00926760(void)
{
  GEN_ENTER(0x926760u, 0u, 0u, 0u, 0u);
  return 0x10d6844;
}

/* ref: FUN_00926770 */
unsigned int F_00926770(unsigned int gen_a0)
{
  GEN_ENTER(0x926770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkSlider::vf0 */
uint F_009267a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9267a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureOption::vf0 */
uint F_009267e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9267e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf0 */
uint F_00926810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf0 */
uint F_00926840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf0 */
uint F_00926870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf0 */
uint F_009268a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9268a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf0 */
uint F_009268d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9268d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf0 */
uint F_00926900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf0 */
uint F_00926930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton::vf0 */
uint F_00926960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton2::vf0 */
uint F_00926990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton3::vf0 */
uint F_009269c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9269c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton4::vf0 */
uint F_009269f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9269f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton5::vf0 */
uint F_00926a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton6::vf0 */
uint F_00926a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton12::vf0 */
uint F_00926a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf0 */
uint F_00926ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFacePaint::vf0 */
uint F_00926ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFaceType::vf0 */
uint F_00926b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconHair::vf0 */
uint F_00926b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTail::vf0 */
uint F_00926b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFeature::vf0 */
uint F_00926ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTatoo::vf0 */
uint F_00926bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d2134));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSimpleClassSelect::vf0 */
uint F_00926c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d37cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00926c30 */
uint F_00926c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = ((code *)REFP(0x9127c0));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00926c60 */
uint F_00926c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926c70 */
uint F_00926c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926c80 */
uint F_00926c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926c90 */
uint F_00926c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926c90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926ca0 */
uint F_00926ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x88) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return param_1 * 0x88 + *(int *)this;
}

/* ref: FUN_00926cf0 */
uint F_00926cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x14) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 0x14;
}

/* ref: FUN_00926d30 */
uint F_00926d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00926d40 */
uint F_00926d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00926d50 */
uint F_00926d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x926d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

