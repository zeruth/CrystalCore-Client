#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0071cff0 */
GEN_FRAME uint GEN_THISCALL F_0071cff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71cff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x2d90 + param_2 * 4);
}

/* ref: FUN_0071d020 */
GEN_FRAME uint GEN_THISCALL F_0071d020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + param_1 * 4) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x28) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x78 + (int)this) = 0;
  *(undefined1 *)(param_1 + 0x82 + (int)this) = 0;
  return param_1;
}

/* ref: FUN_0071d0b0 */
GEN_FRAME uint GEN_THISCALL F_0071d0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae0fc0(*(undefined * PTR32 *)((int)this + 0x1a8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0071d130 */
GEN_FRAME uint GEN_THISCALL F_0071d130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x71d130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00536cc0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_0071d160 */
GEN_FRAME uint GEN_THISCALL F_0071d160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x71d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00536d10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_0071d1a0 */
GEN_NOFRAME uint GEN_THISCALL F_0071d1a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71d1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x12) = 30000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  return (uint)this;
}

/* ref: FUN_0071d1f0 */
GEN_FRAME uint GEN_THISCALL F_0071d1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return param_1;
}

/* ref: FUN_0071d210 */
GEN_NOFRAME ushort GEN_THISCALL F_0071d210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71d210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this GEN_EDX_FWD);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this GEN_EDX_ARG);
      uVar1 = F_0071d210(this_00 GEN_EDX_ARG);
      return uVar1;
    }
  }
  return *(ushort *)((int)this + 0x10);
}

/* ref: FUN_0071d240 */
GEN_FRAME ushort GEN_THISCALL F_0071d240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0071d250 */
GEN_FRAME ushort GEN_THISCALL F_0071d250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x12) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0071d260 */
GEN_FRAME byte GEN_THISCALL F_0071d260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071d270 */
GEN_FRAME uint GEN_THISCALL F_0071d270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_0071d280 */
GEN_FRAME byte GEN_THISCALL F_0071d280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071d2a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0071d2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) | 1;
    return;
  }
  *(byte *)(in_ecx + 0x14) = *(byte *)(in_ecx + 0x14) & 0xfe;
  return;
}

/* ref: FUN_0071d2c0 */
GEN_FRAME ushort GEN_THISCALL F_0071d2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this GEN_EDX_FWD);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this GEN_EDX_ARG);
      uVar1 = F_0071d2c0(this_00 GEN_EDX_ARG,param_1);
      return uVar1;
    }
  }
  return *((ushort *)GEN_TOP(((int)this + (param_1 & 0xff) * 2 + 0x20)));
}

/* ref: FUN_0071d300 */
GEN_FRAME byte GEN_THISCALL F_0071d300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(char *)((int)this + 6) != '\0') {
    uVar2 = F_00a3a860(this GEN_EDX_FWD);
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00a3a860(this GEN_EDX_ARG);
      bVar1 = F_0071d300(this_00 GEN_EDX_ARG,param_1);
      return bVar1;
    }
  }
  return *((byte *)GEN_TOP(((param_1 & 0xff) + 0x2a + (int)this)));
}

/* ref: FUN_0071d340 */
GEN_FRAME uint GEN_THISCALL F_0071d340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + (uint)(byte)param_1 * 2 + 0x20) = (undefined2)param_2;
  return (uint)(byte)param_1;
}

/* ref: FUN_0071d360 */
GEN_FRAME uint GEN_THISCALL F_0071d360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((byte)param_1 + 0x2a + (int)this) = (undefined1)param_2;
  return (uint)(byte)param_1;
}

/* ref: FUN_0071d3a0 */
GEN_NOFRAME uint GEN_THISCALL F_0071d3a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71d3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 6) == '\0') && (*(int *)(in_ecx + 8) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0071d3c0 */
GEN_NOFRAME uint GEN_THISCALL F_0071d3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71d3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x75300000;
  *(undefined1 *)((int)this + 0x2f) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  F_00a35f30(this GEN_EDX_FWD);
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::InventoryContextEvent::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071d430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071d490 */
GEN_FRAME byte GEN_THISCALL F_0071d490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2db64) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::UI::GameEventCallback::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071d500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::FormatStringCallbackInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071d550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ActionTimelineCallbackInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071d5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8184));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ListenItemCallbackInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071d5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf112 */
GEN_NOFRAME uint GEN_THISCALL F_0071d730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf116 */
GEN_FRAME uint GEN_THISCALL F_0071d760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (byte)~*(byte *)(param_1 + 0x70) & 1;
}

/* ref: Client::Game::Event::EventHandler::vf128 */
GEN_NOFRAME uint GEN_THISCALL F_0071d780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71d780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf127 */
GEN_FRAME uint GEN_THISCALL F_0071d790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1[0x20];
  iVar2 = param_1[0x1e];
  iVar3 = *(int *)this;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xa8))(param_1 GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG,iVar1,iVar2,uVar4);
  uVar4 = ((code *)*(gen_code32 *)(iVar3 + 0x200))(this,uVar4);
  return uVar4;
}

/* ref: FUN_0071d7e0 */
GEN_FRAME uint GEN_THISCALL F_0071d7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071d7f0 */
GEN_FRAME uint GEN_THISCALL F_0071d7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x7c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0071d820 */
GEN_FRAME uint GEN_THISCALL F_0071d820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d820u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2;
  return param_2;
}

