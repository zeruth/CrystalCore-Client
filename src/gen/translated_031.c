#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_005b77a0 */
uint F_005b77a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b77a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x38);
  *param_3 = *(undefined4 *)(in_ecx + 0x3c);
  return (uint)param_2;
}

/* ref: FUN_005b77e0 */
uint F_005b77e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b77e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x40);
  *param_3 = *(undefined4 *)(in_ecx + 0x44);
  return (uint)param_2;
}

/* ref: FUN_005b7820 */
uint F_005b7820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b7820u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x30);
  *param_3 = *(undefined4 *)(in_ecx + 0x34);
  return (uint)param_2;
}

/* ref: FUN_005b7870 */
uint F_005b7870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b7870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0x7c);
  uVar1 = *(ushort *)((int)this + 0x7e);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b78b0 */
uint F_005b78b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b78b0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x74);
  *param_3 = *(undefined4 *)(in_ecx + 0x78);
  return (uint)param_2;
}

/* ref: FUN_005b78f0 */
uint F_005b78f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5b78f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042a990(in_ecx);
  *(uint *)(in_ecx + 0x54) = uVar1;
  return uVar1;
}

/* ref: FUN_005b7900 */
uint F_005b7900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b7900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0x10c);
  uVar1 = *(ushort *)((int)this + 0x10e);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b7930 */
ushort F_005b7930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b7930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x10c) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x10e) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_005b7990 */
byte F_005b7990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x12) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b79a0 */
uint F_005b79a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b79a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005b79b0 */
uint F_005b79b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b79b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_005b79e0 */
uint F_005b79e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5b79e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)this = *param_3;
  *(undefined4 *)((int)this + 4) = param_3[1];
  *(undefined4 *)((int)this + 8) = param_3[2];
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_1;
  return (uint)this;
}

/* ref: FUN_005b7a90 */
uint F_005b7a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_005b7aa0 */
uint F_005b7aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_005b7ab0 */
uint F_005b7ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7ab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_005b7ac0 */
uint F_005b7ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7ac0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_005b7ae0 */
byte F_005b7ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b7b90 */
uint F_005b7b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005b7be0 */
uint F_005b7be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(byte *)(param_2 + in_ecx) >> 4);
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::SoftKeyboardInputInterface::vf4 */
uint F_005b7c10(void)
{
  GEN_ENTER(0x5b7c10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::SoftKeyboardInputInterface::vf6 */
uint F_005b7c20(void)
{
  GEN_ENTER(0x5b7c20u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::SoftKeyboardInputInterface::vf0 */
uint F_005b7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10a09dc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::vf0 */
uint F_005b7c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a09fc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf1 */
unsigned int F_005b7cb0(void)
{
  GEN_ENTER(0x5b7cb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf2 */
unsigned int F_005b7cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5b7cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf3 */
unsigned int F_005b7cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf4 */
unsigned int F_005b7ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b7ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf5 */
unsigned int F_005b7cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b7cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf6 */
unsigned int F_005b7d00(void)
{
  GEN_ENTER(0x5b7d00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf7 */
unsigned int F_005b7d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_005b7d20 */
uint F_005b7d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7d20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf0 */
uint F_005b7d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a0a20));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkExternalInterface::vf0 */
uint F_005b7d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0a44));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005b7dc0 */
uint F_005b7dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x238);
  *param_1 = *(undefined4 *)((int)this + 0x234);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005b7f60 */
uint F_005b7f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b7f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005b7f80 */
uint F_005b7f80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5b7f80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  
  iVar1 = (int)(char)param_2;
  *(float *)(in_ecx + iVar1 * 0x10) = param_3;
  *(float *)(in_ecx + 4 + iVar1 * 0x10) = param_4;
  *(float *)(in_ecx + 8 + iVar1 * 0x10) = param_5;
  return iVar1 * 2;
}

/* ref: FUN_005b7fb0 */
unsigned int F_005b7fb0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5b7fb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0xa0) = param_2;
  *(float *)(in_ecx + 0xa4) = param_3;
  *(float *)(in_ecx + 0xa8) = param_4;
  *(float *)(in_ecx + 0xac) = param_5;
  return 0;
}

/* ref: FUN_005b7ff0 */
unsigned int F_005b7ff0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5b7ff0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0xb0) = param_2;
  *(float *)(in_ecx + 0xb4) = param_3;
  *(float *)(in_ecx + 0xb8) = param_4;
  *(float *)(in_ecx + 0xbc) = param_5;
  return 0;
}

/* ref: FUN_005b8030 */
uint F_005b8030(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x5b8030u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = (uint)(char)param_2;
  *(float *)(in_ecx + 0x50 + uVar1 * 8) = param_3;
  *(float *)(in_ecx + 0x54 + uVar1 * 8) = param_4;
  return uVar1;
}

/* ref: FUN_005b8060 */
uint F_005b8060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x100) ^ param_2) & 0xf;
  *(uint *)(in_ecx + 0x100) = *(uint *)(in_ecx + 0x100) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b8080 */
