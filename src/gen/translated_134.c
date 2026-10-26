#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf150 */
uint F_00b96940(void)
{
  GEN_ENTER(0xb96940u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f008);
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf153 */
byte F_00b96950(void)
{
  GEN_ENTER(0xb96950u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf149 */
uint F_00b96960(void)
{
  GEN_ENTER(0xb96960u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f00c);
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf150 */
uint F_00b96970(void)
{
  GEN_ENTER(0xb96970u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f010);
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf153 */
byte F_00b96980(void)
{
  GEN_ENTER(0xb96980u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b969b0 */
uint F_00b969b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb969b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf2 */
uint F_00b96a00(unsigned int gen_a0)
{
  GEN_ENTER(0xb96a00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_00b96a20 */
uint F_00b96a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f9678));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf2 */
uint F_00b96a80(unsigned int gen_a0)
{
  GEN_ENTER(0xb96a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_00b96a90 */
uint F_00b96a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb96a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f9694))
  ;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VInstanceContentGuideEventHandler_InstanceContent_Game_Client_Game::vf1 */
uint F_00b96ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b96b00 */
uint F_00b96b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SheetWaiter_VContentTalkEventHandler_InstanceContent_Game_Client_Game::vf0 */
uint F_00b96b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b96b60 */
uint F_00b96b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b96ba0 */
uint F_00b96ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xb96ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(ushort *)((int)this + 0x2a) = *(ushort *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x14) < (uint)*(ushort *)((int)this + 0x28)) {
    *(short *)((int)this + 0x2a) = (short)*(uint *)((int)this + 0x14);
  }
  uVar1 = 0;
  if (*(short *)((int)this + 0x2a) != 0) {
    do {
      F_00cb4540(this,uVar1,*(int *)((int)this + 0x24) + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)this + 0x2a));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x48))))(*(int * PTR32 *)((int)this + 0x1c),this);
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_00b96bf0 */
uint F_00b96bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10f96a0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: SheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_Game::vf0 */
uint F_00b96c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b96cb0 */
uint F_00b96cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0);
  return (uint)uVar1;
}

/* ref: FUN_00b96ce0 */
uint F_00b96ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96ce0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0);
  return uVar1;
}

/* ref: FUN_00b96d20 */
uint F_00b96d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb96d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b96d30 */
uint F_00b96d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96d30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00b96d60 */
uint F_00b96d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96d90 */
uint F_00b96d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00b96db0 */
uint F_00b96db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96de0 */
uint F_00b96de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96e10 */
uint F_00b96e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb96e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00b96e40 */
uint F_00b96e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b96ec0 */
uint F_00b96ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b96f40 */
uint F_00b96f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b96fc0 */
uint F_00b96fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb96fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b97040 */
uint F_00b97040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb97040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00b970e0 */
uint F_00b970e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb970e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b970f0 */
unsigned int F_00b970f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb970f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return 0;
}

/* ref: FUN_00b97140 */
uint F_00b97140(unsigned int gen_a0)
{
  GEN_ENTER(0xb97140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b97150 */
uint F_00b97150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b97740((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_00b97160 */
uint F_00b97160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b97790((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_00b97170 */
uint F_00b97170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b97710((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_00b97180 */
uint F_00b97180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b977d0((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf157 */
unsigned int F_00b971a0(void)
{
  GEN_ENTER(0xb971a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf158 */
unsigned int F_00b971b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb971b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf164 */
unsigned int F_00b971c0(void)
{
  GEN_ENTER(0xb971c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf165 */
unsigned int F_00b971d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb971d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf166 */
unsigned int F_00b971e0(void)
{
  GEN_ENTER(0xb971e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf168 */
unsigned int F_00b971f0(void)
{
  GEN_ENTER(0xb971f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf5 */
byte F_00b97200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf169 */
uint F_00b97210(void)
{
  GEN_ENTER(0xb97210u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf170 */
uint F_00b97220(void)
{
  GEN_ENTER(0xb97220u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b97230 */
uint F_00b97230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b980d0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97240 */
uint F_00b97240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98100((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97260 */
uint F_00b97260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98130((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97280 */
uint F_00b97280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98160((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b972a0 */
uint F_00b972a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb972a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98190((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b972c0 */
uint F_00b972c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb972c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b981c0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b972e0 */
uint F_00b972e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb972e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b981f0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97300 */
uint F_00b97300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98220((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97320 */
uint F_00b97320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98250((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97340 */
uint F_00b97340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98280((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97360 */
uint F_00b97360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b982b0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97380 */
uint F_00b97380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b982e0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b973a0 */
uint F_00b973a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb973a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98310((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b973c0 */
uint F_00b973c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb973c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98340((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b973e0 */
uint F_00b973e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb973e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98370((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97400 */
uint F_00b97400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b983a0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97420 */
uint F_00b97420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b983d0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97430 */
uint F_00b97430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98410((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97450 */
uint F_00b97450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98440((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97470 */
uint F_00b97470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98470((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97490 */
uint F_00b97490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b984a0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b974b0 */
uint F_00b974b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb974b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b984d0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b974d0 */
uint F_00b974d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb974d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98500((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b974f0 */
uint F_00b974f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb974f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98530((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97510 */
uint F_00b97510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98560((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97530 */
uint F_00b97530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98590((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97550 */
uint F_00b97550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b985c0((undefined *)((int)this + -0x9a8),param_1);
  return uVar1;
}

/* ref: FUN_00b97560 */
uint F_00b97560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b985c0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97580 */
uint F_00b97580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b985f0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf1 */
uint F_00b975c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb975c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::InstanceContent::GuildOrderStartCallback::vf0 */
uint F_00b975f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb975f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf173 */
unsigned int F_00b97620(void)
{
  GEN_ENTER(0xb97620u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf175 */
unsigned int F_00b97630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf145 */
byte F_00b97640(void)
{
  GEN_ENTER(0xb97640u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b97650 */
uint F_00b97650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98be0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b97660 */
uint F_00b97660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb97660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,0);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined1 *)((int)this + 0x26) = 0;
  return (uint)this;
}

/* ref: FUN_00b976a0 */
unsigned int F_00b976a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb976a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  if (*(char *)((int)this + 0x26) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  F_00cb4870(this);
  return 0;
}

/* ref: Client::Game::InstanceContent::ContentTalkSheetWaiter::vf0 */
uint F_00b976d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb976d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10fe7ac));
  if (this[0x26] == (undefined1)0x1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x4c))))(*(int * PTR32 *)(this + 0x1c),this);
  }
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::ContentTalkEventHandler::vf0 */
uint F_00b97710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::ContentNpcEventHandler::vf0 */
uint F_00b97740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x538);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f8cb4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f8ca0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x538) = 0;
  }
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::BahamutGuideEventHandler::vf0 */
uint F_00b97790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f8f34));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f8f20));
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderGuideEventHandler::vf0 */
uint F_00b977d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb977d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x534);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[154])REFP(0x10f91b4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f91a0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x534) = 0;
  }
  F_0042c880(this + 0x550);
  F_00b8c210(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf1 */
uint F_00b97850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb97850u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * this_00;
  int iVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((this_00 != (undefined *)0x0) && (0 < (*(int *)&gen_args[3]))) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    if (iVar1 == -2) {
      F_006f4000(this_00);
    }
    else if (iVar1 == 0) {
      F_006bcfc0(this_00,0,0,0);
    }
    else {
      (*(int *)&gen_args[3]) = 0;
      F_006f99e0(this_00,&(*(int *)&gen_args[3]),1);
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: Client::Game::InstanceContent::GuildOrderRewardCallback::vf0 */
uint F_00b978d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb978d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf149 */
uint F_00b97900(void)
{
  GEN_ENTER(0xb97900u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f014);
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf150 */
uint F_00b97910(void)
{
  GEN_ENTER(0xb97910u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x133f018);
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf153 */
byte F_00b97920(void)
{
  GEN_ENTER(0xb97920u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00b97930 */
uint F_00b97930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98660((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuideEventHandler::vf0 */
uint F_00b97940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10f9424));
  if (*(int *)(this + 0x108) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x104);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)(this + 0x108));
    }
    puVar2 = *(undefined4 * PTR32 *)(this + 0x108);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x108) = 0;
    }
  }
  F_006df660(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b979b0 */
uint F_00b979b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb979b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,0);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00b97a00 */
unsigned int F_00b97a00(unsigned int gen_a0)
{
  GEN_ENTER(0xb97a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  if (*(char *)((int)this + 0x2c) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  F_00cb4870(this);
  return 0;
}

/* ref: FUN_00b97a30 */
uint F_00b97a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb97a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined2 *)((int)this + 0x28) = (undefined2)param_2;
  uVar1 = F_00b96ba0(this);
  return uVar1;
}

/* ref: ContentSheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_InstanceContent::vf1 */
uint F_00b97a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb97a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short * psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  code * pcVar6;
  undefined4 local_8;
  
  psVar1 = (short *)((int)this + 0x28);
  *psVar1 = *psVar1 - *(ushort *)((int)this + 0x2a);
  sVar2 = *psVar1;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),sVar2 == 0);
  piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x310)));
  *(undefined1 *)((int)this + 0x2c) = 0;
  iVar3 = *piVar5;
  if (*(int *)((int)this + 0x20) < 0) {
    pcVar6 = *(gen_code32 *)(iVar3 + 8);
  }
  else {
    pcVar6 = *(gen_code32 *)(iVar3 + 4);
  }
  uVar4 = (*pcVar6)(piVar5,*(int *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24),param_2,
                    (uint)*(ushort *)((int)this + 0x2a),local_8);
  if (sVar2 != 0) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + (uint)*(ushort *)((int)this + 0x2a);
    uVar4 = F_00b96ba0(this);
  }
  return uVar4;
}

/* ref: ContentSheetWaiter_VInstanceContentDirector_InstanceContent_Game_Client_InstanceContent::vf0 */
uint F_00b97ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10fea48));
  if (*(char *)((int)this + 0x2c) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VInstanceContentGuideEventHandler_InstanceContent_Game_Client_Game::vf0 */
uint F_00b97af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b97b50 */
uint F_00b97b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
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

/* ref: FUN_00b97b90 */
uint F_00b97b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb97b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b97ba0 */
uint F_00b97ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97ba0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00b97bc0 */
byte F_00b97bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b97be0 */
byte F_00b97be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96e40(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97d30 */
byte F_00b97d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96ec0(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97de0 */
byte F_00b97de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96f40(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97e90 */
byte F_00b97e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b96fc0(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97f40 */
byte F_00b97f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb97f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (**(char * PTR32 *)((int)this + 0x16c) == '\0') {
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar1 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar1,uVar3);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = F_0042a990((int)this + 0x16c);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00b97040(*(undefined * PTR32 *)((int)this + 0xf8),uVar2,uVar1,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00b97ff0 */
uint F_00b97ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb97ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1 = puVar1 + 6;
  }
  return (uint)puVar1;
}

/* ref: FUN_00b98030 */
unsigned int F_00b98030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return 0;
}

/* ref: FUN_00b98080 */
unsigned int F_00b98080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb98080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentDirector::vf0 */
uint F_00b980d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb980d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTotorak::vf0 */
uint F_00b98100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTamtara::vf0 */
uint F_00b98130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCopperBell::vf0 */
uint F_00b98160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonShposhae::vf0 */
uint F_00b98190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonAurumVale::vf0 */
uint F_00b981c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb981c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonResidence::vf0 */
uint F_00b981f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb981f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonBrayflox::vf0 */
uint F_00b98220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonHalatali::vf0 */
uint F_00b98250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonQarn::vf0 */
uint F_00b98280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonWandererPalace::vf0 */
uint F_00b982b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb982b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonDzemael::vf0 */
uint F_00b982e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb982e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonStoneVigil::vf0 */
uint F_00b98310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonCuttersCry::vf0 */
uint F_00b98340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonTheOldCastleAmidapool::vf0 */
uint F_00b98370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseKeep::vf0 */
uint F_00b983a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb983a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleIfrit::vf0 */
uint F_00b983d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb983d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[173])REFP(0x10fc364));
  *(undefined * PTR32 * PTR32 *)(this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10fc354));
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleTitan::vf0 */
uint F_00b98410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleGaruda::vf0 */
uint F_00b98440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentBattleEmpireShield::vf0 */
uint F_00b98470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidCrystalTower001::vf0 */
uint F_00b984a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb984a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut001::vf0 */
uint F_00b984d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb984d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut002::vf0 */
uint F_00b98500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut003::vf0 */
uint F_00b98530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut004::vf0 */
uint F_00b98560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentRaidSeaBahamut005::vf0 */
uint F_00b98590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentColosseum::vf0 */
uint F_00b985c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb985c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x9a8) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentDummy::vf0 */
uint F_00b985f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb985f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8cc40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b98620 */
uint F_00b98620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98c10((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98640 */
uint F_00b98640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98c40((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::GuildOrderOfficerEventHandler::vf0 */
uint F_00b98660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b8eca0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b986a0 */
uint F_00b986a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b986b0 */
uint F_00b986b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b986c0 */
uint F_00b986c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb986c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: FUN_00b986e0 */
uint F_00b986e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b986f0 */
byte F_00b986f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb986f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b98710 */
uint F_00b98710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00b97ff0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00b98730 */
unsigned int F_00b98730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00b98760 */
unsigned int F_00b98760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_00b98080(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_00b987a0 */
uint F_00b987a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb987a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff014));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff004));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b987e0 */
uint F_00b987e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb987e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98ce0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98800 */
uint F_00b98800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff2ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff2dc));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98840 */
uint F_00b98840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98d10((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98860 */
uint F_00b98860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff5c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff5b4));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b988a0 */
uint F_00b988a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb988a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98d40((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b988c0 */
uint F_00b988c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb988c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ff89c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ff88c));
  return (uint)this;
}

/* ref: FUN_00b988f0 */
uint F_00b988f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb988f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98d70((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98910 */
uint F_00b98910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ffb74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ffb64));
  return (uint)this;
}

/* ref: FUN_00b98940 */
uint F_00b98940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98da0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98960 */
uint F_00b98960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x10ffe4c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x10ffe3c));
  return (uint)this;
}

/* ref: FUN_00b98990 */
uint F_00b98990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98dd0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b989b0 */
uint F_00b989b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb989b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x1100124));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x1100114));
  return (uint)this;
}

/* ref: FUN_00b989e0 */
uint F_00b989e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb989e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e00((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98a00 */
uint F_00b98a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11003fc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x11003ec));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98a40 */
uint F_00b98a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e30((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98a60 */
uint F_00b98a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11006d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x11006c4));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98aa0 */
uint F_00b98aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e60((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98ac0 */
uint F_00b98ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x11009ac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x110099c));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98b00 */
uint F_00b98b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98e90((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98b20 */
uint F_00b98b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x1100c84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x1100c74));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98b60 */
uint F_00b98b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98ec0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b98b80 */
uint F_00b98b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb98b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b8e040(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[177])REFP(0x1100f5c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) = (*(undefined * PTR32 (*)[3])REFP(0x1100f4c));
  *(undefined1 *)((int)this + 0xe60) = 0;
  return (uint)this;
}

/* ref: FUN_00b98bc0 */
uint F_00b98bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b98ef0((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrderDirector::vf0 */
uint F_00b98be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder003::vf0 */
uint F_00b98c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder009::vf0 */
uint F_00b98c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b98c70 */
unsigned int F_00b98c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00b98ca0 */
unsigned int F_00b98ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00b98080(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder001::vf0 */
uint F_00b98ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder002::vf0 */
uint F_00b98d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder004::vf0 */
uint F_00b98d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder005::vf0 */
uint F_00b98d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder006::vf0 */
uint F_00b98da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder007::vf0 */
uint F_00b98dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder008::vf0 */
uint F_00b98e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder010::vf0 */
uint F_00b98e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder011::vf0 */
uint F_00b98e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder012::vf0 */
uint F_00b98e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder013::vf0 */
uint F_00b98ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::InstanceContent::InstanceContentGuildOrder014::vf0 */
uint F_00b98ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b90020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b98f30 */
uint F_00b98f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb98f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00b97ff0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b98f70 */
unsigned int F_00b98f70(unsigned int gen_a0)
{
  GEN_ENTER(0xb98f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b98fc0 */
unsigned int F_00b98fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb98fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x18) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,0);
    F_00b98080(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00b99090 */
unsigned int F_00b99090(unsigned int gen_a0)
{
  GEN_ENTER(0xb99090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b990e0 */
uint F_00b990e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb990e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_00b97ff0(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b99110 */
unsigned int F_00b99110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00b98fc0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00b98fc0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00b991b0 */
unsigned int F_00b991b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb991b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00b99200 */
uint F_00b99200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar2 = (int)(uVar1 - *(int *)this) / 0x18;
  if (param_1 < uVar2) {
    uVar2 = *(int *)this + param_1 * 0x18;
    if (uVar2 != uVar1) {
      uVar2 = F_00b97ff0(uVar1,uVar1,uVar2,param_1);
      *(uint *)((int)this + 4) = uVar2;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00b99110(this,param_1 - uVar2);
    F_00b98c70(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x18,0
                 ,(int)this + 0xc);
    uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
    *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 - uVar2) * 0x18;
  }
  return uVar2;
}

/* ref: FUN_00b992b0 */
uint F_00b992b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb992b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b99330((undefined *)((int)this + -0x310),param_1);
  return uVar1;
}

/* ref: FUN_00b992c0 */
uint F_00b992c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb992c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x9a8);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x9b0) - iVar1) / 0x18) * 0x18,0);
  }
  *(undefined4 *)((int)this + 0x9a8) = 0;
  *(undefined4 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  uVar2 = F_00b8cc40(this);
  return uVar2;
}

/* ref: Client::Game::InstanceContent::InstanceContentDungeonEmpiresBaseBaileys::vf0 */
uint F_00b99330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b992c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b99360 */
unsigned int F_00b99360(float gen_a0)
{
  GEN_ENTER(0xb99360u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b99380 */
uint F_00b99380(unsigned int gen_a0)
{
  GEN_ENTER(0xb99380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf83 */
uint F_00b993e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb993e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_006f3fc0((undefined *)this,param_1);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf6 */
uint F_00b99420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    F_006da800(*(undefined * PTR32 *)(this + 4),REFG(int, 0x1379694),0,0);
    F_006da800(*(undefined * PTR32 *)(this + 4),iVar1,1,0);
  }
  bVar2 = F_006db1d0((undefined *)this,param_1);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (((byte)this[0x4c] & 2) != 0) {
    uVar5 = *(undefined4 *)(this + 8);
    uVar4 = *(undefined4 *)(this + 0x50);
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 1;
    this_00 = (undefined *)F_006b8c00();
    uVar3 = F_006fcf60(this_00,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  }
  return uVar3;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf24 */
uint F_00b99480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_2 & 0xffff;
  if (uVar1 == 1) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x244))(this,param_3,param_4);
    return uVar1;
  }
  if (uVar1 != 2) {
    if (uVar1 != 3) {
      uVar1 = F_006f9890((undefined *)this,param_1,param_2,param_3,param_4);
      return uVar1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24c))(this);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x248))(this);
  return uVar1;
}

/* ref: FUN_00b994f0 */
uint F_00b994f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb994f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,param_1,(uint)*(byte *)(param_1 + 0x3fc));
  return uVar1;
}

/* ref: FUN_00b99510 */
uint F_00b99510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_007192e0(*(undefined * PTR32 *)((int)this + 4),this,param_1,param_2,param_3,param_4,0,0);
  return uVar1;
}

/* ref: FUN_00b99540 */
uint F_00b99540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00711100(*(undefined * PTR32 *)((int)this + 4),this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_00b99560 */
uint F_00b99560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_006bd080(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf42 */
uint F_00b99580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  
  if (param_1 < 0x80000000) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x25c))(this,param_1,param_2,param_3);
  }
  else {
    if (param_1 == 0x80000000) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x250))(this,param_2,param_3);
      return uVar2;
    }
    if (param_1 == 0x80000001) {
      bVar1 = F_006d8320((undefined *)this);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 == 1) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x254))(this);
        return uVar2;
      }
    }
    else {
      uVar2 = param_1;
      if (param_1 == 0x80000002) {
        bVar1 = F_006d8320((undefined *)this);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 1) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 600))(this);
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf148 */
unsigned int F_00b99610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf151 */
unsigned int F_00b99620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00b99630 */
uint F_00b99630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_3 + 4);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *(undefined4 *)((int)this + 0xc) = puVar1[1];
  *(undefined4 *)((int)this + 0x10) = puVar1[2];
  *(undefined4 *)((int)this + 0x14) = puVar1[3];
  uVar2 = F_006bccd0((undefined *)((int)this + -0x1d4));
  return uVar2;
}

/* ref: FUN_00b99670 */
uint F_00b99670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_3 + 4);
  *(undefined4 *)((int)this + 8) = *puVar1;
  *(undefined4 *)((int)this + 0xc) = puVar1[1];
  *(undefined4 *)((int)this + 0x10) = puVar1[2];
  *(undefined4 *)((int)this + 0x14) = puVar1[3];
  uVar2 = F_006bd080((undefined *)((int)this + -0x1d4),0x80000000,0,0);
  return uVar2;
}

