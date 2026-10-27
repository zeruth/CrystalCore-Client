#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Game::Event::SelectEventListCallback::vf0 */
uint F_0071f250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f280 */
uint F_0071f280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x18) = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  return (uint)this;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf4 */
unsigned int F_0071f330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf5 */
byte F_0071f340(void)
{
  GEN_ENTER(0x71f340u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf0 */
uint F_0071f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForFadeTask::vf0 */
uint F_0071f3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraPanTask::vf0 */
uint F_0071f3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraDollyTask::vf0 */
uint F_0071f440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraZoomTask::vf0 */
uint F_0071f490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCameraGyroTask::vf0 */
uint F_0071f4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f510 */
uint F_0071f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x71f510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b0c));
  *(undefined4 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_4;
  return (uint)this;
}

/* ref: Client::Game::Event::AutoShakeInvokeTask::vf0 */
uint F_0071f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f580 */
uint F_0071f580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x71f580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b28));
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_6;
  return (uint)this;
}

/* ref: Client::Game::Event::EquipChangeTask::vf0 */
uint F_0071f5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f600 */
uint F_0071f600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71f600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b44));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0xd) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::IsItemObtainableTask::vf0 */
uint F_0071f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f6b0 */
byte F_0071f6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x71f6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_6;
  *(byte *)((int)this + 0x15) = (byte)param_7;
  return (byte)param_7;
}

/* ref: FUN_0071f6e0 */
uint F_0071f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008e9c10(this);
  *(uint *)((int)this + 0x18) = param_1;
  return param_1;
}

/* ref: Client::Game::Event::TalkCallback::TalkEventImpl::vf0 */
uint F_0071f730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8b7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::TalkCallback::TalkAsyncEventImpl::vf1 */
uint F_0071f780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71f780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char cVar1;
  
  cVar1 = *(char *)((int)param_2 + 0x36);
  if (((cVar1 != '\0') || (*(int *)(param_2[1] + 0x60) == 0x34)) ||
     (*(int *)(param_2[1] + 0x60) != 0)) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  *(char *)(param_1 + 1) = cVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::TalkCallback::TalkAsyncEventImpl::vf0 */
uint F_0071f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8b7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071f820 */
uint F_0071f820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  *(undefined1 *)((int)this + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  F_0042cbc0((undefined *)((int)this + 0x18),param_1 + 6);
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  return (uint)this;
}

/* ref: FUN_0071f880 */
uint F_0071f880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71f880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004adca0(this,7,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0071f8a0 */
uint F_0071f8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0xb3) == (char)param_2) {
    return in_ecx + 0x18;
  }
  return 0;
}

/* ref: FUN_0071f900 */
uint F_0071f900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71f900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)(uintptr_t)this) << 0xb ^ *(uint *)this;
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = (uVar1 >> 0xb ^ uVar2) >> 8 ^ uVar1 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 8) = uVar1;
  return uVar2 % param_1;
}

/* ref: FUN_0071f970 */
uint F_0071f970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71f970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)(uintptr_t)this) << 0xb ^ *(uint *)this;
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = (uVar1 >> 0xb ^ uVar2) >> 8 ^ uVar1 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 8) = uVar1;
  iVar3 = ((int)(short)param_2 - (int)(short)param_1) * (uVar2 & 0xffff);
  return ((int)(iVar3 + (iVar3 >> 0x1f & 0xffffU)) >> 0x10) + (int)(short)param_1;
}

/* ref: Client::Game::Event::PostCutSceneTask::vf5 */
byte F_0071f9f0(void)
{
  GEN_ENTER(0x71f9f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf5 */
byte F_0071fa00(void)
{
  GEN_ENTER(0x71fa00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::CharacterTaskBase::vf6 */
uint F_0071fa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71fa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_0071fa20 */
uint F_0071fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(char *)((int)this + 0x40) = (char)param_3;
  if ((char)param_3 != '\0') {
    uVar2 = param_1 * 0x3c + param_2;
    iVar3 = ((((((int)param_1 >> 0x1f) << 4 | param_1 >> 0x1c) - ((int)param_1 >> 0x1f)) -
             (uint)(param_1 * 0x10 < param_1)) * 4 | param_1 * 0xf >> 0x1e) + ((int)param_2 >> 0x1f)
            + (uint)CARRY4(param_1 * 0x3c,param_2);
    uVar1 = (((iVar3 * 0x10 | uVar2 >> 0x1c) - iVar3) - (uint)(uVar2 * 0x10 < uVar2)) * 4 |
            uVar2 * 0xf >> 0x1e;
    *(uint *)((int)this + 0x38) = uVar2 * 0x3c;
    *(uint *)((int)this + 0x3c) = uVar1;
    return uVar1;
  }
  uVar2 = (param_2 + param_1 * 0x3c) * 0x3c;
  uVar1 = (uint)(*(ulonglong *)((int)this + 8) % 0x15180);
  *(uint *)((int)this + 0x3c) = ((int)uVar2 >> 0x1f) - (uint)(uVar2 < uVar1);
  *(uint *)((int)this + 0x38) = uVar2 - uVar1;
  return uVar1;
}

/* ref: FUN_0071fac0 */
uint F_0071fac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71fac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  return param_1;
}

/* ref: FUN_0071fb00 */
uint F_0071fb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71fb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x1c2;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return (uint)this;
}

/* ref: FUN_0071fb30 */
uint F_0071fb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71fb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)this = 0x1c3;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_4;
  return (uint)this;
}