unsigned int F_005b8080(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x5b8080u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0xdc) = param_2;
  *(float *)(in_ecx + 0xe0) = param_3;
  *(float *)(in_ecx + 0xe4) = param_4;
  return 0;
}

/* ref: FUN_005b80b0 */
unsigned int F_005b80b0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x5b80b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0xe8) = param_2;
  *(float *)(in_ecx + 0xec) = param_3;
  *(float *)(in_ecx + 0xf0) = param_4;
  return 0;
}

/* ref: FUN_005b80e0 */
unsigned int F_005b80e0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5b80e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0xf4) = param_2;
  *(float *)(in_ecx + 0xf8) = param_3;
  return 0;
}

/* ref: FUN_005b8110 */
unsigned int F_005b8110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5b8110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xfc) = param_2;
  return 0;
}

/* ref: FUN_005b8130 */
uint F_005b8130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xd8) & 0xffffff0f | param_2;
  *(uint *)(in_ecx + 0xd8) = uVar1;
  return uVar1;
}

/* ref: FUN_005b8150 */
uint F_005b8150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)(ushort)param_1 << 9 | *(uint *)((int)this + 0x100) & 0xfe0001ff;
  *(uint *)((int)this + 0x100) = uVar1;
  return uVar1;
}

/* ref: FUN_005b8190 */
uint F_005b8190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_005b81a0 */
unsigned int F_005b81a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5b81a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 8) = param_2;
  *(float *)(in_ecx + 0xc) = param_3;
  return 0;
}

/* ref: FUN_005b81c0 */
unsigned int F_005b81c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5b81c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x10) = param_2;
  *(float *)(in_ecx + 0x14) = param_3;
  return 0;
}

/* ref: FUN_005b81e0 */
unsigned int F_005b81e0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5b81e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x18) = param_2;
  *(float *)(in_ecx + 0x1c) = param_3;
  return 0;
}

/* ref: FUN_005b8200 */
ushort F_005b8200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b8200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x20) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x22) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_005b8220 */
ushort F_005b8220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b8220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x24) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x26) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_005b8240 */
ushort F_005b8240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b8250 */
uint F_005b8250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x28) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_005b8260 */
byte F_005b8260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8270 */
uint F_005b8270(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8270u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(byte *)(param_1 + 1);
}

/* ref: FUN_005b8280 */
float10 F_005b8280(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x5b8280u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  if (!(param_2 <= 0.0)) {
    fVar1 = (float10)param_3;
    fVar2 = (float10)param_2;
    if (fVar1 < fVar2) {
      if (param_1 == 0) {
        return (float10)(float)(fVar1 / fVar2);
      }
      if (param_1 == 1) {
        fVar1 = ((float10)GEN_TOD(fsin(
                              (float10)((float)GEN_TOF(((((float10)param_4 *
                                                (float10)*(double *)&REFG(undefined, 0x1080228)) * fVar1) / fVar2)))
                             )));
        return (float10)(float)fVar1;
      }
      if (param_1 == 2) {
        fVar1 = ((float10)GEN_TOD(fsin(
                              (float10)((float)GEN_TOF((((fVar1 * (float10)REFG(double, 0x1088108)) / fVar2 +
                                               (float10)REFG(double, 0x1088108)) *
                                              (float10)*(double *)&REFG(undefined, 0x1080228)))))));
        return (float10)(float)((float10)1 - (float10)(float)fVar1);
      }
    }
  }
  return (float10)1;
}

/* ref: Component::GUI2::AtkModuleInterface::vf0 */
uint F_005b8320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x10a0a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005b8360 */
byte F_005b8360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc6a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8380 */
byte F_005b8380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc6b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b83c0 */
uint F_005b83c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b83c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0xc5c);
  uVar1 = *(ushort *)((int)this + 0xc5e);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b8410 */
uint F_005b8410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 4 + (uint)(ushort)param_2 * 4);
}

/* ref: FUN_005b8420 */
uint F_005b8420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b8420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + (uint)(ushort)param_1 * 4 + 4) = param_2;
  return (uint)(ushort)param_1;
}

/* ref: FUN_005b8440 */
uint F_005b8440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx + 0x20 + (uint)(byte)param_2 * 8;
}

/* ref: FUN_005b8450 */
uint F_005b8450(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 / 0x14;
}

/* ref: FUN_005b84b0 */
uint F_005b84b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b84b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005b84c0 */
uint F_005b84c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b84c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return param_1;
}

/* ref: FUN_005b84e0 */
byte F_005b84e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b84e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b84f0 */
uint F_005b84f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b84f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_005b8580 */
byte F_005b8580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    return *(byte *)(in_ecx + 0x1b);
  }
  return *(byte *)(in_ecx + 0x1c);
}

/* ref: FUN_005b85a0 */
unsigned int F_005b85a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b85a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x1b) = 1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x1c) = 1;
  return 0;
}