/* ref: FUN_0071d830 */
GEN_FRAME uint GEN_THISCALL F_0071d830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: FUN_0071d860 */
GEN_FRAME uint GEN_THISCALL F_0071d860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  *(undefined1 *)((int)this + 0xa8) = 1;
  return (uint)this;
}

/* ref: FUN_0071d8b0 */
GEN_FRAME uint GEN_THISCALL F_0071d8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71d8b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x180) = param_2;
  return param_2;
}

/* ref: FUN_0071d900 */
GEN_FRAME uint GEN_THISCALL F_0071d900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71d900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cb4700(this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b81a4));
  return (uint)this;
}

/* ref: FUN_0071d950 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0071d950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71d950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * puVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042e430((undefined *)((int)this + 0xc) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 0x71) = 0;
  iVar1 = 0;
  puVar2 = (undefined2 *)((int)this + 0x62);
  do {
    *puVar2 = 0;
    *(undefined1 *)((int)this + iVar1 + 0x6c) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 5);
  *(undefined2 *)((int)this + 0x72) = 1;
  return 0;
}

/* ref: FUN_0071d9a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0071d9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71d9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)this = 0;
  iVar3 = (int)this + 0x77;
  iVar4 = 5;
  do {
    *(undefined4 *)(iVar3 - 0x73) = 0;
    *(undefined4 *)(iVar3 - 0x6f) = 0;
    *(undefined4 *)(iVar3 - 0x6b) = 0;
    F_0042e430((undefined *)(iVar3 - 0x67) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
    *(undefined1 *)(iVar3 - 0x13) = 0;
    *(undefined1 *)(iVar3 - 2) = 0;
    iVar1 = 0;
    puVar2 = (undefined2 *)(iVar3 - 0x11);
    do {
      *puVar2 = 0;
      *(undefined1 *)(iVar3 - 7 + iVar1) = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < 5);
    *(undefined2 *)(iVar3 - 1) = 1;
    iVar3 = iVar3 + 0x74;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_0071da40 */
GEN_FRAME byte GEN_THISCALL F_0071da40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71da40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(byte *)((int)this + 8) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_0071db00 */
GEN_FRAME byte GEN_THISCALL F_0071db00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71db00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x22f + in_ecx);
}

/* ref: FUN_0071db40 */
GEN_FRAME byte GEN_THISCALL F_0071db40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71db40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x9ec) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071db50 */
GEN_NOFRAME uint GEN_THISCALL F_0071db50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71db50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  F_0042b630((int)this + 0x38 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  F_0042b630((int)this + 0x9c GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0071dbc0 */
GEN_NOFRAME uint GEN_THISCALL F_0071dbc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71dbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x58) = 9999;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x5e) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x75300000;
  *(undefined1 *)((int)this + 0x87) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined1 *)((int)this + 0x86) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  F_00a35f30((undefined *)((int)this + 0x58) GEN_EDX_ARG);
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return (uint)this;
}

/* ref: FUN_0071dc90 */
GEN_FRAME uint GEN_THISCALL F_0071dc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71dc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3aa4) = param_2;
  return param_2;
}

/* ref: FUN_0071dca0 */
GEN_NOFRAME uint GEN_THISCALL F_0071dca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71dca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x9c) GEN_EDX_FWD);
  uVar1 = F_0042c880((undefined *)((int)this + 0x38) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0071dcf0 */
GEN_NOFRAME uint GEN_THISCALL F_0071dcf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71dcf0u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  *(undefined4 *)(in_ecx + 0x70) = 0;
  *(undefined4 *)(in_ecx + 0x74) = 0;
  *(undefined4 *)(in_ecx + 0x78) = 0;
  *(undefined2 *)(in_ecx + 0x5c) = 0x100;
  *(undefined4 *)(in_ecx + 0x7c) = 0;
  *(undefined4 *)(in_ecx + 0x80) = 0;
  *(undefined4 *)(in_ecx + 0x94) = 0;
  *(undefined4 *)(in_ecx + 0x98) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 200) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  *(undefined4 *)(in_ecx + 0xf4) = 0;
  *(undefined4 *)(in_ecx + 0xf8) = 0;
  *(undefined4 *)(in_ecx + 0x10c) = 0;
  *(undefined4 *)(in_ecx + 0x110) = 0;
  *(undefined4 *)(in_ecx + 0x124) = 0;
  *(undefined4 *)(in_ecx + 0x128) = 0;
  *(undefined4 *)(in_ecx + 0x84) = 0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(undefined4 *)(in_ecx + 0x8c) = 0;
  *(undefined4 *)(in_ecx + 0x90) = 0;
  *(undefined4 *)(in_ecx + 0x9c) = 0;
  *(undefined4 *)(in_ecx + 0xa0) = 0;
  *(undefined4 *)(in_ecx + 0xa4) = 0;
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xb4) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xcc) = 0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined4 *)(in_ecx + 0xe4) = 0;
  *(undefined4 *)(in_ecx + 0xe8) = 0;
  *(undefined4 *)(in_ecx + 0xec) = 0;
  *(undefined4 *)(in_ecx + 0xf0) = 0;
  *(undefined4 *)(in_ecx + 0xfc) = 0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  *(undefined4 *)(in_ecx + 0x104) = 0;
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(undefined4 *)(in_ecx + 0x114) = 0;
  *(undefined4 *)(in_ecx + 0x118) = 0;
  *(undefined4 *)(in_ecx + 0x11c) = 0;
  *(undefined4 *)(in_ecx + 0x120) = 0;
  *(undefined4 *)(in_ecx + 300) = 0;
  *(undefined4 *)(in_ecx + 0x130) = 0;
  *(undefined4 *)(in_ecx + 0x134) = 0;
  *(undefined4 *)(in_ecx + 0x138) = 0;
  *(undefined4 *)(in_ecx + 0x13c) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0071de90 */
