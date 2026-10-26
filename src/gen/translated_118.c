#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00aad3a0 */
byte F_00aad3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2dea) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad3b0 */
byte F_00aad3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad3b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x2deb) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x2deb) = *(byte *)(in_ecx + 0x2deb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00aad3d0 */
byte F_00aad3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad3d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x194) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad3f0 */
byte F_00aad3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad3f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2e0a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad420 */
uint F_00aad420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaad420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((byte)param_1 + 0x2db8 + (int)this) = (undefined1)param_2;
  return (uint)(byte)param_1;
}

/* ref: FUN_00aad440 */
byte F_00aad440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2eaa) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad480 */
uint F_00aad480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2eac) = param_2;
  return param_2;
}

/* ref: FUN_00aad490 */
byte F_00aad490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x2ebd + in_ecx);
}

/* ref: FUN_00aad4b0 */
byte F_00aad4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaad4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x2ebd + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad4e0 */
byte F_00aad4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2ecd) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad4f0 */
byte F_00aad4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2ecf) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad500 */
byte F_00aad500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2ece) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad510 */
unsigned int F_00aad510(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaad510u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2ed0) = param_2;
  return 0;
}

/* ref: FUN_00aad530 */
byte F_00aad530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0x2dd3)) & 8;
  *(byte *)(in_ecx + 0x2dd3) = *(byte *)(in_ecx + 0x2dd3) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00aad550 */
uint F_00aad550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2ef8) = param_2;
  return param_2;
}

/* ref: FUN_00aad560 */
byte F_00aad560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f02) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aad5f0 */
uint F_00aad5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2f10) = param_2;
  return param_2;
}

/* ref: FUN_00aad660 */
uint F_00aad660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)this;
  *(uint *)this = CONCAT22((undefined2)param_1,uVar1);
  return CONCAT22((undefined2)param_1,uVar1);
}

/* ref: FUN_00aad680 */
uint F_00aad680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this & 0xffff0000 | (uint)(ushort)param_1;
  *(uint *)this = uVar1;
  return uVar1;
}

/* ref: FUN_00aad6a0 */
unsigned int F_00aad6a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaad6a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb07c) = param_2;
  return 0;
}

/* ref: FUN_00aad6f0 */
uint F_00aad6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad6f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x140) = *param_2;
  *(undefined4 *)(in_ecx + 0x144) = param_2[1];
  *(undefined4 *)(in_ecx + 0x148) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aad720 */
uint F_00aad720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x150) = *param_2;
  *(undefined4 *)(in_ecx + 0x154) = param_2[1];
  *(undefined4 *)(in_ecx + 0x158) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aad760 */
uint F_00aad760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aad780 */
uint F_00aad780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00a65220(this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  uVar1 = F_005320c0(this,param_1);
  return uVar1;
}

/* ref: FUN_00aad7b0 */
uint F_00aad7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad7b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x38) = 0;
  *(undefined1 *)(in_ecx + 0x3c) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x4c) = 0;
  *(undefined4 *)(in_ecx + 0x50) = 0;
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x48) = 0xe0000000;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00aad7e0 */
uint F_00aad7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  *(undefined4 *)(in_ecx + 0x24) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x2c) = 0;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0;
  *(undefined4 *)(in_ecx + 0x38) = 0;
  *(undefined4 *)(in_ecx + 0x3c) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x44) = 0;
  *(undefined4 *)(in_ecx + 0x48) = 0;
  *(undefined4 *)(in_ecx + 0x4c) = 0;
  *(undefined4 *)(in_ecx + 0x50) = 0;
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 100) = 0;
  *(undefined1 *)(in_ecx + 0x60) = 0;
  *(undefined1 *)(in_ecx + 200) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(uint *)(in_ecx + 0x10) = param_2;
  F_00534450(in_ecx);
  return param_2;
}

/* ref: FUN_00aad840 */
unsigned int F_00aad840(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaad840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00aad860 */
unsigned int F_00aad860(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaad860u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1c) = param_2;
  return 0;
}

/* ref: FUN_00aad880 */
unsigned int F_00aad880(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaad880u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00aad8a0 */
uint F_00aad8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x18) = *param_2;
  *(undefined4 *)(in_ecx + 0x1c) = param_2[1];
  *(undefined4 *)(in_ecx + 0x20) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::Game::Character::Companion::VfxList::vf0 */
uint F_00aad8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e6dc4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00aad910 */
uint F_00aad910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  *(undefined1 *)(in_ecx + 0x40) = 1;
  return (uint)param_2;
}

/* ref: FUN_00aad930 */
ushort F_00aad930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') << 7 | *(ushort *)((int)this + 0x70) & 0xff7f;
  *(ushort *)((int)this + 0x70) = uVar1;
  return uVar1;
}

/* ref: FUN_00aad960 */
ushort F_00aad960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') << 3 | *(ushort *)((int)this + 0x70) & 0xfff7;
  *(ushort *)((int)this + 0x70) = uVar1;
  return uVar1;
}

/* ref: FUN_00aad9b0 */
uint F_00aad9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaad9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00a65110(this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 *)((int)this + 0x200) = this;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  F_00a65a30((undefined *)((int)this + 0x1f0),1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))))((int)this + 0x1c4,this);
  uVar1 = F_00aeb090((int)this + 0x310,this);
  *(undefined * PTR32 *)((int)this + 0x460) = this;
  return uVar1;
}

/* ref: FUN_00aada10 */
uint F_00aada10(unsigned int gen_a0)
{
  GEN_ENTER(0xaada10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a65110(this);
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  F_00a65a30((undefined *)((int)this + 0x1f0),1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 8))))((int)this + 0x1c4);
  uVar1 = F_00aeb090((int)this + 0x310,0);
  *(undefined4 *)((int)this + 0x460) = 0;
  return uVar1;
}

/* ref: FUN_00aada60 */
uint F_00aada60(unsigned int gen_a0)
{
  GEN_ENTER(0xaada60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a665b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e874c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e8740));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f3c) = (*(undefined * PTR32 (*)[2])REFP(0x10e8730));
  return (uint)this;
}

/* ref: FUN_00aada90 */
uint F_00aada90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaada90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aadac0((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: Client::Game::Character::Companion::vf45 */
uint F_00aadac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaadac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e874c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e8740));
  *(undefined * PTR32 * PTR32 *)(this + 0x2f3c) = (*(undefined * PTR32 (*)[2])REFP(0x10e6dc4));
  F_00aa98a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Input::ClipBoardInterface::vf1 */
unsigned int F_00aadb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaadb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Input::ClipBoardInterface::vf2 */
uint F_00aadb20(void)
{
  GEN_ENTER(0xaadb20u, 0u, 0u, 0u, 0u);
  return 0x12fd328;
}

/* ref: Client::System::Input::ClipBoardInterface::vf0 */
uint F_00aadb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaadb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e8834));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Input::ClipBoard::vf2 */
uint F_00aadb70(unsigned int gen_a0)
{
  GEN_ENTER(0xaadb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE hMem;
  LPVOID pvVar4;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  iVar2 = gen_imp_GetPriorityClipboardFormat((UINT *)&REFG(undefined, 0x13361cc),2);
  if (0 < iVar2) {
    BVar3 = gen_imp_OpenClipboard((HWND)0x0);
    if (BVar3 != 0) {
      this_00 = this + 4;
      F_0042aca0(this_00);
      hMem = gen_imp_GetClipboardData(0xd);
      if (hMem != (HANDLE)0x0) {
        pvVar4 = gen_imp_GlobalLock(hMem);
        F_0042cef0(this_00,pvVar4);
        uVar6 = REFG(undefined4, 0x108cc50);
        uVar5 = F_0042a990(this_00);
        bVar1 = F_0042a800(uVar5,uVar6);
        if (bVar1 == 0) {
          F_0042aca0(this_00);
        }
        gen_imp_GlobalUnlock(hMem);
      }
      gen_imp_CloseClipboard();
      return (uint)this_00;
    }
  }
  F_0042aca0(this + 4);
  return (uint)(this + 4);
}

/* ref: FUN_00aadc00 */
uint F_00aadc00(unsigned int gen_a0)
{
  GEN_ENTER(0xaadc00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e8844));
  F_0042b630(in_ecx + 1);
  return (uint)in_ecx;
}

/* ref: FUN_00aadc20 */
uint F_00aadc20(unsigned int gen_a0)
{
  GEN_ENTER(0xaadc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e8844));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e8834));
  return (uint)uVar1;
}

/* ref: Client::System::Input::ClipBoard::vf1 */
uint F_00aadc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaadc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  short sVar1;
  short * PTR32 * PTR32 * pppsVar2;
  BOOL BVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  short * PTR32 * PTR32 * PTR32 * ppppsVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  if (*(char *)*param_1 != '\0') {
    BVar3 = gen_imp_OpenClipboard((HWND)0x0);
    pppsVar2 = ((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
    if (BVar3 != 0) {
      (*(undefined2 *)((char *)&((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] + 0)) = 0;
      ((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (short * PTR32 * PTR32 *)((uint)pppsVar2 & 0xffff0000);
      (*(uint *)(gen_frame + 0x70)) = 7;
      (*(int *)(gen_frame + 0x6c)) = 0;
      F_0042eae0(param_1,((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)));
      F_0042e2f0(((undefined1 *)(gen_frame + 0x8)),((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c)));
      F_0042ccf0(param_2,((undefined1 *)(gen_frame + 0x8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      hMem = gen_imp_GlobalAlloc(0x2042,(*(int *)(gen_frame + 0x6c)) * 2 + 0x11U & 0xfffffff0);
      ppppsVar7 = (short * PTR32 * PTR32 * PTR32 *)((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0];
      if ((*(uint *)(gen_frame + 0x70)) < 8) {
        ppppsVar7 = ((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c));
      }
      pvVar4 = gen_imp_GlobalLock(hMem);
      iVar5 = (int)pvVar4 - (int)ppppsVar7;
      do {
        sVar1 = *(short *)ppppsVar7;
        *(short *)(iVar5 + (int)ppppsVar7) = sVar1;
        ppppsVar7 = (short * PTR32 * PTR32 * PTR32 *)((int)ppppsVar7 + 2);
      } while (sVar1 != 0);
      gen_imp_GlobalUnlock(hMem);
      gen_imp_SetClipboardData(0xd,hMem);
      gen_imp_CloseClipboard();
      uVar6 = (*(uint *)(gen_frame + 0x70));
      if (7 < (*(uint *)(gen_frame + 0x70))) {
        uVar8 = F_00429760(((short * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x5c))[0],(*(uint *)(gen_frame + 0x70)) * 2 + 2,0x3d);
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return (uint)uVar8;
      }
      goto LAB_00aadd39;
    }
  }
  uVar6 = F_0042aca0(param_2);
LAB_00aadd39: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar6;
}

/* ref: Client::System::Input::ClipBoard::vf0 */
uint F_00aadd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaadd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e8844));
  F_0042c880(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e8834));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00aadd80 */
float10 F_00aadd80(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xaadd80u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c4d1fa((float10)param_2);
  return (float10)(float)fVar1;
}

/* ref: FUN_00aadda0 */
byte F_00aadda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaadda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aaddb0 */
unsigned int F_00aaddb0(float gen_a0)
{
  GEN_ENTER(0xaaddb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00aaddd0 */
unsigned int F_00aaddd0(float gen_a0)
{
  GEN_ENTER(0xaaddd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00aadde0 */
unsigned int F_00aadde0(unsigned int gen_a0)
{
  GEN_ENTER(0xaadde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined1 * puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x3568);
  iVar3 = 200;
  puVar2 = this;
  do {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 0x40) = 0xe0000000;
    *(undefined1 *)(puVar1 + -0x10) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = puVar2 + 0x44;
    puVar1 = puVar1 + 0x12;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x3520) = 0;
  *(undefined4 *)((int)this + 0x6d68) = 0;
  *(undefined1 *)((int)this + 0x6d6c) = 0;
  *(undefined4 *)((int)this + 0x6d70) = 0;
  return 0;
}

/* ref: FUN_00aade30 */
unsigned int F_00aade30(void)
{
  GEN_ENTER(0xaade30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00aade40 */
uint F_00aade40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaade40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x40);
  do {
    if (*piVar2 == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x11;
  } while ((int)uVar1 < 200);
  return 0xffffffff;
}

/* ref: FUN_00aade70 */
uint F_00aade70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaade70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x40);
  do {
    if (*piVar2 == param_1) {
      if (uVar1 != 0xffffffff) {
        return uVar1;
      }
      break;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x11;
  } while ((int)uVar1 < 200);
  *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x3520) * 0x44 + 0x40))) = param_1;
  uVar1 = F_00c49908(((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x3520) * 0x44))),0x40,param_2);
  *(int *)((int)this + 0x3520) = *(int *)((int)this + 0x3520) + 1;
  if (199 < *(int *)((int)this + 0x3520)) {
    *(undefined4 *)((int)this + 0x3520) = 0;
  }
  return uVar1;
}

/* ref: FUN_00aadef0 */
uint F_00aadef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaadef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x3568);
  while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x12;
    if (199 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00aadf20 */
uint F_00aadf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaadf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0x3568);
  while ((*piVar1 != param_1 || (piVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x12;
    if (199 < iVar2) {
LAB_00aadf52: ;
      iVar2 = *(int *)((int)this + 0x6d68);
      *(int *)((int)this + iVar2 * 0x48 + 0x3568) = param_1;
      *(int *)((int)this + iVar2 * 0x48 + 0x356c) = param_2;
      piVar1 = (int *)F_00c49908(((undefined *)GEN_TOP(((int)this + (*(int *)((int)this + 0x6d68) * 9 + 0x6a5) * 8)))
                                ,0x40,param_3);
      *(int *)((int)this + 0x6d68) = *(int *)((int)this + 0x6d68) + 1;
      if (199 < *(int *)((int)this + 0x6d68)) {
        *(undefined4 *)((int)this + 0x6d68) = 0;
        *(undefined1 *)((int)this + 0x6d6c) = 0;
        return 0;
      }
LAB_00aadfaf: ;
      *(undefined1 *)((int)this + 0x6d6c) = 0;
      return (uint)piVar1;
    }
  }
  if (iVar2 != -1) goto LAB_00aadfaf;
  goto LAB_00aadf52;
}

/* ref: FUN_00aadfc0 */
uint F_00aadfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaadfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
  if (uVar1 != 0) {
    F_00aade70(this,param_1,uVar1 + 0x10);
    return uVar1 + 0x10;
  }
  piVar2 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
    piVar2 = (int *)((int)this + 0x40);
    do {
      if (*piVar2 == param_1) {
        if (iVar3 == -1) {
          return 0x10e88df;
        }
        return (uint)(undefined *)((int)this + iVar3 * 0x44);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x11;
    } while (iVar3 < 200);
    return 0x10e88df;
  }
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  F_00aade70(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00aae060 */
uint F_00aae060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaae060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (param_1 == 0 && param_2 == 0) {
    return 0;
  }
  if ((REFG(int, 0x14ab0c8) == param_1) && (REFG(int, 0x14ab0cc) == param_2)) {
    return 0x14ab071;
  }
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x3568);
  while ((*piVar2 != param_1 || (piVar2[1] != param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x12;
    if (199 < iVar1) {
LAB_00aae0b4: ;
      if (*(char *)((int)this + 0x6d6c) == '\0') {
        F_00a512b0(0x1c,param_1,param_2,0,0,0,0);
        *(undefined1 *)((int)this + 0x6d6c) = 1;
      }
      return 0;
    }
  }
  if (iVar1 != -1) {
    return (uint)((undefined *)GEN_TOP(((int)this + (iVar1 * 9 + 0x6a5) * 8)));
  }
  goto LAB_00aae0b4;
}

/* ref: FUN_00aae100 */
uint F_00aae100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xaae100u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[8] = (undefined4)gen_fl2bits(param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00aae3b0 */
uint F_00aae3b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaae3b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)0 - (float10)0);
  if ((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)param_2[2] -
                                                            (float10)param_1[2]) *
                                            (float10)(float)((float10)param_2[2] -
                                                            (float10)param_1[2]) +
                                           ((float10)(float)((float10)*param_2 - (float10)*param_1)
                                            * (float10)(float)((float10)*param_2 - (float10)*param_1
                                                              ) + fVar1 * fVar1))))))) <=
      (float10)param_3) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aae450 */