/* ref: FUN_005b85d0 */
byte F_005b85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b85d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8640 */
byte F_005b8640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8640u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8650 */
byte F_005b8650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8660 */
byte F_005b8660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 2) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8670 */
byte F_005b8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 3) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8680 */
byte F_005b8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8690 */
byte F_005b8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b86d0 */
ushort F_005b86d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b86d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b8730 */
uint F_005b8730(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 8) != 0) {
    return (uint)*(ushort *)((int)this + 0x16) + *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentBase::vf8 */
unsigned int F_005b8790(void)
{
  GEN_ENTER(0x5b8790u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005b87b0 */
uint F_005b87b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b87b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) << 0x11 ^ *(uint *)(in_ecx + 100)) & 0x20000;
  *(uint *)(in_ecx + 100) = *(uint *)(in_ecx + 100) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b87e0 */
uint F_005b87e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b87e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: FUN_005b87f0 */
uint F_005b87f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b87f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_005b8800 */
uint F_005b8800(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx == 0) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x70);
}

/* ref: FUN_005b8820 */
uint F_005b8820(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0) && (param_1 != 0xff)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005b8850 */
byte F_005b8850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x80) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8860 */
uint F_005b8860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_005b8870 */
ushort F_005b8870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 100) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b8890 */
uint F_005b8890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_005b88f0 */
uint F_005b88f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b88f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10c) = param_2;
  return param_2;
}

/* ref: FUN_005b8900 */
byte F_005b8900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x85) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8990 */
byte F_005b8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x95) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b89f0 */
byte F_005b89f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5b89f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 != 3) && (uVar1 != 2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005b8a10 */
byte F_005b8a10(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 != 5) && (uVar1 != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005b8a90 */
byte F_005b8a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_1 == '\0') << 7 | *(byte *)((int)this + 0xf8) & 0x7f;
  *(byte *)((int)this + 0xf8) = bVar1;
  return bVar1;
}

/* ref: FUN_005b8b40 */
byte F_005b8b40(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = *(byte *)(in_ecx + 0x10d);
  if ('\0' < (char)bVar1) {
    bVar1 = bVar1 - 1;
    *(byte *)(in_ecx + 0x10d) = bVar1;
  }
  return bVar1;
}

/* ref: FUN_005b8b60 */
uint F_005b8b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8b60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (uint)((*(uint *)((*(int *)&gen_args[0]) + 0x108) & (*(uint *)&gen_args[1])) != 0);
}

/* ref: FUN_005b8bb0 */
uint F_005b8bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x98) = param_2;
  return param_2;
}

/* ref: FUN_005b8be0 */
uint F_005b8be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa4) = param_2;
  return param_2;
}

/* ref: FUN_005b8c00 */
byte F_005b8c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') * '\x04' ^ *(byte *)(in_ecx + 0xf9)) & 4;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b8c30 */
uint F_005b8c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)((*(ushort *)(in_ecx + 0x126) & (ushort)param_2) != 0);
}

/* ref: FUN_005b8c50 */
unsigned int F_005b8c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b8c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    *(ushort *)((int)this + 0x126) = *(ushort *)((int)this + 0x126) | (ushort)param_1;
    return 0;
  }
  *(ushort *)((int)this + 0x126) = *(ushort *)((int)this + 0x126) & ~(ushort)param_1;
  return 0;
}

/* ref: FUN_005b8c80 */
byte F_005b8c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8c80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0x120) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_005b8cc0 */
unsigned int F_005b8cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 8;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffff7;
  return 0;
}

/* ref: FUN_005b8d50 */
unsigned int F_005b8d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x400;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfffffbff;
  return 0;
}

/* ref: FUN_005b8da0 */
unsigned int F_005b8da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x1000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffefff;
  return 0;
}

/* ref: FUN_005b8de0 */
unsigned int F_005b8de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x2000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xffffdfff;
  return 0;
}

/* ref: FUN_005b8e60 */
unsigned int F_005b8e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) | 0x80000;
    return 0;
  }
  *(uint *)(in_ecx + 0x120) = *(uint *)(in_ecx + 0x120) & 0xfff7ffff;
  return 0;
}

/* ref: FUN_005b8ee0 */
byte F_005b8ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0xfa) & 0x7f | (char)param_1 << 7;
  *(byte *)((int)this + 0xfa) = bVar1;
  return bVar1;
}

/* ref: FUN_005b8f10 */
byte F_005b8f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8f30 */
byte F_005b8f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0xfb) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b8f60 */
byte F_005b8f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8f60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b8f90 */
byte F_005b8f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8f90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0xfb)) & 2;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b8fb0 */
uint F_005b8fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5b8fb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x13c) != '\0') && ((*(byte *)(in_ecx + 0xfb) & 2) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005b8fe0 */
byte F_005b8fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b8fe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0xfb)) & 4;
  *(byte *)(in_ecx + 0xfb) = *(byte *)(in_ecx + 0xfb) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9010 */
