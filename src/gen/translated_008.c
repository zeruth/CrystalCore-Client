#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00475db0 */
uint F_00475db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00476330((undefined *)((int)this + -0x20),param_1);
  return uVar1;
}

/* ref: FUN_00475dc0 */
uint F_00475dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00476800((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: FUN_00475dd0 */
uint F_00475dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004766e0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00475de0 */
uint F_00475de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00477200((undefined *)((int)this + -0x1a4),param_1);
  return uVar1;
}

/* ref: FUN_00475df0 */
uint F_00475df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0046fd20((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00475e00 */
uint F_00475e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 < 0x27) {
    iVar1 = 0x27;
  }
  F_00a34690(this,iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090ae8));
  F_0046db90(this);
  return (uint)this;
}

/* ref: Client::System::Input::InputData::vf2 */
uint F_00475e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::InputData::vf3 */
uint F_00475e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::InputData::vf4 */
uint F_00475e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::InputData::vf5 */
uint F_00475e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::InputData::vf6 */
uint F_00475e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::InputData::vf7 */
byte F_00475e80(void)
{
  GEN_ENTER(0x475e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkInputData::vf0 */
uint F_00475e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a34020(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00475ec0 */
uint F_00475ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  return (uint)this;
}

/* ref: FUN_00475ef0 */
uint F_00475ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x475ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0046fe00((undefined *)((int)this + 0x10),param_1,param_2);
  return param_1;
}

/* ref: FUN_00475f20 */
uint F_00475f20(unsigned int gen_a0)
{
  GEN_ENTER(0x475f20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  in_ecx[2] = 0xe0000000;
  in_ecx[3] = 0;
  *(undefined2 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00475f50 */
uint F_00475f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x475f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(byte *)((int)this + 0x10) = (byte)param_3 & 1;
  *(byte *)((int)this + 0x11) = (byte)(param_3 >> 1) & 1;
  *(uint *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_5;
  return param_4;
}

/* ref: FUN_00475fa0 */
uint F_00475fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x475fa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00475fd0 */
uint F_00475fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x475fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (0x157 < param_1) {
    return 0;
  }
  return (&REFG(undefined4, 0x14a31f0))[(int)(param_1)];
}

/* ref: FUN_00476000 */
uint F_00476000(void)
{
  GEN_ENTER(0x476000u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  ulonglong uVar2;
  
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    uVar1 = F_00975680(this);
    return uVar1;
  }
  uVar2 = F_0046ff40();
  return (uint)(uVar2 / 1000);
}

/* ref: FUN_00476030 */
uint F_00476030(unsigned int gen_a0)
{
  GEN_ENTER(0x476030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: Client::UI::Misc::UserFileManager::UserFileEvent::vf0 */
uint F_00476060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*(int *)(this + 0x14) != 0) {
    F_00406810(*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Misc::UserFileManager::vf0 */
uint F_004760a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4760a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10905a4));
  if (*(int *)(this + 4) != 0) {
    F_0050c620(*(int *)(this + 4),0,0);
  }
  F_005095f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004760f0 */
byte F_004760f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4760f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x2c24c) & 0x3c) == 0) {
    return 0;
  }
  return 1;
}

/* ref: Client::UI::UI3DModule::vf0 */
uint F_00476130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109072c));
  F_00a4b160(this + 0x71c0);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::UIClipboard::vf0 */
uint F_00476180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1090734));
  F_00aadc20(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004761b0 */
uint F_004761b0(void)
{
  GEN_ENTER(0x4761b0u, 0u, 0u, 0u, 0u);
  return 0x4000;
}

/* ref: FUN_004761c0 */
uint F_004761c0(void)
{
  GEN_ENTER(0x4761c0u, 0u, 0u, 0u, 0u);
  return 100;
}

/* ref: FUN_004761d0 */
uint F_004761d0(void)
{
  GEN_ENTER(0x4761d0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_004761e0 */
uint F_004761e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4761e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0047dea0((undefined *)((int)this + -0x850),param_1);
  return uVar1;
}

/* ref: FUN_004761f0 */
uint F_004761f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4761f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x850) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*(int *)((int)this + 0x864) != 0) {
    F_00406810(*(int *)((int)this + 0x864));
    *(undefined4 *)((int)this + 0x864) = 0;
    *(undefined4 *)((int)this + 0x868) = 0;
  }
  uVar1 = F_00a34020(this);
  return uVar1;
}

/* ref: Client::System::Crypt::SimpleString::vf0 */
uint F_00476240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109073c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476270 */
uint F_00476270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x476270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x21) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x1d) = 0x101;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_4;
  return (uint)this;
}

/* ref: FUN_004762b0 */
uint F_004762b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4762b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __time64_t _Var1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 8) = 1;
  *(undefined1 *)((int)this + 10) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0xc) = (int)_Var1;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x10) = param_3;
  return (uint)this;
}

