#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00943a10 */
ushort F_00943a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') << 4 | *(ushort *)((int)this + 0x70) & 0xffef;
  *(ushort *)((int)this + 0x70) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigPadCustomize::vf0 */
uint F_00943a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007cd3e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentContext::vf0 */
uint F_00943a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00921cb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCursor::vf0 */
uint F_00943aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::vf0 */
uint F_00943af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00921d70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCloseMessage::vf0 */
uint F_00943b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf0 */
uint F_00943b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ce9a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentChatLog::vf0 */
uint F_00943b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007cef30(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf0 */
uint F_00943bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 100);
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentEmote::vf0 */
uint F_00943c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943c60 */
uint F_00943c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943cb0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00943c70 */
unsigned int F_00943c70(unsigned int gen_a0)
{
  GEN_ENTER(0x943c70u, gen_a0, 0u, 0u, 0u);
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

/* ref: Client::UI2::Agent::AgentFishingNote::vf0 */
uint F_00943cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishGuide::vf0 */
uint F_00943d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf0 */
uint F_00943d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf0 */
uint F_00943dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf0 */
uint F_00943e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007d2220(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf0 */
uint F_00943e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007d2c60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943e90 */
uint F_00943e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943e90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::UI2::Agent::AgentHUDLayout::vf0 */
uint F_00943ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInspect::vf0 */
uint F_00943f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x15c);
  F_0042c880(this + 0x70);
  F_0042c880(this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInventory::vf0 */
uint F_00943f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMacro::vf0 */
uint F_00943fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922080(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMarker::vf0 */
uint F_00944000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf0 */
uint F_00944050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922270(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf0 */
uint F_00944080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRetainer::vf0 */
uint F_009440e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9440e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009223f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00944110 */
uint F_00944110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944110u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::UI2::Agent::AgentStatus::vf0 */
uint F_00944140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf0 */
uint F_00944190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf0 */
uint F_009441e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9441e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentTrade::vf0 */
uint F_00944230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922560(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentHowtoList::vf0 */
uint F_00944260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007dc5a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCabinet::vf0 */
uint F_00944290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009225e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLegacyItemStorage::vf0 */
uint F_009442c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9442c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf0 */
uint F_00944310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  F_0042c880(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyRank::vf0 */
uint F_00944370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf0 */
uint F_009443c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9443c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf0 */
uint F_00944410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentPadMouseMode::vf0 */
uint F_00944460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentColosseumRecord::vf0 */
uint F_009444b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9444b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf0 */
uint F_00944500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ddd50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCatch::vf0 */
uint F_00944530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentShop::vf0 */
uint F_00944580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSocial::vf0 */
uint F_009445d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9445d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentBlacklist::vf0 */
uint F_00944620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentDetail::vf0 */
uint F_00944680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFriendlist::vf0 */
uint F_009446e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9446e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentItemSearch::vf0 */
uint F_00944740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007dedc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLetter::vf0 */
uint F_00944770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLetterEdit::vf0 */
uint F_009447c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9447c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007dfd70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLetterView::vf0 */
uint F_009447f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9447f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf0 */
uint F_00944840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e0890(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf0 */
uint F_00944870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  F_0042c880(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentPartyMember::vf0 */
uint F_009448d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9448d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  F_0042c880(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSearch::vf0 */
uint F_00944940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  F_0042c880(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf0 */
uint F_009449b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9449b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e0f00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyOrganizeSheet::vf0 */
uint F_009449e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9449e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e2c));
  F_0042c880(this + 0x68);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf0 */
uint F_00944a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e2230(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf0 */
uint F_00944a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4ebc));
  F_0042c880(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf0 */
uint F_00944ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f04));
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyChest::vf0 */
uint F_00944b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e2580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf0 */
uint F_00944b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf0 */
uint F_00944bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf0 */
uint F_00944c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf0 */
uint F_00944c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e3600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf0 */
uint F_00944ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLicenseViewer::vf0 */
uint F_00944cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportMain::vf0 */
uint F_00944d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubList::vf0 */
uint F_00944d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf0 */
uint F_00944df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf0 */
uint F_00944e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922d90(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf0 */
uint F_00944e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf0 */
uint F_00944ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf0 */
uint F_00944f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf0 */
uint F_00944f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContextMenu::vf0 */
uint F_00944fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e9420(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectString::vf0 */
uint F_00944fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e97d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectIconString::vf0 */
uint F_00945010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ea350(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonStatus::vf0 */
uint F_00945040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d56dc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf0 */
uint F_00945070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFishingNote::vf0 */
uint F_009450a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9450a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5924));
  *(undefined * PTR32 * PTR32 *)(this + 0x25c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  if (*(int *)(this + 0x24c) != 0) {
    F_00406b30(*(int *)(this + 0x24c));
    *(undefined4 *)(this + 0x24c) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaRepair::vf0 */
uint F_00945100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc104));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00945150 */
uint F_00945150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945160 */
uint F_00945160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945270 */
byte F_00945270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00945290 */
uint F_00945290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452b0 */
uint F_009452b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452c0 */
uint F_009452c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452e0 */
uint F_009452e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452f0 */
uint F_009452f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945300 */
uint F_00945300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945320 */
uint F_00945320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945330 */
uint F_00945330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945350 */
uint F_00945350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945360 */
uint F_00945360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945380 */
uint F_00945380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945390 */
uint F_00945390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009453b0 */
uint F_009453b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9453b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00910c10(this);
  return (uint)this;
}

/* ref: FUN_009453c0 */
uint F_009453c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9453c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00910c10(this);
  return (uint)param_1;
}

/* ref: FUN_009453f0 */
uint F_009453f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9453f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945400 */
uint F_00945400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945420 */
uint F_00945420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945430 */
uint F_00945430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945450 */
uint F_00945450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945460 */
uint F_00945460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945480 */
uint F_00945480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945490 */
uint F_00945490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009454b0 */
uint F_009454b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9454b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009454c0 */
uint F_009454c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9454c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945500 */
uint F_00945500(unsigned int gen_a0)
{
  GEN_ENTER(0x945500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 != 0) {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    uVar1 = uVar1 - 1;
    *(uint *)((int)this + 0x10) = uVar1;
    if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00945680 */
uint F_00945680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945690 */
uint F_00945690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009456d0 */
uint F_009456d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9456d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009456e0 */
uint F_009456e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9456e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009457c0 */
byte F_009457c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9457c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945850 */
uint F_00945850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945860 */
uint F_00945860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009458b0 */
uint F_009458b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009458c0 */
uint F_009458c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009458e0 */
uint F_009458e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009458f0 */
uint F_009458f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945910 */
uint F_00945910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945920 */
uint F_00945920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945940 */
uint F_00945940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945950 */
uint F_00945950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945970 */
uint F_00945970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945980 */
uint F_00945980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009459a0 */
byte F_009459a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9459a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009459d0 */
byte F_009459d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9459d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945a00 */
byte F_00945a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945a50 */
uint F_00945a50(unsigned int gen_a0)
{
  GEN_ENTER(0x945a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928100(this);
  return (uint)this;
}

/* ref: FUN_00945a70 */
uint F_00945a70(unsigned int gen_a0)
{
  GEN_ENTER(0x945a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928170(this);
  return (uint)this;
}

/* ref: FUN_00945a90 */
byte F_00945a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ab0 */
byte F_00945ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ad0 */
byte F_00945ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00945b10 */
byte F_00945b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b30 */
byte F_00945b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b50 */
byte F_00945b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b70 */
uint F_00945b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945b90 */
uint F_00945b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945bc0 */
uint F_00945bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945be0 */
byte F_00945be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c00 */
byte F_00945c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c20 */
byte F_00945c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c40 */
uint F_00945c40(unsigned int gen_a0)
{
  GEN_ENTER(0x945c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009283d0(this);
  return (uint)this;
}

/* ref: FUN_00945c60 */
byte F_00945c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c80 */
byte F_00945c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945cb0 */
uint F_00945cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x945cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00914400(this);
  return (uint)this;
}

/* ref: FUN_00945cc0 */
uint F_00945cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x945cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00914400(this);
  return (uint)param_1;
}

/* ref: FUN_00945ce0 */
byte F_00945ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00945d00 */
byte F_00945d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d20 */
byte F_00945d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d40 */
byte F_00945d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d60 */
byte F_00945d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d80 */
byte F_00945d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945da0 */
byte F_00945da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945dc0 */
byte F_00945dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945e00 */
byte F_00945e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ed0 */
unsigned int F_00945ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x945ed0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00945f50 */
uint F_00945f50(unsigned int gen_a0)
{
  GEN_ENTER(0x945f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x137);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00945f70 */
uint F_00945f70(unsigned int gen_a0)
{
  GEN_ENTER(0x945f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00946180 */
uint F_00946180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946180u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009461c0 */
uint F_009461c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9461c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00946200 */
uint F_00946200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00946240 */
uint F_00946240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00946280 */
uint F_00946280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946280u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00946300 */
uint F_00946300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946310 */
uint F_00946310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00946320 */
uint F_00946320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946330 */
uint F_00946330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946340 */
unsigned int F_00946340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946340(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_009463d0 */
uint F_009463d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9463d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009463f0 */
uint F_009463f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9463f0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,400);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_009464b0 */
uint F_009464b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9464b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009464d0 */
unsigned int F_009464d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9464d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x39);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_009464d0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x40,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x39);
  }
  return 0;
}

/* ref: FUN_00946510 */
uint F_00946510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x39) == '\0') {
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

/* ref: FUN_009465d0 */
uint F_009465d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9465d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009465f0 */
uint F_009465f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9465f0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x20,400);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_009466b0 */
uint F_009466b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9466b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009466d0 */
uint F_009466d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9466d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009466e0 */
uint F_009466e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9466e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009466f0 */
uint F_009466f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9466f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946700 */
uint F_00946700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946710 */
uint F_00946710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946720 */
uint F_00946720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946730 */
uint F_00946730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946740 */
uint F_00946740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946750 */
uint F_00946750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946760 */
uint F_00946760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946770 */
uint F_00946770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946780 */
uint F_00946780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946a80 */
uint F_00946a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946a90 */
uint F_00946a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946aa0 */
uint F_00946aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946ab0 */
uint F_00946ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946ac0 */
uint F_00946ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946ad0 */
uint F_00946ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946ae0 */
uint F_00946ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946af0 */
uint F_00946af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b00 */
uint F_00946b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b10 */
uint F_00946b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b20 */
uint F_00946b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b30 */
uint F_00946b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b40 */
uint F_00946b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b50 */
uint F_00946b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b60 */
uint F_00946b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b70 */
uint F_00946b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b80 */
uint F_00946b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b90 */
uint F_00946b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946bb0 */
uint F_00946bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x946bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00946bf0 */
uint F_00946bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c00 */
uint F_00946c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c10 */
uint F_00946c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c20 */
uint F_00946c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c30 */
uint F_00946c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c40 */
uint F_00946c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c50 */
uint F_00946c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c60 */
uint F_00946c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c70 */
uint F_00946c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c80 */
uint F_00946c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c90 */
uint F_00946c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946ca0 */
uint F_00946ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946cb0 */
uint F_00946cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946cc0 */
uint F_00946cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00946ce0 */
uint F_00946ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00929470(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00946d00 */
uint F_00946d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00929420(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00946d20 */
unsigned int F_00946d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946d20(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00946d80 */
uint F_00946d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946d90 */
uint F_00946d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946da0 */
unsigned int F_00946da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946da0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00946e00 */
uint F_00946e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946e10 */
uint F_00946e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946e20 */
unsigned int F_00946e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946e20(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00946e80 */
uint F_00946e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946e90 */
uint F_00946e90(unsigned int gen_a0)
{
  GEN_ENTER(0x946e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00929740(this);
  return (uint)this;
}

/* ref: FUN_00946ea0 */
uint F_00946ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946eb0 */
uint F_00946eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x946eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009297a0(this);
  return (uint)this;
}

/* ref: FUN_00946ec0 */
uint F_00946ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ec0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00946f00 */
uint F_00946f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00946f40 */
uint F_00946f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946f50 */
uint F_00946f50(unsigned int gen_a0)
{
  GEN_ENTER(0x946f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00929870(this);
  return (uint)this;
}

/* ref: FUN_00946f60 */
uint F_00946f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946f70 */
uint F_00946f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00946fb0 */
uint F_00946fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946fb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00946ff0 */
uint F_00946ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947000 */
uint F_00947000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947010 */
uint F_00947010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947020 */
uint F_00947020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947030 */
uint F_00947030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947040 */
uint F_00947040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947050 */
uint F_00947050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947060 */
uint F_00947060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0xd4 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_009471a0 */
uint F_009471a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009471b0 */
uint F_009471b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009471c0 */
uint F_009471c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x54 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_009471e0 */
uint F_009471e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0xd + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947200 */
uint F_00947200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 3 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947220 */
uint F_00947220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x60 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947240 */
uint F_00947240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00947260 */
uint F_00947260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00947280 */
uint F_00947280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0xc;
  return (uint)param_1;
}

/* ref: FUN_009472a0 */
uint F_009472a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9472a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009472d0 */
uint F_009472d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9472d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00947300 */
uint F_00947300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947300u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009473c0 */
uint F_009473c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9473c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009473f0 */
uint F_009473f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9473f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00947430 */
uint F_00947430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947460 */
uint F_00947460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_009474a0 */
uint F_009474a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9474a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009474b0 */
uint F_009474b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9474b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009474e0 */
uint F_009474e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9474e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947520 */
uint F_00947520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x947520u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00947550 */
undefined4 * F_00947550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947550u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009475c0 */
undefined4 * F_009475c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9475c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009475f0 */
uint F_009475f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9475f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009476a0 */
uint F_009476a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9476a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00947740 */
uint F_00947740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x947740u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00947770 */
uint F_00947770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947780 */
uint F_00947780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947790 */
uint F_00947790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477a0 */
uint F_009477a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9477a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477b0 */
uint F_009477b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9477b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477c0 */
uint F_009477c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9477c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947820 */
uint F_00947820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947850 */
uint F_00947850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947890 */
uint F_00947890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009478c0 */
uint F_009478c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9478c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
  }
  return (uint)puVar1;
}

/* ref: FUN_00947910 */
uint F_00947910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947940 */
uint F_00947940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947970 */
uint F_00947970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_009479b0 */
uint F_009479b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9479b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009479e0 */
uint F_009479e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9479e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947a10 */
uint F_00947a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947a40 */
uint F_00947a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a50 */
uint F_00947a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a60 */
uint F_00947a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a70 */
uint F_00947a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a80 */
uint F_00947a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947a90 */
uint F_00947a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947aa0 */
uint F_00947aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ab0 */
uint F_00947ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ac0 */
uint F_00947ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ad0 */
uint F_00947ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947ae0 */
uint F_00947ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947af0 */
uint F_00947af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947b00 */
uint F_00947b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947b10 */
uint F_00947b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947b10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947b70 */
uint F_00947b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947b70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947bc0 */
uint F_00947bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947c10 */
uint F_00947c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947c10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00947c50 */
undefined4 * F_00947c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00947c80 */
uint F_00947c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947c80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00947cc0 */
byte F_00947cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ce0 */
uint F_00947ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947d10 */
uint F_00947d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947d50 */
uint F_00947d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947d80 */
uint F_00947d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947dc0 */
uint F_00947dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x54 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947de0 */
byte F_00947de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947e00 */
uint F_00947e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947e00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00947e40 */
byte F_00947e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947e60 */
byte F_00947e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947e80 */
byte F_00947e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ea0 */
byte F_00947ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ec0 */
byte F_00947ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947ee0 */
byte F_00947ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f00 */
byte F_00947f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f20 */
byte F_00947f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f40 */
byte F_00947f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f60 */
byte F_00947f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947f80 */
byte F_00947f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947fa0 */
byte F_00947fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947fc0 */
byte F_00947fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00947fe0 */
byte F_00947fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00948000 */
byte F_00948000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x948000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00948020 */
byte F_00948020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x948020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00948040 */
byte F_00948040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x948040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00948060 */
byte F_00948060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x948060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00948080 */
byte F_00948080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x948080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009480a0 */
byte F_009480a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9480a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009480c0 */
byte F_009480c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9480c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009480e0 */
byte F_009480e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9480e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00948100 */
uint F_00948100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948100u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00929870(&(*(int * PTR32 *)&gen_args[2]));
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
      goto LAB_0094821a;
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
      piVar4 = (int *)F_00914980(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00915630(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_0094821a: ;
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
            F_0092a180((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_0092a1e0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_0092a180((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_009482d8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a1e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_009482d8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_0092a180((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_0092a1e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00948360 */
uint F_00948360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948360u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_009159a0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_0094847a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00915710(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_009156f0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_0094847a: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_0092a240((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_0092a2a0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_0092a240((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00948538: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_0092a2a0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_00948538;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_0092a240((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_0092a2a0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00429760(piVar3,0x28,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009485c0 */
uint F_009485c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9485c0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_009297a0(&(*(int * PTR32 *)&gen_args[2]));
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
      goto LAB_009486da;
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
      piVar4 = (int *)F_00915080(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00915740(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_009486da: ;
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
            F_0092a300((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_0092a360((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_0092a300((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00948798: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a360((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00948798;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_0092a300((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_0092a360((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00948820 */
uint F_00948820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948820u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00929740(&(*(int * PTR32 *)&gen_args[2]));
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
      goto LAB_0094893a;
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
      piVar4 = (int *)F_00915160(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00915770(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_0094893a: ;
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
            F_0092a3c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_0092a420((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_0092a3c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_009489f8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_0092a420((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_009489f8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_0092a3c0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_0092a420((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00948a80 */
uint F_00948a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00929740(this);
  return (uint)param_1;
}

/* ref: FUN_00948aa0 */
uint F_00948aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_009297a0(this);
  return (uint)param_1;
}

/* ref: FUN_00948ac0 */
uint F_00948ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00929870(this);
  return (uint)param_1;
}

/* ref: FUN_00948ae0 */
uint F_00948ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_009159a0(this);
  return (uint)param_1;
}

/* ref: FUN_00948b00 */
uint F_00948b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x948b00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00948b40 */
unsigned int F_00948b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x948b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00948b40(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00948b80 */
uint F_00948b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x948b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e0b0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00948d10 */
uint F_00948d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x948d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e120(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00948ea0 */
uint F_00948ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x948ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e1c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949030 */
uint F_00949030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e230(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009491c0 */
uint F_009491c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9491c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e2a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949350 */
uint F_00949350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e310(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_009494e0 */
uint F_009494e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9494e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e380(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949670 */
uint F_00949670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e3f0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949800 */
uint F_00949800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e460(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949990 */
uint F_00949990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e4d0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949b20 */
uint F_00949b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e540(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949cb0 */
uint F_00949cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e5b0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949e40 */
uint F_00949e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e620(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_00949fd0 */
uint F_00949fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x949fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e690(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094a160 */
uint F_0094a160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94a160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e700(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094a2f0 */
uint F_0094a2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94a2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e770(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094a480 */
uint F_0094a480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94a480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e7e0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094a610 */
uint F_0094a610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94a610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e850(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094a7a0 */
uint F_0094a7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94a7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e8c0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094a930 */
uint F_0094a930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94a930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e930(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094aac0 */
uint F_0094aac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94aac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093e9a0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094ac50 */
uint F_0094ac50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94ac50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ea10(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094ade0 */
uint F_0094ade0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94ade0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ea80(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094af70 */
uint F_0094af70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94af70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093eaf0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094b100 */
uint F_0094b100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94b100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093eb60(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094b290 */
uint F_0094b290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94b290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ebd0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094b420 */
uint F_0094b420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94b420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ec40(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094b5b0 */
uint F_0094b5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94b5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ecb0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094b740 */
uint F_0094b740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94b740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ed20(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094b8d0 */
uint F_0094b8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94b8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093edd0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094ba60 */
uint F_0094ba60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94ba60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ee80(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094bbf0 */
uint F_0094bbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94bbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093eef0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094bd80 */
uint F_0094bd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94bd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093ef60(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094bf10 */
uint F_0094bf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x94bf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * this_00;
  byte bVar1;
  char cVar2;
  int * this_01;
  uint uVar3;
  undefined * this_02;
  byte * pbVar4;
  int iVar5;
  bool bVar6;
  uint local_10;
  
  this_00 = (int *)((int)this + 0x23330);
  bVar6 = true;
  this_01 = (int *)F_0057f860(this_00,param_1);
  if (this_01 != (int *)0x0) {
    bVar1 = F_0055e470(this_01);
    bVar6 = bVar1 != 0;
    if ((*(byte *)((int)this_01 + 0x13d) != 0) && (!bVar6)) {
      F_0057fe00(this_00,(uint)*(byte *)((int)this_01 + 0x13d),0,0);
      *(undefined1 *)((int)this_01 + 0x13d) = 0;
    }
  }
  local_10 = 0;
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00);
  cVar2 = (char)uVar3;
  if (bVar6) {
    this_01 = (int *)F_0093efd0(this_00,param_1,param_2,param_3);
    if (this_01 != (int *)0x0) {
      this_02 = (undefined *)F_0075eae0(this,param_1);
      if (this_02 != (undefined *)0x0) {
        pbVar4 = (byte *)F_00cb0910(this_02,1);
        F_00587960(this_01,(uint)*pbVar4,param_6);
      }
      if (param_6 != 0) {
        if (cVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(char)this_01[0x43];
        }
        F_0057fe00(this_00,param_6,1,iVar5);
      }
      local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
      bVar1 = F_00591a40(this,this_01,param_4,param_5,param_6,param_7);
      if (bVar1 == 0) {
        ((code *)*(gen_code32 *)(*this_01 + 0x10))(this_01,1);
        return 0;
      }
      *(char *)((int)this_01 + 0x13d) = (char)param_6;
    }
  }
  else {
    *(char *)((int)this_01 + 0x13d) = (char)param_6;
    if (param_6 != 0) {
      if (cVar2 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(char)this_01[0x43];
      }
      F_0057fe00(this_00,param_6,1,iVar5);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_3,param_4,param_5,1);
    if ((char)uVar3 != '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0x14))(this_01,0);
    }
    local_10 = (uint)*(byte *)((int)this_01 + 0x13a);
  }
  if (cVar2 != '\0') {
    F_005a9ea0(this_00,this_01);
  }
  return local_10;
}

/* ref: FUN_0094c0a0 */
uint F_0094c0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x94c0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  
  for (iVar1 = param_2; (iVar1 != param_3 && (*(char *)(iVar1 + 0x14) == '\0'));
      iVar1 = iVar1 + 0x18) {
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_0094c0d0 */
uint F_0094c0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x94c0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_2;
  while ((piVar2 != param_3 && (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), uVar1 != param_4))) {
    piVar2 = piVar2 + 3;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_0094c0ff */
unsigned int F_0094c0ff(void)
{
  GEN_ENTER(0x94c0ffu, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0094c110 */
uint F_0094c110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x94c110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_2;
  while ((piVar2 != param_3 && (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), uVar1 != param_4))) {
    piVar2 = piVar2 + 6;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_0094c150 */
uint F_0094c150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x94c150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_2;
  while ((piVar2 != param_3 && (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), uVar1 != param_4))) {
    piVar2 = piVar2 + 4;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_0094c190 */
uint F_0094c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x94c190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = *param_2;
  param_1[1] = *param_3;
  return (uint)param_1;
}

/* ref: FUN_0094c1b0 */
uint F_0094c1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x94c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0094c1f0 */
uint F_0094c1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x94c1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int iVar1;
  
  for (iVar1 = param_2; iVar1 != param_3; iVar1 = iVar1 + 0xd4) {
    (*param_4)(iVar1);
  }
  *param_1 = param_4;
  return (uint)param_1;
}

/* ref: FUN_0094c220 */
uint F_0094c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x94c220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x34) == '\0') || (*(int *)((int)this + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f170(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this,uVar1,param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c2a0 */
uint F_0094c2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x94c2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x34) == '\0') || (*(int *)((int)this + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f200(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this,uVar1,param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c320 */
uint F_0094c320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x94c320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x34) == '\0') || (*(int *)((int)this + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f290(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this,uVar1,param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c3a0 */
uint F_0094c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x94c3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x34) == '\0') || (*(int *)((int)this + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f320(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this,uVar1,param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0094c420 */
uint F_0094c420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x94c420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x34) == '\0') || (*(int *)((int)this + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_0093f3b0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))),param_1,param_2,param_3,
                         *((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf6))) & 0xf,0);
    uVar2 = param_6;
    if (param_6 == 0) {
      uVar2 = uVar1;
    }
    uVar2 = F_00594fc0(this,uVar1,param_4,0,param_5,uVar2,0,1,0,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x13b))) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x13a)));
      return uVar2;
    }
  }
  return uVar2;
}