GEN_FRAME byte GEN_THISCALL F_0071de90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71de90u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071deb0 */
GEN_FRAME uint GEN_THISCALL F_0071deb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71deb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_0071dec0 */
GEN_FRAME uint GEN_THISCALL F_0071dec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71dec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0071ded0 */
GEN_FRAME uint GEN_THISCALL F_0071ded0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ded0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071dee0 */
GEN_FRAME uint GEN_THISCALL F_0071dee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71dee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 100) = param_2;
  return param_2;
}

/* ref: FUN_0071def0 */
GEN_FRAME uint GEN_THISCALL F_0071def0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71def0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071df00 */
GEN_FRAME uint GEN_THISCALL F_0071df00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71df00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_0071df10 */
GEN_FRAME uint GEN_THISCALL F_0071df10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71df10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  *(uint *)((int)this + 0x60) = param_3;
  uVar1 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
  *(uint *)((int)this + 0x68) = param_1 + param_3;
  *(int *)((int)this + 100) = param_4;
  *(uint *)((int)this + 0x6c) = uVar1;
  return uVar1;
}

/* ref: FUN_0071df50 */
GEN_FRAME uint GEN_THISCALL F_0071df50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71df50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_0071df60 */
GEN_FRAME uint GEN_THISCALL F_0071df60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71df60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: FUN_0071df70 */
GEN_FRAME uint GEN_THISCALL F_0071df70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71df70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x78) = param_2;
  return param_2;
}

/* ref: FUN_0071df80 */
GEN_FRAME byte GEN_THISCALL F_0071df80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x71df80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *(uint *)(param_1 + 0x13c);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar3 = (int *)(param_1 + 0x7c);
    do {
      if (*piVar3 == param_2) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 6;
    } while (uVar2 < uVar1);
  }
  if (7 < uVar1) {
    return 0;
  }
  *(int *)(param_1 + 0x7c + uVar1 * 0x18) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x80 + *(int *)(param_1 + 0x13c) * 0x18))) = param_3;
  *((float *)GEN_TOP((param_1 + 0x84 + *(int *)(param_1 + 0x13c) * 0x18))) = param_4;
  *((float *)GEN_TOP((param_1 + 0x88 + *(int *)(param_1 + 0x13c) * 0x18))) = param_5;
  *((float *)GEN_TOP((param_1 + 0x8c + *(int *)(param_1 + 0x13c) * 0x18))) = param_6;
  *((float *)GEN_TOP((param_1 + (*(int *)(param_1 + 0x13c) * 3 + 0x12) * 8))) = param_7;
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
  return 1;
}

/* ref: FUN_0071e040 */
GEN_FRAME byte GEN_THISCALL F_0071e040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  uVar1 = *(uint *)((int)this + 0x13c);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar4 = (int *)((int)this + 0x7c);
    do {
      if (*piVar4 == param_1) {
        if (uVar2 < uVar1 - 1) {
          puVar3 = (undefined4 *)((int)this + uVar2 * 0x18 + 0x7c);
          do {
            *puVar3 = puVar3[6];
            puVar3[1] = puVar3[7];
            puVar3[2] = puVar3[8];
            puVar3[3] = puVar3[9];
            puVar3[4] = puVar3[10];
            puVar3[5] = puVar3[0xb];
            uVar2 = uVar2 + 1;
            puVar3 = puVar3 + 6;
          } while (uVar2 < *(int *)((int)this + 0x13c) - 1U);
        }
        *(int *)((int)this + 0x13c) = *(int *)((int)this + 0x13c) - 1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 6;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: Client::Game::Event::Director::vf153 */
GEN_NOFRAME unsigned int F_0071e150(void)
{
  GEN_ENTER(0x71e150u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0071e160 */
GEN_FRAME uint GEN_THISCALL F_0071e160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x23c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0071e170 */
GEN_FRAME uint GEN_THISCALL F_0071e170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042e430((undefined *)((int)this + 0x290) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0071e180 */
GEN_FRAME uint GEN_THISCALL F_0071e180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71e180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  *(uint *)((int)this + 0x2e8) = param_3;
  uVar1 = param_2 + param_4 + (uint)CARRY4(param_1,param_3);
  *(uint *)((int)this + 0x2f0) = param_1 + param_3;
  *(int *)((int)this + 0x2ec) = param_4;
  *(uint *)((int)this + 0x2f4) = uVar1;
  return uVar1;
}

/* ref: FUN_0071e1d0 */
GEN_FRAME uint GEN_THISCALL F_0071e1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_0071e240 */
GEN_FRAME uint GEN_THISCALL F_0071e240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cc20(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_0071e290 */
GEN_FRAME uint GEN_THISCALL F_0071e290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 8 + in_ecx;
}

/* ref: FUN_0071e340 */
GEN_FRAME uint GEN_THISCALL F_0071e340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1074 + in_ecx;
}

/* ref: FUN_0071e360 */
GEN_FRAME uint GEN_THISCALL F_0071e360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x113c + in_ecx;
}

/* ref: FUN_0071e380 */
GEN_FRAME uint GEN_THISCALL F_0071e380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1164 + in_ecx;
}

/* ref: FUN_0071e3a0 */
GEN_FRAME uint GEN_THISCALL F_0071e3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x11a0 + in_ecx;
}