/* ref: FUN_004762f0 */
uint F_004762f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4762f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109082c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[1])REFP(0x1090824));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880((undefined *)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFriendlist::vf0 */
uint F_00476330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109082c));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[1])REFP(0x1090824));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(this + 0x30);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(*(undefined4 *)(this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476380 */
uint F_00476380(unsigned int gen_a0)
{
  GEN_ENTER(0x476380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar3 = 99;
  pvVar2 = (undefined *)((int)this + 0x20ed0);
  do {
    F_00401530((int)pvVar2 + -0x4f0,0x54,0xf,((code *)REFP(0x42c880)));
    F_0042c880((undefined *)((int)pvVar2 + -0x544));
    iVar3 = iVar3 + -1;
    pvVar2 = (undefined *)((int)pvVar2 + -0x544);
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: FUN_004763e0 */
uint F_004763e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4763e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  iVar2 = 0xf;
  pvVar3 = (undefined *)((int)this + 0x1be04);
  do {
    F_0042c880((undefined *)((int)pvVar3 + -0x110));
    F_0042c880((undefined *)((int)pvVar3 + -0x164));
    F_0042c880((undefined *)((int)pvVar3 + -0x1c0));
    F_0042c880((undefined *)((int)pvVar3 + -0x214));
    iVar2 = iVar2 + -1;
    pvVar3 = (undefined *)((int)pvVar3 + -0x164);
  } while (-1 < iVar2);
  iVar2 = 0xf;
  pvVar3 = (undefined *)((int)this + 0x1a7c4);
  do {
    F_0042c880((undefined *)((int)pvVar3 + -0x110));
    F_0042c880((undefined *)((int)pvVar3 + -0x164));
    F_0042c880((undefined *)((int)pvVar3 + -0x1c0));
    F_0042c880((undefined *)((int)pvVar3 + -0x214));
    iVar2 = iVar2 + -1;
    pvVar3 = (undefined *)((int)pvVar3 + -0x164);
  } while (-1 < iVar2);
  iVar2 = 0x11f;
  pvVar3 = (undefined *)((int)this + 0x19184);
  do {
    F_0042c880((undefined *)((int)pvVar3 + -0x110));
    F_0042c880((undefined *)((int)pvVar3 + -0x164));
    F_0042c880((undefined *)((int)pvVar3 + -0x1c0));
    F_0042c880((undefined *)((int)pvVar3 + -0x214));
    iVar2 = iVar2 + -1;
    pvVar3 = (undefined *)((int)pvVar3 + -0x164);
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) =
       (*(undefined * PTR32 (*)[2])REFP(0x1090504));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: Client::UI::UIInputModule::vf0 */
uint F_004764d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4764d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090754));
  REFG(undefined1, 0x12fdbd7) = 0;
  F_0042c880(this + 0x30);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476510 */
uint F_00476510(unsigned int gen_a0)
{
  GEN_ENTER(0x476510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyLinkshellMember::vf0 */
uint F_00476530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(*(undefined4 *)(this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoModule::vf0 */
uint F_00476570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pIVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1090760));
  pIVar2 = this + 8;
  iVar3 = 0x10;
  do {
    puVar1 = *(undefined4 * PTR32 *)pIVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    pIVar2 = pIVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_0042c880(this + 0x50);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyCatalogSearch::vf0 */
uint F_004765d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4765d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090768));
  F_0042c880(this + 0x18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyCommonlist::vf0 */
uint F_00476600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(*(undefined4 *)(this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyDetail::vf0 */
uint F_00476680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x1090b80));
  this_00 = this + 0x1ec;
  iVar1 = 1;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042c880(this + 0xf0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyCreate::vf0 */
uint F_004766e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4766e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10907cc));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x10907c4));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476720 */
uint F_00476720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0047df00((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyMember::vf0 */
uint F_00476730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(*(undefined4 *)(this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyInvitedlist::vf0 */
uint F_00476770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  F_00406b30(*(undefined4 *)(this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyItemSearch::vf0 */
uint F_004767b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4767b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1090890));
  iVar1 = 7;
  this_00 = this + 0x1c98;
  do {
    this_00 = this_00 + -0x68;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyPartyInvite::vf0 */
uint F_00476800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(this + 0x24);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  F_00406b30(*(undefined4 *)(this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Info::InfoProxyChat::vf0 */
uint F_00476850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00439ec0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476890 */
uint F_00476890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: Client::UI::Misc::CharaConfig::vf7 */
uint F_004768c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4768c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x34) = param_2;
  return param_1;
}

/* ref: Client::UI::Misc::CharaConfig::vf2 */
uint F_004768e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4768e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI::Misc::CharaConfig::vf4 */
uint F_004768f0(void)
{
  GEN_ENTER(0x4768f0u, 0u, 0u, 0u, 0u);
  return 0x400;
}

/* ref: Client::UI::Misc::CharaConfig::vf5 */
uint F_00476900(void)
{
  GEN_ENTER(0x476900u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00476910 */
uint F_00476910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: Client::UI::Misc::PronounModule::vf0 */
uint F_00476940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090990));
  F_00a29b20(this + 0x110);
  F_0042c880(this + 0xb8);
  F_0042c880(this + 100);
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904f8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf4 */
uint F_00476990(void)
{
  GEN_ENTER(0x476990u, 0u, 0u, 0u, 0u);
  return 0x32000;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf5 */
uint F_004769a0(void)
{
  GEN_ENTER(0x4769a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf6 */
uint F_004769b0(void)
{
  GEN_ENTER(0x4769b0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_004769c0 */
uint F_004769c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4769c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00476a10((undefined *)((int)this + -0x30),param_1);
  return uVar1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf7 */
uint F_004769d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4769d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if ((param_1 != 0 || param_2 != 0) &&
     ((param_1 != *(uint *)(this + 8) || (param_2 != *(uint *)(this + 0xc))))) {
    this[0x2c] = (undefined1)0x1;
  }
  *(uint *)(this + 8) = param_1;
  uVar1 = param_1 | param_2;
  *(uint *)(this + 0xc) = param_2;
  if (uVar1 == 0) {
    uVar1 = F_0043b1d0(this,0);
    this[0x39] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::vf0 */
uint F_00476a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004763e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf4 */
uint F_00476a40(void)
{
  GEN_ENTER(0x476a40u, 0u, 0u, 0u, 0u);
  return 0x10000;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf5 */
uint F_00476a50(void)
{
  GEN_ENTER(0x476a50u, 0u, 0u, 0u, 0u);
  return 0x66;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf6 */
uint F_00476a60(void)
{
  GEN_ENTER(0x476a60u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: FUN_00476aa0 */
uint F_00476aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00476ad0 */
uint F_00476ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x476ad0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined1 *)(in_ecx + 0xa8) = 0;
  return in_ecx;
}

/* ref: FUN_00476af0 */
uint F_00476af0(unsigned int gen_a0)
{
  GEN_ENTER(0x476af0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8);
  *(undefined1 *)(in_ecx + 0x5c) = 0;
  return in_ecx;
}

/* ref: FUN_00476b10 */
uint F_00476b10(unsigned int gen_a0)
{
  GEN_ENTER(0x476b10u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x6c);
  return in_ecx;
}

/* ref: FUN_00476b30 */
uint F_00476b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042ccf0((undefined *)((int)this + 4),param_1 + 1);
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  F_0042ccf0((undefined *)((int)this + 0x6c),param_1 + 0x1b);
  return (uint)this;
}

/* ref: FUN_00476b80 */
uint F_00476b80(unsigned int gen_a0)
{
  GEN_ENTER(0x476b80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xa8);
  return in_ecx;
}

/* ref: FUN_00476ba0 */
uint F_00476ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x476ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00476bc0 */
uint F_00476bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x476bc0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8);
  F_0042b630(in_ecx + 0x60);
  F_0042b630(in_ecx + 0xbc);
  F_0042b630(in_ecx + 0x11c);
  return in_ecx;
}

/* ref: FUN_00476bf0 */
uint F_00476bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x476bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x11c));
  F_0042c880((undefined *)((int)this + 0xbc));
  F_0042c880((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar1;
}

/* ref: FUN_00476c20 */
uint F_00476c20(unsigned int gen_a0)
{
  GEN_ENTER(0x476c20u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x68);
  return in_ecx;
}

/* ref: FUN_00476c40 */
uint F_00476c40(unsigned int gen_a0)
{
  GEN_ENTER(0x476c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x68));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00476c60 */
uint F_00476c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_00471510((undefined *)((int)this + 8),param_1 + 2);
  F_0042ccf0((undefined *)((int)this + 0x11c),param_1 + 0x47);
  return (uint)this;
}

/* ref: FUN_00476cb0 */
uint F_00476cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x476cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::RaptureShellCommandInterface::vf0 */
uint F_00476ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476d10 */
uint F_00476d10(unsigned int gen_a0)
{
  GEN_ENTER(0x476d10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1090c70));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090c64));
  F_0042b630(in_ecx + 2);
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00476d40 */
uint F_00476d40(unsigned int gen_a0)
{
  GEN_ENTER(0x476d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return (uint)uVar1;
}

/* ref: FUN_00476d60 */
uint F_00476d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00476d70((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandFriendlist::vf0 */
uint F_00476d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476db0 */
uint F_00476db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x476db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  if (((*(int *)((int)this + 0x58) != 0) && (0 < param_3)) &&
     (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    if (param_4 == 0) {
      uVar1 = F_0042a990((int)this + 4);
      F_004438d0(uVar1);
    }
    else if (param_4 == 1) {
      uVar1 = F_0042a990((int)this + 4);
      F_00443960(*(undefined * PTR32 *)((int)this + 0x58),uVar1);
    }
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00476e20 */
uint F_00476e20(unsigned int gen_a0)
{
  GEN_ENTER(0x476e20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1090c88));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x1090c7c));
  F_0042b630(in_ecx + 2);
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00476e50 */
uint F_00476e50(unsigned int gen_a0)
{
  GEN_ENTER(0x476e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return (uint)uVar1;
}

/* ref: FUN_00476e70 */
uint F_00476e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00476e80((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandBlacklist::vf0 */
uint F_00476e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 8);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00476ec0 */
uint F_00476ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x476ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  if (((*(int *)((int)this + 0x58) != 0) && (0 < param_3)) &&
     (((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    if (param_4 == 0) {
      uVar1 = F_0042a990((int)this + 4);
      F_0043fc40(*(undefined * PTR32 *)((int)this + 0x58),uVar1);
    }
    else if (param_4 == 1) {
      uVar1 = F_0042a990((int)this + 4);
      F_0043fd10(*(undefined * PTR32 *)((int)this + 0x58),uVar1);
    }
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00476f30 */
uint F_00476f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1090c94));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::UI::Shell::ShellCommandAgent::vf1 */
uint F_00476f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x476f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  if (param_2 != (int *)0x0) {
    uVar3 = *(undefined4 *)(this + 4);
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
    piVar2 = (int *)F_00763050(uVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
      if ((char)uVar1 != '\0') {
        ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        return 0;
      }
      return 10;
    }
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandAgent::vf0 */
uint F_00476fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x476fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00477000 */
byte F_00477000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x477000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb080 + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: Client::UI::Shell::ShellCommandReturn::vf0 */
uint F_00477040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x477040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00477070 */
uint F_00477070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x477070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090cac));
  F_0042cc20((undefined *)((int)this + 4),param_1,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_004770a0 */
uint F_004770a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4770a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::ShellCommandCommand::vf1 */
uint F_004770c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4770c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined * pSVar1;
  
  if (param_2 != (int *)0x0) {
    pSVar1 = this + 4;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x20))(param_2)));
    F_00abefa0(this_00,pSVar1,param_2);
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandCommand::vf0 */
uint F_004770f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4770f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00477120 */
uint F_00477120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1090cb8));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandConfigToggle::vf0 */
uint F_00477150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x477150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandConfigToggle::vf1 */
uint F_00477180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    F_004482b0(*(undefined4 *)(this + 8),*(undefined4 *)(param_1 + 4));
  }
  else if (iVar1 == 1) {
    if (param_2 != (int *)0x0) {
      uVar4 = *(undefined4 *)(param_1 + 4);
      uVar3 = *(undefined4 *)(this + 8);
      uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x3c))(param_2);
      F_00448300(uVar2,uVar3,uVar4);
      return 0;
    }
  }
  else if ((iVar1 == 2) && (param_2 != (int *)0x0)) {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(this + 8);
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
    F_00448390(uVar2,uVar3,uVar4);
    return 0;
  }
  return 0;
}

/* ref: Client::UI::Shell::RaptureShellModule::vf0 */
uint F_00477200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x477200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0043d770(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandBattleMode::vf1 */
uint F_00477260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (-1 < (int)*(uint *)(param_1 + 4)) {
    uVar1 = *(uint *)(param_1 + 4) & 0xfffffffe;
    if (uVar1 == 0) {
      F_00a7efa0(&REFG(char, 0x14ab058),1);
      return 0;
    }
    if (uVar1 == 2) {
      F_00a7efa0(&REFG(char, 0x14ab058),0);
      return 0;
    }
  }
  F_00a7efa0(&REFG(char, 0x14ab058),(uint)(REFG(char, 0x14ab058) == '\0'));
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandBattleTarget::vf1 */
uint F_00477340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00547970(&REFG(undefined4, 0x1375bc0),0xb,3,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTargetPc::vf1 */
uint F_00477440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00547970(&REFG(undefined4, 0x1375bc0),6,7,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTargetNpc::vf1 */
uint F_00477480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00547970(&REFG(undefined4, 0x1375bc0),5,3,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemy::vf1 */
uint F_004774c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4774c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00547970(&REFG(undefined4, 0x1375bc0),2,3,1);
  return 0;
}

/* ref: FUN_00477520 */
uint F_00477520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x477520u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  
  if (param_1 < param_2) {
    piVar1 = &REFG(undefined4, 0x14b2790) + param_1 * 2;
    iVar2 = param_1;
    do {
      if ((*piVar1 == -0x20000000) && (piVar1[1] == 0)) {
        return iVar2 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandLoot::vf1 */
uint F_00477580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0053d810(&REFG(undefined4, 0x1375bc0),0x13,3,0);
  if (uVar1 != 0) {
    F_00543ca0(&REFG(undefined4, 0x1375bc0),uVar1,0,1);
    F_00ae2af0(&REFG(undefined * PTR32, 0x1338d48),uVar1);
    return 0;
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandFaceTarget::vf1 */
uint F_004775e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4775e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (REFG(int, 0x1379694) != 0) {
    F_00ae8f30(0);
    return 0;
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandAutoMove::vf1 */
uint F_00477620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (REFG(int, 0x1379694) != 0) {
    F_00ae8f20();
    return 0;
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyNext::vf1 */
uint F_00477660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00549d90(&REFG(undefined4, 0x1375bc0),0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyPrev::vf1 */
uint F_004776a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4776a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00549d90(&REFG(undefined4, 0x1375bc0),1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandLockon::vf1 */
uint F_00477700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4) & 0xfffffffe;
  if (uVar2 == 0) {
    F_005329b0(&REFG(undefined4, 0x1375bc0),1);
    return 0;
  }
  if (uVar2 != 2) {
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0));
    F_005329b0(&REFG(undefined4, 0x1375bc0),(uint)(bVar1 == 0));
    return 0;
  }
  F_005329b0(&REFG(undefined4, 0x1375bc0),0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandChatReply::vf1 */
uint F_00477840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x54 + iVar1 != iVar1) {
    if (param_2 != (int *)0x0) {
      piVar4 = param_2;
      uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
      uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"/t <r> %s",uVar2);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x20))(param_2)));
      F_00abefa0(this_00,uVar2,piVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    }
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return 7;
}

/* ref: FUN_00477970 */
uint F_00477970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x477970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042b630(this);
  F_0077c0f0(this,param_1);
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyJoin::vf1 */
uint F_004779f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4779f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 uVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
  piVar1 = *(int * PTR32 *)(uVar2 + 0xc);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  if (uVar2 == 0) {
    return 9;
  }
  uVar4 = 0x2f;
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
  this_00 = (undefined *)F_00763050(uVar2,uVar4);
  if (piVar1[2] != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar1[1] + 0x1c))((int *)piVar1[1])));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)*(byte *)((int)piVar1 + 0xd));
    if (uVar2 != 0) {
      F_0087d300(this_00,**(undefined4 * PTR32 *)(uVar2 + 0x20),0,0);
      return 0;
    }
  }
  F_0087d300(this_00,0,0,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandPartyDecline::vf1 */
uint F_00477aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 uVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
  piVar1 = *(int * PTR32 *)(uVar2 + 0xc);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  if (uVar2 == 0) {
    return 9;
  }
  uVar4 = 0x2f;
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
  this_00 = (undefined *)F_00763050(uVar2,uVar4);
  if (piVar1[2] != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar1[1] + 0x1c))((int *)piVar1[1])));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)*(byte *)((int)piVar1 + 0xd));
    if (uVar2 != 0) {
      F_0087d4a0(this_00,**(undefined4 * PTR32 *)(uVar2 + 0x20),0);
      return 0;
    }
  }
  F_0087d4a0(this_00,0,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeave::vf1 */
uint F_00477b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
    if (*(int *)(uVar1 + 8) != 0) {
      F_004459f0();
      return 0;
    }
  }
  return 8;
}