/* ref: FUN_00b996b0 */
byte F_00b996b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb996b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_006b8c00();
  bVar1 = (byte)param_1;
  if ((1 < (byte)param_1) && ((byte)param_1 < 5)) {
    F_006bd200(this,param_2,param_3);
    if ((char)param_3 == '\x01') {
      bVar1 = F_006e6390(this_00,*(undefined4 *)((int)this + 0x1dc),this,param_2);
      return bVar1;
    }
    bVar1 = F_006deae0(this_00,*(undefined4 *)((int)this + 0x1dc),this,param_2);
  }
  return bVar1;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf116 */
byte F_00b99710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)(in_ecx + 0x1ed);
}

/* ref: FUN_00b99720 */
uint F_00b99720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = 0;
  if ((1 < (byte)param_5) && ((byte)param_5 < 5)) {
    uVar1 = F_006bd240(this,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00b99750 */
uint F_00b99750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  return (uint)this;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf145 */
uint F_00b99790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf146 */
uint F_00b997a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb997a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf147 */
uint F_00b997b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb997b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf53 */
uint F_00b997c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb997c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006f3a50(this,0,0);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf55 */
uint F_00b997d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb997d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  ((undefined4 *)(gen_frame + 0x8))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x404)) = 1;
  uVar1 = F_006f3a50(this,((undefined4 *)(gen_frame + 0x8)),1);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf56 */
uint F_00b99820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  ((undefined4 *)(gen_frame + 0x8))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x404)) = 1;
  uVar1 = F_006f3a50(this,((undefined4 *)(gen_frame + 0x8)),1);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: FUN_00b99870 */
uint F_00b99870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb99870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint * puVar1;
  int * piVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  piVar2 = param_3;
  if (param_1 == -1) {
    puVar1 = *(uint * PTR32 *)(*param_3 + 4);
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),(int)puVar1 + (puVar1[2] & 0xffffff) + 8,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),(int)puVar1 + (puVar1[1] & 0xffffff) + 4,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x60)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    F_007192e0(*(undefined * PTR32 *)((int)this + -0x1d0),(int)this + -0x1d4,((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xb4)),((undefined1 *)(gen_frame + 0xc)),0,0,0
                );
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    piVar2 = (int *)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)piVar2;
}

/* ref: FUN_00b99950 */
uint F_00b99950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x1101874));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x1101864));
  return (uint)this;
}

/* ref: FUN_00b99990 */
uint F_00b99990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_006fd460(this,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined1 *)((int)this + 0x1ed) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x1101aec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x1101ad8));
  return (uint)this;
}

/* ref: FUN_00b999d0 */
unsigned int F_00b999d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb999d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  
  if (*(char *)((int)this + 0x1ed) != '\x01') {
    bVar1 = *(byte *)((int)this + 0x1e8);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,10,1);
      F_006e6390(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,10);
    }
    bVar1 = *(byte *)((int)this + 0x1e9);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,0xb,1);
      F_006e6390(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,0xb);
    }
    *(undefined1 *)((int)this + 0x1ed) = 1;
    F_006d81e0(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00b99a60 */
unsigned int F_00b99a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * pvVar2;
  
  if (*(char *)((int)this + 0x1ed) != '\0') {
    bVar1 = *(byte *)((int)this + 0x1e8);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,10,0);
      F_006deae0(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,10);
    }
    bVar1 = *(byte *)((int)this + 0x1e9);
    pvVar2 = (undefined *)F_006b8c00();
    if ((1 < bVar1) && (bVar1 < 5)) {
      F_006bd200(this,0xb,0);
      F_006deae0(pvVar2,*(undefined4 *)((int)this + 0x1dc),this,0xb);
    }
    *(undefined1 *)((int)this + 0x1ed) = 0;
    if ((char)param_1 == '\x01') {
      F_006d81e0(this);
    }
  }
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf132 */
uint F_00b99b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = 0;
  if ((param_3 & 0xff) == 10) {
    uVar1 = 0;
    if ((byte)((char)this[0x1e8] - 2U) < 3) {
      uVar1 = F_006bd240((undefined *)this,param_1,param_2,param_3,param_4);
    }
  }
  else if (((param_3 & 0xff) == 0xb) && ((byte)((char)this[0x1e9] - 2U) < 3)) {
    uVar1 = F_006bd240((undefined *)this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b99b60 */
uint F_00b99b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb99b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0x30,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_00cb4700(this_00,param_2,0);
    this_00[5] = param_2;
    this_00[7] = param_1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1101d50));
    this_00[8] = param_3;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_00b99bd0 */
uint F_00b99bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb99bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  this_00 = (undefined4 *)F_00406b90(0x30,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,uVar1,0);
    this_00[5] = uVar1;
    this_00[6] = this;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1101d50));
    this_00[7] = param_1;
    this_00[8] = param_4;
    this_00[9] = 0;
    *(undefined2 *)(this_00 + 10) = 0;
    *(undefined1 *)(this_00 + 0xb) = 0;
  }
  *(undefined2 *)(this_00 + 10) = (undefined2)param_3;
  this_00[9] = param_2;
  F_00b9a1e0(this_00);
  return (uint)this_00;
}

/* ref: FUN_00b99c60 */
uint F_00b99c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,param_1,*(uint *)((int)this + 8) & 0xffff,1,param_2);
  *(uint *)((int)this + 0x1d8) = uVar2;
  return uVar2;
}

/* ref: FUN_00b99cb0 */
uint F_00b99cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb99cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  uVar2 = F_00b99bd0(this,uVar2,param_1,1,0xffffffff);
  *(uint *)((int)this + 0x1d8) = uVar2;
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickAccessor::vf1 */
uint F_00b99d10(unsigned int gen_a0)
{
  GEN_ENTER(0xb99d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,uVar2,*(uint *)(this + 8) & 0xffff,1,0);
  *(uint *)(this + 0x1d8) = uVar2;
  F_006bccf0(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickBill::vf145 */
uint F_00b99d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,uVar2,*(uint *)(this + 8) & 0xffff,1,0);
  *(uint *)(this + 0x1d8) = uVar2;
  return uVar2;
}

/* ref: FUN_00b99dd0 */
uint F_00b99dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb99dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x1101aec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x1101ad8));
  F_00b99a60(this,0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf1 */
uint F_00b99e30(unsigned int gen_a0)
{
  GEN_ENTER(0xb99e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  uVar2 = F_00b99bd0(this,uVar2,*(uint *)(this + 8) & 0xffff,1,0);
  *(uint *)(this + 0x1d8) = uVar2;
  F_006bccf0(this);
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf148 */
uint F_00b99e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 1) {
    F_00b999d0(this);
  }
  uVar1 = F_006bccd0(this);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf150 */
unsigned int F_00b99ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb99ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b99a60(this,1);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf146 */
uint F_00b99ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xb99ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  GVar1 = this[0x1e8];
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),GVar1);
  if ((byte)((char)GVar1 - 3U) < 2) {
    this[0x1ec] = GVar1;
    uVar2 = F_00b99cb0(this,*(undefined4 *)(this + 0x1e0));
  }
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf147 */
uint F_00b99f00(unsigned int gen_a0)
{
  GEN_ENTER(0xb99f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  GVar1 = this[0x1e9];
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),GVar1);
  if ((byte)((char)GVar1 - 3U) < 2) {
    this[0x1ec] = GVar1;
    uVar2 = F_00b99cb0(this,*(undefined4 *)(this + 0x1e4));
  }
  return uVar2;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf55 */
uint F_00b99f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  if (this[0x1ec] == (undefined1)0x4) {
    if (param_1 == 0) {
      uVar1 = F_00b99cb0(this,6);
      this[0x1ec] = (undefined1)0x3;
      F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
      return uVar1;
    }
    uVar3 = 0;
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = ((int *)(gen_frame + 0x8));
    uVar3 = 1;
    ((int *)(gen_frame + 0x8))[0] = param_1;
    (*(undefined4 *)(gen_frame + 0x404)) = 1;
  }
  uVar1 = F_006f3a50(this,piVar2,uVar3);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickAccessor::vf145 */
uint F_00b99fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb99fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x1e8))) {
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    uVar2 = F_00b99cb0(this,*(undefined4 *)(this + 0x1dc));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar2;
  default: ;
    uVar2 = F_006f3a50(this,0,0);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar2;
  case 8: ;
    this_00 = (undefined *)F_006b8c00();
    piVar1 = (int *)F_006d7020(this_00);
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0x278))(piVar1,(uint)*(ushort *)(this + 8),((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)));
    F_00711100(*(undefined * PTR32 *)(this + 4),this,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x4)),0);
    F_004876d0(&(*(undefined4 *)(gen_frame + 0x4)));
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)uVar3;
  }
}

/* ref: FUN_00b9a0b0 */
uint F_00b9a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb9a0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x24)),(**(uint * PTR32 *)(*param_3 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(*param_3 + 4),
               REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_00710cb0(*(undefined * PTR32 *)((int)this + -0x1d0),(int)this + -0x1d4,((undefined1 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0xc)),0,0,4,0x3d,0,
               0x279,0,0,0,0);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar2;
}

/* ref: FUN_00b9a190 */
uint F_00b9a190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x3fc);
  *(undefined4 *)((int)this + uVar1 * 4) = param_1;
  *(int *)((int)this + 0x3fc) = *(int *)((int)this + 0x3fc) + 1;
  return uVar1;
}

/* ref: FUN_00b9a1e0 */
uint F_00b9a1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9a1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(ushort *)((int)this + 0x2a) = *(ushort *)((int)this + 0x28);
  if (*(uint *)((int)this + 0x14) < (uint)*(ushort *)((int)this + 0x28)) {
    *(short *)((int)this + 0x2a) = (short)*(uint *)((int)this + 0x14);
  }
  uVar1 = 0;
  if (*(short *)((int)this + 0x2a) != 0) {
    do {
      F_00cb4540(this,uVar1,*(int *)((int)this + 0x24) + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)this + 0x2a));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x48))))(*(int * PTR32 *)((int)this + 0x1c),this);
  *(undefined1 *)((int)this + 0x2c) = 1;
  return uVar1;
}