/* ref: FUN_0071fb60 */
uint F_0071fb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x71fb60u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  param_1[8] = (undefined4)gen_fl2bits(param_4);
  param_1[9] = (undefined4)gen_fl2bits(param_5);
  *param_1 = 0x1c4;
  param_1[1] = 0x28;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_6);
  return (uint)param_1;
}

/* ref: FUN_0071fba0 */
uint F_0071fba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x71fba0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  param_1[8] = (undefined4)gen_fl2bits(param_4);
  param_1[9] = (undefined4)gen_fl2bits(param_5);
  *param_1 = 0x1c5;
  param_1[1] = 0x28;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_6);
  return (uint)param_1;
}

/* ref: FUN_0071fbe0 */
uint F_0071fbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x1c6;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0071fc00 */
uint F_0071fc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x71fc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)this = 0x1c7;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined1 *)((int)this + 0x28) = (undefined1)param_5;
  return (uint)this;
}

/* ref: FUN_0071fc50 */
uint F_0071fc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71fc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0071fcb0 */
uint F_0071fcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x71fcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0071fd20 */
uint F_0071fd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71fd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 2);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x2c);
  *(undefined2 *)((int)this + 0xac) = param_1[0x56];
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0x5a);
  return (uint)this;
}

/* ref: FUN_0071fd80 */
uint F_0071fd80(unsigned int gen_a0)
{
  GEN_ENTER(0x71fd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0071fda0 */
uint F_0071fda0(unsigned int gen_a0)
{
  GEN_ENTER(0x71fda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x268));
  F_0042c880((undefined *)((int)this + 0x204));
  F_0042c880((undefined *)((int)this + 0x150));
  F_0042c880((undefined *)((int)this + 0xfc));
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0071fe40 */
uint F_0071fe40(unsigned int gen_a0)
{
  GEN_ENTER(0x71fe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa0));
  uVar1 = F_0042c880((undefined *)((int)this + 0x3c));
  return (uint)uVar1;
}

/* ref: FUN_0071ff70 */
uint F_0071ff70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x71ff70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  F_0042cbc0((undefined *)((int)this + 0x14),param_1 + 5);
  *(undefined1 *)((int)this + 0x68) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x78) = param_1[0x1e];
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined2 *)((int)this + 0x88) = *(undefined2 *)(param_1 + 0x22);
  *(undefined4 *)((int)this + 0x8a) = *(undefined4 *)((int)param_1 + 0x8a);
  *(undefined1 *)((int)this + 0x8e) = *(undefined1 *)((int)param_1 + 0x8e);
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined2 *)((int)this + 0x98) = *(undefined2 *)(param_1 + 0x26);
  *(undefined2 *)((int)this + 0x9a) = *(undefined2 *)((int)param_1 + 0x9a);
  *(undefined2 *)((int)this + 0x9c) = *(undefined2 *)(param_1 + 0x27);
  *(undefined1 *)((int)this + 0x9e) = *(undefined1 *)((int)param_1 + 0x9e);
  *(undefined4 *)((int)this + 0xa0) = param_1[0x28];
  return (uint)this;
}

/* ref: FUN_00720065 */
unsigned int F_00720065(void)
{
  GEN_ENTER(0x720065u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00720090 */
uint F_00720090(unsigned int gen_a0)
{
  GEN_ENTER(0x720090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 4;
  this_00 = (undefined *)((int)this + 0x254);
  do {
    this_00 = (undefined *)((int)this_00 + -0x74);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_007200b0 */
uint F_007200b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7200b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x1c);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042e430((undefined *)((int)this + 0x1c),&REFG(undefined1, 0x107fc63));
  return (uint)this;
}

/* ref: FUN_00720120 */
uint F_00720120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  F_0042cbc0((undefined *)((int)this + 0x1c),param_1 + 7);
  puVar2 = param_1 + 0x1c;
  puVar3 = (undefined4 *)((int)this + 0x70);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00720190 */
uint F_00720190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined1 *)((int)this + 2) = *(undefined1 *)((int)param_2 + 0x26);
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)((int)param_2 + 0x27);
  *(undefined2 *)((int)this + 0x1c) = 0x101;
  F_0042cc20((undefined *)((int)this + 0x20),(*param_2 & 0xffffff) + (int)param_2,REFG(undefined4, 0x108cc50));
  uVar1 = param_2[1];
  *(short *)((int)this + 4) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  uVar1 = param_2[2];
  *(short *)((int)this + 6) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  uVar1 = param_2[3];
  *(short *)((int)this + 8) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  uVar1 = param_2[4];
  *(short *)((int)this + 10) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1d) = 0;
  }
  uVar1 = param_2[5];
  *(short *)((int)this + 0xc) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1d) = 0;
  }
  uVar1 = param_2[6];
  *(short *)((int)this + 0xe) = (short)uVar1;
  if ((short)uVar1 != 0) {
    *(undefined1 *)((int)this + 0x1d) = 0;
  }
  *(char *)((int)this + 0x11) = (char)param_2[10];
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_2 + 0x29);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_2 + 0x2a);
  *(uint *)((int)this + 0x14) = param_2[7];
  *(uint *)((int)this + 0x18) = param_2[8];
  return (uint)this;
}