byte F_005b9010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9050 */
uint F_005b9050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x94) = param_2;
  return param_2;
}

/* ref: FUN_005b9060 */
uint F_005b9060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa0) = param_2;
  return param_2;
}

/* ref: FUN_005b9080 */
byte F_005b9080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0xf8) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b90a0 */
byte F_005b90a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b90a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (((char)param_2 == '\0') * '\b' ^ *(byte *)(in_ecx + 0xf9)) & 8;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b90d0 */
byte F_005b90d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b90d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0xf9)) & 2;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9120 */
uint F_005b9120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xfc) = param_2;
  return param_2;
}

/* ref: FUN_005b9130 */
uint F_005b9130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x90) = param_2;
  return param_2;
}

/* ref: FUN_005b9150 */
uint F_005b9150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xac) = param_2;
  return param_2;
}

/* ref: FUN_005b9170 */
byte F_005b9170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9190 */
byte F_005b9190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xf4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b91b0 */
byte F_005b91b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b91b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xf5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b91c0 */
uint F_005b91c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b91c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) << 0x14 ^ *(uint *)(in_ecx + 0xf4)) & 0xf00000;
  *(uint *)(in_ecx + 0xf4) = *(uint *)(in_ecx + 0xf4) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b91f0 */
uint F_005b91f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b91f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 << 0x18 ^ *(uint *)(in_ecx + 0xf4)) & 0xf000000;
  *(uint *)(in_ecx + 0xf4) = *(uint *)(in_ecx + 0xf4) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b9220 */
uint F_005b9220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = param_1 << 0x1c | *(uint *)((int)this + 0xf4) & 0xfffffff;
  *(uint *)((int)this + 0xf4) = uVar1;
  return uVar1;
}

/* ref: FUN_005b9260 */
byte F_005b9260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0xf8)) & 8;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9280 */
uint F_005b9280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 << 0x10 ^ *(uint *)(in_ecx + 0xf4)) & 0xf0000;
  *(uint *)(in_ecx + 0xf4) = *(uint *)(in_ecx + 0xf4) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b92a0 */
ushort F_005b92a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b92a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x128) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b92c0 */
byte F_005b92c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b92c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0xf8)) & 4;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b92f0 */
byte F_005b92f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b92f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0xf8)) & 0x10;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9320 */
byte F_005b9320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0xf8)) & 2;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9350 */
byte F_005b9350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 6 ^ *(byte *)(in_ecx + 0xf8)) & 0x40;
  *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9380 */
byte F_005b9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0xfa) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b93b0 */
byte F_005b93b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b93b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0xfa)) & 4;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b93f0 */
byte F_005b93f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b93f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0xf9) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0xf9) = *(byte *)(in_ecx + 0xf9) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9430 */
byte F_005b9430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0xfa)) & 8;
  *(byte *)(in_ecx + 0xfa) = *(byte *)(in_ecx + 0xfa) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9500 */
ushort F_005b9500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x194 + param_2 * 2);
}

/* ref: FUN_005b95c0 */
byte F_005b95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b95c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x849) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b95e0 */
uint F_005b95e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5b95e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  *(undefined2 *)((int)this + 4) = (undefined2)param_3;
  *(undefined2 *)((int)this + 6) = (undefined2)param_4;
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_6;
  return (uint)this;
}

/* ref: FUN_005b9620 */
uint F_005b9620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b9620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_005b9650 */
uint F_005b9650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_005b9660 */
uint F_005b9660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5b9660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_2);
  *(undefined4 *)((int)this + 0xac) = param_4;
  *(undefined4 *)((int)this + 0xa8) = param_3;
  return (uint)this;
}

/* ref: Component::GUI2::AtkTextInput::AtkTextInputEventInterface::vf0 */
uint F_005b96a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b96a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005b9700 */
uint F_005b9700(unsigned int gen_a0)
{
  GEN_ENTER(0x5b9700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  uVar1 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf1 */
uint F_005b9730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b9730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_1 = 0;
  *param_2 = 0;
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf2 */
unsigned int F_005b9750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b9750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_005b9760 */
uint F_005b9760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b9760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0x10);
  uVar1 = *(ushort *)((int)this + 0x12);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b9780 */
ushort F_005b9780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b9780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x10) = (ushort)param_1;
  *(undefined2 *)((int)this + 0x12) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf3 */
