#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00730980 */
GEN_NOFRAME uint GEN_THISCALL F_00730980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x730980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007237a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007309a0 */
GEN_NOFRAME uint GEN_THISCALL F_007309a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7309a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007237a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007309b0 */
GEN_FRAME uint GEN_THISCALL F_007309b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7309b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_007237a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00730a10 */
GEN_FRAME byte GEN_THISCALL F_00730a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00730a90 */
GEN_FRAME byte GEN_THISCALL F_00730a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00730ab0 */
GEN_FRAME byte GEN_THISCALL F_00730ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00730ad0 */
GEN_FRAME byte GEN_THISCALL F_00730ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: CallbackSheetWaiter_VEventFramework_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VArrayEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGuildleveAssignmentEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCustomTalkEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VDefaultTalkEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCraftEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VShopEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCraftLeveClientEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGCShopEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VWarpEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VStoryEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VSpecialShopEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VLeveDirector_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VBattleLeveDirector_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringLeveDirector_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCompanyLeveDirector_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VOpeningEventHandler_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestBattleDirector_Event_Game_Client_Game::vf0 */
GEN_FRAME uint GEN_THISCALL F_00730ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x730ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00730fe0 */
GEN_FRAME uint F_00730fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x730fe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007310c0 */
GEN_FRAME uint F_007310c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7310c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007310d0 */
GEN_FRAME uint F_007310d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7310d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00731110 */
GEN_FRAME uint F_00731110(unsigned int gen_a0)
{
  GEN_ENTER(0x731110u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00731120 */
GEN_FRAME uint GEN_STDCALL F_00731120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x731120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00731150 */
GEN_FRAME uint F_00731150(unsigned int gen_a0)
{
  GEN_ENTER(0x731150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007311f0 */
GEN_FRAME uint F_007311f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7311f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00731230 */
GEN_FRAME uint GEN_THISCALL F_00731230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x31))) == '\0') {
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

/* ref: FUN_00731290 */
GEN_FRAME uint F_00731290(unsigned int gen_a0)
{
  GEN_ENTER(0x731290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_007312d0 */
GEN_FRAME uint GEN_THISCALL F_007312d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7312d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x19))) == '\0') {
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

/* ref: FUN_00731360 */
GEN_FRAME uint GEN_THISCALL F_00731360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x1d))) == '\0') {
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

/* ref: FUN_007313f0 */
GEN_FRAME uint GEN_THISCALL F_007313f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7313f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x89))) == '\0') {
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

/* ref: FUN_00731450 */
GEN_FRAME uint GEN_THISCALL F_00731450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00731460 */
GEN_FRAME uint GEN_THISCALL F_00731460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00731490 */
GEN_FRAME uint GEN_THISCALL F_00731490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0x1c < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  return (uint)((1 << ((byte)param_1 & 0x1f) & *((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4)))) != 0);
}

/* ref: FUN_00731500 */
GEN_FRAME uint GEN_THISCALL F_00731500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
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

/* ref: FUN_00731560 */
GEN_FRAME uint F_00731560(unsigned int gen_a0)
{
  GEN_ENTER(0x731560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00731610 */
GEN_FRAME uint F_00731610(unsigned int gen_a0)
{
  GEN_ENTER(0x731610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007316a0 */
GEN_FRAME uint F_007316a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7316a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007316c0 */
GEN_FRAME uint F_007316c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7316c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007316d0 */
GEN_NOFRAME uint GEN_THISCALL F_007316d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7316d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724c40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007316e0 */
GEN_FRAME uint GEN_THISCALL F_007316e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7316e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007316f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007316f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7316f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00731740 */
GEN_FRAME byte GEN_THISCALL F_00731740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00731760 */
GEN_FRAME byte GEN_THISCALL F_00731760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731790 */
GEN_NOFRAME uint GEN_THISCALL F_00731790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x731790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724ce0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007317f0 */
GEN_FRAME uint GEN_THISCALL F_007317f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7317f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731800 */
GEN_FRAME byte GEN_THISCALL F_00731800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731850 */
GEN_FRAME uint GEN_THISCALL F_00731850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731860 */
GEN_FRAME byte GEN_THISCALL F_00731860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731880 */
GEN_FRAME uint GEN_THISCALL F_00731880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007318b0 */
GEN_NOFRAME uint GEN_THISCALL F_007318b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7318b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724e40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007318c0 */
GEN_FRAME byte GEN_THISCALL F_007318c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7318c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007318e0 */
GEN_FRAME uint GEN_THISCALL F_007318e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7318e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007318f0 */
GEN_FRAME uint GEN_THISCALL F_007318f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7318f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731900 */
GEN_FRAME byte GEN_THISCALL F_00731900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731920 */
GEN_FRAME uint GEN_THISCALL F_00731920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731940 */
GEN_FRAME uint GEN_THISCALL F_00731940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731960 */
GEN_FRAME byte GEN_THISCALL F_00731960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731990 */
GEN_FRAME uint GEN_THISCALL F_00731990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007319a0 */
GEN_FRAME byte GEN_THISCALL F_007319a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7319a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007319c0 */
GEN_FRAME uint GEN_THISCALL F_007319c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7319c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007319d0 */
GEN_FRAME byte GEN_THISCALL F_007319d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7319d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731a00 */
GEN_FRAME uint GEN_THISCALL F_00731a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731a10 */
GEN_FRAME byte GEN_THISCALL F_00731a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731a30 */
GEN_FRAME uint GEN_THISCALL F_00731a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731a60 */
GEN_FRAME uint GEN_THISCALL F_00731a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731a70 */
GEN_FRAME byte GEN_THISCALL F_00731a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731a90 */
GEN_FRAME uint GEN_THISCALL F_00731a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731aa0 */
GEN_FRAME byte GEN_THISCALL F_00731aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731ac0 */
GEN_FRAME uint GEN_THISCALL F_00731ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731ae0 */
GEN_FRAME byte GEN_THISCALL F_00731ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731b10 */
GEN_FRAME uint GEN_THISCALL F_00731b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731b20 */
GEN_FRAME uint GEN_THISCALL F_00731b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731b50 */
GEN_FRAME uint GEN_THISCALL F_00731b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731b70 */
GEN_NOFRAME uint GEN_THISCALL F_00731b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x731b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x25);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x25);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return (uint)this;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x25);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
    }
    *(int *)this = iVar2;
  }
  return (uint)this;
}