/* ref: FUN_00720260 */
uint F_00720260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00720290 */
uint F_00720290(unsigned int gen_a0)
{
  GEN_ENTER(0x720290u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8);
  return in_ecx;
}

/* ref: FUN_007202d0 */
uint F_007202d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7202d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b99750(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x10b8e14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10b8e04));
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf81 */
unsigned int F_00720300(void)
{
  GEN_ENTER(0x720300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf82 */
unsigned int F_00720310(void)
{
  GEN_ENTER(0x720310u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf94 */
unsigned int F_00720320(void)
{
  GEN_ENTER(0x720320u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf110 */
unsigned int F_00720330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf113 */
uint F_00720340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720340u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x208))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf117 */
byte F_00720350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (byte)param_2;
}

/* ref: Client::Game::Event::EventHandler::vf118 */
uint F_00720360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf119 */
uint F_00720370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720370u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf122 */
uint F_00720380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf123 */
byte F_00720390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf124 */
unsigned int F_007203a0(void)
{
  GEN_ENTER(0x7203a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf125 */
unsigned int F_007203b0(void)
{
  GEN_ENTER(0x7203b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf129 */
uint F_007203c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7203c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x200))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf130 */
uint F_007203d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7203d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf138 */
uint F_007203e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7203e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf139 */
unsigned int F_007203f0(void)
{
  GEN_ENTER(0x7203f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf149 */
unsigned int F_00720400(void)
{
  GEN_ENTER(0x720400u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf150 */
unsigned int F_00720410(void)
{
  GEN_ENTER(0x720410u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf143 */
unsigned int F_00720420(void)
{
  GEN_ENTER(0x720420u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00720450 */
uint F_00720450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 3);
  *(undefined2 *)((int)this + 0xe) = *(undefined2 *)((int)param_1 + 0xe);
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 4);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_1 + 0x13);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined2 *)((int)this + 0x28) = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)((int)this + 0x2a) = *(undefined2 *)((int)param_1 + 0x2a);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0xb);
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined2 *)((int)this + 0x34) = *(undefined2 *)(param_1 + 0xd);
  F_0042cbc0((undefined *)((int)this + 0x38),param_1 + 0xe);
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  F_0042cbc0((undefined *)((int)this + 0x9c),param_1 + 0x27);
  return (uint)this;
}

/* ref: FUN_00720580 */
uint F_00720580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9078));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VEventHandler_Event_Game_Client_Event::vf1 */
uint F_007205b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x7205b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xa0))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FormatStringCallback_VEventHandler_Event_Game_Client_Event::vf2 */
byte F_007205d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7205d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_007205f0 */
uint F_007205f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7205f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9088));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ActionTimelineCallback_VEventHandler_Event_Game_Client_Event::vf1 */
uint F_00720620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720620u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xa4))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: ActionTimelineCallback_VEventHandler_Event_Game_Client_Event::vf2 */
byte F_00720640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720660 */
uint F_00720660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9098));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ListenItemCallback_VEventHandler_Event_Game_Client_Event::vf1 */
uint F_00720690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x720690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xcc))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: ListenItemCallback_VEventHandler_Event_Game_Client_Event::vf2 */
byte F_007206b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7206b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_007206e0 */
uint F_007206e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7206e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_007206f0 */
uint F_007206f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7206f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00720700 */
uint F_00720700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00720710 */
uint F_00720710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00720730 */
uint F_00720730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00720760 */
uint F_00720760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00720770 */
uint F_00720770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_007207a0 */
uint F_007207a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7207a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_007207b0 */
uint F_007207b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7207b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_007207c0 */
uint F_007207c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7207c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_007207f0 */
uint F_007207f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7207f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x140 + *in_ecx;
}

/* ref: FUN_00720830 */
uint F_00720830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_007208e0 */
uint F_007208e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7208e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00720940 */
uint F_00720940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720940u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x28;
}