/* ref: FUN_0071e3c0 */
GEN_FRAME uint GEN_THISCALL F_0071e3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x11f0 + in_ecx;
}

/* ref: FUN_0071e3e0 */
GEN_FRAME uint GEN_THISCALL F_0071e3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e3e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x12ea + in_ecx;
}

/* ref: FUN_0071e400 */
GEN_FRAME uint GEN_THISCALL F_0071e400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x13b4 + param_2 * 0x10;
}

/* ref: FUN_0071e420 */
GEN_FRAME uint GEN_THISCALL F_0071e420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1594 + in_ecx;
}

/* ref: FUN_0071e440 */
GEN_FRAME uint GEN_THISCALL F_0071e440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1684 + param_2 * 0x10;
}

/* ref: FUN_0071e460 */
GEN_FRAME uint GEN_THISCALL F_0071e460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x113c + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_0071e480 */
GEN_FRAME uint GEN_THISCALL F_0071e480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x11a0 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_0071e4a0 */
GEN_FRAME uint GEN_THISCALL F_0071e4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x1594 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_0071e4c0 */
GEN_FRAME uint GEN_THISCALL F_0071e4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x13b4 + param_2 * 0x10;
}

/* ref: FUN_0071e4e0 */
GEN_FRAME uint GEN_THISCALL F_0071e4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1684 + param_2 * 0x10;
}

/* ref: FUN_0071e500 */
GEN_NOFRAME uint GEN_THISCALL F_0071e500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71e500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x1000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 0x18) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x6c) = 0;
  return uVar1;
}

/* ref: FUN_0071e540 */
GEN_FRAME uint GEN_THISCALL F_0071e540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e540u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((int)*in_ecx < (int)param_2) {
    *in_ecx = param_2;
  }
  return param_2;
}

/* ref: FUN_0071e600 */
GEN_FRAME byte GEN_THISCALL F_0071e600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb090 + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0071e630 */
GEN_FRAME byte GEN_THISCALL F_0071e630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0cc + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0071e660 */
GEN_FRAME byte GEN_THISCALL F_0071e660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb09c + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0071e690 */
GEN_FRAME uint GEN_THISCALL F_0071e690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0071e6b0 */
GEN_FRAME uint GEN_THISCALL F_0071e6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71e6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: Client::Game::Event::EventSceneModuleImplInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071e790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071e7c0 */
GEN_FRAME uint GEN_THISCALL F_0071e7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[136])REFP(0x10b83dc));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071e7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071e820 */
GEN_FRAME uint GEN_THISCALL F_0071e820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[136])REFP(0x10b8604));
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071e850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071e880 */
GEN_FRAME uint GEN_THISCALL F_0071e880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[136])REFP(0x10b882c));
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_0071e8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_0071e8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_0071e8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_0071e8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_0071e8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_0071e900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf19 */
GEN_NOFRAME uint GEN_THISCALL F_0071e910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_0071e920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf21 */
GEN_NOFRAME uint GEN_THISCALL F_0071e930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf22 */
GEN_NOFRAME uint GEN_THISCALL F_0071e940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_0071e950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_0071e960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_0071e970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf26 */
GEN_NOFRAME uint GEN_THISCALL F_0071e980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf27 */
GEN_NOFRAME uint GEN_THISCALL F_0071e990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf28 */
GEN_NOFRAME uint GEN_THISCALL F_0071e9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf29 */
GEN_NOFRAME uint GEN_THISCALL F_0071e9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf30 */
GEN_NOFRAME uint GEN_THISCALL F_0071e9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf31 */
GEN_NOFRAME uint GEN_THISCALL F_0071e9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf32 */
GEN_NOFRAME uint GEN_THISCALL F_0071e9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_0071e9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71e9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf34 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf35 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf40 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf41 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf46 */
GEN_NOFRAME uint GEN_THISCALL F_0071ea90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ea90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf47 */
GEN_NOFRAME uint GEN_THISCALL F_0071eaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf48 */
GEN_NOFRAME uint GEN_THISCALL F_0071eab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf49 */
GEN_NOFRAME uint GEN_THISCALL F_0071eac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf50 */
GEN_NOFRAME uint GEN_THISCALL F_0071ead0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf51 */
GEN_NOFRAME uint GEN_THISCALL F_0071eae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf53 */
GEN_NOFRAME uint GEN_THISCALL F_0071eaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf54 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf55 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf56 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf57 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf58 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf66 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf71 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf73 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf76 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf78 */
GEN_NOFRAME uint GEN_THISCALL F_0071eb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf81 */
GEN_NOFRAME uint GEN_THISCALL F_0071eba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf82 */
GEN_NOFRAME uint GEN_THISCALL F_0071ebb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf83 */
GEN_NOFRAME uint GEN_THISCALL F_0071ebc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf87 */
GEN_NOFRAME uint GEN_THISCALL F_0071ebd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf93 */
GEN_NOFRAME uint GEN_THISCALL F_0071ebe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf94 */
GEN_NOFRAME uint GEN_THISCALL F_0071ebf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf103 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf69 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf70 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf91 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf92 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf52 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf104 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf105 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf115 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf117 */
GEN_NOFRAME uint GEN_THISCALL F_0071ec90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ec90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf120 */
GEN_NOFRAME uint GEN_THISCALL F_0071eca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf122 */
GEN_NOFRAME uint GEN_THISCALL F_0071ecb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf125 */
GEN_NOFRAME uint GEN_THISCALL F_0071ecc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf127 */
GEN_NOFRAME uint GEN_THISCALL F_0071ecd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_0071ece0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ece0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf135 */
GEN_NOFRAME uint GEN_THISCALL F_0071ecf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071ed00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ed00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[136])REFP(0x10b81b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0071ed40 */
GEN_FRAME uint GEN_THISCALL F_0071ed40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ed40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xc0) = *param_2;
  *(undefined4 *)(in_ecx + 0xc4) = param_2[1];
  *(undefined4 *)(in_ecx + 200) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0071ed70 */