/* ref: Client::UI::Shell::ShellCommandFC::vf1 */
uint F_00477c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  uVar3 = 0x3f;
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
  piVar2 = (int *)F_00763050(uVar1,uVar3);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
    if ((char)uVar1 == '\0') {
      return 10;
    }
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandComment::vf1 */
uint F_00477cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  undefined * this_01;
  int iVar3;
  undefined1 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (param_2 == (int *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 7;
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x28);
  if (this_00 == (undefined *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 7;
  }
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x54 + iVar1 == iVar1) {
    F_00440970(this_00,&REFG(undefined1, 0x107fc63));
  }
  else {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0x10));
    uVar10 = 4;
    uVar9 = 0x162;
    uVar8 = 0xc;
    uVar7 = 0;
    uVar6 = 0xc0;
    uVar5 = 0x3c;
    puVar4 = ((undefined1 *)(gen_frame + 0x4));
    this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2)));
    F_0058c4d0(this_01,puVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_00440970(this_00,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_004408a0(this_00,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandLegacy::vf1 */
uint F_00477e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_2 == (int *)0x0) {
    return 7;
  }
  uVar1 = *(uint *)(param_1 + 4) & 0xfffffffe;
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  else {
    if (uVar1 == 2) {
      uVar7 = 1;
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0x14e;
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x3c))(param_2)));
      F_00447870(pvVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
      return 0;
    }
    uVar4 = 0;
    uVar3 = 0x14e;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x3c))(param_2)));
    uVar1 = F_0043c920(pvVar2,uVar3,uVar4);
    uVar1 = (uint)(uVar1 == 0);
  }
  uVar4 = 0;
  uVar6 = 1;
  uVar5 = 1;
  uVar3 = 0x14e;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x3c))(param_2)));
  F_00447870(pvVar2,uVar3,uVar1,uVar4,uVar5,uVar6);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarDisplay::vf1 */
uint F_00477f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandInventory::vf1 */
uint F_00477f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x477f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_ecx;
  undefined * this_00;
  int iVar1;
  undefined1 * this_01;
  undefined4 uVar2;
  
  this_01 = (gen_frame + 0x1c);
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    uVar2 = 5;
    in_ecx = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
    this_00 = (undefined *)F_00763050(in_ecx,uVar2);
    if (this_00 != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
      (*(undefined4 *)(gen_frame + 0x10)) = 3;
      if (*(int *)(param_1 + 4) - 1U < 4) {
        iVar1 = *(int *)(param_1 + 4) + -1;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
      (*(int *)(gen_frame + 0x18)) = iVar1;
      F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0xc)),2);
      iVar1 = 1;
      do {
        this_01 = this_01 + -8;
        F_005a2670(this_01);
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
      return 0;
    }
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf2 */
uint F_00478010(void)
{
  GEN_ENTER(0x478010u, 0u, 0u, 0u, 0u);
  return 0x73;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf3 */
byte F_00478020(void)
{
  GEN_ENTER(0x478020u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00478030 */
uint F_00478030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0047ade0((undefined *)((int)this + -4),param_1)
  ;
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf1 */
uint F_00478040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x478040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined1 gen_out[0x4];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined * pSVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  if (param_2 != (int *)0x0) {
    if (REFG(char, 0x1372338) != '\0') {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x25);
      F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
      return 0;
    }
    if (REFG(undefined4, 0x1372334) != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,REFG(undefined4, 0x1372334),0);
      REFG(undefined4, 0x1372334) = 0;
      F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
      return 0;
    }
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x7d);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x7d);
      F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
      return 0;
    }
    REFG(undefined1, 0x137232f) = 0;
    REFG(undefined1, 0x1372332) = 0;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    REFG(undefined1, 0x1372333) = (undefined1)uVar4;
    pSVar9 = this + 4;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    uVar5 = ((code *)*(gen_code32 *)(*param_2 + 0x18))(param_2);
    if (*(int *)(uVar5 + 600) == 0) {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x34) + 8))))(*(int * PTR32 *)(uVar5 + 0x34),"Addon");
      *(uint *)(uVar5 + 600) = uVar6;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 600) + 0x24))))(*(int * PTR32 *)(uVar5 + 600),uVar4)));
    uVar19 = 0;
    pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    uVar4 = F_00cb0950(pvVar7,uVar19);
    uVar20 = 0;
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0x14;
    uVar13 = 0;
    uVar12 = 4;
    uVar11 = 0;
    uVar10 = 0;
    uVar8 = 0;
    uVar19 = 0;
    pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2)));
    REFG(undefined4, 0x1372334) = F_00866a60(pvVar7,uVar4,uVar19,uVar8,pSVar9,param_2,uVar10,uVar11,uVar12,uVar13
                                ,uVar14,uVar15,uVar16,uVar17,uVar18,uVar20);
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
  return 0;
}

/* ref: FUN_004781c0 */
uint F_004781c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4781c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  byte bVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  undefined * this_01;
  undefined4 uVar4;
  
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if ((param_4 == (int *)0x0) || (this_00 == (undefined *)0x0)) goto LAB_0047824e;
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  if (iVar2 == 0) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x7d);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x7d);
    }
    else {
      uVar4 = 0;
      uVar3 = ((code *)*(gen_code32 *)(*param_4 + 0x48))(param_4);
      this_01 = (undefined *)F_00763050(uVar3,uVar4);
      if (this_01 != (undefined *)0x0) {
        REFG(char, 0x137232f) = '\x01';
        uVar4 = 0x3c;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 0xc))))((int *)((int)this + -4));
        F_007e4b80(this_01,uVar3 & 0xff,uVar4);
      }
    }
  }
  else if (iVar2 == 4) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x7d);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x7d);
      REFG(undefined4, 0x1372334) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
    REFG(char, 0x1372332) = '\x01';
    F_00975070(this_00);
    bVar1 = F_00433a30(param_4,1);
    if (bVar1 == 0) goto LAB_0047824e;
    REFG(undefined1, 0x1372338) = 1;
  }
  else {
    if (iVar2 == 5) {
      REFG(char, 0x1372332) = '\0';
      F_00975080(this_00);
LAB_0047824e: ;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    if ((REFG(char, 0x137232f) == '\0') && (REFG(char, 0x1372332) != '\0')) {
      F_00975080(this_00);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  REFG(undefined4, 0x1372334) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandShutdown::vf2 */
uint F_00478360(void)
{
  GEN_ENTER(0x478360u, 0u, 0u, 0u, 0u);
  return 0x74;
}

/* ref: Client::UI::Shell::ShellCommandShutdown::vf3 */
byte F_00478370(void)
{
  GEN_ENTER(0x478370u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00478390 */
uint F_00478390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0047ae10((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Client::UI::Shell::ShellCommandHud::vf1 */
uint F_004783c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4783c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(uint *)(param_1 + 4) & 0xffffff;
  if ((0x28 < uVar1) || (*(int *)(&REFG(undefined, 0x1090f58) + uVar1 * 4) < 0)) {
    return 7;
  }
  this_00 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),
                                 *(int *)(&REFG(undefined, 0x1090f58) + uVar1 * 4));
  if (*(int *)(param_1 + 8) == 0) {
    F_00414a40(this_00,1,1);
    return 0;
  }
  if (*(int *)(param_1 + 8) != 2) {
    F_00414a40(this_00,(uint)(*(int *)((int)this_00 + 0x14) == 0),1);
    return 0;
  }
  F_00414a40(this_00,0,1);
  return 0;
}

/* ref: FUN_00478450 */
byte F_00478450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478450u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a4cf70(param_2,10);
  if (uVar1 == 0xc) {
    F_00414a40(param_1,1,1);
    return 1;
  }
  if (uVar1 == 0x18) {
    F_00414a40(param_1,0,1);
    return 1;
  }
  return 0;
}

/* ref: FUN_004784b0 */
uint F_004784b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4784b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = (int)param_1;
  pvVar3 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x14e);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar3;
  pvVar3 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x14f);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar3;
  pvVar3 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x150);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar3;
  uVar6 = 0;
  param_1 = (uint *)((int)param_1 + 8);
  (*(int *)(gen_frame + 0xc)) = 1;
  iVar5 = 0x54;
  do {
    switch((unsigned int)(uintptr_t)(*param_1 & 0xfffffffe)) {
    case 0: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x18)),1,1);
      uVar6 = uVar6 | 1;
      break;
    case 2: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x18)),0,1);
      uVar6 = uVar6 | 1;
      break;
    default: ;
      if ((*(int *)(gen_frame + 0xc)) < (*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10)) / 0x54) {
        uVar4 = F_00a4cf70(*(int *)(iVar1 + 0x10) + iVar5,10);
        if (uVar4 == 0xc) {
          uVar7 = 1;
        }
        else {
          if (uVar4 != 0x18) break;
          uVar7 = 0;
        }
        F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x10)),uVar7,1);
        uVar6 = uVar6 | 4;
      }
      break;
    case 0xb4: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x14)),0,1);
      uVar6 = uVar6 | 2;
      break;
    case 0xb6: ;
      F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x14)),1,1);
      uVar6 = uVar6 | 2;
    }
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    param_1 = param_1 + 1;
    iVar5 = iVar5 + 0x54;
  } while (iVar5 < 0xfc);
  param_1 = (uint *)0x3;
  if (3 < (*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10)) / 0x54) {
    iVar5 = 0xfc;
    do {
      bVar2 = F_0043da00(param_2,*(int *)(iVar1 + 0x10) + iVar5,&(*(int *)(gen_frame + 0xc)));
      if (bVar2 == 0) {
        uVar4 = F_00a4cf70(*(int *)(iVar1 + 0x10) + iVar5,10);
        if (uVar4 == 0xc) {
          uVar7 = 1;
        }
        else {
          if (uVar4 != 0x18) goto switchD_0047862f_caseD_0;
          uVar7 = 0;
        }
        F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x10)),uVar7,1);
        uVar6 = uVar6 | 4;
      }
      else {
        switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0xc)))) {
        case 1: ;
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x18)),0,1);
          uVar6 = uVar6 | 1;
          break;
        case 0xb3: ;
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x14)),0,1);
          uVar6 = uVar6 | 2;
          break;
        case 0xb5: ;
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x14)),1,1);
          uVar6 = uVar6 | 2;
          break;
        case -1: ;
                    
          F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x18)),1,1);
          uVar6 = uVar6 | 1;
        }
      }