/* ref: FUN_00731bc0 */
GEN_FRAME uint GEN_THISCALL F_00731bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731be0 */
GEN_FRAME byte GEN_THISCALL F_00731be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731c00 */
GEN_FRAME uint GEN_THISCALL F_00731c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731c20 */
GEN_FRAME uint GEN_THISCALL F_00731c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731c40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00731c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x731c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x9d) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x9d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x9d);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x9d);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x9d);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x9d);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00731ca0 */
GEN_FRAME uint GEN_THISCALL F_00731ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731cf0 */
GEN_FRAME uint GEN_THISCALL F_00731cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731d00 */
GEN_FRAME byte GEN_THISCALL F_00731d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731d30 */
GEN_FRAME uint F_00731d30(unsigned int gen_a0)
{
  GEN_ENTER(0x731d30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00731d50 */
GEN_FRAME uint GEN_THISCALL F_00731d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00731d60 */
GEN_FRAME uint GEN_THISCALL F_00731d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00731d90 */
GEN_FRAME uint GEN_THISCALL F_00731d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731da0 */
GEN_FRAME byte GEN_THISCALL F_00731da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731dc0 */
GEN_FRAME uint GEN_THISCALL F_00731dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00731dd0 */
GEN_FRAME uint GEN_THISCALL F_00731dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731dd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00731e40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00731e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x731e40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00731e90 */
GEN_FRAME uint GEN_THISCALL F_00731e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731ea0 */
GEN_FRAME byte GEN_THISCALL F_00731ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731ec0 */
GEN_FRAME uint GEN_THISCALL F_00731ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731f20 */
GEN_FRAME uint F_00731f20(unsigned int gen_a0)
{
  GEN_ENTER(0x731f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00731f30 */
GEN_FRAME uint GEN_THISCALL F_00731f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731f40 */
GEN_FRAME byte GEN_THISCALL F_00731f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x731f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00731f90 */
GEN_FRAME uint GEN_THISCALL F_00731f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x731f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00731fb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00731fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x731fb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00732010 */
GEN_FRAME uint F_00732010(unsigned int gen_a0)
{
  GEN_ENTER(0x732010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00732040 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00732040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x732040u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_007320d0 */
GEN_FRAME byte GEN_THISCALL F_007320d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7320d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_007320f0 */
GEN_FRAME byte GEN_THISCALL F_007320f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7320f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00732110 */
GEN_FRAME byte GEN_THISCALL F_00732110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007322c0 */
GEN_FRAME uint GEN_THISCALL F_007322c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7322c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732300 */
GEN_FRAME uint GEN_THISCALL F_00732300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732360 */
GEN_FRAME uint GEN_THISCALL F_00732360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x65))) == '\0') {
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

/* ref: FUN_007323c0 */
GEN_FRAME uint F_007323c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7323c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007323d0 */
GEN_FRAME undefined4 * GEN_THISCALL F_007323d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7323d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0xbd) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0xbd) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00732410 */
GEN_FRAME uint GEN_STDCALL F_00732410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x732410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00732430 */
GEN_FRAME uint GEN_THISCALL F_00732430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732460 */
GEN_FRAME uint GEN_STDCALL F_00732460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x732460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00732480 */
GEN_FRAME uint GEN_THISCALL F_00732480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_007324c0 */
GEN_FRAME uint GEN_THISCALL F_007324c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7324c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_0073250a */
GEN_NOFRAME unsigned int F_0073250a(void)
{
  GEN_ENTER(0x73250au, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00732510 */
GEN_FRAME uint GEN_THISCALL F_00732510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x140;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732550 */
GEN_FRAME undefined4 * GEN_THISCALL F_00732550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732550u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00732580 */
GEN_FRAME undefined4 * GEN_THISCALL F_00732580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732580u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_007325b0 */
GEN_FRAME uint GEN_THISCALL F_007325b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7325b0u, gen_a0, gen_a1, 0u, 0u);
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
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00732600 */
GEN_FRAME uint GEN_THISCALL F_00732600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732600u, gen_a0, gen_a1, 0u, 0u);
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
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_00732660 */
GEN_FRAME uint GEN_THISCALL F_00732660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_007326a0 */
GEN_FRAME uint GEN_THISCALL F_007326a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7326a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_007326d0 */
GEN_FRAME uint GEN_THISCALL F_007326d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7326d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x88;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732710 */
GEN_FRAME uint GEN_STDCALL F_00732710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x732710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00732720 */
GEN_FRAME uint GEN_THISCALL F_00732720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732770 */
GEN_FRAME undefined4 * GEN_THISCALL F_00732770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x31) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x31) == '\0');
  }
  return puVar2;
}