GEN_FRAME uint GEN_THISCALL F_0071ed70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ed70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_0071ed90 */
GEN_FRAME byte GEN_THISCALL F_0071ed90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71ed90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0xd4 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071edb0 */
GEN_FRAME byte GEN_THISCALL F_0071edb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71edb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0xd4 + in_ecx);
}

/* ref: FUN_0071edd0 */
GEN_FRAME byte GEN_THISCALL F_0071edd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71edd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd3) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071edf0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0071edf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71edf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 4;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x7e) = 0x1010101;
  *(undefined2 *)((int)this + 0x82) = 0x101;
  *(undefined1 *)((int)this + 0x84) = 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return 0;
}

/* ref: FUN_0071ee90 */
GEN_FRAME uint GEN_THISCALL F_0071ee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x71ee90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_5;
  return (uint)this;
}

/* ref: FUN_0071eec0 */
GEN_FRAME uint GEN_THISCALL F_0071eec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71eec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined2 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_0071eef0 */
GEN_FRAME uint GEN_THISCALL F_0071eef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x71eef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_0071ef10 */
GEN_FRAME uint GEN_THISCALL F_0071ef10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ef10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)(in_ecx + 1) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_0071ef80 */
GEN_FRAME unsigned int GEN_THISCALL F_0071ef80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x71ef80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined2 *)((int)this + 0xe) = (undefined2)param_6;
  *(undefined1 *)((int)this + 0xc) = 3;
  *(byte *)((int)this + 0x10) =
       (((((((byte)param_13 & 1) * '\x02' | (byte)param_12 & 1) * '\x02' | (byte)param_11 & 1) *
          '\x02' | (byte)param_10 & 1) * '\x02' | (byte)param_9 & 1) * '\x02' | (byte)param_8 & 1) *
       '\x02' | *(byte *)((int)this + 0x10) & 0x80 | (byte)param_7 & 1;
  return 0;
}

/* ref: FUN_0071f000 */
GEN_FRAME uint GEN_THISCALL F_0071f000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71f000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  *(undefined1 *)this = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x24) = 0;
  puVar3 = param_1;
  puVar5 = this;
  for (iVar2 = 8; puVar5 = puVar5 + 1, iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar4 = 0;
  piVar6 = this;
  while( true ) {
    piVar6 = piVar6 + 1;
    if (*piVar6 == 0) {
      return (uint)this;
    }
    uVar1 = F_00ab37e0(*piVar6);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x24) == 0x33)) break;
    uVar4 = uVar4 + 1;
    if (7 < uVar4) {
      return (uint)this;
    }
  }
  *(undefined1 *)((int)this + 0x24) = 1;
  return (uint)this;
}

/* ref: FUN_0071f0b0 */
GEN_FRAME byte GEN_THISCALL F_0071f0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71f0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x148) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0071f0c0 */
GEN_NOFRAME uint GEN_THISCALL F_0071f0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71f0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 8) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0xffff;
  return uVar1;
}