/* ref: FUN_00720960 */
uint F_00720960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720960u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x28;
}

/* ref: FUN_00720990 */
uint F_00720990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720990u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_007209c0 */
uint F_007209c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7209c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_007209e0 */
uint F_007209e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7209e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_007209f0 */
uint F_007209f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7209f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00720a00 */
uint F_00720a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x720a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b90a8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VEventFramework_Event_Game_Client_Game::vf1 */
uint F_00720a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x720a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: UICallbackBase_VEventHandler_Event_Game_Client_Event::vf2 */
uint F_00720ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x720ae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00720af0 */
uint F_00720af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90c4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VTalkCallback_Event_Game_Client_Event::vf2 */
byte F_00720b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720b40 */
uint F_00720b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectOkCallback_Event_Game_Client_Event::vf2 */
byte F_00720b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720ba0 */
uint F_00720ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90e4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectYesNoCallback_Event_Game_Client_Event::vf2 */
byte F_00720bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720bf0 */
uint F_00720bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90f4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectYesNoCountCallback_Event_Game_Client_Event::vf2 */
byte F_00720c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720c40 */
uint F_00720c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9104));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectYesNoCheckCallback_Event_Game_Client_Event::vf2 */
byte F_00720c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720c90 */
uint F_00720c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720c90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9114));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectStringCallback_Event_Game_Client_Event::vf2 */
byte F_00720cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720ce0 */
uint F_00720ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9124));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectIconStringCallback_Event_Game_Client_Event::vf2 */
byte F_00720d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720d30 */
uint F_00720d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectListCallback_Event_Game_Client_Event::vf2 */
byte F_00720d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720d80 */
uint F_00720d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9144));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VScreenTextCallback_Event_Game_Client_Event::vf2 */
byte F_00720db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720dd0 */
uint F_00720dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9154));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VBattleTalkCallback_Event_Game_Client_Event::vf2 */
byte F_00720e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720e40 */
uint F_00720e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x720e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9164));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00720eb0 */
uint F_00720eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x720eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VEventHandler_Event_Game_Client_Game::vf1 */
uint F_00720ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x720ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00720f10 */
byte F_00720f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00720f30 */
byte F_00720f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00720f50 */
uint F_00720f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x720f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b917c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VArrayEventHandler_Event_Game_Client_Game::vf1 */
uint F_00720f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x720f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00720fe0 */
uint F_00720fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x720fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00720ff0 */
uint F_00720ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x720ff0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00721030 */
uint F_00721030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721030u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xb8 + *in_ecx;
}

/* ref: FUN_00721050 */
uint F_00721050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGuildleveAssignmentEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: Client::Game::Event::GatheringBarCallback::vf2 */
uint F_007210f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7210f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721100 */
uint F_00721100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x721100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00cb4700(this,param_4,param_5);
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91b4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x20))
                    (*(int *)((int)this + 0x24) + *(int *)((int)this + 0x18),param_2,param_1,param_3
                    );
  return uVar1;
}

/* ref: FUN_00721160 */
uint F_00721160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91c0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCustomTalkEventHandler_Event_Game_Client_Game::vf1 */
uint F_007211a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7211a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_007211c0 */
uint F_007211c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7211c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91cc));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VDefaultTalkEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721250 */
uint F_00721250(unsigned int gen_a0)
{
  GEN_ENTER(0x721250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721260 */
uint F_00721260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCraftEventHandler_Event_Game_Client_Game::vf1 */
uint F_007212a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7212a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_007212f0 */
uint F_007212f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7212f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721300 */
uint F_00721300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9204));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721360 */
byte F_00721360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721380 */
byte F_00721380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007213a0 */
byte F_007213a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7213a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007213c0 */
byte F_007213c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7213c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00721410 */
uint F_00721410(unsigned int gen_a0)
{
  GEN_ENTER(0x721410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721420 */
uint F_00721420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x721420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00cb4700(this,param_4,param_5);
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9220));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VShopEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x20))
                    (*(int *)((int)this + 0x24) + *(int *)((int)this + 0x18),param_2,param_1,param_3
                    );
  return uVar1;
}

/* ref: Client::Game::Event::CraftLeveRewardCallback::vf2 */
uint F_007214b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7214b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721500 */
uint F_00721500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b923c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCraftLeveClientEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721560 */
byte F_00721560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721580 */
byte F_00721580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007215f0 */
uint F_007215f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7215f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721600 */
uint F_00721600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x721600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00cb4700(this,param_4,param_5);
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9258));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGCShopEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x20))
                    (*(int *)((int)this + 0x24) + *(int *)((int)this + 0x18),param_2,param_1,param_3
                    );
  return uVar1;
}

/* ref: FUN_00721660 */
byte F_00721660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721680 */
byte F_00721680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007216c0 */
uint F_007216c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7216c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x140 + *in_ecx;
}