uint F_005b97a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5b97a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Component::GUI2::AtkDragDropInterface::vf5 */
uint F_005b97b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5b97b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Component::GUI2::AtkDragDropInterface::vf7 */
byte F_005b97c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b97c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf8 */
unsigned int F_005b97d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b97d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_005b97f0 */
byte F_005b97f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b97f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9810 */
uint F_005b9810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_005b9830 */
ushort F_005b9830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x18) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf13 */
uint F_005b9840(void)
{
  GEN_ENTER(0x5b9840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf14 */
unsigned int F_005b9850(void)
{
  GEN_ENTER(0x5b9850u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf0 */
uint F_005b9860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  if (*(int *)(this + 0xc) != 0) {
    F_00406ad0(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005b98a0 */
uint F_005b98a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5b98a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  *(undefined1 *)((int)this + 4) = (undefined1)param_1;
  *(undefined1 *)((int)this + 5) = (undefined1)param_2;
  *(uint *)this = param_4;
  *(undefined1 *)((int)this + 6) = (undefined1)param_3;
  return param_4;
}

/* ref: FUN_005b98d0 */
uint F_005b98d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5b98d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)this != 0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 4))
                      (*(int *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    return uVar1;
  }
  return (uint)this;
}

/* ref: FUN_005b98f0 */
uint F_005b98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5b98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)this != 0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 8))
                      (*(int *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    return uVar1;
  }
  return (uint)this;
}

/* ref: FUN_005b9920 */
uint F_005b9920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_005b9990 */
uint F_005b9990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1fc) = param_2;
  return param_2;
}

/* ref: FUN_005b99a0 */
uint F_005b99a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b99a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x1cc) = *param_1;
  *(undefined4 *)((int)this + 0x1d0) = param_1[1];
  *(undefined4 *)((int)this + 0x1d4) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x1d8) = uVar1;
  return uVar1;
}

/* ref: FUN_005b99d0 */
byte F_005b99d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b99d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x220)) & 2;
  *(byte *)(in_ecx + 0x220) = *(byte *)(in_ecx + 0x220) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9a10 */
uint F_005b9a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9a10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf1 */
uint F_005b9a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf2 */
uint F_005b9a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf3 */
byte F_005b9a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf0 */
uint F_005b9a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005b9ae0 */
byte F_005b9ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x111) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9b00 */
byte F_005b9b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9b20 */
byte F_005b9b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x123) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9bf0 */
uint F_005b9bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_005b9c80 */
uint F_005b9c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0 < (int)param_2) {
    *(uint *)(in_ecx + 0xa4) = param_2;
  }
  return param_2;
}

/* ref: FUN_005b9ca0 */
ushort F_005b9ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (-1 < (short)(ushort)param_2) {
    *(ushort *)(in_ecx + 0xa8) = (ushort)param_2;
  }
  return (ushort)param_2;
}

/* ref: FUN_005b9cc0 */
ushort F_005b9cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (-1 < (short)(ushort)param_2) {
    *(ushort *)(in_ecx + 0xaa) = (ushort)param_2;
  }
  return (ushort)param_2;
}

/* ref: FUN_005b9d20 */
unsigned int F_005b9d20(unsigned int gen_a0)
{
  GEN_ENTER(0x5b9d20u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_005b9d50 */
byte F_005b9d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 200) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9d60 */
ushort F_005b9d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0xc2) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b9d90 */
byte F_005b9d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xcd) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005b9de0 */
unsigned int F_005b9de0(unsigned int gen_a0)
{
  GEN_ENTER(0x5b9de0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_005b9e10 */
uint F_005b9e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5b9e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 8) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_005b9e60 */
byte F_005b9e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0xaa)) & 4;
  *(byte *)(in_ecx + 0xaa) = *(byte *)(in_ecx + 0xaa) ^ bVar1;
  return bVar1;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf1 */
unsigned int F_005b9f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf2 */
uint F_005b9f50(void)
{
  GEN_ENTER(0x5b9f50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf4 */
unsigned int F_005b9f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b9f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf0 */
uint F_005b9f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005b9fc0 */
uint F_005b9fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf1 */
uint F_005b9fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf2 */
uint F_005b9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5b9fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf0 */
uint F_005b9ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5b9ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ba040 */
uint F_005ba040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkTextNodeRenderer::vf1 */
uint F_005ba050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkTextNodeRenderer::vf0 */
uint F_005ba060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ba0b0 */
uint F_005ba0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf1 */
uint F_005ba0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba0c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf2 */
uint F_005ba0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ba0d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf0 */
uint F_005ba0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ba130 */
uint F_005ba130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf1 */
uint F_005ba140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf2 */
uint F_005ba150(unsigned int gen_a0)
{
  GEN_ENTER(0x5ba150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf0 */
uint F_005ba160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf1 */
uint F_005ba1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba1b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf0 */
uint F_005ba1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkResourceRendererManager::vf0 */
uint F_005ba210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c08));
  *(undefined * PTR32 * PTR32 *)(this + 0x38) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)(this + 0x2c) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)(this + 0x14) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ba250 */
uint F_005ba250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ba250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,param_2);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2);
  return 0;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf3 */
uint F_005ba290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ba290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (param_1 != 0) - 1;
}

/* ref: FUN_005ba2b0 */
uint F_005ba2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba2b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return ((uint)*(ushort *)(param_2 + 0x2c) - (*(uint *)(param_1 + 0x88) >> 0x14 & 1)) * 0x40;
}