/* ref: FUN_007327c0 */
GEN_FRAME uint F_007327c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7327c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007327d0 */
GEN_FRAME uint F_007327d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7327d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_007327e0 */
GEN_FRAME uint GEN_STDCALL F_007327e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7327e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00732800 */
GEN_FRAME uint GEN_THISCALL F_00732800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732840 */
GEN_FRAME undefined4 * GEN_THISCALL F_00732840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_00732870 */
GEN_FRAME undefined4 * GEN_THISCALL F_00732870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_007328b0 */
GEN_FRAME uint GEN_THISCALL F_007328b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7328b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x28;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_007328f0 */
GEN_FRAME undefined4 * GEN_THISCALL F_007328f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7328f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x2cd) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x2cd) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00732930 */
GEN_FRAME uint GEN_STDCALL F_00732930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x732930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00732940 */
GEN_FRAME uint GEN_THISCALL F_00732940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732980 */
GEN_FRAME uint GEN_THISCALL F_00732980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_007329b0 */
GEN_FRAME undefined4 * GEN_THISCALL F_007329b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7329b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x101) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x101) == '\0');
  }
  return puVar2;
}

/* ref: FUN_007329f0 */
GEN_FRAME undefined4 * GEN_THISCALL F_007329f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7329f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x9d) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x9d) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00732a30 */
GEN_FRAME undefined4 * GEN_THISCALL F_00732a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x9d) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x9d) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00732a70 */
GEN_FRAME uint GEN_THISCALL F_00732a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732a80 */
GEN_FRAME uint GEN_THISCALL F_00732a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732a80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00732ac0 */
GEN_FRAME uint GEN_THISCALL F_00732ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732ad0 */
GEN_FRAME uint GEN_THISCALL F_00732ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00723110(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00732af0 */
GEN_FRAME uint GEN_THISCALL F_00732af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732b00 */
GEN_FRAME uint GEN_THISCALL F_00732b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732b10 */
GEN_FRAME uint GEN_THISCALL F_00732b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732b20 */
GEN_FRAME uint GEN_THISCALL F_00732b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732b60 */
GEN_FRAME uint GEN_THISCALL F_00732b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732b90 */
GEN_FRAME uint GEN_THISCALL F_00732b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00732bb0 */
GEN_FRAME uint GEN_THISCALL F_00732bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732bc0 */
GEN_FRAME uint GEN_THISCALL F_00732bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732be0 */
GEN_NOFRAME uint GEN_THISCALL F_00732be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x732be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007262e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00732bf0 */
GEN_FRAME uint GEN_THISCALL F_00732bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_007262e0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00732c10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00732c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x732c10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00732c60 */
GEN_FRAME uint GEN_THISCALL F_00732c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732c70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00732c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x732c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0xbd) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xbd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xbd);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0xbd);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xbd);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xbd);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00732cd0 */
GEN_FRAME uint GEN_STDCALL F_00732cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x732cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00732cf0 */
GEN_FRAME uint GEN_THISCALL F_00732cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732d30 */
GEN_FRAME uint GEN_THISCALL F_00732d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732d40 */
GEN_FRAME uint GEN_THISCALL F_00732d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732d40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x10;
  return (uint)in_ecx;
}

/* ref: FUN_00732d70 */
GEN_FRAME uint GEN_THISCALL F_00732d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xb8;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732db0 */
GEN_FRAME uint GEN_THISCALL F_00732db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732db0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xb8;
  return (uint)in_ecx;
}

/* ref: FUN_00732dd0 */
GEN_FRAME uint GEN_THISCALL F_00732dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732de0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00732de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x732de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x2cd) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2cd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x2cd);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x2cd);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2cd);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2cd);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00732e50 */
GEN_FRAME uint GEN_THISCALL F_00732e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00732e80 */
GEN_FRAME uint GEN_THISCALL F_00732e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732e80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x14;
  return (uint)in_ecx;
}

/* ref: FUN_00732ea0 */
GEN_FRAME uint GEN_THISCALL F_00732ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732eb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00732eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x732eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x65) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x65);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x65);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x65);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00732f10 */
GEN_FRAME uint F_00732f10(unsigned int gen_a0)
{
  GEN_ENTER(0x732f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00732f20 */
GEN_FRAME uint GEN_THISCALL F_00732f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00732f50 */
GEN_FRAME uint GEN_THISCALL F_00732f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x732f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00732f60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00732f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x732f60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00732fc0 */
GEN_FRAME uint GEN_THISCALL F_00732fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x732fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x140;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00733000 */
GEN_FRAME uint GEN_STDCALL F_00733000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x733000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00733020 */
GEN_FRAME uint GEN_THISCALL F_00733020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x74;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00733060 */
GEN_FRAME uint F_00733060(unsigned int gen_a0)
{
  GEN_ENTER(0x733060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00733070 */
GEN_FRAME uint GEN_STDCALL F_00733070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x733070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00733090 */
GEN_FRAME uint GEN_THISCALL F_00733090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b0;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_007330d0 */
GEN_FRAME undefined4 * GEN_THISCALL F_007330d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7330d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x6d) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x6d) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00733100 */
GEN_FRAME uint GEN_THISCALL F_00733100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00733130 */
GEN_FRAME uint GEN_THISCALL F_00733130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00733140 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00733140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x733140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x6d) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x6d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x6d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x6d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x6d);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x6d);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00733190 */
GEN_FRAME uint GEN_THISCALL F_00733190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007331a0 */
GEN_FRAME undefined4 * GEN_THISCALL F_007331a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7331a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_007331d0 */
GEN_FRAME uint GEN_THISCALL F_007331d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7331d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007331e0 */
GEN_FRAME uint GEN_THISCALL F_007331e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7331e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007331f0 */
GEN_FRAME uint GEN_THISCALL F_007331f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7331f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00733210 */
GEN_FRAME uint GEN_THISCALL F_00733210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733210u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00733250 */
GEN_FRAME uint GEN_THISCALL F_00733250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733250u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x140;
  return (uint)in_ecx;
}