/* ref: FUN_0071f160 */
GEN_FRAME uint GEN_THISCALL F_0071f160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71f160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined1 *)((int)this + 2) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_0071f180 */
GEN_FRAME uint GEN_THISCALL F_0071f180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x71f180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined2 *)((int)this + 0x2c) = (undefined2)param_2;
  F_0042cc20((undefined *)((int)this + 0x30) GEN_EDX_FWD,param_3,REFG(undefined4, 0x108cc50));
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = param_4;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: Client::Game::Event::SelectEventListCallback::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071f250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_NOFRAME unsigned int GEN_THISCALL F_0071f330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71f330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf5 */
GEN_NOFRAME byte F_0071f340(void)
{
  GEN_ENTER(0x71f340u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071f350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
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
GEN_FRAME uint GEN_THISCALL F_0071f550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
GEN_FRAME uint GEN_THISCALL F_0071f5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_0071f640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME byte GEN_THISCALL F_0071f6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
GEN_FRAME uint GEN_THISCALL F_0071f6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71f6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_008e9c10(this GEN_EDX_FWD);
  *(uint *)((int)this + 0x18) = param_1;
  return param_1;
}

/* ref: Client::Game::Event::TalkCallback::TalkEventImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071f730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 8))(param_2 GEN_EDX_FWD);
  }
  *(char *)(param_1 + 1) = cVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::TalkCallback::TalkAsyncEventImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_0071f7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  F_0042cbc0((undefined *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6);
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  return (uint)this;
}

/* ref: FUN_0071f880 */
GEN_FRAME uint GEN_THISCALL F_0071f880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71f880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004adca0(this GEN_EDX_FWD,7,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0071f8a0 */
GEN_FRAME uint GEN_THISCALL F_0071f8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071f970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_NOFRAME byte F_0071f9f0(void)
{
  GEN_ENTER(0x71f9f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf5 */
GEN_NOFRAME byte F_0071fa00(void)
{
  GEN_ENTER(0x71fa00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::CharacterTaskBase::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_0071fa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x71fa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_0071fa20 */
GEN_FRAME uint GEN_THISCALL F_0071fa20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_0071fac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_0071fb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_0071fb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
GEN_FRAME uint GEN_THISCALL F_0071fb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
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
GEN_FRAME uint GEN_THISCALL F_0071fba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
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
GEN_FRAME uint GEN_THISCALL F_0071fbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_0071fc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
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
GEN_FRAME uint GEN_THISCALL F_0071fc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71fc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0071fcb0 */
GEN_NOFRAME uint GEN_THISCALL F_0071fcb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71fcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0071fd20 */
GEN_FRAME uint GEN_THISCALL F_0071fd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71fd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 2);
  F_0042cbc0((undefined *)((int)this + 0x58) GEN_EDX_ARG,param_1 + 0x2c);
  *(undefined2 *)((int)this + 0xac) = param_1[0x56];
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0x5a);
  return (uint)this;
}

/* ref: FUN_0071fd80 */
GEN_NOFRAME uint GEN_THISCALL F_0071fd80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71fd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x58) GEN_EDX_FWD);
  uVar1 = F_0042c880((undefined *)((int)this + 4) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0071fda0 */
GEN_NOFRAME uint GEN_THISCALL F_0071fda0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71fda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x268) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x204) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x150) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xfc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0071fe40 */
GEN_NOFRAME uint GEN_THISCALL F_0071fe40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x71fe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa0) GEN_EDX_FWD);
  uVar1 = F_0042c880((undefined *)((int)this + 0x3c) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0071ff70 */
GEN_FRAME uint GEN_THISCALL F_0071ff70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x71ff70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  F_0042cbc0((undefined *)((int)this + 0x14) GEN_EDX_FWD,param_1 + 5);
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
GEN_NOFRAME unsigned int F_00720065(void)
{
  GEN_ENTER(0x720065u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00720090 */
GEN_NOFRAME uint GEN_THISCALL F_00720090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x720090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 4;
  this_00 = (undefined *)((int)this + 0x254);
  do {
    this_00 = (undefined *)((int)this_00 - 0x74);
    uVar2 = F_0042c880(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_007200b0 */
GEN_NOFRAME uint GEN_THISCALL F_007200b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7200b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x1c GEN_EDX_FWD);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042e430((undefined *)((int)this + 0x1c) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  return (uint)this;
}

/* ref: FUN_00720120 */
GEN_FRAME uint GEN_THISCALL F_00720120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  F_0042cbc0((undefined *)((int)this + 0x1c) GEN_EDX_FWD,param_1 + 7);
  puVar2 = param_1 + 0x1c;
  puVar3 = (undefined4 *)((int)this + 0x70);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00720190 */
GEN_FRAME uint GEN_THISCALL F_00720190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  F_0042cc20((undefined *)((int)this + 0x20) GEN_EDX_FWD,(*param_2 & 0xffffff) + (int)param_2,REFG(undefined4, 0x108cc50));
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
GEN_FRAME uint GEN_THISCALL F_00720260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_NOFRAME uint GEN_THISCALL F_00720290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x720290u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_007202d0 */
GEN_FRAME uint GEN_THISCALL F_007202d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7202d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b99750(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[152])REFP(0x10b8e14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[3])REFP(0x10b8e04));
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandler::vf81 */
GEN_NOFRAME unsigned int F_00720300(void)
{
  GEN_ENTER(0x720300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::EventHandler::vf82 */
GEN_NOFRAME unsigned int F_00720310(void)
{
  GEN_ENTER(0x720310u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::EventHandler::vf94 */
GEN_NOFRAME unsigned int F_00720320(void)
{
  GEN_ENTER(0x720320u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::EventHandler::vf110 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00720330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Game::Event::EventHandler::vf113 */
GEN_NOFRAME uint GEN_THISCALL F_00720340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x208))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf117 */
GEN_FRAME byte GEN_THISCALL F_00720350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (byte)param_2;
}

/* ref: Client::Game::Event::EventHandler::vf118 */
GEN_NOFRAME uint GEN_THISCALL F_00720360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf119 */
GEN_NOFRAME uint GEN_THISCALL F_00720370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf122 */
GEN_NOFRAME uint GEN_THISCALL F_00720380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf123 */
GEN_NOFRAME byte GEN_THISCALL F_00720390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x720390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf124 */
GEN_NOFRAME unsigned int F_007203a0(void)
{
  GEN_ENTER(0x7203a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::EventHandler::vf125 */
GEN_NOFRAME unsigned int F_007203b0(void)
{
  GEN_ENTER(0x7203b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Event::EventHandler::vf129 */
GEN_FRAME uint GEN_THISCALL F_007203c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x200))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf130 */
GEN_NOFRAME uint GEN_THISCALL F_007203d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf138 */
GEN_NOFRAME uint GEN_THISCALL F_007203e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7203e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf139 */
GEN_NOFRAME unsigned int F_007203f0(void)
{
  GEN_ENTER(0x7203f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf149 */
GEN_NOFRAME unsigned int F_00720400(void)
{
  GEN_ENTER(0x720400u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf150 */
GEN_NOFRAME unsigned int F_00720410(void)
{
  GEN_ENTER(0x720410u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Gimmick::GimmickEventHandler::vf143 */
GEN_NOFRAME unsigned int F_00720420(void)
{
  GEN_ENTER(0x720420u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00720450 */
GEN_FRAME uint GEN_THISCALL F_00720450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  F_0042cbc0((undefined *)((int)this + 0x38) GEN_EDX_FWD,param_1 + 0xe);
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  F_0042cbc0((undefined *)((int)this + 0x9c) GEN_EDX_ARG,param_1 + 0x27);
  return (uint)this;
}

/* ref: FUN_00720580 */
GEN_FRAME uint GEN_THISCALL F_00720580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9078));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VEventHandler_Event_Game_Client_Event::vf1 */
GEN_FRAME uint GEN_THISCALL F_007205b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xa0))))
                    (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FormatStringCallback_VEventHandler_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_007205d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7205d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_007205f0 */
GEN_FRAME uint GEN_THISCALL F_007205f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7205f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9088));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ActionTimelineCallback_VEventHandler_Event_Game_Client_Event::vf1 */
GEN_FRAME uint GEN_THISCALL F_00720620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xa4))))
                    (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: ActionTimelineCallback_VEventHandler_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720660 */
GEN_FRAME uint GEN_THISCALL F_00720660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9098));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ListenItemCallback_VEventHandler_Event_Game_Client_Event::vf1 */
GEN_FRAME uint GEN_THISCALL F_00720690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xcc))))
                    (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: ListenItemCallback_VEventHandler_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_007206b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7206b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_007206e0 */
GEN_FRAME uint GEN_THISCALL F_007206e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7206e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_007206f0 */
GEN_FRAME uint GEN_THISCALL F_007206f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7206f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00720700 */
GEN_FRAME uint GEN_THISCALL F_00720700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00720710 */
GEN_FRAME uint GEN_THISCALL F_00720710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00720730 */
GEN_FRAME uint GEN_THISCALL F_00720730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00720760 */
GEN_FRAME uint GEN_THISCALL F_00720760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00720770 */
GEN_FRAME uint GEN_THISCALL F_00720770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_007207a0 */
GEN_FRAME uint GEN_THISCALL F_007207a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7207a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_007207b0 */
GEN_FRAME uint GEN_THISCALL F_007207b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7207b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_007207c0 */
GEN_FRAME uint GEN_THISCALL F_007207c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7207c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_007207f0 */
GEN_FRAME uint GEN_THISCALL F_007207f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7207f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x140 + *in_ecx;
}