/* ref: FUN_00b9a230 */
uint F_00b9a230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9a230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1101858));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: SheetWaiter_VGimmickEventHandler_Gimmick_Game_Client_Game::vf0 */
uint F_00b9a260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b9a290 */
uint F_00b9a290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a2a0((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf0 */
uint F_00b9a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b9a300 */
uint F_00b9a300(unsigned int gen_a0)
{
  GEN_ENTER(0xb9a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) =
       (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  uVar2 = F_006fd580(this);
  return uVar2;
}

/* ref: FUN_00b9a350 */
uint F_00b9a350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a360((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: Client::Game::Gimmick::GimmickAccessor::vf0 */
uint F_00b9a360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x11015f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x11015e0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10f8528));
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b9a3c0 */
uint F_00b9a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a510((undefined *)((int)this + -0x1d4),param_1);
  return uVar1;
}

/* ref: FUN_00b9a3d0 */
uint F_00b9a3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb9a3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,0);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1101d50));
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00b9a420 */
unsigned int F_00b9a420(unsigned int gen_a0)
{
  GEN_ENTER(0xb9a420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1101d50));
  if (*(char *)((int)this + 0x2c) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  F_00cb4870(this);
  return 0;
}

/* ref: FUN_00b9a450 */
uint F_00b9a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9a450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined2 *)((int)this + 0x28) = (undefined2)param_2;
  uVar1 = F_00b9a1e0(this);
  return uVar1;
}

/* ref: ContentSheetWaiter_VGimmickEventHandler_Gimmick_Game_Client_InstanceContent::vf1 */
uint F_00b9a470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9a470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short * psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  code * pcVar6;
  undefined4 local_8;
  
  psVar1 = (short *)((int)this + 0x28);
  *psVar1 = *psVar1 - *(ushort *)((int)this + 0x2a);
  sVar2 = *psVar1;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),sVar2 == 0);
  piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x1d4)));
  *(undefined1 *)((int)this + 0x2c) = 0;
  iVar3 = *piVar5;
  if (*(int *)((int)this + 0x20) < 0) {
    pcVar6 = *(gen_code32 *)(iVar3 + 8);
  }
  else {
    pcVar6 = *(gen_code32 *)(iVar3 + 4);
  }
  uVar4 = (*pcVar6)(piVar5,*(int *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24),param_2,
                    (uint)*(ushort *)((int)this + 0x2a),local_8);
  if (sVar2 != 0) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + (uint)*(ushort *)((int)this + 0x2a);
    uVar4 = F_00b9a1e0(this);
  }
  return uVar4;
}

/* ref: ContentSheetWaiter_VGimmickEventHandler_Gimmick_Game_Client_InstanceContent::vf0 */
uint F_00b9a4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1101d50));
  if (*(char *)((int)this + 0x2c) == '\x01') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x4c))))(*(int * PTR32 *)((int)this + 0x1c),this);
  }
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Gimmick::GimmickRect::vf0 */
uint F_00b9a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b99dd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b9a540 */
uint F_00b9a540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a540u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (in_eax < 1) {
    if (-10000 < in_eax) {
      return in_eax * 0x10 + *(int *)(in_ecx + 8);
    }
    if (in_eax == -0x2712) {
      return in_ecx + 0x48;
    }
    if (in_eax == -0x2711) {
      *(undefined4 *)(in_ecx + 0x58) =
           *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(in_ecx + 0x14) + 4))) + 0xc)));
      *(undefined4 *)(in_ecx + 0x60) = 5;
      return (uint)(undefined4 *)(in_ecx + 0x58);
    }
    if (in_eax == -10000) {
      return *(int *)(in_ecx + 0x10) + 0x60;
    }
    iVar2 = **((int * PTR32 *)GEN_TOP((*(int *)(in_ecx + 0x14) + 4)));
    if (-0x2712 - in_eax <= (int)(uint)*(byte *)(iVar2 + 7)) {
      return (-0x2712 - in_eax) * 0x10 + 8 + iVar2;
    }
  }
  else {
    uVar1 = *(int *)(in_ecx + 0xc) + -0x10 + in_eax * 0x10;
    if (uVar1 < *(uint *)(in_ecx + 8)) {
      return uVar1;
    }
  }
  return 0x110e488;
}

/* ref: FUN_00b9a5e0 */
unsigned int F_00b9a5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return 0;
}

/* ref: FUN_00b9a610 */
uint F_00b9a610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a610u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 < 0x1f41) {
    if ((*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4) + param_2 < 0x1f41) {
      if (0 < param_2) {
        if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) <= param_2 * 0x10) {
          F_00bb8d50(param_1,param_2);
        }
        uVar1 = *(int *)(param_1 + 8) + param_2 * 0x10;
        if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) < uVar1) {
          *((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = uVar1;
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b9a680 */
unsigned int F_00b9a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9a680u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != param_2) &&
     (*(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * -0x10, 0 < param_3)) {
    iVar3 = 0;
    iVar4 = param_3;
    do {
      puVar1 = *(undefined4 * PTR32 *)(param_2 + 8);
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + iVar3)));
      *(undefined4 * PTR32 *)(param_2 + 8) = puVar1 + 4;
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      iVar3 = iVar3 + 0x10;
      iVar4 = iVar4 + -1;
      puVar1[2] = puVar2[2];
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00b9a6d0 */
uint F_00b9a6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a6d0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(undefined2 *)(param_2 + 0x34) = *(undefined2 *)(param_1 + 0x34);
  return param_1;
}

/* ref: FUN_00b9a6f0 */
uint F_00b9a6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a6f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x58)));
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x58))) = param_2;
  return uVar1;
}

/* ref: FUN_00b9a710 */
uint F_00b9a710(unsigned int gen_a0)
{
  GEN_ENTER(0xb9a710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  uVar2 = F_00bb8850(param_1);
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  *puVar1 = uVar2;
  puVar1[2] = 8;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9a750 */
uint F_00b9a750(unsigned int gen_a0)
{
  GEN_ENTER(0xb9a750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4;
}

/* ref: FUN_00b9a760 */
uint F_00b9a760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a760u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (param_2 < 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2 * 0x10 + 0x10;
    return param_1;
  }
  iVar1 = param_2 * 0x10;
  if (*(uint *)(param_1 + 8) < (uint)(*(int *)(param_1 + 0xc) + iVar1)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    } while (*(uint *)(param_1 + 8) < (uint)(*(int *)(param_1 + 0xc) + iVar1));
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + iVar1;
  return param_1;
}

/* ref: FUN_00b9a7b0 */
uint F_00b9a7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a7b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = (undefined4 *)F_00b9a540(param_2,param_1);
  puVar2 = puVar1 + 4;
  if (puVar2 < *(undefined4 * PTR32 *)(param_1 + 8)) {
    do {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar1[6];
      puVar2 = puVar2 + 4;
      puVar1 = puVar1 + 4;
    } while (puVar2 < *(undefined4 * PTR32 *)(param_1 + 8));
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return (uint)puVar2;
}

/* ref: FUN_00b9a800 */
uint F_00b9a800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a800u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)F_00b9a540(param_2,param_1);
  puVar3 = *(undefined4 * PTR32 *)(param_1 + 8);
  puVar1 = puVar3;
  for (; puVar2 < puVar3; puVar3 = puVar3 + -4) {
    *puVar3 = puVar1[-4];
    puVar3[1] = puVar1[-3];
    puVar1[2] = puVar1[-2];
    puVar1 = puVar1 + -4;
  }
  puVar3 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  puVar2[2] = puVar3[2];
  return (uint)puVar2;
}

/* ref: FUN_00b9a850 */
uint F_00b9a850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a850u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if ((param_2 == -0x2711) && (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x28))) {
    F_00c02740(param_1,((char *)REFP(0x13405a4)));
  }
  puVar1 = (undefined4 *)F_00b9a540(param_2,param_1);
  if (param_2 == -0x2711) {
    puVar1 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4)))));
    puVar1[3] = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
    if ((*((int *)GEN_TOP((*(int *)(param_1 + 8) + -8))) < 4) ||
       (iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 8) + -0x10))), (*(byte *)(iVar2 + 5) & 3) == 0))
    goto LAB_00b9a8ff;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    *puVar1 = *(undefined4 *)(iVar2 + -0x10);
    puVar1[1] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[2] = *(undefined4 *)(iVar2 + -8);
    if (((-0x2713 < param_2) || (puVar1 = *(undefined4 * PTR32 *)(param_1 + 8), (int)puVar1[-2] < 4)) ||
       (iVar2 = puVar1[-4], (*(byte *)(iVar2 + 5) & 3) == 0)) goto LAB_00b9a8ff;
    puVar1 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4)))));
  }
  if ((*(byte *)((int)puVar1 + 5) & 4) != 0) {
    puVar1 = (undefined4 *)F_00c01900(param_1,puVar1,iVar2);
  }
LAB_00b9a8ff: ;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00b9a910 */
uint F_00b9a910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a910u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_00b9a540(param_2,param_1);
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  uVar2 = puVar3[2];
  puVar1[2] = uVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9a940 */
uint F_00b9a940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  
  puVar1 = (undefined *)F_00b9a540(param_2,param_1);
  if (puVar1 == &REFG(undefined, 0x110e488)) {
    return 0xffffffff;
  }
  return *(uint *)(puVar1 + 8);
}

/* ref: FUN_00b9a960 */
uint F_00b9a960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == -1) {
    return 0x13405bc;
  }
  return (uint)(&REFG(undefined * PTR32, 0x110e598))[param_2];
}

/* ref: FUN_00b9a980 */
uint F_00b9a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if ((piVar1[2] == 6) && (*(char *)(*piVar1 + 6) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9a9b0 */
uint F_00b9a9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00b9a540(param_2,param_1);
  if (*(int *)(uVar1 + 8) != 3) {
    uVar1 = F_00c02bc0(uVar1,((undefined1 *)(gen_frame + 0x0)));
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b9a9f0 */
uint F_00b9a9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9a9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  
  puVar1 = (undefined *)F_00b9a540(param_2,param_1);
  if ((puVar1 != &REFG(undefined, 0x110e488)) && ((*(int *)(puVar1 + 8) == 4 || (*(int *)(puVar1 + 8) == 3)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9aa50 */
uint F_00b9aa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9aa50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  
  puVar1 = (undefined *)F_00b9a540(param_2,param_1);
  puVar2 = (undefined *)F_00b9a540(param_3,param_1);
  if ((puVar1 != &REFG(undefined, 0x110e488)) && (puVar2 != &REFG(undefined, 0x110e488))) {
    uVar3 = F_00c00310(puVar1,puVar2);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00b9aaf0 */
uint F_00b9aaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9aaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  
  puVar1 = (undefined *)F_00b9a540(param_2,param_1);
  puVar2 = (undefined *)F_00b9a540(param_3,param_1);
  if ((puVar1 != &REFG(undefined, 0x110e488)) && (puVar2 != &REFG(undefined, 0x110e488))) {
    uVar3 = F_00c03260(param_1,puVar1,puVar2);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00b9ab30 */
double F_00b9ab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ab30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double * pdVar1;
  
  pdVar1 = (double *)F_00b9a540(param_2,param_1);
  if (*(int *)(pdVar1 + 1) != 3) {
    pdVar1 = (double *)F_00c02bc0(pdVar1,((undefined1 *)(gen_frame + 0x0)));
    if (pdVar1 == (double *)0x0) {
      return 0.0;
    }
  }
  return *pdVar1;
}

/* ref: FUN_00b9ab70 */
uint F_00b9ab70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ab70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double * pdVar1;
  
  pdVar1 = (double *)F_00b9a540(param_2,param_1);
  if (*(int *)(pdVar1 + 1) != 3) {
    pdVar1 = (double *)F_00c02bc0(pdVar1,((undefined1 *)(gen_frame + 0x0)));
    if (pdVar1 == (double *)0x0) {
      return 0;
    }
  }
  return (int)ROUND(*pdVar1);
}

/* ref: FUN_00b9abc0 */
uint F_00b9abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9abc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if ((piVar1[2] != 0) && ((piVar1[2] != 1 || (*piVar1 != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9abf0 */
uint F_00b9abf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9abf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if (piVar1[2] != 4) {
    uVar2 = F_00c02c10(param_1,piVar1);
    if (uVar2 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      return 0;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
      F_00c01810(param_1);
    }
    piVar1 = (int *)F_00b9a540(param_2,param_1);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*piVar1 + 0xc);
  }
  return *piVar1 + 0x10;
}

/* ref: FUN_00b9ac60 */
uint F_00b9ac60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ac60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  switch((unsigned int)(uintptr_t)(piVar1[2])) {
  case 3: ;
    uVar2 = F_00c02c10(param_1,piVar1);
    if (uVar2 != 0) goto switchD_00b9ac7e_caseD_4;
    break;
  case 4: ;
switchD_00b9ac7e_caseD_4: ;
    return *(uint *)(*piVar1 + 0xc);
  case 5: ;
    uVar2 = F_00c05400(*piVar1);
    return uVar2;
  case 7: ;
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00b9acd0 */
uint F_00b9acd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9acd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  if ((piVar1[2] == 6) && (*(char *)(*piVar1 + 6) != '\0')) {
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00b9ad00 */
uint F_00b9ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00b9a540(param_2,param_1);
  if (puVar1[2] == 2) {
    return *puVar1;
  }
  if (puVar1[2] != 7) {
    return 0;
  }
  return *puVar1 + 0x18;
}

/* ref: FUN_00b9ad30 */
uint F_00b9ad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ad30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00b9a540(param_2,param_1);
  if (puVar1[2] != 8) {
    return 0;
  }
  return *puVar1;
}

/* ref: FUN_00b9ad50 */
uint F_00b9ad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ad50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00b9a540(param_2,param_1);
  switch((unsigned int)(uintptr_t)(puVar1[2])) {
  case 2: ;
  case 7: ;
    puVar1 = (uint *)F_00b9a540(param_2,param_1);
    if (puVar1[2] == 2) goto switchD_00b9ad6e_caseD_5;
    if (puVar1[2] == 7) {
      return *puVar1 + 0x18;
    }
    break;
  case 5: ;
  case 6: ;
  case 8: ;
switchD_00b9ad6e_caseD_5: ;
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_00b9adc0 */
uint F_00b9adc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9adc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9ade0 */
uint F_00b9ade0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xb9ade0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  double param_2 = (double)gen_a1;
  double * pdVar1;
  
  pdVar1 = *(double * PTR32 *)(param_1 + 8);
  *pdVar1 = param_2;
  *(undefined4 *)(pdVar1 + 1) = 3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9ae00 */
uint F_00b9ae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ae00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  double * pdVar1;
  
  pdVar1 = *(double * PTR32 *)(param_1 + 8);
  *pdVar1 = (double)param_2;
  *(undefined4 *)(pdVar1 + 1) = 3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9ae20 */
uint F_00b9ae20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ae20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  uVar2 = F_00c05a80(param_1,param_2,param_3);
  *puVar1 = uVar2;
  puVar1[2] = 4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9ae60 */
uint F_00b9ae60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9ae60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  uint uVar4;
  
  if (param_2 == (char *)0x0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    return param_1;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  puVar2 = *(uint * PTR32 *)(param_1 + 8);
  uVar4 = F_00c05a80(param_1,param_2,(int)pcVar3 - (int)(param_2 + 1));
  *puVar2 = uVar4;
  puVar2[2] = 4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar4;
}

/* ref: FUN_00b9aed0 */
uint F_00b9aed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9aed0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  uVar1 = F_00c00470(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00b9af00 */
uint F_00b9af00(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xb9af00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  uVar1 = F_00c00470(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00b9af30 */
uint F_00b9af30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9af30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x28)) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0xc)));
  }
  uVar3 = F_00c05bd0(param_1,param_3,uVar2);
  *(undefined4 *)(uVar3 + 0x10) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * -0x10;
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_3 * 0x10 + 0x18 + uVar3);
    iVar7 = param_3;
    do {
      puVar6 = puVar5 + -4;
      iVar4 = *(int *)(param_1 + 8) + (-0x18 - uVar3);
      *puVar6 = *(undefined4 *)(iVar4 + (int)puVar6);
      iVar7 = iVar7 + -1;
      puVar5[-3] = *(undefined4 *)((int)puVar6 + iVar4 + 4);
      puVar5[-2] = *(undefined4 *)((int)puVar6 + iVar4 + 8);
      puVar5 = puVar6;
    } while (iVar7 != 0);
  }
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  *puVar1 = uVar3;
  puVar1[2] = 6;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar3;
}

/* ref: FUN_00b9afd0 */
uint F_00b9afd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9afd0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  puVar1[2] = 1;
  *puVar1 = (uint)(param_2 != 0);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9aff0 */
uint F_00b9aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9aff0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar1 = param_2;
  puVar1[2] = 2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return param_1;
}

/* ref: FUN_00b9b010 */
uint F_00b9b010(unsigned int gen_a0)
{
  GEN_ENTER(0xb9b010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *piVar1 = param_1;
  piVar1[2] = 8;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return (uint)(*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70))) == param_1);
}