/* ref: FUN_00733280 */
GEN_NOFRAME uint GEN_THISCALL F_00733280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x733280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007267d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00733290 */
GEN_FRAME uint GEN_THISCALL F_00733290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007332a0 */
GEN_FRAME uint GEN_THISCALL F_007332a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7332a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x54;
  return (uint)in_ecx;
}

/* ref: FUN_007332c0 */
GEN_FRAME uint GEN_THISCALL F_007332c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7332c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007332d0 */
GEN_FRAME uint GEN_THISCALL F_007332d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7332d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x10;
  return (uint)in_ecx;
}

/* ref: FUN_007332f0 */
GEN_FRAME uint GEN_THISCALL F_007332f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7332f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00733370 */
GEN_FRAME uint GEN_THISCALL F_00733370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_007333d0 */
GEN_FRAME uint F_007333d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7333d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007333f0 */
GEN_FRAME uint GEN_THISCALL F_007333f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7333f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
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

/* ref: FUN_00733450 */
GEN_FRAME uint GEN_THISCALL F_00733450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
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

/* ref: FUN_007334b0 */
GEN_FRAME uint F_007334b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7334b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007334e0 */
GEN_FRAME uint GEN_STDCALL F_007334e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7334e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00733530 */
GEN_FRAME uint GEN_THISCALL F_00733530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733530u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00733590 */
GEN_FRAME uint GEN_THISCALL F_00733590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733590u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00733630 */
GEN_FRAME uint GEN_THISCALL F_00733630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
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

/* ref: FUN_00733690 */
GEN_FRAME uint GEN_THISCALL F_00733690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
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

/* ref: FUN_00733770 */
GEN_FRAME uint F_00733770(unsigned int gen_a0)
{
  GEN_ENTER(0x733770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007337d0 */
GEN_FRAME uint GEN_STDCALL F_007337d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7337d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007337f0 */
GEN_FRAME uint GEN_THISCALL F_007337f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7337f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00733820 */
GEN_FRAME uint GEN_THISCALL F_00733820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x2cd) == '\0') {
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

/* ref: FUN_00733880 */
GEN_FRAME uint GEN_THISCALL F_00733880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x2cd))) == '\0') {
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

/* ref: FUN_007338f0 */
GEN_FRAME uint GEN_THISCALL F_007338f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7338f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x101) == '\0') {
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

/* ref: FUN_00733950 */
GEN_FRAME uint GEN_THISCALL F_00733950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x101))) == '\0') {
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

/* ref: FUN_007339c0 */
GEN_FRAME uint GEN_THISCALL F_007339c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7339c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x9d) == '\0') {
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

/* ref: FUN_00733a30 */
GEN_FRAME uint GEN_THISCALL F_00733a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724c40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00733a50 */
GEN_FRAME uint GEN_THISCALL F_00733a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724ce0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00733a70 */
GEN_FRAME uint GEN_THISCALL F_00733a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724e40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00733a90 */
GEN_NOFRAME uint GEN_THISCALL F_00733a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x733a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00726b40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00733aa0 */
GEN_FRAME uint GEN_THISCALL F_00733aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733aa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x10;
  return (uint)in_ecx;
}