/* ref: FUN_00720830 */
GEN_FRAME uint GEN_THISCALL F_00720830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_007208e0 */
GEN_FRAME uint GEN_THISCALL F_007208e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7208e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00720940 */
GEN_FRAME uint GEN_THISCALL F_00720940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720940u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x28;
}

/* ref: FUN_00720960 */
GEN_FRAME uint GEN_THISCALL F_00720960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720960u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x28;
}

/* ref: FUN_00720990 */
GEN_FRAME uint GEN_THISCALL F_00720990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720990u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_007209c0 */
GEN_FRAME uint GEN_THISCALL F_007209c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7209c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_007209e0 */
GEN_FRAME uint GEN_THISCALL F_007209e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7209e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_007209f0 */
GEN_FRAME uint GEN_THISCALL F_007209f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7209f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00720a00 */
GEN_FRAME uint GEN_THISCALL F_00720a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x720a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b90a8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VEventFramework_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00720a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_NOFRAME uint GEN_THISCALL F_00720ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x720ae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00720af0 */
GEN_FRAME uint GEN_THISCALL F_00720af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90c4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VTalkCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720b40 */
GEN_FRAME uint GEN_THISCALL F_00720b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectOkCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720ba0 */
GEN_FRAME uint GEN_THISCALL F_00720ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90e4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectYesNoCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720bf0 */
GEN_FRAME uint GEN_THISCALL F_00720bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b90f4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectYesNoCountCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720c40 */
GEN_FRAME uint GEN_THISCALL F_00720c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9104));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectYesNoCheckCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720c90 */
GEN_FRAME uint GEN_THISCALL F_00720c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720c90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9114));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectStringCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720ce0 */
GEN_FRAME uint GEN_THISCALL F_00720ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9124));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectIconStringCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720d30 */
GEN_FRAME uint GEN_THISCALL F_00720d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VSelectListCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720d80 */
GEN_FRAME uint GEN_THISCALL F_00720d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9144));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VScreenTextCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720dd0 */
GEN_FRAME uint GEN_THISCALL F_00720dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b9154));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FormatStringCallback_VBattleTalkCallback_Event_Game_Client_Event::vf2 */
GEN_FRAME byte GEN_THISCALL F_00720e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00720e40 */
GEN_FRAME uint GEN_THISCALL F_00720e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x720e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this GEN_EDX_FWD,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9164));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00720eb0 */
GEN_FRAME uint GEN_THISCALL F_00720eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x720eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00720ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME byte GEN_THISCALL F_00720f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00720f30 */
GEN_FRAME byte GEN_THISCALL F_00720f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00720f50 */
GEN_FRAME uint GEN_THISCALL F_00720f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x720f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b917c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VArrayEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00720f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_NOFRAME uint GEN_THISCALL F_00720fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x720fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00720ff0 */
GEN_FRAME uint GEN_THISCALL F_00720ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x720ff0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00721030 */
GEN_FRAME uint GEN_THISCALL F_00721030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721030u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xb8 + *in_ecx;
}