switchD_0047862f_caseD_0: ;
      param_1 = (uint *)((int)param_1 + 1);
      iVar5 = iVar5 + 0x54;
    } while ((int)param_1 < (*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10)) / 0x54);
  }
  if (uVar6 == 0) {
    F_00414a40((*(undefined * PTR32 *)(gen_frame + 0x18)),(uint)(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14) == 0),1);
  }
  return 0;
}

/* ref: FUN_00478890 */
uint F_00478890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478890u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x14d);
  if (1 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54)) {
    uVar1 = F_00a4cf70(*(int *)(param_1 + 0x10) + 0x54,10);
    if ((-1 < (int)uVar1) && ((int)uVar1 <= *(int *)((int)this + 8))) {
      F_00414a40(this,uVar1,1);
      return 0;
    }
  }
  return 7;
}

/* ref: FUN_00478900 */
uint F_00478900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478900u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  undefined * this;
  
  if (1 < (uint)((*(int *)((*(uint *)&gen_args[0]) + 0x14) - *(int *)((*(uint *)&gen_args[0]) + 0x10)) / 0x54)) {
    (*(uint *)&gen_args[0]) = F_00a4cf70(*(int *)((*(uint *)&gen_args[0]) + 0x10) + 0x54,10);
    bVar1 = F_00817480(&(*(uint *)&gen_args[0]));
    if (bVar1 != 0) {
      this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x144);
      F_00414a40(this,(*(uint *)&gen_args[0]),1);
      return 0;
    }
  }
  return 7;
}

/* ref: FUN_00478980 */
uint F_00478980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478980u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x151);
  uVar1 = *(uint *)(param_1 + 8) & 0xfffffffe;
  if (uVar1 == 0) {
    F_00414a40(this,1,1);
    return 0;
  }
  if (uVar1 != 2) {
    F_00414a40(this,(uint)(*(int *)((int)this + 0x14) == 0),1);
    return 0;
  }
  F_00414a40(this,0,1);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandChatlog::vf1 */
uint F_004789e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4789e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*(uint *)(param_1 + 4) & 0xfffffffe)) {
  case 0xac: ;
    uVar1 = F_004784b0(this,param_1,param_2);
    return uVar1;
  case 0xae: ;
    uVar1 = F_00478980(param_1,param_2);
    return uVar1;
  case 0xb0: ;
    uVar1 = F_00478890(param_1,param_2);
    return uVar1;
  case 0xb2: ;
    uVar1 = F_00478900(param_1,param_2);
    return uVar1;
  default: ;
    return 7;
  }
}

/* ref: FUN_00478a80 */
byte F_00478a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x478a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined * pvVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = param_2 * 3 + 0x39;
  pvVar1 = (undefined *)((int)param_1 + iVar2 * 8);
  if (*(int *)((int)param_1 + iVar2 * 8 + 0x10) == 0) {
    if (((byte)*(undefined4 *)((int)param_1 + param_2 * 8 + 0x2130) & 0xf) == 3) {
      uVar4 = *(uint *)((int)param_1 + param_2 * 8 + 0x2134);
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)((int)pvVar1 + 0x10))
                      (*(int *)((int)pvVar1 + 0x14) + (int)param_1,param_2,pvVar1,1,0,0);
  }
  switch((unsigned int)(uintptr_t)(param_3 & 0xfffffffe)) {
  case 0: ;
  case 0x46: ;
  case 0xbe: ;
    bVar3 = F_00447870(param_1,param_2,0,0,1,1);
    return bVar3;
  case 2: ;
    bVar3 = F_00447870(param_1,param_2,2,0,1,1);
    return bVar3;
  default: ;
    bVar3 = F_00447870(param_1,param_2,-(uint)(uVar4 != 2) & 2,0,1,1);
    return bVar3;
  case 0xc0: ;
    bVar3 = F_00447870(param_1,param_2,1,0,1,1);
    return bVar3;
  }
}

/* ref: Client::UI::Shell::ShellCommandBattleEffect::vf1 */
uint F_00478c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x478c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != (int *)0x0) {
    uVar1 = *(uint *)(param_1 + 4) & 0xfffffffe;
    if (uVar1 == 0xb8) {
      uVar3 = *(undefined4 *)(param_1 + 8);
      uVar2 = 0xa1;
    }
    else {
      if (uVar1 == 0xba) {
        uVar3 = *(undefined4 *)(param_1 + 8);
        uVar2 = 0xa2;
        uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x3c))(param_2);
        F_00478a80(uVar1,uVar2,uVar3);
        return 0;
      }
      if (uVar1 != 0xbc) {
        return 7;
      }
      uVar3 = *(undefined4 *)(param_1 + 8);
      uVar2 = 0xa3;
    }
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x3c))(param_2);
    F_00478a80(uVar1,uVar2,uVar3);
  }
  return 0;
}

/* ref: FUN_00478cd0 */
uint F_00478cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1091034));
  return (uint)in_ecx;
}

/* ref: std::runtime_error::vf2 */
unsigned int F_00478cf0(void)
{
  GEN_ENTER(0x478cf0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_EDI = 0;
  
                    
  F_00c4c299(unaff_EDI,0,0,0,0,0);
}

/* ref: FUN_00478d00 */
unsigned int F_00478d00(unsigned int gen_a0)
{
  GEN_ENTER(0x478d00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  return 0;
}

/* ref: FUN_00478d10 */
uint F_00478d10(unsigned int gen_a0)
{
  GEN_ENTER(0x478d10u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  wchar_t * pwVar1;
  undefined * p_Var2;
  
  p_Var2 = F_00c45a9d(((undefined *)(gen_frame + 0xc)));
  *param_1 = (*(uint *)((char *)(p_Var2)));
  param_1[1] = (uint)(*(short * PTR32 *)(((char *)(p_Var2) + 4)));
  pwVar1 = (*(wchar_t * PTR32 *)(((char *)(p_Var2) + 12)));
  param_1[2] = (*(int *)(((char *)(p_Var2) + 8)));
  param_1[3] = (uint)pwVar1;
  return (uint)param_1;
}

/* ref: std::locale::id::operator_unsigned_int */
uint F_00478d50(unsigned int gen_a0)
{
  GEN_ENTER(0x478d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x8))))) = (int)this;
  if (*(int *)this == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
    if (*(int *)this == 0) {
      REFG(int, 0x15d6788) = REFG(int, 0x15d6788) + 1;
      *(int *)this = REFG(int, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  }
  return *(uint *)this;
}

/* ref: FUN_00478d90 */
uint F_00478d90(unsigned int gen_a0)
{
  GEN_ENTER(0x478d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x8))))) = (int)this;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
  if (*(int *)((int)this + 4) != -1) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  uVar1 = F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00478dc0 */
uint F_00478dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x478dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x8))))) = (int)this;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)((int)this + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)((int)this + 4);
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  return ~-(uint)(iVar1 != 0) & (uint)this;
}

/* ref: FUN_00478e10 */
unsigned int F_00478e10(unsigned int gen_a0)
{
  GEN_ENTER(0x478e10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return 0;
}

/* ref: FUN_00478e20 */
uint F_00478e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00478e40 */
uint F_00478e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478e40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  iVar1 = *(*(int * PTR32 *)&gen_args[1]);
  *(int *)(*(undefined * PTR32 *)&gen_args[0]) = iVar1;
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[1]),0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[1]));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00478e80 */
uint F_00478e80(unsigned int gen_a0)
{
  GEN_ENTER(0x478e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * p_Var1;
  uint uVar2;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x8))))) = (int)this;
  p_Var1 = F_00c46017();
  *(undefined * PTR32 *)this = p_Var1;
  uVar2 = F_00c45d58();
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
  if (*(int *)(uVar2 + 4) != -1) {
    *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  return (uint)this;
}

/* ref: FUN_00478ec0 */
unsigned int F_00478ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x478ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x8))))) = (int)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar1 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
    puVar3 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar1)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
  }
  return 0;
}