/* ref: FUN_005ba2e0 */
uint F_005ba2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x5ba2e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
  case 4: ;
  case 7: ;
    fVar2 = ((float10)param_4 - (float10)param_6) * fVar1;
    break;
  case 2: ;
  case 5: ;
  case 8: ;
    fVar2 = (float10)param_4 - (float10)param_6;
    break;
  default: ;
    goto switchD_005ba2fb_caseD_3;
  }
  *param_1 = (float)(fVar2 + (float10)*param_1);
switchD_005ba2fb_caseD_3: ;
  switch((unsigned int)(uintptr_t)(param_3 - 3U)) {
  case 0: ;
  case 1: ;
  case 2: ;
    *param_2 = ((float)GEN_TOF((((float10)param_5 - (float10)param_7) * fVar1 + (float10)*param_2)));
    return (uint)param_2;
  case 3: ;
  case 4: ;
  case 5: ;
    *param_2 = ((float)GEN_TOF((((float10)param_5 - (float10)param_7) + (float10)*param_2)));
    return (uint)param_2;
  default: ;
    return param_3 - 3U;
  }
}

/* ref: FUN_005ba380 */
uint F_005ba380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba380u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x6e);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)(param_2 + 0x6f);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *param_1 = *(undefined2 *)(param_2 + 0x68);
  param_1[1] = *(undefined2 *)(param_2 + 0x6a);
  param_1[2] = *(undefined2 *)(param_2 + 0x6c);
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_005ba3d0 */
uint F_005ba3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5ba3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint * puVar1;
  
  puVar1 = (uint *)0x0;
  if (param_4 != 0) {
    *param_1 = 0;
    if ((*(uint *)(param_4 + 0x84) & 0x40000000) != 0) {
      *param_2 = (uint)(byte)param_5 << 4 | (((char)param_6 != '\x03') - 1 & 0x4000) + 0x121100;
      *param_3 = 0x10;
      return (uint)param_3;
    }
    *param_2 = (uint)(byte)param_5 << 4 | (((char)param_6 != '\x03') - 1 & 0x4000) + 0x120000;
    *param_3 = 0;
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_005ba480 */
byte F_005ba480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005ba490 */
uint F_005ba490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_005ba4b0 */
uint F_005ba4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ba4b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x88);
}

/* ref: FUN_005ba4e0 */
uint F_005ba4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ba4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x88);
}

/* ref: FUN_005ba530 */
uint F_005ba530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkComponentMap::DiscoveryRenderer::vf0 */
uint F_005ba540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ba570 */
uint F_005ba570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x12);
  *(uint *)((int)this + 0x18) = param_1;
  if (uVar1 < param_1) {
    *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
    *(uint *)((int)this + 0x18) = uVar1;
    uVar1 = F_00573430(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_005ba5a0 */
uint F_005ba5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba5a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_005ba5c0 */
uint F_005ba5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_005ba5f0 */
uint F_005ba5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) | 0x8000;
  *(uint *)((int)this + 0x18) = param_1;
  return param_1;
}

/* ref: FUN_005ba640 */
byte F_005ba640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(ushort *)(in_ecx + 0x22) & (ushort)param_2 & 0x7fff) != 0;
}

/* ref: FUN_005ba660 */
uint F_005ba660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(ushort *)((int)this + 0x22) =
       *(ushort *)((int)this + 0x22) & (~(1 << ((byte)param_1 & 0x1f)) | 0x8000U);
  return (uint)this;
}

/* ref: FUN_005ba6c0 */
uint F_005ba6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba6c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005ba700 */
uint F_005ba700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(float, 0x1087f04);
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x1087f04));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar2;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = *param_2;
  in_ecx[0xd] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[0xf] = uVar2;
  in_ecx[0xe] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_005ba7d0 */
uint F_005ba7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: Component::GUI2::AtkServer::vf0 */
uint F_005ba800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkContext::vf0 */
uint F_005ba830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pAVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a094c));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this + -0x10);
  pAVar2 = this + iVar1 * 0xb0;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    pAVar2 = pAVar2 + -0xb0;
    *(undefined * PTR32 * PTR32 *)pAVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10a094c));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this + -0x10);
  }
  return (uint)(this + -0x10);
}