/* ref: FUN_00721050 */
GEN_FRAME uint GEN_THISCALL F_00721050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGuildleveAssignmentEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_NOFRAME uint GEN_THISCALL F_007210f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7210f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721100 */
GEN_FRAME uint GEN_THISCALL F_00721100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x721100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00cb4700(this GEN_EDX_FWD,param_4,param_5);
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91b4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00721160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91c0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCustomTalkEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_007211a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_007211c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7211c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91cc));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VDefaultTalkEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_NOFRAME uint GEN_THISCALL F_00721250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x721250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721260 */
GEN_FRAME uint GEN_THISCALL F_00721260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCraftEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_007212a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_NOFRAME uint GEN_THISCALL F_007212f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7212f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721300 */
GEN_FRAME uint GEN_THISCALL F_00721300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9204));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME byte GEN_THISCALL F_00721360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721380 */
GEN_FRAME byte GEN_THISCALL F_00721380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007213a0 */
GEN_FRAME byte GEN_THISCALL F_007213a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7213a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007213c0 */
GEN_FRAME byte GEN_THISCALL F_007213c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7213c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00721410 */
GEN_NOFRAME uint GEN_THISCALL F_00721410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x721410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721420 */
GEN_FRAME uint GEN_THISCALL F_00721420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x721420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00cb4700(this GEN_EDX_FWD,param_4,param_5);
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9220));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VShopEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_NOFRAME uint GEN_THISCALL F_007214b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7214b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721500 */
GEN_FRAME uint GEN_THISCALL F_00721500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b923c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCraftLeveClientEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME byte GEN_THISCALL F_00721560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721580 */
GEN_FRAME byte GEN_THISCALL F_00721580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007215f0 */
GEN_NOFRAME uint GEN_THISCALL F_007215f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7215f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721600 */
GEN_FRAME uint GEN_THISCALL F_00721600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x721600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00cb4700(this GEN_EDX_FWD,param_4,param_5);
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9258));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGCShopEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME byte GEN_THISCALL F_00721660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721680 */
GEN_FRAME byte GEN_THISCALL F_00721680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007216c0 */
GEN_FRAME uint GEN_THISCALL F_007216c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7216c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x140 + *in_ecx;
}

/* ref: FUN_007216e0 */
GEN_FRAME uint GEN_THISCALL F_007216e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7216e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9264));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VWarpEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00721760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9270));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VStoryEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_007217a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_007217e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7217e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x1b0 + *in_ecx;
}

/* ref: Client::Game::Event::SpecialShopListCallback::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00721830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x721830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00721840 */
GEN_FRAME uint GEN_THISCALL F_00721840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b928c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VSpecialShopEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME byte GEN_THISCALL F_007218c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7218c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_007218e0 */
GEN_FRAME byte GEN_THISCALL F_007218e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7218e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00721900 */
GEN_FRAME uint F_00721900(unsigned int gen_a0)
{
  GEN_ENTER(0x721900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1ec,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b99950(this GEN_EDX_ARG,param_1 & 0xffff | 0xf0000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721930 */
GEN_FRAME uint F_00721930(unsigned int gen_a0)
{
  GEN_ENTER(0x721930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x1dc,0,0);
  if (this != (undefined4 *)0x0) {
    F_00b99750(this GEN_EDX_ARG,param_1 & 0xffff | 0x100000);
    *this = (*(undefined * PTR32 (*)[152])REFP(0x10b8e14));
    this[0x75] = (*(undefined * PTR32 (*)[3])REFP(0x10b8e04));
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00721980 */
GEN_FRAME uint F_00721980(unsigned int gen_a0)
{
  GEN_ENTER(0x721980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x1f0,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b99990(this GEN_EDX_ARG,param_1 & 0xffff | 0x110000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_007219b0 */
GEN_FRAME uint F_007219b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7219b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x5a4,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8ea40(this GEN_EDX_ARG,param_1 & 0xffff | 0x170000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_007219e0 */
GEN_FRAME uint F_007219e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7219e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x598,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8ebe0(this GEN_EDX_ARG,param_1 & 0xffff | 0x180000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721a10 */
GEN_FRAME uint F_00721a10(unsigned int gen_a0)
{
  GEN_ENTER(0x721a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x55c,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8e710(this GEN_EDX_ARG,param_1 & 0xffff | 0x190000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721a40 */
GEN_FRAME uint F_00721a40(unsigned int gen_a0)
{
  GEN_ENTER(0x721a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00406b90(0x534,0,0);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b8e850(this GEN_EDX_ARG,param_1 & 0xffff | 0x1c0000);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00721a70 */
GEN_FRAME uint GEN_THISCALL F_00721a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b9298));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VLeveDirector_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00721ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92a4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VBattleLeveDirector_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME byte GEN_THISCALL F_00721b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00721b50 */
GEN_FRAME byte GEN_THISCALL F_00721b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00721b70 */
GEN_FRAME uint GEN_THISCALL F_00721b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92b0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringLeveDirector_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00721bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92bc));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VCompanyLeveDirector_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00721c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92c8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VOpeningEventHandler_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00721cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x721cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this GEN_EDX_FWD,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10b92d4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestBattleDirector_Event_Game_Client_Game::vf1 */
GEN_FRAME uint GEN_THISCALL F_00721d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00721d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x721e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00721ea0 */
GEN_FRAME uint GEN_THISCALL F_00721ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00721ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint F_007221c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7221c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00722200 */
GEN_FRAME uint GEN_THISCALL F_00722200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_STDCALL F_00722270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_007222a0 */
GEN_FRAME uint GEN_STDCALL F_007222a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7222a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_007222d0 */
GEN_FRAME uint GEN_THISCALL F_007222d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00722350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_STDCALL F_00722430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x722430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x70,800);
  return (uint)uVar1;
}

/* ref: FUN_007224b0 */
GEN_FRAME uint GEN_THISCALL F_007224b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7224b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