/* ref: FUN_00733ac0 */
GEN_FRAME uint GEN_THISCALL F_00733ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_007237a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00733b10 */
GEN_FRAME uint GEN_THISCALL F_00733b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00733b40 */
GEN_FRAME uint GEN_THISCALL F_00733b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x733b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00733b50 */
GEN_FRAME byte GEN_THISCALL F_00733b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00733b70 */
GEN_FRAME byte GEN_THISCALL F_00733b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00733b90 */
GEN_FRAME uint GEN_THISCALL F_00733b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733b90u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00733bb0 */
GEN_FRAME uint GEN_THISCALL F_00733bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0xbd) == '\0') {
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

/* ref: FUN_00733c10 */
GEN_FRAME uint GEN_THISCALL F_00733c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0xbd))) == '\0') {
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

/* ref: FUN_00733c70 */
GEN_FRAME uint GEN_THISCALL F_00733c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x19) == '\0') {
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

/* ref: FUN_00733cd0 */
GEN_FRAME uint GEN_THISCALL F_00733cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x19))) == '\0') {
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

/* ref: FUN_00733d30 */
GEN_FRAME uint GEN_THISCALL F_00733d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733d30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00733d90 */
GEN_FRAME uint GEN_THISCALL F_00733d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733d90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00733df0 */
GEN_FRAME uint GEN_THISCALL F_00733df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00733e50 */
GEN_FRAME uint GEN_THISCALL F_00733e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00733eb0 */
GEN_FRAME uint GEN_THISCALL F_00733eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x65) == '\0') {
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

/* ref: FUN_00733f10 */
GEN_FRAME uint GEN_THISCALL F_00733f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x65))) == '\0') {
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

/* ref: FUN_00733f70 */
GEN_NOFRAME uint GEN_THISCALL F_00733f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x733f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00726e20(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00733f90 */
GEN_FRAME uint GEN_THISCALL F_00733f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
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

/* ref: FUN_00733ff0 */
GEN_FRAME uint GEN_THISCALL F_00733ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x733ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
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

/* ref: FUN_00734050 */
GEN_FRAME uint GEN_THISCALL F_00734050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x734050u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_007340b0 */
GEN_FRAME uint GEN_THISCALL F_007340b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7340b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00734110 */
GEN_FRAME uint GEN_THISCALL F_00734110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x734110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x6d) == '\0') {
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

/* ref: FUN_00734170 */
GEN_FRAME uint GEN_THISCALL F_00734170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x734170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x6d))) == '\0') {
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

/* ref: FUN_007341d0 */
GEN_NOFRAME uint GEN_THISCALL F_007341d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7341d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00726ee0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007341e0 */
GEN_NOFRAME uint GEN_THISCALL F_007341e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7341e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00726f30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007341f0 */
GEN_FRAME uint GEN_THISCALL F_007341f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7341f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_007267d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00734210 */
GEN_FRAME uint GEN_THISCALL F_00734210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x734210u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00734250 */
GEN_FRAME uint GEN_THISCALL F_00734250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x734250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x25) == '\0') {
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

/* ref: FUN_007342b0 */
GEN_FRAME uint GEN_THISCALL F_007342b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7342b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x25))) == '\0') {
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

/* ref: FUN_00734310 */
GEN_FRAME uint GEN_STDCALL F_00734310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x734310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00734320 */
GEN_FRAME uint GEN_THISCALL F_00734320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x734320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x7286f0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00734340 */
GEN_FRAME uint F_00734340(unsigned int gen_a0)
{
  GEN_ENTER(0x734340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = 0;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 4))))(*(int * PTR32 *)(iVar1 + 4) GEN_EDX_ARG);
    uVar2 = (uint)*((byte *)GEN_TOP((*(int *)(iVar1 + 4) + 0x2db8)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007343b0 */
GEN_FRAME uint F_007343b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7343b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = 0;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 4))))(*(int * PTR32 *)(iVar1 + 4) GEN_EDX_ARG);
    uVar2 = (uint)*((byte *)GEN_TOP((*(int *)(iVar1 + 4) + 0x2db9)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734420 */
GEN_FRAME uint F_00734420(unsigned int gen_a0)
{
  GEN_ENTER(0x734420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = 0;
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 4))))(*(int * PTR32 *)(iVar1 + 4) GEN_EDX_ARG);
    uVar2 = (uint)*((byte *)GEN_TOP((*(int *)(iVar1 + 4) + 0x2dbc)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734490 */
GEN_FRAME uint F_00734490(unsigned int gen_a0)
{
  GEN_ENTER(0x734490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = 0;
  if (*piVar2 != 0) {
    uVar1 = (uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x2db8)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007344f0 */
GEN_FRAME uint F_007344f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7344f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = 0;
  if (*piVar2 != 0) {
    uVar1 = (uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x2db9)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734550 */
GEN_FRAME uint GEN_THISCALL F_00734550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x734550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236e8),param_1);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  uVar1 = F_00729310(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236e8),uVar1,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007345d0 */
GEN_FRAME uint GEN_THISCALL F_007345d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7345d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236ec),param_1);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  uVar1 = F_00729390(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236ec),uVar1,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00734650 */
GEN_FRAME uint GEN_THISCALL F_00734650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x734650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f0),param_1);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  uVar1 = F_00729410(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236f0),uVar1,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007346d0 */
GEN_FRAME uint GEN_THISCALL F_007346d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7346d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f4),param_1);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  uVar1 = F_00729490(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236f4),uVar1,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00734750 */
GEN_FRAME uint GEN_THISCALL F_00734750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x734750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f8),param_1);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  uVar1 = F_00729510(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236f8),uVar1,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007347d0 */
GEN_FRAME uint F_007347d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7347d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      cVar1 = *(char *)(iVar4 + 8);
      goto LAB_00734827;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_00734827: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)cVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734850 */
GEN_FRAME uint F_00734850(unsigned int gen_a0)
{
  GEN_ENTER(0x734850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      cVar1 = *(char *)(iVar4 + 9);
      goto LAB_007348a7;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_007348a7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)cVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007348d0 */
GEN_FRAME uint F_007348d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7348d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      cVar1 = *(char *)(iVar4 + 10);
      goto LAB_00734927;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_00734927: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)cVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734950 */
GEN_FRAME uint F_00734950(unsigned int gen_a0)
{
  GEN_ENTER(0x734950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      cVar1 = *(char *)(iVar4 + 0xb);
      goto LAB_007349a7;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_007349a7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)cVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007349d0 */
GEN_FRAME uint F_007349d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7349d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      cVar1 = *(char *)(iVar4 + 0xc);
      goto LAB_00734a27;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_00734a27: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)cVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734a50 */
GEN_FRAME uint F_00734a50(unsigned int gen_a0)
{
  GEN_ENTER(0x734a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      cVar1 = *(char *)(iVar4 + 0xd);
      goto LAB_00734aa7;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_00734aa7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)cVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734ad0 */
GEN_FRAME uint F_00734ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x734ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)*(byte *)(iVar3 + 8);
      goto LAB_00734b27;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734b27: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734b50 */
GEN_FRAME uint F_00734b50(unsigned int gen_a0)
{
  GEN_ENTER(0x734b50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)*(byte *)(iVar3 + 9);
      goto LAB_00734ba7;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734ba7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734bd0 */
GEN_FRAME uint F_00734bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x734bd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)*(byte *)(iVar3 + 10);
      goto LAB_00734c27;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734c27: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734c50 */
GEN_FRAME uint F_00734c50(unsigned int gen_a0)
{
  GEN_ENTER(0x734c50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)*(byte *)(iVar3 + 0xb);
      goto LAB_00734ca7;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734ca7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734cd0 */
GEN_FRAME uint F_00734cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x734cd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)*(byte *)(iVar3 + 0xc);
      goto LAB_00734d27;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734d27: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734d50 */