/* ref: FUN_007216e0 */
uint F_007216e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7216e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VWarpEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721760 */
uint F_00721760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9270));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VStoryEventHandler_Event_Game_Client_Game::vf1 */
uint F_007217a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7217a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_007217e0 */
uint F_007217e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7217e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x1b0 + *in_ecx;
}

/* ref: Client::Game::Event::SpecialShopListCallback::vf2 */
uint F_00721830(unsigned int gen_a0)
{
  GEN_ENTER(0x721830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721840 */
uint F_00721840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b928c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VSpecialShopEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_007218c0 */
byte F_007218c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7218c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007218e0 */
byte F_007218e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7218e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00721900 */
uint F_00721900(unsigned int gen_a0)
{
  GEN_ENTER(0x721900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1ec,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b99950(this,param_1 & 0xffff | 0xf0000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721930 */
uint F_00721930(unsigned int gen_a0)
{
  GEN_ENTER(0x721930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x1dc,0,0);
  if (this != (undefined4 *)0x0) {
    F_00b99750(this,param_1 & 0xffff | 0x100000);
    *this = (*(undefined * PTR32 (*)[152])REFP(0x10b8e14));
    this[0x75] = (*(undefined * PTR32 (*)[3])REFP(0x10b8e04));
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00721980 */
uint F_00721980(unsigned int gen_a0)
{
  GEN_ENTER(0x721980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1f0,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b99990(this,param_1 & 0xffff | 0x110000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_007219b0 */
uint F_007219b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7219b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x5a4,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8ea40(this,param_1 & 0xffff | 0x170000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_007219e0 */
uint F_007219e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7219e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x598,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8ebe0(this,param_1 & 0xffff | 0x180000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721a10 */
uint F_00721a10(unsigned int gen_a0)
{
  GEN_ENTER(0x721a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x55c,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8e710(this,param_1 & 0xffff | 0x190000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721a40 */
uint F_00721a40(unsigned int gen_a0)
{
  GEN_ENTER(0x721a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x534,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8e850(this,param_1 & 0xffff | 0x1c0000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721a70 */
uint F_00721a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9298));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VLeveDirector_Event_Game_Client_Game::vf1 */
uint F_00721ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721ad0 */
uint F_00721ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92a4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VBattleLeveDirector_Event_Game_Client_Game::vf1 */
uint F_00721b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721b30 */
byte F_00721b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721b50 */
byte F_00721b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00721b70 */
uint F_00721b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92b0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringLeveDirector_Event_Game_Client_Game::vf1 */
uint F_00721bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721bd0 */
uint F_00721bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92bc));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCompanyLeveDirector_Event_Game_Client_Game::vf1 */
uint F_00721c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721c50 */
uint F_00721c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92c8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VOpeningEventHandler_Event_Game_Client_Game::vf1 */
uint F_00721c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00721cf0 */
uint F_00721cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestBattleDirector_Event_Game_Client_Game::vf1 */
uint F_00721d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x721d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FormatStringCallback_VEventHandler_Event_Game_Client_Event::vf0 */
uint F_00721d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ActionTimelineCallback_VEventHandler_Event_Game_Client_Event::vf0 */
uint F_00721d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8184));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ListenItemCallback_VEventHandler_Event_Game_Client_Event::vf0 */
uint F_00721db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VTalkCallback_Event_Game_Client_Event::vf0 */
uint F_00721de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VScreenTextCallback_Event_Game_Client_Event::vf0 */
uint F_00721e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FormatStringCallback_VBattleTalkCallback_Event_Game_Client_Event::vf0 */
uint F_00721e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SheetWaiter_VEventHandler_Event_Game_Client_Game::vf0 */
uint F_00721e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721ea0 */
uint F_00721ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721ed0 */
uint F_00721ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721f00 */
uint F_00721f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721f30 */
uint F_00721f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721f60 */
uint F_00721f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721f90 */
uint F_00721f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721fc0 */
uint F_00721fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721ff0 */
uint F_00721ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x721ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_007221c0 */
uint F_007221c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7221c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00722200 */
uint F_00722200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722200u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00722270 */
uint F_00722270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_007222a0 */
uint F_007222a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7222a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_007222d0 */
uint F_007222d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7222d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00722350 */
uint F_00722350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722350u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00722430 */
uint F_00722430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x70,800);
  return (uint)uVar1;
}

/* ref: FUN_007224b0 */
uint F_007224b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7224b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00722540 */
uint F_00722540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722540u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,800);
  return uVar1;
}

/* ref: FUN_00722590 */
uint F_00722590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722590u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007225f0 */
uint F_007225f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7225f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00722620 */
uint F_00722620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00722670 */
uint F_00722670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722670u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007226d0 */
uint F_007226d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7226d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x88,param_2,800);
  return uVar1;
}

/* ref: FUN_00722700 */
uint F_00722700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x88,800);
  return (uint)uVar1;
}

/* ref: FUN_00722790 */
uint F_00722790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722790u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007227f0 */
uint F_007227f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7227f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,800);
  return uVar1;
}

/* ref: FUN_00722820 */
uint F_00722820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,800);
  return (uint)uVar1;
}