uint F_00aae450(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaae450u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a5feb0(param_2);
  uVar2 = F_00a5feb0(param_1);
  uVar1 = F_00aae3b0(uVar2,uVar1,param_3);
  return uVar1;
}

/* ref: FUN_00aae480 */
uint F_00aae480(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xaae480u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  
  fVar1 = (float)((float10)param_2[2] - (float10)param_1[2]);
  bVar2 = GEN_ISNAN((float10)(float)((float10)*param_2 - (float10)*param_1)) || GEN_ISNAN((float10)0);
  if (bVar2 != (bVar2 || (float10)(float)((float10)*param_2 - (float10)*param_1) == (float10)0)) {
    bVar2 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar3 = bVar2 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
    if (bVar2 != bVar3) {
      return CONCAT31(CONCAT21((short)((uint)((int)(uintptr_t)param_2) >> 0x10),
                               bVar3 << 6 | bVar2 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1)),1
                     );
    }
  }
  fVar4 = F_00c4d1fa((float10)fVar1);
  if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)(float)fVar4 - (float10)param_3)))) <=
      (float10)param_4) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aae5d0 */
uint F_00aae5d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaae5d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 4) -
                                          (float10)*(float *)(param_1 + 4))))))) <= (float10)param_3) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aae6b0 */
float10 F_00aae6b0(float gen_a0)
{
  GEN_ENTER(0xaae6b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)&REFG(undefined, 0x1336398);
  fVar2 = (float10)((float)GEN_TOF(((float10)param_1 -
                          (float10)(int)((float10)param_1 / fVar1) *
                          (float10)*(double *)&REFG(undefined, 0x1080228))));
  if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar2) {
    fVar2 = (float10)(float)(fVar2 - fVar1);
  }
  if (fVar2 < (float10)*(double *)&REFG(undefined, 0x109c9b8)) {
    return (float10)(float)(fVar1 + fVar2);
  }
  return fVar2;
}

/* ref: FUN_00aae710 */
float10 F_00aae710(float gen_a0)
{
  GEN_ENTER(0xaae710u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = (float10)param_1;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1080228);
  uVar2 = (uint)(fVar5 / fVar6);
  fVar7 = (float10)((float)GEN_TOF(ABS(fVar5)));
  fVar1 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar1)) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar1)) || fVar7 == fVar1)) {
    return fVar1;
  }
  uVar3 = uVar2 & 0x80000001;
  bVar4 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar4 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar4) {
    return (float10)(float)(fVar5 - fVar6 * (float10)(int)uVar2);
  }
  return (float10)((float)GEN_TOF((fVar5 - ((float10)(int)uVar2 + (float10)(float)(fVar5 / fVar7)) * fVar6)));
}

/* ref: FUN_00aae7a0 */
float F_00aae7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaae7a0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  (*(float *)(gen_frame + 0x0)) = *param_1;
  (*(float *)(gen_frame + 0x8)) = param_1[2];
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  pfVar3 = (float *)F_0046f390(&(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x0)) = *pfVar3;
  (*(float *)(gen_frame + 0x4)) = pfVar3[1];
  (*(float *)(gen_frame + 0x8)) = pfVar3[2];
  pfVar3 = (float *)F_0046f390(&(*(float *)(gen_frame + 0x10)));
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = pfVar3[1];
  (*(float *)(gen_frame + 0x18)) = pfVar3[2];
  fVar1 = ((float)GEN_TOF(((float10)pfVar3[2] * (float10)(*(float *)(gen_frame + 0x8)) +
                 ((float10)pfVar3[1] * (float10)(*(float *)(gen_frame + 0x4)) + (float10)fVar1 * (float10)(*(float *)(gen_frame + 0x0))))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  if ((float10)1 <= (float10)fVar1) {
    return (float)(float10)0;
  }
  if (fVar1 <= REFG(float, 0x1090708)) {
    return *(float *)&REFG(undefined, 0x10e9090);
  }
  fVar4 = F_00c4c8d0(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,(float10)fVar1);
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  if ((float10)0 < (float10)fVar2) {
    (*(float *)(gen_frame + 0x2c)) = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  }
  return (*(float *)(gen_frame + 0x2c));
}

/* ref: FUN_00aae8c0 */
unsigned int F_00aae8c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaae8c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_2)));
  *param_1 = (float)fVar1;
  param_1[1] = 0.0;
  fVar1 = ((float10)GEN_TOD(fcos((float10)param_2)));
  param_1[2] = (float)fVar1;
  return 0;
}

/* ref: FUN_00aae900 */
float F_00aae900(unsigned int gen_a0)
{
  GEN_ENTER(0xaae900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  fVar1 = F_00aae7a0(param_1,&REFG(float, 0x1302c90));
  return fVar1;
}

/* ref: FUN_00aae920 */
float F_00aae920(unsigned int gen_a0)
{
  GEN_ENTER(0xaae920u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  fVar1 = param_1[1];
  fVar2 = (float10)*param_1 * (float10)*param_1;
  fVar3 = (float10)param_1[2] * (float10)param_1[2];
  fVar4 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 + ((float10)fVar1 * (float10)fVar1 + fVar2)))))));
  fVar5 = (float10)0;
  if ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) != ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) || fVar4 == fVar5)) {
    return (float)fVar5;
  }
  fVar2 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)0 * (float10)0 +
                                                                 (float10)(double)fVar2) +
                                                                (float10)(double)fVar3)))))) / fVar4)));
  if (!((float10)1 <= (float10)((float)GEN_TOF(ABS(fVar2))))) {
    fVar5 = F_00c4c8d0(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,fVar2);
    fVar5 = F_00aae710((float)fVar5);
    fVar5 = (float10)(float)fVar5;
    if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 < *(float *)&REFG(undefined, 0x1088114))) {
      return ((float)GEN_TOF(-fVar5));
    }
  }
  return (float)fVar5;
}

/* ref: FUN_00aaea30 */
float F_00aaea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaea30u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)param_1[2] - (float10)param_2[2]) *
                                      (float10)(float)((float10)param_1[2] - (float10)param_2[2]) +
                                     ((float10)0 * (float10)0 +
                                     (float10)(float)((float10)*param_1 - (float10)*param_2) *
                                     (float10)(float)((float10)*param_1 - (float10)*param_2))))))));
}

/* ref: FUN_00aaea90 */
float10 F_00aaea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaea90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 8) - (float10)param_2[2];
  return (float10)((float)GEN_TOF((((float10)*(float *)param_1 - (float10)*param_2) *
                          ((float10)*(float *)param_1 - (float10)*param_2) + fVar1 * fVar1)));
}

/* ref: FUN_00aaeac0 */
uint F_00aaeac0(float gen_a0)
{
  GEN_ENTER(0xaaeac0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar1;
  
  dVar1 = (double)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aaeb00 */
unsigned int F_00aaeb00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaaeb00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar1 = *(float *)param_1;
  *(float *)param_1 =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)(float)fVar3 +
              (float10)fVar1 * (float10)(float)fVar2)));
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)(float)fVar2 * (float10)*(float *)(param_1 + 8) -
              (float10)(float)fVar3 * (float10)fVar1)));
  return 0;
}

/* ref: FUN_00aaeb70 */
uint F_00aaeb70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaaeb70u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *param_2;
  *param_1 = fVar1;
  fVar4 = (float10)param_2[1];
  param_1[1] = param_2[1];
  fVar5 = (float10)param_2[2];
  param_1[2] = param_2[2];
  fVar4 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar5 * fVar5 +
                                               ((float10)fVar1 * (float10)fVar1 + fVar4 * fVar4)))))));
  if ((float10)REFG(float, 0x10920a4) < fVar4) {
    fVar5 = (float10)param_3;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    *param_1 = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)fVar1) / fVar4)));
    param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar5) / fVar4)));
    param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)fVar3) / fVar4)));
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00aaec60 */
unsigned int F_00aaec60(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xaaec60u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  return 0;
}

/* ref: FUN_00aaeca0 */
unsigned int F_00aaeca0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xaaeca0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  return 0;
}

/* ref: FUN_00aaed80 */
uint F_00aaed80(unsigned int gen_a0)
{
  GEN_ENTER(0xaaed80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (uint)(1000 < param_1);
}

/* ref: FUN_00aaedb0 */
byte F_00aaedb0(void)
{
  GEN_ENTER(0xaaedb0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  int * piVar2;
  
  if ((REFG(int, 0x1379694) == 0) || ((*(byte *)(REFG(int, 0x1379694) + 0x2dd2) & 2) == 0)) {
    piVar2 = &REFG(undefined4, 0x14a9a1c);
    while (((*piVar2 == 0 || (bVar1 = *(byte *)(*piVar2 + 0x2dd2), (bVar1 & 0x10) == 0)) ||
           ((bVar1 & 2) == 0))) {
      piVar2 = piVar2 + 1;
      if (0x14a9bab < (int)piVar2) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_00aaee00 */
uint F_00aaee00(unsigned int gen_a0)
{
  GEN_ENTER(0xaaee00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (REFG(undefined4, 0x14bcc68) != 0) {
    *(undefined1 *)(REFG(undefined4, 0x14bcc68) + 0xc6) = (undefined1)param_1;
  }
  return uVar1;
}

/* ref: FUN_00aaee40 */
uint F_00aaee40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaaee40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00aaee80 */
uint F_00aaee80(unsigned int gen_a0)
{
  GEN_ENTER(0xaaee80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0x14) == 0) && (*(uint *)((int)this + 0x10) < *(uint *)((int)this + 8)))
  {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aaef00 */
uint F_00aaef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaef00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = param_2;
  *(undefined4 *)(in_ecx + 0x24) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0;
  return 0;
}

/* ref: FUN_00aaef20 */
uint F_00aaef20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaaef20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_00aaef40 */
uint F_00aaef40(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaaef40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint in_EAX = 0;
  
  *(float *)(param_1 + 0x3c) = param_2;
  if (*(int * PTR32 *)(param_1 + 0x14) != (int *)0x0) {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x14) + 0x24))))
                       ((undefined4)gen_fl2bits((float)((float10)param_2 * (float10)param_3)),
                        param_4);
  }
  return in_EAX;
}