/* ref: FUN_00478f10 */
uint F_00478f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478f10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *in_ecx;
  if ((param_2 < *(uint *)(iVar1 + 0xc)) &&
     (uVar2 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + param_2 * 4))), uVar2 != 0)) {
    return uVar2;
  }
  if ((*(char *)(iVar1 + 0x14) != '\0') &&
     (uVar2 = F_00c45d58(), param_2 < *(uint *)(uVar2 + 0xc))) {
    return *((uint *)GEN_TOP((*(int *)(uVar2 + 8) + param_2 * 4)));
  }
  return 0;
}

/* ref: std::locale::facet::vf0 */
uint F_00478f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00478f80 */
uint F_00478f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109104c));
  return (uint)in_ecx;
}

/* ref: std::ctype_base::vf0 */
uint F_00478fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00478fe0 */
uint F_00478fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x478fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00478ff0 */
uint F_00478ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x478ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0xc)));
  *(uint *)((int)this + 8) = (*(uint *)((char *)(p_Var1)));
  *(short * PTR32 *)((int)this + 0xc) = (*(short * PTR32 *)(((char *)(p_Var1) + 4)));
  *(int *)((int)this + 0x10) = (*(int *)(((char *)(p_Var1) + 8)));
  *(wchar_t * PTR32 *)((int)this + 0x14) = (*(wchar_t * PTR32 *)(((char *)(p_Var1) + 12)));
  return (uint)p_Var1;
}

/* ref: FUN_00479030 */
uint F_00479030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x479030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00479050 */
uint F_00479050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c46280();
  *param_1 = param_2;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004790a0 */
uint F_004790a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4790a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  *(*(int * PTR32 *)&gen_args[1]) = iVar1;
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[1]),0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[1]));
  return (uint)piVar2;
}

/* ref: std::ios_base::vf0 */
uint F_00479110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00479140 */
uint F_00479140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: std::basic_streambuf<char,std::char_traits<char>_>::setg */
uint F_004791c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4791c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  
  **(undefined4 * PTR32 *)(this + 0x10) = param_1;
  **(int * PTR32 *)(this + 0x20) = param_2;
  piVar1 = *(int * PTR32 *)(this + 0x30);
  *piVar1 = param_3 - param_2;
  return (uint)piVar1;
}

/* ref: std::basic_streambuf<char,std::char_traits<char>_>::setp */
uint F_004791f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4791f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  **(int * PTR32 *)(this + 0x14) = param_1;
  **(int * PTR32 *)(this + 0x24) = param_1;
  piVar1 = *(int * PTR32 *)(this + 0x34);
  *piVar1 = param_2 - param_1;
  return (uint)piVar1;
}

/* ref: FUN_00479210 */
uint F_00479210(unsigned int gen_a0)
{
  GEN_ENTER(0x479210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(int *)((int)this + 0x10) = (int)this + 8;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(undefined4 * PTR32 *)((int)this + 0x14) = (undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(undefined4 *)((int)this + 0xc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x30);
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00479270 */
uint F_00479270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x8))))) = (int)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar1 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
    puVar3 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar1)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: basic_ios_DU_char_traits_D_std_std::vf0 */
uint F_004792e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4792e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00479330 */
uint F_00479330(unsigned int gen_a0)
{
  GEN_ENTER(0x479330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    uVar1 = extraout_EAX;
  }
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00479360 */
uint F_00479360(unsigned int gen_a0)
{
  GEN_ENTER(0x479360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * _Dst;
  int * piVar1;
  
  _Dst = (undefined *)((int)this + 0x90);
  F_00c48350(_Dst,-1,0x40);
  **(undefined4 * PTR32 *)((int)this + 0x14) = _Dst;
  **(undefined4 * PTR32 *)((int)this + 0x24) = _Dst;
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *piVar1 = (int)this + (0xcf - (int)_Dst);
  return (uint)piVar1;
}

/* ref: std::runtime_error::vf0 */
uint F_004793a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4793a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004793e0 */
uint F_004793e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4793e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109106c));
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0xc)));
  *(uint *)((int)this + 8) = (*(uint *)((char *)(p_Var1)));
  *(short * PTR32 *)((int)this + 0xc) = (*(short * PTR32 *)(((char *)(p_Var1) + 4)));
  *(int *)((int)this + 0x10) = (*(int *)(((char *)(p_Var1) + 8)));
  *(wchar_t * PTR32 *)((int)this + 0x14) = (*(wchar_t * PTR32 *)(((char *)(p_Var1) + 12)));
  return (uint)this;
}

/* ref: ctype_D_std::vf2 */
byte F_00479460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = F_00c45990(param_1 & 0xff,(undefined *)((int)this + 8));
  return (byte)iVar1;
}

/* ref: ctype_D_std::vf1 */
uint F_00479480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x479480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  byte * pbVar2;
  
  pbVar2 = param_1;
  if (param_1 != param_2) {
    do {
      iVar1 = F_00c45990((uint)*pbVar2,(undefined *)((int)this + 8));
      *pbVar2 = (byte)iVar1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != param_2);
  }
  return (uint)pbVar2;
}

/* ref: ctype_D_std::vf4 */
byte F_004794b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4794b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = F_00c46491(param_1 & 0xff,(undefined *)((int)this + 8));
  return (byte)iVar1;
}

/* ref: ctype_D_std::vf3 */
uint F_004794d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4794d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  byte * pbVar2;
  
  pbVar2 = param_1;
  if (param_1 != param_2) {
    do {
      iVar1 = F_00c46491((uint)*pbVar2,(undefined *)((int)this + 8));
      *pbVar2 = (byte)iVar1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != param_2);
  }
  return (uint)pbVar2;
}

/* ref: ctype_D_std::vf6 */
byte F_00479500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (byte)param_1;
}

/* ref: ctype_D_std::vf5 */
uint F_00479510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x479510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c46aa0(param_3,param_1,param_2 - param_1);
  return param_2;
}

/* ref: ctype_D_std::vf8 */
byte F_00479540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x479540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (byte)param_1;
}

/* ref: ctype_D_std::vf7 */
uint F_00479550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x479550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c46aa0(param_4,param_1,param_2 - param_1);
  return param_2;
}

/* ref: FUN_00479580 */
uint F_00479580(unsigned int gen_a0)
{
  GEN_ENTER(0x479580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109106c));
  if (0 < (int)uVar1) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x10));
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
    return extraout_EAX;
  }
  if ((int)uVar1 < 0) {
    uVar2 = F_00406b30(*(undefined4 *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return uVar1;
}

/* ref: ctype_D_std::vf0 */
uint F_004795c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4795c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109106c));
  if (*(int *)((int)this + 0x14) < 1) {
    if (*(int *)((int)this + 0x14) < 0) {
      F_00406b30(*(undefined4 *)((int)this + 0x10));
    }
  }
  else {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00479610 */
uint F_00479610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x479610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1091094));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return (uint)this;
}

/* ref: std::system_error::vf2 */
unsigned int F_00479640(void)
{
  GEN_ENTER(0x479640u, 0u, 0u, 0u, 0u);
  undefined4 unaff_EDI = 0;
  
                    
  F_00c4c299(unaff_EDI,0,0,0,0,0);
}

/* ref: std::system_error::vf0 */
uint F_00479650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00479680 */
uint F_00479680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x479680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
  return (uint)this;
}

/* ref: std::ios_base::failure::vf2 */
unsigned int F_004796b0(void)
{
  GEN_ENTER(0x4796b0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_EDI = 0;
  
                    
  F_00c4c299(unaff_EDI,0,0,0,0,0);
}

/* ref: FUN_004796c0 */
unsigned int F_004796c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4796c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  *(uint *)((*(int *)&gen_args[0]) + 0xc) = (*(uint *)&gen_args[1]) & 0x17;
  uVar1 = *(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[1]) & 0x17;
  if ((uVar1 != 0) && ((char)(*(undefined4 *)&gen_args[2]) == '\0')) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
      }
    }
    else {
      uVar1 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_00479730 */
unsigned int F_00479730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  *(uint *)((*(int *)&gen_args[0]) + 0xc) = (*(uint *)&gen_args[1]) & 0x17;
  uVar1 = *(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[1]) & 0x17;
  if (uVar1 != 0) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
      }
    }
    else {
      uVar1 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_004797a0 */
uint F_004797a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4797a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined * p_Var2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x201;
  *(undefined4 *)((int)this + 0x18) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined4 *)F_004069f0(4);
  if (puVar1 != (undefined4 *)0x0) {
    p_Var2 = F_00c46017();
    *puVar1 = p_Var2;
    uVar3 = F_00c45d58();
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (*(int *)((*(uint *)(gen_frame + 0x8)) + 4) != -1) {
      *(int *)((*(uint *)(gen_frame + 0x8)) + 4) = *(int *)((*(uint *)(gen_frame + 0x8)) + 4) + 1;
    }
    uVar3 = F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
    *(undefined4 * PTR32 *)((int)this + 0x30) = puVar1;
    return uVar3;
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  return 0;
}