/* ref: FUN_005ba8a0 */
uint F_005ba8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ba8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_005ba930 */
uint F_005ba930(unsigned int gen_a0)
{
  GEN_ENTER(0x5ba930u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_005ba940 */
uint F_005ba940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ba970 */
byte F_005ba970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x84);
  }
  if (((param_2 != 0) && (uVar1 < (ushort)*(undefined4 *)(param_2 + 0x84))) &&
     (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005ba9d0 */
uint F_005ba9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5ba9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar2 = *(ushort *)param_4;
  uVar3 = *(ushort *)param_5;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088070);
  fVar5 = (float10)(param_3 + -1);
  if (param_3 + -1 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  fVar6 = (float10)((float)GEN_TOF(((float10)(int)(uVar2 - 1) / fVar4)));
  fVar7 = (float10)((float)GEN_TOF(((float10)(int)(uVar3 - 1) / fVar4)));
  *(float *)(param_1 + 0x14) = ((float)GEN_TOF(((fVar6 - (float10)(float)(fVar5 / fVar4)) / (fVar6 - fVar7))));
  fVar1 = (float)(fVar7 - fVar6);
  fVar7 = (float10)fVar1;
  *(float *)(param_1 + 4) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar5 / fVar4) - fVar6)));
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 0xc) = ((float)GEN_TOF(((float10)*(float *)(param_4 + 4) * fVar7)));
  *(float *)(param_1 + 0x10) = ((float)GEN_TOF(((float10)*(float *)(param_4 + 8) * fVar7)));
  if ((float10)fVar1 < (float10)0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return (uint)param_1;
}

/* ref: FUN_005baa90 */
float10 F_005baa90(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5baa90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  char cVar1;
  bool bVar2;
  float10 fVar3;
  
  cVar1 = *in_ecx;
  if (cVar1 == '\0') {
    *(float *)(in_ecx + 0x20) = param_2;
    return (float10)*(float *)(in_ecx + 0x20);
  }
  if (cVar1 == '\x01') {
    *(float *)(in_ecx + 0x20) =
         ((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 0x14)) * (float10)param_2 +
                (float10)param_3 * (float10)*(float *)(in_ecx + 0x14))));
    return (float10)*(float *)(in_ecx + 0x20);
  }
  if ((cVar1 == '\x02') &&
     ((bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x18)) || GEN_ISNAN((float10)param_2),
      bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x18) == (float10)param_2) ||
      (bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x1c)) || GEN_ISNAN((float10)param_3),
      bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x1c) == (float10)param_3))))) {
    *(float *)(in_ecx + 0x18) = param_2;
    *(float *)(in_ecx + 0x1c) = param_3;
    fVar3 = F_0055e870(param_2,param_3,*(float *)(in_ecx + 4),*(float *)(in_ecx + 8),
                         *(float *)(in_ecx + 0xc),*(float *)(in_ecx + 0x10));
    *(float *)(in_ecx + 0x20) = (float)fVar3;
    return (float10)*(float *)(in_ecx + 0x20);
  }
  return (float10)*(float *)(in_ecx + 0x20);
}

/* ref: FUN_005bab70 */
uint F_005bab70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bab70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_005babb0 */
uint F_005babb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5babb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkCrest::vf0 */
uint F_005bac70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005bacb0 */
uint F_005bacb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bacb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005bacf0 */
byte F_005bacf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5bacf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(byte *)((int)this + 0x2c) =
       *(byte *)((int)this + 0x2c) ^ ((char)param_1 * '\x04' ^ *(byte *)((int)this + 0x2c)) & 4;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(byte *)((int)this + 0x2e) =
       ((byte)param_5 & 1) * '\x04' | *(byte *)((int)this + 0x2e) & 0xfa | (byte)param_4 & 1;
  return (byte)param_4 & 1;
}