GEN_FRAME uint F_00734d50(unsigned int gen_a0)
{
  GEN_ENTER(0x734d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)*(byte *)(iVar3 + 0xd);
      goto LAB_00734da7;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734da7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734dd0 */
GEN_FRAME uint F_00734dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x734dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 8) >> 4);
      goto LAB_00734e27;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734e27: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734e60 */
GEN_FRAME uint F_00734e60(unsigned int gen_a0)
{
  GEN_ENTER(0x734e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 9) >> 4);
      goto LAB_00734eb7;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734eb7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734ef0 */
GEN_FRAME uint F_00734ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x734ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 10) >> 4);
      goto LAB_00734f47;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734f47: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00734f80 */
GEN_FRAME uint F_00734f80(unsigned int gen_a0)
{
  GEN_ENTER(0x734f80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 0xb) >> 4);
      goto LAB_00734fd7;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00734fd7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735010 */
GEN_FRAME uint F_00735010(unsigned int gen_a0)
{
  GEN_ENTER(0x735010u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 0xc) >> 4);
      goto LAB_00735067;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735067: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007350a0 */
GEN_FRAME uint F_007350a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7350a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 0xd) >> 4);
      goto LAB_007350f7;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_007350f7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735130 */
GEN_FRAME uint F_00735130(unsigned int gen_a0)
{
  GEN_ENTER(0x735130u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 8) & 0xf);
      goto LAB_00735187;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735187: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007351b0 */
GEN_FRAME uint F_007351b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7351b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 9) & 0xf);
      goto LAB_00735207;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735207: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735230 */
GEN_FRAME uint F_00735230(unsigned int gen_a0)
{
  GEN_ENTER(0x735230u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 10) & 0xf);
      goto LAB_00735287;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735287: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007352b0 */
GEN_FRAME uint F_007352b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7352b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 0xb) & 0xf);
      goto LAB_00735307;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735307: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735330 */
GEN_FRAME uint F_00735330(unsigned int gen_a0)
{
  GEN_ENTER(0x735330u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 0xc) & 0xf);
      goto LAB_00735387;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735387: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007353b0 */
GEN_FRAME uint F_007353b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7353b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)(*(byte *)(iVar3 + 0xd) & 0xf);
      goto LAB_00735407;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735407: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735430 */
GEN_FRAME uint F_00735430(unsigned int gen_a0)
{
  GEN_ENTER(0x735430u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      sVar4 = CONCAT11(*(undefined1 *)(iVar3 + 8),*(undefined1 *)(iVar3 + 9));
      goto LAB_00735487;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar5 < 0x1e);
  sVar4 = 0;
LAB_00735487: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)sVar4);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007354c0 */
GEN_FRAME uint F_007354c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7354c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      sVar4 = CONCAT11(*(undefined1 *)(iVar3 + 10),*(undefined1 *)(iVar3 + 0xb));
      goto LAB_00735517;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar5 < 0x1e);
  sVar4 = 0;
LAB_00735517: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)sVar4);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735550 */
GEN_FRAME uint F_00735550(unsigned int gen_a0)
{
  GEN_ENTER(0x735550u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      sVar4 = CONCAT11(*(undefined1 *)(iVar3 + 0xc),*(undefined1 *)(iVar3 + 0xd));
      goto LAB_007355a7;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar5 < 0x1e);
  sVar4 = 0;
LAB_007355a7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)sVar4);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007355e0 */
GEN_FRAME uint F_007355e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7355e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 8),*(undefined1 *)(iVar3 + 9));
      goto LAB_00735637;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735637: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735670 */
GEN_FRAME uint F_00735670(unsigned int gen_a0)
{
  GEN_ENTER(0x735670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 10),*(undefined1 *)(iVar3 + 0xb));
      goto LAB_007356c7;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_007356c7: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735700 */