/* ref: FUN_00aaef90 */
byte F_00aaef90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaef90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = 5;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aaf000 */
uint F_00aaf000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaf000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 8));
  if (*(short *)((int)this + 8) == (short)param_1) {
    uVar1 = *(int *)((int)this + 4) - 1;
    switch((unsigned int)(uintptr_t)(*(int *)((int)this + 4))) {
    case 1: ;
    case 7: ;
      return CONCAT31((int3)(uVar1 >> 8),1);
    case 5: ;
    case 6: ;
      if ((*(int *)((int)this + 0x14) != 0) &&
         (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x7c))))(*(int * PTR32 *)((int)this + 0x14)),
         (char)uVar1 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00aaf0c0 */
uint F_00aaf0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x14) != 0) {
    in_EAX = *(byte *)((int)this + 0x10) - 2;
    iVar3 = 0;
    switch((unsigned int)(uintptr_t)(in_EAX)) {
    case 0: ;
    case 4: ;
    case 5: ;
      bVar1 = F_00aaedb0();
      in_EAX = CONCAT31(extraout_var,bVar1);
      if ((*(short *)((int)this + 8) == 0x11) || (*(short *)((int)this + 8) == 0x92)) {
        iVar3 = (bVar1 != 0) + 1;
      }
      break;
    case 2: ;
      in_EAX = (uint)*(ushort *)((int)this + 8);
      iVar3 = 3;
      if ((0x3c < in_EAX) &&
         ((((in_EAX < 0x3f || (in_EAX == 0x79)) && (REFG(int, 0x1379694) != 0)) &&
          ((*(char *)(REFG(int, 0x1379694) + 0x2e08) == '\x03' ||
           (in_EAX = F_00a9fc30(REFG(int, 0x1379694)), (char)in_EAX != '\0')))))) {
        iVar3 = 4;
      }
    }
    if (*(int *)((int)this + 0x18) != iVar3) {
      in_EAX = iVar3 - 1;
      *(int *)((int)this + 0x18) = iVar3;
      switch((unsigned int)(uintptr_t)(in_EAX)) {
      case 0: ;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x68))))
                          ((undefined4)gen_fl2bits((float)(float10)0),0);
        return uVar2;
      case 1: ;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x68))))
                          ((undefined4)gen_fl2bits((float)(float10)1),0);
        return uVar2;
      case 2: ;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x6c))))(*(int * PTR32 *)((int)this + 0x14),0);
        return uVar2;
      case 3: ;
        in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x6c))))(*(int * PTR32 *)((int)this + 0x14),1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00aaf1d0 */
uint F_00aaf1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaaf1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined2 *)((int)this + 0x10) = (undefined2)param_1;
  *(undefined1 *)((int)this + 0x2c) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x16) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  if (*(char *)((int)this + 0x2c) != '\0') {
    *(undefined4 *)((int)this + 0x30) = param_4;
    *(undefined4 *)((int)this + 0x34) = param_5;
    *(undefined4 *)((int)this + 0x38) = param_6;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  return 0;
}

/* ref: FUN_00aaf2c0 */
unsigned int F_00aaf2c0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaaf2c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  
  *(float *)(param_1 + 0x88) = param_2;
  piVar4 = (int *)(param_1 + 0x1c);
  iVar3 = 2;
  do {
    fVar1 = *(float *)(param_1 + 0x88);
    fVar2 = gen_bits2f(piVar4[10]);
    piVar4[10] = (int)gen_fl2bits(fVar2);
    if ((int *)*piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x24))
                ((undefined4)gen_fl2bits((float)((float10)fVar2 * (float10)fVar1)),param_3);
    }
    piVar4 = piVar4 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00aaf380 */
byte F_00aaf380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaf380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  int iVar2;
  
  iVar2 = 0;
  psVar1 = (short *)((int)this + 0x10);
  while ((3 < *(int *)(psVar1 + -2) - 1U || (*psVar1 != (short)param_1))) {
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 0x20;
    if (1 < iVar2) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00aaf3c0 */
byte F_00aaf3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaf3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)((int)this + 0x1c);
  do {
    if ((piVar2[-4] == 4) && (*piVar2 != 0)) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*piVar2 + 0x7c))((int *)*piVar2);
      if (((char)uVar1 == '\0') && ((short)piVar2[-3] == (short)param_1)) {
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x10;
    if (1 < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00aaf410 */
byte F_00aaf410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaf410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)((int)this + 0x1c);
  do {
    if ((short)piVar2[-3] == (short)param_1) {
      switch((unsigned int)(uintptr_t)(piVar2[-4])) {
      case 1: ;
      case 7: ;
        return 1;
      case 5: ;
      case 6: ;
        if ((*piVar2 != 0) &&
           (uVar1 = ((code *)*(gen_code32 *)(*(int *)*piVar2 + 0x7c))((int *)*piVar2), (char)uVar1 != '\0')) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 0x10;
    if (1 < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00aaf4b0 */
unsigned int F_00aaf4b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaaf4b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(float *)(in_ecx + 0xbc) = param_2;
  *(undefined1 *)(in_ecx + 0xb4) = 0;
  return 0;
}

/* ref: FUN_00aaf510 */
byte F_00aaf510(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(byte *)(REFG(int, 0x14bcc6c) + 0x10 + param_1);
}

/* ref: FUN_00aaf5b0 */
uint F_00aaf5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  bool bVar1;
  
  if ((char)param_2 == '\0') {
    if ((short)(ushort)param_1 < 0) {
      return 0;
    }
    bVar1 = (ushort)param_1 < 0x14;
  }
  else {
    if ((short)(ushort)param_1 < 0) {
      return 0;
    }
    bVar1 = (ushort)param_1 < 0xa0;
  }
  if (!bVar1) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aaf5f0 */
byte F_00aaf5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaaf5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((char)param_3 == '\0') {
    if ((-1 < (short)(ushort)param_1) && ((ushort)param_1 < 0x14)) {
      *((undefined1 *)GEN_TOP(((int)this + (uint)(byte)param_2 + ((short)(ushort)param_1 + 0x50) * 0x20))) =
           (undefined1)param_4;
      return 1;
    }
  }
  else if ((-1 < (short)(ushort)param_1) && ((ushort)param_1 < 0xa0)) {
    *(undefined1 *)((int)this + (uint)(byte)param_2 + (short)(ushort)param_1 * 0x10) =
         (undefined1)param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_00aaf650 */
uint F_00aaf650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaaf650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_00aaf670 */
uint F_00aaf670(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a5f2b0(param_1);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x2dd4) & 4) != 0)) {
    return 0;
  }
  return param_1;
}

/* ref: FUN_00aaf6a0 */
unsigned int F_00aaf6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x7c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x7c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x7c) = 0;
    }
  }
  piVar3 = (int *)((int)this + 0x80);
  iVar4 = 3;
  do {
    piVar2 = (int *)*piVar3;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      puVar1 = (undefined4 *)*piVar3;
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *piVar3 = 0;
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00aaf700 */
uint F_00aaf700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaf700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(int *)this = param_1;
  uVar1 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,(uint)(param_1 == 6));
  if (param_1 == 6) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00aaf740 */
unsigned int F_00aaf740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaaf740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  if ((*(int *)this == 0) && (*(int *)((int)this + 0x68) <= param_1)) {
    if ((param_2 != *(int *)((int)this + 0x6c)) ||
       ((((char)param_3 != *(char *)((int)this + 0x70) || (param_4 != *(int *)((int)this + 0x74)))
        || (param_5 != *(int *)((int)this + 0x78))))) {
      F_005f3240();
      F_005f9ae0(param_2,param_3,param_4,param_5,&REFG(undefined2, 0x1379ca0));
      *(int *)((int)this + 0x6c) = param_2;
      *(char *)((int)this + 0x70) = (char)param_3;
      *(int *)((int)this + 0x74) = param_4;
      *(int *)((int)this + 0x78) = param_5;
    }
    *(int *)((int)this + 0x68) = param_1;
  }
  return 0;
}

/* ref: FUN_00aaf7b0 */
uint F_00aaf7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005f3240();
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  return 0;
}

/* ref: FUN_00aaf7d0 */
uint F_00aaf7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return 0;
}

/* ref: FUN_00aaf810 */
unsigned int F_00aaf810(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf810u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  return 0;
}

/* ref: FUN_00aaf820 */
unsigned int F_00aaf820(void)
{
  GEN_ENTER(0xaaf820u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00aaf830 */
byte F_00aaf830(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf830u, gen_a0, 0u, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_00aaf840 */
uint F_00aaf840(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_00aaf890 */
uint F_00aaf890(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  piVar2 = (int *)((int)this + 0xc);
  iVar4 = 5;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      puVar3 = (undefined4 *)*piVar2;
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x20) = 0;
  puVar3 = (undefined4 *)((int)this + 0x24);
  iVar4 = 10;
  do {
    if ((undefined *)*puVar3 != (undefined *)0x0) {
      F_00982b20((undefined *)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x4c) = 0;
  return (uint)this;
}

/* ref: FUN_00aaf920 */
unsigned int F_00aaf920(unsigned int gen_a0)
{
  GEN_ENTER(0xaaf920u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[8] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[0x13] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x14] = 0;
  *(undefined1 *)(in_ecx + 0x15) = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x27] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  in_ecx[0x23] = 0;
  in_ecx[0x24] = 0;
  in_ecx[0x25] = 0;
  in_ecx[0x26] = 0;
  return 0;
}

/* ref: FUN_00aaf9f0 */
uint F_00aaf9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaaf9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fe20(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"TerritoryType",param_1,0,0,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00aafa20 */
uint F_00aafa20(unsigned int gen_a0)
{
  GEN_ENTER(0xaafa20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
  F_00cb4120(((uint *)(gen_frame + 0xc)));
  F_00530060(this,0x41,param_1,((uint *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return ((uint *)(gen_frame + 0xc))[0];
}

/* ref: FUN_00aafa70 */
uint F_00aafa70(void)
{
  GEN_ENTER(0xaafa70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41);
  return uVar1;
}

/* ref: FUN_00aafa90 */
uint F_00aafa90(void)
{
  GEN_ENTER(0xaafa90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58);
  return uVar1;
}

/* ref: FUN_00aafad0 */
uint F_00aafad0(void)
{
  GEN_ENTER(0xaafad0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),3);
  return uVar1;
}

/* ref: FUN_00aafaf0 */
uint F_00aafaf0(void)
{
  GEN_ENTER(0xaafaf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x24);
  return uVar1;
}

/* ref: FUN_00aafb50 */
uint F_00aafb50(void)
{
  GEN_ENTER(0xaafb50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x45);
  return uVar1;
}

/* ref: FUN_00aafbf0 */
uint F_00aafbf0(void)
{
  GEN_ENTER(0xaafbf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),10);
  return uVar1;
}

/* ref: FUN_00aafcd0 */
uint F_00aafcd0(void)
{
  GEN_ENTER(0xaafcd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10e);
  return uVar1;
}

/* ref: FUN_00aafdb0 */
uint F_00aafdb0(void)
{
  GEN_ENTER(0xaafdb0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),6);
  return uVar1;
}

/* ref: FUN_00aafe10 */
uint F_00aafe10(void)
{
  GEN_ENTER(0xaafe10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x28);
  return uVar1;
}

/* ref: FUN_00aafe30 */
uint F_00aafe30(void)
{
  GEN_ENTER(0xaafe30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x114);
  return uVar1;
}

/* ref: FUN_00aaff50 */
uint F_00aaff50(void)
{
  GEN_ENTER(0xaaff50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x43);
  return uVar1;
}

/* ref: FUN_00aaffb0 */
uint F_00aaffb0(void)
{
  GEN_ENTER(0xaaffb0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x48);
  return uVar1;
}

/* ref: FUN_00ab0030 */
uint F_00ab0030(void)
{
  GEN_ENTER(0xab0030u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),100);
  return uVar1;
}

/* ref: FUN_00ab0070 */
uint F_00ab0070(void)
{
  GEN_ENTER(0xab0070u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe8);
  return uVar1;
}

/* ref: FUN_00ab00b0 */
uint F_00ab00b0(void)
{
  GEN_ENTER(0xab00b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x108);
  return uVar1;
}

/* ref: FUN_00ab0130 */
uint F_00ab0130(void)
{
  GEN_ENTER(0xab0130u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x130);
  return uVar1;
}

/* ref: FUN_00ab0170 */
uint F_00ab0170(void)
{
  GEN_ENTER(0xab0170u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10);
  return uVar1;
}

/* ref: FUN_00ab0190 */
byte F_00ab0190(void)
{
  GEN_ENTER(0xab0190u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ab01c0 */
uint F_00ab01c0(void)
{
  GEN_ENTER(0xab01c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1c);
  return uVar1;
}

/* ref: FUN_00ab01e0 */
byte F_00ab01e0(void)
{
  GEN_ENTER(0xab01e0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ab0210 */
uint F_00ab0210(unsigned int gen_a0)
{
  GEN_ENTER(0xab0210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_005300a0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1);
  return uVar1;
}

/* ref: FUN_00ab0230 */
uint F_00ab0230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"Addon",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
  ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,((undefined1 *)(gen_frame + 0x4)),param_1,param_2);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar2;
}

/* ref: FUN_00ab02a0 */
uint F_00ab02a0(void)
{
  GEN_ENTER(0xab02a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x70);
  return uVar1;
}

/* ref: FUN_00ab02c0 */
uint F_00ab02c0(void)
{
  GEN_ENTER(0xab02c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x91);
  return uVar1;
}

/* ref: FUN_00ab02e0 */
uint F_00ab02e0(void)
{
  GEN_ENTER(0xab02e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x123);
  return uVar1;
}

/* ref: FUN_00ab0300 */
uint F_00ab0300(void)
{
  GEN_ENTER(0xab0300u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6e);
  return uVar1;
}

/* ref: FUN_00ab0320 */
byte F_00ab0320(void)
{
  GEN_ENTER(0xab0320u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6e);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ab0350 */
uint F_00ab0350(void)
{
  GEN_ENTER(0xab0350u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8a);
  return uVar1;
}

/* ref: FUN_00ab0410 */
uint F_00ab0410(void)
{
  GEN_ENTER(0xab0410u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa0);
  return uVar1;
}

/* ref: FUN_00ab0430 */
uint F_00ab0430(void)
{
  GEN_ENTER(0xab0430u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x149);
  return uVar1;
}

/* ref: FUN_00ab0490 */
uint F_00ab0490(void)
{
  GEN_ENTER(0xab0490u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb4);
  return uVar1;
}

/* ref: FUN_00ab04b0 */
uint F_00ab04b0(void)
{
  GEN_ENTER(0xab04b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x141);
  return uVar1;
}

/* ref: FUN_00ab04d0 */
unsigned int F_00ab04d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab04d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  
  if (*(char *)(in_ecx + 0x6d6c) == '\x01') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                   (float10)*(float *)(in_ecx + 0x6d70))));
    *(float *)(in_ecx + 0x6d70) = fVar1;
    if ((float10)REFG(float, 0x10a509c) <= (float10)fVar1) {
      *(undefined1 *)(in_ecx + 0x6d6c) = 0;
      *(undefined4 *)(in_ecx + 0x6d70) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab0520 */
uint F_00ab0520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xab0520u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = F_00aae6b0(*(float *)(param_1 + 0xb0));
  fVar4 = (float)fVar3;
  uVar1 = F_00a5feb0(param_2);
  uVar2 = F_00a5feb0((undefined *)param_1);
  uVar1 = F_00aae480(uVar2,uVar1,fVar4,param_3);
  return uVar1;
}

/* ref: FUN_00ab0590 */
uint F_00ab0590(void)
{
  GEN_ENTER(0xab0590u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (REFG(undefined4, 0x14bcc68) != 0) {
    *(undefined1 *)(REFG(undefined4, 0x14bcc68) + 0xc4) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab05b0 */
uint F_00ab05b0(void)
{
  GEN_ENTER(0xab05b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (REFG(undefined4, 0x14bcc68) != 0) {
    *(undefined1 *)(REFG(undefined4, 0x14bcc68) + 0xc5) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab05d0 */
unsigned int F_00ab05d0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab05d0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (REFG(int, 0x14bcc68) != 0) {
    F_00aaf2c0(REFG(int, 0x14bcc68) + 0x10,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ab0600 */
unsigned int F_00ab0600(unsigned int gen_a0)
{
  GEN_ENTER(0xab0600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int, 0x14bcc68) != 0) {
    F_00aaf2c0(REFG(int, 0x14bcc68) + 0x10,(float)(float10)1,param_1);
  }
  return 0;
}

/* ref: FUN_00ab0620 */
ushort F_00ab0620(void)
{
  GEN_ENTER(0xab0620u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x14bcc68) != 0) {
    return *((ushort *)GEN_TOP(((uint)*(byte *)(REFG(int, 0x14bcc68) + 0x10) * 0x40 + 0x20 + REFG(int, 0x14bcc68))));
  }
  return 0;
}

/* ref: FUN_00ab06e0 */
uint F_00ab06e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab06e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  uint in_EAX = 0;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,param_1);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x78))))(*(int * PTR32 *)((int)this + 0x14),500);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return in_EAX;
}

/* ref: FUN_00ab0750 */
ushort F_00ab0750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab0750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x78))))(*(int * PTR32 *)((int)this + 0x14),500);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 4) = 2;
  *(ushort *)((int)this + 8) = (ushort)param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  return (ushort)param_1;
}