/* ref: FUN_00b9b040 */
uint F_00b9b040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00b9a540(param_2,param_1);
  iVar2 = *(int *)(param_1 + 8) + -0x10;
  uVar1 = F_00c02e80(param_1,uVar1,iVar2,iVar2);
  return uVar1;
}

/* ref: FUN_00b9b070 */
uint F_00b9b070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar2 = F_00b9a540(param_2,param_1);
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c05a80(param_1,param_3,(int)pcVar3 - (int)(param_3 + 1));
  ((uint *)(gen_frame + 0x0))[0] = uVar4;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  uVar2 = F_00c02e80(param_1,uVar2,((uint *)(gen_frame + 0x0)),*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9b0d0 */
uint F_00b9b0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b0d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_00b9a540(param_2,param_1);
  puVar3 = (undefined4 *)F_00c051f0(*puVar3,*(int *)(param_1 + 8) + -0x10);
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + -0x10) = *puVar3;
  *(undefined4 *)(iVar1 + -0xc) = puVar3[1];
  uVar2 = puVar3[2];
  *(uint *)(iVar1 + -8) = uVar2;
  return uVar2;
}

/* ref: FUN_00b9b110 */
uint F_00b9b110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b110u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)F_00b9a540(param_2,param_1);
  puVar3 = (undefined4 *)F_00c05110(*puVar2,param_3);
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  uVar1 = puVar3[2];
  puVar2[2] = uVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar1;
}

/* ref: FUN_00b9b150 */
uint F_00b9b150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  uVar2 = F_00c05020(param_1,param_2,param_3);
  *puVar1 = uVar2;
  puVar1[2] = 5;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9b190 */
uint F_00b9b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b190u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)F_00b9a540(param_2,param_1);
  iVar2 = piVar1[2];
  if (iVar2 == 5) {
    iVar2 = *(int *)(*piVar1 + 8);
  }
  else if (iVar2 == 7) {
    iVar2 = *(int *)(*piVar1 + 8);
  }
  else {
    iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x98 + iVar2 * 4)));
  }
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *piVar1 = iVar2;
  piVar1[2] = 5;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return 1;
}

/* ref: FUN_00b9b1f0 */
uint F_00b9b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b1f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint * puVar4;
  int * piVar5;
  
  piVar5 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = piVar5[2];
  if ((iVar1 != 6) && (iVar1 != 7)) {
    if (iVar1 != 8) {
      uVar2 = *(uint *)(param_1 + 8);
      *(undefined4 *)(uVar2 + 8) = 0;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
      return uVar2;
    }
    iVar1 = *piVar5;
    puVar3 = *(undefined4 * PTR32 *)(param_1 + 8);
    *puVar3 = *(undefined4 *)(iVar1 + 0x48);
    puVar3[1] = *(undefined4 *)(iVar1 + 0x4c);
    uVar2 = *(uint *)(iVar1 + 0x50);
    puVar3[2] = uVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    return uVar2;
  }
  puVar4 = *(uint * PTR32 *)(param_1 + 8);
  uVar2 = *(uint *)(*piVar5 + 0xc);
  puVar4[2] = 5;
  *puVar4 = uVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar2;
}

/* ref: FUN_00b9b260 */
uint F_00b9b260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a540(param_2,param_1);
  uVar1 = F_00c02f70(param_1,uVar1,*(int *)(param_1 + 8) + -0x20,*(int *)(param_1 + 8) + -0x10);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x20;
  return uVar1;
}

/* ref: FUN_00b9b290 */
uint F_00b9b290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar2 = F_00b9a540(param_2,param_1);
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c05a80(param_1,param_3,(int)pcVar3 - (int)(param_3 + 1));
  ((uint *)(gen_frame + 0x0))[0] = uVar4;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  uVar2 = F_00c02f70(param_1,uVar2,((uint *)(gen_frame + 0x0)),*(int *)(param_1 + 8) + -0x10);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return uVar2;
}

/* ref: FUN_00b9b2f0 */
uint F_00b9b2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b2f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)F_00c052a0(param_1,*piVar2,iVar1 + -0x20);
  *puVar3 = *(undefined4 *)(iVar1 + -0x10);
  puVar3[1] = *(undefined4 *)(iVar1 + -0xc);
  puVar3[2] = *(undefined4 *)(iVar1 + -8);
  uVar4 = *(uint *)(param_1 + 8);
  if (((3 < *(int *)(uVar4 - 8)) &&
      (uVar4 = *(uint *)(uVar4 - 0x10), (*(byte *)(uVar4 + 5) & 3) != 0)) &&
     ((*(byte *)(*piVar2 + 5) & 4) != 0)) {
    uVar4 = F_00c01940(param_1,*piVar2);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x20;
  return uVar4;
}

/* ref: FUN_00b9b360 */
uint F_00b9b360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)F_00c05310(param_1,*piVar2,param_3);
  *puVar3 = *(undefined4 *)(iVar1 + -0x10);
  puVar3[1] = *(undefined4 *)(iVar1 + -0xc);
  puVar3[2] = *(undefined4 *)(iVar1 + -8);
  uVar4 = *(uint *)(param_1 + 8);
  if (((3 < *(int *)(uVar4 - 8)) &&
      (uVar4 = *(uint *)(uVar4 - 0x10), (*(byte *)(uVar4 + 5) & 3) != 0)) &&
     ((*(byte *)(*piVar2 + 5) & 4) != 0)) {
    uVar4 = F_00c01940(param_1,*piVar2);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return uVar4;
}

/* ref: FUN_00b9b3d0 */
uint F_00b9b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b3d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  if (*((int *)GEN_TOP((*(int *)(param_1 + 8) + -8))) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
  }
  iVar1 = piVar2[2];
  if (iVar1 == 5) {
    *(int *)(*piVar2 + 8) = iVar3;
    if (((iVar3 != 0) && ((*(byte *)(iVar3 + 5) & 3) != 0)) && ((*(byte *)(*piVar2 + 5) & 4) != 0))
    {
      F_00c01940(param_1,*piVar2);
    }
  }
  else {
    if (iVar1 != 7) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x98 + iVar1 * 4))) = iVar3;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
      return 1;
    }
    *(int *)(*piVar2 + 8) = iVar3;
    if (((iVar3 != 0) && ((*(byte *)(iVar3 + 5) & 3) != 0)) && ((*(byte *)(*piVar2 + 5) & 4) != 0))
    {
      F_00c01900(param_1,*piVar2,iVar3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
      return 1;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return 1;
}

/* ref: FUN_00b9b480 */
uint F_00b9b480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = (int *)F_00b9a540(param_2,param_1);
  iVar1 = piVar2[2];
  if (iVar1 == 6) {
    *(undefined4 *)(*piVar2 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
  }
  else if (iVar1 == 7) {
    *(undefined4 *)(*piVar2 + 0xc) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
  }
  else {
    if (iVar1 != 8) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
      return 0;
    }
    iVar1 = *piVar2;
    *(undefined4 *)(iVar1 + 0x48) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
    *(undefined4 *)(iVar1 + 0x50) = 5;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
  if (((*(byte *)(iVar1 + 5) & 3) != 0) && ((*(byte *)(*piVar2 + 5) & 4) != 0)) {
    F_00c01900(param_1,*piVar2,iVar1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return 1;
}

/* ref: FUN_00b9b510 */
uint F_00b9b510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b510u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb9600(param_1,*(int *)(param_1 + 8) + (param_2 + 1) * -0x10,param_3);
  if (param_3 == -1) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(uVar1 + 8) <= *(uint *)(param_1 + 8)) {
      *(uint *)(uVar1 + 8) = *(uint *)(param_1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00b9b550 */
uint F_00b9b550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb9600(param_1,*param_2,param_2[1]);
  return uVar1;
}

/* ref: FUN_00b9b570 */
uint F_00b9b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9b570u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = F_00b9a540(param_4,param_1);
    iVar3 = uVar2 - *(int *)(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 8) + (param_2 + 1) * -0x10;
  (*(int *)(gen_frame + 0x8)) = iVar1;
  (*(int *)(gen_frame + 0xc)) = param_3;
  uVar2 = F_00bb97b0(param_1,((code *)REFP(0xb9b550)),&(*(int *)(gen_frame + 0x8)),iVar1 - *(int *)(param_1 + 0x20),iVar3);
  if (param_3 == -1) {
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) <= *(uint *)(param_1 + 8)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = *(uint *)(param_1 + 8);
    }
  }
  return uVar2;
}

/* ref: FUN_00b9b5e0 */
uint F_00b9b5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x28)) {
    uVar3 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0xc)));
  }
  uVar4 = F_00c05bd0(param_1,0,uVar3);
  *(undefined4 *)(uVar4 + 0x10) = *param_2;
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  *puVar1 = uVar4;
  puVar1[2] = 6;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar2 = param_2[1];
  puVar2[2] = 2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  uVar4 = F_00bb9600(param_1,*(int *)(param_1 + 8) + -0x20,0);
  return uVar4;
}

/* ref: FUN_00b9b650 */
uint F_00b9b650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  uVar1 = F_00bb97b0(param_1,((code *)REFP(0xb9b5e0)),&(*(undefined4 *)(gen_frame + 0x8)),
                       *(int *)(param_1 + 8) - *(int *)(param_1 + 0x20),0);
  return uVar1;
}

/* ref: FUN_00b9b690 */
uint F_00b9b690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9b690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * puVar2;
  
  puVar2 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar2 = &REFG(undefined, 0x13405c8);
  }
  F_00c06080(param_1,((undefined1 *)(gen_frame + 0xc)),param_2,param_3);
  uVar1 = F_00bb98b0(param_1,((undefined1 *)(gen_frame + 0xc)),puVar2);
  return uVar1;
}

/* ref: FUN_00b9b6d0 */
uint F_00b9b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b6d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
  if ((*((int *)GEN_TOP((*(int *)(param_1 + 8) + -8))) == 6) && (*(char *)(*piVar3 + 6) == '\0')) {
    bVar1 = F_00c07300();
    uVar2 = F_00c06800(param_1,*(undefined4 *)(*piVar3 + 0x10),param_2,param_3,0,(uint)bVar1);
    return uVar2;
  }
  return 1;
}

/* ref: FUN_00b9b720 */
uint F_00b9b720(unsigned int gen_a0)
{
  GEN_ENTER(0xb9b720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(byte *)(param_1 + 6);
}

/* ref: FUN_00b9b730 */
uint F_00b9b730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9b730u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = 0;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined4 *)(iVar1 + 0x40) = 0xfffffffd;
    return 0;
  case 1: ;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x44);
    return 0;
  case 2: ;
    F_00c01890(param_1);
    return 0;
  case 3: ;
    return *(uint *)(iVar1 + 0x44) >> 10;
  case 4: ;
    return *(uint *)(iVar1 + 0x44) & 0x3ff;
  case 5: ;
    uVar2 = *(uint *)(iVar1 + 0x44);
    if (uVar2 < (uint)(param_3 * 0x400)) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x40) = uVar2 + param_3 * -0x400;
    }
    if (*(uint *)(iVar1 + 0x40) <= uVar2) {
      do {
        F_00c01810(param_1);
        if (*(char *)(iVar1 + 0x15) == '\0') {
          return 1;
        }
      } while (*(uint *)(iVar1 + 0x40) <= *(uint *)(iVar1 + 0x44));
      return 0;
    }
    break;
  case 6: ;
    uVar3 = *(uint *)(iVar1 + 0x50);
    *(int *)(iVar1 + 0x50) = param_3;
    return uVar3;
  case 7: ;
    uVar3 = *(uint *)(iVar1 + 0x54);
    *(int *)(iVar1 + 0x54) = param_3;
    return uVar3;
  default: ;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_00b9b830 */
uint F_00b9b830(unsigned int gen_a0)
{
  GEN_ENTER(0xb9b830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c026b0(param_1);
  return 0;
}

/* ref: FUN_00b9b840 */
uint F_00b9b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b840u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00b9a540(param_2,param_1);
  uVar2 = F_00c04c10(param_1,*puVar1,*(int *)(param_1 + 8) + -0x10);
  if (uVar2 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    return uVar2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return 0;
}

/* ref: FUN_00b9b880 */
unsigned int F_00b9b880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b880u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  if (1 < param_2) {
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
      F_00c01810(param_1);
    }
    F_00c03460(param_1,param_2,(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4) + -1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2 * -0x10 + 0x10;
    return 0;
  }
  if (param_2 == 0) {
    puVar1 = *(uint * PTR32 *)(param_1 + 8);
    uVar2 = F_00c05a80(param_1,&REFG(undefined, 0x14c591c),0);
    *puVar1 = uVar2;
    puVar1[2] = 4;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  return 0;
}

/* ref: FUN_00b9b950 */
uint F_00b9b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9b950u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x28)) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0xc)));
  }
  uVar3 = F_00c05b70(param_1,param_2,uVar2);
  puVar1 = *(uint * PTR32 *)(param_1 + 8);
  *puVar1 = uVar3;
  puVar1[2] = 7;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar3 + 0x18;
}

/* ref: FUN_00b9ba00 */
uint F_00b9ba00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ba00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined * puVar4;
  undefined4 * puVar5;
  
  piVar3 = (int *)F_00b9a540(param_2,param_1);
  if (piVar3[2] != 6) {
    return 0;
  }
  iVar1 = *piVar3;
  if (*(char *)(iVar1 + 6) == '\0') {
    if (param_3 < 1) {
      return 0;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x24))) < param_3) {
      return 0;
    }
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x10 + param_3 * 4) + 8)));
    puVar4 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x1c))) + -4 + param_3 * 4))) + 0x10)));
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if ((param_3 < 1) || ((int)(uint)*(byte *)(iVar1 + 7) < param_3)) {
      return 0;
    }
    puVar5 = (undefined4 *)(param_3 * 0x10 + 8 + iVar1);
    puVar4 = &REFG(undefined, 0x14c591d);
  }
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar2 = *puVar5;
  puVar2[1] = puVar5[1];
  puVar2[2] = puVar5[2];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return (uint)puVar4;
}