/* ref: std::ios_base::failure::vf0 */
uint F_00479830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1090510));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00479860 */
uint F_00479860(unsigned int gen_a0)
{
  GEN_ENTER(0x479860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    uVar1 = extraout_EAX;
  }
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00479880 */
uint F_00479880(unsigned int gen_a0)
{
  GEN_ENTER(0x479880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined * p_Var2;
  uint uVar3;
  
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x8))))) = (int)this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
  F_00c465a3((undefined *)((int)this + 4));
  puVar1 = (undefined4 *)F_004069f0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    p_Var2 = F_00c46017();
    *puVar1 = p_Var2;
    uVar3 = F_00c45d58();
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
    if (*(int *)(uVar3 + 4) != -1) {
      *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  }
  *(undefined4 * PTR32 *)((int)this + 0x38) = puVar1;
  *(int *)((int)this + 0x10) = (int)this + 8;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(undefined4 * PTR32 *)((int)this + 0x14) = (undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(undefined4 *)((int)this + 0xc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: FUN_00479940 */
byte F_00479940(unsigned int gen_a0)
{
  GEN_ENTER(0x479940u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: FUN_00479950 */
uint F_00479950(unsigned int gen_a0)
{
  GEN_ENTER(0x479950u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  return (uint)*param_1;
}

/* ref: FUN_00479960 */
byte F_00479960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479960u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf1 */
unsigned int F_00479990(unsigned int gen_a0)
{
  GEN_ENTER(0x479990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c465d4((undefined *)((int)this + 4));
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf2 */
uint F_004799a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4799a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c465dd((undefined *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_004799c0 */
uint F_004799c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4799c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  *piVar1 = *piVar1 - param_1;
  **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + param_1;
  return (uint)piVar1;
}

/* ref: FUN_004799e0 */
uint F_004799e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4799e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *piVar1 = *piVar1 - param_1;
  **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + param_1;
  return (uint)piVar1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf3 */
uint F_00479a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0xffffffff;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf4 */
uint F_00479a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0xffffffff;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf5 */
uint F_00479a20(void)
{
  GEN_ENTER(0x479a20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf6 */
uint F_00479a30(void)
{
  GEN_ENTER(0x479a30u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf12 */
uint F_00479a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x479a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return in_ecx;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf13 */
uint F_00479a50(void)
{
  GEN_ENTER(0x479a50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf14 */
unsigned int F_00479a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00479a70 */
uint F_00479a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x479a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00479aa0 */
ulonglong F_00479aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x479aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (**(int * PTR32 *)((int)this + 0x20) != 0) {
    return (ulonglong)**(int * PTR32 *)((int)this + 0x30);
  }
  return 0;
}

/* ref: FUN_00479ac0 */
ulonglong F_00479ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x479ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (**(int * PTR32 *)((int)this + 0x24) != 0) {
    return (ulonglong)**(int * PTR32 *)((int)this + 0x34);
  }
  return 0;
}

/* ref: FUN_00479ae0 */
uint F_00479ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x479ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x38);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
  if (puVar1 != (uint *)0x0) {
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
      iVar2 = *(int *)(uVar3 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar3 + 4) = iVar2 + -1;
      }
      iVar2 = *(int *)(uVar3 + 4);
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
      puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar3)));
      if (puVar4 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      }
    }
    this = (*(undefined * PTR32 *)(gen_frame + 0x8));
    F_00406ad0(puVar1);
  }
  uVar3 = F_00c465bd((undefined *)((int)this + 4));
  return uVar3;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf7 */
uint F_00479b60(unsigned int gen_a0)
{
  GEN_ENTER(0x479b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) + -1;
  pbVar1 = ((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  **(int * PTR32 *)((int)this + 0x20) = (int)(pbVar1 + 1);
  return (uint)*pbVar1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf8 */
uint F_00479b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x479b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint local_c;
  
  lVar1 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        local_c = (uint)lVar1;
        uVar4 = F_00479aa0(this);
        if (((longlong)uVar4 < 0) || (uVar4 == 0)) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
          if (uVar2 == 0xffffffff) {
            return local_c;
          }
          lVar1 = lVar1 + 1;
          *param_1 = (char)uVar2;
          bVar3 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 + -1 + (uint)bVar3;
          param_1 = param_1 + 1;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar4) {
            uVar4 = CONCAT44(param_3,param_2);
          }
          uVar2 = (uint)uVar4;
          F_00c46aa0(param_1,**(undefined4 * PTR32 *)((int)this + 0x20),uVar2);
          lVar1 = uVar4 + lVar1;
          bVar3 = param_2 < uVar2;
          param_2 = param_2 - uVar2;
          param_3 = (param_3 - (int)(uVar4 >> 0x20)) - (uint)bVar3;
          **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - uVar2;
          **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + uVar2;
          param_1 = param_1 + uVar2;
        }
        local_c = (uint)lVar1;
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return local_c;
      }
    }
    return local_c;
  }
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf9 */
uint F_00479c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x479c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint local_c;
  
  lVar1 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        local_c = (uint)lVar1;
        uVar4 = F_00479ac0(this);
        if (((longlong)uVar4 < 0) || (uVar4 == 0)) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,(uint)*param_1);
          if (uVar2 == 0xffffffff) {
            return local_c;
          }
          param_1 = param_1 + 1;
          lVar1 = lVar1 + 1;
          bVar3 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 + -1 + (uint)bVar3;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar4) {
            uVar4 = CONCAT44(param_3,param_2);
          }
          uVar2 = (uint)uVar4;
          F_00c46aa0(**(undefined4 * PTR32 *)((int)this + 0x24),param_1,uVar2);
          param_1 = param_1 + uVar2;
          lVar1 = uVar4 + lVar1;
          bVar3 = param_2 < uVar2;
          param_2 = param_2 - uVar2;
          param_3 = (param_3 - (int)(uVar4 >> 0x20)) - (uint)bVar3;
          **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - uVar2;
          **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + uVar2;
        }
        local_c = (uint)lVar1;
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return local_c;
      }
    }
    return local_c;
  }
  return 0;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf10 */