/* ref: FUN_00ab07d0 */
unsigned int F_00ab07d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab07d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x48) != 1) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0x16) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined1 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined2 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  return 0;
}

/* ref: FUN_00ab0810 */
unsigned int F_00ab0810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x1c);
  local_8 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,param_1);
      ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x78))((int *)*piVar3,500);
      *piVar3 = 0;
    }
    piVar3[9] = 0;
    iVar2 = REFG(float, 0x1087f04);
    piVar3[-4] = 0;
    piVar3[1] = 0;
    *(undefined2 *)(piVar3 + 2) = 0;
    piVar3[10] = iVar2;
    *(undefined2 *)(piVar3 + -3) = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3 = piVar3 + 0x10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00ab0890 */
unsigned int F_00ab0890(unsigned int gen_a0)
{
  GEN_ENTER(0xab0890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  
  piVar4 = (int *)((int)this + 0x1c);
  iVar5 = 2;
  piVar6 = piVar4;
  do {
    *(undefined1 *)(piVar6 + 2) = 0;
    if (piVar6[-4] == 7) {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
        ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x78))((int *)*piVar6,500);
        *piVar6 = 0;
      }
      piVar6[9] = 0;
      iVar2 = REFG(float, 0x1087f04);
      piVar6[-4] = 0;
      piVar6[1] = 0;
      *(undefined2 *)(piVar6 + 2) = 0;
      piVar6[10] = iVar2;
      *(undefined2 *)(piVar6 + -3) = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = 0;
      piVar6[7] = 0;
      piVar6[8] = 0;
    }
    piVar6 = piVar6 + 0x10;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 2;
  do {
    if ((piVar4[-4] == 4) && (*piVar4 != 0)) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x7c))((int *)*piVar4);
      if ((char)uVar3 == '\0') {
        piVar6 = (int *)*piVar4;
        if (piVar6 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar6 + 0x50))(piVar6,0);
          ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x78))((int *)*piVar4,500);
          *piVar4 = 0;
        }
        piVar4[9] = 0;
        iVar2 = REFG(float, 0x1087f04);
        piVar4[-4] = 0;
        piVar4[1] = 0;
        *(undefined2 *)(piVar4 + 2) = 0;
        piVar4[10] = iVar2;
        *(undefined2 *)(piVar4 + -3) = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[7] = 0;
        piVar4[8] = 0;
      }
    }
    piVar4 = piVar4 + 0x10;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 0;
}

/* ref: FUN_00ab0990 */
unsigned int F_00ab0990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ab0810((undefined *)((int)this + 0x10),param_1);
  return 0;
}

/* ref: FUN_00ab09a0 */
unsigned int F_00ab09a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xab09a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int iVar1;
  
  if (param_2 < *(uint *)((int)this + 8)) {
    iVar1 = param_2 * 0x50 + *(int *)((int)this + 0xa0);
    *(undefined2 *)(iVar1 + 0x10) = (undefined2)param_1;
    *(undefined1 *)(iVar1 + 0x16) = (undefined1)param_3;
    *(undefined1 *)(iVar1 + 0x2c) = (undefined1)param_4;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    if (*(char *)(iVar1 + 0x2c) != '\0') {
      *(undefined4 *)(iVar1 + 0x30) = param_5;
      *(undefined4 *)(iVar1 + 0x34) = param_6;
      *(undefined4 *)(iVar1 + 0x38) = param_7;
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
    }
    if (param_2 < 2) {
      *(undefined1 *)((int)this + 0xc5) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00ab0a20 */
uint F_00ab0a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab0a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 < *(uint *)((int)this + 8)) &&
     (uVar1 = param_2 * 0x50 + *(int *)((int)this + 0xa0), *(int *)(uVar1 + 0x48) != 1)) {
    *(undefined4 *)(uVar1 + 0xc) = 0;
    *(undefined1 *)(uVar1 + 0x16) = 0;
    *(undefined4 *)(uVar1 + 0x18) = 0;
    *(undefined1 *)(uVar1 + 0x2c) = 0;
    *(undefined4 *)(uVar1 + 0x48) = 0;
    *(undefined2 *)(uVar1 + 0x10) = 0;
    *(undefined2 *)(uVar1 + 0x12) = 0;
    *(undefined4 *)(uVar1 + 0x30) = 0;
    *(undefined4 *)(uVar1 + 0x34) = 0;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    *(undefined4 *)(uVar1 + 0x40) = 0;
    *(undefined4 *)(uVar1 + 0x44) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab0a70 */
uint F_00ab0a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab0a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 < *(uint *)((int)this + 8)) {
    uVar1 = param_1 * 10;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x48 + param_1 * 0x50))) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00ab0aa0 */
byte F_00ab0aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < *(uint *)(in_ecx + 8)) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xa0) + 0x16 + param_2 * 0x50)));
  }
  return 0;
}

/* ref: FUN_00ab0ad0 */
uint F_00ab0ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xab0ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  float10 fVar3;
  float fVar4;
  float fVar5;
  uint uVar2;
  
  fVar4 = 0.0;
  if (REFG(int, 0x137104c) == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  }
  bVar1 = F_00aaedb0();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (fVar4 < *(float *)((int)this + 0xbc)) {
    fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xbc) - (float10)fVar5)));
    *(float *)((int)this + 0xbc) = fVar5;
    if ((float10)fVar5 < (float10)0) {
      *(float *)((int)this + 0xbc) = fVar4;
      return uVar2;
    }
  }
  else {
    if (*(byte *)((int)this + 0xb4) == bVar1) {
      *(float *)((int)this + 0xb8) = fVar4;
      return uVar2;
    }
    fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xb8) + (float10)fVar5)));
    fVar3 = (float10)fVar4;
    *(float *)((int)this + 0xb8) = fVar4;
    if (bVar1 == 0) {
      if ((float10)*(float *)((int)this + 4) < fVar3) {
        *(undefined1 *)((int)this + 0xb4) = 0;
      }
    }
    else if ((float10)*(float *)this < fVar3) {
      *(undefined1 *)((int)this + 0xb4) = 1;
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00ab0b90 */
unsigned int F_00ab0b90(unsigned int gen_a0)
{
  GEN_ENTER(0xab0b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = *(uint *)((int)this + 8);
  local_8 = 0;
  if (uVar5 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)this + 0xa0);
      if ((*(char *)(iVar2 + 0x16 + iVar1) != '\0') && (uVar4 = 0, uVar5 != 0)) {
        psVar3 = (short *)(iVar1 + 0x10);
        do {
          if (((local_8 != uVar4) && (*(char *)((int)psVar3 + -0xb) != '\0')) && (*psVar3 != 0)) {
            if (*(int *)(iVar2 + 0x48 + iVar1) != 1) {
              *(undefined4 *)(iVar2 + 0xc + iVar1) = 0;
              *(undefined1 *)(iVar2 + 0x16 + iVar1) = 0;
              *(undefined4 *)(iVar2 + 0x18 + iVar1) = 0;
              *(undefined1 *)(iVar2 + 0x2c + iVar1) = 0;
              *(undefined4 *)(iVar2 + 0x48 + iVar1) = 0;
              *(undefined2 *)(iVar2 + 0x10 + iVar1) = 0;
              *(undefined2 *)(iVar2 + 0x12 + iVar1) = 0;
              *(undefined4 *)(iVar2 + 0x30 + iVar1) = 0;
              *(undefined4 *)(iVar2 + 0x34 + iVar1) = 0;
              *(undefined4 *)(iVar2 + 0x38 + iVar1) = 0;
              *(undefined4 *)(iVar2 + 0x40 + iVar1) = 0;
              *(undefined4 *)(iVar2 + 0x44 + iVar1) = 0;
            }
            break;
          }
          uVar4 = uVar4 + 1;
          psVar3 = psVar3 + 0x28;
        } while (uVar4 < uVar5);
      }
      uVar5 = *(uint *)((int)this + 8);
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x50;
    } while (local_8 < uVar5);
  }
  return 0;
}

/* ref: FUN_00ab0c40 */
uint F_00ab0c40(void)
{
  GEN_ENTER(0xab0c40u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  ulonglong uStackY_18;
  
  iVar1 = REFG(int, 0x137104c);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x1210) + 4))))(REFG(int, 0x137104c) + 0x1210,0);
  uStackY_18 = CONCAT44(extraout_EDX,uVar2);
  uVar2 = (uint)((uStackY_18 / 0xe10) % 0x18);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x1210) + 4))))(iVar1 + 0x1210,0);
  uStackY_18 = CONCAT44(extraout_EDX_00,uVar3);
  uVar3 = (uint)((uStackY_18 / 0x3c) % 0x3c);
  if ((uVar2 < REFG(undefined4, 0x1336390)) || (REFG(undefined4, 0x1336394) <= uVar2)) {
    if ((uVar2 != REFG(undefined4, 0x1336394)) || (uVar2 = 5, 1 < uVar3)) {
      uVar2 = 2;
    }
    return uVar2;
  }
  if ((uVar2 == REFG(undefined4, 0x1336390)) && (uVar3 < 2)) {
    return 4;
  }
  return 1;
}