/* ref: FUN_00b9ba90 */
uint F_00b9ba90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ba90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  undefined * puVar5;
  
  piVar3 = (int *)F_00b9a540(param_2,param_1);
  if (piVar3[2] != 6) {
    return 0;
  }
  iVar1 = *piVar3;
  if (*(char *)(iVar1 + 6) == '\0') {
    if (param_3 < 1) {
      return 0;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x24))) < param_3) {
      return 0;
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x10 + param_3 * 4) + 8)));
    puVar5 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x1c))) + -4 + param_3 * 4))) + 0x10)));
    if (puVar5 == (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if ((param_3 < 1) || ((int)(uint)*(byte *)(iVar1 + 7) < param_3)) {
      return 0;
    }
    puVar4 = (undefined4 *)(param_3 * 0x10 + 8 + iVar1);
    puVar5 = &REFG(undefined, 0x14c591d);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 8);
  *puVar4 = *puVar2;
  puVar4[1] = puVar2[1];
  puVar4[2] = puVar2[2];
  if (((3 < (*(int * PTR32 *)(param_1 + 8))[2]) &&
      (iVar1 = **(int * PTR32 *)(param_1 + 8), (*(byte *)(iVar1 + 5) & 3) != 0)) &&
     ((*(byte *)(*piVar3 + 5) & 4) != 0)) {
    F_00c01900(param_1,*piVar3,iVar1);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b9bb40 */
uint F_00b9bb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9bb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x8));
  uVar1 = F_00c01ae0(param_1,param_2,((byte *)(gen_frame + 0x8)));
  if (uVar1 != 0) {
    F_00c028c0(param_1,&REFG(undefined, 0x1340648),((byte *)(gen_frame + 0x8)));
    if (0 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20))) {
      uVar1 = F_00b9af00(param_1,((char *)REFP(0x134064c)),((undefined1 *)(gen_frame + 0x2c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)));
      return uVar1;
    }
  }
  uVar1 = F_00b9ae20(param_1,&REFG(undefined, 0x14c591e),0);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00b9bbd0 */
uint F_00b9bbd0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xb9bbd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00b9bb40(param_1,1);
  F_00b9aed0(param_1,param_2,((undefined *)&gen_args[2]));
  F_00b9b880(param_1,2);
  uVar1 = F_00b9b830(param_1);
  return uVar1;
}

/* ref: FUN_00b9bc00 */
uint F_00b9bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9bc00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00b9b070(param_1,0xffffd8f0,param_2);
  uVar1 = F_00b9a940(param_1,0xffffffff);
  if (uVar1 != 0) {
    return 0;
  }
  F_00b9a760(param_1,0xfffffffe);
  F_00b9b150(param_1,0,0);
  F_00b9a910(param_1,0xffffffff);
  F_00b9b290(param_1,0xffffd8f0,param_2);
  return 1;
}

/* ref: FUN_00b9bc60 */
uint F_00b9bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9a610(param_1,param_2);
  if (uVar1 == 0) {
    uVar1 = F_00b9bbd0(param_1,((char *)REFP(0x1340668)),param_3);
  }
  return uVar1;
}

/* ref: FUN_00b9bc90 */
uint F_00b9bc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9b190(param_1,param_2);
  if (uVar1 != 0) {
    F_00b9ae60(param_1,param_3);
    F_00b9b0d0(param_1,0xfffffffe);
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 != 0) {
      F_00b9a7b0(param_1,0xfffffffe);
      return 1;
    }
    F_00b9a760(param_1,0xfffffffd);
  }
  return 0;
}

/* ref: FUN_00b9bcf0 */
uint F_00b9bcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 + 9999U < 10000) {
    uVar1 = F_00b9a750(param_1);
    iVar2 = param_2 + 1 + uVar1;
  }
  uVar1 = F_00b9bc90(param_1,iVar2,param_3);
  if (uVar1 == 0) {
    return 0;
  }
  F_00b9a910(param_1,iVar2);
  F_00b9b510(param_1,1,1);
  return 1;
}

/* ref: FUN_00b9bd60 */
uint F_00b9bd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9bd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  undefined4 uVar4;
  char * pcVar5;
  
  F_00b9a910(param_1,param_2);
  pcVar5 = param_3;
  do {
    pcVar2 = (char *)F_00c51da0(pcVar5,0x2e);
    pcVar1 = pcVar5;
    if (pcVar2 == (char *)0x0) {
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
    }
    F_00b9ae20(param_1,pcVar5,(int)pcVar2 - (int)pcVar5);
    F_00b9b0d0(param_1,0xfffffffe);
    uVar3 = F_00b9a940(param_1,0xffffffff);
    if (uVar3 == 0) {
      F_00b9a760(param_1,0xfffffffe);
      uVar4 = 1;
      if (*pcVar2 != '.') {
        uVar4 = param_4;
      }
      F_00b9b150(param_1,0,uVar4);
      F_00b9ae20(param_1,pcVar5,(int)pcVar2 - (int)pcVar5);
      F_00b9a910(param_1,0xfffffffe);
      F_00b9b260(param_1,0xfffffffc);
    }
    else {
      uVar3 = F_00b9a940(param_1,0xffffffff);
      if (uVar3 != 5) {
        F_00b9a760(param_1,0xfffffffd);
        return (uint)pcVar5;
      }
    }
    F_00b9a7b0(param_1,0xfffffffe);
    pcVar5 = pcVar2 + 1;
  } while (*pcVar2 == '.');
  return 0;
}

/* ref: FUN_00b9be80 */
uint F_00b9be80(unsigned int gen_a0)
{
  GEN_ENTER(0xb9be80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_EAX = 0;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1;
  iVar6 = 1;
  if (1 < *(int *)(param_1 + 4)) {
    uVar2 = *(undefined4 *)(param_1 + 8);
    param_1 = F_00b9ac60(uVar2,0xffffffff);
    iVar7 = -2;
    do {
      uVar5 = F_00b9ac60(uVar2,iVar7);
      iVar3 = *(int *)(iVar4 + 4);
      if (((iVar3 - iVar6) + 1 < 10) && (param_1 <= uVar5)) break;
      param_1 = param_1 + uVar5;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar6 < iVar3);
    F_00b9b880(uVar2,iVar6);
    in_EAX = 1 - iVar6;
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00b9bef0 */
uint F_00b9bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9bef0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (*param_1 - (int)param_1) + -0xc;
  if (iVar1 != 0) {
    F_00b9ae20(param_1[2],param_1 + 3,iVar1);
    param_1[1] = param_1[1] + 1;
    *param_1 = (int)(param_1 + 3);
    F_00b9be80(param_1);
  }
  return (uint)(param_1 + 3);
}

/* ref: FUN_00b9bf30 */
uint F_00b9bf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9bf30u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int * in_EAX = 0;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  
  puVar3 = param_2;
  iVar2 = param_3;
  while (iVar2 != 0) {
    in_EAX = (int *)*param_1;
    iVar2 = iVar2 + -1;
    if (param_1 + 0x83 <= in_EAX) {
      iVar1 = (int)in_EAX + (-0xc - (int)param_1);
      in_EAX = (int *)0x0;
      if (iVar1 != 0) {
        F_00b9ae20(param_1[2],param_1 + 3,iVar1);
        param_1[1] = param_1[1] + 1;
        *param_1 = (int)(param_1 + 3);
        in_EAX = (int *)F_00b9be80(param_1);
      }
    }
    *(undefined1 *)*param_1 = *puVar3;
    *param_1 = *param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00b9bfc0 */
unsigned int F_00b9bfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9bfc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (*param_1 - (int)param_1) + -0xc;
  if (iVar1 != 0) {
    F_00b9ae20(param_1[2],param_1 + 3,iVar1);
    param_1[1] = param_1[1] + 1;
    *param_1 = (int)(param_1 + 3);
  }
  F_00b9b880(param_1[2],param_1[1]);
  param_1[1] = 1;
  return 0;
}

/* ref: FUN_00b9c000 */
uint F_00b9c000(unsigned int gen_a0)
{
  GEN_ENTER(0xb9c000u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[2];
  uVar3 = F_00b9abf0(iVar1,0xffffffff,&(*(int * PTR32 *)&gen_args[0]));
  iVar4 = *piVar2;
  if ((*(int * PTR32 *)&gen_args[0]) <= ((int *)GEN_TOP(((int)piVar2 + (0x20c - iVar4))))) {
    F_00c46aa0(iVar4,uVar3,(*(int * PTR32 *)&gen_args[0]));
    *piVar2 = *piVar2 + (int)(*(int * PTR32 *)&gen_args[0]);
    uVar3 = F_00b9a760(iVar1,0xfffffffe);
    return uVar3;
  }
  iVar4 = (iVar4 - (int)piVar2) + -0xc;
  if (iVar4 != 0) {
    F_00b9ae20(piVar2[2],piVar2 + 3,iVar4);
    piVar2[1] = piVar2[1] + 1;
    *piVar2 = (int)(piVar2 + 3);
    F_00b9a800(iVar1,0xfffffffe);
  }
  piVar2[1] = piVar2[1] + 1;
  uVar3 = F_00b9be80(piVar2);
  return uVar3;
}

/* ref: FUN_00b9c080 */
uint F_00b9c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  param_2[2] = param_1;
  *param_2 = (int)(param_2 + 3);
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: FUN_00b9c1b0 */
uint F_00b9c1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  gen_size32 * param_3 = (gen_size32 *)(uintptr_t)gen_a2;
  int iVar1;
  gen_size32 sVar2;
  
  if (*param_2 != 0) {
    *param_2 = 0;
    *param_3 = 1;
    return 0x13406b4;
  }
  iVar1 = F_00c48a9f((undefined *)param_2[1]);
  if (iVar1 != 0) {
    return 0;
  }
  sVar2 = F_00c48f5e(param_2 + 2,1,0x200,(undefined *)param_2[1]);
  *param_3 = sVar2;
  return -(uint)(sVar2 != 0) & (uint)(param_2 + 2);
}

/* ref: FUN_00b9c210 */
uint F_00b9c210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = F_00c51f85();
  uVar2 = F_00c51e86(*piVar1);
  uVar3 = F_00b9abf0(in_esi,in_edi,0);
  F_00b9af00(in_esi,((char *)REFP(0x13406b8)),param_3,uVar3 + 1,uVar2);
  F_00b9a7b0(in_esi,in_edi);
  return 6;
}

/* ref: FUN_00b9c250 */
uint F_00b9c250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  int iVar2;
  undefined * pFVar3;
  int * piVar4;
  uint uVar5;
  int in_edi;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)((int *)(gen_frame + 0x0));
  uVar1 = F_00b9a750(param_1);
  in_edi = uVar1 + 1;
  ((int *)(gen_frame + 0x0))[1] = 0;
  if (param_2 == (char *)0x0) {
    F_00b9ae20(param_1,((char *)REFP(0x13406cc)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00c50860();
  }
  else {
    F_00b9af00(param_1,&REFG(undefined, 0x13406d4),param_2);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = F_00c495d8(param_2,&REFG(undefined, 0x13406d8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      piVar4 = F_00c51f85();
      uVar1 = F_00c51e86(*piVar4);
      uVar5 = F_00b9abf0(param_1,in_edi,0);
      F_00b9af00(param_1,((char *)REFP(0x13406b8)),&REFG(undefined, 0x13406dc),uVar5 + 1,uVar1);
      F_00b9a7b0(param_1,in_edi);
      uVar1 = 6;
      goto LAB_00b9c44e;
    }
  }
  iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (iVar2 == 0x23) {
    ((int *)(gen_frame + 0x0))[1] = 1;
    do {
      iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (iVar2 == -1) goto LAB_00b9c2e4;
    } while (iVar2 != 10);
    iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
LAB_00b9c2e4: ;
  if ((iVar2 == REFG(char, 0x13406e4)) && (param_2 != (char *)0x0)) {
    pFVar3 = F_00c5212b(param_2,&REFG(undefined, 0x13406ec),(*(undefined * PTR32 *)(gen_frame + 0x8)));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pFVar3;
    if (pFVar3 == (undefined *)0x0) {
      uVar1 = F_00b9c210(param_1,in_edi,((char *)REFP(0x13406f0)));
      goto LAB_00b9c44e;
    }
    do {
      iVar2 = F_00c48be3((*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (iVar2 == -1) break;
    } while (iVar2 != REFG(char, 0x13406f8));
    ((int *)(gen_frame + 0x0))[1] = 0;
  }
  F_00c50cf0(iVar2,(*(undefined * PTR32 *)(gen_frame + 0x8)));
  uVar1 = F_00b9abf0(param_1,0xffffffff,0);
  uVar1 = F_00b9b690(param_1,((code *)REFP(0xb9c1b0)),((int *)(gen_frame + 0x0)) + 1,uVar1);
  iVar2 = F_00c48ac7((*(undefined * PTR32 *)(gen_frame + 0x8)));
  ((int *)(gen_frame + 0x0))[0] = iVar2;
  if (param_2 != (char *)0x0) {
    F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  if (((int *)(gen_frame + 0x0))[0] == 0) {
    F_00b9a7b0(param_1,in_edi);
  }
  else {
    F_00b9a760(param_1,in_edi);
    piVar4 = F_00c51f85();
    uVar1 = F_00c51e86(*piVar4);
    uVar5 = F_00b9abf0(param_1,in_edi,0);
    F_00b9af00(param_1,((char *)REFP(0x13406b8)),&REFG(undefined, 0x1340700),uVar5 + 1,uVar1);
    F_00b9a7b0(param_1,in_edi);
    uVar1 = 6;
  }
LAB_00b9c44e: ;
  F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)((int *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00b9c470 */
uint F_00b9c470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2[1] == 0) {
    return 0;
  }
  *param_3 = param_2[1];
  param_2[1] = 0;
  return *param_2;
}

/* ref: FUN_00b9c490 */
uint F_00b9c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9c490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  uVar1 = F_00b9b690(param_1,((code *)REFP(0xb9c470)),&(*(undefined4 *)(gen_frame + 0x8)),param_4);
  return uVar1;
}

/* ref: FUN_00b9c500 */
uint F_00b9c500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9c500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined * pvVar1;
  
  if (param_4 == 0) {
    F_00c4c68f(param_2);
    return 0;
  }
  pvVar1 = F_00c52171(param_2,param_4);
  return (uint)pvVar1;
}

/* ref: FUN_00b9c530 */
uint F_00b9c530(unsigned int gen_a0)
{
  GEN_ENTER(0xb9c530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00b9abf0(param_1,0xffffffff,0);
  pcVar3 = ((char *)REFP(0x1340708));
  uVar2 = F_00c50860();
  F_00c49386(uVar2 + 0x40,pcVar3,uVar1);
  return 0;
}

/* ref: FUN_00b9c590 */
uint F_00b9c590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  char * pcVar5;
  bool bVar6;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x8));
  uVar2 = F_00c01ae0(param_1,0,((byte *)(gen_frame + 0x8)));
  if (uVar2 == 0) {
    uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x13405cc)),param_2,param_3);
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_00c028c0(param_1,&REFG(undefined, 0x13405e4),((byte *)(gen_frame + 0x8)));
  pcVar5 = ((char *)REFP(0x13405e8));
  pbVar3 = (byte *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00b9c620: ;
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00b9c625;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00b9c620;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00b9c625: ;
  if (iVar4 == 0) {
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x13405f0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),param_3);
      F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)));
      return uVar2;
    }
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = &REFG(undefined, 0x1340610);
  }
  uVar2 = F_00b9bbd0(param_1,((char *)REFP(0x1340614)),param_2,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),param_3
                      );
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)((byte *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00b9c710 */
uint F_00b9c710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9ad00(param_1,param_2);
  if (uVar1 != 0) {
    uVar2 = F_00b9b190(param_1,param_2);
    if (uVar2 != 0) {
      F_00b9b070(param_1,0xffffd8f0,param_3);
      uVar2 = F_00b9aa50(param_1,0xffffffff,0xfffffffe);
      if (uVar2 != 0) {
        F_00b9a760(param_1,0xfffffffd);
        return uVar1;
      }
    }
  }
  uVar1 = F_00b9a940(param_1,param_2);
  uVar1 = F_00b9a960(param_1,uVar1);
  uVar1 = F_00b9af00(param_1,((char *)REFP(0x1340634)),param_3,uVar1);
  F_00b9c590(param_1,param_2,uVar1);
  return 0;
}

/* ref: FUN_00b9c7a0 */
uint F_00b9c7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if (uVar1 != param_3) {
    uVar1 = F_00b9a960(param_1,param_3);
    uVar2 = F_00b9a940(param_1,param_2);
    uVar2 = F_00b9a960(param_1,uVar2);
    uVar1 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar1,uVar2);
    uVar1 = F_00b9c590(param_1,param_2,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00b9c7f0 */
uint F_00b9c7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00b9c590(param_1,param_2,((char *)REFP(0x134067c)));
  }
  return uVar1;
}