uint F_00479d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x479d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf11 */
uint F_00479d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x479d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00479d90 */
uint F_00479d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this + -8);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) + -8 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: basic_streambuf_DU_char_traits_D_std_std::vf0 */
uint F_00479dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00479ae0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00479e00 */
unsigned int F_00479e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x479e00u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = param_2;
  if (*(int *)(in_ecx + 0x38) == 0) {
    uVar1 = param_2 | 4;
  }
  *(uint *)(in_ecx + 0xc) = uVar1 & 0x17;
  uVar1 = *(uint *)(in_ecx + 0x10) & uVar1 & 0x17;
  if ((uVar1 != 0) && ((char)param_3 == '\0')) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
      }
    }
    else {
      uVar1 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandAction::vf0 */
uint F_00479e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandBattleMode::vf0 */
uint F_00479eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandGear::vf0 */
uint F_00479ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandAssist::vf0 */
uint F_00479f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandFollow::vf0 */
uint F_00479f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandBattleTarget::vf0 */
uint F_00479f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandTarget::vf0 */
uint F_00479fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandTargetPc::vf0 */
uint F_00479fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x479fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandTargetNpc::vf0 */
uint F_0047a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemy::vf0 */
uint F_0047a030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandRecast::vf0 */
uint F_0047a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandMarking::vf0 */
uint F_0047a090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandLoot::vf0 */
uint F_0047a0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandFaceTarget::vf0 */
uint F_0047a0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandAutoMove::vf0 */
uint F_0047a120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyNext::vf0 */
uint F_0047a150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandTargetEnemyPrev::vf0 */
uint F_0047a180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandFocus::vf0 */
uint F_0047a1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandLockon::vf0 */
uint F_0047a1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandEcho::vf0 */
uint F_0047a210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatSay::vf0 */
uint F_0047a240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatYell::vf0 */
uint F_0047a270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatShout::vf0 */
uint F_0047a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatTell::vf0 */
uint F_0047a2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatReply::vf0 */
uint F_0047a300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatParty::vf0 */
uint F_0047a330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatFC::vf0 */
uint F_0047a360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatLinkshell::vf0 */
uint F_0047a390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandSearch::vf0 */
uint F_0047a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandParty::vf0 */
uint F_0047a3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyJoin::vf0 */
uint F_0047a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyDecline::vf0 */
uint F_0047a450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyInvite::vf0 */
uint F_0047a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeave::vf0 */
uint F_0047a4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyKick::vf0 */
uint F_0047a4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeader::vf0 */
uint F_0047a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandLinkshell::vf0 */
uint F_0047a540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandFC::vf0 */
uint F_0047a570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandLookParty::vf0 */
uint F_0047a5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandComment::vf0 */
uint F_0047a5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandFaq::vf0 */
uint F_0047a600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandCheck::vf0 */
uint F_0047a630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandTrade::vf0 */
uint F_0047a660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandMateria::vf0 */
uint F_0047a690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandSalute::vf0 */
uint F_0047a6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandLegacy::vf0 */
uint F_0047a6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0047a730 */
byte F_0047a730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf7 */
byte F_0047a740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x47a740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0047a750 */
uint F_0047a750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47a750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0047a780 */
uint F_0047a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47a780u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar7;
  int * piVar8;
  uint uVar6;
  
  iVar1 = (*(int *)&gen_args[2]);
  iVar7 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[2]) == 0) {
    return 0;
  }
  (*(char *)(gen_frame + 0xb)) = '\0';
  switch((unsigned int)(uintptr_t)(*(uint *)((*(int *)&gen_args[1]) + 4) & 0xfffffffe)) {
  case 0xe: ;
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x10);
    if ((uint)((*(int *)((*(int *)&gen_args[1]) + 0x14) - iVar2) / 0x54) < 3) goto switchD_0047a7be_caseD_10;
    (*(int *)&gen_args[2]) = 0xffffffff;
    bVar3 = F_0043da00(iVar1,iVar2 + 0xa8,&(*(int *)&gen_args[2]));
    if (bVar3 == 0) {
      F_00a4cf70(*(int *)(iVar7 + 0x10) + 0xa8,10);
    }
    (*(int *)&gen_args[2]) = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    uVar6 = F_00a4cf70(*(int *)(iVar7 + 0x10) + 0x54,10);
    uVar6 = ((code *)*(gen_code32 *)((*(int *)&gen_args[2]) + 0x10))((*(undefined * PTR32 *)&gen_args[0]),iVar1,uVar6 - 1);
    cVar4 = (char)uVar6;
    break;
  default: ;
    goto switchD_0047a7be_caseD_10;
  case 0x76: ;
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x10);
    if ((uint)((*(int *)((*(int *)&gen_args[1]) + 0x14) - iVar2) / 0x54) < 5) goto switchD_0047a7be_caseD_10;
    (*(int *)(gen_frame + 0x4)) = -1;
    (*(int *)&gen_args[1]) = -1;
    bVar3 = F_0043dac0((*(int *)&gen_args[2]),iVar2 + 0x54,&(*(int *)(gen_frame + 0x4)));
    if ((bVar3 == 0) &&
       (bVar3 = F_0043da00(iVar1,*(int *)(iVar7 + 0x10) + 0x54,&(*(int *)(gen_frame + 0x4))), bVar3 != 0)) {
      (*(int *)(gen_frame + 0x4)) = -(uint)((*(int *)(gen_frame + 0x4)) != 0xa6);
    }
    bVar3 = F_0043dac0(iVar1,*(int *)(iVar7 + 0x10) + 0xfc,&(*(int *)&gen_args[1]));
    if ((bVar3 == 0) &&
       (bVar3 = F_0043da00(iVar1,*(int *)(iVar7 + 0x10) + 0xfc,&(*(int *)&gen_args[1])), bVar3 != 0)) {
      (*(int *)&gen_args[1]) = -(uint)((*(int *)&gen_args[1]) != 0xa6);
    }
    if (((*(int *)(gen_frame + 0x4)) < 0) || ((*(int *)&gen_args[1]) < 0)) goto switchD_0047a7be_caseD_10;
    uVar6 = F_00a4cf70(*(int *)(iVar7 + 0x10) + 0xa8,10);
    uVar5 = F_00a4cf70(*(int *)(iVar7 + 0x10) + 0x150,10);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]),(*(int *)(gen_frame + 0x4)),uVar6 - 1,(*(int *)&gen_args[1]),uVar5 - 1);
    cVar4 = (char)uVar6;
    break;
  case 0x7c: ;
    iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x10);
    if ((uint)((*(int *)((*(int *)&gen_args[1]) + 0x14) - iVar2) / 0x54) < 2) goto switchD_0047a7be_caseD_10;
    (*(int *)&gen_args[2]) = -1;
    bVar3 = F_0043da00(iVar1,iVar2 + 0x54,&(*(int *)&gen_args[2]));
    if (bVar3 == 0) {
      uVar6 = F_00a4cf70(*(int *)(iVar7 + 0x10) + 0x54,10);
      iVar7 = uVar6 - 1;
    }
    else {
      iVar7 = (*(int *)&gen_args[2]);
      if ((*(int *)&gen_args[2]) != 0xaa) {
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),iVar1,0xffffffff);
        cVar4 = (char)uVar6;
        break;
      }
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),iVar1,iVar7);
    cVar4 = (char)uVar6;
    break;
  case 0x82: ;
  case 0xf6: ;
    if (*(int *)((*(int *)&gen_args[1]) + 8) < 0) goto switchD_0047a7be_caseD_10;
    F_004481d0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]),(*(int *)&gen_args[1]) + 0x10,&(*(int *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x4)));
    (*(int *)&gen_args[1]) = *(int *)(&REFG(undefined, 0x12fe6d4) + ((int)*(uint *)(iVar7 + 8) >> 0x18) * 4);
    uVar6 = *(uint *)(iVar7 + 8) & 0xffffff;
    if ((*(int *)&gen_args[1]) == 1) {
      (*(int *)&gen_args[2]) = 1;
      uVar6 = F_00ac1b60(uVar6);
    }
    else if ((*(int *)&gen_args[1]) == 5) {
      if (uVar6 == 2) {
        (*(int *)&gen_args[2]) = 1;
        (*(int *)&gen_args[1]) = 1;
        uVar6 = 0x5c;
      }
      else {
        (*(int *)&gen_args[2]) = 10;
      }
    }
    else if ((*(int *)&gen_args[1]) == 9) {
      (*(int *)&gen_args[2]) = 9;
      uVar6 = F_00ac1cb0(uVar6);
    }
    else {
      (*(int *)&gen_args[2]) = -1;
    }
    bVar3 = F_00ac78f0(&REFG(undefined, 0x14bcf40),(*(int *)&gen_args[1]),uVar6);
    if ((bVar3 == 0) || ((*(int *)&gen_args[2]) < 0)) goto switchD_0047a7be_caseD_10;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),iVar1,(*(int *)&gen_args[2]),uVar6,(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
    cVar4 = (char)uVar6;
    break;
  case 0xa6: ;
    if ((uint)((*(int *)((*(int *)&gen_args[1]) + 0x14) - *(int *)((*(int *)&gen_args[1]) + 0x10)) / 0x54) < 2)
    goto switchD_0047a7be_caseD_10;
    uVar6 = F_00a4cf70(*(int *)((*(int *)&gen_args[1]) + 0x10) + 0x54,10);
    iVar1 = *(int *)(iVar7 + 0x10);
    iVar7 = *(int *)(iVar7 + 0x14);
    (*(int *)&gen_args[1]) = 2;
    if ((2 < (uint)((iVar7 - iVar1) / 0x54)) &&
       (bVar3 = F_0043da00((*(int *)&gen_args[2]),iVar1 + 0xa8,&(*(int *)(gen_frame + 0x0))), bVar3 != 0)) {
      if ((*(int *)(gen_frame + 0x0)) == 0) {
        (*(int *)&gen_args[1]) = 0;
      }
      else if ((*(int *)(gen_frame + 0x0)) == 2) {
        (*(int *)&gen_args[1]) = 1;
      }
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]),uVar6 - 1,(*(int *)&gen_args[1]));
    cVar4 = (char)uVar6;
    break;
  case 0xa8: ;
    if ((uint)((*(int *)((*(int *)&gen_args[1]) + 0x14) - *(int *)((*(int *)&gen_args[1]) + 0x10)) / 0x54) < 2)
    goto switchD_0047a7be_caseD_10;
    uVar6 = F_00a4cf70(*(int *)((*(int *)&gen_args[1]) + 0x10) + 0x54,10);
    (*(int *)(gen_frame + 0x0)) = uVar6 - 1;
    if ((int)(uVar6 - 1) < 0) goto switchD_0047a7be_caseD_10;
    iVar2 = *(int *)(iVar7 + 0x10);
    iVar7 = *(int *)(iVar7 + 0x14);
    (*(int *)&gen_args[2]) = 2;
    if ((2 < (uint)((iVar7 - iVar2) / 0x54)) &&
       (bVar3 = F_0043da00(iVar1,iVar2 + 0xa8,&(*(int *)&gen_args[1])), bVar3 != 0)) {
      if ((*(int *)&gen_args[1]) == 0) {
        (*(int *)&gen_args[2]) = 0;
      }
      else if ((*(int *)&gen_args[1]) == 2) {
        (*(int *)&gen_args[2]) = 1;
      }
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))((*(undefined * PTR32 *)&gen_args[0]),iVar1,(*(int *)(gen_frame + 0x0)),(*(int *)&gen_args[2]));
    cVar4 = (char)uVar6;
    break;
  case 0xf8: ;
    piVar8 = (int *)((*(int *)&gen_args[1]) + 0x10);
    if (((uint)((*(int *)((*(int *)&gen_args[1]) + 0x14) - *(int *)((*(int *)&gen_args[1]) + 0x10)) / 0x54) < 2) ||
       (bVar3 = F_0043dc10((*(int *)&gen_args[2]),*piVar8 + 0x54,&(*(int *)(gen_frame + 0x0))), bVar3 == 0))
    goto switchD_0047a7be_caseD_10;
    F_004481d0((*(undefined * PTR32 *)&gen_args[0]),iVar1,piVar8,&(*(int *)&gen_args[1]),&(*(int *)&gen_args[2]));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),iVar1,2,(*(int *)(gen_frame + 0x0)),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]));
    cVar4 = (char)uVar6;
  }
  (*(char *)(gen_frame + 0xb)) = cVar4;
switchD_0047a7be_caseD_10: ;
  return ((*(char *)(gen_frame + 0xb)) != '\0') - 1 & 7;
}

/* ref: Client::UI::Shell::ShellCommandHotbarDisplay::vf0 */
uint F_0047ad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47ad80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandInventory::vf0 */
uint F_0047adb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47adb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandLogout::vf0 */
uint F_0047ade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandShutdown::vf0 */
uint F_0047ae10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47ae10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandHud::vf0 */
uint F_0047ae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47ae40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandChatlog::vf0 */
uint F_0047ae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47ae70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandBattleEffect::vf0 */
uint F_0047aea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47aea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandEmote::vf0 */
uint F_0047aed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47aed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandGM::vf0 */
uint F_0047af00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47af00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905d8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0047afa0 */
byte F_0047afa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47afa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_0047afc0 */
byte F_0047afc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47afc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_0047aff0 */
uint F_0047aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x18) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 0x18;
}

/* ref: FUN_0047b030 */
byte F_0047b030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b0c0 */
byte F_0047b0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b0e0 */
uint F_0047b0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (0xf < *(uint *)((int)this + 0x14)) {
    return param_1 + *(int *)this;
  }
  return (int)this + param_1;
}

/* ref: FUN_0047b120 */
byte F_0047b120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_0047b140 */
byte F_0047b140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_0047b160 */
byte F_0047b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b180 */
byte F_0047b180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0047b200 */
uint F_0047b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x71))) == '\0') {
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

/* ref: FUN_0047b260 */
uint F_0047b260(unsigned int gen_a0)
{
  GEN_ENTER(0x47b260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_0047b2a0 */
uint F_0047b2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x47b2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0047b2e0 */
uint F_0047b2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b2e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047b340 */
uint F_0047b340(unsigned int gen_a0)
{
  GEN_ENTER(0x47b340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0047b370 */
uint F_0047b370(unsigned int gen_a0)
{
  GEN_ENTER(0x47b370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = F_004069f0(param_1), uVar1 == 0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_0047b3e0 */
uint F_0047b3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x71))) == '\0') {
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

/* ref: FUN_0047b440 */
uint F_0047b440(unsigned int gen_a0)
{
  GEN_ENTER(0x47b440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0047b480 */
uint F_0047b480(unsigned int gen_a0)
{
  GEN_ENTER(0x47b480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * _Dst;
  
  F_00479880(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x1091164));
  F_0042b630((int)this + 0x3c);
  _Dst = (undefined *)((int)this + 0x90);
  F_00c48350(_Dst,-1,0x40);
  **(undefined4 * PTR32 *)((int)this + 0x14) = _Dst;
  **(undefined4 * PTR32 *)((int)this + 0x24) = _Dst;
  **(int * PTR32 *)((int)this + 0x34) = (int)this + (0xcf - (int)_Dst);
  return (uint)this;
}

/* ref: FUN_0047b4d0 */
uint F_0047b4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x47b4d0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  return -(uint)(*param_1 != 0xffffffff) & *param_1;
}

/* ref: FUN_0047b4f0 */
uint F_0047b4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x47b4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * _Dst;
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *((undefined1 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x24))) = 0;
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)this + 0x14),REFG(undefined4, 0x108cc50));
  F_0042e360((undefined *)((int)this + 0x3c),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  _Dst = (undefined *)((int)this + 0x90);
  F_00c48350(_Dst,-1,0x40);
  **(undefined4 * PTR32 *)((int)this + 0x14) = _Dst;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *puVar1 = _Dst;
  **(int * PTR32 *)((int)this + 0x34) = (int)this + (0xcf - (int)_Dst);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)puVar1;
}