/* ref: FUN_00ab0d10 */
uint F_00ab0d10(void)
{
  GEN_ENTER(0xab0d10u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x14bcc6c);
  uVar2 = 0;
  if (REFG(int * PTR32, 0x14bcc6c) != (int *)0x0) {
    if (*REFG(int * PTR32, 0x14bcc6c) != 0) {
      F_00406b30(*REFG(int * PTR32, 0x14bcc6c));
      *piVar1 = 0;
    }
    piVar1 = REFG(int * PTR32, 0x14bcc6c) + 2;
    if (REFG(int * PTR32, 0x14bcc6c)[2] != 0) {
      F_00406b30(REFG(int * PTR32, 0x14bcc6c)[2]);
      *piVar1 = 0;
    }
    uVar2 = 0;
    if (REFG(int * PTR32, 0x14bcc6c) != (int *)0x0) {
      uVar2 = F_00406ad0(REFG(int * PTR32, 0x14bcc6c));
      REFG(int * PTR32, 0x14bcc6c) = (int *)0x0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ab0d70 */
uint F_00ab0d70(unsigned int gen_a0)
{
  GEN_ENTER(0xab0d70u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  int * piVar7;
  bool bVar8;
  
  pbVar1 = param_1;
  piVar7 = REFG(int * PTR32, 0x14bcc6c);
  iVar6 = 0;
  if ((param_1 != (byte *)0x0) && (REFG(int * PTR32, 0x14bcc6c)[1] != 0)) {
    bVar2 = *param_1;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    if (bVar2 != 0) {
      pbVar5 = param_1;
      do {
        iVar3 = (int)(char)bVar2;
        pbVar4 = pbVar5 + (1 - (int)param_1);
        bVar2 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        iVar6 = iVar6 + (int)((int)(uintptr_t)pbVar4) * iVar3;
      } while (bVar2 != 0);
    }
    bVar2 = F_00aba2a0(REFG(int * PTR32, 0x14bcc6c),iVar6,&(*(int *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
    if (bVar2 == 1) {
      if ((*(int *)(gen_frame + 0x4)) == (*(int *)(gen_frame + 0x8))) {
        return *(int *)(*piVar7 + 4 + (*(int *)(gen_frame + 0x4)) * 8) + 4;
      }
      param_1 = (byte *)(*(int *)(gen_frame + 0x4));
      if ((*(int *)(gen_frame + 0x4)) <= (*(int *)(gen_frame + 0x8))) {
        iVar6 = *piVar7;
        piVar7 = (int *)(iVar6 + 4 + (*(int *)(gen_frame + 0x4)) * 8);
        do {
          pbVar4 = ((byte *)GEN_TOP(((*(uint *)*piVar7 & 0xffffff) + *piVar7)));
          pbVar5 = pbVar1;
          do {
            bVar2 = *pbVar4;
            bVar8 = bVar2 < *pbVar5;
            if (bVar2 != *pbVar5) {
LAB_00ab0e30: ;
              iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00ab0e35;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar8 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_00ab0e30;
            pbVar4 = pbVar4 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_00ab0e35: ;
          if (iVar3 == 0) {
            return *(int *)(iVar6 + 4 + (int)((int)(uintptr_t)param_1) * 8) + 4;
          }
          param_1 = (byte *)((int)param_1 + 1);
          piVar7 = piVar7 + 2;
        } while ((int)param_1 <= (*(int *)(gen_frame + 0x8)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00ab0e70 */
uint F_00ab0e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab0e70u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte * pbVar2;
  byte bVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  int iVar7;
  int * piVar8;
  bool bVar9;
  
  pbVar2 = param_1;
  iVar1 = REFG(int, 0x14bcc6c);
  iVar7 = 0;
  if ((param_1 != (byte *)0x0) && (*(int *)(REFG(int, 0x14bcc6c) + 0xc) != 0)) {
    bVar3 = *param_1;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    if (bVar3 != 0) {
      pbVar6 = param_1;
      do {
        iVar4 = (int)(char)bVar3;
        pbVar5 = pbVar6 + (1 - (int)param_1);
        bVar3 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
        iVar7 = iVar7 + (int)((int)(uintptr_t)pbVar5) * iVar4;
      } while (bVar3 != 0);
    }
    bVar3 = F_00aba360((undefined *)(REFG(int, 0x14bcc6c) + 8),iVar7,&(*(int *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
    if (bVar3 == 1) {
      if ((*(int *)(gen_frame + 0x4)) == (*(int *)(gen_frame + 0x8))) {
        return *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + 4 + (*(int *)(gen_frame + 0x4)) * 8)));
      }
      param_1 = (byte *)(*(int *)(gen_frame + 0x4));
      if ((*(int *)(gen_frame + 0x4)) <= (*(int *)(gen_frame + 0x8))) {
        iVar1 = *(int *)(iVar1 + 8);
        piVar8 = (int *)(iVar1 + 4 + (*(int *)(gen_frame + 0x4)) * 8);
        do {
          pbVar5 = ((byte *)GEN_TOP(((*(uint *)*piVar8 & 0xffffff) + *piVar8)));
          pbVar6 = pbVar2;
          do {
            bVar3 = *pbVar5;
            bVar9 = bVar3 < *pbVar6;
            if (bVar3 != *pbVar6) {
LAB_00ab0f30: ;
              iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00ab0f35;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar5[1];
            bVar9 = bVar3 < pbVar6[1];
            if (bVar3 != pbVar6[1]) goto LAB_00ab0f30;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_00ab0f35: ;
          if (iVar7 == 0) {
            return *(uint *)(iVar1 + 4 + (int)((int)(uintptr_t)param_1) * 8);
          }
          param_1 = (byte *)((int)param_1 + 1);
          piVar8 = piVar8 + 2;
        } while ((int)param_1 <= (*(int *)(gen_frame + 0x8)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00ab0f60 */
unsigned int F_00ab0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = 0;
    bVar2 = 1;
    do {
      *(bool *)((int)this + uVar1) = (*((byte *)GEN_TOP(((uVar1 >> 3) + uVar3 + param_1))) & bVar2) != 0;
      uVar1 = uVar1 + 1;
      bVar2 = bVar2 << 1 | (char)bVar2 < '\0';
    } while (uVar1 < 0x10);
    uVar3 = uVar3 + 2;
    this = (undefined *)((int)this + 0x10);
  } while (uVar3 < 0x140);
  return 0;
}

/* ref: FUN_00ab0fb0 */
unsigned int F_00ab0fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = (int)this + 0xa00;
  do {
    uVar1 = 0;
    bVar2 = 1;
    do {
      *(bool *)(iVar4 + uVar1) = (*((byte *)GEN_TOP(((uVar1 >> 3) + uVar3 + param_1))) & bVar2) != 0;
      uVar1 = uVar1 + 1;
      bVar2 = bVar2 << 1 | (char)bVar2 < '\0';
    } while (uVar1 < 0x20);
    uVar3 = uVar3 + 4;
    iVar4 = iVar4 + 0x20;
  } while (uVar3 < 0x50);
  return 0;
}

/* ref: FUN_00ab0ff0 */
uint F_00ab0ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab0ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x24)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x28)) = param_2[1];
    uVar1 = param_2[2];
    (*(undefined4 *)(gen_frame + 0x20)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x194;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
    bVar2 = F_00974e00(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar3 = CONCAT31(extraout_var,bVar2);
    *(undefined1 *)((int)this + 0xc80) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar3;
}

/* ref: FUN_00ab10a0 */
byte F_00ab10a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab10a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if ((char)param_3 == '\0') {
    if ((-1 < (short)(ushort)param_1) && ((ushort)param_1 < 0x14)) {
      return *((byte *)GEN_TOP(((int)this + (uint)(byte)param_2 + ((short)(ushort)param_1 + 0x50) * 0x20)));
    }
  }
  else if ((-1 < (short)(ushort)param_1) && ((ushort)param_1 < 0xa0)) {
    return *(byte *)((int)this + (uint)(byte)param_2 + (short)(ushort)param_1 * 0x10);
  }
  return 1;
}

/* ref: Client::Game::ConfigFloat::vf1 */
uint F_00ab1100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  float fVar3;
  
  if (*(float * PTR32 *)(this + 4) != (float *)0x0) {
    fVar3 = **(float * PTR32 *)(this + 4);
    uVar2 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(this + 8));
    bVar1 = F_00414ad0(uVar2,fVar3);
    this = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)this;
}

/* ref: Client::Game::ConfigFloat::vf2 */
unsigned int F_00ab1130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 4) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(this + 8));
    **(undefined4 * PTR32 *)(this + 4) = *(undefined4 *)(uVar1 + 0x14);
  }
  return 0;
}

/* ref: FUN_00ab1160 */
uint F_00ab1160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1160u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  float fVar1;
  float * pfVar2;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[0]))) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    (*(uint *)&gen_args[1]) = 0;
    *(*(float * PTR32 *)&gen_args[0]) = fVar1;
    pfVar2 = (*(float * PTR32 *)&gen_args[0]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar2 = (float *)&(*(uint *)&gen_args[1]);
    }
    *(*(float * PTR32 *)&gen_args[0]) = *pfVar2;
    return (uint)pfVar2;
  }
  *(*(float * PTR32 *)&gen_args[0]) = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[0]))))));
  return (uint)(*(float * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ab11c0 */
uint F_00ab11c0(void)
{
  GEN_ENTER(0xab11c0u, 0u, 0u, 0u, 0u);
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  if (REFG(char, 0x1379c96) == '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    in_EAX = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
      if ((uVar2 & 2) == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xbc))(piVar1);
        if ((char)uVar2 == '\0') {
          return 1;
        }
      }
      return 0;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00ab1210 */
uint F_00ab1210(unsigned int gen_a0)
{
  GEN_ENTER(0xab1210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == -0x20000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a35490(&REFG(undefined4, 0x14a31f0),param_1);
  }
  uVar1 = F_00a5f2b0(uVar2);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x2dd4) & 4) != 0)) {
    return 0;
  }
  return uVar2;
}

/* ref: FUN_00ab1250 */
uint F_00ab1250(unsigned int gen_a0)
{
  GEN_ENTER(0xab1250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 0x158) {
    uVar2 = (&REFG(undefined4, 0x14a31f0))[param_1];
  }
  else {
    uVar2 = 0;
  }
  uVar1 = F_00a5f2b0(uVar2);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x2dd4) & 4) != 0)) {
    return 0;
  }
  return uVar2;
}

/* ref: FUN_00ab1290 */
uint F_00ab1290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1290u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == -0x20000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
  }
  uVar1 = F_00a5f2b0(uVar2);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x2dd4) & 4) != 0)) {
    return 0;
  }
  return uVar2;
}

/* ref: FUN_00ab1340 */
uint F_00ab1340(void)
{
  GEN_ENTER(0xab1340u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  if ((REFG(char, 0x14b5220) == '\x01') && (uVar2 = 0, REFG(undefined4, 0x14b5264) != 0)) {
    do {
      if (((*((byte *)GEN_TOP(((&REFG(undefined4, 0x14b5224))[uVar2] + 0x44))) & 4) != 0) &&
         (uVar1 = F_005f32a0(0x29,(&REFG(undefined4, 0x14b5224))[uVar2]), uVar1 != 0)) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < REFG(undefined4, 0x14b5264));
  }
  return 0;
}

/* ref: FUN_00ab1390 */
uint F_00ab1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  int * this_00;
  uint uVar3;
  
  uVar3 = F_00424750(REFG(undefined4, 0x137104c));
  this_00 = REFG(int * PTR32, 0x1379694);
  if ((*(int *)this != 1) || (param_1 == 3)) {
    F_005f3240();
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    if (this_00 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*this_00 + 0x54))(this_00,0);
      F_00a9fa00(this_00);
      fVar1 = gen_bits2f(this_00[0x2c]);
      fVar2 = *(float *)((int)this + 0x18);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c974));
      (*(undefined2 *)(gen_frame + 0x4)) = 1;
      (*(undefined2 *)(gen_frame + 0x7)) = 0;
      (*(undefined1 *)(gen_frame + 0x6)) = 1;
      F_00a9f980(this_00,*(float *)((int)this + 0x10),*(float *)((int)this + 0x14),fVar2,fVar1,
                   &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
    *(undefined4 *)this = 6;
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    *(undefined4 *)((int)this + 4) = 0;
    F_0053c160(&REFG(undefined, 0x1305d00));
    uVar3 = param_1;
    if ((param_1 == 5) || (param_1 == 8)) {
      F_00a696e0(&REFG(undefined, 0x14ab380));
    }
  }
  return uVar3;
}

/* ref: FUN_00ab1470 */
uint F_00ab1470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab1470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  bVar1 = F_00a9f620(param_1);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    puVar3 = (undefined4 *)F_00a5feb0(param_1);
    *(undefined4 *)((int)this + 0x10) = *puVar3;
    *(undefined4 *)((int)this + 0x14) = puVar3[1];
    *(undefined4 *)((int)this + 0x18) = puVar3[2];
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 0x20) = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    *(undefined4 *)this = 4;
    uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  }
  return uVar4;
}