GEN_FRAME uint F_00735700(unsigned int gen_a0)
{
  GEN_ENTER(0x735700u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a4ffd0();
  iVar4 = 0;
  iVar3 = uVar2 + 0x13b4;
  do {
    if (*(short *)(iVar3 + 4) == (short)uVar1) {
      uVar1 = (uint)CONCAT11(*(undefined1 *)(iVar3 + 0xc),*(undefined1 *)(iVar3 + 0xd));
      goto LAB_00735757;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x1e);
  uVar1 = 0;
LAB_00735757: ;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735790 */
GEN_FRAME uint F_00735790(unsigned int gen_a0)
{
  GEN_ENTER(0x735790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar1 = F_00729c90(uVar1 & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735800 */
GEN_FRAME uint F_00735800(unsigned int gen_a0)
{
  GEN_ENTER(0x735800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar1 = F_00729ce0(uVar1 & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735870 */
GEN_FRAME uint F_00735870(unsigned int gen_a0)
{
  GEN_ENTER(0x735870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  bVar1 = F_00729d30(uVar2 & 0xffff,uVar3 - 1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007358f0 */
GEN_FRAME uint F_007358f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7358f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  bVar1 = F_00729d80(uVar2 & 0xffff,uVar3 - 1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735970 */
GEN_FRAME uint F_00735970(unsigned int gen_a0)
{
  GEN_ENTER(0x735970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  bVar1 = F_00729dd0(uVar2 & 0xffff,uVar3 - 1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007359f0 */
GEN_FRAME uint F_007359f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7359f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  bVar1 = F_00729e20(uVar2 & 0xffff,uVar3 - 1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735a70 */
GEN_FRAME uint F_00735a70(unsigned int gen_a0)
{
  GEN_ENTER(0x735a70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  bVar1 = F_00729e70(uVar2 & 0xffff,uVar3 - 1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735af0 */
GEN_FRAME uint F_00735af0(unsigned int gen_a0)
{
  GEN_ENTER(0x735af0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  bVar1 = F_00729ec0(uVar2 & 0xffff,uVar3 - 1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00735b70 */
GEN_FRAME uint GEN_THISCALL F_00735b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x735b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236fc),param_1);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  uVar1 = F_00729f10(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236fc),uVar1,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00735bf0 */
GEN_FRAME byte GEN_THISCALL F_00735bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x735bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_00729fe0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00735ca0 */
GEN_FRAME byte GEN_THISCALL F_00735ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x735ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a060(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00735d50 */
GEN_FRAME byte GEN_THISCALL F_00735d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x735d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a130(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00735e00 */
GEN_FRAME byte GEN_THISCALL F_00735e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x735e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a1b0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00735eb0 */
GEN_FRAME byte GEN_THISCALL F_00735eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x735eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a240(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00735f60 */
GEN_FRAME byte GEN_THISCALL F_00735f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x735f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a2e0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00736010 */
GEN_FRAME byte GEN_THISCALL F_00736010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x736010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a390(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007360c0 */
GEN_FRAME byte GEN_THISCALL F_007360c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7360c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a430(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00736170 */
GEN_FRAME uint GEN_THISCALL F_00736170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x736170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00736190 */
GEN_FRAME uint GEN_THISCALL F_00736190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x736190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007361b0 */
GEN_FRAME byte GEN_THISCALL F_007361b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7361b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a570(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00736260 */
GEN_FRAME byte GEN_THISCALL F_00736260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x736260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a600(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00736310 */
GEN_FRAME byte GEN_THISCALL F_00736310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x736310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a680(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007363c0 */
GEN_FRAME byte GEN_THISCALL F_007363c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7363c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a720(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00736470 */
GEN_FRAME byte GEN_THISCALL F_00736470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x736470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a7a0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00736520 */
GEN_FRAME byte GEN_THISCALL F_00736520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x736520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a820(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_007365d0 */
GEN_FRAME byte GEN_THISCALL F_007365d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7365d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072a8a0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00736680 */
GEN_FRAME uint F_00736680(unsigned int gen_a0)
{
  GEN_ENTER(0x736680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1de));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007366d0 */
GEN_FRAME uint F_007366d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7366d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1df));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736720 */
GEN_FRAME uint F_00736720(unsigned int gen_a0)
{
  GEN_ENTER(0x736720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736770 */
GEN_FRAME uint F_00736770(unsigned int gen_a0)
{
  GEN_ENTER(0x736770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e1));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007367c0 */
GEN_FRAME uint F_007367c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7367c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e2));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736810 */
GEN_FRAME uint F_00736810(unsigned int gen_a0)
{
  GEN_ENTER(0x736810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e3));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736860 */
GEN_FRAME uint F_00736860(unsigned int gen_a0)
{
  GEN_ENTER(0x736860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007368b0 */
GEN_FRAME uint F_007368b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7368b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e5));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736900 */
GEN_FRAME uint F_00736900(unsigned int gen_a0)
{
  GEN_ENTER(0x736900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e6));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736950 */
GEN_FRAME uint F_00736950(unsigned int gen_a0)
{
  GEN_ENTER(0x736950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e7));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007369a0 */
GEN_FRAME uint F_007369a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7369a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1de) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736a00 */
GEN_FRAME uint F_00736a00(unsigned int gen_a0)
{
  GEN_ENTER(0x736a00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1df) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736a60 */
GEN_FRAME uint F_00736a60(unsigned int gen_a0)
{
  GEN_ENTER(0x736a60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e0) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736ac0 */
GEN_FRAME uint F_00736ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x736ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e1) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736b20 */
GEN_FRAME uint F_00736b20(unsigned int gen_a0)
{
  GEN_ENTER(0x736b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e2) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736b80 */
GEN_FRAME uint F_00736b80(unsigned int gen_a0)
{
  GEN_ENTER(0x736b80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e3) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736be0 */
GEN_FRAME uint F_00736be0(unsigned int gen_a0)
{
  GEN_ENTER(0x736be0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e4) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736c40 */
GEN_FRAME uint F_00736c40(unsigned int gen_a0)
{
  GEN_ENTER(0x736c40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e5) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736ca0 */
GEN_FRAME uint F_00736ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x736ca0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e6) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736d00 */
GEN_FRAME uint F_00736d00(unsigned int gen_a0)
{
  GEN_ENTER(0x736d00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e7) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736d60 */
GEN_FRAME uint F_00736d60(unsigned int gen_a0)
{
  GEN_ENTER(0x736d60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1de) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736dc0 */
GEN_FRAME uint F_00736dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x736dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1df) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736e20 */
GEN_FRAME uint F_00736e20(unsigned int gen_a0)
{
  GEN_ENTER(0x736e20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e0) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736e80 */
GEN_FRAME uint F_00736e80(unsigned int gen_a0)
{
  GEN_ENTER(0x736e80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e1) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736ee0 */
GEN_FRAME uint F_00736ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x736ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e2) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736f40 */
GEN_FRAME uint F_00736f40(unsigned int gen_a0)
{
  GEN_ENTER(0x736f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e3) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00736fa0 */
GEN_FRAME uint F_00736fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x736fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e4) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737000 */
GEN_FRAME uint F_00737000(unsigned int gen_a0)
{
  GEN_ENTER(0x737000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e5) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737060 */
GEN_FRAME uint F_00737060(unsigned int gen_a0)
{
  GEN_ENTER(0x737060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e6) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007370c0 */
GEN_FRAME uint F_007370c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7370c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e7) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737120 */
GEN_FRAME uint F_00737120(unsigned int gen_a0)
{
  GEN_ENTER(0x737120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1de),
                                    *(undefined1 *)(*piVar2 + 0x1df)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737190 */
GEN_FRAME uint F_00737190(unsigned int gen_a0)
{
  GEN_ENTER(0x737190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e0),
                                    *(undefined1 *)(*piVar2 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737200 */
GEN_FRAME uint F_00737200(unsigned int gen_a0)
{
  GEN_ENTER(0x737200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e2),
                                    *(undefined1 *)(*piVar2 + 0x1e3)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737270 */
GEN_FRAME uint F_00737270(unsigned int gen_a0)
{
  GEN_ENTER(0x737270u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e4),
                                    *(undefined1 *)(*piVar2 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007372e0 */
GEN_FRAME uint F_007372e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7372e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e6),
                                    *(undefined1 *)(*piVar2 + 0x1e7)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737350 */
GEN_FRAME uint F_00737350(unsigned int gen_a0)
{
  GEN_ENTER(0x737350u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1de),*(undefined1 *)(*piVar2 + 0x1df)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007373b0 */
GEN_FRAME uint F_007373b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7373b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e0),*(undefined1 *)(*piVar2 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737410 */
GEN_FRAME uint F_00737410(unsigned int gen_a0)
{
  GEN_ENTER(0x737410u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e2),*(undefined1 *)(*piVar2 + 0x1e3)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737470 */
GEN_FRAME uint F_00737470(unsigned int gen_a0)
{
  GEN_ENTER(0x737470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e4),*(undefined1 *)(*piVar2 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007374d0 */
GEN_FRAME uint F_007374d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7374d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e6),*(undefined1 *)(*piVar2 + 0x1e7)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737530 */
GEN_FRAME uint F_00737530(unsigned int gen_a0)
{
  GEN_ENTER(0x737530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1de),
                                          *(undefined1 *)(iVar1 + 0x1df)),
                                 *(undefined1 *)(iVar1 + 0x1e0)),*(undefined1 *)(iVar1 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007375b0 */
GEN_FRAME uint F_007375b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7375b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1e2),
                                          *(undefined1 *)(iVar1 + 0x1e3)),
                                 *(undefined1 *)(iVar1 + 0x1e4)),*(undefined1 *)(iVar1 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737630 */
GEN_FRAME uint F_00737630(unsigned int gen_a0)
{
  GEN_ENTER(0x737630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1de),
                                          *(undefined1 *)(iVar1 + 0x1df)),
                                 *(undefined1 *)(iVar1 + 0x1e0)),*(undefined1 *)(iVar1 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007376b0 */
GEN_FRAME uint F_007376b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7376b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1e2),
                                          *(undefined1 *)(iVar1 + 0x1e3)),
                                 *(undefined1 *)(iVar1 + 0x1e4)),*(undefined1 *)(iVar1 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737730 */
GEN_FRAME uint F_00737730(unsigned int gen_a0)
{
  GEN_ENTER(0x737730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e7 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007377b0 */
GEN_FRAME uint F_007377b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7377b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e6 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737830 */
GEN_FRAME uint F_00737830(unsigned int gen_a0)
{
  GEN_ENTER(0x737830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e5 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007378b0 */
GEN_FRAME uint F_007378b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7378b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e4 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737930 */
GEN_FRAME uint F_00737930(unsigned int gen_a0)
{
  GEN_ENTER(0x737930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e3 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_007379b0 */
GEN_FRAME uint F_007379b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7379b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e2 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737a30 */
GEN_FRAME uint F_00737a30(unsigned int gen_a0)
{
  GEN_ENTER(0x737a30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e1 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737ab0 */
GEN_FRAME uint F_00737ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x737ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e0 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737b30 */
GEN_FRAME uint F_00737b30(unsigned int gen_a0)
{
  GEN_ENTER(0x737b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1df + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737bb0 */
GEN_FRAME uint F_00737bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x737bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1de + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00737c30 */
GEN_FRAME byte GEN_THISCALL F_00737c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x737c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118 GEN_EDX_FWD);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar2 = F_0042a990((int)this + 0x118 GEN_EDX_ARG);
    F_0072aeb0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00737ce0 */
GEN_FRAME uint F_00737ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737d00 */
GEN_FRAME uint F_00737d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737d20 */
GEN_FRAME uint F_00737d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737d40 */
GEN_FRAME uint F_00737d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x737d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00737d60 */
GEN_FRAME uint F_00737d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737d80 */
GEN_FRAME uint F_00737d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737da0 */
GEN_FRAME uint F_00737da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737dc0 */
GEN_FRAME uint F_00737dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737de0 */
GEN_FRAME uint F_00737de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737e00 */
GEN_FRAME uint F_00737e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737e20 */
GEN_FRAME uint F_00737e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00737e50 */
GEN_FRAME unsigned int F_00737e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00737e80 */
GEN_FRAME uint F_00737e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737ea0 */
GEN_FRAME uint F_00737ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00737ec0 */
GEN_FRAME uint F_00737ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ec0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00737ef0 */
GEN_FRAME unsigned int F_00737ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00737f10 */
GEN_FRAME unsigned int F_00737f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00737f30 */
GEN_FRAME uint F_00737f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00737f60 */
GEN_FRAME uint F_00737f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00737f90 */
GEN_FRAME uint F_00737f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x737f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_2)(param_2 GEN_EDX_ARG,0);
  return uVar1;
}