/* ref: FUN_00b9c820 */
uint F_00b9c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00b9abf0(param_1,param_2,param_3);
  if (uVar1 == 0) {
    uVar2 = F_00b9a960(param_1,4);
    uVar3 = F_00b9a940(param_1,param_2);
    uVar3 = F_00b9a960(param_1,uVar3);
    uVar2 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar2,uVar3);
    F_00b9c590(param_1,param_2,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b9c880 */
uint F_00b9c880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9c880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar2 = F_00b9a940(param_1,param_2);
  if ((int)uVar2 < 1) {
    pcVar3 = param_3;
    if (param_4 != (int *)0x0) {
      if (param_3 != (char *)0x0) {
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        *param_4 = (int)pcVar3 - (int)(param_3 + 1);
        return (uint)param_3;
      }
      *param_4 = 0;
      return (uint)param_3;
    }
  }
  else {
    pcVar3 = (char *)F_00b9c820(param_1,param_2,param_4);
  }
  return (uint)pcVar3;
}

/* ref: FUN_00b9c8e0 */
float F_00b9c8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  dVar3 = F_00b9ab30(param_1,param_2);
  if ((GEN_ISNAN(dVar3) != (GEN_ISNAN(dVar3) || dVar3 == 0.0)) &&
     (uVar1 = F_00b9a9b0(param_1,param_2), uVar1 == 0)) {
    uVar1 = F_00b9a960(param_1,3);
    uVar2 = F_00b9a940(param_1,param_2);
    uVar2 = F_00b9a960(param_1,uVar2);
    uVar1 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar1,uVar2);
    F_00b9c590(param_1,param_2,uVar1);
  }
  return (float)dVar3;
}

/* ref: FUN_00b9c960 */
float10 F_00b9c960(unsigned int gen_a0, unsigned int gen_a1, double gen_a2)
{
  GEN_ENTER(0xb9c960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  double param_3 = (double)gen_a2;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if ((int)uVar1 < 1) {
    return (float10)param_3;
  }
  fVar2 = F_00b9c8e0(param_1,param_2);
  return (float10)fVar2;
}

/* ref: FUN_00b9c9b0 */
uint F_00b9c9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00b9ab70(param_1,param_2);
  if ((uVar1 == 0) && (uVar2 = F_00b9a9b0(param_1,param_2), uVar2 == 0)) {
    uVar2 = F_00b9a960(param_1,3);
    uVar3 = F_00b9a940(param_1,param_2);
    uVar3 = F_00b9a960(param_1,uVar3);
    uVar2 = F_00b9af00(param_1,((char *)REFP(0x1340634)),uVar2,uVar3);
    F_00b9c590(param_1,param_2,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b9ca20 */
uint F_00b9ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9a940(param_1,param_2);
  if ((int)uVar1 < 1) {
    return param_3;
  }
  uVar1 = F_00b9c9b0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b9ca50 */
uint F_00b9ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  if (param_2 != 0) {
    iVar2 = 0;
    iVar3 = *param_3;
    piVar4 = param_3;
    while (iVar3 != 0) {
      piVar4 = piVar4 + 2;
      iVar2 = iVar2 + 1;
      iVar3 = *piVar4;
    }
    F_00b9bd60(param_1,0xffffd8f0,((char *)REFP(0x134068c)),1);
    F_00b9b070(param_1,0xffffffff,param_2);
    uVar1 = F_00b9a940(param_1,0xffffffff);
    if (uVar1 != 5) {
      F_00b9a760(param_1,0xfffffffe);
      uVar1 = F_00b9bd60(param_1,0xffffd8ee,param_2,iVar2);
      if (uVar1 != 0) {
        F_00b9bbd0(param_1,((char *)REFP(0x1340694)),param_2);
      }
      F_00b9a910(param_1,0xffffffff);
      F_00b9b290(param_1,0xfffffffd,param_2);
    }
    F_00b9a7b0(param_1,0xfffffffe);
    F_00b9a800(param_1,-1 - param_4);
  }
  if (*param_3 != 0) {
    piVar4 = param_3;
    do {
      if (0 < param_4) {
        iVar3 = param_4;
        do {
          F_00b9a910(param_1,-param_4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      F_00b9af30(param_1,piVar4[1],param_4);
      F_00b9b290(param_1,-2 - param_4,*piVar4);
      piVar4 = piVar4 + 2;
    } while (*piVar4 != 0);
  }
  uVar1 = F_00b9a760(param_1,-1 - param_4);
  return uVar1;
}

/* ref: FUN_00b9cb70 */
uint F_00b9cb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9cb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  (*(int *)(gen_frame + 0xc)) = (int)pcVar2 - (int)(param_3 + 1);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = ((undefined1 *)(gen_frame + 0x1c));
  (*(int *)(gen_frame + 0x14)) = 0;
  pcVar3 = F_00c46a10(param_2,param_3);
  pcVar2 = param_2;
  while (pcVar3 != (char *)0x0) {
    F_00b9bf30(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),pcVar2,(int)pcVar3 - (int)pcVar2);
    pcVar2 = param_4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    F_00b9bf30(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),param_4,(int)pcVar2 - (int)(param_4 + 1));
    pcVar2 = pcVar3 + (*(int *)(gen_frame + 0xc));
    pcVar3 = F_00c46a10(pcVar2,param_3);
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00b9bf30(&(*(undefined1 * PTR32 *)(gen_frame + 0x10)),pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  iVar4 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x10)) - (int)((undefined1 *)(gen_frame + 0x1c));
  if (iVar4 != 0) {
    F_00b9ae20((*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1c)),iVar4);
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = ((undefined1 *)(gen_frame + 0x1c));
  }
  F_00b9b880((*(undefined4 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x14)));
  (*(int *)(gen_frame + 0x14)) = 1;
  uVar5 = F_00b9abf0((*(undefined4 *)(gen_frame + 0x8)),0xffffffff,0);
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar5;
}

/* ref: FUN_00b9ccc0 */
uint F_00b9ccc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9ccc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  if ((param_3 == (byte *)0x0) ||
     (uVar2 = F_00b9a940(param_1,param_2), pbVar3 = param_3, 0 < (int)uVar2)) {
    pbVar3 = (byte *)F_00b9c820(param_1,param_2,0);
  }
  pbVar4 = (byte *)*param_4;
  uVar2 = 0;
  do {
    pbVar6 = pbVar3;
    if (pbVar4 == (byte *)0x0) {
      uVar2 = F_00b9af00(param_1,((char *)REFP(0x1340654)),pbVar3);
      uVar2 = F_00b9c590(param_1,param_2,uVar2);
      return uVar2;
    }
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00b9cd30: ;
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b9cd35;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00b9cd30;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00b9cd35: ;
    if (iVar5 == 0) {
      return uVar2;
    }
    pbVar4 = (byte *)param_4[uVar2 + 1];
    uVar2 = uVar2 + 1;
  } while( true );
}

/* ref: FUN_00b9cd70 */
uint F_00b9cd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9cd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9ca50(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00b9cdb0 */
unsigned int F_00b9cdb0(float gen_a0)
{
  GEN_ENTER(0xb9cdb0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b9cdd0 */
uint F_00b9cdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9cdd0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_00b9cde0 */
unsigned int F_00b9cde0(void)
{
  GEN_ENTER(0xb9cde0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b9cdf0 */
uint F_00b9cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9cdf0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (uint *)F_00ab4280(param_1 & 0xff);
  if (puVar1 != (uint *)0x0) {
    if ((char)param_2 == '\0') {
      uVar2 = *puVar1;
    }
    else if ((char)param_2 == '\x01') {
      uVar2 = puVar1[1];
    }
    if ((char)param_3 != '\0') {
      return (uVar2 * 0x96) / 100;
    }
  }
  return uVar2;
}

/* ref: FUN_00b9ce40 */
uint F_00b9ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb9ce40u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = F_00ab4280(param_1 & 0xff);
  if (uVar1 != 0) {
    if ((char)param_2 == '\0') {
      uVar2 = *(uint *)(uVar1 + 0xc);
    }
    else if ((char)param_2 == '\x01') {
      uVar2 = *(uint *)(uVar1 + 0x10);
    }
    else if ((char)param_2 == '\x02') {
      uVar2 = *(uint *)(uVar1 + 8);
    }
    if ((char)param_3 != '\0') {
      return (uVar2 * 0x96) / 100;
    }
  }
  return uVar2;
}

/* ref: FUN_00b9cea0 */
unsigned int F_00b9cea0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9cea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x4e0) = 0;
  return 0;
}

/* ref: FUN_00b9cec0 */
uint F_00b9cec0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9cec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined * this;
  int iVar2;
  undefined * this_00;
  undefined * this_01;
  char cVar3;
  int local_c;
  int local_8;
  
  this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d5);
  if (this == (undefined *)0x0) {
    return 0;
  }
  cVar3 = '\0';
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xc) < 1) {
    return 0;
  }
  iVar2 = 0;
  do {
    this_00 = (undefined *)F_00a37da0(this,iVar2);
    if (this_00 == (undefined *)0x0) break;
    if (*(char *)((int)this_00 + 6) == '\0') {
      iVar2 = *(int *)((int)this_00 + 8);
    }
    else {
      this_01 = (undefined *)F_00a3a860(this_00);
      cVar1 = *(char *)((int)this_01 + 6);
      while (cVar1 == '\0') {
        this_01 = (undefined *)F_00a3a860(this_01);
        cVar1 = *(char *)((int)this_01 + 6);
      }
      iVar2 = *(int *)((int)this_01 + 8);
    }
    if (iVar2 == 0) break;
    if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
    cVar3 = cVar3 + '\x01';
    iVar2 = (int)cVar3;
  } while (iVar2 < *(int *)((int)this + 0xc));
  if (local_8 == 0) {
    return 0;
  }
  return (uint)(local_8 * param_1 * 0x32) / (uint)(local_c * 100);
}

/* ref: FUN_00b9cf90 */
uint F_00b9cf90(unsigned int gen_a0)
{
  GEN_ENTER(0xb9cf90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined * this;
  int iVar2;
  undefined * this_00;
  undefined * this_01;
  char cVar3;
  int local_c;
  int local_8;
  
  this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d5);
  if (this == (undefined *)0x0) {
    return 0;
  }
  cVar3 = '\0';
  local_8 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xc) < 1) {
    return 0;
  }
  iVar2 = 0;
  do {
    this_00 = (undefined *)F_00a37da0(this,iVar2);
    if (this_00 == (undefined *)0x0) break;
    if (*(char *)((int)this_00 + 6) == '\0') {
      iVar2 = *(int *)((int)this_00 + 8);
    }
    else {
      this_01 = (undefined *)F_00a3a860(this_00);
      cVar1 = *(char *)((int)this_01 + 6);
      while (cVar1 == '\0') {
        this_01 = (undefined *)F_00a3a860(this_01);
        cVar1 = *(char *)((int)this_01 + 6);
      }
      iVar2 = *(int *)((int)this_01 + 8);
    }
    if (iVar2 == 0) break;
    if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
    cVar3 = cVar3 + '\x01';
    iVar2 = (int)cVar3;
  } while (iVar2 < *(int *)((int)this + 0xc));
  if (local_8 == 0) {
    return 0;
  }
  return (uint)(local_8 * param_1 * 0x32) / (uint)(local_c * 100);
}

/* ref: FUN_00b9d060 */
uint F_00b9d060(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1 + 8;
}

/* ref: FUN_00b9d070 */
uint F_00b9d070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9d070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint local_14;
  uint local_c;
  
  iVar2 = *(int *)(*param_1 + 4);
  piVar5 = (int *)(iVar2 + 0x30);
  local_14 = 0;
  do {
    uVar7 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x1d1c) + 0x1d0c + (int)this)));
    uVar6 = 0;
    iVar8 = 0;
    param_1 = (int *)0x0;
    switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x1d1c))) {
    case 0: ;
      iVar8 = piVar5[-0xc];
      uVar6 = *(undefined1 *)(local_14 + 0xc + iVar2);
      param_1 = (int *)0x8;
      break;
    case 1: ;
      iVar8 = piVar5[0x10];
      uVar6 = *(undefined1 *)(local_14 + 0x7c + iVar2);
      param_1 = (int *)0x9;
      break;
    case 2: ;
      iVar8 = *piVar5;
      uVar6 = *(undefined1 *)(local_14 + 0x3c + iVar2);
      param_1 = (int *)0xa;
      break;
    case 3: ;
      iVar8 = piVar5[8];
      uVar6 = *(undefined1 *)(local_14 + 0x5c + iVar2);
      param_1 = (int *)0xb;
      break;
    case 4: ;
      iVar8 = piVar5[4];
      uVar6 = *(undefined1 *)(local_14 + 0x4c + iVar2);
      param_1 = (int *)0xc;
      break;
    case 5: ;
      iVar8 = piVar5[0xc];
      uVar6 = *(undefined1 *)(local_14 + 0x6c + iVar2);
      param_1 = (int *)0xd;
      break;
    case 6: ;
      iVar8 = piVar5[-4];
      uVar6 = *(undefined1 *)(local_14 + 0x2c + iVar2);
      param_1 = (int *)0xe;
      break;
    case 7: ;
      iVar8 = piVar5[-8];
      uVar6 = *(undefined1 *)(local_14 + 0x1c + iVar2);
      param_1 = (int *)0xf;
      break;
    case 8: ;
      iVar8 = piVar5[0x14];
      uVar6 = *(undefined1 *)(local_14 + 0x8c + iVar2);
      param_1 = (int *)0x10;
      break;
    case 9: ;
      iVar8 = piVar5[0x18];
      uVar6 = *(undefined1 *)(local_14 + 0x9c + iVar2);
      param_1 = (int *)0x11;
      break;
    case 10: ;
      iVar8 = piVar5[0x1c];
      uVar6 = *(undefined1 *)(local_14 + 0xac + iVar2);
      param_1 = (int *)0x12;
    }
    if ((uVar7 < 5) && (iVar8 != 0)) {
      local_c = *(uint *)(&REFG(undefined, 0x14ab2cc) + (*(uint *)((int)this + 0x1d1c) & 0xfffffffc)) >>
                (('\x03' - ((byte)*(uint *)((int)this + 0x1d1c) & 3)) * '\b' & 0x1f) & 0xff;
      uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),*(byte *)((int)this + 0x1d1c) + 8,0);
      if ((ushort)local_c == 0) {
        if ((short)uVar4 != 0) {
          local_c = 1;
        }
      }
      else if (0x32 < (ushort)local_c) {
        local_c = 0x32;
      }
      *((int *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x4fc + (int)this))) = iVar8;
      *((undefined1 *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x50a + (int)this))) = uVar6
      ;
      *((int * PTR32 *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x50c + (int)this))) = param_1;
      *((uint *)GEN_TOP(((uVar7 + *(int *)((int)this + 0x1d1c) * 5) * 0x70 + 0x510 + (int)this))) =
           (local_c - *(byte *)((int)this + 0x1d18)) + 1;
      pcVar1 = ((char *)GEN_TOP((*(int *)((int)this + 0x1d1c) + 0x1d0c + (int)this)));
      *pcVar1 = *pcVar1 + '\x01';
    }
    local_14 = local_14 + 1;
    piVar5 = piVar5 + 1;
  } while (local_14 < 3);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x4ec);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x4ec) = 0;
  }
  uVar7 = F_00b9e010(this);
  return uVar7;
}