/* ref: FUN_00ab14f0 */
uint F_00ab14f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab14f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab1470(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ab1500 */
uint F_00ab1500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab1500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab1470(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ab1680 */
byte F_00ab1680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xab1680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined2 uVar1;
  int iVar2;
  undefined * this_00;
  int * piVar3;
  float * pfVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float local_40;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  uVar8 = 0;
  if (((((param_1 != (undefined4 *)0x0) && (param_2 != (undefined2 *)0x0)) &&
       (param_3 != (int *)0x0)) && ((param_4 != 0 && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)))) &&
     (REFG(char, 0x14b5220) != '\0')) {
    uVar6 = 0;
    local_20 = 0;
    local_14 = 0;
    local_1c = 0;
    local_18 = 0;
    if (REFG(undefined4, 0x14b5264) != 0) {
      do {
        iVar2 = (&REFG(undefined4, 0x14b5224))[local_18];
        if ((*(byte *)(iVar2 + 0x44) & 0x20) != 0) {
          if (*(int *)((int)this + 0x34) == iVar2) {
            uVar6 = *(uint *)((int)this + 0x38);
            iVar7 = *(int *)((int)this + 0x3c);
            uVar5 = *(ushort *)((int)this + 0x40);
          }
          else {
            uVar6 = F_005f32a0(0x47,iVar2);
            if (uVar6 == 0) goto LAB_00ab174e;
            iVar7 = *(int *)(uVar6 + 0x80);
            uVar5 = *(ushort *)(uVar6 + 0x70);
          }
          if (uVar8 < uVar5) {
            local_20 = iVar2;
            local_1c = iVar7;
            local_14 = uVar6;
            uVar8 = uVar5;
          }
        }
LAB_00ab174e: ;
        local_18 = local_18 + 1;
        uVar6 = local_14;
      } while (local_18 < REFG(undefined4, 0x14b5264));
    }
    *(int *)((int)this + 0x34) = local_20;
    *(uint *)((int)this + 0x38) = uVar6;
    *(int *)((int)this + 0x3c) = local_1c;
    *(ushort *)((int)this + 0x40) = uVar8;
    if ((uVar6 != 0) && (local_1c != 0)) {
      if (*(int *)((int)this + 0x44) == local_1c) {
        uVar1 = *(undefined2 *)((int)this + 0x60);
        local_40 = *(float *)((int)this + 0x50);
        local_18 = *(int *)((int)this + 100);
        piVar3 = *(int * PTR32 *)((int)this + 0x48);
        fVar11 = *(float *)((int)this + 0x58);
      }
      else {
        piVar3 = (int *)F_005f3270(0x29,local_1c,0);
        if (piVar3 == (int *)0x0) {
          fVar11 = 0.0;
          local_40 = 0.0;
          fVar12 = 0.0;
          uVar1 = 0;
          local_18 = 0;
        }
        else {
          pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
          uVar1 = *(undefined2 *)((int)piVar3 + 0x86);
          local_18 = piVar3[0x23];
          local_40 = *pfVar4;
          fVar12 = pfVar4[1];
          fVar11 = pfVar4[2];
        }
        *(int *)((int)this + 0x44) = local_1c;
        *(int * PTR32 *)((int)this + 0x48) = piVar3;
        *(float *)((int)this + 0x50) = local_40;
        *(float *)((int)this + 0x54) = fVar12;
        *(float *)((int)this + 0x58) = fVar11;
        *(undefined2 *)((int)this + 0x60) = uVar1;
        *(uint *)((int)this + 100) = local_18;
      }
      if (piVar3 != (int *)0x0) {
        pfVar4 = (float *)F_00a5feb0(this_00);
        fVar12 = *(float *)((int)this_00 + 0xb0);
        fVar10 = ((float10)GEN_TOD(fsin((float10)fVar12)));
        fVar9 = ((float10)GEN_TOD(fcos((float10)fVar12)));
        fVar10 = (float10)((float)GEN_TOF(((float10)(float)fVar9 *
                                  (float10)(float)((float10)fVar11 - (float10)pfVar4[2]) +
                                 ((float10)0 * (float10)0 +
                                 (float10)(float)fVar10 *
                                 (float10)(float)((float10)local_40 - (float10)*pfVar4)))));
        *(bool *)param_4 = (!GEN_ISNAN(fVar10) && !GEN_ISNAN((float10)0)) && !(fVar10 < (float10)0);
        *param_1 = piVar3;
        *param_2 = uVar1;
        *param_3 = local_18;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ab18e0 */
unsigned int F_00ab18e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab18e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 0x68) <= param_1) && (*(int *)((int)this + 0x68) != 0)) {
    F_005f3240();
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return 0;
}

/* ref: FUN_00ab1910 */
uint F_00ab1910(unsigned int gen_a0)
{
  GEN_ENTER(0xab1910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = REFG(float, 0x1087f04);
  if ((char)param_1 != '\0') {
    fVar3 = 0.0;
  }
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(uVar1,fVar3);
  uVar2 = F_004e7cc0(uVar1,fVar3);
  return uVar2;
}

/* ref: FUN_00ab1960 */
unsigned int F_00ab1960(void)
{
  GEN_ENTER(0xab1960u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined * this;
  int * piVar7;
  float * pfVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  this = REFG(void * PTR32, 0x1379694);
  if (((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (REFG(char, 0x14b5220) == '\x01')) &&
     ((*(uint *)(gen_frame + 0x4)) = 0, REFG(undefined4, 0x14b5264) != 0)) {
    do {
      if ((((*((byte *)GEN_TOP(((&REFG(undefined4, 0x14b5224))[(*(uint *)(gen_frame + 0x4))] + 0x44))) & 0x40) != 0) &&
          (piVar7 = (int *)F_005f32a0(0x39,(&REFG(undefined4, 0x14b5224))[(*(uint *)(gen_frame + 0x4))]), piVar7 != (int *)0x0)) &&
         ((char)piVar7[0x23] != '\0')) {
        pfVar8 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0xe4))(piVar7)));
        fVar1 = *pfVar8;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xfc))(piVar7);
        F_00a1e160(&(*(float *)(gen_frame + 0x8)),uVar9 + 0x10);
        pfVar8 = (float *)F_00a5feb0(this);
        fVar4 = (float)((float10)*pfVar8 - (float10)fVar1);
        fVar5 = (float)((float10)pfVar8[2] - (float10)fVar3);
        fVar11 = (float10)fVar5;
        fVar12 = (float10)fVar4;
        fVar6 = (float)(fVar12 * fVar12 + fVar11 * fVar11);
        (*(float *)(gen_frame + 0xc)) = fVar6;
        fVar6 = ((float)GEN_TOF(SQRT((float10)fVar6)));
        (*(float *)(gen_frame + 0xc)) = fVar6;
        fVar11 = (float10)fVar6;
        bVar10 = GEN_ISNAN(fVar11) || GEN_ISNAN((float10)0);
        if (bVar10 == (bVar10 || fVar11 == (float10)0)) {
          fVar11 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x8)))));
          (*(float *)(gen_frame + 0xc)) = (float)fVar11;
          fVar12 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x8)))));
          (*(float *)(gen_frame + 0xc)) = (float)fVar12;
          fVar2 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)fVar5 +
                         ((float10)(float)((float10)pfVar8[1] - (float10)fVar2) *
                          (float10)*(double *)&REFG(undefined, 0x108bec8) +
                         (float10)(float)fVar11 * (float10)fVar4))));
          (*(float *)(gen_frame + 0xc)) = fVar2;
          if ((float10)fVar2 < (float10)0) {
            (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)*(double *)&REFG(undefined, 0x1080228));
            fVar11 = F_00aed220((float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)*(double *)&REFG(undefined, 0x1080228)));
            (*(float *)(gen_frame + 0x8)) = (float)fVar11;
          }
        }
        fVar11 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x8)))));
        (*(float *)(gen_frame + 0xc)) = (float)fVar11;
        fVar12 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x8)))));
        (*(float *)(gen_frame + 0xc)) = (float)fVar12;
        fVar13 = (float10)*(double *)&REFG(undefined, 0x10944e0);
        pfVar8 = (float *)F_00a5feb0(this);
        fVar2 = *pfVar8;
        fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar13 * (float10)(float)fVar12) +
                                        (float10)fVar3))) - (float10)pfVar8[2])));
        fVar12 = F_00c4d1fa((float10)fVar3);
        (*(float *)(gen_frame + 0xc)) = (float)fVar12;
        (*(float *)(gen_frame + 0x8)) = (float)fVar12;
        uVar9 = F_00a9fc60(this);
        if (((char)uVar9 == '\0') &&
           (uVar15 = *(ulonglong *)((int)this + 0x2f08), uVar14 = F_00427d90(),
           uVar15 < uVar14 - 1000)) {
          fVar11 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)(float)fVar11 *
                                                                     fVar13) + (float10)fVar1))) -
                                   (float10)fVar2)));
          fVar12 = (float10)fVar3;
          fVar1 = (float)(fVar12 * fVar12 + fVar11 * fVar11);
          (*(float *)(gen_frame + 0xc)) = fVar1;
          fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
          (*(float *)(gen_frame + 0xc)) = fVar1;
          F_00aa2400(this,(*(float *)(gen_frame + 0x8)),fVar1,REFG(float, 0x1088068),0,1);
          uVar15 = F_00427d90();
          *(ulonglong *)((int)this + 0x2f08) = uVar15;
        }
      }
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    } while ((*(uint *)(gen_frame + 0x4)) < REFG(undefined4, 0x14b5264));
  }
  return 0;
}

/* ref: FUN_00ab1c10 */
byte F_00ab1c10(unsigned int gen_a0)
{
  GEN_ENTER(0xab1c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    piVar3 = (int *)((int)this + 0xc);
    do {
      if ((*piVar3 != 0) && (*(char *)(*piVar3 + 0x65) != '\x03')) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x20));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar3 = (int *)((int)this + 0x24);
    do {
      if (*piVar3 != 0) {
        bVar1 = F_00982b50(*piVar3);
        if (bVar1 == 0) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x4c));
  }
  return 1;
}