/* ref: FUN_005bad60 */
uint F_005bad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bad60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0xc) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_005bad70 */
uint F_005bad70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bad70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x18) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_005badb0 */
uint F_005badb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5badb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_005bae00 */
uint F_005bae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bae00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005bae40 */
uint F_005bae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bae40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_005baeb0 */
uint F_005baeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5baeb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baee0 */
uint F_005baee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5baee0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf10 */
uint F_005baf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf20 */
uint F_005baf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf50 */
uint F_005baf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf60 */
byte F_005baf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005baf80 */
byte F_005baf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_005bb080 */
uint F_005bb080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb080u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb0d0 */
uint F_005bb0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb0d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb0e0 */
uint F_005bb0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb0e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb110 */
uint F_005bb110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb160 */
uint F_005bb160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb1c0 */
uint F_005bb1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb1e0 */
uint F_005bb1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb1e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb1f0 */
uint F_005bb1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb220 */
uint F_005bb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb250 */
uint F_005bb250(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_005bb260 */
uint F_005bb260(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_005bb270 */
uint F_005bb270(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb280 */
uint F_005bb280(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb290 */
uint F_005bb290(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bb2a0 */
uint F_005bb2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005bb2b0 */
uint F_005bb2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb2b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_005bb2d0 */
uint F_005bb2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb2d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bb310 */
uint F_005bb310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb310u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_005bb330 */
uint F_005bb330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb380 */
uint F_005bb380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb380u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb3e0 */
uint F_005bb3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb3e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb410 */
uint F_005bb410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb460 */
uint F_005bb460(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb470 */
uint F_005bb470(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb4a0 */
uint F_005bb4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb4c0 */
uint F_005bb4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb4c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb4d0 */
uint F_005bb4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb4d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb500 */
uint F_005bb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb570 */
uint F_005bb570(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb580 */
uint F_005bb580(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb5b0 */
uint F_005bb5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb600 */
uint F_005bb600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb630 */
uint F_005bb630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb630u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb690 */
uint F_005bb690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb690u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb6e0 */
uint F_005bb6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb6e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb730 */
uint F_005bb730(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb740 */
uint F_005bb740(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb740u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb770 */
uint F_005bb770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb7a0 */
uint F_005bb7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb7a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb7e0 */
uint F_005bb7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb7e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb830 */
uint F_005bb830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb830u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb880 */
uint F_005bb880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb880u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb8d0 */
uint F_005bb8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb8d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb930 */
uint F_005bb930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb930u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb990 */
uint F_005bb990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb9c0 */
uint F_005bb9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bba30 */
uint F_005bba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bba30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bba60 */
uint F_005bba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bba60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bbac0 */
byte F_005bbac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbaf0 */
uint F_005bbaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbaf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bbb00 */
uint F_005bbb00(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbb00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bbb30 */
uint F_005bbb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bbb70 */
uint F_005bbb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbb90 */
byte F_005bbb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbbc0 */
uint F_005bbbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbbc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bbbf0 */
uint F_005bbbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbbf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bbc70 */
uint F_005bbc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbc90 */
byte F_005bbc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbcf0 */
uint F_005bbcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbcf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bbd00 */
uint F_005bbd00(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbd00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bbd10 */
uint F_005bbd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbd10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bbd40 */
uint F_005bbd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbd40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bbda0 */
byte F_005bbda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbe10 */
uint F_005bbe10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbe10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbe40 */
byte F_005bbe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbea0 */
uint F_005bbea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbec0 */
byte F_005bbec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbf10 */
byte F_005bbf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbf50 */
uint F_005bbf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbf70 */
byte F_005bbf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbfa0 */
byte F_005bbfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbfe0 */
uint F_005bbfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bc000 */
byte F_005bc000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bc040 */
unsigned int F_005bc040(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc040u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bc0a0 */
uint F_005bc0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc0a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bc0b0 */
uint F_005bc0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bc0e0 */
uint F_005bc0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc120 */
uint F_005bc120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bc140 */
byte F_005bc140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bc190 */
uint F_005bc190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bc1c0 */
uint F_005bc1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc1f0 */
uint F_005bc1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bc250 */
uint F_005bc250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc280 */
uint F_005bc280(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc2b0 */
uint F_005bc2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc2b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc300 */
uint F_005bc300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc340 */
uint F_005bc340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc370 */
uint F_005bc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc3c0 */
uint F_005bc3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc3f0 */
uint F_005bc3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc3f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc420 */
uint F_005bc420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc450 */
uint F_005bc450(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc480 */
uint F_005bc480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc4f0 */
uint F_005bc4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc4f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_005bc500 */
uint F_005bc500(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bc510 */
uint F_005bc510(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bc520 */
uint F_005bc520(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc530 */
uint F_005bc530(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005bc560 */
uint F_005bc560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc590 */
uint F_005bc590(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc5c0 */
uint F_005bc5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc5c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc5e0 */
uint F_005bc5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc5e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc610 */
uint F_005bc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc610u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc640 */
uint F_005bc640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bc680 */
uint F_005bc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_005bc6c0 */
uint F_005bc6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_005bc6f0 */
uint F_005bc6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc6f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc720 */
uint F_005bc720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc720u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc770 */
uint F_005bc770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc7b0 */
uint F_005bc7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc7b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc7e0 */
uint F_005bc7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc840 */
uint F_005bc840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc8a0 */
uint F_005bc8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc900 */
uint F_005bc900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc930 */
uint F_005bc930(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc930u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc950 */
uint F_005bc950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc990 */
uint F_005bc990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bca40 */
uint F_005bca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bca40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcab0 */
uint F_005bcab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcb20 */
uint F_005bcb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcb90 */
uint F_005bcb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcc00 */
uint F_005bcc00(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_005bcc10 */
uint F_005bcc10(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bcc20 */
uint F_005bcc20(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bcc30 */
uint F_005bcc30(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bcc40 */
uint F_005bcc40(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005bcc70 */
uint F_005bcc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcc70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,400);
  return (uint)uVar1;
}

/* ref: FUN_005bccb0 */
uint F_005bccb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bccb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bcce0 */
uint F_005bcce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcce0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bcda0 */
uint F_005bcda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcda0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xb0,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_005bcdd0 */
uint F_005bcdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bce00 */
uint F_005bce00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bce00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bce30 */
uint F_005bce30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bce30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bce50 */
uint F_005bce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bce50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005bce80 */
uint F_005bce80(unsigned int gen_a0)
{
  GEN_ENTER(0x5bce80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bcea0 */
uint F_005bcea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bcf10 */
uint F_005bcf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcf10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcf50 */
uint F_005bcf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcf70 */
uint F_005bcf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcf70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcf80 */
uint F_005bcf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcfa0 */
uint F_005bcfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcfc0 */
uint F_005bcfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcfc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