/* ref: FUN_00b9d310 */
uint F_00b9d310(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * this_00;
  uint uVar4;
  
  piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  uVar4 = (*(int *)((int)this + 0x1d2c) - *(int *)((int)this + 0x1d28) >> 2) -
          *(int *)((int)this + 0x1d24);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,uVar4,0);
    this_00[5] = uVar4;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xb9db10));
  }
  *(undefined4 * PTR32 *)((int)this + 0x4f4) = this_00;
  if (*(int *)((int)this + 0x4f0) == 0) {
    uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x4f0) = uVar3;
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)((int)this + 0x1d24);
      *(int *)((int)this + 0x1d24) = iVar1 + 1;
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x4f4),uVar3,
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d28) + iVar1 * 4))));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined1 *)((int)this + 0x4f8) = 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4f0) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x4f0),*(undefined4 *)((int)this + 0x4f4));
  return uVar4;
}

/* ref: FUN_00b9d400 */
uint F_00b9d400(void)
{
  GEN_ENTER(0xb9d400u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined * ptVar5;
  ulonglong uVar6;
  __time64_t _Var7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this == (undefined *)0x0) {
    uVar6 = F_0046ff40();
    uVar1 = (uint)(uVar6 / 1000);
  }
  else {
    uVar1 = F_00975680(this);
  }
  if (uVar1 == 0) {
    piVar4 = &REFG(undefined4, 0x14a2ad4);
  }
  else {
    ((uint *)(gen_frame + 0xc))[0] = uVar1;
    ((uint *)(gen_frame + 0xc))[1] = 0;
    F_00c4f4ca(&REFG(undefined4, 0x14a2ab0),((uint *)(gen_frame + 0xc)));
    piVar4 = &REFG(undefined4, 0x14a2ab0);
  }
  ptVar5 = ((undefined *)(gen_frame + 0x14));
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    (*(int *)((char *)(ptVar5))) = *piVar4;
    piVar4 = piVar4 + 1;
    ptVar5 = (undefined *)&(*(int *)(((char *)(ptVar5) + 4)));
  }
  (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 8))) = 5;
  (*(int *)(((char *)((undefined *)(gen_frame + 0x14)) + 4))) = 0;
  (*(int *)((char *)((undefined *)(gen_frame + 0x14)))) = 0;
  _Var7 = F_00c4c109(((undefined *)(gen_frame + 0x14)));
  uVar2 = (uint)_Var7;
  if (uVar2 <= uVar1) {
    uVar2 = uVar2 + 0x15180;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_00b9d4b0 */
uint F_00b9d4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  ((uint *)(gen_frame + 0x10))[0x16] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((uint *)(gen_frame + 0x10))[0] = 0;
  ((uint *)(gen_frame + 0x10))[1] = 0;
  ((uint *)(gen_frame + 0x10))[2] = 0;
  ((uint *)(gen_frame + 0x10))[3] = 0;
  ((uint *)(gen_frame + 0x10))[4] = 0;
  ((uint *)(gen_frame + 0x10))[5] = 0;
  ((uint *)(gen_frame + 0x10))[6] = 0;
  ((uint *)(gen_frame + 0x10))[7] = 0;
  ((uint *)(gen_frame + 0x10))[8] = 0;
  ((uint *)(gen_frame + 0x10))[9] = 0;
  ((uint *)(gen_frame + 0x10))[10] = 0;
  ((uint *)(gen_frame + 0x10))[0xb] = 0;
  ((uint *)(gen_frame + 0x10))[0xc] = 0;
  ((uint *)(gen_frame + 0x10))[0xd] = 0;
  ((uint *)(gen_frame + 0x10))[0xe] = 0;
  ((uint *)(gen_frame + 0x10))[0xf] = 0;
  ((uint *)(gen_frame + 0x10))[0x10] = 0;
  ((uint *)(gen_frame + 0x10))[0x11] = 0;
  ((uint *)(gen_frame + 0x10))[0x12] = 0;
  ((uint *)(gen_frame + 0x10))[0x13] = 0;
  ((uint *)(gen_frame + 0x10))[0x14] = 0;
  ((uint *)(gen_frame + 0x10))[0x15] = 0;
  iVar8 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0xb;
  uVar6 = 0x68000ace;
  uVar3 = 0x8801;
  uVar9 = 0x98d0;
  uVar2 = REFG(undefined4, 0x14ab2d8);
  do {
    uVar5 = uVar6;
    uVar2 = uVar2 << 0xb ^ uVar2;
    uVar6 = (uVar9 >> 0xb ^ uVar2) >> 8 ^ uVar9 ^ uVar2;
    *(uint *)((int)((uint *)(gen_frame + 0x10)) + iVar8) = uVar6 % 1000;
    uVar3 = uVar3 << 0xb ^ uVar3;
    uVar2 = (uVar6 >> 0xb ^ uVar3) >> 8 ^ uVar6 ^ uVar3;
    *(uint *)((int)((uint *)(gen_frame + 0x10)) + iVar8 + 0x2c) = uVar2 % 1000;
    iVar8 = iVar8 + 4;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + -1;
    uVar3 = uVar9;
    uVar9 = uVar2;
    uVar2 = uVar5;
  } while ((*(uint *)(gen_frame + 0xc)) != 0);
  uVar6 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  iVar8 = (int)this + 0xc;
  do {
    iVar7 = (((uint)*(byte *)((int)this + uVar6 + 0x1d0c) * ((uint *)(gen_frame + 0x10))[(int)(uVar6)]) / 1000 + (*(uint *)(gen_frame + 0xc))) *
            0x70;
    uVar3 = ((uint *)(gen_frame + 0x10))[(int)(uVar6 + 0xb)];
    piVar1 = (int *)(iVar7 + 0x4fc + (int)this);
    *(undefined4 *)(iVar8 + -0xc) = *(undefined4 *)(iVar7 + 0x4fc + (int)this);
    *(undefined1 *)(iVar8 + 2) = *(undefined1 *)((int)piVar1 + 0xe);
    *(bool *)iVar8 = uVar3 < 10;
    *(char *)(iVar8 + 1) = (char)(uVar6 >> 3);
    if ((((&REFG(undefined1, 0x14ab2c8))[uVar6 >> 3] & (byte)(0x80 >> ((byte)uVar6 & 7))) == 0) && (*piVar1 != 0))
    {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(iVar8 + 3) = uVar4;
    *(int *)(iVar8 + 4) = piVar1[4];
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 5;
    *(int *)(iVar8 + 8) = piVar1[5];
    uVar6 = uVar6 + 1;
    iVar8 = iVar8 + 0x70;
  } while ((*(uint *)(gen_frame + 0xc)) < 0x37);
  F_00c47745(((uint *)(gen_frame + 0x10))[0x16] ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)piVar1;
}

/* ref: FUN_00b9d660 */
uint F_00b9d660(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x4ec) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x4e8);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x4ec));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x4ec);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x4ec) = 0;
    }
  }
  uVar4 = *(uint *)((int)this + 0x4f4);
  *(undefined4 *)((int)this + 0x4e8) = 0;
  if (uVar4 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x4f0);
    if (piVar1 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar4);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x4f4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x4f4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined1 *)((int)this + 0x1d20) = 0;
  *(undefined4 *)((int)this + 0x1d24) = 0;
  iVar3 = *(int *)((int)this + 0x1d28);
  if (iVar3 != *(int *)((int)this + 0x1d2c)) {
    uVar4 = F_00c46e20(iVar3,*(int *)((int)this + 0x1d2c),0);
    *(int *)((int)this + 0x1d2c) = iVar3;
  }
  return uVar4;
}

/* ref: FUN_00b9d730 */
uint F_00b9d730(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x1d28);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1d30) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x1d28) = 0;
  *(undefined4 *)((int)this + 0x1d2c) = 0;
  *(undefined4 *)((int)this + 0x1d30) = 0;
  iVar1 = 0x36;
  pvVar2 = (undefined *)((int)this + 0x1d24);
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x70);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0074d930((undefined *)((int)this + 0x4d0));
  iVar1 = 10;
  pvVar2 = (undefined *)((int)this + 0x4e8);
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x70);
    uVar3 = F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)uVar3;
}

/* ref: FUN_00b9d7c0 */
uint F_00b9d7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_00756250(this);
  F_00b9e290((undefined *)((int)this + 0x4fc));
  uVar2 = 0;
  *(undefined1 *)((int)this + 0x1d18) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined1 *)((int)this + 0x1d20) = 0;
  *(undefined1 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x1d24) = 0;
  iVar1 = *(int *)((int)this + 0x1d28);
  if (iVar1 != *(int *)((int)this + 0x1d2c)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 0x1d2c),0);
    *(int *)((int)this + 0x1d2c) = iVar1;
  }
  return uVar2;
}

/* ref: FUN_00b9d840 */
uint F_00b9d840(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00754160(this);
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  F_00b9e680((undefined *)((int)this + 0x4fc));
  *(undefined4 *)((int)this + 0x1d28) = 0;
  *(undefined4 *)((int)this + 0x1d2c) = 0;
  *(undefined4 *)((int)this + 0x1d30) = 0;
  F_00b9d7c0(this);
  return (uint)this;
}

/* ref: FUN_00b9d880 */
uint F_00b9d880(unsigned int gen_a0)
{
  GEN_ENTER(0xb9d880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * this_00;
  int * piVar1;
  char cVar2;
  undefined * this_01;
  undefined * pvVar3;
  undefined * this_02;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  
  this_00 = (uint *)((int)this + 0x1d28);
  uVar4 = *this_00;
  if (uVar4 != *(uint *)((int)this + 0x1d2c)) {
    F_00c46e20(uVar4,*(uint *)((int)this + 0x1d2c),0);
    *(uint *)((int)this + 0x1d2c) = uVar4;
  }
  iVar8 = 0;
  do {
    ((int *)(gen_frame + 0x0))[1] = iVar8;
LAB_00b9d8c0: ;
    iVar8 = ((int *)(gen_frame + 0x0))[1];
    this_01 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),((int *)(gen_frame + 0x0))[1]);
    (*(char *)(gen_frame + 0xb)) = '\0';
    pvVar3 = this_01;
    if (0 < *(int *)((int)this_01 + 0xc)) {
      pvVar3 = (undefined *)0x0;
      do {
        pvVar3 = (undefined *)F_00a37da0(this_01,pvVar3);
        if (pvVar3 != (undefined *)0x0) {
          if (*(char *)((int)pvVar3 + 6) == '\0') {
            iVar8 = *(int *)((int)pvVar3 + 8);
          }
          else {
            this_02 = (undefined *)F_00a3a860(pvVar3);
            cVar2 = *(char *)((int)this_02 + 6);
            while (cVar2 == '\0') {
              this_02 = (undefined *)F_00a3a860(this_02);
              cVar2 = *(char *)((int)this_02 + 6);
            }
            iVar8 = *(int *)((int)this_02 + 8);
          }
          if (iVar8 != 0) {
            if (*(char *)((int)pvVar3 + 6) == '\0') {
              iVar8 = *(int *)((int)pvVar3 + 8);
            }
            else {
              pvVar3 = (undefined *)F_00a3a860(pvVar3);
              cVar2 = *(char *)((int)pvVar3 + 6);
              while (cVar2 == '\0') {
                pvVar3 = (undefined *)F_00a3a860(pvVar3);
                cVar2 = *(char *)((int)pvVar3 + 6);
              }
              iVar8 = *(int *)((int)pvVar3 + 8);
            }
            uVar4 = (int)(*(int *)((int)this + 0x1d2c) - *this_00) >> 2;
            ((int *)(gen_frame + 0x0))[0] = iVar8;
            if (uVar4 != 0) {
              piVar7 = (int *)*this_00;
              uVar6 = 0;
              do {
                if (iVar8 == *piVar7) goto LAB_00b9da2a;
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (uVar6 < uVar4);
            }
            piVar7 = *(int * PTR32 *)((int)this + 0x1d2c);
            if ((((int *)(gen_frame + 0x0)) < piVar7) && (piVar1 = (int *)*this_00, piVar1 <= ((int *)(gen_frame + 0x0)))) {
              if (piVar7 == *(int * PTR32 *)((int)this + 0x1d30)) {
                iVar8 = (int)piVar7 - (int)((int)(uintptr_t)piVar1) >> 2;
                if (iVar8 == -1) {
LAB_00b9daa8: ;
                    
                  F_00c4579a("vector<T> too long");
                }
                uVar6 = iVar8 + 1;
                uVar4 = (int)*(int * PTR32 *)((int)this + 0x1d30) - (int)((int)(uintptr_t)piVar1) >> 2;
                if (uVar4 < uVar6) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar6) {
                    uVar4 = uVar6;
                  }
                  F_0074cbd0(this_00,uVar4);
                }
              }
              if (*(undefined4 * PTR32 *)((int)this + 0x1d2c) != (undefined4 *)0x0) {
                **(undefined4 * PTR32 *)((int)this + 0x1d2c) =
                     *((undefined4 *)GEN_TOP((*this_00 + ((int)((int *)(gen_frame + 0x0)) - (int)((int)(uintptr_t)piVar1) >> 2) * 4)));
              }
            }
            else {
              if (piVar7 == *(int * PTR32 *)((int)this + 0x1d30)) {
                iVar5 = (int)((int)piVar7 - *this_00) >> 2;
                if (iVar5 == -1) goto LAB_00b9daa8;
                uVar6 = iVar5 + 1;
                uVar4 = (int)((int)*(int * PTR32 *)((int)this + 0x1d30) - *this_00) >> 2;
                if (uVar4 < uVar6) {
                  if (-(uVar4 >> 1) - 1 < uVar4) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = uVar4 + (uVar4 >> 1);
                  }
                  if (uVar4 < uVar6) {
                    uVar4 = uVar6;
                  }
                  F_0074cbd0(this_00,uVar4);
                }
              }
              if (*(int * PTR32 *)((int)this + 0x1d2c) != (int *)0x0) {
                **(int * PTR32 *)((int)this + 0x1d2c) = iVar8;
              }
            }
            *(int *)((int)this + 0x1d2c) = *(int *)((int)this + 0x1d2c) + 4;
          }
        }
LAB_00b9da2a: ;
        cVar2 = (*(char *)(gen_frame + 0xb)) + '\x01';
        (*(char *)(gen_frame + 0xb)) = cVar2;
        pvVar3 = (undefined *)(int)cVar2;
        iVar8 = ((int *)(gen_frame + 0x0))[1];
      } while ((int)pvVar3 < *(int *)((int)this_01 + 0xc));
    }
    if (iVar8 == 3) {
      ((int *)(gen_frame + 0x0))[1] = 0xdac;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xdac) {
      ((int *)(gen_frame + 0x0))[1] = 0xc80;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xc89) {
      ((int *)(gen_frame + 0x0))[1] = 0xce4;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xce4) {
      ((int *)(gen_frame + 0x0))[1] = 0xd48;
      goto LAB_00b9d8c0;
    }
    if (iVar8 == 0xd48) {
      if ((*(int *)((int)this + 0x1d2c) - *this_00 & 0xfffffffc) == 0) {
        piVar7 = *(int * PTR32 *)((int)this + 0x4e0);
        *(undefined1 *)((int)this + 0x1d20) = 0;
        if (piVar7 != (int *)0x0) {
          pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 4))(piVar7,0x16)));
        }
        piVar7 = *(int * PTR32 *)((int)this + 0x4e4);
        if (piVar7 != (int *)0x0) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 4))(piVar7,0x16);
          return uVar4;
        }
      }
      else {
        *(undefined4 *)((int)this + 0x1d24) = 0;
        pvVar3 = (undefined *)F_00b9d310(this);
      }
      return (uint)pvVar3;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