/* ref: FUN_0047b570 */
uint F_0047b570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047b580 */
uint F_0047b580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0047b5e0 */
uint F_0047b5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x41))) == '\0') {
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

/* ref: FUN_0047b640 */
uint F_0047b640(unsigned int gen_a0)
{
  GEN_ENTER(0x47b640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_0047b680 */
uint F_0047b680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47b680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047b690 */
uint F_0047b690(unsigned int gen_a0)
{
  GEN_ENTER(0x47b690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00473080(this);
  return (uint)this;
}

/* ref: FUN_0047b6a0 */
uint F_0047b6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47b6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047b6c0 */
byte F_0047b6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0047b6f0 */
uint F_0047b6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x47b6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00473110(this);
  return (uint)this;
}

/* ref: FUN_0047b720 */
byte F_0047b720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_0047b760 */
uint F_0047b760(unsigned int gen_a0)
{
  GEN_ENTER(0x47b760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004731e0(this);
  return (uint)this;
}

/* ref: FUN_0047b770 */
uint F_0047b770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47b770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047b780 */
unsigned int F_0047b780(unsigned int gen_a0)
{
  GEN_ENTER(0x47b780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0xe) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xe) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xe);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0xe);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xe);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0047b7f0 */
uint F_0047b7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x47b7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 _MaxCount;
  
  if ((param_3 != 0) || (uVar3 = param_2, *(uint *)((int)this + 0x10) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x10)) &&
       (uVar3 = *(uint *)((int)this + 0x10) - param_2, param_3 <= uVar3)) {
      _MaxCount = uVar3 + (1 - param_3);
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      pvVar2 = (undefined *)((int)pvVar2 + param_2);
      pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      while (pvVar1 != (undefined *)0x0) {
        uVar3 = F_0040d320(pvVar1,param_1,param_3);
        if (uVar3 == 0) {
          if (0xf < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pvVar1 - (int)this;
        }
        _MaxCount = (int)pvVar2 + ((_MaxCount - 1) - (int)pvVar1);
        pvVar2 = (undefined *)((int)pvVar1 + 1);
        pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_0047b8a0 */
uint F_0047b8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x47b8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0047b8b0 */
unsigned int F_0047b8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47b8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x192);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return 0;
}

/* ref: FUN_0047b970 */
uint F_0047b970(unsigned int gen_a0)
{
  GEN_ENTER(0x47b970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00473360(this);
  return (uint)this;
}

/* ref: FUN_0047b980 */
uint F_0047b980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047b990 */
uint F_0047b990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47b990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0047bac0 */
uint F_0047bac0(unsigned int gen_a0)
{
  GEN_ENTER(0x47bac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0047bc40 */
uint F_0047bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_0047bc60 */
uint F_0047bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47bc60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0047bca0 */
uint F_0047bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x71);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4,param_1);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x71);
  }
  return (uint)puVar2;
}

/* ref: FUN_0047bce0 */
uint F_0047bce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x71);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4,param_1);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x71);
  }
  return (uint)puVar2;
}

/* ref: FUN_0047bd20 */
undefined4 * F_0047bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x69) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x69) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0047bd70 */
undefined4 * F_0047bd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0047bda0 */
uint F_0047bda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bda0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047bdd0 */
uint F_0047bdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x71);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_1);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x71);
  }
  return (uint)puVar2;
}

/* ref: FUN_0047be20 */
uint F_0047be20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47be20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047be70 */
uint F_0047be70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47be70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047be90 */
uint F_0047be90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47be90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047bed0 */
uint F_0047bed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x41) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x41) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_0047bf40 */
uint F_0047bf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bf40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0047bf70 */
uint F_0047bf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47bf70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047bf80 */
uint F_0047bf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47bf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047bf90 */
uint F_0047bf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47bf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_0047bfb0 */
uint F_0047bfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47bfb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0047bff0 */
uint F_0047bff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47bff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c000 */
uint F_0047c000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c010 */
unsigned int F_0047c010(unsigned int gen_a0)
{
  GEN_ENTER(0x47c010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x69) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x69) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x69);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x69);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x69);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x69);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0047c060 */
uint F_0047c060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c060u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0047c0a0 */
uint F_0047c0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c0d0 */
uint F_0047c0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_0047c110 */
uint F_0047c110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c130 */
uint F_0047c130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xa8;
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

/* ref: FUN_0047c170 */
uint F_0047c170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c170u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0047c1b0 */
uint F_0047c1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c1c0 */
uint F_0047c1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c1c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c1d0 */
uint F_0047c1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c1e0 */
uint F_0047c1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c200 */
uint F_0047c200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x69) == '\0') {
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

/* ref: FUN_0047c260 */
uint F_0047c260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x69))) == '\0') {
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

/* ref: FUN_0047c320 */
uint F_0047c320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00473080(this);
  return (uint)param_1;
}

/* ref: FUN_0047c340 */
uint F_0047c340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00473110(this);
  return (uint)param_1;
}

/* ref: FUN_0047c360 */
uint F_0047c360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_004731e0(this);
  return (uint)param_1;
}

/* ref: FUN_0047c380 */
uint F_0047c380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + uVar5 + param_1,uVar2 - uVar5)
    ;
    iVar3 = *(int *)((int)this + 0x10) - uVar5;
    *(int *)((int)this + 0x10) = iVar3;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + iVar3) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + iVar3) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0047c420 */
uint F_0047c420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 | 0xf;
  uVar5 = param_1;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    uVar5 = uVar4;
    if ((uVar4 / 3 < uVar2) && (uVar5 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar5 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(uVar5 + 1,0,0x192);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x192);
  }
  *(undefined1 *)this = 0;
  *(uint *)this = uVar4;
  *(uint *)((int)this + 0x14) = uVar5;
  *(int *)((int)this + 0x10) = param_2;
  if (uVar5 < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return uVar4;
  }
  *(undefined1 *)(uVar4 + param_2) = 0;
  return uVar4;
}

/* ref: FUN_0047c4e0 */
uint F_0047c4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00473360(this);
  return (uint)param_1;
}

/* ref: FUN_0047c530 */
uint F_0047c530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_0047c550 */
uint F_0047c550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c550u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0047c590 */
uint F_0047c590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c590u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0047c5d0 */
byte F_0047c5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c5f0 */
byte F_0047c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c610 */
byte F_0047c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c630 */
uint F_0047c630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0xe) == '\0') {
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

/* ref: FUN_0047c690 */
uint F_0047c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x71) == '\0') {
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

/* ref: FUN_0047c6f0 */
uint F_0047c6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x71))) == '\0') {
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

/* ref: FUN_0047c750 */
uint F_0047c750(unsigned int gen_a0)
{
  GEN_ENTER(0x47c750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00473f10(this);
  return (uint)this;
}

/* ref: FUN_0047c780 */
uint F_0047c780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c790 */
byte F_0047c790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c7b0 */
uint F_0047c7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47c7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047c7c0 */
uint F_0047c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x47c7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  short local_8;
  
  sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 0xc) + 1)));
  if (*(char *)((int)this + 0x12) != '\0') {
    local_8 = CONCAT11((char)sVar1,(char)((ushort)sVar1 >> 8));
    sVar1 = local_8;
  }
  uVar2 = (uint)(ushort)(sVar1 + 3) + *(int *)((int)this + 0xc);
  if (*(uint *)((int)this + 8) <= uVar2) {
    return 0xffffffff;
  }
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = *(int *)((int)this + 0x14) + 1;
  *(uint *)((int)this + 0x14) = uVar2;
  return uVar2;
}

/* ref: FUN_0047c800 */
uint F_0047c800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x58) = *param_2;
  *(undefined4 *)((int)this + 0x5c) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0047c830 */
uint F_0047c830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  return (uint)this;
}

/* ref: FUN_0047c860 */
uint F_0047c860(unsigned int gen_a0)
{
  GEN_ENTER(0x47c860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)(byte)(*((char *)GEN_TOP((*(int *)((int)this + 0xc) + 1))) + 2) + *(int *)((int)this + 0xc);
  if (*(uint *)((int)this + 8) <= uVar1) {
    return 0xffffffff;
  }
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = *(int *)((int)this + 0x14) + 1;
  *(uint *)((int)this + 0x14) = uVar1;
  return uVar1;
}

/* ref: FUN_0047c890 */
uint F_0047c890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cc20((undefined *)((int)this + 4),param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c8c0 */
uint F_0047c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047c8e0 */
uint F_0047c8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x54),param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c920 */
uint F_0047c920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x54),param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c960 */
uint F_0047c960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x54),param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c9a0 */
uint F_0047c9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x54),param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c9e0 */
uint F_0047c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x54),param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047ca20 */
uint F_0047ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x47ca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x474710));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_0047ca50 */
uint F_0047ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47ca50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_0047ca90 */
unsigned int F_0047ca90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47ca90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_0047cab0 */
unsigned int F_0047cab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47cab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_0047cad0 */
unsigned int F_0047cad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47cad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_0047caf0 */
uint F_0047caf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47caf0u, gen_a0, gen_a1, gen_a2, 0u);
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
  return (uint)param_2;
}

/* ref: FUN_0047cb50 */
unsigned int F_0047cb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47cb50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00560a60(param_2,param_3);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0047cb90 */
unsigned int F_0047cb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47cb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0047cbc0 */
unsigned int F_0047cbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0047cc30 */
unsigned int F_0047cc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47cc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0047ccd0 */
uint F_0047ccd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47ccd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047ccf0 */
uint F_0047ccf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047cd20 */
uint F_0047cd20(unsigned int gen_a0)
{
  GEN_ENTER(0x47cd20u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_0047cd30 */
unsigned int F_0047cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_0047cd60 */
uint F_0047cd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x47cd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00406b90(0x58,0,0);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    *(undefined4 *)((int)this_00 + 0x54) = 1;
    *(undefined * PTR32 *)this = this_00;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  return (uint)this;
}