/* ref: FUN_00ab1c70 */
uint F_00ab1c70(unsigned int gen_a0)
{
  GEN_ENTER(0xab1c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00aaf890(this);
  uVar1 = F_00aaf890((undefined *)((int)this + 0x50));
  return uVar1;
}

/* ref: FUN_00ab1c90 */
uint F_00ab1c90(unsigned int gen_a0)
{
  GEN_ENTER(0xab1c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1cc0 */
uint F_00ab1cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1cf0 */
byte F_00ab1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(byte * PTR32 *)(uVar1 + 4) != (byte *)0x0)) {
      return **(byte * PTR32 *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab1d50 */
byte F_00ab1d50(unsigned int gen_a0)
{
  GEN_ENTER(0xab1d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 1)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1db0 */
byte F_00ab1db0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 6)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1e10 */
byte F_00ab1e10(unsigned int gen_a0)
{
  GEN_ENTER(0xab1e10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 7)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1e70 */
uint F_00ab1e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab1e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1ea0 */
uint F_00ab1ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x59,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1ed0 */
uint F_00ab1ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f00 */
uint F_00ab1f00(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x24,param_1 + -100000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f30 */
uint F_00ab1f30(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x50,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f60 */
uint F_00ab1f60(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x73,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f90 */
uint F_00ab1f90(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x45,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1fc0 */
uint F_00ab1fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x25,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1ff0 */
uint F_00ab1ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1ff0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x39,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2020 */
uint F_00ab2020(unsigned int gen_a0)
{
  GEN_ENTER(0xab2020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x62,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2050 */
uint F_00ab2050(unsigned int gen_a0)
{
  GEN_ENTER(0xab2050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x65,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2080 */
uint F_00ab2080(unsigned int gen_a0)
{
  GEN_ENTER(0xab2080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xf2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab20b0 */
uint F_00ab20b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab20b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xf1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab20e0 */
uint F_00ab20e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab20e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),10,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2110 */
uint F_00ab2110(unsigned int gen_a0)
{
  GEN_ENTER(0xab2110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2140 */
uint F_00ab2140(unsigned int gen_a0)
{
  GEN_ENTER(0xab2140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x146,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2170 */
uint F_00ab2170(unsigned int gen_a0)
{
  GEN_ENTER(0xab2170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x57,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab21a0 */
uint F_00ab21a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab21a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x27,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab21d0 */
uint F_00ab21d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab21d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2200 */
uint F_00ab2200(unsigned int gen_a0)
{
  GEN_ENTER(0xab2200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x55,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2230 */
uint F_00ab2230(unsigned int gen_a0)
{
  GEN_ENTER(0xab2230u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x26,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2260 */
uint F_00ab2260(unsigned int gen_a0)
{
  GEN_ENTER(0xab2260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x36,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2290 */
uint F_00ab2290(unsigned int gen_a0)
{
  GEN_ENTER(0xab2290u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab22c0 */
uint F_00ab22c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab22c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab22f0 */
uint F_00ab22f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab22f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2320 */
uint F_00ab2320(unsigned int gen_a0)
{
  GEN_ENTER(0xab2320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2350 */
uint F_00ab2350(unsigned int gen_a0)
{
  GEN_ENTER(0xab2350u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2380 */
uint F_00ab2380(unsigned int gen_a0)
{
  GEN_ENTER(0xab2380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe7,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab23b0 */
uint F_00ab23b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab23b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xbc,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab23e0 */
uint F_00ab23e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab23e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xdf,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2410 */
uint F_00ab2410(unsigned int gen_a0)
{
  GEN_ENTER(0xab2410u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x44,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2440 */
uint F_00ab2440(unsigned int gen_a0)
{
  GEN_ENTER(0xab2440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xea,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2470 */
uint F_00ab2470(unsigned int gen_a0)
{
  GEN_ENTER(0xab2470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x56,param_1 + -2000000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab24a0 */
uint F_00ab24a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab24a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1;
  if (999999 < param_1) {
    uVar1 = param_1 - 1000000;
  }
  if (uVar1 < 0x18cf) {
    uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9,uVar1);
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab24e0 */
uint F_00ab24e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab24e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2510 */
uint F_00ab2510(unsigned int gen_a0)
{
  GEN_ENTER(0xab2510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x52,param_1 + -2000000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2540 */
uint F_00ab2540(unsigned int gen_a0)
{
  GEN_ENTER(0xab2540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2570 */
uint F_00ab2570(unsigned int gen_a0)
{
  GEN_ENTER(0xab2570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x4b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab25a0 */
uint F_00ab25a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab25a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab25d0 */
uint F_00ab25d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab25d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2600 */
uint F_00ab2600(unsigned int gen_a0)
{
  GEN_ENTER(0xab2600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),6,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2630 */
uint F_00ab2630(unsigned int gen_a0)
{
  GEN_ENTER(0xab2630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xcd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2660 */
uint F_00ab2660(unsigned int gen_a0)
{
  GEN_ENTER(0xab2660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x77,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2690 */
uint F_00ab2690(unsigned int gen_a0)
{
  GEN_ENTER(0xab2690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x28,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab26c0 */
uint F_00ab26c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab26c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x114,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab26f0 */
uint F_00ab26f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab26f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2720 */
uint F_00ab2720(unsigned int gen_a0)
{
  GEN_ENTER(0xab2720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2750 */
uint F_00ab2750(unsigned int gen_a0)
{
  GEN_ENTER(0xab2750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x47,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2780 */
uint F_00ab2780(unsigned int gen_a0)
{
  GEN_ENTER(0xab2780u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab27b0 */
uint F_00ab27b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab27b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x112,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab27e0 */
uint F_00ab27e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab27e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2810 */
uint F_00ab2810(unsigned int gen_a0)
{
  GEN_ENTER(0xab2810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x142,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2840 */
uint F_00ab2840(unsigned int gen_a0)
{
  GEN_ENTER(0xab2840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2870 */
uint F_00ab2870(unsigned int gen_a0)
{
  GEN_ENTER(0xab2870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xae,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab28a0 */
uint F_00ab28a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab28a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x46,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab28d0 */
uint F_00ab28d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab28d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x43,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2900 */
uint F_00ab2900(unsigned int gen_a0)
{
  GEN_ENTER(0xab2900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2930 */
uint F_00ab2930(unsigned int gen_a0)
{
  GEN_ENTER(0xab2930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2960 */
uint F_00ab2960(unsigned int gen_a0)
{
  GEN_ENTER(0xab2960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x15,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2990 */
uint F_00ab2990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab2990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),4,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab29c0 */
uint F_00ab29c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab29c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x86,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab29f0 */
uint F_00ab29f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab29f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x135,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2a20 */
uint F_00ab2a20(unsigned int gen_a0)
{
  GEN_ENTER(0xab2a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x48,param_1);
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab2a50 */
uint F_00ab2a50(unsigned int gen_a0)
{
  GEN_ENTER(0xab2a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x60,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2a80 */
uint F_00ab2a80(unsigned int gen_a0)
{
  GEN_ENTER(0xab2a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x61,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ab0 */
uint F_00ab2ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x75,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ae0 */
uint F_00ab2ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),100,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2b10 */
uint F_00ab2b10(unsigned int gen_a0)
{
  GEN_ENTER(0xab2b10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x20,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2b40 */
uint F_00ab2b40(unsigned int gen_a0)
{
  GEN_ENTER(0xab2b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x79,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2b70 */
uint F_00ab2b70(unsigned int gen_a0)
{
  GEN_ENTER(0xab2b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x104,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ba0 */
uint F_00ab2ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2bd0 */
uint F_00ab2bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2bd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x118,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c00 */
uint F_00ab2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c30 */
uint F_00ab2c30(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x107,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c60 */
uint F_00ab2c60(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x108,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c90 */
uint F_00ab2c90(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2cc0 */
uint F_00ab2cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x139,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2cf0 */
uint F_00ab2cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x106,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2d20 */
uint F_00ab2d20(unsigned int gen_a0)
{
  GEN_ENTER(0xab2d20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x116,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2d50 */
uint F_00ab2d50(unsigned int gen_a0)
{
  GEN_ENTER(0xab2d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x130,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2d80 */
uint F_00ab2d80(unsigned int gen_a0)
{
  GEN_ENTER(0xab2d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd,param_1 + -30000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2db0 */
uint F_00ab2db0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2de0 */
uint F_00ab2de0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2de0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2e10 */
uint F_00ab2e10(unsigned int gen_a0)
{
  GEN_ENTER(0xab2e10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xf,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2e40 */
uint F_00ab2e40(unsigned int gen_a0)
{
  GEN_ENTER(0xab2e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x22,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2e70 */
uint F_00ab2e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab2e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x23,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ea0 */
uint F_00ab2ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),200,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ed0 */
uint F_00ab2ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x88,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f00 */
uint F_00ab2f00(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x38,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f30 */
uint F_00ab2f30(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f60 */
uint F_00ab2f60(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f90 */
uint F_00ab2f90(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x69,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2fc0 */
uint F_00ab2fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x129,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ff0 */
uint F_00ab2ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab2ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13e,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3020 */
uint F_00ab3020(unsigned int gen_a0)
{
  GEN_ENTER(0xab3020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x127,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3050 */
uint F_00ab3050(unsigned int gen_a0)
{
  GEN_ENTER(0xab3050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x125,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3080 */
uint F_00ab3080(unsigned int gen_a0)
{
  GEN_ENTER(0xab3080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x147,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab30b0 */
uint F_00ab30b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab30b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab30e0 */
uint F_00ab30e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab30e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3110 */
uint F_00ab3110(unsigned int gen_a0)
{
  GEN_ENTER(0xab3110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xda,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3140 */
uint F_00ab3140(unsigned int gen_a0)
{
  GEN_ENTER(0xab3140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3170 */
uint F_00ab3170(unsigned int gen_a0)
{
  GEN_ENTER(0xab3170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xca,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab31a0 */
uint F_00ab31a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab31a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x34,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab31d0 */
uint F_00ab31d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab31d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3200 */
uint F_00ab3200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab3200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  uVar3 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  uVar4 = 0;
  if ((uVar3 != 0) && (puVar1 = *(uint * PTR32 *)(uVar3 + 4), uVar4 = 0, puVar1 != (uint *)0x0)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x4)),param_2,param_3);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar4 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: FUN_00ab32a0 */
uint F_00ab32a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab32a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x4a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab32d0 */
uint F_00ab32d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab32d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x49,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3300 */
uint F_00ab3300(unsigned int gen_a0)
{
  GEN_ENTER(0xab3300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x70,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3330 */
uint F_00ab3330(unsigned int gen_a0)
{
  GEN_ENTER(0xab3330u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3360 */
uint F_00ab3360(unsigned int gen_a0)
{
  GEN_ENTER(0xab3360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3390 */
uint F_00ab3390(unsigned int gen_a0)
{
  GEN_ENTER(0xab3390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab33c0 */
uint F_00ab33c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab33c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab33f0 */
uint F_00ab33f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab33f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3420 */
uint F_00ab3420(unsigned int gen_a0)
{
  GEN_ENTER(0xab3420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3450 */
uint F_00ab3450(unsigned int gen_a0)
{
  GEN_ENTER(0xab3450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xfd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3480 */
uint F_00ab3480(unsigned int gen_a0)
{
  GEN_ENTER(0xab3480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab34b0 */
uint F_00ab34b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab34b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab34e0 */
uint F_00ab34e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab34e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3510 */
uint F_00ab3510(unsigned int gen_a0)
{
  GEN_ENTER(0xab3510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3540 */
uint F_00ab3540(unsigned int gen_a0)
{
  GEN_ENTER(0xab3540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3570 */
uint F_00ab3570(unsigned int gen_a0)
{
  GEN_ENTER(0xab3570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab35a0 */
uint F_00ab35a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab35a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x5e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab35d0 */
uint F_00ab35d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab35d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x91,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3600 */
uint F_00ab3600(unsigned int gen_a0)
{
  GEN_ENTER(0xab3600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x123,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3630 */
uint F_00ab3630(unsigned int gen_a0)
{
  GEN_ENTER(0xab3630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xbd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3660 */
uint F_00ab3660(unsigned int gen_a0)
{
  GEN_ENTER(0xab3660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3690 */
uint F_00ab3690(unsigned int gen_a0)
{
  GEN_ENTER(0xab3690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x148,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab36c0 */
uint F_00ab36c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab36c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab36f0 */
uint F_00ab36f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab36f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3720 */
uint F_00ab3720(unsigned int gen_a0)
{
  GEN_ENTER(0xab3720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3750 */
uint F_00ab3750(unsigned int gen_a0)
{
  GEN_ENTER(0xab3750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3780 */
uint F_00ab3780(unsigned int gen_a0)
{
  GEN_ENTER(0xab3780u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab37b0 */
uint F_00ab37b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab37b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab37e0 */
uint F_00ab37e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab37e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x51,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3810 */
uint F_00ab3810(unsigned int gen_a0)
{
  GEN_ENTER(0xab3810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x76,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3840 */
uint F_00ab3840(unsigned int gen_a0)
{
  GEN_ENTER(0xab3840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd6,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3870 */
uint F_00ab3870(unsigned int gen_a0)
{
  GEN_ENTER(0xab3870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab38a0 */
uint F_00ab38a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab38a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab38d0 */
uint F_00ab38d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab38d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x98,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3900 */
uint F_00ab3900(unsigned int gen_a0)
{
  GEN_ENTER(0xab3900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3930 */
uint F_00ab3930(unsigned int gen_a0)
{
  GEN_ENTER(0xab3930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3960 */
uint F_00ab3960(unsigned int gen_a0)
{
  GEN_ENTER(0xab3960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x82,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3990 */
uint F_00ab3990(unsigned int gen_a0)
{
  GEN_ENTER(0xab3990u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab39c0 */
uint F_00ab39c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab39c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab39f0 */
uint F_00ab39f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab39f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x84,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3a20 */
uint F_00ab3a20(unsigned int gen_a0)
{
  GEN_ENTER(0xab3a20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x85,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3a50 */
uint F_00ab3a50(unsigned int gen_a0)
{
  GEN_ENTER(0xab3a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x96,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3a80 */
uint F_00ab3a80(unsigned int gen_a0)
{
  GEN_ENTER(0xab3a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x97,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ab0 */
uint F_00ab3ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ae0 */
uint F_00ab3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3b10 */
uint F_00ab3b10(unsigned int gen_a0)
{
  GEN_ENTER(0xab3b10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3b40 */
uint F_00ab3b40(unsigned int gen_a0)
{
  GEN_ENTER(0xab3b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3b70 */
uint F_00ab3b70(unsigned int gen_a0)
{
  GEN_ENTER(0xab3b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ba0 */
uint F_00ab3ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x109,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3bd0 */
uint F_00ab3bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3bd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c00 */
uint F_00ab3c00(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x35,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c30 */
uint F_00ab3c30(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c60 */
uint F_00ab3c60(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),299,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c90 */
uint F_00ab3c90(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3cc0 */
uint F_00ab3cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x137,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3cf0 */
uint F_00ab3cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x149,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3d20 */
uint F_00ab3d20(unsigned int gen_a0)
{
  GEN_ENTER(0xab3d20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x92,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3d50 */
uint F_00ab3d50(unsigned int gen_a0)
{
  GEN_ENTER(0xab3d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x94,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3d80 */
uint F_00ab3d80(unsigned int gen_a0)
{
  GEN_ENTER(0xab3d80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xab,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3db0 */
uint F_00ab3db0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xfb,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3de0 */
uint F_00ab3de0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3de0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3e10 */
uint F_00ab3e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab3e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd7,param_1);
  uVar3 = 0;
  if ((uVar2 != 0) && (puVar1 = *(uint * PTR32 *)(uVar2 + 4), uVar3 = 0, puVar1 != (uint *)0x0)) {
    uVar3 = F_0042e430(param_2,(*puVar1 & 0xffffff) + (int)puVar1);
  }
  return uVar3;
}

/* ref: FUN_00ab3e50 */
uint F_00ab3e50(unsigned int gen_a0)
{
  GEN_ENTER(0xab3e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3e80 */
uint F_00ab3e80(unsigned int gen_a0)
{
  GEN_ENTER(0xab3e80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xce,param_1 + -0x120000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3eb0 */
uint F_00ab3eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3eb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ee0 */
uint F_00ab3ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3f10 */
uint F_00ab3f10(unsigned int gen_a0)
{
  GEN_ENTER(0xab3f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc9,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3f40 */
uint F_00ab3f40(unsigned int gen_a0)
{
  GEN_ENTER(0xab3f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3f70 */
uint F_00ab3f70(unsigned int gen_a0)
{
  GEN_ENTER(0xab3f70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3fa0 */
uint F_00ab3fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3fd0 */
uint F_00ab3fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab3fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  if ((char)param_1 == '\x01') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    if ((char)param_3 != '\0') {
      uVar2 = F_0052ff60(this,0xf4,param_2);
      iVar1 = REFG(int, 0x137104c);
      goto joined_r0x00ab405c;
    }
    uVar3 = 0xf5;
  }
  else if ((char)param_1 == '\x02') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    if ((char)param_3 == '\0') {
      uVar3 = 0xf7;
    }
    else {
      uVar3 = 0xf6;
    }
  }
  else {
    if ((char)param_1 != '\x03') {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    if ((char)param_3 == '\0') {
      uVar3 = 0xf9;
    }
    else {
      uVar3 = 0xf8;
    }
  }
  uVar2 = F_0052ff60(this,uVar3,param_2);
  iVar1 = REFG(int, 0x137104c);
joined_r0x00ab405c: ;
  if (uVar2 == 0) {
    REFG(int, 0x137104c) = iVar1;
    return 0;
  }
  REFG(int, 0x137104c) = iVar1;
  return *(uint *)(uVar2 + 4);
}

/* ref: FUN_00ab4070 */
uint F_00ab4070(unsigned int gen_a0)
{
  GEN_ENTER(0xab4070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe3,param_1 + -0x160000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab40a0 */
uint F_00ab40a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab40a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab40d0 */
uint F_00ab40d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab40d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4100 */
uint F_00ab4100(unsigned int gen_a0)
{
  GEN_ENTER(0xab4100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4130 */
uint F_00ab4130(unsigned int gen_a0)
{
  GEN_ENTER(0xab4130u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x119,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4160 */
uint F_00ab4160(unsigned int gen_a0)
{
  GEN_ENTER(0xab4160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4190 */
uint F_00ab4190(unsigned int gen_a0)
{
  GEN_ENTER(0xab4190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x131,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab41c0 */
uint F_00ab41c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab41c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x132,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab41f0 */
uint F_00ab41f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab41f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x133,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4220 */
uint F_00ab4220(unsigned int gen_a0)
{
  GEN_ENTER(0xab4220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4250 */
uint F_00ab4250(unsigned int gen_a0)
{
  GEN_ENTER(0xab4250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x141,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4280 */
uint F_00ab4280(unsigned int gen_a0)
{
  GEN_ENTER(0xab4280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x128,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab42b0 */
uint F_00ab42b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab42b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab42e0 */
uint F_00ab42e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab42e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xbb,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4310 */
uint F_00ab4310(unsigned int gen_a0)
{
  GEN_ENTER(0xab4310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x138,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4340 */
uint F_00ab4340(unsigned int gen_a0)
{
  GEN_ENTER(0xab4340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4370 */
uint F_00ab4370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xab4370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(undefined1)param_4);
  F_00990c20(((undefined1 *)(gen_frame + 0x10)));
  uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (uVar2 == 0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = *(uint * PTR32 *)(uVar2 + 4);
  }
  if ((param_2 != 0) && (param_3 != (int *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x98))(param_3);
    if ((char)uVar2 != '\0') {
      F_00990c50(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 0x88),0xffffffff,param_5);
      F_00990ca0(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_3 + 0x22),0xffffffff,0);
      if (puVar5 != (uint *)0x0) {
        pcVar4 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
        pcVar3 = pcVar4;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (pcVar3 != pcVar4 + 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x178)),0x100,"vfx/common/eff/%s.avfx",pcVar4);
          uVar2 = F_009cfc30(((undefined1 *)(gen_frame + 0x178)),((undefined1 *)(gen_frame + 0x10)),2,(*(undefined4 *)(gen_frame + 0x8)));
          F_00982d70();
          F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
          return uVar2;
        }
      }
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return 0;
}

/* ref: FUN_00ab44e0 */
uint F_00ab44e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab44e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_4);
  F_00990c20(((undefined1 *)(gen_frame + 0x10)));
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if ((uVar3 != 0) && (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 != (uint *)0x0)) {
    pcVar5 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar5 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x178)),0x100,"vfx/common/eff/%s.avfx",pcVar5);
      uVar3 = F_009cfd00(((undefined1 *)(gen_frame + 0x178)),2,(*(undefined4 *)(gen_frame + 0xc)),*param_2,param_2[1],param_2[2],param_3,param_3,
                           param_3,(float)(float10)0);
      F_00982d70();
      F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
      return uVar3;
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return 0;
}

/* ref: FUN_00ab4610 */
uint F_00ab4610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab4610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_3);
  F_00990c20(((undefined1 *)(gen_frame + 0x10)));
  uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (uVar2 == 0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = *(uint * PTR32 *)(uVar2 + 4);
  }
  if ((param_2 != 0) &&
     (F_00990c50(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 0x88),0xffffffff,1), puVar5 != (uint *)0x0)
     ) {
    pcVar4 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar4 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x178)),0x100,"vfx/common/eff/%s.avfx",pcVar4);
      uVar2 = F_009cfc30(((undefined1 *)(gen_frame + 0x178)),((undefined1 *)(gen_frame + 0x10)),2,(*(undefined4 *)(gen_frame + 0xc)));
      F_00982d70();
      F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
      return uVar2;
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return 0;
}

/* ref: FUN_00ab4730 */
uint F_00ab4730(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xab4730u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  char cVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  float * pfVar8;
  float * pfVar9;
  
  (*(uint *)(gen_frame + 0x2bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c0);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x48)) + 0)) = (undefined1)param_7;
  (*(undefined4 *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x48)), 1, 3),(undefined1)param_7);
  F_00990c20(((float *)(gen_frame + 0x50)));
  puVar3 = (uint *)F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (puVar3 == (uint *)0x0) {
    (*(uint * PTR32 *)(gen_frame + 0x4c)) = puVar3;
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x4c)) = (uint *)puVar3[1];
  }
  if (param_2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x98))(param_2);
    if ((char)uVar4 != '\0') {
      uVar2 = *(ushort *)(param_2 + 0x22);
      ((float *)(gen_frame + 0x0))[1] = 0.0;
      ((float *)(gen_frame + 0x0))[2] = 0.0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(float *)(gen_frame + 0x30)) = param_3;
      (*(float *)(gen_frame + 0x34)) = param_4;
      ((float *)(gen_frame + 0x0))[0] = param_6;
      (*(float *)(gen_frame + 0x14)) = param_6;
      (*(float *)(gen_frame + 0x28)) = param_6;
      (*(float *)(gen_frame + 0x38)) = param_5;
      F_00990c50(((float *)(gen_frame + 0x50)),(uint)uVar2,0xffffffff,0);
      pfVar8 = ((float *)(gen_frame + 0x0));
      pfVar9 = ((float *)(gen_frame + 0x50));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      if ((*(uint * PTR32 *)(gen_frame + 0x4c)) != (uint *)0x0) {
        pcVar7 = ((char *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x4c)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x4c)))));
        pcVar5 = pcVar7;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 != pcVar7 + 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x1b8)),0x100,"vfx/common/eff/%s.avfx",pcVar7);
          uVar4 = F_009cfc30(((undefined1 *)(gen_frame + 0x1b8)),((float *)(gen_frame + 0x50)),2,(*(undefined4 *)(gen_frame + 0x48)));
          F_00982d70();
          F_00c47745((*(uint *)(gen_frame + 0x2bc)) ^ (uint)(uint)(gen_frame + 0x2c0));
          return uVar4;
        }
      }
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x2bc)) ^ (uint)(uint)(gen_frame + 0x2c0));
  return 0;
}

/* ref: FUN_00ab4900 */
uint F_00ab4900(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xab4900u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  uint * puVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x28c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x290);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_7);
  F_00990c20(((undefined1 *)(gen_frame + 0x20)));
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x112,param_1);
  if ((uVar3 == 0) || (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 == (uint *)0x0)) {
LAB_00ab4991: ;
    F_00982d70();
    F_00c47745((*(uint *)(gen_frame + 0x28c)) ^ (uint)(uint)(gen_frame + 0x290));
    return 0;
  }
  pcVar7 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == pcVar7 + 1) goto LAB_00ab4991;
  if ((char)param_6 == '\0') {
    puVar6 = puVar2 + 1;
    pcVar5 = ((char *)GEN_TOP(((puVar2[1] & 0xffffff) + (int)puVar6)));
    pcVar4 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 != pcVar4) {
      pcVar7 = ((char *)GEN_TOP(((*puVar6 & 0xffffff) + (int)puVar6)));
      pcVar4 = "vfx/omen/eff/%s.avfx";
      goto override_prt_ab4a1b_112095b4;
    }
  }
  pcVar4 = "vfx/omen/eff/%s.avfx";
override_prt_ab4a1b_112095b4: ;
  F_00c472af(((undefined1 *)(gen_frame + 0x188)),0x100,pcVar4,pcVar7);
  uVar3 = F_009cfd00(((undefined1 *)(gen_frame + 0x188)),2,(*(undefined4 *)(gen_frame + 0xc)),*param_2,param_2[1],param_2[2],param_4,param_4,param_5,
                       param_3);
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x28c)) ^ (uint)(uint)(gen_frame + 0x290));
  return uVar3;
}

/* ref: FUN_00ab4aa0 */
uint F_00ab4aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xab4aa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x112,param_1);
  if ((uVar3 != 0) && (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 != (uint *)0x0)) {
    pcVar5 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar5 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x100,"vfx/omen/eff/%s.avfx",pcVar5);
      uVar3 = F_00990ad0(((undefined1 *)(gen_frame + 0x168)));
      F_00982d70();
      F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
      return uVar3;
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
  return 0;
}

/* ref: FUN_00ab4b90 */
unsigned int F_00ab4b90(unsigned int gen_a0)
{
  GEN_ENTER(0xab4b90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int, 0x14bcc68) != 0) {
    F_00ab0810((undefined *)(REFG(int, 0x14bcc68) + 0x10),param_1);
  }
  return 0;
}

/* ref: FUN_00ab4bb0 */
unsigned int F_00ab4bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xab4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (REFG(void * PTR32, 0x14bcc68) != (undefined *)0x0) {
    F_00ab09a0(REFG(void * PTR32, 0x14bcc68),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return 0;
}

/* ref: FUN_00ab4be0 */
unsigned int F_00ab4be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab4be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  if (((REFG(int, 0x14bcc68) != 0) && (param_2 < *(uint *)(REFG(int, 0x14bcc68) + 8))) &&
     (iVar1 = param_2 * 0x50 + *(int *)(REFG(int, 0x14bcc68) + 0xa0), *(int *)(iVar1 + 0x48) != 1)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x16) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    *(undefined2 *)(iVar1 + 0x12) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  return 0;
}

/* ref: FUN_00ab4c40 */
unsigned int F_00ab4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab4c40u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(int, 0x14bcc68) != 0) && (param_1 < *(uint *)(REFG(int, 0x14bcc68) + 8))) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x14bcc68) + 0xa0) + 0x48 + param_1 * 0x50))) = param_2;
  }
  return 0;
}

/* ref: FUN_00ab4c70 */
uint F_00ab4c70(void)
{
  GEN_ENTER(0xab4c70u, 0u, 0u, 0u, 0u);
  int * piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (REFG(int, 0x14bcc68) != 0) {
    uVar7 = 0;
    piVar1 = (int *)(REFG(int, 0x14bcc68) + 0xa0);
    if (*(int *)(REFG(int, 0x14bcc68) + 8) != 0) {
      iVar6 = 0;
      iVar5 = REFG(int, 0x14bcc68);
      do {
        uVar2 = *(ushort *)(iVar6 + 0x10 + *piVar1);
        if ((((uVar2 != 0) && (1000 < uVar2)) &&
            (uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x85,(uint)uVar2),
            iVar5 = REFG(int, 0x14bcc68), uVar4 != 0)) &&
           (((iVar3 = *(int *)(uVar4 + 4), iVar3 != 0 && (*(short *)(iVar3 + 4) != 0)) &&
            (*(short *)(iVar3 + 4) != 1)))) {
          return (uint)*(ushort *)(iVar3 + 4);
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x50;
      } while (uVar7 < *(uint *)(iVar5 + 8));
    }
  }
  return 0;
}

/* ref: FUN_00ab4cf0 */
uint F_00ab4cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab4cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,param_1);
  if (uVar1 != 0) {
    if (*(uint *)(uVar1 + 4) != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab4dc0 */
uint F_00ab4dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab4dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x78))))(*(int * PTR32 *)((int)this + 0x14),500);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  return 0;
}