/* ref: FUN_00b9db10 */
uint F_00b9db10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9db10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint * puVar10;
  char * pcVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  if (*(char *)((int)this + 0x4f8) == '\0') {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    if (param_2 != 0) {
      pcVar11 = (char *)((int)this + 0xc);
      do {
        iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0x1c)) * 4) + 4)));
        uVar9 = F_00a68280(&REFG(undefined1, 0x14ab070),*(undefined4 *)(pcVar11 + 4),0);
        uVar7 = 0;
        if ((ushort)uVar9 < 0x32) {
          cVar1 = *pcVar11;
          cVar2 = pcVar11[1];
          puVar10 = (uint *)F_00ab4280((uint)(byte)pcVar11[8]);
          if (puVar10 != (uint *)0x0) {
            if (cVar2 == '\0') {
              uVar7 = *puVar10;
            }
            else if (cVar2 == '\x01') {
              uVar7 = puVar10[1];
            }
            if (cVar1 != '\0') {
              uVar7 = (uVar7 * 0x96) / 100;
            }
          }
        }
        cVar1 = *pcVar11;
        cVar2 = pcVar11[1];
        *(uint *)(pcVar11 + -8) = uVar7;
        uVar7 = 0;
        uVar9 = F_00ab4280((uint)(byte)pcVar11[8]);
        if (uVar9 != 0) {
          if (cVar2 == '\0') {
            uVar7 = *(uint *)(uVar9 + 0xc);
          }
          else if (cVar2 == '\x01') {
            uVar7 = *(uint *)(uVar9 + 0x10);
          }
          else if (cVar2 == '\x02') {
            uVar7 = *(uint *)(uVar9 + 8);
          }
          if (cVar1 != '\0') {
            uVar7 = (uVar7 * 0x96) / 100;
          }
        }
        *(uint *)(pcVar11 + -4) = uVar7;
        uVar7 = F_00ab6240(*(undefined4 *)(pcVar11 + -0xc),0,0);
        F_0042e430(pcVar11 + 0xc,uVar7);
        uVar7 = F_00ab25d0((uint)*(byte *)(iVar3 + 0xa1));
        if (uVar7 == 0) {
          uVar7 = F_00ab65a0(*(undefined4 *)(pcVar11 + -0xc),iVar3);
        }
        else {
          uVar7 = *(uint *)(uVar7 + 4);
        }
        *(uint *)(pcVar11 + 0x60) = uVar7;
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
        pcVar11 = pcVar11 + 0x70;
      } while ((*(uint *)(gen_frame + 0x1c)) < param_2);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x4f4);
    if (puVar5 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      *(undefined4 *)((int)this + 0x4f4) = 0;
    }
    uVar7 = F_00b9d880(this);
  }
  else {
    (*(uint *)(gen_frame + 0xc)) = 0;
    if (param_2 != 0) {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      do {
        iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + (*(uint *)(gen_frame + 0xc)) * 4) + 4)));
        iVar4 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x1c)) + *((int *)GEN_TOP((*(int *)((int)this + 0x4f4) + 0xc))))));
        if (iVar3 != 0) {
          if ((*(char *)(iVar3 + 0xa3) == '\x02') || (*(char *)(iVar3 + 0xa3) == '\a')) {
            F_0042b630(((undefined1 *)(gen_frame + 0x40)));
            ((int *)(gen_frame + 0x28))[0] = 0;
            ((int *)(gen_frame + 0x28))[1] = 0;
            ((int *)(gen_frame + 0x28))[2] = 0;
            (*(undefined4 *)(gen_frame + 0x34)) = 0x1000000;
            (*(undefined4 *)(gen_frame + 0x38)) = 0;
            (*(uint *)(gen_frame + 0x3c)) = 0;
            F_0042e430(((undefined1 *)(gen_frame + 0x40)),&REFG(undefined1, 0x107fc63));
            uVar8 = (*(undefined4 *)(gen_frame + 0x34));
            (*(uint *)(gen_frame + 0x94)) = 0;
            ((int *)(gen_frame + 0x28))[0] = iVar4;
            ((int *)(gen_frame + 0x28))[1] = 0;
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 1)) = 2;
            (*(undefined4 *)(gen_frame + 0x34)) = CONCAT13((char)((uint)uVar8 >> 0x18),0x200);
            uVar7 = F_00ab4280((uint)*(byte *)(iVar3 + 0x9e));
            if (uVar7 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(uVar7 + 8);
            }
            ((int *)(gen_frame + 0x28))[2] = uVar8;
            (*(uint *)(gen_frame + 0x3c)) = (uint)*(byte *)(iVar3 + 0x9e);
            uVar7 = F_00ab6240(iVar4,0,0);
            F_0042e430(((undefined1 *)(gen_frame + 0x40)),uVar7);
            uVar7 = F_00ab65a0(iVar4,iVar3);
            (*(uint *)(gen_frame + 0x94)) = uVar7;
            F_00b9f810((undefined *)((int)this + 0x4d0),((int *)(gen_frame + 0x28)));
            F_0042c880(((undefined1 *)(gen_frame + 0x40)));
          }
          if (iVar4 - 0x177aU < 7) {
            F_0042b630(((undefined1 *)(gen_frame + 0x40)));
            ((int *)(gen_frame + 0x28))[0] = 0;
            ((int *)(gen_frame + 0x28))[1] = 0;
            ((int *)(gen_frame + 0x28))[2] = 0;
            (*(undefined4 *)(gen_frame + 0x34)) = 0x1000000;
            (*(undefined4 *)(gen_frame + 0x38)) = 0;
            (*(uint *)(gen_frame + 0x3c)) = 0;
            F_0042e430(((undefined1 *)(gen_frame + 0x40)),&REFG(undefined1, 0x107fc63));
            uVar8 = (*(undefined4 *)(gen_frame + 0x34));
            (*(uint *)(gen_frame + 0x94)) = 0;
            ((int *)(gen_frame + 0x28))[0] = iVar4;
            ((int *)(gen_frame + 0x28))[1] = 0;
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = 0;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 1)) = 2;
            (*(undefined4 *)(gen_frame + 0x34)) = CONCAT13((char)((uint)uVar8 >> 0x18),0x200);
            (*(uint *)(gen_frame + 0x3c)) = (uint)*(byte *)(iVar3 + 0x9e);
            uVar7 = F_00ab6240(iVar4,0,0);
            F_0042e430(((undefined1 *)(gen_frame + 0x40)),uVar7);
            uVar7 = F_00ab65a0(iVar4,iVar3);
            (*(uint *)(gen_frame + 0x94)) = uVar7;
            if (((iVar4 == 0x177a) || (iVar4 == 0x177c)) || (((int *)(gen_frame + 0x28))[2] = 25000, iVar4 == 0x177e))
            {
              ((int *)(gen_frame + 0x28))[2] = 0x9c4;
            }
            F_00b9f810((undefined *)((int)this + 0x4d0),((int *)(gen_frame + 0x28)));
            F_0042c880(((undefined1 *)(gen_frame + 0x40)));
          }
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 0x10;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      } while ((*(uint *)(gen_frame + 0xc)) < param_2);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x4f4);
    if (puVar5 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      *(undefined4 *)((int)this + 0x4f4) = 0;
    }
    if (*(uint *)((int)this + 0x1d24) <
        (uint)(*(int *)((int)this + 0x1d2c) - *(int *)((int)this + 0x1d28) >> 2)) {
      uVar7 = F_00b9d310(this);
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
      return uVar7;
    }
    (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) & 0xffffff00;
    uVar7 = F_00b9f5f0(*(undefined4 *)((int)this + 0x4d0),*(int *)((int)this + 0x4d4),
                         (*(int *)((int)this + 0x4d4) - *(int *)((int)this + 0x4d0)) / 0x70,(*(uint *)(gen_frame + 0x14))
                        );
    piVar6 = *(int * PTR32 *)((int)this + 0x4e0);
    *(undefined1 *)((int)this + 0x1d20) = 0;
    if (piVar6 != (int *)0x0) {
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6,0x16);
    }
    piVar6 = *(int * PTR32 *)((int)this + 0x4e4);
    if (piVar6 != (int *)0x0) {
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6,0x16);
      F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
      return uVar7;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar7;
}

/* ref: FUN_00b9df60 */
uint F_00b9df60(unsigned int gen_a0)
{
  GEN_ENTER(0xb9df60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar1,0xb,0);
    puVar1[5] = 0xb;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
    puVar1[6] = this;
    puVar1[7] = ((code *)REFP(0xb9db10));
  }
  *(undefined4 * PTR32 *)((int)this + 0x4f4) = puVar1;
  if (*(int *)((int)this + 0x4f0) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x4f0) = uVar2;
  }
  uVar2 = 0;
  puVar1 = this;
  do {
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x4f4),uVar2,*puVar1);
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0x1c;
  } while (uVar2 < 0xb);
  *(undefined1 *)((int)this + 0x4f8) = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4f0) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x4f0),*(undefined4 *)((int)this + 0x4f4));
  return uVar2;
}

/* ref: FUN_00b9e010 */
uint F_00b9e010(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 * this_00;
  uint uVar3;
  
  uVar3 = *(uint *)(&REFG(undefined, 0x14ab2cc) + (*(uint *)((int)this + 0x1d1c) & 0xfffffffc)) >>
          (('\x03' - ((byte)*(uint *)((int)this + 0x1d1c) & 3)) * '\b' & 0x1f) & 0xff;
  uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),*(byte *)((int)this + 0x1d1c) + 8,0);
  if ((short)uVar3 == 0) {
    if ((short)uVar2 != 0) {
      uVar3 = 1;
    }
  }
  else if (0x32 < uVar3) {
    uVar3 = 0x32;
  }
  while ((uVar3 == *(byte *)((int)this + 0x1d18) || (int)(uVar3 - *(byte *)((int)this + 0x1d18)) < 0
         || (4 < *((byte *)GEN_TOP(((int)this + *(int *)((int)this + 0x1d1c) + 0x1d0c)))))) {
    *(int *)((int)this + 0x1d1c) = *(int *)((int)this + 0x1d1c) + 1;
    uVar2 = *(uint *)((int)this + 0x1d1c);
    *(undefined1 *)((int)this + 0x1d18) = 0;
    if (10 < uVar2) {
      F_00b9d4b0(this);
      uVar2 = F_00b9df60(this);
      return uVar2;
    }
    uVar3 = *(uint *)(&REFG(undefined, 0x14ab2cc) + (uVar2 & 0xfffffffc)) >>
            (('\x03' - ((byte)uVar2 & 3)) * '\b' & 0x1f) & 0xff;
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),*(byte *)((int)this + 0x1d1c) + 8,0);
    if ((short)uVar3 == 0) {
      if ((short)uVar2 != 0) {
        uVar3 = 1;
      }
    }
    else if (0x32 < uVar3) {
      uVar3 = 0x32;
    }
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0xb9d070));
  }
  *(undefined4 * PTR32 *)((int)this + 0x4ec) = this_00;
  if (*(int *)((int)this + 0x4e8) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
    *(uint *)((int)this + 0x4e8) = uVar2;
  }
  bVar1 = *(byte *)((int)this + 0x1d18);
  *(byte *)((int)this + 0x1d18) = bVar1 + 1;
  F_00cb4540(*(undefined * PTR32 *)((int)this + 0x4ec),0,uVar3 - bVar1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4e8) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x4e8),*(undefined4 *)((int)this + 0x4ec));
  return uVar2;
}

/* ref: FUN_00b9e1d0 */
uint F_00b9e1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  cVar1 = REFG(char, 0x14ab29a);
  if (*(char *)((int)this + 0x1d20) == '\0') {
    bVar2 = F_00a68940(&REFG(undefined1, 0x14ab070));
    in_EAX = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) && (cVar1 != '\0')) {
      *(undefined1 *)((int)this + 0x1d20) = 1;
      F_00756250(this);
      F_00b9e290((undefined *)((int)this + 0x4fc));
      *(undefined1 *)((int)this + 0x1d18) = 0;
      *(undefined4 *)((int)this + 0x1d1c) = 0;
      uVar3 = F_00b9e010(this);
      return uVar3;
    }
    *(undefined4 *)((int)this + 0x4e0) = 0;
    *(undefined4 *)((int)this + 0x4e4) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00b9e250 */
uint F_00b9e250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x4e0) = param_1;
  uVar1 = F_00b9e1d0(this);
  return uVar1;
}

/* ref: FUN_00b9e270 */
uint F_00b9e270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x4e4) = param_1;
  uVar1 = F_00b9e1d0(this);
  return uVar1;
}

/* ref: FUN_00b9e290 */
unsigned int F_00b9e290(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint local_8;
  
  local_8 = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  do {
    iVar2 = 5;
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0x1000000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      F_0042e430(puVar1 + 4,&REFG(undefined1, 0x107fc63));
      puVar1[0x19] = 0;
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined1 *)((int)this + local_8 + 0x1810) = 0;
    local_8 = local_8 + 1;
  } while (local_8 < 0xb);
  return 0;
}

/* ref: FUN_00b9e300 */
byte F_00b9e300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 600 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00b9e330 */
uint F_00b9e330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return *((uint *)GEN_TOP(((int)this + (param_1 & 0xfffffffc) + 0x25c))) >>
         (('\x03' - ((byte)param_1 & 3)) * '\b' & 0x1f);
}

/* ref: FUN_00b9e370 */
uint F_00b9e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(uint *)(param_1 + 0x14) < *(uint *)(param_2 + 0x14));
}

/* ref: FUN_00b9e390 */
uint F_00b9e390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb9e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1102548));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGCSupplyDuty_UI_Game_Client_Game::vf1 */
uint F_00b9e3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb9e3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00b9e400 */
uint F_00b9e400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb9e400u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b9e430 */
uint F_00b9e430(unsigned int gen_a0)
{
  GEN_ENTER(0xb9e430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