/* ref: FUN_00722870 */
uint F_00722870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722870u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x30,param_2,800);
  return uVar1;
}

/* ref: FUN_007228c0 */
uint F_007228c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7228c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x30;
}

/* ref: FUN_007228d0 */
uint F_007228d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7228d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x31;
}

/* ref: FUN_007228e0 */
uint F_007228e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7228e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007228f0 */
uint F_007228f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7228f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00722900 */
uint F_00722900(unsigned int gen_a0)
{
  GEN_ENTER(0x722900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00722910 */
uint F_00722910(unsigned int gen_a0)
{
  GEN_ENTER(0x722910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00722920 */
uint F_00722920(unsigned int gen_a0)
{
  GEN_ENTER(0x722920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x31)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x31);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00722940 */
uint F_00722940(unsigned int gen_a0)
{
  GEN_ENTER(0x722940u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x31);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x31);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00722980 */
uint F_00722980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722980u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_007229a0 */
uint F_007229a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7229a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x38,800);
  return (uint)uVar1;
}

/* ref: FUN_007229d0 */
uint F_007229d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7229d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00722a00 */
uint F_00722a00(unsigned int gen_a0)
{
  GEN_ENTER(0x722a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00722a30 */
uint F_00722a30(unsigned int gen_a0)
{
  GEN_ENTER(0x722a30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x18;
}

/* ref: FUN_00722a40 */
uint F_00722a40(unsigned int gen_a0)
{
  GEN_ENTER(0x722a40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_00722a50 */
uint F_00722a50(unsigned int gen_a0)
{
  GEN_ENTER(0x722a50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00722a60 */
uint F_00722a60(unsigned int gen_a0)
{
  GEN_ENTER(0x722a60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00722a70 */
uint F_00722a70(unsigned int gen_a0)
{
  GEN_ENTER(0x722a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00722a80 */
uint F_00722a80(unsigned int gen_a0)
{
  GEN_ENTER(0x722a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00722a90 */
uint F_00722a90(unsigned int gen_a0)
{
  GEN_ENTER(0x722a90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x19)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x19);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00722ab0 */
uint F_00722ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x722ab0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x19);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x19);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00722af0 */
uint F_00722af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,800);
  return (uint)uVar1;
}

/* ref: FUN_00722b20 */
uint F_00722b20(unsigned int gen_a0)
{
  GEN_ENTER(0x722b20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1c;
}

/* ref: FUN_00722b30 */
uint F_00722b30(unsigned int gen_a0)
{
  GEN_ENTER(0x722b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1d;
}

/* ref: FUN_00722b40 */
uint F_00722b40(unsigned int gen_a0)
{
  GEN_ENTER(0x722b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00722b50 */
uint F_00722b50(unsigned int gen_a0)
{
  GEN_ENTER(0x722b50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00722b60 */
uint F_00722b60(unsigned int gen_a0)
{
  GEN_ENTER(0x722b60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00722b70 */
uint F_00722b70(unsigned int gen_a0)
{
  GEN_ENTER(0x722b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00722b80 */
uint F_00722b80(unsigned int gen_a0)
{
  GEN_ENTER(0x722b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x1d)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x1d);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00722ba0 */
uint F_00722ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x722ba0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x1d);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00722be0 */
uint F_00722be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,800);
  return (uint)uVar1;
}

/* ref: FUN_00722c00 */
uint F_00722c00(unsigned int gen_a0)
{
  GEN_ENTER(0x722c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x88;
}

/* ref: FUN_00722c10 */
uint F_00722c10(unsigned int gen_a0)
{
  GEN_ENTER(0x722c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x89;
}

/* ref: FUN_00722c20 */
uint F_00722c20(unsigned int gen_a0)
{
  GEN_ENTER(0x722c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00722c30 */
uint F_00722c30(unsigned int gen_a0)
{
  GEN_ENTER(0x722c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00722c40 */
uint F_00722c40(unsigned int gen_a0)
{
  GEN_ENTER(0x722c40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00722c50 */
uint F_00722c50(unsigned int gen_a0)
{
  GEN_ENTER(0x722c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00722c60 */
uint F_00722c60(unsigned int gen_a0)
{
  GEN_ENTER(0x722c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x89)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x89);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00722c90 */
uint F_00722c90(unsigned int gen_a0)
{
  GEN_ENTER(0x722c90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x89);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x89);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00722cd0 */
uint F_00722cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x90,800);
  return (uint)uVar1;
}

/* ref: FUN_00722d40 */
uint F_00722d40(unsigned int gen_a0)
{
  GEN_ENTER(0x722d40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00722d50 */
uint F_00722d50(unsigned int gen_a0)
{
  GEN_ENTER(0x722d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00722d60 */
uint F_00722d60(unsigned int gen_a0)
{
  GEN_ENTER(0x722d60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00722d70 */
uint F_00722d70(unsigned int gen_a0)
{
  GEN_ENTER(0x722d70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00722d80 */
uint F_00722d80(unsigned int gen_a0)
{
  GEN_ENTER(0x722d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00722d90 */
uint F_00722d90(unsigned int gen_a0)
{
  GEN_ENTER(0x722d90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00722da0 */
uint F_00722da0(unsigned int gen_a0)
{
  GEN_ENTER(0x722da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00722dc0 */
uint F_00722dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x722dc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00722e00 */
uint F_00722e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00722e50 */
uint F_00722e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722e50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00722ef0 */
uint F_00722ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722ef0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00722f50 */
uint F_00722f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,800);
  return uVar1;
}

/* ref: FUN_00722f70 */
uint F_00722f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,800);
  return (uint)uVar1;
}

/* ref: FUN_00722f90 */
uint F_00722f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722f90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00723030 */
byte F_00723030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723060 */
byte F_00723060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007230c0 */
uint F_007230c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7230c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_007230e0 */
byte F_007230e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7230e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723110 */
unsigned int F_00723110(unsigned int gen_a0)
{
  GEN_ENTER(0x723110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x19);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00723170 */
byte F_00723170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007231b0 */
byte F_007231b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7231b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007231e0 */
byte F_007231e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7231e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723240 */
uint F_00723240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723240u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007232a0 */
uint F_007232a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7232a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,800);
  return uVar1;
}

/* ref: FUN_007232d0 */
uint F_007232d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7232d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,800);
  return (uint)uVar1;
}

/* ref: FUN_00723340 */
uint F_00723340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723340u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007233a0 */
uint F_007233a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7233a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,800);
  return uVar1;
}

/* ref: FUN_007233d0 */
uint F_007233d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7233d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,800);
  return (uint)uVar1;
}

/* ref: FUN_00723420 */
byte F_00723420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723450 */
byte F_00723450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723480 */
uint F_00723480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x723480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723490 */
byte F_00723490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007234f0 */
uint F_007234f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7234f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723540 */
byte F_00723540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723570 */
uint F_00723570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x723570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723580 */
uint F_00723580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x723580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723600 */
byte F_00723600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723650 */
uint F_00723650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723650u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007236b0 */
byte F_007236b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7236b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007236e0 */
uint F_007236e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7236e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00723770 */
byte F_00723770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007237a0 */
unsigned int F_007237a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7237a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00723830 */
uint F_00723830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723830u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00723890 */
uint F_00723890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723890u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_007238c0 */
uint F_007238c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7238c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00723940 */
uint F_00723940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723940u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_007239c0 */
uint F_007239c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7239c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00723a30 */
byte F_00723a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723a70 */
uint F_00723a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723a70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00723ae0 */
uint F_00723ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x723ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723b10 */
byte F_00723b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723b40 */
byte F_00723b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723bb0 */
byte F_00723bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00723be0 */
uint F_00723be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x723be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723c00 */
uint F_00723c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x723c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723c10 */
uint F_00723c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x723c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00723c30 */
uint F_00723c30(unsigned int gen_a0)
{
  GEN_ENTER(0x723c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00723c60 */
uint F_00723c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00723c90 */
uint F_00723c90(unsigned int gen_a0)
{
  GEN_ENTER(0x723c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00723ca0 */
uint F_00723ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x723ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00723cb0 */
uint F_00723cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x723cb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00723cc0 */
uint F_00723cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x723cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00723cd0 */
uint F_00723cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x723cd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00723d10 */
uint F_00723d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723d10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,800);
  return (uint)uVar1;
}

/* ref: FUN_00723d40 */
uint F_00723d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00723d70 */
uint F_00723d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00723db0 */
uint F_00723db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00723de0 */
uint F_00723de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00723e10 */
uint F_00723e10(unsigned int gen_a0)
{
  GEN_ENTER(0x723e10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 100;
}

/* ref: FUN_00723e20 */
uint F_00723e20(unsigned int gen_a0)
{
  GEN_ENTER(0x723e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x65;
}

/* ref: FUN_00723e30 */
uint F_00723e30(unsigned int gen_a0)
{
  GEN_ENTER(0x723e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00723e40 */
uint F_00723e40(unsigned int gen_a0)
{
  GEN_ENTER(0x723e40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00723e50 */
uint F_00723e50(unsigned int gen_a0)
{
  GEN_ENTER(0x723e50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00723e60 */
uint F_00723e60(unsigned int gen_a0)
{
  GEN_ENTER(0x723e60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00723e70 */
uint F_00723e70(unsigned int gen_a0)
{
  GEN_ENTER(0x723e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x65)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x65);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00723e90 */
uint F_00723e90(unsigned int gen_a0)
{
  GEN_ENTER(0x723e90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x65);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x65);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00723ed0 */
uint F_00723ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_00723ef0 */
uint F_00723ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x723ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xbd;
}

/* ref: FUN_00723f00 */
uint F_00723f00(unsigned int gen_a0)
{
  GEN_ENTER(0x723f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00723f10 */
uint F_00723f10(unsigned int gen_a0)
{
  GEN_ENTER(0x723f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00723f20 */
uint F_00723f20(unsigned int gen_a0)
{
  GEN_ENTER(0x723f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00723f30 */
uint F_00723f30(unsigned int gen_a0)
{
  GEN_ENTER(0x723f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00723f60 */
uint F_00723f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc0,800);
  return (uint)uVar1;
}

/* ref: FUN_00723fc0 */
uint F_00723fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x723fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x323);
  return (uint)uVar1;
}

/* ref: FUN_00724010 */
uint F_00724010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00724070 */
uint F_00724070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x54,800);
  return (uint)uVar1;
}

/* ref: FUN_007240b0 */
uint F_007240b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7240b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007240e0 */
uint F_007240e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7240e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x140,800);
  return (uint)uVar1;
}

/* ref: FUN_00724120 */
uint F_00724120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00724150 */
uint F_00724150(unsigned int gen_a0)
{
  GEN_ENTER(0x724150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00724160 */
uint F_00724160(unsigned int gen_a0)
{
  GEN_ENTER(0x724160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00724170 */
uint F_00724170(unsigned int gen_a0)
{
  GEN_ENTER(0x724170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00724180 */
uint F_00724180(unsigned int gen_a0)
{
  GEN_ENTER(0x724180u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00724190 */
uint F_00724190(unsigned int gen_a0)
{
  GEN_ENTER(0x724190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007241a0 */
uint F_007241a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7241a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_007241e0 */
uint F_007241e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7241e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00724210 */
uint F_00724210(unsigned int gen_a0)
{
  GEN_ENTER(0x724210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00724240 */
uint F_00724240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,800);
  return (uint)uVar1;
}

/* ref: FUN_00724270 */
uint F_00724270(unsigned int gen_a0)
{
  GEN_ENTER(0x724270u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00724280 */
uint F_00724280(unsigned int gen_a0)
{
  GEN_ENTER(0x724280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00724290 */
uint F_00724290(unsigned int gen_a0)
{
  GEN_ENTER(0x724290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_007242a0 */
uint F_007242a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7242a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_007242b0 */
uint F_007242b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7242b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_007242e0 */
uint F_007242e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7242e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x322);
  return (uint)uVar1;
}

/* ref: FUN_00724350 */
uint F_00724350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00724380 */
uint F_00724380(unsigned int gen_a0)
{
  GEN_ENTER(0x724380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_007243b0 */
uint F_007243b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7243b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00724400 */
uint F_00724400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,800);
  return (uint)uVar1;
}

/* ref: FUN_00724440 */
uint F_00724440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724440u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00724470 */
uint F_00724470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_007244f0 */
uint F_007244f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7244f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00724560 */
uint F_00724560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x30,800);
  return (uint)uVar1;
}

/* ref: FUN_007245a0 */
uint F_007245a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7245a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_007245d0 */
uint F_007245d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7245d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00724600 */
uint F_00724600(unsigned int gen_a0)
{
  GEN_ENTER(0x724600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00724630 */
uint F_00724630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00724680 */
uint F_00724680(unsigned int gen_a0)
{
  GEN_ENTER(0x724680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00724690 */
uint F_00724690(unsigned int gen_a0)
{
  GEN_ENTER(0x724690u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_007246c0 */
uint F_007246c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7246c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 7,param_2,800);
  return uVar1;
}

/* ref: FUN_007246e0 */
uint F_007246e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7246e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 7,800);
  return (uint)uVar1;
}

/* ref: FUN_00724700 */
uint F_00724700(unsigned int gen_a0)
{
  GEN_ENTER(0x724700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00724710 */
uint F_00724710(unsigned int gen_a0)
{
  GEN_ENTER(0x724710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00724740 */
uint F_00724740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724740u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,800);
  return uVar1;
}

/* ref: FUN_00724770 */
uint F_00724770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,800);
  return (uint)uVar1;
}

/* ref: FUN_007247b0 */
uint F_007247b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7247b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00724850 */
uint F_00724850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x724850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00724890 */
uint F_00724890(unsigned int gen_a0)
{
  GEN_ENTER(0x724890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x65;
}

/* ref: FUN_007248a0 */
uint F_007248a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7248a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007248b0 */
uint F_007248b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7248b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_007248c0 */
uint F_007248c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7248c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

