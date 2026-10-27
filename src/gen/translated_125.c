#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ae5bd0 */
uint F_00ae5bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xae5bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x14c0a44) = param_1;
  return param_1;
}

/* ref: FUN_00ae5c00 */
byte F_00ae5c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5c20 */
byte F_00ae5c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5c40 */
unsigned int F_00ae5c40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_00ae5c70 */
unsigned int F_00ae5c70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5c70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00ae5ca0 */
unsigned int F_00ae5ca0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5ca0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  return 0;
}

/* ref: FUN_00ae5cd0 */
uint F_00ae5cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00ae5cf0 */
byte F_00ae5cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5d10 */
uint F_00ae5d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae5d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return (uint)((param_1 * 3 + 0xb + param_2) * 0x10 + (int)this);
}

/* ref: FUN_00ae5d40 */
uint F_00ae5d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00ae5d50 */
uint F_00ae5d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 5) * 0x10 + in_ecx;
}

/* ref: FUN_00ae5d70 */
uint F_00ae5d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 8) * 0x10 + in_ecx;
}

/* ref: Client::Game::Control::MoveControl::HitCollisionSaveBufferForSlideMoving::vf0 */
uint F_00ae5d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec490));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae5dd0 */
unsigned int F_00ae5dd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5dd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00ae5e00 */
byte F_00ae5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5e20 */
unsigned int F_00ae5e20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5e20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00ae5e50 */
unsigned int F_00ae5e50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1c) = param_2;
  return 0;
}

/* ref: FUN_00ae5e80 */
unsigned int F_00ae5e80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5e80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00ae5eb0 */
byte F_00ae5eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5eb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x24) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5ed0 */
byte F_00ae5ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5ed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5ef0 */
byte F_00ae5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x26) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5f20 */
uint F_00ae5f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae5f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x40) = param_1;
  *(undefined4 *)((int)this + 0x44) = param_2;
  return param_1;
}

/* ref: FUN_00ae5f50 */
unsigned int F_00ae5f50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5f50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x48) = param_2;
  return 0;
}

/* ref: FUN_00ae5f80 */
byte F_00ae5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5f80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5fb0 */
uint F_00ae5fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00ae5fd0 */
unsigned int F_00ae5fd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5fd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00ae6000 */
unsigned int F_00ae6000(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6000u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1c) = param_2;
  return 0;
}

/* ref: FUN_00ae6030 */
unsigned int F_00ae6030(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6030u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00ae6060 */
unsigned int F_00ae6060(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6060u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_00ae60b0 */
unsigned int F_00ae60b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae60b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return 0;
}

/* ref: FUN_00ae60e0 */
unsigned int F_00ae60e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae60e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x44) = param_2;
  return 0;
}

/* ref: FUN_00ae6110 */
unsigned int F_00ae6110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x48) = param_2;
  return 0;
}

/* ref: FUN_00ae6140 */
unsigned int F_00ae6140(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6140u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x4c) = param_2;
  return 0;
}

/* ref: FUN_00ae6170 */
unsigned int F_00ae6170(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6170u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x50) = param_2;
  return 0;
}

/* ref: FUN_00ae61a0 */
unsigned int F_00ae61a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae61a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x54) = param_2;
  return 0;
}

/* ref: FUN_00ae61d0 */
byte F_00ae61d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae61d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x58) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae61f0 */
byte F_00ae61f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae61f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x59) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae6210 */
byte F_00ae6210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae6230 */
byte F_00ae6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae6250 */
unsigned int F_00ae6250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x5c) = param_2;
  return 0;
}

/* ref: FUN_00ae6290 */
byte F_00ae6290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x70) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae62b0 */
uint F_00ae62b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae62b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x78) = param_1;
  *(undefined4 *)((int)this + 0x7c) = param_2;
  return param_1;
}

/* ref: FUN_00ae62f0 */
byte F_00ae62f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae62f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  REFG(undefined1, 0x14c0a40) = (byte)param_1;
  return (byte)param_1;
}

/* ref: FUN_00ae6300 */
byte F_00ae6300(unsigned int gen_a0)
{
  GEN_ENTER(0xae6300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 3) && (param_1 != 0x22)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6320 */
byte F_00ae6320(unsigned int gen_a0)
{
  GEN_ENTER(0xae6320u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0xd) && (param_1 != 0x29)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6340 */
byte F_00ae6340(unsigned int gen_a0)
{
  GEN_ENTER(0xae6340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6390 */
byte F_00ae6390(unsigned int gen_a0)
{
  GEN_ENTER(0xae6390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x14: ;
  case 0x15: ;
  case 0x30: ;
  case 0x31: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae63e0 */
byte F_00ae63e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae63e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x16: ;
  case 0x1e: ;
  case 0x32: ;
  case 0x3a: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6440 */
byte F_00ae6440(unsigned int gen_a0)
{
  GEN_ENTER(0xae6440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x2e: ;
  case 0x35: ;
  case 0x37: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6490 */
byte F_00ae6490(unsigned int gen_a0)
{
  GEN_ENTER(0xae6490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x1c: ;
  case 0x1d: ;
  case 0x38: ;
  case 0x39: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae64e0 */
byte F_00ae64e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae64e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xe: ;
  case 0xf: ;
  case 0x17: ;
  case 0x18: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x33: ;
  case 0x34: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6540 */
byte F_00ae6540(unsigned int gen_a0)
{
  GEN_ENTER(0xae6540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x10) && (param_1 != 0x2c)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6560 */
byte F_00ae6560(unsigned int gen_a0)
{
  GEN_ENTER(0xae6560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0x23: ;
  case 0x24: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae65b0 */
byte F_00ae65b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae65b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 7: ;
  case 8: ;
  case 0x23: ;
  case 0x24: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6600 */
byte F_00ae6600(unsigned int gen_a0)
{
  GEN_ENTER(0xae6600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x1f) && (param_1 != 0x3b)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6620 */
byte F_00ae6620(unsigned int gen_a0)
{
  GEN_ENTER(0xae6620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x20) && (param_1 != 0x3c)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6640 */
byte F_00ae6640(unsigned int gen_a0)
{
  GEN_ENTER(0xae6640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x21) && (param_1 != 0x3d)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6660 */
byte F_00ae6660(unsigned int gen_a0)
{
  GEN_ENTER(0xae6660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x1e) && (param_1 != 0x3a)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6680 */
byte F_00ae6680(unsigned int gen_a0)
{
  GEN_ENTER(0xae6680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x40: ;
  case 0x41: ;
  case 0x46: ;
  case 0x47: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae66c0 */
byte F_00ae66c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae66c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x41) && (param_1 != 0x47)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae66f0 */
unsigned int F_00ae66f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae66f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x36c) = param_2;
  return 0;
}

/* ref: FUN_00ae6760 */
unsigned int F_00ae6760(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x80) = param_2;
  return 0;
}

/* ref: FUN_00ae67b0 */
byte F_00ae67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae67b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x420) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae67d0 */
uint F_00ae67d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae67d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x360) = param_2;
  return param_2;
}

/* ref: FUN_00ae67f0 */
unsigned int F_00ae67f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae67f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x440) = param_2;
  return 0;
}

/* ref: FUN_00ae6820 */
unsigned int F_00ae6820(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x444) = param_2;
  return 0;
}

/* ref: FUN_00ae6850 */
unsigned int F_00ae6850(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6850u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x448) = param_2;
  return 0;
}

/* ref: FUN_00ae6880 */
unsigned int F_00ae6880(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6880u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x44c) = param_2;
  return 0;
}

/* ref: FUN_00ae68c0 */
uint F_00ae68c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae68c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(float *)(in_ecx + 0x450) = (float)(byte)param_2;
  return (uint)(byte)param_2;
}

/* ref: FUN_00ae68f0 */
float10 F_00ae68f0(float gen_a0)
{
  GEN_ENTER(0xae68f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00ae6910 */
unsigned int F_00ae6910(void)
{
  GEN_ENTER(0xae6910u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x14c0a44) = 0;
  return 0;
}

/* ref: FUN_00ae6930 */
byte F_00ae6930(unsigned int gen_a0)
{
  GEN_ENTER(0xae6930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  return 1 - (uVar2 != 1);
}

/* ref: FUN_00ae6960 */
byte F_00ae6960(void)
{
  GEN_ENTER(0xae6960u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14c0a67);
}

/* ref: FUN_00ae6970 */
byte F_00ae6970(unsigned int gen_a0)
{
  GEN_ENTER(0xae6970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a64) != '\0')) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x1cc);
}

/* ref: FUN_00ae69a0 */
byte F_00ae69a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae69a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x249);
}

/* ref: FUN_00ae69b0 */
byte F_00ae69b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae69b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24b);
}

/* ref: FUN_00ae6a20 */
unsigned int F_00ae6a20(unsigned int gen_a0)
{
  GEN_ENTER(0xae6a20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0a7b) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae6a70 */
uint F_00ae6a70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6a70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x48))))
                    (*(int * PTR32 *)(param_1 + 0x10),(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00ae6a90 */
byte F_00ae6a90(unsigned int gen_a0)
{
  GEN_ENTER(0xae6a90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x10) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x2dd2))) >> 2 & 1;
  }
  return 0;
}

/* ref: FUN_00ae6ab0 */
uint F_00ae6ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6ab0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((char)param_2 == '\0') {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0x22: ;
      return 3;
    case 0x23: ;
      return 7;
    case 0x24: ;
      return 8;
    case 0x29: ;
      return 0xd;
    case 0x2a: ;
      return 0xe;
    case 0x2b: ;
      return 0xf;
    case 0x2c: ;
      return 0x10;
    case 0x2d: ;
      return 0x11;
    case 0x2e: ;
      return 0x12;
    case 0x2f: ;
      return 0x13;
    case 0x30: ;
      return 0x14;
    case 0x31: ;
      return 0x15;
    case 0x32: ;
      return 0x16;
    case 0x33: ;
      return 0x17;
    case 0x34: ;
      return 0x18;
    case 0x35: ;
      return 0x19;
    case 0x36: ;
      return 0x1a;
    case 0x37: ;
      return 0x1b;
    case 0x38: ;
      return 0x1c;
    case 0x39: ;
      return 0x1d;
    case 0x3a: ;
      return 0x1e;
    case 0x3b: ;
      return 0x1f;
    case 0x3c: ;
      return 0x20;
    case 0x3d: ;
      return 0x21;
    case 0x46: ;
      return 0x40;
    case 0x47: ;
      uVar1 = 0x41;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 3: ;
      return 0x22;
    case 7: ;
      return 0x23;
    case 8: ;
      return 0x24;
    case 0xd: ;
      return 0x29;
    case 0xe: ;
      return 0x2a;
    case 0xf: ;
      return 0x2b;
    case 0x10: ;
      return 0x2c;
    case 0x11: ;
      return 0x2d;
    case 0x12: ;
      return 0x2e;
    case 0x13: ;
      return 0x2f;
    case 0x14: ;
      return 0x30;
    case 0x15: ;
      return 0x31;
    case 0x16: ;
      return 0x32;
    case 0x17: ;
      return 0x33;
    case 0x18: ;
      return 0x34;
    case 0x19: ;
      return 0x35;
    case 0x1a: ;
      return 0x36;
    case 0x1b: ;
      return 0x37;
    case 0x1c: ;
      return 0x38;
    case 0x1d: ;
      return 0x39;
    case 0x1e: ;
      return 0x3a;
    case 0x1f: ;
      return 0x3b;
    case 0x20: ;
      return 0x3c;
    case 0x21: ;
      return 0x3d;
    case 0x40: ;
      return 0x46;
    case 0x41: ;
      return 0x47;
    }
  }
  return uVar1;
}

/* ref: FUN_00ae6e10 */
byte F_00ae6e10(unsigned int gen_a0)
{
  GEN_ENTER(0xae6e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (bVar2 = F_00a9f620(*(int *)((int)this + 0x10)), bVar2 != 0)) {
    return 1;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if ((piVar1 != (int *)0x0) && (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), uVar3 == 1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae6e60 */
float10 F_00ae6e60(unsigned int gen_a0)
{
  GEN_ENTER(0xae6e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc0))) *
                         (float10)REFG(double, 0x1088108))));
}

/* ref: FUN_00ae6e80 */
uint F_00ae6e80(unsigned int gen_a0)
{
  GEN_ENTER(0xae6e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  uint uVar1;
  byte bVar2;
  
  in_ecx = *(int *)((int)this + 0x10);
  if ((in_ecx == 0) || (bVar2 = *(byte *)(in_ecx + 0x2dd2) >> 2 & 1, bVar2 == 0)) {
    uVar1 = F_00aa0210(in_ecx,1,0);
    if ((uVar1 == 0) ||
       ((uVar1 = F_00aa0680(*(undefined * PTR32 *)((int)this + 0x10),1,0), uVar1 == 0 ||
        (*(byte *)(uVar1 + 5) < 2)))) {
      if (*(uint *)((int)this + 0x364) == 0) {
        return 3;
      }
      return *(uint *)((int)this + 0x364);
    }
    bVar2 = 1;
  }
  if (*(uint *)((int)this + 0x368) != 0) {
    return *(uint *)((int)this + 0x368);
  }
  if (bVar2 == 0) {
    return 3;
  }
  return 0x22;
}

/* ref: FUN_00ae6ef0 */
byte F_00ae6ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xae6ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (REFG(char, 0x14c0a40) == '\0') {
    return 0;
  }
  return *(char *)(in_ecx + 0x420) != '\0';
}

/* ref: FUN_00ae6fc0 */
float10 F_00ae6fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xae6fc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  byte bVar2;
  bool bVar3;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar2 != 0) {
      return (float10)*(float *)&REFG(undefined, 0x14c0a7c);
    }
  }
  if (*(char *)(in_ecx + 0x1cc) != '\0') {
    fVar1 = *(float *)(in_ecx + 0x40);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
      bVar3 = GEN_ISNAN(*(float *)(in_ecx + 0x44)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
      if (bVar3 != (bVar3 || *(float *)(in_ecx + 0x44) == REFG(float, 0x10ebbf0))) {
        return (float10)fVar1;
      }
    }
    else {
      bVar3 = GEN_ISNAN(*(float *)(in_ecx + 0x4c)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
      if (bVar3 != (bVar3 || *(float *)(in_ecx + 0x4c) == REFG(float, 0x10ebbf0))) goto LAB_00ae7035;
    }
    return (float10)*(float *)(in_ecx + 0x1d8);
  }
LAB_00ae7035: ;
  return (float10)0;
}

/* ref: FUN_00ae7060 */
ushort F_00ae7060(unsigned int gen_a0)
{
  GEN_ENTER(0xae7060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x374);
}

/* ref: FUN_00ae7070 */
uint F_00ae7070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7070u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x374) = (uint)(ushort)param_2;
  return (uint)(ushort)param_2;
}

/* ref: FUN_00ae70b0 */
uint F_00ae70b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0cc3) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00ae70d0 */
unsigned int F_00ae70d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0cc3) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ae70f0 */
byte F_00ae70f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x420) = 0;
  REFG(undefined1, 0x14c0a40) = 0;
  return 0;
}

/* ref: FUN_00ae7100 */
float10 F_00ae7100(unsigned int gen_a0)
{
  GEN_ENTER(0xae7100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(int)(param_1 + 100);
  if ((int)(param_1 + 100) < 0) {
    fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)(float)(fVar1 / (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_00ae7130 */
uint F_00ae7130(void)
{
  GEN_ENTER(0xae7130u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x1375bbc) != 0) {
    return 0;
  }
  return REFG(undefined4, 0x1375b90);
}

/* ref: FUN_00ae7160 */
byte F_00ae7160(void)
{
  GEN_ENTER(0xae7160u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if (uVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae7180 */
uint F_00ae7180(unsigned int gen_a0)
{
  GEN_ENTER(0xae7180u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 * puVar1;
  
  this = (undefined *)F_00b6afa0();
  puVar1 = (undefined4 *)F_00a5feb0(this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae7230 */
byte F_00ae7230(void)
{
  GEN_ENTER(0xae7230u, 0u, 0u, 0u, 0u);
  if ((REFG(int, 0x1375b64) != 2) && (REFG(int, 0x1375b64) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae7250 */
uint F_00ae7250(unsigned int gen_a0)
{
  GEN_ENTER(0xae7250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if ((uVar2 != 0) && (*(char *)((int)this + 0xb0) != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae7280 */
byte F_00ae7280(unsigned int gen_a0)
{
  GEN_ENTER(0xae7280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if (((uVar2 != 0) && (*(char *)((int)this + 0xb0) != '\0')) &&
       (*(char *)((int)this + 0x14) != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae72e0 */
uint F_00ae72e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae72e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 * puVar1;
  
  this = (undefined *)F_00b6afa0();
  puVar1 = (undefined4 *)F_00a5feb0(this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae7310 */
uint F_00ae7310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x230) + 0x19;
  *param_1 = *(undefined4 *)((int)this + iVar1 * 0x10);
  param_1[1] = *(undefined4 *)((int)this + iVar1 * 0x10 + 4);
  param_1[2] = *(undefined4 *)((int)this + iVar1 * 0x10 + 8);
  return (uint)param_1;
}

/* ref: FUN_00ae7340 */
byte F_00ae7340(unsigned int gen_a0)
{
  GEN_ENTER(0xae7340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x18) != '\0') && (*(int *)(in_ecx + 0x238) == *(int *)(in_ecx + 0x234)))
  {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae73e0 */
byte F_00ae73e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae73e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((*(char *)(in_ecx + 0x14) == '\0') && ((char)param_2 != '\0')) {
    *(undefined1 *)(in_ecx + 0x14) = 1;
  }
  if ((*(char *)(in_ecx + 0x15) == '\0') && ((char)param_3 != '\0')) {
    *(undefined1 *)(in_ecx + 0x15) = 1;
  }
  return 1;
}

/* ref: FUN_00ae7420 */
byte F_00ae7420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  bool bVar1;
  
  *(undefined1 *)(in_ecx + 0x22) = 1;
  bVar1 = param_2 != (undefined4 *)0x0;
  if (bVar1) {
    *(undefined4 *)(in_ecx + 0x24) = *param_2;
  }
  *(bool *)(in_ecx + 0x28) = bVar1;
  return bVar1;
}

/* ref: FUN_00ae7440 */
unsigned int F_00ae7440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x176) = 1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)((int)this + 0x177) = 1;
    *(undefined4 *)((int)this + 0x178) = *param_1;
    return 0;
  }
  *(undefined1 *)((int)this + 0x177) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  return 0;
}

/* ref: FUN_00ae7490 */
double F_00ae7490(unsigned int gen_a0)
{
  GEN_ENTER(0xae7490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float local_8;
  
  local_8 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
  uVar1 = F_00b6afa0();
  if (uVar1 != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xc0) + (float10)local_8)));
  }
  return (double)local_8;
}

/* ref: FUN_00ae74d0 */
uint F_00ae74d0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae74d0u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  F_0054ce40(&(*(float *)(gen_frame + 0x0)),param_2,param_3);
  if (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 <= (*(float *)(gen_frame + 0x4)))) {
    param_1 = (float)((float10)param_1 * (float10)REFG(double, 0x1094890));
  }
  fVar1 = (float)((float10)param_1 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar4 = (float10)fVar2;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * (float10)*param_4);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_4[1] * fVar4);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 * (float10)param_4[2]);
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar4;
  (*(float *)(gen_frame + 0xc)) = (float)fVar4;
  uVar3 = F_004f41e0(param_2,&(*(float *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ae75d0 */
byte F_00ae75d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae75d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(double *)&REFG(undefined, 0x10944e0) <= (double)*(byte *)(in_ecx + 0x156)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae76b0 */
byte F_00ae76b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae76b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae7720 */
byte F_00ae7720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae7720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  *(byte *)(in_ecx + 4) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_00ae7740 */
float10 F_00ae7740(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7740u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)REFG(float, 0x1339b94) * (float10)param_2 + (float10)param_1);
  if ((fVar1 < (float10)0) && ((float10)REFG(float, 0x1339b9c) < (float10)((float)GEN_TOF(ABS(fVar1))))) {
    fVar1 = ((float10)GEN_TOD(gen_bits2f((uint)gen_fl2bits(REFG(float, 0x1339b9c)) ^ REFG(uint, 0x10920d0))));
  }
  return fVar1;
}

/* ref: FUN_00ae7790 */
float10 F_00ae7790(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xae7790u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(pow((float10)param_2,(float10)*(double *)&REFG(undefined, 0x1092098))));
  return (float10)((float)GEN_TOF(((float10)param_1 * (float10)param_2 +
                         ((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar2)));
}

/* ref: FUN_00ae77d0 */
float10 F_00ae77d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae77d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar2;
  float local_8;
  
  local_8 = REFG(float, 0x1339b98);
  if (param_1 != 0) {
    local_8 = *(float *)param_1;
  }
  fVar2 = ((float10)GEN_TOD(pow((float10)local_8,(float10)*(double *)&REFG(undefined, 0x1092098))));
  return (float10)((float)GEN_TOF((((float10)(float)fVar2 * (float10)REFG(double, 0x1094890)) /
                         ((float10)REFG(float, 0x1339b94) + (float10)REFG(float, 0x1339b94)))));
}

/* ref: FUN_00ae7830 */
byte F_00ae7830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7830u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float * pfVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    pfVar1 = (float *)(param_1 + 0xb4);
    do {
      bVar3 = GEN_ISNAN((float10)pfVar1[-1]) || GEN_ISNAN((float10)*(float *)(param_2 + 0xc));
      if ((((((bVar3 != (bVar3 || (float10)pfVar1[-1] == (float10)*(float *)(param_2 + 0xc))) &&
             (bVar3 = GEN_ISNAN((float10)*pfVar1) || GEN_ISNAN((float10)*(float *)(param_2 + 0x10)),
             bVar3 != (bVar3 || (float10)*pfVar1 == (float10)*(float *)(param_2 + 0x10)))) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[1]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x14)),
            bVar3 != (bVar3 || (float10)pfVar1[1] == (float10)*(float *)(param_2 + 0x14)))) &&
           ((bVar3 = GEN_ISNAN((float10)pfVar1[0xb]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x18)),
            bVar3 != (bVar3 || (float10)pfVar1[0xb] == (float10)*(float *)(param_2 + 0x18)) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[0xc]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x1c)),
            bVar3 != (bVar3 || (float10)pfVar1[0xc] == (float10)*(float *)(param_2 + 0x1c)))))) &&
          ((bVar3 = GEN_ISNAN((float10)pfVar1[0xd]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x20)),
           bVar3 != (bVar3 || (float10)pfVar1[0xd] == (float10)*(float *)(param_2 + 0x20)) &&
           ((bVar3 = GEN_ISNAN((float10)pfVar1[0x17]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x24)),
            bVar3 != (bVar3 || (float10)pfVar1[0x17] == (float10)*(float *)(param_2 + 0x24)) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[0x18]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x28)),
            bVar3 != (bVar3 || (float10)pfVar1[0x18] == (float10)*(float *)(param_2 + 0x28))))))))
         && (bVar3 = GEN_ISNAN((float10)pfVar1[0x19]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x2c)),
            bVar3 != (bVar3 || (float10)pfVar1[0x19] == (float10)*(float *)(param_2 + 0x2c)))) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  return 0;
}

/* ref: FUN_00ae7a40 */
byte F_00ae7a40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7a40u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(double *)&REFG(undefined, 0x1094810) < (double)(float)((float10)param_1 - (float10)param_2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae7a70 */
unsigned int F_00ae7a70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7a70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)((int)param_1 + 0x28) = param_2;
  if ((*(int *)((int)param_1 + 0x14) == 3) && (param_2 <= 0.0)) {
    *(undefined4 *)((int)param_1 + 0x14) = 4;
    F_00af8d90(param_1,4,3);
  }
  return 0;
}

/* ref: FUN_00ae7aa0 */
uint F_00ae7aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*(char *)(in_ecx + 0xa6) != '\0') &&
     (((char)param_2 == '\0' || (*(char *)(in_ecx + 0xcc) != '\0')))) {
    return in_ecx + 0xd0;
  }
  return in_ecx + 0x80;
}

/* ref: FUN_00ae7ad0 */
byte F_00ae7ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xae7ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) &&
      (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10))), in_ecx_00 != 0)) &&
     (bVar1 = F_00a9f620(in_ecx_00), bVar1 != 0)) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x14) != 0) && (*(char *)(in_ecx + 0x5b) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae7b00 */
unsigned int F_00ae7b00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7b00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(char *)(in_ecx + 0x49) != '\0') {
    *(float *)(in_ecx + 0x40) = param_2;
    *(undefined1 *)(in_ecx + 0x48) = 1;
  }
  return 0;
}

/* ref: FUN_00ae7ba0 */
float10 F_00ae7ba0(float gen_a0)
{
  GEN_ENTER(0xae7ba0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,4)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00ae7bc0 */
byte F_00ae7bc0(float gen_a0)
{
  GEN_ENTER(0xae7bc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c51673((double)param_1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
  return uVar2 == 0;
}

/* ref: FUN_00ae7c10 */
uint F_00ae7c10(float gen_a0)
{
  GEN_ENTER(0xae7c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint local_c;
  
  local_c = (uint)(longlong)TRUNC((double)param_1 * *(double *)&REFG(undefined, 0x10912a8));
  return local_c;
}

/* ref: FUN_00ae7c40 */
float10 F_00ae7c40(unsigned int gen_a0)
{
  GEN_ENTER(0xae7c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)(float)((float10)(int)param_1 / (float10)*(double *)&REFG(undefined, 0x10912a8));
}

/* ref: FUN_00ae7c60 */
byte F_00ae7c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7c60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)*(float *)&REFG(undefined, 0x10ebbe8) <
      (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)param_2[2] +
                      ((float10)*(float *)param_1 * (float10)*param_2 +
                      (float10)*(float *)(param_1 + 4) * (float10)param_2[1]))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae8170 */
byte F_00ae8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xae8170u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  fVar6 = (float10)REFG(double, 0x1094890);
  fVar7 = (float10)((float)GEN_TOF((((float10)(float)((float10)param_3[1] * fVar6) * (float10)param_2[1] +
                           (float10)(float)((float10)*param_3 * fVar6) * (float10)*param_2) +
                          (float10)(float)(fVar6 * (float10)param_3[2]) * (float10)param_2[2])));
  fVar5 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
    return 0;
  }
  fVar6 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)(float)((float10)param_4[1] -
                                                             (float10)param_1[1]) *
                                             (float10)(float)((float10)param_3[1] * fVar6) +
                                            (float10)(float)((float10)*param_4 - (float10)*param_1)
                                            * (float10)(float)((float10)*param_3 * fVar6)) +
                                           (float10)(float)((float10)param_4[2] -
                                                           (float10)param_1[2]) *
                                           (float10)(float)(fVar6 * (float10)param_3[2])))) / fVar7)));
  if ((fVar6 < fVar5) && (param_6 != (undefined1 *)0x0)) {
    *param_6 = 1;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_5 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)((float10)*param_2 * fVar6))));
  param_5[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)fVar1 * fVar6))));
  param_5[2] = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar6 * (float10)fVar2))));
  return 1;
}

/* ref: FUN_00ae82c0 */
float10 F_00ae82c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xae82c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((char)param_1 != '\0') {
    return (float10)((float)GEN_TOF((((float10)param_2 + (float10)param_3) + (float10)REFG(double, 0x1091858))));
  }
  return (float10)REFG(float, 0x1339af4);
}

/* ref: FUN_00ae8330 */
byte F_00ae8330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x28)) = param_1[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x34)) = param_1[5];
    (*(undefined4 *)(gen_frame + 0x30)) = param_1[4];
    (*(undefined4 *)(gen_frame + 0x8)) = 0x19a;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
    F_00974e00(this,&(*(undefined4 *)(gen_frame + 0x8)),-(uint)(param_2 != 0) & 0x19a,param_2);
  }
  REFG(undefined1, 0x14c0ce4) = 0;
  *(ulonglong *)&REFG(undefined, 0x14c0ce8) = F_00427d90();
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 1;
}

/* ref: FUN_00ae8400 */
uint F_00ae8400(void)
{
  GEN_ENTER(0xae8400u, 0u, 0u, 0u, 0u);
  REFG(undefined1, 0x14c0a66) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c0af8) = 0xe0000000;
  *(undefined4 *)&REFG(undefined, 0x14c0afc) = 0;
  return 0;
}

/* ref: FUN_00ae8430 */
float F_00ae8430(void)
{
  GEN_ENTER(0xae8430u, 0u, 0u, 0u, 0u);
  float fVar1;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10ebd20))) && !(fVar1 <= REFG(float, 0x10ebd20))) {
    return REFG(float, 0x10ebd20);
  }
  return fVar1;
}

/* ref: FUN_00ae8460 */
float10 F_00ae8460(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xae8460u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)param_3;
  if (fVar1 <= fVar2) {
    return (float10)param_1;
  }
  fVar3 = (float10)(float)(fVar1 * (float10)*(double *)&REFG(undefined, 0x109ca50));
  if (fVar2 < fVar3) {
    return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) / fVar3))) *
                           (float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10c6318)))));
  }
  fVar1 = ((float10)GEN_TOD(fsin(
                        (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((fVar2 - fVar3) / (fVar1 - fVar3)))) *
                                         (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))))
                       )));
  param_3 = (float)fVar1;
  if ((float10)1 < (float10)param_3) {
    param_3 = REFG(float, 0x1087f04);
  }
  fVar1 = (float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10c6318));
  param_3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)param_2 - fVar1) * (float10)param_3 +
                                    fVar1))) - ((float10)param_2 - (float10)param_1))));
  if ((float10)((float)GEN_TOF(ABS((float10)param_1))) < (float10)((float)GEN_TOF(ABS((float10)param_3)))) {
    param_3 = param_1;
  }
  return (float10)param_3;
}

/* ref: FUN_00ae8560 */
byte F_00ae8560(unsigned int gen_a0)
{
  GEN_ENTER(0xae8560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x1cc) == '\0') && (*(char *)(in_ecx + 0x1cd) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae8580 */
byte F_00ae8580(unsigned int gen_a0)
{
  GEN_ENTER(0xae8580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a65) != '\0')) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x1cd);
}

/* ref: FUN_00ae85b0 */
byte F_00ae85b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae85b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x10) == 0) ||
       (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
     (*(char *)(in_ecx + 0x1cc) == '\0')) {
    return 0;
  }
  if (*(int *)(in_ecx + 0x6c) == 7) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x3d);
}

/* ref: FUN_00ae85f0 */
byte F_00ae85f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae85f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  char cVar2;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8615;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8615: ;
  cVar2 = '\x01';
  if (*(int *)(in_ecx + 0x6c) != 7) {
    cVar2 = *(char *)(in_ecx + 0x3d);
  }
  return cVar2 == '\0';
}

/* ref: FUN_00ae8630 */
byte F_00ae8630(unsigned int gen_a0)
{
  GEN_ENTER(0xae8630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a64) != '\0')) {
    return 0;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    if (((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a65) != '\0')) {
      return 1;
    }
    if (*(char *)(in_ecx + 0x1cd) != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae8680 */
byte F_00ae8680(unsigned int gen_a0)
{
  GEN_ENTER(0xae8680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae86a5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae86a5: ;
  return *(int *)(in_ecx + 0x6c) - 4U < 4;
}

/* ref: FUN_00ae86c0 */
byte F_00ae86c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae86c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae86e5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae86e5: ;
  return *(int *)(in_ecx + 0x6c) - 5U < 2;
}

/* ref: FUN_00ae8700 */
byte F_00ae8700(unsigned int gen_a0)
{
  GEN_ENTER(0xae8700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8725;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8725: ;
  return *(int *)(in_ecx + 0x6c) == 7;
}

/* ref: FUN_00ae8740 */
byte F_00ae8740(unsigned int gen_a0)
{
  GEN_ENTER(0xae8740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8765;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8765: ;
  return *(byte *)(in_ecx + 0x66);
}

/* ref: FUN_00ae8770 */
byte F_00ae8770(unsigned int gen_a0)
{
  GEN_ENTER(0xae8770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00ae8795;
  }
  if (*(char *)(in_ecx + 0x1cd) == '\0') {
    return 0;
  }
LAB_00ae8795: ;
  return *(byte *)(in_ecx + 0x67);
}

/* ref: FUN_00ae87a0 */
byte F_00ae87a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae87a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x69);
}

/* ref: FUN_00ae87c0 */
byte F_00ae87c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae87c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x204) != 0;
}

/* ref: FUN_00ae87f0 */
byte F_00ae87f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae87f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x204) == 0) {
    return 0;
  }
  return *(int *)(in_ecx + 0x204) == 5;
}

/* ref: FUN_00ae8810 */
byte F_00ae8810(unsigned int gen_a0)
{
  GEN_ENTER(0xae8810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x204);
  if ((iVar1 != 0) && (((iVar1 == 3 || (iVar1 == 4)) || (iVar1 == 2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae8860 */
uint F_00ae8860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_00ae8880 */
uint F_00ae8880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_00ae8890 */
byte F_00ae8890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae8890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    bVar1 = F_00ae6300(param_2);
    break;
  case 1: ;
    bVar1 = F_00ae6320(param_2);
    break;
  case 2: ;
    bVar1 = F_00ae6340(param_2);
    break;
  case 3: ;
    bVar1 = F_00ae6390(param_2);
    break;
  case 4: ;
    bVar1 = F_00ae63e0(param_2);
    break;
  case 5: ;
    bVar1 = F_00ae6440(param_2);
    break;
  case 6: ;
    bVar1 = F_00ae6490(param_2);
    break;
  case 7: ;
    bVar1 = F_00ae64e0(param_2);
    break;
  case 8: ;
    bVar1 = F_00ae6540(param_2);
    break;
  case 9: ;
    bVar1 = F_00ae6560(param_2);
    break;
  case 10: ;
    bVar1 = F_00ae65b0(param_2);
    break;
  case 0xb: ;
    bVar1 = F_00ae6600(param_2);
    break;
  case 0xc: ;
    bVar1 = F_00ae6620(param_2);
    break;
  case 0xd: ;
    bVar1 = F_00ae6640(param_2);
    break;
  case 0xe: ;
    bVar1 = F_00ae6660(param_2);
    break;
  case 0xf: ;
    bVar1 = F_00ae6680(param_2);
    break;
  case 0x10: ;
    bVar1 = F_00ae66c0(param_2);
    break;
  default: ;
    goto switchD_00ae88a7_default;
  }
  if (bVar1 == 0) {
switchD_00ae88a7_default: ;
    if ((param_1 == 0) && (uVar2 = F_00ae6e80(this), param_2 == uVar2)) {
      return 1;
    }
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ae89a0 */
byte F_00ae89a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae89a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  do {
    uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar3,0);
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      if (uVar1 == 3) {
        return 1;
      }
      if (uVar1 == 0x22) {
        return 1;
      }
LAB_00ae8b33: ;
      uVar2 = F_00ae6e80(this);
      bVar4 = uVar1 == uVar2;
      goto LAB_00ae8b3d;
    case 1: ;
      if (uVar1 == 0xd) {
        return 1;
      }
      bVar4 = uVar1 == 0x29;
      goto LAB_00ae8b3d;
    case 2: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x11: ;
      case 0x12: ;
      case 0x13: ;
      case 0x2d: ;
      case 0x2e: ;
      case 0x2f: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 3: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x14: ;
      case 0x15: ;
      case 0x30: ;
      case 0x31: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 4: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x16: ;
      case 0x1e: ;
      case 0x32: ;
      case 0x3a: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 5: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x19: ;
      case 0x1a: ;
      case 0x1b: ;
      case 0x2e: ;
      case 0x35: ;
      case 0x37: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 6: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x1c: ;
      case 0x1d: ;
      case 0x38: ;
      case 0x39: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 7: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0xe: ;
      case 0xf: ;
      case 0x17: ;
      case 0x18: ;
      case 0x2a: ;
      case 0x2b: ;
      case 0x33: ;
      case 0x34: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 8: ;
      if (uVar1 == 0x10) {
        return 1;
      }
      bVar4 = uVar1 == 0x2c;
      goto LAB_00ae8b3d;
    case 9: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 7: ;
      case 8: ;
      case 9: ;
      case 10: ;
      case 0xb: ;
      case 0xc: ;
      case 0x23: ;
      case 0x24: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 10: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 7: ;
      case 8: ;
      case 0x23: ;
      case 0x24: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 0xb: ;
      if (uVar1 == 0x1f) {
        return 1;
      }
      bVar4 = uVar1 == 0x3b;
      goto LAB_00ae8b3d;
    case 0xc: ;
      if (uVar1 == 0x20) {
        return 1;
      }
      bVar4 = uVar1 == 0x3c;
      goto LAB_00ae8b3d;
    case 0xd: ;
      if (uVar1 == 0x21) {
        return 1;
      }
      bVar4 = uVar1 == 0x3d;
      goto LAB_00ae8b3d;
    case 0xe: ;
      if (uVar1 == 0x1e) {
        return 1;
      }
      bVar4 = uVar1 == 0x3a;
      goto LAB_00ae8b3d;
    case 0xf: ;
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0x40: ;
      case 0x41: ;
      case 0x46: ;
      case 0x47: ;
        goto switchD_00ae8b1a_caseD_40;
      }
      break;
    case 0x10: ;
      if (uVar1 == 0x41) {
        return 1;
      }
      bVar4 = uVar1 == 0x47;
LAB_00ae8b3d: ;
      if (bVar4) {
switchD_00ae8b1a_caseD_40: ;
        return 1;
      }
      break;
    default: ;
      if (param_1 == 0) goto LAB_00ae8b33;
    }
    uVar3 = uVar3 + 1;
    if (0xd < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00ae8d00 */
byte F_00ae8d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6600(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6620(param_2);
    if (bVar1 == 0) {
      bVar1 = F_00ae6640(param_2);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_00ae8d40 */
byte F_00ae8d40(unsigned int gen_a0)
{
  GEN_ENTER(0xae8d40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6600(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8d60 */
byte F_00ae8d60(unsigned int gen_a0)
{
  GEN_ENTER(0xae8d60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6620(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8d80 */
byte F_00ae8d80(unsigned int gen_a0)
{
  GEN_ENTER(0xae8d80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6640(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8da0 */
byte F_00ae8da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6320(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6340(param_2);
    if (bVar1 == 0) {
      bVar1 = F_00ae6390(param_2);
      if (bVar1 == 0) {
        bVar1 = F_00ae63e0(param_2);
        if (bVar1 == 0) {
          bVar1 = F_00ae6440(param_2);
          if (bVar1 == 0) {
            bVar1 = F_00ae6490(param_2);
            if (bVar1 == 0) {
              bVar1 = F_00ae64e0(param_2);
              if (bVar1 == 0) {
                bVar1 = F_00ae6540(param_2);
                if (bVar1 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00ae8e20 */
byte F_00ae8e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae64e0(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6540(param_2);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae8e50 */
byte F_00ae8e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6340(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6440(param_2);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae8e80 */
byte F_00ae8e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae6390(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00ae6490(param_2);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae8eb0 */
byte F_00ae8eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8eb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae65b0(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8ed0 */
byte F_00ae8ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00ae6660(param_1);
  return bVar1 != 0;
}

/* ref: FUN_00ae8ef0 */
byte F_00ae8ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  bool bVar1;
  
  REFG(undefined4, 0x14c0a72) = 1;
  bVar1 = param_1 != (undefined4 *)0x0;
  if (bVar1) {
    *(undefined4 *)&REFG(undefined, 0x14c0a74) = *param_1;
  }
  REFG(undefined4, 0x14c0a78) = bVar1;
  return bVar1;
}

/* ref: FUN_00ae8f20 */
unsigned int F_00ae8f20(void)
{
  GEN_ENTER(0xae8f20u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x14c0bc4) = 1;
  return 0;
}

/* ref: FUN_00ae8f30 */
uint F_00ae8f30(unsigned int gen_a0)
{
  GEN_ENTER(0xae8f30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  REFG(undefined4, 0x14c0bc6) = 1;
  if (param_1 != (undefined4 *)0x0) {
    REFG(undefined4, 0x14c0bc7) = 1;
    *(undefined4 *)&REFG(undefined, 0x14c0bc8) = *param_1;
    return (uint)param_1;
  }
  REFG(undefined4, 0x14c0bc7) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c0bc8) = 0;
  return (uint)param_1;
}

/* ref: FUN_00ae8f70 */
unsigned int F_00ae8f70(void)
{
  GEN_ENTER(0xae8f70u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x14c0a68) != '\0') {
    *(undefined4 *)&REFG(undefined, 0x14c0af8) = REFG(undefined4, 0x14c0af0);
    *(undefined4 *)&REFG(undefined, 0x14c0afc) = REFG(undefined4, 0x14c0af4);
  }
  return 0;
}

/* ref: FUN_00ae8f90 */
byte F_00ae8f90(unsigned int gen_a0)
{
  GEN_ENTER(0xae8f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8fb5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8fb5: ;
  return *(byte *)(in_ecx + 0x66);
}

/* ref: FUN_00ae8fc0 */
byte F_00ae8fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xae8fc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x10) != 0) &&
       (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a64) != '\0')) ||
     (bVar1 = REFG(undefined1, 0x14c0bcc), *(char *)(in_ecx + 0x1cc) != '\0')) {
    if ((((*(int *)(in_ecx + 0x10) == 0) ||
         (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
       (*(char *)(in_ecx + 0x1cc) == '\0')) {
      return 0;
    }
    bVar1 = 1;
    if (*(int *)(in_ecx + 0x6c) != 7) {
      return *(byte *)(in_ecx + 0x3d);
    }
  }
  return bVar1;
}

/* ref: FUN_00ae9020 */
byte F_00ae9020(unsigned int gen_a0)
{
  GEN_ENTER(0xae9020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a64) != '\0')) ||
      (*(char *)(in_ecx + 0x1cc) != '\0')) && (*(int *)(in_ecx + 0x6c) - 4U < 4)) {
    return 1;
  }
  if ((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0))
  {
    if ((*(int *)(in_ecx + 0x10) != 0) &&
       ((bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0 && (REFG(char, 0x14c0a64) != '\0')))) {
      return 0;
    }
    if (((((*(char *)(in_ecx + 0x1cc) == '\0') && (REFG(char, 0x14c0a6b) != '\0')) && (REFG(char, 0x14c0a67) == '\0'))
        && ((REFG(char, 0x14c0a68) == '\0' && (REFG(char, 0x14c0a69) == '\0')))) && (REFG(char, 0x14c0a6a) == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae90c0 */
float10 F_00ae90c0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae90c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  
  fVar3 = REFG(float, 0x10ebc30);
  dVar2 = *(double *)&REFG(undefined, 0x1094818);
  bVar4 = false;
  if (GEN_ISNAN(param_2) == (GEN_ISNAN(param_2) || param_2 == 0.0)) {
    if (((*(double *)&REFG(undefined, 0x1094818) < (double)param_2) &&
        (param_2 = REFG(float, 0x10ebc40), (*(byte *)(param_3 + 2) & 0x40) == 0)) &&
       (param_2 = REFG(float, 0x10ebc30), (char)*(byte *)(param_3 + 2) < '\0')) {
      param_2 = REFG(float, 0x1339b24);
    }
    *(float *)(param_1 + 0x444) = param_2;
  }
  else {
    param_2 = *(float *)(param_1 + 0x444);
    bVar4 = true;
  }
  bVar1 = *(byte *)(param_3 + 3);
  bVar5 = (bVar1 & 1) != 0;
  if ((*(char *)(param_1 + 0x1cc) == '\0') && (*(char *)(param_1 + 0x1cd) == '\0')) {
    fVar6 = (float10)((float)GEN_TOF(((float10)*(byte *)(param_3 + 4) / (float10)REFG(double, 0x10944b8))));
    bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)0);
    if (bVar4 != (bVar4 || fVar6 == (float10)0)) {
      return (float10)param_2;
    }
    if (bVar5) {
      param_2 = fVar3;
    }
  }
  else if ((bVar1 & 2) != 0 || ((bVar1 & 4) != 0 || bVar5)) {
    param_3 = (uint)gen_fl2bits(((float)GEN_TOF((((float10)*(float *)(param_1 + 0x4c) -
                                        (float10)*(float *)(param_1 + 0x80)) -
                                       (float10)*(double *)&REFG(undefined, 0x1094810)))));
    if (((float10)GEN_TOD(gen_bits2f(param_3))) < (float10)0) {
      param_3 = 0;
    }
    if (!bVar4) {
      param_3 = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)param_2));
    }
    param_2 = gen_bits2f(param_3);
  }
  if (dVar2 < (double)param_2) {
    param_2 = REFG(float, 0x10ebc34);
  }
  return (float10)param_2;
}

/* ref: FUN_00ae9200 */
unsigned int F_00ae9200(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae9200u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(char *)(in_ecx + 0x359) != '\0') {
    *(float *)(in_ecx + 0x350) = param_2;
    *(undefined1 *)(in_ecx + 0x358) = 1;
  }
  return 0;
}

/* ref: FUN_00ae9230 */
uint F_00ae9230(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9230u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)((float)GEN_TOF(ABS((float10)param_2)));
  if (fVar2 <= (float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b50) * (float10)*(double *)&REFG(undefined, 0x1080228)
                               )) {
    return (-(uint)((char)param_3 != '\0') & 3) + 1;
  }
  if ((char)param_3 == '\0') {
    uVar1 = 1;
    if ((float10)*(float *)&REFG(undefined, 0x1339b4c) < fVar2) {
      uVar1 = 2;
      if (!(*(float *)&REFG(undefined, 0x1088114) < param_2)) {
        uVar1 = 3;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        F_00a9f620(*(int *)(param_1 + 0x10));
      }
    }
    return uVar1;
  }
  if ((float10)(float)((float10)*(double *)&REFG(undefined, 0x1080228) * (float10)*(float *)&REFG(undefined, 0x1339b54)) < fVar2
     ) {
    return 7;
  }
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_2 <= *(float *)&REFG(undefined, 0x1088114))) {
    return 5;
  }
  return 6;
}

/* ref: FUN_00ae9300 */
uint F_00ae9300(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae9300u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0))
  {
    if (REFG(char, 0x14c0bc2) != '\0') {
      return 0xb;
    }
    if (REFG(char, 0x14c0a6b) == '\0') goto LAB_00ae9359;
  }
  if ((float10)((float)GEN_TOF(ABS((float10)param_2))) <= (float10)*(float *)&REFG(undefined, 0x1339b84)) {
    return 0xb;
  }
LAB_00ae9359: ;
  uVar2 = 1;
  if ((float10)param_2 < -(float10)*(float *)&REFG(undefined, 0x14c0a4c)) {
    uVar2 = 2;
  }
  if ((char)param_3 == '\0') {
    if ((float10)*(float *)&REFG(undefined, 0x1339b4c) < (float10)((float)GEN_TOF(ABS((float10)param_2)))) {
      uVar2 = 3;
      if (!(*(float *)&REFG(undefined, 0x1088114) < param_2)) {
        uVar2 = 4;
      }
      if (*(int *)(in_ecx + 0x10) != 0) {
        F_00a9f620(*(int *)(in_ecx + 0x10));
      }
    }
  }
  else if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    uVar2 = 9;
  }
  else {
    uVar2 = 10;
  }
  if ((char)param_4 != '\0') {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 1: ;
      return 5;
    case 2: ;
      return 6;
    case 3: ;
      return 7;
    case 4: ;
      uVar2 = 8;
    }
  }
  return uVar2;
}

/* ref: FUN_00ae9430 */
uint F_00ae9430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae9490 */
float F_00ae9490(unsigned int gen_a0)
{
  GEN_ENTER(0xae9490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)((int)this + 0x10));
    if (bVar2 != 0) goto LAB_00ae94bb;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (uVar3 == 1) {
LAB_00ae94bb: ;
      return *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
    }
  }
  return (float)(float10)0;
}

/* ref: FUN_00ae94d0 */
float10 F_00ae94d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae94d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc0))) +
                         (float10)REFG(float, 0x1339ba4))));
}

/* ref: FUN_00ae94f0 */
float10 F_00ae94f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae94f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc0))) +
                                          (float10)REFG(float, 0x1339ba4)))) * (float10)REFG(double, 0x1088108))));
}

/* ref: FUN_00ae9520 */
float F_00ae9520(unsigned int gen_a0)
{
  GEN_ENTER(0xae9520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int in_ecx;
  int * piVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  
  fVar3 = REFG(float, 0x1339ba4);
  in_ecx = *(int *)((int)this + 0x10);
  fVar1 = *(float *)(in_ecx + 0xc0);
  if (in_ecx != 0) {
    bVar4 = F_00a9f620(in_ecx);
    if (bVar4 != 0) goto LAB_00ae956b;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar2 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if (uVar5 == 1) {
LAB_00ae956b: ;
      return ((float)GEN_TOF((((float10)fVar1 + (float10)fVar3) + (float10)REFG(double, 0x1091858))));
    }
  }
  return REFG(float, 0x1339af4);
}

/* ref: FUN_00ae95a0 */
uint F_00ae95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0x374) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x378) = *(undefined4 *)(param_1 + 8);
  return param_1;
}

/* ref: FUN_00ae95c0 */
unsigned int F_00ae95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x82) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
  }
  *(undefined4 *)((int)this + 0x374) = uVar1;
  *(undefined4 *)((int)this + 0x378) = *(undefined4 *)(param_1 + 0x84);
  return 0;
}

/* ref: FUN_00ae95f0 */
float F_00ae95f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae95f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)REFG(float, 0x1339ba0),4)));
  return ((float)GEN_TOF(((float10)(float)fVar2 *
                (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*param_2 -
                                                                      (float10)*param_1) *
                                                      (float10)(float)((float10)*param_2 -
                                                                      (float10)*param_1) +
                                                     (float10)(float)((float10)param_2[2] -
                                                                     (float10)param_1[2]) *
                                                     (float10)(float)((float10)param_2[2] -
                                                                     (float10)param_1[2]))))))))));
}

/* ref: FUN_00ae9670 */
byte F_00ae9670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
  bVar1 = F_00551a90(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),param_2,&(*(undefined4 *)(gen_frame + 0x0)),2);
  return bVar1;
}

/* ref: FUN_00ae96c0 */
byte F_00ae96c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae96c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))(*(int * PTR32 *)((int)this + 0x10));
  if (uVar4 != 1) {
    return 0;
  }
  puVar5 = param_2;
  if (((*(int *)((int)this + 0x10) == 0) ||
      (bVar3 = F_00a9f620(*(int *)((int)this + 0x10)), bVar3 == 0)) || (param_1 != (undefined *)0x0)) {
    if (param_2 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
    }
  }
  else if (param_2 == (undefined4 *)0x0) {
    return REFG(undefined1, 0x14a73a4);
  }
  (*(undefined4 *)(gen_frame + 0x50)) = *puVar5;
  uVar1 = puVar5[1];
  (*(undefined4 *)(gen_frame + 0x54)) = uVar1;
  uVar2 = puVar5[2];
  (*(undefined4 *)(gen_frame + 0x58)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x64)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0x68)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x6c)) = uVar2;
  bVar3 = F_00551a90(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),((int *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x64)),2);
  if ((bVar3 != 0) && (uVar4 = 0, (*(uint *)(gen_frame + 0x48)) != 0)) {
    do {
      if (((*(byte *)(((int *)(gen_frame + 0x8))[(int)(uVar4)] + 0x44) & 8) != 0) &&
         ((piVar6 = (int *)F_005f32a0(0x2b,((int *)(gen_frame + 0x8))[(int)(uVar4)]), piVar6 != (int *)0x0 &&
          ((*(byte *)((int)piVar6 + 0x96) & 1) != 0)))) {
        if (param_1 != (undefined *)0x0) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0xfc))(piVar6);
          F_006001e0(param_1,uVar4);
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)(gen_frame + 0x48)));
  }
  return 0;
}

/* ref: FUN_00ae97f0 */
float10 F_00ae97f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae97f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x24) + (float10)*(float *)(param_1 + 4))));
}

/* ref: FUN_00ae9810 */
float10 F_00ae9810(unsigned int gen_a0)
{
  GEN_ENTER(0xae9810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 4) - (float10)*(float *)(param_1 + 0x24))));
}

/* ref: FUN_00ae9840 */
uint F_00ae9840(void)
{
  GEN_ENTER(0xae9840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0x32;
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb0);
    uVar1 = *(uint *)(uVar1 + 0x14);
  }
  return uVar1;
}

/* ref: FUN_00ae9860 */
byte F_00ae9860(void)
{
  GEN_ENTER(0xae9860u, 0u, 0u, 0u, 0u);
  if (((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) && (*(int *)(REFG(int, 0x1375b90) + 0xe0) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae9970 */
byte F_00ae9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xae9970u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(float *)(gen_frame + 0x1c)) = *param_1;
  fVar1 = param_1[1];
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar2 = param_2[1];
  fVar3 = param_1[2];
  (*(float *)(gen_frame + 0x14)) = fVar3;
  fVar4 = param_2[2];
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar4 - (float10)fVar3);
  F_004bd580(&(*(float *)(gen_frame + 0x0)));
  if ((float10)param_4 < (float10)REFG(float, 0x1339b38)) {
    *param_3 = (*(float *)(gen_frame + 0x1c));
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return 0;
  }
  fVar6 = (float10)(*(float *)(gen_frame + 0x0));
  fVar7 = (float10)(float)((float10)param_4 * (float10)*(double *)&REFG(undefined, 0x1094818));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * fVar6);
  fVar8 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar8 * fVar7);
  fVar5 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * fVar5);
  *param_3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1c)) + (float10)(float)(fVar7 * fVar6))));
  param_3[1] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) + (float10)(float)(fVar8 * fVar7))));
  param_3[2] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) + (float10)(float)(fVar7 * fVar5))));
  return 1;
}

/* ref: FUN_00ae9ae0 */
float10 F_00ae9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae9ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  float fVar2;
  float local_8;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10)));
  local_8 = 0.0;
  if (((iVar1 == 0) || ((*(byte *)(iVar1 + 0x2dd2) >> 2 & 1) == 0)) || ((char)param_2 != '\0')) {
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
      if ((char)param_2 == '\0') {
        local_8 = *(float *)(param_1 + 0x34);
      }
      else {
        local_8 = *(float *)(param_1 + 0x38);
      }
      break;
    case 5: ;
    case 6: ;
      if ((char)param_2 == '\0') {
        local_8 = *(float *)(param_1 + 0x3c);
      }
      else {
        local_8 = *(float *)(param_1 + 0x40);
      }
      break;
    case 7: ;
      local_8 = *(float *)(param_1 + 0x44);
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
      local_8 = *(float *)(param_1 + 0x48);
      break;
    case 5: ;
    case 6: ;
      local_8 = *(float *)(param_1 + 0x4c);
      break;
    case 7: ;
      local_8 = *(float *)(param_1 + 0x50);
    }
  }
  fVar2 = F_00aa07e0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))));
  return (float10)(float)((float10)fVar2 * (float10)local_8);
}

/* ref: FUN_00ae9bc0 */
float10 F_00ae9bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((char)param_2 != '\0') {
    return (float10)*(float *)(in_ecx + 0x58);
  }
  return (float10)*(float *)(in_ecx + 0x54);
}

/* ref: FUN_00ae9bf0 */
float10 F_00ae9bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  if ((char)param_3 != '\0') {
    return (float10)*(float *)(in_ecx + 0x74);
  }
  if ((char)param_2 != '\0') {
    return (float10)*(float *)(in_ecx + 0x70);
  }
  return (float10)*(float *)(in_ecx + 0x6c);
}

/* ref: FUN_00ae9c70 */
byte F_00ae9c70(void)
{
  GEN_ENTER(0xae9c70u, 0u, 0u, 0u, 0u);
  byte bVar1;
  undefined * this;
  
  this = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34b70(this,0x118);
  if (bVar1 != 0) {
    return 1;
  }
  return REFG(int, 0x1375b64) == 3;
}

/* ref: FUN_00ae9ca0 */
byte F_00ae9ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(this_00,0x12e);
  if (bVar1 == 0) {
    bVar1 = F_0053bd10(&REFG(undefined, 0x1375b30));
    if (((bVar1 == 0) || (*(char *)((int)this + 0x14) == '\0')) &&
       (*(char *)((int)this + 0x174) == '\0')) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae9d10 */
byte F_00ae9d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae9d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(this_00,0x129);
  if ((bVar1 != 0) || (*(char *)((int)this + 0x176) != '\0')) {
    if ((char)param_1 == '\0') {
      return 1;
    }
    uVar2 = F_00b6afa0();
    if ((uVar2 != 0) &&
       (uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), uVar3 = F_00b6afa0(), uVar3 != uVar2
       )) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae9d70 */
byte F_00ae9d70(unsigned int gen_a0)
{
  GEN_ENTER(0xae9d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x17) != '\0') {
    uVar2 = F_00b6afa0();
    if (uVar2 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ae9da0 */
uint F_00ae9da0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  bool bVar3;
  uint uVar2;
  
  this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(this_00,0x130);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    bVar3 = *(char *)((int)this + 0x16) == '\0';
    uVar2 = CONCAT31(extraout_var,bVar3);
    *(bool *)((int)this + 0x16) = bVar3;
    if ((*(char *)((int)this + 0x17) != '\0') && (*(int *)((int)this + 0x164) != 4)) {
      *(bool *)((int)this + 0x1c) = bVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00ae9de0 */
uint F_00ae9de0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  int * piVar3;
  
  this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34b70(this_00,2);
  if ((bVar1 == 0) && (*(char *)((int)this + 0x274) != '\0')) {
    *(undefined1 *)((int)this + 0x274) = 0;
  }
  bVar1 = F_00a34970(this_00,2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (*(char *)((int)this + 0x14) == '\0')) {
    uVar2 = F_00b6afa0();
    if (uVar2 == 0) {
      piVar3 = (int *)F_00424750(REFG(void * PTR32, 0x137104c));
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3);
      if ((char)uVar2 == '\0') {
        *(undefined1 *)((int)this + 0x274) = 1;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ae9e50 */
unsigned int F_00ae9e50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae9e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar2 = false;
  if ((((((float10)REFG(float, 0x1339b38) <
          (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x34) - (float10)param_2)))
                             )))) && (bVar2 = true, *(char *)(iVar1 + 0x67) != '\0')) &&
       (*(undefined1 *)(iVar1 + 0x67) = 0, *(char *)(param_1 + 0x1a) == '\0')) &&
      ((bVar3 = GEN_ISNAN(*(float *)(iVar1 + 0x50)) || GEN_ISNAN(REFG(float, 0x10ebbf0)),
       bVar3 == (bVar3 || *(float *)(iVar1 + 0x50) == REFG(float, 0x10ebbf0)) && (2 < *(int *)(iVar1 + 0x58)))
      )) && (*(int *)(iVar1 + 0x58) < 6)) {
    *(float *)(iVar1 + 0x50) = GEN_FLT_TO(*(float *)(iVar1 + 0x50), REFG(float, 0x10ebbf0));
  }
  if ((*(char *)(param_1 + 0x15) == '\0') || (bVar2)) {
    *(undefined4 *)(iVar1 + 0x38) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))) + 0xb0)));
  }
  return 0;
}

/* ref: FUN_00ae9ee0 */
byte F_00ae9ee0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9ee0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  
  *(undefined1 *)(in_ecx + 0x2a) = 1;
  *(float *)(in_ecx + 0x144) = param_2;
  bVar1 = 0;
  if (param_3 != 0) {
    bVar1 = *(byte *)(param_3 + 4);
    *(byte *)(in_ecx + 0x14c) = bVar1;
  }
  return bVar1;
}

/* ref: FUN_00ae9f10 */
byte F_00ae9f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae9f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  int * this_00;
  uint uVar3;
  float * pfVar4;
  
  if (param_1 != -0x20000000) {
    this_00 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
    if (this_00 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0xb8))(this_00);
      if (((char)uVar3 != '\0') && (this_00 != REFG(int * PTR32, 0x1379694))) {
        pfVar4 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        fVar1 = *pfVar4;
        fVar2 = pfVar4[2];
        pfVar4 = (float *)F_00a5feb0(this_00);
        if (!(*(double *)&REFG(undefined, 0x1088070) <
             (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar4 - (float10)fVar1
                                                                  ) *
                                                  (float10)(float)((float10)*pfVar4 - (float10)fVar1
                                                                  ) +
                                                 (float10)(float)((float10)pfVar4[2] -
                                                                 (float10)fVar2) *
                                                 (float10)(float)((float10)pfVar4[2] -
                                                                 (float10)fVar2))))))))) {
          *(undefined1 *)((int)this + 0x175) = 1;
          *(int *)((int)this + 0xa0) = param_1;
          *(undefined4 *)((int)this + 0xa4) = param_2;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00ae9ff0 */
double F_00ae9ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xae9ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  float local_8;
  
  local_8 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
  if (*(char *)((int)this + 0x18) == '\0') {
    if (*(char *)((int)this + 0x17) == '\0') goto LAB_00aea060;
    uVar2 = F_00b6afa0();
    if (uVar2 == 0) goto LAB_00aea060;
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar1 == 0) goto LAB_00aea060;
    uVar2 = F_00b6afa0();
  }
  else {
    if (*(int *)((int)this + 0xa0) == -0x20000000) goto LAB_00aea060;
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),*(undefined4 *)((int)this + 0xa4))
    ;
  }
  if (uVar2 != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0xc0) + (float10)local_8)));
  }
LAB_00aea060: ;
  return (double)local_8;
}

/* ref: FUN_00aea070 */
uint F_00aea070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaea070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(float *)(gen_frame + 0x5c)) = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  fVar1 = (float)((float10)*param_3 - (float10)*param_1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = param_1[2];
  fVar2 = (float)((float10)param_3[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x18)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x28)) = fVar2;
  fVar7 = (float10)0 * (float10)0;
  (*(double *)(gen_frame + 0x48)) = (double)fVar7;
  fVar1 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 + (fVar7 + (float10)fVar1 * (float10)fVar1))));
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar7 = (float10)0;
  fVar8 = (float10)fVar1;
  bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
  bVar6 = bVar5 || fVar8 == fVar7;
  pfVar4 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)param_3) >> 0x10),
                             CONCAT11(bVar6 << 6 | bVar5 << 2 | 2U | !(fVar7 <= fVar8),(char)param_3
                                     ))));
  if (bVar5 == bVar6) {
    uVar3 = F_004bd580(&(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x34)) = 0.0;
    fVar1 = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x18)) = fVar2;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = fVar2;
    fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)(*(double *)(gen_frame + 0x48))) +
                   (float10)fVar2 * (float10)fVar2)));
    (*(float *)(gen_frame + 0x54)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x54)) = fVar1;
    fVar7 = (float10)0;
    fVar8 = (float10)fVar1;
    bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
    bVar6 = bVar5 || fVar8 == fVar7;
    pfVar4 = ((float *)GEN_TOP(CONCAT22((short)(uVar3 >> 0x10),
                               CONCAT11(bVar6 << 6 | bVar5 << 2 | 2U | !(fVar7 <= fVar8),(char)uVar3
                                       ))));
    if (bVar5 == bVar6) {
      F_004bd580(&(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x14)) = 0.0;
      fVar1 = (float)((float10)*param_4 - (float10)(*(float *)(gen_frame + 0x5c)));
      (*(float *)(gen_frame + 0x0)) = fVar1;
      fVar2 = (float)((float10)param_4[2] - (float10)(*(float *)(gen_frame + 0x58)));
      (*(float *)(gen_frame + 0x8)) = fVar2;
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)(*(double *)(gen_frame + 0x48))) +
                     (float10)fVar2 * (float10)fVar2)));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      fVar7 = (float10)0;
      fVar8 = (float10)fVar1;
      bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
      bVar6 = bVar5 || fVar8 == fVar7;
      pfVar4 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)param_4) >> 0x10),
                                 CONCAT11(bVar6 << 6 | bVar5 << 2 | 2U | !(fVar7 <= fVar8),
                                          (char)param_4))));
      if (bVar5 == bVar6) {
        pfVar4 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)));
        fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x30)) +
                        (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x34))) +
                       (float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x38)))));
        (*(float *)(gen_frame + 0x54)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x18)) +
                       ((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x20)) +
                       (float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x54)) = fVar2;
        if ((float10)fVar2 <= (float10)fVar1) {
          F_0046f4a0(&(*(float *)(gen_frame + 0x10)),param_4,param_1);
          (*(float *)(gen_frame + 0x0)) = 0.0;
          (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(float *)(gen_frame + 0x8)) = 0.0;
          F_00ae74d0(REFG(float, 0x1339b64),&(*(float *)(gen_frame + 0x10)),param_5,&(*(float *)(gen_frame + 0x0)));
          pfVar4 = (float *)F_004bd670(&(*(float *)(gen_frame + 0x0)),param_1,&(*(float *)(gen_frame + 0x10)));
          *param_2 = *pfVar4;
          param_2[1] = pfVar4[1];
          param_2[2] = pfVar4[2];
        }
      }
    }
  }
  return (uint)pfVar4;
}

/* ref: FUN_00aea290 */
byte F_00aea290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaea290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  F_00afef80(param_2,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x44)),((float *)(gen_frame + 0x48)));
  fVar1 = param_1[1];
  (*(float *)(gen_frame + 0x54)) = fVar1;
  (*(float *)(gen_frame + 0x50)) = *param_1;
  (*(float *)(gen_frame + 0x58)) = param_1[2];
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0))) +
                     (float10)REFG(float, 0x1339ba4)) + (float10)fVar1)));
  fVar3 = (float10)REFG(double, 0x1094890);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)param_2 + 0xc);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar3);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)param_2 + 0x10);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)param_2 + 0x14);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar3);
  (*(float *)(gen_frame + 0x38)) = (float)(fVar3 * (float10)((float *)(gen_frame + 0x48))[0]);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar3);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar3);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar3 * (float10)((float *)(gen_frame + 0x48))[0]);
  bVar2 = F_00ae8170(&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),0);
  if (bVar2 != 0) {
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x58)));
    fVar3 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x54)));
    fVar4 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x50)));
    fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x58)));
    fVar1 = ((float)GEN_TOF((fVar5 * fVar5 + (fVar4 * fVar4 + fVar3 * fVar3))));
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    if ((float10)fVar1 < (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aea410 */
float F_00aea410(void)
{
  GEN_ENTER(0xaea410u, 0u, 0u, 0u, 0u);
  return (float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890));
}

/* ref: FUN_00aea430 */
float F_00aea430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaea430u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)REFG(float, 0x1339ba0),4)));
  return ((float)GEN_TOF(((float10)(float)fVar2 *
                (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)param_2[2] -
                                                                      (float10)param_1[2]) *
                                                      (float10)(float)((float10)param_2[2] -
                                                                      (float10)param_1[2]) +
                                                     (float10)(float)((float10)*param_2 -
                                                                     (float10)*param_1) *
                                                     (float10)(float)((float10)*param_2 -
                                                                     (float10)*param_1))))))))));
}

/* ref: FUN_00aea4b0 */
byte F_00aea4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaea4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((((*(int *)(iVar1 + 0x204) == 0) || (*(int *)(iVar1 + 0x204) == 5)) &&
      (*(char *)((int)this + 0x1a) == '\0')) &&
     (((*(char *)((int)this + 0x29) == '\0' && (*(char *)(iVar1 + 0x1cc) == '\0')) &&
      (*(char *)(iVar1 + 0x1cd) == '\0')))) {
    if ((char)param_1 == '\0') {
LAB_00aea50c: ;
      return *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) == '\0';
    }
    if (*(char *)((int)this + 0x273) == '\0') {
      bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
      if (bVar2 != 0) goto LAB_00aea50c;
    }
  }
  return 0;
}

/* ref: FUN_00aea520 */
byte F_00aea520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaea520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)(iVar1 + 0x204);
  if ((((iVar2 == 0) || (iVar2 == 5)) || (iVar2 == 1)) &&
     (((*(char *)((int)this + 0x1a) == '\0' && (*(char *)((int)this + 0x29) == '\0')) &&
      ((*(char *)(iVar1 + 0x1cc) == '\0' && (*(char *)(iVar1 + 0x1cd) == '\0')))))) {
    if ((char)param_1 == '\0') {
LAB_00aea581: ;
      return *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) == '\0';
    }
    if (*(char *)((int)this + 0x273) == '\0') {
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
      if (bVar3 != 0) goto LAB_00aea581;
    }
  }
  return 0;
}

/* ref: FUN_00aea5a0 */
byte F_00aea5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaea5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  char * pcVar4;
  
  if ((((*(char *)((int)this + 0x1a) == '\0') && (*(char *)((int)this + 0x29) == '\0')) &&
      (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cc))) == '\0')) &&
     (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cd))) == '\0')) {
    if ((char)param_1 == '\0') {
LAB_00aea5ec: ;
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
      if (uVar3 != 0) {
        pcVar4 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1)));
        if (*pcVar4 != '\0') {
          piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
          if (uVar3 != 0) {
            piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
            if (*(char *)(uVar3 + 1) == '\x04') {
              return 0;
            }
          }
        }
      }
      return *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) == '\0';
    }
    if (*(char *)((int)this + 0x273) == '\0') {
      bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
      if (bVar2 != 0) goto LAB_00aea5ec;
    }
  }
  return 0;
}

/* ref: FUN_00aea660 */
byte F_00aea660(unsigned int gen_a0)
{
  GEN_ENTER(0xaea660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((((*(char *)((int)this + 0x1a) == '\0') && (*(char *)((int)this + 0x29) == '\0')) &&
      (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cc))) == '\0')) &&
     (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cd))) == '\0')) {
    if ((*(char *)((int)this + 0x273) == '\0') &&
       (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar1 != 0)) {
      return 1;
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0x188))) == '\x03') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aea6c0 */
uint F_00aea6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaea6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  double dVar2;
  undefined * this_00;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(int *)((int)this + 0x234) != -1) {
    uVar3 = *(uint *)((int)this + 0xa0);
    if (uVar3 != 0xe0000000) {
      this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar3,*(undefined4 *)((int)this + 0xa4));
      uVar3 = 0;
      if (this_00 != (undefined *)0x0) {
        iVar5 = *(int *)((int)this + 0x234) + 0x19;
        pfVar4 = (float *)F_00a5feb0(this_00);
        fVar6 = (float10)((float)GEN_TOF(((float10)pfVar4[2] -
                                (float10)*(float *)((int)this + iVar5 * 0x10 + 8))));
        fVar7 = (float10)((float)GEN_TOF(((float10)*pfVar4 - (float10)*(float *)((int)this + iVar5 * 0x10))));
        dVar2 = (double)((float)GEN_TOF(SQRT((float10)(float)(fVar7 * fVar7 + fVar6 * fVar6))));
        if (dVar2 < *(double *)&REFG(undefined, 0x1094810)) {
          if (param_2 == 0) {
            return (uint)pfVar4;
          }
          if (dVar2 <= (double)REFG(float, 0x1339b38)) {
            return (uint)pfVar4;
          }
        }
        goto LAB_00aea78b;
      }
    }
    if ((*(char *)((int)this + 0x260) == '\0') && (param_2 != 3)) {
      return uVar3;
    }
  }
LAB_00aea78b: ;
  iVar5 = *(int *)((int)this + 0x234) + 1;
  if (9 < iVar5) {
    iVar5 = 0;
  }
  if ((iVar5 != *(int *)((int)this + 0x230)) && (iVar5 != *(int *)((int)this + 0x23c))) {
    iVar1 = iVar5 + 0x19;
    *(undefined4 *)((int)this + iVar1 * 0x10) = *param_1;
    *(undefined4 *)((int)this + iVar1 * 0x10 + 4) = param_1[1];
    *(undefined4 *)((int)this + iVar1 * 0x10 + 8) = param_1[2];
    *(int *)((int)this + 0x234) = iVar5;
    if (*(int *)((int)this + 0x230) == -1) {
      *(undefined4 *)((int)this + 0x230) = 0;
    }
  }
  *(uint *)((int)this + 0x244) = param_2;
  return param_2;
}

/* ref: FUN_00aea800 */
unsigned int F_00aea800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaea800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (((param_1 != 0) && (*(char *)((int)this + 0x18) != '\0')) && (param_2 == 3)) {
    if (*(int *)((int)this + 0xa0) == -0x20000000) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                           *(undefined4 *)((int)this + 0xa4));
    }
    if (uVar1 == param_1) {
      *(undefined1 *)((int)this + 0x260) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00aea850 */
uint F_00aea850(unsigned int gen_a0)
{
  GEN_ENTER(0xaea850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x65) != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 0x48))))
                (*(int * PTR32 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x34));
    }
    uVar3 = *(uint *)((int)this + 4);
    *(undefined4 *)(uVar3 + 0x34) = 0;
    *(undefined4 *)(uVar3 + 0x38) = 0;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
    *(undefined1 *)(uVar3 + 0x3c) = 0;
    *(undefined4 *)(uVar3 + 0x48) = uVar2;
    *(undefined4 *)(uVar3 + 0x50) = uVar2;
    *(undefined4 *)(uVar3 + 0x58) = 0;
    *(undefined1 *)(uVar3 + 0x5d) = 0;
    *(undefined1 *)(uVar3 + 0x65) = 0;
    *(undefined1 *)(uVar3 + 0x67) = 0;
    *(undefined4 *)(uVar3 + 0x70) = 0;
    if ((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 9) == '\0')) {
      uVar3 = F_00afbac0(*(undefined * PTR32 *)((int)this + 4));
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00aea8c0 */
uint F_00aea8c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaea8c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    uVar1 = (*(uint *)(gen_frame + 0x8)) >> 8;
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
    if (*(char *)(param_1 + 8) == '\0') {
      (*(uint *)(gen_frame + 0x8)) = CONCAT31((int3)uVar1,1);
    }
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*(char *)(param_1 + 8));
    uVar1 = F_00ae9300(*(undefined4 *)(param_1 + 4),param_3,(*(uint *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)));
    *(uint *)(param_2 + 0x50) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(param_2 + 0x50) = 0;
  return 0;
}

/* ref: FUN_00aea910 */
uint F_00aea910(unsigned int gen_a0)
{
  GEN_ENTER(0xaea910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  double dVar3;
  float * pfVar4;
  
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    pfVar4 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    fVar1 = *pfVar4;
    fVar2 = pfVar4[2];
    pfVar4 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))));
    dVar3 = (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)*pfVar4)
                                                 * (float10)(float)((float10)fVar1 -
                                                                   (float10)*pfVar4) +
                                                (float10)(float)((float10)fVar2 - (float10)pfVar4[2]
                                                                ) *
                                                (float10)(float)((float10)fVar2 - (float10)pfVar4[2]
                                                                )))))));
    if ((double)*(float *)&REFG(undefined, 0x10ebc54) <= dVar3) {
      return 9;
    }
    if ((!GEN_ISNAN(dVar3) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10943d8))) && !(dVar3 < *(double *)&REFG(undefined, 0x10943d8))) {
      return 6;
    }
  }
  return 3;
}

/* ref: FUN_00aea9e0 */
uint F_00aea9e0(void)
{
  GEN_ENTER(0xaea9e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (*(int *)(uVar1 + 0x14) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aeaa10 */
uint F_00aeaa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeaa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    this_00 = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    bVar1 = F_00414a40(this_00,param_1,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00aeaa40 */
unsigned int F_00aeaa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeaa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(char *)(param_1 + 0x82) != '\0') {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x84);
    return 0;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x84);
  return 0;
}

/* ref: FUN_00aeaa80 */
uint F_00aeaa80(unsigned int gen_a0)
{
  GEN_ENTER(0xaeaa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined1, 0x14c0ba6) = 0;
      F_00a4a760(&REFG(undefined, 0x14a7360),0x20,0);
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x2d,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00aeaac0 */
unsigned int F_00aeaac0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeaac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(float *)((int)this + 0x1c) = *(float *)((int)this + 0x18);
  if (*(int *)((int)this + 0x14) != 0) {
    *(float *)((int)this + 0x18) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x18)
                 ) + (float10)0)));
    *(float *)((int)this + 0x20) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x20)
                 ) + (float10)0)));
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) != '\0') {
      *(float *)((int)this + 0x54) =
           ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                  (float10)*(float *)((int)this + 0x54))));
    }
  }
  return 0;
}

/* ref: FUN_00aeab30 */
uint F_00aeab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaeab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  undefined3 extraout_var = 0;
  int iVar9;
  uint uVar8;
  
  bVar7 = F_00ae7830(param_1,param_4);
  uVar8 = CONCAT31(extraout_var,bVar7);
  if (bVar7 == 0) {
    F_00afef80(param_4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    iVar9 = *(int *)(param_1 + 0x10) + 5;
    *(undefined4 *)(param_1 + iVar9 * 0x10) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)(param_1 + 4 + iVar9 * 0x10) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)(param_1 + 8 + iVar9 * 0x10) = ((undefined4 *)(gen_frame + 0x8))[0];
    fVar3 = param_3[1];
    fVar4 = param_2[1];
    fVar5 = param_3[2];
    fVar6 = param_2[2];
    iVar9 = *(int *)(param_1 + 0x10) + 8;
    *(float *)(param_1 + iVar9 * 0x10) = (float)((float10)*param_3 - (float10)*param_2);
    *(float *)(param_1 + 4 + iVar9 * 0x10) = (float)((float10)fVar3 - (float10)fVar4);
    *(float *)(param_1 + 8 + iVar9 * 0x10) = (float)((float10)fVar5 - (float10)fVar6);
    uVar1 = *(undefined4 *)((int)param_4 + 0x10);
    uVar2 = *(undefined4 *)((int)param_4 + 0x14);
    iVar9 = *(int *)(param_1 + 0x10) + 0xb;
    *(undefined4 *)(param_1 + iVar9 * 0x10) = *(undefined4 *)((int)param_4 + 0xc);
    *(undefined4 *)(param_1 + 4 + iVar9 * 0x10) = uVar1;
    *(undefined4 *)(param_1 + 8 + iVar9 * 0x10) = uVar2;
    uVar1 = *(undefined4 *)((int)param_4 + 0x1c);
    uVar2 = *(undefined4 *)((int)param_4 + 0x20);
    iVar9 = *(int *)(param_1 + 0x10) + 0xe;
    *(undefined4 *)(param_1 + iVar9 * 0x10) = *(undefined4 *)((int)param_4 + 0x18);
    *(undefined4 *)(param_1 + 4 + iVar9 * 0x10) = uVar1;
    *(undefined4 *)(param_1 + 8 + iVar9 * 0x10) = uVar2;
    uVar1 = *(undefined4 *)((int)param_4 + 0x28);
    uVar2 = *(undefined4 *)((int)param_4 + 0x2c);
    iVar9 = *(int *)(param_1 + 0x10) + 0x11;
    uVar8 = iVar9 * 2;
    *(undefined4 *)(param_1 + iVar9 * 0x10) = *(undefined4 *)((int)param_4 + 0x24);
    *(undefined4 *)(param_1 + 4 + iVar9 * 0x10) = uVar1;
    *(undefined4 *)(param_1 + 8 + iVar9 * 0x10) = uVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return uVar8;
}

/* ref: FUN_00aeac60 */
unsigned int F_00aeac60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaeac60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * pfVar1;
  
  if (((*(float *)(param_3 + 4) < 0.0) &&
      (!GEN_ISNAN(*(float *)(param_2 + 4)) && !(*(float *)(param_2 + 4) <= 0.0))) ||
     ((0.0 < *(float *)(param_3 + 4) &&
      (pfVar1 = (float *)(param_2 + 4), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))))) {
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((float10)((float)GEN_TOF(ABS((float10)*(float *)(param_2 + 4)))) <
      (float10)((float)GEN_TOF(ABS((float10)*(float *)(param_3 + 4))))) {
    *(float *)(param_3 + 4) = *(float *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00aead10 */
uint F_00aead10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaead10u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int in_ecx_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if ((*(int *)(in_ecx + 0x10) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10))), in_ecx_00 != 0)) {
    bVar1 = F_00a9f620(in_ecx_00);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = in_ecx + 0xd0;
  *(undefined4 *)(in_ecx + 0x98) = *(undefined4 *)(param_2 + 4);
  if (*(char *)(in_ecx + 0xa6) == '\0') {
    uVar2 = in_ecx + 0x80;
  }
  *(undefined4 *)(uVar2 + 0x18) = *(undefined4 *)(param_2 + 4);
  return uVar2;
}

/* ref: FUN_00aead60 */
byte F_00aead60(unsigned int gen_a0)
{
  GEN_ENTER(0xaead60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((*(char *)(in_ecx + 0xa6) == '\0') ||
     (iVar1 = in_ecx + 0xd0, *(char *)(in_ecx + 0xcc) == '\0')) {
    iVar1 = in_ecx + 0x80;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aeae60 */
uint F_00aeae60(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xaeae60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))));
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(uVar1 + 4);
  *(float *)(param_1 + 0x4c) = param_2;
  *(float *)(param_1 + 0x50) = param_3;
  return uVar1;
}

/* ref: FUN_00aeae90 */
byte F_00aeae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaeae90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  if (((char)param_2 != '\0') && (*(char *)(in_ecx + 0xa4) == '\0')) {
    if ((char)param_3 != '\0') {
      return 1;
    }
    if ((*(int *)(in_ecx + 0x14) == 0) && (bVar1 = F_00aead60(in_ecx), bVar1 == 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aeaed0 */
byte F_00aeaed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaeaed0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  if (*(char *)(in_ecx + 0xa5) == '\0') {
    if ((char)param_3 == '\0') {
      if ((*(char *)(in_ecx + 0xa6) == '\0') ||
         (iVar1 = in_ecx + 0xd0, *(char *)(in_ecx + 0xcc) == '\0')) {
        iVar1 = in_ecx + 0x80;
      }
      if ((((*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) && (*(int *)(in_ecx + 0x14) == 0))
          && (*(char *)(in_ecx + 0x94) == '\0')) ||
         (((*(int *)(in_ecx + 0x14) != 0 && (*(char *)(in_ecx + 0x59) == '\0')) &&
          (*(int *)(in_ecx + 0x14) == 3)))) {
        return 1;
      }
    }
    else if ((*(char *)(in_ecx + 0xa4) != '\0') && (*(char *)(in_ecx + 0x94) == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aeaf60 */
byte F_00aeaf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeaf60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (((char)param_2 == '\0') &&
     (((*(char *)(in_ecx + 0xa4) != '\0' || (*(char *)(in_ecx + 0xa5) != '\0')) &&
      (*(char *)(in_ecx + 0xa6) == '\0')))) {
    if ((*(int *)(in_ecx + 0x14) == 0) && (bVar1 = F_00aead60(in_ecx), bVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00aeafa0 */
uint F_00aeafa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaeafa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float * pfVar8;
  uint uVar9;
  float10 fVar10;
  
  fVar10 = ((float10)GEN_TOD(pow((float10)REFG(float, 0x1339b98),(float10)*(double *)&REFG(undefined, 0x1092098))));
  fVar1 = ((float)GEN_TOF((((float10)(float)fVar10 * (float10)REFG(double, 0x1094890)) /
                 ((float10)REFG(float, 0x1339b94) + (float10)REFG(float, 0x1339b94)))));
  pfVar8 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  iVar6 = *(int *)((int)this + 0x14);
  fVar2 = pfVar8[1];
  fVar3 = pfVar8[2];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar10 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)*param_2 + (float10)*pfVar8) * fVar10)));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar2) * fVar10)));
  param_1[2] = ((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar5 + (float10)fVar3))));
  if (iVar6 != 0) {
    param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) + (float10)fVar1)));
    return (uint)param_1;
  }
  uVar9 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(uVar9 + 4) + (float10)fVar1)));
  return (uint)param_1;
}

/* ref: FUN_00aeb090 */
uint F_00aeb090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeb090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 0x18) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x20), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x24) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x24), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x28) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x28), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x34) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x34), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x38) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x38), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x48) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x44) = 0;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00aeb110 */
uint F_00aeb110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xaeb110u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int in_ecx;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  uVar2 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(float *)(param_1 + 0x44) = param_4;
  if ((uVar2 != 0) && (in_ecx = *(int *)(uVar2 + 0x10), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar2 = F_00a9f870(in_ecx,*(float *)(param_1 + 0x44));
    }
  }
  return uVar2;
}

/* ref: FUN_00aeb160 */
float F_00aeb160(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float local_8;
  
  local_8 = 0.0;
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xc0) + (float10)*(double *)&REFG(undefined, 0x108bec8))));
  }
  if (*(int *)((int)this + 0x18) != -0x20000000) {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c))
    ;
    if (uVar2 != 0) {
      local_8 = ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0xc0) + (float10)local_8)));
    }
  }
  return local_8;
}

/* ref: FUN_00aeb1c0 */
uint F_00aeb1c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaeb1c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))), iVar4 != 0)) {
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2e)) = 0;
    (*(undefined2 *)(gen_frame + 0x32)) = 0;
    (*(undefined1 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined1 *)(gen_frame + 0x2c)) = (undefined1)param_4;
    (*(undefined1 *)(gen_frame + 0x2d)) = (undefined1)param_4;
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
    fVar1 = param_2[2];
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
    fVar2 = param_2[1];
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
    fVar3 = *param_2;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    uVar5 = F_00a9f7c0(iVar4,fVar3,fVar2,fVar1,param_3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar5;
}

/* ref: FUN_00aeb260 */
float10 F_00aeb260(float gen_a0)
{
  GEN_ENTER(0xaeb260u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  int local_c;
  
  iVar1 = F_00c51673((double)param_1);
  if (iVar1 == 0) {
    uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_1),
                         (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    if (uVar2 != 0) {
      fVar3 = (float10)param_1;
      if (fVar3 <= (float10)*(double *)&REFG(undefined, 0x109c9b8)) {
        local_c = (int)(longlong)
                       TRUNC(((float10)*(double *)&REFG(undefined, 0x1080228) - fVar3) /
                             (float10)*(float *)&REFG(undefined, 0x1339aec));
        fVar4 = (float10)local_c;
        if (local_c < 0) {
          fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        return (float10)(float)(fVar4 * (float10)*(float *)&REFG(undefined, 0x1339aec) + fVar3);
      }
      if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar3) {
        local_c = (int)(longlong)
                       TRUNC((fVar3 + (float10)*(double *)&REFG(undefined, 0x1080228)) /
                             (float10)*(float *)&REFG(undefined, 0x1339aec));
        fVar4 = (float10)local_c;
        if (local_c < 0) {
          fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        return (float10)(float)(fVar3 - fVar4 * (float10)*(float *)&REFG(undefined, 0x1339aec));
      }
      return fVar3;
    }
  }
  return (float10)0;
}

/* ref: FUN_00aeb350 */
float10 F_00aeb350(float gen_a0)
{
  GEN_ENTER(0xaeb350u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  float fVar3;
  
  fVar3 = REFG(float, 0x1087f04);
  if (((!GEN_ISNAN(param_1) && !GEN_ISNAN(REFG(float, 0x1087f04))) && !(param_1 <= REFG(float, 0x1087f04))) ||
     (fVar3 = REFG(float, 0x10ebbf0), param_1 < REFG(float, 0x10ebbf0))) {
    param_1 = fVar3;
  }
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,7)));
  fVar2 = F_00aeb260((float)fVar2);
  return fVar2;
}

/* ref: FUN_00aeb3a0 */
float10 F_00aeb3a0(float gen_a0)
{
  GEN_ENTER(0xaeb3a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,5)));
  fVar2 = F_00aeb260((float)fVar2);
  return fVar2;
}

/* ref: FUN_00aeb3c0 */
float10 F_00aeb3c0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xaeb3c0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(atan2((float10)param_1,(float10)param_2)));
  fVar1 = F_00aeb260((float)fVar1);
  return fVar1;
}

/* ref: FUN_00aeb3f0 */
float10 F_00aeb3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)param_1 * (float10)*(float *) param_1 + (float10)*(float *)(param_1 + 8) * (float10)*(float *)(param_1 + 8))))))) / (float10)*(float *)(param_1 + 4)))),5)));
  fVar2 = F_00aeb260((float)fVar2);
  return fVar2;
}

/* ref: FUN_00aeb440 */
uint F_00aeb440(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xaeb440u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_6 == *(float *)&REFG(undefined, 0x1088114))) {
    bVar1 = F_005519a0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_6,param_1,param_2,
                         (undefined4)gen_fl2bits(param_3),1,param_5);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_1,param_2,
                       (undefined4)gen_fl2bits(param_3),1,param_5);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00aeb4b0 */
byte F_00aeb4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xaeb4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  byte bVar1;
  
  if ((GEN_ISNAN((*(float *)&gen_args[8])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN((*(float *)&gen_args[8])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)&gen_args[8]) == *(float *)&REFG(undefined, 0x1088114))) {
    bVar1 = F_005517f0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),(*(uint *)&gen_args[6]),(*(float *)&gen_args[8]),&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[4]),
                         (undefined4)gen_fl2bits((*(float *)&gen_args[5])),1,(*(undefined4 *)&gen_args[7]));
    return bVar1;
  }
  bVar1 = F_00551620(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),(*(uint *)&gen_args[6]),&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[4]),(*(float *)&gen_args[5]),1,
                       (*(undefined4 *)&gen_args[7]));
  return bVar1;
}

/* ref: FUN_00aeb520 */
byte F_00aeb520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xaeb520u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_3 == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  do {
    if ((*(uint *)(gen_frame + 0x24)) == 0) {
      (*(undefined4 *)(gen_frame + 0x14)) = 0x2000;
      (*(undefined4 *)(gen_frame + 0x18)) = 0x2000;
      puVar3 = &(*(undefined4 *)(gen_frame + 0x14));
    }
    else {
      (*(undefined4 *)(gen_frame + 0xc)) = 0x2800;
      (*(undefined4 *)(gen_frame + 0x10)) = 0x2000;
      puVar3 = &(*(undefined4 *)(gen_frame + 0xc));
    }
    if ((GEN_ISNAN(param_5) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(param_5) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_5 == *(float *)&REFG(undefined, 0x1088114))) {
      bVar1 = F_005519a0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_5,param_1,param_2,
                           (undefined4)gen_fl2bits(param_3),1,puVar3);
    }
    else {
      bVar1 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),param_4,param_1,param_2,
                           (undefined4)gen_fl2bits(param_3),1,puVar3);
    }
    if ((*(uint *)(gen_frame + 0x24)) == 0) {
      if (bVar1 == 0) {
        return 0;
      }
      if ((*(uint *)(param_4 + 0x3c) >> 0xb & 1) == 0) break;
      bVar1 = 0;
      (*(char *)(gen_frame + 0x2b)) = '\x01';
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_4 + 4);
      (*(uint *)(gen_frame + 0x1c)) = *(uint *)(param_4 + 0x3c);
    }
    else if ((*(char *)(gen_frame + 0x2b)) != '\0') {
      *(char *)(param_4 + 0x82) = (*(char *)(gen_frame + 0x2b));
      *(undefined4 *)(param_4 + 0x84) = (*(undefined4 *)(gen_frame + 0x20));
      *(uint *)(param_4 + 0x88) = (*(uint *)(gen_frame + 0x1c));
    }
    uVar2 = (*(uint *)(gen_frame + 0x24)) + 1;
    (*(uint *)(gen_frame + 0x24)) = uVar2;
  } while (uVar2 < 2);
  if (bVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(param_4 + 0x62) = 0;
  return 1;
}

/* ref: FUN_00aeb700 */
uint F_00aeb700(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0x69) != '\0') && (*(char *)((int)this + 0x6a) == '\0')) {
    uVar2 = 0;
    do {
      in_EAX = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar2,0);
      if ((in_EAX == 0x41) || (in_EAX == 0x47)) goto LAB_00aeb756;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xe);
    this_00 = *(undefined * PTR32 *)((int)this + 0x10);
    if ((this_00 == (undefined *)0x0) || (uVar1 = 0x47, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)
       ) {
      uVar1 = 0x41;
    }
    in_EAX = F_00aa4270(this_00,uVar1,0,0);
  }
LAB_00aeb756: ;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x3d) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x66) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  return in_EAX;
}

/* ref: FUN_00aeb940 */
unsigned int F_00aeb940(unsigned int gen_a0)
{
  GEN_ENTER(0xaeb940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  bool bVar4;
  
  if ((*(char *)((int)this + 0x69) != '\0') && (*(char *)((int)this + 0x6a) == '\0')) {
    uVar3 = 0;
    do {
      uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar3,0);
      if ((uVar1 == 0x41) || (uVar1 == 0x47)) goto LAB_00aeb9f5;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xe);
    bVar4 = GEN_ISNAN(*(float *)((int)this + 0x4c)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
    if ((((bVar4 == (bVar4 || *(float *)((int)this + 0x4c) == REFG(float, 0x10ebbf0))) &&
         (2 < *(int *)((int)this + 0x54))) && (*(int *)((int)this + 0x54) < 6)) &&
       ((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x4c) -
                        (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x110) *
                                        (float10)*(float *)((int)this + 0x4c))))))) <=
        (float10)REFG(float, 0x10ebc40))) {
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((this_00 == (undefined *)0x0) ||
         (uVar2 = 0x47, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)) {
        F_00aa4270(this_00,0x41,0,0);
        return 0;
      }
    }
    else {
LAB_00aeb9f5: ;
      uVar3 = 0;
      do {
        uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),uVar3,0);
        switch((unsigned int)(uintptr_t)(uVar1)) {
        case 0x40: ;
        case 0x41: ;
        case 0x46: ;
        case 0x47: ;
          goto switchD_00aeba11_caseD_40;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0xe);
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((this_00 == (undefined *)0x0) ||
         (uVar2 = 0x46, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)) {
        uVar2 = 0x40;
      }
    }
    F_00aa4270(this_00,uVar2,0,0);
switchD_00aeba11_caseD_40: ;
  }
  return 0;
}

/* ref: FUN_00aeba60 */
unsigned int F_00aeba60(unsigned int gen_a0)
{
  GEN_ENTER(0xaeba60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  byte bVar2;
  bool bVar3;
  float fVar4;
  
  if (((((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar2 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar2 != 0)) && (REFG(char, 0x14c0a64) != '\0')) ||
      (*(char *)(in_ecx + 0x1cc) != '\0')) &&
     (((bVar3 = GEN_ISNAN(*(float *)(in_ecx + 0x4c)) || GEN_ISNAN(REFG(float, 0x10ebbf0)),
       bVar3 == (bVar3 || *(float *)(in_ecx + 0x4c) == REFG(float, 0x10ebbf0)) &&
       (2 < *(int *)(in_ecx + 0x54))) && (*(int *)(in_ecx + 0x54) < 6)))) {
    *(float *)(in_ecx + 0x114) = *(float *)(in_ecx + 0x110);
    fVar1 = *(float *)(in_ecx + 0x4c);
    fVar4 = REFG(float, 0x1087f04);
    if (((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) &&
       (fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) / (float10)fVar1
                                        ))) + (float10)*(float *)(in_ecx + 0x110)))),
       !((float10)1 < (float10)fVar1))) {
      fVar4 = fVar1;
    }
    *(float *)(in_ecx + 0x110) = fVar4;
  }
  if ((((((*(int *)(in_ecx + 0x10) != 0) &&
         (bVar2 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar2 != 0)) && (REFG(char, 0x14c0a65) != '\0')) ||
       (*(char *)(in_ecx + 0x1cd) != '\0')) &&
      ((fVar1 = *(float *)(in_ecx + 0x50),
       (GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
       ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0)) && (2 < *(int *)(in_ecx + 0x58))
       ))) && (*(int *)(in_ecx + 0x58) < 6)) {
    if (((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) &&
       (fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) / (float10)fVar1
                                        ))) + (float10)*(float *)(in_ecx + 0x1b0)))),
       !((float10)1 < (float10)fVar1))) {
      *(float *)(in_ecx + 0x1b0) = fVar1;
      return 0;
    }
    *(float *)(in_ecx + 0x1b0) = GEN_FLT_TO(*(float *)(in_ecx + 0x1b0), REFG(float, 0x1087f04));
  }
  return 0;
}

/* ref: FUN_00aebbc0 */
float10 F_00aebbc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaebbc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float uStack_8;
  
  fVar7 = REFG(float, 0x10ebd20);
  uStack_8 = 0.0;
  if (*(char *)(param_3 + 0x3c) != '\0') {
    return (float10)param_2;
  }
  fVar1 = *(float *)(param_3 + 0x20);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
    fVar7 = *(float *)(param_3 + 0x2c);
    if ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
        ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar7 == REFG(float, 0x10ebbf0))) {
      iVar2 = *(int *)(param_3 + 0x34);
      if (iVar2 == 1) {
        fVar5 = F_00ae8460(param_2,*(float *)(param_1 + 0x1d0),*(float *)(param_1 + 0x80),fVar7);
        return (float10)(float)fVar5;
      }
      if (((((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
             ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar7 == REFG(float, 0x10ebbf0))) && (2 < iVar2)) &&
          (iVar2 < 6)) && (0.0 <= *(float *)(param_1 + 0x110))) {
        fVar5 = F_0054fbe0(param_1 + 0x84,*(float *)(param_1 + 0x110),1);
        fVar6 = F_0054fbe0(param_1 + 0x84,*(float *)(param_1 + 0x114),1);
        return (float10)((float)GEN_TOF(ABS((float10)(float)((float10)(double)fVar5 - fVar6))));
      }
    }
    else if (*(int *)(param_1 + 0x10) != 0) {
      bVar3 = F_00a9f620(*(int *)(param_1 + 0x10));
      if ((bVar3 != 0) && (REFG(char, 0x14c0a64) != '\0')) {
        fVar7 = F_00ae8430();
        uStack_8 = (float)((float10)fVar7 * (float10)*(float *)&REFG(undefined, 0x14c0a7c));
      }
    }
    return (float10)uStack_8;
  }
  bVar4 = GEN_ISNAN(*(float *)(param_3 + 0x24)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
  if (bVar4 != (bVar4 || *(float *)(param_3 + 0x24) == REFG(float, 0x10ebbf0))) {
    if (REFG(float, 0x10ebd20) < *(float *)(REFG(int, 0x137104c) + 0x1198)) {
      return (float10)(float)((float10)REFG(float, 0x10ebd20) * (float10)fVar1);
    }
    return (float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1)));
  }
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  if (REFG(float, 0x10ebd20) < fVar1) {
    fVar5 = F_00ae6fc0(param_1);
    return (float10)(float)(fVar5 * (float10)fVar7);
  }
  fVar5 = F_00ae6fc0(param_1);
  return (float10)(float)(fVar5 * (float10)fVar1);
}

/* ref: FUN_00aebdd0 */
byte F_00aebdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xaebdd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((((bVar1 != 0) && (REFG(char, 0x14c0a40) != '\0')) && (*(char *)(in_ecx + 0x420) != '\0')) &&
       (((*((byte *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x8e))) & 0x40) == 0 ||
        ((*(int *)(in_ecx + 0x204) != 0 && (*(char *)(in_ecx + 0x24a) == '\0')))))) {
      return REFG(char, 0x14a7383) == '\0';
    }
  }
  return 0;
}

/* ref: FUN_00aebe30 */
uint F_00aebe30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaebe30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (((((bVar1 != 0) && (REFG(char, 0x14c0a40) != '\0')) && (*(char *)((int)this + 0x420) != '\0')) &&
        ((in_EAX = *(uint *)((int)this + 0x10), (*(byte *)(in_EAX + 0x8e) & 0x40) == 0 ||
         ((*(int *)((int)this + 0x204) != 0 && (*(char *)((int)this + 0x24a) == '\0')))))) &&
       (REFG(char, 0x14a7383) == '\0')) {
      bVar1 = F_00ae8330(param_1,param_2);
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00aebea0 */
unsigned int F_00aebea0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaebea0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0a7a) = 1;
      *(float *)&REFG(undefined, 0x14c0b94) = param_2;
      if (param_3 != 0) {
        REFG(undefined4, 0x14c0b9c) = *(undefined1 *)(param_3 + 4);
      }
    }
  }
  return 0;
}

/* ref: FUN_00aebee0 */
uint F_00aebee0(unsigned int gen_a0)
{
  GEN_ENTER(0xaebee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a64) != '\0')) {
    return 1;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    if (((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a65) != '\0')) {
      return 1;
    }
    if (*(char *)(in_ecx + 0x1cd) == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00aebf40 */
byte F_00aebf40(unsigned int gen_a0)
{
  GEN_ENTER(0xaebf40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((((*(int *)(in_ecx + 0x10) == 0) ||
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
      (*(char *)(in_ecx + 0x1cc) == '\0')) &&
     ((((*(int *)(in_ecx + 0x10) != 0 && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
        ) && (REFG(char, 0x14c0a65) != '\0')) || (*(char *)(in_ecx + 0x1cd) != '\0')))) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x70))) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 4: ;
    case 9: ;
    case 10: ;
    case 0xb: ;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aebfc0 */
byte F_00aebfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaebfc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aebf40(in_ecx);
  if ((bVar1 != 0) && (*(char *)(in_ecx + 0x5d) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aec010 */
byte F_00aec010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00ae9f10(&REFG(undefined, 0x14c0a50),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00aec030 */
uint F_00aec030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec030u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (((param_1 != 0) && (REFG(char, 0x14c0a68) != '\0')) && (param_2 == 3)) {
    if (REFG(int, 0x14c0af0) == -0x20000000) {
      in_EAX = 0;
    }
    else {
      in_EAX = F_00a354d0(&REFG(undefined4, 0x14a31f0),REFG(int, 0x14c0af0),REFG(undefined4, 0x14c0af4));
    }
    if (in_EAX == param_1) {
      REFG(undefined4, 0x14c0cb0) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00aec080 */
uint F_00aec080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  uVar7 = F_00aa0250(*(undefined4 *)((int)this + 0x10),0,0);
  uVar8 = F_00aa0290(*(undefined4 *)((int)this + 0x10),0,0);
  bVar10 = uVar7 != 0;
  if (bVar10) {
    uVar8 = F_00aa0210(*(undefined4 *)((int)this + 0x10),0,0);
  }
  if (*(int *)((int)this + 0x10) == 0) {
    (*(uint *)(gen_frame + 0x0)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3) << 8;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),*((byte *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2dd2))) >> 2) &
               0xffffff01;
  }
  uVar7 = F_00ae6ab0(uVar8,(*(uint *)(gen_frame + 0x0)));
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  bVar5 = false;
  if (*(char *)((int)this + 0x69) != '\0') goto LAB_00aec2de;
  if ((*(int *)((int)this + 0x204) != 0) &&
     ((*(char *)((int)this + 0x68) == '\0' || (!(*(float *)((int)this + 0x244) <= REFG(float, 0x10ebd80))))))
  {
    switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x204))) {
    case 1: ;
      bVar6 = F_00ae6a90(this);
      uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1f;
      break;
    case 2: ;
    case 3: ;
    case 4: ;
      bVar6 = F_00ae6600(uVar8);
      if ((bVar6 == 0) || (!bVar10)) {
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x20;
      }
      break;
    case 5: ;
      bVar6 = F_00ae8d00(this,uVar8);
      if ((bVar6 != 0) && (bVar6 = F_00ae6620(uVar8), bVar6 != 0)) {
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x21;
        break;
      }
      goto LAB_00aec2de;
    }
    goto switchD_00aec13f_default;
  }
  uVar9 = F_00aebee0(this);
  if ((char)uVar9 == '\0') goto LAB_00aec2de;
  bVar6 = F_00aebf40(this);
  if (bVar6 != 0) {
    bVar4 = true;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x70))) {
    case 1: ;
      uVar9 = F_00aa0210(*(undefined4 *)((int)this + 0x10),0,0);
      if (uVar9 != 0xb) {
        uVar7 = 9;
      }
      break;
    case 2: ;
      uVar9 = F_00aa0210(*(undefined4 *)((int)this + 0x10),0,0);
      if (uVar9 != 0xc) {
        uVar7 = 10;
      }
      break;
    case 3: ;
      uVar7 = 0xb;
      break;
    case 4: ;
      uVar7 = 0xc;
      break;
    case 9: ;
      bVar6 = F_00ae6a90(this);
      uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 7;
      break;
    case 10: ;
      bVar6 = F_00ae6a90(this);
      uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 8;
      break;
    case 0xb: ;
      goto LAB_00aec285;
    }
    goto switchD_00aec13f_default;
  }
LAB_00aec285: ;
  bVar4 = false;
  bVar6 = F_00ae8740(this);
  if (bVar6 == 0) {
    bVar6 = F_00ae6970(this);
    if (bVar6 != 0) {
      switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x6c))) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
        bVar6 = F_00ae85f0(this);
        if (bVar6 != 0) {
          bVar2 = false;
          bVar6 = F_00ae8e50(this,uVar8);
          if ((((((bVar6 == 0) ||
                 (bVar6 = F_00ae6a90(this), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x19)) ||
                (bVar6 = F_00ae6a90(((undefined4)(uint)(this))), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x1a)) ||
               (bVar6 = F_00ae6a90(((undefined4)(uint)(this))), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x1b)) &&
              ((bVar6 = F_00ae6320(uVar8), bVar6 == 0 && (bVar6 = F_00ae6640(uVar8), bVar6 == 0)
               ))) && (bVar6 = F_00ae8e20(this,uVar8), bVar6 == 0)) {
            bVar6 = F_00ae6440(uVar8);
            if (bVar6 == 0) {
              bVar6 = F_00ae63e0(uVar8);
              if (bVar6 == 0) {
                switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x6c))) {
                case 1: ;
                case 4: ;
                  bVar6 = F_00ae6a90(this);
                  uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x19;
                  break;
                case 2: ;
                  bVar6 = F_00ae6a90(this);
                  uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1b;
                  break;
                case 3: ;
                  bVar6 = F_00ae6a90(this);
                  uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1a;
                }
                bVar6 = F_00aa0390(*(undefined * PTR32 *)((int)this + 0x10),uVar7,0);
                if (bVar6 == 0) goto LAB_00aec4c0;
              }
            }
            else if (!bVar10) goto LAB_00aec4c4;
          }
          else {
LAB_00aec4c0: ;
            bVar5 = true;
LAB_00aec4c4: ;
            bVar2 = true;
          }
          bVar6 = F_00ae6660(uVar8);
          if (bVar6 == 0) {
            uVar9 = F_0071ce90(*(undefined * PTR32 *)((int)this + 0x10),0x32);
            if ((char)uVar9 == '\0') goto LAB_00aec4ed;
          }
          else {
            uVar9 = F_0071ce90(*(undefined * PTR32 *)((int)this + 0x10),0x32);
            if ((char)uVar9 != '\0') {
LAB_00aec4ed: ;
              if (!bVar2) break;
            }
          }
          uVar7 = F_0071ce90(*(undefined * PTR32 *)((int)this + 0x10),0x32);
          if ((char)uVar7 == '\0') {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x16;
          }
          else {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1e;
            bVar5 = true;
          }
          break;
        }
        bVar6 = F_00ae85b0(this);
        if (bVar6 == 0) break;
        bVar6 = F_00ae8e50(this,uVar8);
        if ((((bVar6 == 0) ||
             (bVar6 = F_00ae6a90(this), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x11)) ||
            ((bVar6 = F_00ae6a90(((undefined4)(uint)(this))), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x12 ||
             (bVar6 = F_00ae6a90(((undefined4)(uint)(this))), uVar8 == (-(uint)(bVar6 != 0) & 0x1c) + 0x13)))) &&
           (((bVar6 = F_00ae63e0(uVar8), bVar6 == 0 && (bVar6 = F_00ae6640(uVar8), bVar6 == 0))
            && (bVar6 = F_00ae8e20(this,uVar8), bVar6 == 0)))) {
          bVar6 = F_00ae6340(uVar8);
          if (bVar6 == 0) {
            bVar6 = F_00ae6320(uVar8);
            if (bVar6 != 0) break;
            switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x6c))) {
            case 1: ;
            case 4: ;
              bVar6 = F_00ae6a90(this);
              uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x11;
              break;
            case 2: ;
              bVar6 = F_00ae6a90(this);
              uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x13;
              break;
            case 3: ;
              bVar6 = F_00ae6a90(this);
              uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x12;
            }
            bVar6 = F_00aa0390(*(undefined * PTR32 *)((int)this + 0x10),uVar7,0);
            if (bVar6 != 0) break;
            goto LAB_00aec664;
          }
          if (bVar10) break;
        }
        else {
LAB_00aec664: ;
          bVar5 = true;
        }
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0xd;
        break;
      case 5: ;
        bVar6 = F_00ae85f0(this);
        if (bVar6 == 0) {
          bVar6 = F_00ae85b0(this);
          if (bVar6 != 0) {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0xe;
          }
        }
        else {
          bVar6 = F_00ae6a90(this);
          uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x17;
        }
        break;
      case 6: ;
        bVar6 = F_00ae85f0(this);
        if (bVar6 == 0) {
          bVar6 = F_00ae85b0(this);
          if (bVar6 != 0) {
            bVar6 = F_00ae6a90(this);
            uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0xf;
          }
        }
        else {
          bVar6 = F_00ae6a90(this);
          uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x18;
        }
        break;
      case 7: ;
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x10;
      }
      goto switchD_00aec13f_default;
    }
  }
  else {
    bVar6 = F_00ae6300(uVar8);
    if ((bVar6 != 0) || (uVar9 = F_00ae6e80(this), uVar8 == uVar9)) goto switchD_00aec13f_default;
    bVar6 = F_00ae64e0(uVar8);
    if ((bVar6 == 0) && (bVar6 = F_00ae6540(uVar8), bVar6 == 0)) {
      bVar6 = F_00ae85f0(this);
      if (bVar6 == 0) {
        bVar2 = true;
      }
      else {
        bVar3 = true;
      }
    }
  }
LAB_00aec2de: ;
  bVar4 = false;
  bVar6 = F_00ae6390(uVar8);
  if ((bVar6 == 0) && (bVar6 = F_00ae6490(uVar8), bVar6 == 0)) {
    bVar6 = F_00ae6340(uVar8);
    if (((bVar6 != 0) || (bVar6 = F_00ae6320(uVar8), bVar6 != 0)) || (bVar2)) {
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((this_00 == (undefined *)0x0) ||
         (uVar7 = 0x30, (*(byte *)((int)this_00 + 0x2dd2) >> 2 & 1) == 0)) {
        uVar7 = 0x14;
      }
      bVar6 = F_00aa0390(this_00,uVar7,0);
      if (bVar6 != 0) goto switchD_00aec13f_default;
      bVar5 = true;
    }
    else {
      bVar6 = F_00ae6440(uVar8);
      if (((bVar6 != 0) || (bVar6 = F_00ae63e0(uVar8), bVar6 != 0)) || (bVar3)) {
        bVar6 = F_00ae6a90(this);
        uVar7 = (-(uint)(bVar6 != 0) & 0x1c) + 0x1c;
        bVar6 = F_00aa0390(*(undefined * PTR32 *)((int)this + 0x10),uVar7,0);
        if (bVar6 != 0) goto switchD_00aec13f_default;
        bVar5 = true;
      }
    }
  }
  else if (bVar10) goto switchD_00aec13f_default;
  uVar7 = F_00ae6e80(this);
switchD_00aec13f_default: ;
  if (((uVar8 != uVar7) &&
      ((bVar6 = F_00ae6390(uVar8), bVar6 != 0 || (bVar6 = F_00ae6490(uVar8), bVar6 != 0)))) &&
     ((bVar6 = F_00ae6390(uVar7), bVar6 != 0 || (bVar6 = F_00ae6490(uVar7), bVar6 != 0)))) {
    uVar7 = F_00ae6e80(this);
    bVar5 = true;
  }
  bVar6 = F_00ae65b0(uVar7);
  if (bVar6 == 0) {
    bVar6 = F_00ae65b0(uVar8);
    if ((bVar6 != 0) &&
       ((bVar6 = F_00ae6300(uVar7), bVar6 != 0 || (uVar9 = F_00ae6e80(this), uVar7 == uVar9))))
    {
      if (0.0 < *(float *)((int)this + 0x440)) {
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x440) -
                       (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
        fVar11 = 0.0;
        if (!((float10)fVar1 < (float10)0)) {
          fVar11 = fVar1;
        }
        *(float *)((int)this + 0x440) = fVar11;
        uVar7 = uVar8;
      }
    }
  }
  else {
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  if ((param_1 != (undefined1 *)0x0) && (uVar8 != uVar7)) {
    if ((bVar4) && (bVar6 = F_00ae8da0(this,uVar8), bVar6 != 0)) {
      *param_1 = 1;
    }
    bVar6 = F_00ae64e0(uVar7);
    if (((bVar6 != 0) || (bVar6 = F_00ae6540(uVar7), bVar6 != 0)) &&
       ((bVar6 = F_00ae8da0(this,uVar8), bVar6 != 0 || (bVar6 = F_00ae6640(uVar8), bVar6 != 0)))
       ) {
      *param_1 = 1;
    }
    if ((bVar5) &&
       ((bVar6 = F_00ae8da0(this,uVar8), bVar6 != 0 || (bVar6 = F_00ae6640(uVar8), bVar6 != 0)))
       ) {
      *param_1 = 1;
    }
  }
  return uVar7;
}

/* ref: FUN_00aec930 */
byte F_00aec930(unsigned int gen_a0)
{
  GEN_ENTER(0xaec930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*(int *)(in_ecx + 0x10) == 0) {
LAB_00aec94e: ;
    if (*(char *)(in_ecx + 0x1cc) == '\0') goto LAB_00aec95f;
  }
  else {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 == 0) || (REFG(char, 0x14c0a64) == '\0')) goto LAB_00aec94e;
  }
  if (*(char *)(in_ecx + 0x66) != '\0') {
    bVar2 = 1;
  }
LAB_00aec95f: ;
  bVar1 = F_00ae8fc0(in_ecx);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  bVar1 = F_00ae9020(in_ecx);
  if (bVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  if (*(char *)(in_ecx + 0x69) != '\0') {
    bVar2 = bVar2 | 8;
  }
  return bVar2;
}

/* ref: FUN_00aec990 */
uint F_00aec990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xaec990u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int in_ecx;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x328) = param_2;
  uVar2 = *(uint *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x32c) = param_3;
  *(float *)(param_1 + 0x354) = param_4;
  if ((uVar2 != 0) && (in_ecx = *(int *)(uVar2 + 0x10), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar2 = F_00a9f870(in_ecx,*(float *)(param_1 + 0x354));
    }
  }
  return uVar2;
}

/* ref: FUN_00aec9f0 */
uint F_00aec9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaec9f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2;
  fVar1 = *(float *)param_2;
  iVar4 = F_00c51673((double)fVar1);
  if (iVar4 == 0) {
    dVar2 = (double)fVar1;
    uVar5 = F_00c51657((int)(ulonglong)gen_d2bits(dVar2),
                         (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    if (uVar5 != 0) {
      fVar1 = *(float *)(param_2 + 4);
      iVar4 = F_00c51673((double)fVar1);
      if (iVar4 == 0) {
        dVar2 = (double)fVar1;
        uVar5 = F_00c51657((int)(ulonglong)gen_d2bits(dVar2),
                             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
        if (uVar5 != 0) {
          fVar1 = *(float *)(param_2 + 8);
          iVar4 = F_00c51673((double)fVar1);
          if (iVar4 == 0) {
            dVar2 = (double)fVar1;
            F_00c51657((int)(ulonglong)gen_d2bits(dVar2),
                         (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
          }
        }
      }
    }
  }
  param_2 = *(uint *)(param_2 + 4);
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x2dd3))) & 2) != 0) {
    bVar3 = F_00a9fa30(*(int *)(param_1 + 0x10));
    if (bVar3 == 1) {
      uVar5 = F_00a5feb0(*(undefined * PTR32 *)(param_1 + 0x10));
      param_2 = *(uint *)(uVar5 + 4);
    }
  }
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x40))))
                    (*(int * PTR32 *)(param_1 + 0x10),*(undefined4 *)uVar6,param_2,
                     *(undefined4 *)(uVar6 + 8));
  return uVar6;
}

/* ref: FUN_00aecc90 */
byte F_00aecc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaecc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((char)param_1 == '\0') {
    if (*(int *)((int)this + 0x204) == 0) {
      if ((*(char *)((int)this + 0x296) == '\0') ||
         (iVar1 = (int)this + 0x2c0, *(char *)((int)this + 700) == '\0')) {
        iVar1 = (int)this + 0x270;
      }
      if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) {
        return 0;
      }
    }
    else if (*(int *)((int)this + 0x204) != 5) {
      return 0;
    }
  }
  if (((char)param_2 == '\0') && ((REFG(char, 0x14c0a40) == '\0' || (*(char *)((int)this + 0x420) == '\0'))))
  {
    return 0;
  }
  return *(char *)((int)this + 0x422) == '\0';
}

/* ref: FUN_00aecd10 */
uint F_00aecd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xaecd10u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  if (param_3 == 3) {
    (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc40)));
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x10928e4));
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x0)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc34)));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_0054e4e0((undefined *)(param_1 + 0x88),&(*(float *)(gen_frame + 0x10)),4);
    pfVar6 = &(*(float *)(gen_frame + 0x0));
  }
  else {
    if (param_3 != 4) goto LAB_00aece33;
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebd3c)));
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    (*(float *)(gen_frame + 0x0)) = 0.0;
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x10ac050));
    (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_0054e4e0((undefined *)(param_1 + 0x88),&(*(float *)(gen_frame + 0x0)),4);
    pfVar6 = &(*(float *)(gen_frame + 0x10));
  }
  F_0054e4e0((undefined *)(param_1 + 0xcc),pfVar6,4);
LAB_00aece33: ;
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(int *)(param_2 + 0x34) = param_3;
  *(undefined4 *)(param_2 + 0x20) = uVar5;
  *(undefined4 *)(param_2 + 0x24) = uVar5;
  *(float *)(param_2 + 0x2c) = param_4;
  fVar1 = *param_6;
  fVar2 = *param_5;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 - (float10)fVar2);
  fVar3 = param_6[2];
  fVar4 = param_5[2];
  *(undefined4 *)(param_1 + 0x11c) = 0;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar3 - (float10)fVar4);
  fVar7 = (float10)(float)((float10)fVar3 - (float10)fVar4);
  fVar8 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  *(float *)(param_1 + 0x120) = ((float)GEN_TOF(SQRT((float10)(float)(fVar8 * fVar8 + fVar7 * fVar7))));
  *(float *)(param_1 + 0x110) = param_7;
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)(uint)(gen_frame + 0x30));
  return (uint)param_5;
}

/* ref: FUN_00aecec0 */
uint F_00aecec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xaecec0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (param_3 == 3) {
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc40)));
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc34)));
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_0054e4e0((undefined *)(param_1 + 0x128),&(*(undefined4 *)(gen_frame + 0x8)),4);
    puVar1 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else if (param_3 == 4) {
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebd3c)));
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac050)));
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_0054e4e0((undefined *)(param_1 + 0x128),&(*(undefined4 *)(gen_frame + 0x8)),4);
    puVar1 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    if (param_3 != 5) goto LAB_00aed03e;
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbec)));
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac050)));
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_0054e4e0((undefined *)(param_1 + 0x128),&(*(undefined4 *)(gen_frame + 0x18)),4);
    puVar1 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  F_0054e4e0((undefined *)(param_1 + 0x16c),puVar1,4);
LAB_00aed03e: ;
  *(undefined4 *)(param_2 + 0x28) = GEN_FLT_TO(*(undefined4 *)(param_2 + 0x28), REFG(float, 0x10ebbf0));
  *(float *)(param_2 + 0x30) = param_4;
  *(float *)(param_2 + 0x18) = param_5;
  *(uint *)(param_2 + 0x38) = param_3;
  *(float *)(param_1 + 0x1bc) = param_5;
  *(float *)(param_1 + 0x1c0) = param_6;
  *(float *)(param_1 + 0x1b0) = param_7;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return param_3;
}

/* ref: FUN_00aed0a0 */
uint F_00aed0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaed0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  if (*(char *)(param_2 + 0x82) == '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0x3c);
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x88);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)((int)this + 0x374) = uVar2;
  *(undefined4 *)((int)this + 0x378) = uVar1;
  F_00affb20((undefined *)((int)this + 0x380),param_2);
  *(undefined4 *)((int)this + 0x410) = *param_1;
  *(undefined4 *)((int)this + 0x414) = param_1[1];
  *(undefined4 *)((int)this + 0x418) = param_1[2];
  puVar3 = param_1;
  if (*(int *)(param_2 + 0x44) != 0) {
    puVar3 = (undefined4 *)F_00c9f0c0(((undefined *)GEN_TOP((*(int *)(param_2 + 0x44) + 0x58))),(int)this + 0x454)
    ;
  }
  return (uint)puVar3;
}

/* ref: FUN_00aed120 */
unsigned int F_00aed120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaed120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float * pfVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (((*((byte *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x10) + 0x2dd3))) & 2) == 0) &&
     ((iVar4 = *(int *)((int)this + 0x204), iVar4 == 0 ||
      (((iVar4 != 3 && (iVar4 != 4)) && (iVar4 != 2)))))) {
    pfVar6 = *(float * PTR32 *)(param_1 + 0x40);
    (*(float *)(gen_frame + 0x10)) = *pfVar6;
    (*(float *)(gen_frame + 0x14)) = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = pfVar6[2];
    fVar8 = (float10)pfVar6[1];
    fVar9 = (float10)*pfVar6;
    fVar10 = (float10)pfVar6[2];
    fVar1 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar8 = (float10)fVar1;
    bVar7 = GEN_ISNAN(fVar8) || GEN_ISNAN((float10)0);
    if (bVar7 == (bVar7 || fVar8 == (float10)0)) {
      pfVar6 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      fVar1 = *pfVar6;
      (*(float *)(gen_frame + 0x0)) = fVar1;
      fVar2 = pfVar6[1];
      (*(float *)(gen_frame + 0x4)) = fVar2;
      fVar3 = pfVar6[2];
      (*(float *)(gen_frame + 0x8)) = fVar3;
      (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x14)));
      (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x18)));
      F_00aec9f0(this,(uint)&(*(float *)(gen_frame + 0x0)));
      if (*(int *)((int)this + 0x10) != 0) {
        bVar5 = F_00a9f620(*(int *)((int)this + 0x10));
        if (bVar5 != 0) {
          REFG(undefined4, 0x14c0cc2) = 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00aed220 */
float10 F_00aed220(float gen_a0)
{
  GEN_ENTER(0xaed220u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00aeb260(param_1);
  return fVar1;
}

/* ref: FUN_00aed240 */
uint F_00aed240(void)
{
  GEN_ENTER(0xaed240u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (*(int *)(uVar1 + 0x14) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aed270 */
byte F_00aed270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaed270u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  byte bVar1;
  
  if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
    F_00690d40((undefined *)(REFG(int, 0x1375b90) + 0x10),&(*(undefined4 *)(gen_frame + 0x0)),(int)*param_1,(int)param_1[1]);
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc4)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined2 *)(gen_frame + 0xa0)) = 0;
    (*(undefined1 *)(gen_frame + 0xa2)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = (*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0xcc)) = (*(undefined4 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0xb8)) = (*(undefined4 *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0xbc)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0xc0)) = (*(undefined4 *)(gen_frame + 0x18));
    bVar1 = F_00aeb520(&(*(undefined4 *)(gen_frame + 0xc4)),&(*(undefined4 *)(gen_frame + 0xb8)),REFG(float, 0x10ebcac),&(*(undefined4 *)(gen_frame + 0x20)),(float)(float10)0);
    if (bVar1 != 0) {
      *param_2 = (*(undefined4 *)(gen_frame + 0x20));
      param_2[1] = (*(undefined4 *)(gen_frame + 0x24));
      param_2[2] = (*(undefined4 *)(gen_frame + 0x28));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aed710 */
byte F_00aed710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaed710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  float10 fVar2;
  
  if (*(char *)(param_4 + 0x62) == '\0') {
    fVar2 = (float10)REFG(float, 0x1339b5c) + (float10)*(double *)&REFG(undefined, 0x109ce00);
  }
  else {
    fVar2 = (float10)REFG(float, 0x1339b58) + (float10)*(double *)&REFG(undefined, 0x108bec8);
  }
  bVar1 = F_00ae9970(param_1,param_2,param_3,((float)GEN_TOF(((float10)*(float *)(param_4 + 0x40) - fVar2))))
  ;
  return bVar1;
}

/* ref: FUN_00aed770 */
uint F_00aed770(unsigned int gen_a0)
{
  GEN_ENTER(0xaed770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aeb700(*(undefined * PTR32 *)((int)this + 0x10));
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar1 = F_00afcf00(this);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00aed7a0 */
unsigned int F_00aed7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaed7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  int * this_00;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  undefined4 * puVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  if (*(char *)((int)this + 0x18) == '\0') {
    return 0;
  }
  if ((*(int *)((int)this + 0xa0) == -0x20000000) ||
     (this_00 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                                    *(undefined4 *)((int)this + 0xa4)), this_00 == (int *)0x0)) {
    if ((*(char *)((int)this + 0x260) == '\0') || (*(int *)((int)this + 0x244) == 3))
    goto LAB_00aedb33;
    iVar6 = *(int *)((int)this + 0x234);
    (*(float *)(gen_frame + 0x20)) = *(float *)((int)this + 0x250);
    (*(float *)(gen_frame + 0x24)) = *(float *)((int)this + 0x254);
    (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 600);
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(float *)(gen_frame + 0x34)) = 0.0;
    (*(float *)(gen_frame + 0x38)) = 0.0;
    if (iVar6 != -1) {
      iVar6 = iVar6 + 0x19;
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + iVar6 * 0x10);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + iVar6 * 0x10 + 4);
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + iVar6 * 0x10 + 8));
      pfVar7 = (float *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x30)) = *pfVar7;
      (*(float *)(gen_frame + 0x34)) = pfVar7[1];
      (*(float *)(gen_frame + 0x38)) = pfVar7[2];
    }
    fVar15 = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    fVar15 = ((float)GEN_TOF(SQRT((float10)fVar15)));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    fVar12 = (float10)fVar15;
    bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
    if (bVar11 != (bVar11 || fVar12 == (float10)0)) {
      uVar8 = F_00ae9430(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x0)));
      pfVar7 = (float *)F_0046f4a0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),uVar8);
      (*(float *)(gen_frame + 0x30)) = *pfVar7;
      (*(float *)(gen_frame + 0x34)) = pfVar7[1];
      (*(float *)(gen_frame + 0x38)) = pfVar7[2];
    }
    fVar15 = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    fVar15 = ((float)GEN_TOF(SQRT((float10)fVar15)));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    fVar13 = (float10)fVar15;
    fVar12 = (float10)0;
    bVar11 = GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12);
    if (bVar11 == (bVar11 || fVar13 == fVar12)) {
      (*(float *)(gen_frame + 0x34)) = (float)fVar12;
      F_004bd580(&(*(float *)(gen_frame + 0x30)));
      fVar12 = (float10)*(double *)&REFG(undefined, 0x10944e0);
      (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar12);
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar12);
      (*(float *)(gen_frame + 0x38)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x38)));
    }
    fVar15 = 4.2039e-45;
    pfVar7 = &(*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x30)) + (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x28)));
LAB_00aedb2b: ;
    F_00aea6c0(this,pfVar7,(undefined4)gen_fl2bits(fVar15));
  }
  else {
    puVar9 = (undefined4 *)F_00a5feb0(this_00);
    *(undefined4 *)((int)this + 0x250) = *puVar9;
    (*(float *)(gen_frame + 0x4c)) = 0.0;
    *(undefined4 *)((int)this + 0x254) = puVar9[1];
    *(undefined4 *)((int)this + 600) = puVar9[2];
    fVar15 = *(float *)((int)this + 0x240);
    (*(float *)(gen_frame + 0x48)) = fVar15;
    if ((GEN_ISNAN(fVar15) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
        ((GEN_ISNAN(fVar15) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar15 == REFG(float, 0x10ebbf0))) {
      *(undefined4 *)((int)this + 0x240) = *(undefined4 *)(REFG(int, 0x137104c) + 0x1198);
LAB_00aedb20: ;
      fVar15 = (*(float *)(gen_frame + 0x4c));
      pfVar7 = (float *)F_00a5feb0(this_00);
      goto LAB_00aedb2b;
    }
    fVar15 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)fVar15)));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    *(float *)((int)this + 0x240) = fVar15;
    if ((float10)REFG(float, 0x10ebd08) <= (float10)fVar15) {
      uVar8 = ((code *)*(gen_code32 *)(*this_00 + 0xb8))(this_00);
      if ((char)uVar8 != '\0') {
        uVar8 = F_00a5f290(this_00);
        bVar5 = F_00a9fcd0(uVar8);
        if (bVar5 != 0) {
          uVar8 = F_00a5f290(this_00);
          bVar5 = F_00a9fce0(uVar8);
          if (bVar5 != 0) goto LAB_00aeda85;
        }
      }
      fVar15 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x240) - (float10)*(double *)&REFG(undefined, 0x10ec498))));
      (*(float *)(gen_frame + 0x48)) = fVar15;
      if ((float10)REFG(float, 0x10ebd08) < (float10)fVar15) {
        *(float *)((int)this + 0x240) = GEN_FLT_TO(*(float *)((int)this + 0x240), REFG(float, 0x10ebd08));
      }
      else {
        *(float *)((int)this + 0x240) = fVar15;
      }
      goto LAB_00aedb20;
    }
LAB_00aeda85: ;
    uVar8 = ((code *)*(gen_code32 *)(*this_00 + 0xb8))(this_00);
    if ((char)uVar8 != '\0') {
      uVar8 = F_00a5f290(this_00);
      uVar8 = F_00a9fcc0(uVar8);
      if ((char)uVar8 == '\0') {
        uVar8 = F_00a5f290(this_00);
        bVar5 = F_00a9fcd0(uVar8);
        if (bVar5 != 0) {
          uVar8 = F_00a5f290(this_00);
          bVar5 = F_00a9fce0(uVar8);
          if (bVar5 != 0) goto LAB_00aedacf;
        }
      }
      else {
LAB_00aedacf: ;
        uVar8 = F_00a5f290(this_00);
        uVar8 = F_00a9fcc0(uVar8);
        if ((char)uVar8 == '\0') {
          uVar8 = F_00a5f290(this_00);
          bVar5 = F_00a9fcd0(uVar8);
          if (bVar5 != 0) {
            uVar8 = F_00a5f290(this_00);
            bVar5 = F_00a9fce0(uVar8);
            if (bVar5 != 0) {
              (*(float *)(gen_frame + 0x4c)) = 1.4013e-45;
            }
          }
        }
        else {
          (*(float *)(gen_frame + 0x4c)) = 2.8026e-45;
        }
        if ((*(float *)(gen_frame + 0x4c)) != gen_bits2f(*(int *)((int)this + 0x244))) goto LAB_00aedb20;
      }
    }
  }
LAB_00aedb33: ;
  if (*(int *)((int)this + 0x23c) == *(int *)((int)this + 0x238)) goto LAB_00aedca3;
  pfVar7 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  fVar15 = *pfVar7;
  (*(float *)(gen_frame + 0x20)) = fVar15;
  fVar1 = pfVar7[2];
  (*(float *)(gen_frame + 0x28)) = fVar1;
  iVar6 = *(int *)((int)this + 0x230) + 0x19;
  fVar2 = *(float *)((int)this + iVar6 * 0x10);
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = *(float *)((int)this + iVar6 * 0x10 + 8);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar15 = (float)((float10)fVar2 - (float10)fVar15);
  (*(float *)(gen_frame + 0x30)) = fVar15;
  fVar1 = (float)((float10)fVar3 - (float10)fVar1);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar12 = (float10)fVar15;
  fVar13 = (float10)fVar1;
  fVar15 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
  (*(float *)(gen_frame + 0x48)) = fVar15;
  fVar15 = ((float)GEN_TOF(SQRT((float10)fVar15)));
  (*(float *)(gen_frame + 0x48)) = fVar15;
  if (!((double)fVar15 <= *(double *)&REFG(undefined, 0x10a1b58))) {
    iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x204)));
    if ((iVar6 != 0) && (((iVar6 == 3 || (iVar6 == 4)) || (iVar6 == 2)))) {
      fVar1 = *(float *)((int)this + 0x80);
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x88);
      fVar12 = (float10)fVar1;
      fVar13 = (float10)*(float *)((int)this + 0x88);
      fVar1 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      fVar12 = (float10)fVar1;
      if ((!GEN_ISNAN(fVar12) && !GEN_ISNAN((float10)fVar15)) && !(fVar12 <= (float10)fVar15))
      goto LAB_00aedc76;
    }
    cVar4 = *(char *)((int)this + 0x155);
    fVar15 = *(float *)((int)this + 0x80);
    (*(float *)(gen_frame + 0x20)) = fVar15;
    (*(float *)(gen_frame + 0x24)) = *(float *)((int)this + 0x84);
    (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0x88);
    if (cVar4 == '\0') goto LAB_00aedca3;
    fVar12 = (float10)fVar15;
    fVar13 = (float10)*(float *)((int)this + 0x84);
    fVar14 = (float10)*(float *)((int)this + 0x88);
    fVar15 = ((float)GEN_TOF((fVar14 * fVar14 + (fVar13 * fVar13 + fVar12 * fVar12))));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    fVar15 = ((float)GEN_TOF(SQRT((float10)fVar15)));
    (*(float *)(gen_frame + 0x48)) = fVar15;
    if (!((float10)fVar15 <= (float10)*(float *)&REFG(undefined, 0x10ebd18))) goto LAB_00aedca3;
  }
LAB_00aedc76: ;
  *(int *)((int)this + 0x23c) = *(int *)((int)this + 0x238);
  if (((*(char *)((int)this + 0x260) != '\0') && (*(int *)((int)this + 0x244) == 3)) &&
     (*(int *)((int)this + 0x238) == *(int *)((int)this + 0x234))) {
    *(undefined1 *)((int)this + 0x260) = 0;
  }
LAB_00aedca3: ;
  iVar6 = *(int *)((int)this + 0x230);
  if ((iVar6 == *(int *)((int)this + 0x238)) && (iVar6 == *(int *)((int)this + 0x23c))) {
    if (*(int *)((int)this + 0x238) == -1) {
      *(undefined4 *)((int)this + 0x238) = 0;
      return 0;
    }
    iVar6 = iVar6 + 1;
    if (9 < iVar6) {
      iVar6 = 0;
    }
    iVar10 = *(int *)((int)this + 0x234) + 1;
    if (9 < iVar10) {
      iVar10 = 0;
    }
    if (iVar6 != iVar10) {
      *(int *)((int)this + 0x230) = iVar6;
    }
  }
  return 0;
}

/* ref: FUN_00aedd00 */
byte F_00aedd00(unsigned int gen_a0)
{
  GEN_ENTER(0xaedd00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  this = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  uVar2 = F_00a34e80(this,1);
  uVar3 = F_00a34e80(this,0);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (short)uVar3;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = (short)uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((short)uVar2,(short)uVar3);
  bVar1 = F_00aed270(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
  return bVar1;
}

/* ref: FUN_00aedd50 */
byte F_00aedd50(unsigned int gen_a0)
{
  GEN_ENTER(0xaedd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 0x17) != '\0') && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    return 1;
  }
  if (((*(char *)((int)this + 0x18) == '\0') && (*(char *)((int)this + 0x19) == '\0')) &&
     (*(char *)((int)this + 0x1a) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aedd90 */
byte F_00aedd90(unsigned int gen_a0)
{
  GEN_ENTER(0xaedd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 0x17) != '\0') && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    return 1;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aeddc0 */
byte F_00aeddc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeddc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  
  pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00431b80(pvVar2);
  if ((bVar1 != 0) || (*(char *)((int)this + 0x22) != '\0')) {
    return 1;
  }
  pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(pvVar2,0x129);
  if (((bVar1 != 0) || (*(char *)((int)this + 0x176) != '\0')) &&
     ((uVar3 = F_00b6afa0(), uVar3 != 0 &&
      (uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), uVar4 = F_00b6afa0(), uVar4 != uVar3)
      ))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aede40 */
byte F_00aede40(unsigned int gen_a0)
{
  GEN_ENTER(0xaede40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x17) == '\0') {
    return 0;
  }
  uVar2 = F_00b6afa0();
  if ((uVar2 != 0) && (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aede70 */
uint F_00aede70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaede70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00aede93: ;
    if (*(char *)((int)this + 0x18) == '\0') goto LAB_00aedf08;
  }
  else {
    uVar2 = F_00b6afa0();
    if (uVar2 == 0) goto LAB_00aede93;
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar1 == 0) goto LAB_00aede93;
  }
  if (*(char *)((int)this + 0x17) != '\0') {
    uVar2 = F_00b6afa0();
    if (uVar2 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      if (bVar1 != 0) {
        this_00 = (undefined *)F_00b6afa0();
        puVar3 = (undefined4 *)F_00a5feb0(this_00);
        *param_1 = *puVar3;
        param_1[1] = puVar3[1];
        param_1[2] = puVar3[2];
        return (uint)param_1;
      }
    }
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    iVar4 = *(int *)((int)this + 0x230) + 0x19;
    *param_1 = *(undefined4 *)((int)this + iVar4 * 0x10);
    param_1[1] = *(undefined4 *)((int)this + iVar4 * 0x10 + 4);
    param_1[2] = *(undefined4 *)((int)this + iVar4 * 0x10 + 8);
    return (uint)param_1;
  }
LAB_00aedf08: ;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00aedf40 */
uint F_00aedf40(unsigned int gen_a0)
{
  GEN_ENTER(0xaedf40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if ((((*(char *)((int)this + 0x17) == '\0') || (uVar2 = F_00b6afa0(), uVar2 == 0)) ||
      (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 == 0)) && (*(char *)((int)this + 0x18) == '\0')) {
    return 0;
  }
  if (((*(char *)((int)this + 0x17) != '\0') && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 != 0)) {
    uVar2 = F_00b6afa0();
    return uVar2;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    if (*(int *)((int)this + 0xa0) != -0x20000000) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                           *(undefined4 *)((int)this + 0xa4));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00aedfc0 */
byte F_00aedfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xaedfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_14;
  
  iVar4 = *(int *)((int)this + 0x230);
  if (iVar4 != *(int *)((int)this + 0x234)) {
    do {
      pfVar2 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      fVar5 = (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + (iVar4 + 0x19) * 0x10 + 8))) -
                              (float10)pfVar2[2])));
      fVar6 = (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + (iVar4 + 0x19) * 0x10))) -
                              (float10)*pfVar2)));
      local_14 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
      if (*(char *)((int)this + 0x18) == '\0') {
        if (*(char *)((int)this + 0x17) != '\0') {
          uVar3 = F_00b6afa0();
          if (uVar3 != 0) {
            bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
            if (bVar1 != 0) {
              uVar3 = F_00b6afa0();
              goto LAB_00aee090;
            }
          }
        }
      }
      else if (*(int *)((int)this + 0xa0) != -0x20000000) {
        uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                             *(undefined4 *)((int)this + 0xa4));
LAB_00aee090: ;
        if (uVar3 != 0) {
          local_14 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 0xc0) + (float10)local_14)));
        }
      }
      fVar5 = (float10)((float)GEN_TOF(SQRT((float10)(float)(fVar6 * fVar6 + fVar5 * fVar5))));
      if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN((float10)local_14 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) &&
          !(fVar5 < (float10)local_14 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      if (9 < iVar4) {
        iVar4 = 0;
      }
    } while (iVar4 != *(int *)((int)this + 0x234));
  }
  return 0;
}

/* ref: FUN_00aee0e0 */
byte F_00aee0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaee0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  uint uVar6;
  float * pfVar7;
  undefined * this_00;
  float * pfVar8;
  float10 fVar9;
  double dVar10;
  
  uVar6 = F_00aedf40(this);
  if (uVar6 == 0) {
    if ((*(char *)((int)this + 0x18) != '\0') && (*(char *)((int)this + 0x260) != '\0')) {
      return 1;
    }
  }
  else {
    pfVar7 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    this_00 = (undefined *)F_00aedf40(this);
    pfVar8 = (float *)F_00a5feb0(this_00);
    fVar1 = *pfVar8;
    fVar2 = *pfVar7;
    fVar3 = pfVar8[2];
    fVar4 = pfVar7[2];
    dVar10 = F_00ae9ff0(this);
    fVar9 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2)
                                                  * (float10)(float)((float10)fVar1 - (float10)fVar2
                                                                    ) +
                                                 (float10)(float)((float10)fVar3 - (float10)fVar4) *
                                                 (float10)(float)((float10)fVar3 - (float10)fVar4)))))))
    ;
    if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN((float10)dVar10 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) &&
        !(fVar9 < (float10)dVar10 + (float10)*(double *)&REFG(undefined, 0x10ec4a0))) {
      return 1;
    }
    if (((*(char *)((int)this + 0x18) != '\0') &&
        (*(int *)((int)this + 0x238) != *(int *)((int)this + 0x234))) &&
       (bVar5 = F_00aedfc0(this), bVar5 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aee1c0 */
byte F_00aee1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaee1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (((*(int *)(uVar1 + 0x14) != 0) &&
        (((REFG(int, 0x1375bbc) != 0 || (REFG(int, 0x1375b90) == 0)) || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0)))) &&
       (*(char *)(in_ecx + 0x17) == '\0')) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00aee270 */
byte F_00aee270(unsigned int gen_a0)
{
  GEN_ENTER(0xaee270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((*(char *)(in_ecx + 0x17) != '\0') && (REFG(int, 0x137104c) != 0)) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf);
    if (*(int *)(uVar1 + 0x14) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aee2a0 */
uint F_00aee2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaee2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  char cVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar6;
  
  *(undefined1 *)((int)this + 0x19) = 0;
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00aee2cc: ;
    uVar3 = in_EAX & 0xffffff00;
  }
  else {
    uVar3 = F_00b6afa0();
    in_EAX = 0;
    if (uVar3 == 0) goto LAB_00aee2cc;
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) goto LAB_00aee2cc;
    uVar3 = CONCAT31(extraout_var,1);
  }
  cVar2 = (char)uVar3;
  *(char *)((int)this + 0x17) = cVar2;
  if ((char)param_1 == '\0') {
    if (cVar2 != '\0') {
      *(undefined1 *)((int)this + 0x17) = 0;
    }
    if (*(char *)((int)this + 0x18) != '\0') {
      *(undefined1 *)((int)this + 0x18) = 0;
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar6 = 0x35;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      uVar3 = F_0046a630(this_00,uVar6);
      *(undefined1 *)((int)this + 0x1a) = 0;
      *(undefined1 *)((int)this + 0x275) = 0;
      return uVar3;
    }
  }
  else if (cVar2 != '\0') {
    uVar5 = F_00b6afa0();
    uVar3 = 0;
    if (uVar5 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      uVar3 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) goto LAB_00aee32f;
    }
    *(undefined1 *)((int)this + 0x17) = 0;
  }
LAB_00aee32f: ;
  *(undefined1 *)((int)this + 0x1a) = 0;
  *(undefined1 *)((int)this + 0x275) = 0;
  return uVar3;
}

/* ref: FUN_00aee340 */
uint F_00aee340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaee340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  undefined * this;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined1 * puVar2;
  float10 fVar3;
  double dVar4;
  
  bVar1 = F_00aea5a0(param_1,0);
  this = REFG(void * PTR32, 0x1375b90);
  puVar2 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  if ((((bVar1 != 0) && (REFG(int, 0x1375bbc) == 0)) && (REFG(void * PTR32, 0x1375b90) != (undefined *)0x0)) &&
     ((*(char *)((int)param_1 + 0x22) != '\0' &&
      ((bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar1 == 0 ||
       (puVar2 = (undefined1 *)F_00b6afa0(), puVar2 == (undefined1 *)0x0)))))) {
    *(undefined1 *)param_2 = 1;
    if (*(char *)((int)param_1 + 0x28) != '\0') {
      fVar3 = F_00aeb260(*(float *)((int)param_1 + 0x24));
      *param_3 = (float)fVar3;
      *param_4 = 1;
      return (uint)param_4;
    }
    dVar4 = F_00b6c830(this);
    fVar3 = F_00aeb260((float)((float10)dVar4 + (float10)*(double *)&REFG(undefined, 0x1080228)));
    *param_3 = (float)fVar3;
    *param_4 = 1;
    puVar2 = param_4;
  }
  return (uint)puVar2;
}

/* ref: FUN_00aee3f0 */
unsigned int F_00aee3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaee3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a5;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;
  undefined1 * param_7 = (undefined1 *)(uintptr_t)gen_a7;
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(char *)((int)this + 0x29) != '\0') {
    F_00aee2a0(this,0);
    *(undefined1 *)((int)this + 0x1a) = 1;
    if (*(char *)((int)this + 0x29) != '\0') {
      pfVar1 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0xf8) - (float10)pfVar1[2])));
      fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0xf0) - (float10)*pfVar1)));
      if ((float10)REFG(float, 0x1339b38) <
          (float10)((float)GEN_TOF(SQRT((float10)(float)(fVar3 * fVar3 + fVar2 * fVar2))))) {
        *param_2 = *(float *)((int)this + 0xf0);
        param_2[1] = *(float *)((int)this + 0xf4);
        param_2[2] = *(float *)((int)this + 0xf8);
        *(float *)((int)this + 0xc0) = *param_2;
        *(float *)((int)this + 0xc4) = param_2[1];
        *(float *)((int)this + 200) = param_2[2];
        *param_1 = '\x01';
      }
      if (*(char *)((int)this + 0x12a) == '\0') {
        fVar2 = F_00aeb260(((float)GEN_TOF(((float10)*(float *)((int)this + 0x100) -
                                    (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)))
                                                       + 0xb0)))))));
        if ((*param_1 != '\0') ||
           (!((float10)((float)GEN_TOF(ABS((float10)(float)fVar2))) <= (float10)REFG(float, 0x1339b38)))) {
          *param_3 = 1;
          *param_4 = *(undefined4 *)((int)this + 0x100);
        }
      }
    }
  }
  if (*(char *)((int)this + 0x1a) != '\0') {
    *param_5 = *(undefined1 *)((int)this + 300);
    *param_6 = *(undefined1 *)((int)this + 0x128);
    *param_7 = *(undefined1 *)((int)this + 0x129);
  }
  if (*(char *)((int)this + 0x29) != '\0') {
    *(undefined1 *)((int)this + 0x29) = 0;
  }
  return 0;
}

/* ref: FUN_00aee570 */
uint F_00aee570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaee570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float * pfVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  undefined * pvVar5;
  undefined3 extraout_var_00 = 0;
  uint uVar6;
  float * pfVar7;
  float10 fVar8;
  float local_14;
  
  bVar4 = F_00aea5a0(this,0);
  pfVar7 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
  if (bVar4 != 0) {
    pvVar5 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
    bVar4 = F_00a34970(pvVar5,0x129);
    pfVar7 = ((float *)GEN_TOP(CONCAT31(extraout_var_00,bVar4)));
    if ((bVar4 != 0) || (*(char *)((int)this + 0x176) != '\0')) {
      uVar6 = F_00b6afa0();
      pfVar7 = (float *)0x0;
      if (uVar6 != 0) {
        pfVar3 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
        pfVar7 = (float *)F_00b6afa0();
        if (pfVar7 != pfVar3) {
          if (*(char *)((int)this + 0x177) == '\0') {
            pfVar7 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
            fVar1 = *pfVar7;
            fVar2 = pfVar7[2];
            pvVar5 = (undefined *)F_00b6afa0();
            pfVar7 = (float *)F_00a5feb0(pvVar5);
            fVar8 = ((float10)GEN_TOD(atan2((float10)(float)((float10)*pfVar7 - (float10)fVar1),
                                    (float10)(float)((float10)pfVar7[2] - (float10)fVar2)
                                   )));
            fVar8 = F_00aeb260((float)fVar8);
            local_14 = (float)fVar8;
          }
          else {
            local_14 = *(float *)((int)this + 0x178);
            *(undefined1 *)((int)this + 0x177) = 0;
          }
          *param_1 = 1;
          fVar8 = F_00aeb260(local_14);
          *param_2 = (float)fVar8;
          *param_3 = 1;
          *(undefined1 *)((int)this + 0x272) = 1;
          pfVar7 = param_2;
        }
      }
    }
    if (*(char *)((int)this + 0x2a) != '\0') {
      *param_1 = 1;
      fVar8 = F_00aeb260(*(float *)((int)this + 0x144));
      *param_2 = (float)fVar8;
      *param_3 = *(undefined1 *)((int)this + 0x14c);
      *(undefined1 *)((int)this + 0x272) = 1;
      pfVar7 = param_2;
    }
  }
  return (uint)pfVar7;
}

/* ref: FUN_00aee6d0 */
unsigned int F_00aee6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaee6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined * this_00;
  uint uVar5;
  float * pfVar6;
  undefined4 * puVar7;
  
  if (((((*(char *)((int)this + 0x1a) == '\0') && (*(char *)((int)this + 0x29) == '\0')) &&
       (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cc))) == '\0')) &&
      (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cd))) == '\0')) &&
     (((*(char *)((int)this + 0x273) == '\0' &&
       (bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar4 != 0)) ||
      (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0x188))) == '\x03')))) {
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x20)));
    (*(char *)(gen_frame + 0x1f)) = '\0';
    if ((REFG(char, 0x1379688) != '\0') && (bVar4 = F_0053d930(&REFG(undefined4, 0x1375bc0)), bVar4 != 0)) {
      this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = this_00;
      uVar5 = F_00a34e80(this_00,1);
      (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar5 & 0xffff);
      uVar5 = F_00a34e80((*(undefined * PTR32 *)(gen_frame + 0x18)),0);
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0)) = (short)uVar5;
      (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x18)) + 2)) = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x10)) + 0));
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x10)) + 0)),(short)uVar5)));
      bVar4 = F_00aed270(&(*(undefined * PTR32 *)(gen_frame + 0x18)),param_2);
      if (bVar4 != 0) {
        if (*(char *)((int)this + 0x19) == '\0') {
          *(undefined1 *)((int)this + 0x19) = 1;
        }
        (*(char *)(gen_frame + 0x1f)) = '\x01';
        pfVar6 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        (*(float *)(gen_frame + 0x0)) = *pfVar6;
        (*(float *)(gen_frame + 0x4)) = pfVar6[1];
        (*(float *)(gen_frame + 0x8)) = pfVar6[2];
        bVar4 = F_0054ccb0(&(*(float *)(gen_frame + 0x0)),param_2);
        if (bVar4 == 0) {
          *(undefined4 *)((int)this + 0xc0) = *param_2;
          *(undefined4 *)((int)this + 0xc4) = param_2[1];
          *(undefined4 *)((int)this + 200) = param_2[2];
          *param_1 = 1;
        }
      }
    }
    if (*(char *)((int)this + 0x19) != '\0') {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = *(int *)(iVar2 + 0x204);
      (*(float *)(gen_frame + 0x10)) = gen_bits2f(iVar2);
      if ((((((iVar3 == 0) || (iVar3 == 5)) || (iVar3 == 1)) &&
           ((*(char *)((int)this + 0x1a) == '\0' && (*(char *)((int)this + 0x29) == '\0')))) &&
          ((*(char *)(iVar2 + 0x1cc) == '\0' &&
           ((*(char *)(iVar2 + 0x1cd) == '\0' && (*(char *)(iVar2 + 0x359) == '\0')))))) &&
         ((*(char *)(gen_frame + 0x1f)) == '\0')) {
        puVar7 = (undefined4 *)((int)this + 0xc0);
        bVar4 = F_0054ccb0((*(undefined * PTR32 *)(gen_frame + 0x14)),puVar7);
        if (bVar4 == 0) {
          uVar5 = F_00a5feb0(*(undefined * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x10));
          F_0046f4a0(&(*(float *)(gen_frame + 0x0)),puVar7,uVar5);
          fVar1 = (float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) +
                         (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)));
          (*(float *)(gen_frame + 0x10)) = fVar1;
          fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
          (*(float *)(gen_frame + 0x10)) = fVar1;
          if ((float10)1 <= (float10)fVar1) {
            *param_2 = *puVar7;
            param_2[1] = *(undefined4 *)((int)this + 0xc4);
            param_2[2] = *(undefined4 *)((int)this + 200);
            *param_1 = 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00aee900 */
uint F_00aee900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaee900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int * piVar4;
  int * piVar5;
  undefined3 extraout_var_03 = 0;
  undefined4 * extraout_EAX = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  undefined3 extraout_var_08 = 0;
  undefined3 extraout_var_09 = 0;
  undefined * pvVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = param_2;
  puVar3 = param_1;
  if (((((*(char *)((int)this + 0x1a) != '\0') || (*(char *)((int)this + 0x29) != '\0')) ||
       (puVar3 = *(undefined4 * PTR32 *)((int)this + 0x10), *(char *)(puVar3 + 0x73) != '\0')) ||
      (*(char *)((int)puVar3 + 0x1cd) != '\0')) ||
     (((*(char *)((int)this + 0x273) != '\0' ||
       (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar1 == 0)) &&
      (puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))),
      *(char *)(puVar3 + 0x62) != '\x03')))) goto LAB_00aeecc0;
  if ((*(int *)((int)this + 0xa8) != -0x20000000) &&
     (uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa8),
                           *(undefined4 *)((int)this + 0xac)), uVar2 != 0)) {
    F_00ae9f10(this,*(undefined4 *)((int)this + 0xa8),*(undefined4 *)((int)this + 0xac));
  }
  puVar3 = (undefined4 *)0x0;
  pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x20)));
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = pvVar6;
  (*(char *)(gen_frame + 0x3d)) = '\0';
  (*(char *)(gen_frame + 0x3e)) = '\0';
  if ((((*(char *)((int)this + 0x17) == '\0') && (*(char *)((int)this + 0x18) == '\0')) &&
      (*(char *)((int)this + 0x19) == '\0')) && (*(char *)((int)this + 0x1a) == '\0')) {
    if ((char)param_3 == '\0') {
      bVar1 = F_00ae9ca0(this);
      puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
      if (bVar1 != 0) {
        uVar2 = F_00b6afa0();
        puVar3 = (undefined4 *)0x0;
        if (uVar2 == 0) {
LAB_00aeea57: ;
          if (*(char *)((int)this + 0x17) == '\0') {
            *(undefined1 *)((int)this + 0x17) = 1;
            *(undefined1 *)((int)this + 0x275) = 0;
            bVar1 = F_00aee270(this);
            puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_02,bVar1)));
            if ((bVar1 != 0) && (*(char *)((int)this + 0x14) == '\0')) {
              *(undefined1 *)((int)this + 0x173) = 1;
            }
            goto LAB_00aeea80;
          }
        }
        else {
          bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
          puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
          if (bVar1 == 0) goto LAB_00aeea57;
          bVar1 = F_00ae9d70(this);
          puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_01,bVar1)));
          if (bVar1 == 0) {
            puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_01,1)));
            *(undefined1 *)((int)this + 0x17) = 1;
            *(undefined1 *)((int)this + 0x275) = 0;
            (*(char *)(gen_frame + 0x3d)) = '\x01';
          }
LAB_00aeea80: ;
          if (*(char *)((int)this + 0x17) == '\0') goto LAB_00aeea9b;
        }
        if ((*(char *)((int)this + 0x14) == '\0') || (*(int *)((int)this + 0x164) != 4)) {
          puVar3 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar3) >> 8),*(undefined1 *)((int)this + 0x16))));
          *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)((int)this + 0x16);
        }
      }
    }
LAB_00aeea9b: ;
    if ((*(char *)((int)this + 0x175) != '\0') && (*(char *)((int)this + 0x18) == '\0')) {
      *(undefined1 *)((int)this + 0x18) = 1;
      (*(char *)(gen_frame + 0x3e)) = '\x01';
      F_00aff250((int)this + 0x180);
      piVar4 = (int *)F_00475fa0(*(undefined4 *)((int)this + 0xa0),
                                   *(undefined4 *)((int)this + 0xa4));
      puVar3 = (undefined4 *)0x0;
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      if (piVar4 != (int *)0x0) {
        piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar5;
        uVar8 = REFG(undefined4, 0x108cc50);
        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
        F_0042cc20(((undefined1 *)(gen_frame + 0x40)),uVar2,uVar8);
        puVar9 = ((undefined1 *)(gen_frame + 0x40));
        uVar8 = 0x34;
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x34)))));
        F_0046a880(pvVar6,uVar8,puVar9);
        uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x40)));
        puVar3 = (undefined4 *)uVar7;
        pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      }
    }
  }
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00aeeb3f: ;
    if (*(char *)((int)this + 0x18) == '\0') {
      if (*(char *)((int)this + 0x17) != '\0') {
        uVar2 = F_00b6afa0();
        puVar3 = (undefined4 *)0x0;
        if (uVar2 != 0) {
          bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
          puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_09,bVar1)));
        }
      }
      goto LAB_00aeecc0;
    }
  }
  else {
    uVar2 = F_00b6afa0();
    puVar3 = (undefined4 *)0x0;
    if (uVar2 == 0) goto LAB_00aeeb3f;
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_03,bVar1)));
    if (bVar1 == 0) goto LAB_00aeeb3f;
  }
  F_00aed7a0(this);
  (*(char *)(gen_frame + 0x3f)) = '\0';
  puVar3 = extraout_EAX;
  if (*(char *)((int)this + 0x17) != '\0') {
    uVar2 = F_00b6afa0();
    puVar3 = (undefined4 *)0x0;
    if (uVar2 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_04,bVar1)));
      if (bVar1 != 0) {
        puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_04,(*(char *)(gen_frame + 0x3d)))));
        (*(char *)(gen_frame + 0x3f)) = (*(char *)(gen_frame + 0x3d));
        if ((*(char *)(gen_frame + 0x3d)) == '\0') {
          if (*(char *)((int)pvVar6 + 0x44) != '\0') {
            uVar2 = F_00ae72e0(((undefined1 *)(gen_frame + 0x0)));
            bVar1 = F_0054ccb0(pvVar6,uVar2);
            puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_05,bVar1)));
            if (bVar1 != 0) goto LAB_00aeeb9e;
          }
          (*(char *)(gen_frame + 0x3f)) = '\x01';
        }
      }
    }
  }
LAB_00aeeb9e: ;
  if (*(char *)((int)this + 0x18) == '\0') goto LAB_00aeec13;
  (*(char *)(gen_frame + 0x3f)) = (*(char *)(gen_frame + 0x3e));
  if ((*(char *)(gen_frame + 0x3e)) == '\0') {
    if (*(char *)((int)pvVar6 + 0x44) == '\0') {
      piVar4 = (int *)F_00ae7310(this,((undefined1 *)(gen_frame + 0x0)));
      (*(int * PTR32 *)(gen_frame + 0x34)) = piVar4;
      pvVar6 = (undefined *)F_00ae9430(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x10)));
      bVar1 = F_0054ccb0(pvVar6,(*(int * PTR32 *)(gen_frame + 0x34)));
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x38));
      if (bVar1 != 0) {
        puVar3 = *(undefined4 * PTR32 *)((int)this + 0x230);
        if (*(undefined4 * PTR32 *)((int)this + 0x23c) != puVar3) {
          *(undefined4 * PTR32 *)((int)this + 0x23c) = puVar3;
        }
LAB_00aeec13: ;
        if ((*(char *)(gen_frame + 0x3f)) == '\0') goto LAB_00aeecc0;
      }
    }
    else {
      uVar2 = F_00ae7310(this,((undefined1 *)(gen_frame + 0x10)));
      bVar1 = F_0054ccb0(pvVar6,uVar2);
      puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_06,bVar1)));
      if (bVar1 != 0) goto LAB_00aeec13;
    }
  }
  bVar1 = F_00aee0e0(this);
  puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_07,bVar1)));
  if (bVar1 != 0) {
    if ((*(char *)((int)this + 0x14) != '\0') && (*(char *)((int)pvVar6 + 0x44) != '\0')) {
      uVar2 = F_00aede70(this,((undefined1 *)(gen_frame + 0x10)));
      bVar1 = F_0054ccb0(pvVar6,uVar2);
      puVar3 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_08,bVar1)));
      if (bVar1 != 0) goto LAB_00aeecc0;
    }
    puVar3 = (undefined4 *)F_00aede70(this,((undefined1 *)(gen_frame + 0x10)));
    *(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = *puVar3;
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c))[1] = puVar3[1];
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c))[2] = puVar3[2];
    *(undefined4 *)((int)this + 0xc0) = *(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
    *(undefined4 *)((int)this + 0xc4) = (*(undefined4 * PTR32 *)(gen_frame + 0x2c))[1];
    *(undefined4 *)((int)this + 200) = (*(undefined4 * PTR32 *)(gen_frame + 0x2c))[2];
    *(undefined1 *)(*(undefined4 * PTR32 *)(gen_frame + 0x30)) = 1;
    if (*(char *)((int)this + 0x18) != '\0') {
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0x230);
      *(undefined4 * PTR32 *)((int)this + 0x238) = puVar3;
    }
  }
LAB_00aeecc0: ;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)puVar3;
}

/* ref: FUN_00aeece0 */
float F_00aeece0(unsigned int gen_a0)
{
  GEN_ENTER(0xaeece0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  undefined * this_00;
  undefined * this_01;
  float * pfVar3;
  float10 fVar4;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
  this_01 = (undefined *)F_00b6afa0();
  pfVar3 = (float *)F_00a5feb0(this_01);
  fVar1 = *pfVar3;
  fVar2 = pfVar3[2];
  pfVar3 = (float *)F_00a5feb0(this_00);
  fVar4 = ((float10)GEN_TOD(atan2((float10)(float)((float10)fVar1 - (float10)*pfVar3),
                          (float10)(float)((float10)fVar2 - (float10)pfVar3[2]))));
  fVar4 = F_00aeb260((float)fVar4);
  return (float)fVar4;
}

/* ref: FUN_00aef6e0 */
float10 F_00aef6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaef6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  float10 in_ST0 = 0;
  float10 extraout_ST0 = 0;
  float10 extraout_ST0_00 = 0;
  float10 fVar3;
  float10 extraout_ST1 = 0;
  float fVar4;
  
  if (*(char *)((int)param_1 + 0x1a) == '\0') {
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if ((bVar1 != 0) && (uVar2 = F_00b6afa0(), uVar2 != 0)) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      if ((bVar1 == 0) ||
         (((uVar2 = F_00b6afa0(), uVar2 == 0 || (*(char *)((int)param_1 + 0xb0) == '\0')) ||
          (*(char *)((int)param_1 + 0x14) == '\0')))) {
        *(undefined1 *)param_2 = 0;
      }
      else {
        *(undefined1 *)param_2 = 1;
      }
    }
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    in_ST0 = extraout_ST0;
    if (((bVar1 != 0) && (uVar2 = F_00b6afa0(), in_ST0 = extraout_ST0_00, uVar2 != 0)) &&
       ((*(char *)((int)param_1 + 0xb0) != '\0' && (*(char *)((int)param_1 + 0x1b) != '\0')))) {
      fVar4 = F_00aeece0(param_1);
      fVar3 = F_00aeb260(((float)GEN_TOF(((float10)fVar4 -
                                  (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10)))
                                                     + 0xb0)))))));
      in_ST0 = extraout_ST1;
      if ((float10)*(float *)&REFG(undefined, 0x1339b30) <= (float10)((float)GEN_TOF(ABS(fVar3)))) {
        *(undefined1 *)param_2 = 0;
      }
    }
  }
  return in_ST0;
}

/* ref: FUN_00aef7c0 */
byte F_00aef7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaef7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 uVar7;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
  uVar7 = 0x2f;
  bVar3 = false;
  bVar2 = false;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1)));
  bVar4 = F_00b7aac0(this_00,uVar7);
  if (bVar4 == 0) {
    F_00424770(REFG(void * PTR32, 0x137104c));
    bVar4 = *(byte *)((int)this + 0x16);
    if (*(char *)((int)this + 0x274) != '\0') {
      bVar4 = 1;
      bVar3 = false;
      bVar2 = true;
    }
  }
  else {
    bVar4 = 1;
    bVar3 = true;
    bVar2 = false;
  }
  if ((((*(char *)((int)this + 0x17) == '\0') && (*(char *)((int)this + 0x18) == '\0')) &&
      (*(char *)((int)this + 0x19) == '\0')) && (*(char *)((int)this + 0x1a) == '\0')) {
    return bVar4;
  }
  if (*(char *)((int)this + 0x1a) != '\0') {
    return *(byte *)((int)this + 299);
  }
  if (!bVar3) {
    if (((*(char *)((int)this + 0x17) == '\0') ||
        ((uVar6 = F_00b6afa0(), uVar6 != 0 && (bVar5 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar5 != 0))))
       && (bVar5 = F_00ae9d70(this), bVar5 == 0)) {
      return bVar4;
    }
    if ((*(char *)((int)this + 0x14) != '\0') && (!bVar2)) {
      return *(byte *)((int)this + 0x1c);
    }
    return bVar4;
  }
  return bVar4;
}

/* ref: FUN_00aef890 */
unsigned int F_00aef890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaef890u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  float10 fVar2;
  
  if ((char)param_2 != '\0') {
    fVar2 = F_00aeb260(*(float *)(param_1 + 0xd0));
    uVar1 = F_00ae9230(*(undefined4 *)(param_1 + 0x10),(float)fVar2,param_3);
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x6c))) = uVar1;
  }
  return 0;
}

/* ref: FUN_00aef8e0 */
unsigned int F_00aef8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaef8e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ecx;
  byte bVar5;
  uint uVar6;
  float10 fVar7;
  uint local_8;
  
  iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x10);
  if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
    fVar1 = *(float *)(iVar3 + 0x34);
    iVar4 = *(int *)(iVar3 + 0x10);
    fVar2 = *(float *)(iVar4 + 0xb0);
    uVar6 = local_8 >> 8;
    local_8 = local_8 & 0xffffff00;
    if (((char)(*(uint *)&gen_args[1]) == '\0') &&
       ((((iVar4 == 0 || (bVar5 = F_00a9f620(iVar4), bVar5 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
        (*(char *)(iVar3 + 0x1cc) == '\0')))) {
      local_8 = CONCAT31((int3)uVar6,1);
    }
    if ((*(char *)(iVar3 + 0x5d) != '\0') && (*(char *)((*(int *)&gen_args[0]) + 0x172) == '\0')) {
      *(undefined1 *)((*(int *)&gen_args[0]) + 0x172) = 1;
    }
    iVar4 = *(int *)((*(int *)&gen_args[0]) + 0x10);
    in_ecx = *(int *)(iVar4 + 0x10);
    if (((in_ecx == 0) || (bVar5 = F_00a9f620(in_ecx), bVar5 == 0)) || (REFG(char, 0x14c0a64) == '\0')) {
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),*(undefined1 *)(iVar4 + 0x1cc));
    }
    else {
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
    }
    fVar7 = F_00aeb260((float)((float10)fVar1 - (float10)fVar2));
    uVar6 = F_00ae9300(*(undefined4 *)((*(int *)&gen_args[0]) + 0x10),(float)fVar7,local_8,(*(undefined4 *)&gen_args[2]));
    *(uint *)(iVar3 + 0x70) = uVar6;
    return 0;
  }
  return 0;
}

/* ref: FUN_00aef9b0 */
byte F_00aef9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaef9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  byte bVar8;
  uint uVar9;
  undefined * this_00;
  uint uVar10;
  float * pfVar11;
  bool bVar12;
  float10 fVar13;
  double dVar14;
  
  iVar4 = *(int *)((int)this + 0x10);
  if (((*(char *)((int)this + 0x14) == '\0') ||
      ((!(*(float *)&REFG(undefined, 0x1088114) < *(float *)((int)this + 0x2c)) &&
       (*(char *)(iVar4 + 100) == '\0')))) ||
     (((iVar5 = *(int *)(iVar4 + 0x204), iVar5 != 0 &&
       (((iVar5 == 3 || (iVar5 == 4)) || (iVar5 == 2)))) && (*(char *)(iVar4 + 0x24b) == '\0')))) {
LAB_00aefb10: ;
    uVar9 = *(uint *)((int)this + 0x10);
    iVar5 = *(int *)(uVar9 + 0x204);
    if ((iVar5 == 0) ||
       ((((iVar5 != 3 && (iVar5 != 4)) && (iVar5 != 2)) || (*(char *)(uVar9 + 0x24b) != '\0'))))
    goto LAB_00aefbff;
  }
  else {
    if (((*(char *)((int)this + 0x17) != '\0') || (*(char *)((int)this + 0x18) != '\0')) ||
       ((*(char *)((int)this + 0x19) != '\0' ||
        (bVar8 = (byte)param_1, *(char *)((int)this + 0x1a) != '\0')))) {
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(*(int *)((int)this + 0x164));
      bVar8 = F_00aedd90(this);
      if ((bVar8 != 0) && ((*(float *)(gen_frame + 0x1c)) == 0.0)) {
        if (*(char *)((int)this + 0x18) != '\0') {
          bVar8 = F_00ae7340(this);
          if (bVar8 == 0) {
            if ((*(int *)((int)this + 0x238) != *(int *)((int)this + 0x23c)) ||
               (*(int *)((int)this + 0x230) == *(int *)((int)this + 0x238))) goto LAB_00aefa88;
          }
          else if (*(char *)(iVar4 + 100) != '\0') goto LAB_00aefa88;
          goto LAB_00aefaee;
        }
LAB_00aefa88: ;
        uVar9 = F_00aedf40(this);
        if (uVar9 != 0) {
          uVar9 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
          this_00 = (undefined *)F_00aedf40(this);
          uVar10 = F_00a5feb0(this_00);
          F_0046f4a0(&(*(float *)(gen_frame + 0x0)),uVar10,uVar9);
          dVar14 = F_0054cd20(&(*(float *)(gen_frame + 0x0)));
          (*(float *)(gen_frame + 0x1c)) = (float)dVar14;
          dVar14 = F_00ae9ff0(this);
          if ((float10)(*(float *)(gen_frame + 0x1c)) <= (float10)dVar14 + (float10)REFG(double, 0x1088130)) {
            bVar8 = F_00aee0e0(this);
            goto LAB_00aefaec;
          }
        }
      }
      goto LAB_00aefb10;
    }
LAB_00aefaec: ;
    if (bVar8 != 0) goto LAB_00aefb10;
LAB_00aefaee: ;
    *(undefined1 *)(iVar4 + 0x66) = 1;
    bVar12 = GEN_ISNAN(*(float *)((int)this + 0x78)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
    if (bVar12 != (bVar12 || *(float *)((int)this + 0x78) == REFG(float, 0x10ebbf0))) {
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined1 *)(iVar4 + 100) = 0;
      goto LAB_00aefb10;
    }
  }
  iVar5 = *(int *)((int)this + 0x10);
  uVar9 = *(uint *)(iVar5 + 0x204);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  if ((uVar9 == 0) ||
     ((((uVar9 != 3 && (uVar9 != 4)) && (uVar9 != 2)) || (*(char *)(iVar5 + 0x24b) != '\0')))) {
    (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x80);
    (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x88);
  }
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) +
                 ((float10)0 * (float10)0 + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar13 = (float10)fVar1;
  bVar12 = GEN_ISNAN(fVar13) || GEN_ISNAN((float10)0);
  uVar9 = uVar9 & 0xff;
  if (bVar12 == (bVar12 || fVar13 == (float10)0)) {
    pfVar11 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    fVar1 = *pfVar11;
    fVar13 = (float10)(*(float *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + fVar13);
    fVar2 = pfVar11[1];
    fVar7 = (float10)*(double *)&REFG(undefined, 0x108bec8);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 + fVar7);
    fVar3 = pfVar11[2];
    uVar9 = 1;
    fVar6 = (float10)(*(float *)(gen_frame + 0x8));
    *(undefined1 *)(iVar4 + 0x30) = 1;
    *(undefined1 *)(iVar4 + 100) = 1;
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar3 + fVar6);
    *(float *)(iVar4 + 0x20) = (float)((float10)fVar1 + fVar13);
    *(float *)(iVar4 + 0x24) = (float)((float10)fVar2 + fVar7);
    *(float *)(iVar4 + 0x28) = (float)((float10)fVar3 + fVar6);
  }
LAB_00aefbff: ;
  return (byte)uVar9;
}

/* ref: FUN_00aefc10 */
byte F_00aefc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xaefc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float10 fVar5;
  
  if (param_5 == 0) {
    return 1;
  }
  (*(float *)(gen_frame + 0x44)) = *param_1;
  fVar1 = (float)((float10)*param_3 - (float10)*param_1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x40)) = param_1[1];
  fVar2 = (float)((float10)param_3[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x3c)) = param_1[2];
  fVar3 = (float)((float10)param_3[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                 (float10)fVar3 * (float10)fVar3)));
  (*(float *)(gen_frame + 0x48)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x48)) = fVar1;
  fVar5 = (float10)fVar1;
  bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)0);
  if (bVar4 == (bVar4 || fVar5 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1087f04);
    F_0054ce40(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x20)),param_5);
    if (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 <= (*(float *)(gen_frame + 0x4)))) {
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x10ebbf0);
    }
    F_0054ce40(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x20)),param_4);
    if (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 <= (*(float *)(gen_frame + 0x4)))) {
      (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x10ebbf0);
    }
    if (!((float10)(*(float *)(gen_frame + 0x4c)) * (float10)(*(float *)(gen_frame + 0x48)) < (float10)0)) {
      fVar1 = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x0)) = fVar1;
      fVar2 = (float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x4)) = fVar2;
      fVar3 = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x3c)));
      (*(float *)(gen_frame + 0x8)) = fVar3;
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x18)) = fVar3;
      fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                     (float10)fVar3 * (float10)fVar3)));
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar5 = (float10)fVar1;
      bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)0);
      if (bVar4 == (bVar4 || fVar5 == (float10)0)) {
        F_004bd580(&(*(float *)(gen_frame + 0x10)));
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x28)) +
                       ((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x20)) +
                       (float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        fVar5 = F_00aeb350(fVar1);
        (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS(fVar5)));
        (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)param_6)));
        if (!((float10)((float)GEN_TOF(ABS((float10)param_6))) < (float10)((float)GEN_TOF(ABS(fVar5))))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00aefdf0 */
byte F_00aefdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaefdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  
  bVar1 = F_00aea290(this,param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  if ((param_3 != 0) && (bVar1 = F_00aea290(this,param_1,param_3), bVar1 == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aefe70 */
uint F_00aefe70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaefe70u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int * piVar1;
  uint uVar2;
  float10 fVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (((uVar2 == 1) && (*(char *)(param_1 + 8) != '\0')) && (param_5 != (float *)0x0)) {
    fVar3 = F_00aeb260(*param_5);
    param_4 = (float)fVar3;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    uVar2 = F_00ae9230(*(undefined4 *)(param_1 + 4),param_4,param_3);
    *(uint *)(param_2 + 0x4c) = uVar2;
    return uVar2;
  }
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return 0;
}

/* ref: FUN_00aefee0 */
uint F_00aefee0(unsigned int gen_a0)
{
  GEN_ENTER(0xaefee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0xa6) == '\0') ||
     (iVar1 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
    iVar1 = (int)this + 0x80;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar1 + 0x10)) {
    uVar2 = F_00a65a30(this,0);
    return uVar2;
  }
  uVar2 = F_00a65a30(this,1);
  return uVar2;
}

/* ref: FUN_00aeff30 */
uint F_00aeff30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaeff30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar4 = REFG(float, 0x10ebd20);
  iVar5 = *(int *)((int)this + 0x10);
  if ((*(char *)(iVar5 + 0x1cc) != '\0') || (*(char *)(iVar5 + 0x1cd) != '\0')) {
    (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(iVar5 + 0x20);
    pfVar8 = (float *)F_00a5feb0(*(undefined * PTR32 *)(iVar5 + 0x10));
    pfVar7 = (*(float * PTR32 *)(gen_frame + 0x2c));
    fVar4 = *pfVar8;
    uVar6 = *(undefined4 *)((int)this + 0x10);
    fVar1 = pfVar8[2];
    fVar2 = *(*(float * PTR32 *)(gen_frame + 0x2c));
    (*(float *)(gen_frame + 0x0)) = fVar2;
    fVar3 = (*(float * PTR32 *)(gen_frame + 0x2c))[2];
    (*(float *)(gen_frame + 0x8)) = fVar3;
    fVar4 = (float)((float10)fVar2 - (float10)fVar4);
    (*(float *)(gen_frame + 0x10)) = fVar4;
    fVar1 = (float)((float10)fVar3 - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar9 = (float10)fVar1;
    fVar10 = (float10)fVar4;
    fVar4 = (float)(fVar10 * fVar10 + fVar9 * fVar9);
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar4)));
    fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar4)));
    fVar9 = F_00aebbc0(uVar6,fVar4,(uint)pfVar7);
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
    *param_1 = (*(float *)(gen_frame + 0x10));
    param_1[1] = 0.0;
    param_1[2] = (*(float *)(gen_frame + 0x18));
    F_004bd580(param_1);
    fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x2c)))));
    *param_1 = (float)(fVar9 * (float10)*param_1);
    param_1[1] = (float)((float10)param_1[1] * fVar9);
    param_1[2] = (float)(fVar9 * (float10)param_1[2]);
    return (uint)param_1;
  }
  (*(float * PTR32 *)(gen_frame + 0x2c)) = (float *)(iVar5 + 0x20);
  if (((*(char *)(iVar5 + 0x359) != '\0') && (*(char *)(iVar5 + 100) != '\0')) &&
     (*(char *)(iVar5 + 0x5c) != '\0')) {
    pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)(iVar5 + 0x10));
    (*(float *)(gen_frame + 0x10)) = *pfVar7;
    (*(float *)(gen_frame + 0x14)) = pfVar7[1];
    (*(float *)(gen_frame + 0x18)) = pfVar7[2];
    F_0046f4a0(&(*(float *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x10)));
    *param_1 = (*(float *)(gen_frame + 0x0));
    param_1[1] = (*(float *)(gen_frame + 0x4));
    param_1[2] = (*(float *)(gen_frame + 0x8));
    return (uint)param_1;
  }
  fVar9 = (float10)*(float *)&REFG(undefined, 0x14c0a7c);
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) * fVar9)));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar9 * (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  if (fVar4 < *(float *)(REFG(int, 0x137104c) + 0x1198)) {
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar4)));
  }
  else {
    (*(float * PTR32 *)(gen_frame + 0x2c)) = ((float *)(uintptr_t)gen_fl2bits((float)(*(float *)(REFG(int, 0x137104c) + 0x1198))));
  }
  fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x2c)))));
  *param_1 = (float)(fVar9 * (float10)fVar1);
  param_1[1] = (float)(fVar9 * (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 * fVar9);
  return (uint)param_1;
}

/* ref: FUN_00af04a0 */
uint F_00af04a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf04a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)((int)this + 0xa4) == '\0') {
    F_00af5b90(this,param_1,0,(float)(float10)0,0);
  }
  iVar1 = (int)this + 0xd0;
  if (*(char *)((int)this + 0xa6) == '\0') {
    iVar1 = (int)this + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 4);
  iVar1 = (int)this + 0xd0;
  if (*(char *)((int)this + 0xa6) == '\0') {
    iVar1 = (int)this + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x25) = 1;
  iVar1 = (int)this + 0xd0;
  if (*(char *)((int)this + 0xa6) == '\0') {
    iVar1 = (int)this + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 4);
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x78) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00af0530 */
uint F_00af0530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf0530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_EAX = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  cVar2 = *(char *)((int)this + 0xa4);
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  if ((cVar2 != '\0') || (*(char *)((int)this + 0xa5) != '\0')) {
    iVar5 = (int)this + 0xd0;
    if (*(char *)((int)this + 0xa6) == '\0') {
      iVar5 = (int)this + 0x80;
    }
    if ((cVar2 == '\0') &&
       ((*(char *)(iVar5 + 0x24) != '\0' ||
        ((*(int *)((int)this + 0x14) == 0 && (bVar3 = F_00aead60(this), bVar3 == 0)))))) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x1c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x1c)), 1, 3),1);
      fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[1]))) -
                     (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24))))));
      (*(float *)(gen_frame + 0xc)) = fVar1;
      if (*(double *)&REFG(undefined, 0x1094810) < (double)fVar1) {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x1c)), 1, 3) << 8;
      }
      F_00af5b90(this,param_1,(*(uint *)(gen_frame + 0x1c)),(float)(float10)0,0);
    }
    if (((*(char *)((int)this + 0xa5) == '\0') && (*(char *)((int)this + 0xa4) != '\0')) &&
       (*(char *)((int)this + 0x94) == '\0')) {
      F_00aeafa0(this,((undefined1 *)(gen_frame + 0x0)),param_1);
      F_00af04a0(this,((undefined1 *)(gen_frame + 0x0)));
    }
    iVar5 = (int)this + 0xd0;
    if (*(char *)((int)this + 0xa6) == '\0') {
      iVar5 = (int)this + 0x80;
    }
    iVar6 = (int)this + 0xd0;
    *(undefined4 *)(iVar5 + 0x30) = *param_1;
    *(undefined4 *)(iVar5 + 0x34) = param_1[1];
    *(undefined4 *)(iVar5 + 0x38) = param_1[2];
    cVar2 = *(char *)((int)this + 0xa6);
    if (cVar2 == '\0') {
      iVar6 = (int)this + 0x80;
    }
    if (*(int *)(iVar6 + 0x40) == 0 && *(int *)(iVar6 + 0x44) == 0) {
      iVar5 = (int)this + 0xd0;
      if (cVar2 == '\0') {
        iVar5 = (int)this + 0x80;
      }
      *(undefined4 *)(iVar5 + 0x48) = GEN_FLT_TO(*(undefined4 *)(iVar5 + 0x48), REFG(float, 0x10ebc30));
    }
    else {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      iVar5 = (int)this + 0xd0;
      if (cVar2 == '\0') {
        iVar5 = (int)this + 0x80;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar5 + 0x40);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(undefined4 *)(iVar5 + 0x44));
      uVar7 = F_00427d90();
      uVar8 = (ulonglong)(*(uint *)(gen_frame + 0x1c)) << 0x20;
      if (CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))),(*(undefined4 *)(gen_frame + 0x8))) < uVar7) {
        iVar5 = (int)this + 0xd0;
        if (*(char *)((int)this + 0xa6) == '\0') {
          iVar5 = (int)this + 0x80;
        }
        (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar5 + 0x40);
        (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(undefined4 *)(iVar5 + 0x44));
        uVar8 = F_00427d90();
        uVar8 = uVar8 - (longlong)CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))),(*(undefined4 *)(gen_frame + 0x8)));
      }
      uVar4 = (uint)(uVar8 >> 0x20);
      iVar5 = (int)this + 0xd0;
      if (*(char *)((int)this + 0xa6) == '\0') {
        iVar5 = (int)this + 0x80;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = (int)uVar8;
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar4 & 0x7fffffff);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar4 & 0x80000000);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      *(float *)(iVar5 + 0x48) =
           ((float)GEN_TOF(((-(float10)(longlong)(((ulonglong)uVar4 & 0x80000000) << 0x20) +
                   (float10)(uVar8 & 0x7fffffffffffffff)) / (float10)*(double *)&REFG(undefined, 0x10912a8))));
    }
    iVar5 = (int)this + 0xd0;
    if (*(char *)((int)this + 0xa6) == '\0') {
      iVar5 = (int)this + 0x80;
    }
    *(undefined4 *)(iVar5 + 0x18) = param_1[1];
    uVar8 = F_00427d90();
    *(ulonglong *)((int)this + 0x78) = uVar8;
    uVar4 = (int)this + 0xd0;
    if (*(char *)((int)this + 0xa6) == '\0') {
      uVar4 = (int)this + 0x80;
    }
    *(undefined1 *)(uVar4 + 0x26) = 1;
  }
  return uVar4;
}

/* ref: FUN_00af0770 */
uint F_00af0770(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaf0770u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pvVar5;
  float * pfVar6;
  undefined4 extraout_EAX = 0;
  uint3 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  
  uVar4 = *(uint *)((int)param_1 + 0x10);
  if ((uVar4 != 0) && (pvVar5 = *(undefined * PTR32 *)(uVar4 + 0x10), pvVar5 != (undefined *)0x0)) {
    *(undefined1 *)((int)param_1 + 0x49) = 1;
    puVar3 = (undefined4 *)F_00a5feb0(pvVar5);
    *(undefined4 *)((int)param_1 + 0x20) = *puVar3;
    *(undefined4 *)((int)param_1 + 0x24) = puVar3[1];
    *(undefined4 *)((int)param_1 + 0x28) = puVar3[2];
    uVar4 = F_00a9fbf0(pvVar5);
    if ((char)uVar4 != '\0') {
      bVar2 = F_00a9f620(pvVar5);
      if (bVar2 == 0) {
        iVar1 = *(int *)((int)param_1 + 0x10);
        if ((undefined4 *)(iVar1 + 0x20) != (undefined4 *)0x0) {
          *(undefined4 *)((int)param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
          *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
          *(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
        }
      }
    }
    uVar4 = *(uint *)((int)param_1 + 0x18);
    if (uVar4 != 0xe0000000) {
      pvVar5 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar4,*(undefined4 *)((int)param_1 + 0x1c));
      uVar4 = 0;
      if (pvVar5 != (undefined *)0x0) {
        pfVar6 = (float *)F_00a5feb0(pvVar5);
        fVar8 = (float10)((float)GEN_TOF(((float10)pfVar6[1] - (float10)*(float *)((int)param_1 + 0x24))));
        fVar9 = (float10)((float)GEN_TOF(((float10)*pfVar6 - (float10)*(float *)((int)param_1 + 0x20))));
        fVar10 = (float10)((float)GEN_TOF(((float10)pfVar6[2] - (float10)*(float *)((int)param_1 + 0x28))));
        fVar11 = F_00aeb160(param_1);
        uVar7 = (uint3)((uint)extraout_EAX >> 8);
        if ((float10)0 <
            (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar10 * fVar10 +
                                                                  (fVar9 * fVar9 + fVar8 * fVar8)))))))
                            - (float10)fVar11)))) {
          uVar4 = CONCAT31(uVar7,1);
        }
        else {
          uVar4 = (uint)uVar7 << 8;
        }
        *(char *)((int)param_1 + 0x4a) = (char)uVar4;
      }
    }
    if (*(char *)((int)param_1 + 0x49) != '\0') {
      *(float *)((int)param_1 + 0x40) = param_2;
      *(undefined1 *)((int)param_1 + 0x48) = 1;
    }
  }
  return uVar4;
}

/* ref: FUN_00af08a0 */
uint F_00af08a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaf08a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int in_ecx;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (in_ecx = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))), uVar2 = 0, in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x49) != '\0') {
        *(undefined1 *)(param_1 + 0x4b) = 1;
        *(undefined4 *)(param_1 + 0x30) = *param_2;
        *(undefined4 *)(param_1 + 0x34) = param_2[1];
        *(undefined4 *)(param_1 + 0x38) = param_2[2];
        return (uint)param_2;
      }
      uVar2 = F_00aeb1c0(param_1,param_2,param_3,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af0900 */
byte F_00af0900(unsigned int gen_a0)
{
  GEN_ENTER(0xaf0900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar1;
  
  if (!(*(float *)(param_1 + 4) <= 0.0)) {
    fVar1 = F_00aeb3f0(param_1);
    if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar1)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00af0940 */
byte F_00af0940(unsigned int gen_a0)
{
  GEN_ENTER(0xaf0940u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  float10 fVar2;
  
  bVar1 = F_00afef80(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
  if ((bVar1 != 0) && (!((*(float *)(gen_frame + 0x4)) <= 0.0))) {
    fVar2 = F_00aeb3f0((uint)((undefined1 *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
    if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar2)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00af09b0 */
byte F_00af09b0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xaf09b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_6 == *(float *)&REFG(undefined, 0x1088114))) {
    (*(uint *)(gen_frame + 0x78)) = 0;
    do {
      if ((*(uint *)(gen_frame + 0x78)) == 0) {
        (*(undefined4 *)(gen_frame + 0x60)) = 0x2000;
        (*(undefined4 *)(gen_frame + 0x64)) = 0x2000;
        puVar3 = &(*(undefined4 *)(gen_frame + 0x60));
      }
      else {
        (*(undefined4 *)(gen_frame + 0x68)) = 0x2800;
        (*(undefined4 *)(gen_frame + 0x6c)) = 0x2000;
        puVar3 = &(*(undefined4 *)(gen_frame + 0x68));
      }
      (*(float *)(gen_frame + 0x50)) = param_1;
      (*(float *)(gen_frame + 0x54)) = param_2;
      (*(float *)(gen_frame + 0x58)) = param_3;
      (*(float *)(gen_frame + 0x5c)) = param_4;
      if ((GEN_ISNAN(param_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN(param_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_8 == *(float *)&REFG(undefined, 0x1088114))) {
        bVar1 = F_005517f0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),(uint)param_7,param_8,&(*(float *)(gen_frame + 0x50)),
                             param_5,(undefined4)gen_fl2bits(param_6),1,puVar3);
      }
      else {
        bVar1 = F_00551620(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),param_7,&(*(float *)(gen_frame + 0x50)),param_5,
                             param_6,1,puVar3);
      }
      if ((*(uint *)(gen_frame + 0x78)) == 0) {
        if (bVar1 == 0) {
          return 0;
        }
        if (((uint)param_7[0xf] >> 0xb & 1) == 0) break;
        (*(undefined4 *)(gen_frame + 0x20)) = *param_7;
        (*(undefined4 *)(gen_frame + 0x24)) = param_7[1];
        (*(undefined4 *)(gen_frame + 0x28)) = param_7[2];
        (*(undefined4 *)(gen_frame + 0x30)) = param_7[3];
        (*(undefined4 *)(gen_frame + 0x34)) = param_7[4];
        (*(undefined4 *)(gen_frame + 0x38)) = param_7[5];
        (*(undefined4 *)(gen_frame + 0x40)) = param_7[6];
        (*(undefined4 *)(gen_frame + 0x44)) = param_7[7];
        (*(undefined4 *)(gen_frame + 0x48)) = param_7[8];
        (*(undefined4 *)(gen_frame + 0x10)) = param_7[9];
        (*(undefined4 *)(gen_frame + 0x14)) = param_7[10];
        (*(byte *)(gen_frame + 0x7f)) = 0;
        (*(char *)(gen_frame + 0x7e)) = '\x01';
        (*(undefined4 *)(gen_frame + 0x18)) = param_7[0xb];
        F_00ae7ca0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x10)),0);
        (*(undefined4 *)(gen_frame + 0x74)) = (*(undefined4 *)(gen_frame + 0x4));
        (*(undefined4 *)(gen_frame + 0x70)) = param_7[0xf];
        bVar1 = (*(byte *)(gen_frame + 0x7f));
      }
      else if ((*(char *)(gen_frame + 0x7e)) != '\0') {
        *(char *)((int)param_7 + 0x82) = (*(char *)(gen_frame + 0x7e));
        param_7[0x21] = (*(undefined4 *)(gen_frame + 0x74));
        param_7[0x22] = (*(undefined4 *)(gen_frame + 0x70));
      }
      uVar2 = (*(uint *)(gen_frame + 0x78)) + 1;
      (*(uint *)(gen_frame + 0x78)) = uVar2;
    } while (uVar2 < 2);
    if (bVar1 != 0) {
      *(undefined1 *)((int)param_7 + 0x62) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00af0bb0 */
byte F_00af0bb0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf0bb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  byte * param_7 = (byte *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  char * param_9 = (char *)(uintptr_t)gen_a8;
  undefined1 * param_10 = (undefined1 *)(uintptr_t)gen_a9;
  float * param_11 = (float *)(uintptr_t)gen_a10;
  undefined1 * param_12 = (undefined1 *)(uintptr_t)gen_a11;
  uint param_13 = (uint)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar8;
  uint uVar9;
  float * this;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = REFG(float, 0x10ebbf0);
  fVar15 = *param_1;
  (*(float *)(gen_frame + 0x210)) = REFG(float, 0x1339ba4);
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  (*(double *)(gen_frame + 0x1b8)) = (double)((float10)REFG(float, 0x1339ba4) + (float10)param_3);
  (*(float *)(gen_frame + 0x210)) = (float)((float10)REFG(float, 0x1339ba4) + (float10)param_3);
  (*(float *)(gen_frame + 0x1c4)) = 0.0;
  (*(float *)(gen_frame + 0x1c8)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x1cc)) = 0.0;
  (*(float *)(gen_frame + 0xe4)) = fVar15;
  (*(float *)(gen_frame + 0xe8)) = fVar13;
  (*(float *)(gen_frame + 0xec)) = fVar14;
  if (param_7 != (byte *)0x0) {
    *param_7 = 0;
  }
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = 0;
  }
  if (param_12 != (undefined1 *)0x0) {
    *param_12 = 0;
  }
  bVar10 = GEN_ISNAN(param_5) || GEN_ISNAN(fVar3);
  if (bVar10 != (bVar10 || param_5 == fVar3)) {
    param_5 = REFG(float, 0x10ebcac);
  }
  (*(bool *)(gen_frame + 0x21f)) = true;
  bVar10 = GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0);
  if (bVar10) {
    (*(bool *)(gen_frame + 0x21f)) = false;
  }
  (*(bool *)(gen_frame + 0x21f)) = !bVar10;
  (*(undefined1 *)(gen_frame + 0x207)) = 0;
  (*(byte *)(gen_frame + 0x21e)) = 0;
  (*(float *)(gen_frame + 0x100)) = 0.0;
  (*(float *)(gen_frame + 0x104)) = 0.0;
  (*(float *)(gen_frame + 0x108)) = 0.0;
  (*(float *)(gen_frame + 0x10c)) = 0.0;
  (*(float *)(gen_frame + 0x110)) = 0.0;
  (*(float *)(gen_frame + 0x114)) = 0.0;
  (*(float *)(gen_frame + 0x118)) = 0.0;
  (*(float *)(gen_frame + 0x11c)) = 0.0;
  (*(float *)(gen_frame + 0x120)) = 0.0;
  (*(float *)(gen_frame + 0x124)) = 0.0;
  (*(float *)(gen_frame + 0x128)) = 0.0;
  (*(float *)(gen_frame + 0x12c)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x130)) = 0;
  (*(undefined4 *)(gen_frame + 0x134)) = 0;
  (*(undefined4 *)(gen_frame + 0x138)) = 0;
  (*(float *)(gen_frame + 0x150)) = 0.0;
  (*(float *)(gen_frame + 0x154)) = 0.0;
  (*(float *)(gen_frame + 0x158)) = 0.0;
  (*(undefined2 *)(gen_frame + 0x160)) = 0;
  (*(undefined1 *)(gen_frame + 0x162)) = 0;
  (*(float *)(gen_frame + 0x170)) = 0.0;
  (*(float *)(gen_frame + 0x174)) = 0.0;
  (*(float *)(gen_frame + 0x178)) = 0.0;
  (*(undefined2 *)(gen_frame + 0x180)) = 0;
  (*(undefined1 *)(gen_frame + 0x182)) = 0;
  (*(float *)(gen_frame + 0x184)) = 0.0;
  (*(float *)(gen_frame + 0x188)) = 0.0;
  uVar9 = 0;
  if (param_13 != 0) {
    do {
      uVar1 = uVar9 + 1;
      (*(float *)(gen_frame + 0x218)) = gen_bits2f(uVar1);
      fVar11 = (float10)(int)uVar1;
      if ((int)uVar1 < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x218)) = gen_bits2f(uVar9);
      (*(float *)(gen_frame + 0xe8)) = (float)(fVar11 * (float10)param_2 + (float10)param_1[1]);
      fVar11 = (float10)(int)uVar9;
      if ((int)uVar9 < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar15 = (float)(fVar11 * (float10)param_2 + (float10)param_5);
      (*(float *)(gen_frame + 0x218)) = fVar15;
      bVar8 = F_00aeb520(&(*(float *)(gen_frame + 0xe4)),&(*(float *)(gen_frame + 0x1c4)),fVar15,&(*(float *)(gen_frame + 0x100)),(float)(float10)0);
      (*(byte *)(gen_frame + 0x21e)) = bVar8;
    } while ((bVar8 == 0) && (uVar9 = uVar1, uVar1 < param_13));
  }
  (*(byte *)(gen_frame + 0x206)) = 0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(float *)(gen_frame + 0x40)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(float *)(gen_frame + 0x48)) = 0.0;
  (*(float *)(gen_frame + 0x4c)) = 0.0;
  (*(float *)(gen_frame + 0x50)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(float *)(gen_frame + 0x58)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined2 *)(gen_frame + 0x90)) = 0;
  ((undefined1 *)(gen_frame + 0x92))[0] = 0;
  (*(float *)(gen_frame + 0xa0)) = 0.0;
  (*(float *)(gen_frame + 0xa4)) = 0.0;
  (*(float *)(gen_frame + 0xa8)) = 0.0;
  (*(undefined2 *)(gen_frame + 0xb0)) = 0;
  ((undefined1 *)(gen_frame + 0xb2))[0] = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  if ((*(bool *)(gen_frame + 0x21f)) == false) {
    (*(float *)(gen_frame + 0x1ec)) = 0.0;
    uVar9 = 0;
    do {
      fVar11 = (float10)param_2;
      if ((*(byte *)(gen_frame + 0x21e)) == 0) {
        if (param_13 <= uVar9) break;
        iVar2 = uVar9 + 1;
        (*(float *)(gen_frame + 0x218)) = gen_bits2f(iVar2);
        fVar12 = (float10)iVar2;
        if (iVar2 < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x194)) = (float)(fVar12 * fVar11 + (float10)param_1[1]);
      }
      else {
        if (4 < uVar9) break;
        if (uVar9 == 0) {
          fVar12 = (float10)(*(float *)(gen_frame + 0x104)) + (float10)(*(float *)(gen_frame + 0x210));
        }
        else {
          fVar12 = (float10)(*(float *)(gen_frame + 0x1ec));
        }
        fVar15 = (float)(fVar12 + (float10)REFG(double, 0x1091858));
        (*(float *)(gen_frame + 0x208)) = fVar15;
        fVar13 = (float)((float10)param_1[1] + fVar11);
        (*(float *)(gen_frame + 0x218)) = fVar13;
        if ((float10)fVar15 < (float10)fVar13) {
          (*(float *)(gen_frame + 0x194)) = fVar13;
        }
        else {
          (*(float *)(gen_frame + 0x194)) = fVar15;
        }
      }
      (*(float *)(gen_frame + 0x218)) = gen_bits2f(uVar9);
      fVar12 = (float10)(int)uVar9;
      if ((int)uVar9 < 0) {
        fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar15 = (float)(fVar12 * fVar11 + (float10)param_5);
      (*(float *)(gen_frame + 0x218)) = fVar15;
      bVar8 = F_00af09b0((*(float *)(gen_frame + 0xe4)),(*(float *)(gen_frame + 0x194)),(*(float *)(gen_frame + 0xec)),param_3,&(*(float *)(gen_frame + 0x1c4)),fVar15,&(*(float *)(gen_frame + 0x30)),
                           (float)(float10)0);
      (*(byte *)(gen_frame + 0x206)) = bVar8;
      if ((*(byte *)(gen_frame + 0x21e)) == 0) {
        if (bVar8 != 0) break;
      }
      else {
        if ((bVar8 == 0) || (GEN_ISNAN((*(float *)(gen_frame + 0x70))) == (GEN_ISNAN((*(float *)(gen_frame + 0x70))) || (*(float *)(gen_frame + 0x70)) == 0.0))) break;
        (*(undefined1 *)(gen_frame + 0x207)) = 1;
        if ((char)param_14 != '\0') {
          if (param_12 != (undefined1 *)0x0) {
            *param_12 = 1;
          }
          return 0;
        }
        bVar8 = F_00afef80(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x1d0)),&(*(float *)(gen_frame + 0x1d4)),((float *)(gen_frame + 0x1d8)));
        if (bVar8 == 0) {
          return 0;
        }
        fVar15 = (float)((float10)((float *)(gen_frame + 0x1d8))[0] * (float10)((float *)(gen_frame + 0x1d8))[0] +
                        (float10)(*(float *)(gen_frame + 0x1d0)) * (float10)(*(float *)(gen_frame + 0x1d0)));
        (*(float *)(gen_frame + 0x218)) = fVar15;
        fVar15 = ((float)GEN_TOF(SQRT((float10)fVar15)));
        (*(float *)(gen_frame + 0x218)) = fVar15;
        fVar15 = (float)((float10)fVar15 / (float10)(*(float *)(gen_frame + 0x1d4)));
        (*(float *)(gen_frame + 0x218)) = fVar15;
        fVar11 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar15,5)));
        fVar15 = (float)fVar11;
        (*(float *)(gen_frame + 0x218)) = fVar15;
        fVar11 = F_00aeb260(fVar15);
        (*(float *)(gen_frame + 0x218)) = (float)fVar11;
        fVar11 = (float10)(float)fVar11;
        if (((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar11)) && !((float10)0 <= fVar11)) ||
           ((*(float *)(gen_frame + 0x208)) = ((float)GEN_TOF(ABS(fVar11))), *(double *)&REFG(undefined, 0x10ec4a8) < (double)((float)GEN_TOF(ABS(fVar11))))) {
          (*(bool *)(gen_frame + 0x21f)) = true;
          if (param_12 != (undefined1 *)0x0) {
            *param_12 = 1;
          }
          break;
        }
        (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x30));
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
        (*(undefined4 *)(gen_frame + 0xf0)) = (*(undefined4 *)(gen_frame + 0x3c));
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x40));
        (*(undefined4 *)(gen_frame + 0xf8)) = (*(undefined4 *)(gen_frame + 0x44));
        (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x48));
        (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0x4c));
        (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x50));
        (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x54));
        (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x58));
        (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x5c));
        F_00ae7ca0(&(*(float *)(gen_frame + 0x1a0)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0xf0)),&(*(float *)(gen_frame + 0xd0)),&(*(undefined4 *)(gen_frame + 0x0)),0);
        fVar11 = (float10)param_3;
        (*(float *)(gen_frame + 0x10)) = (float)(fVar11 * (float10)(*(float *)(gen_frame + 0x1d0)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x1d4)) * fVar11);
        (*(float *)(gen_frame + 0x18)) = (float)(fVar11 * (float10)((float *)(gen_frame + 0x1d8))[0]);
        fVar15 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1a0)) + (float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x1d0))))));
        (*(float *)(gen_frame + 0x1f0)) = fVar15;
        fVar13 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1a4)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x1d4)) * fVar11))));
        (*(float *)(gen_frame + 0x1f4)) = fVar13;
        fVar14 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1a8)) + (float10)(float)(fVar11 * (float10)((float *)(gen_frame + 0x1d8))[0]))));
        ((float *)(gen_frame + 0x1f8))[0] = fVar14;
        fVar15 = (float)((float10)fVar15 - (float10)(*(float *)(gen_frame + 0x20)));
        (*(float *)(gen_frame + 0xc0)) = fVar15;
        fVar14 = (float)((float10)fVar14 - (float10)(*(float *)(gen_frame + 0x28)));
        ((float *)(gen_frame + 0xc8))[0] = fVar14;
        fVar11 = (float10)fVar14;
        fVar12 = (float10)fVar15;
        fVar15 = (float)(fVar12 * fVar12 + fVar11 * fVar11);
        (*(float *)(gen_frame + 0x208)) = fVar15;
        fVar15 = ((float)GEN_TOF(SQRT((float10)fVar15)));
        (*(float *)(gen_frame + 0x208)) = fVar15;
        fVar11 = ((float10)GEN_TOD(GEN_X87MATH((float10)(*(float *)(gen_frame + 0x218)),4)));
        (*(float *)(gen_frame + 0x218)) = (float)fVar11;
        fVar15 = (float)((float10)(float)fVar11 * (float10)fVar15);
        (*(float *)(gen_frame + 0x208)) = fVar15;
        fVar15 = ((float)GEN_TOF(ABS((float10)fVar15)));
        (*(float *)(gen_frame + 0x218)) = fVar15;
        if ((float10)REFG(float, 0x10ebd94) < (float10)fVar15) {
          (*(float *)(gen_frame + 0x208)) = REFG(float, 0x10ebd94);
        }
        fVar15 = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x208)));
        (*(float *)(gen_frame + 0x1ec)) = fVar15;
        if ((float10)fVar15 <= (float10)(*(float *)(gen_frame + 0x194))) {
          (*(float *)(gen_frame + 0x1ec)) = (float)((float10)param_2 + (float10)(*(float *)(gen_frame + 0x194)));
        }
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
  (*(byte *)(gen_frame + 0x20e)) = 0;
  (*(char *)(gen_frame + 0x217)) = '\0';
  (*(char *)(gen_frame + 0x20f)) = '\0';
  if ((*(byte *)(gen_frame + 0x21e)) != 0) {
    if (param_10 != (undefined1 *)0x0) {
      *param_10 = 1;
    }
    if (param_11 != (float *)0x0) {
      *param_11 = (*(float *)(gen_frame + 0x100));
      param_11[1] = (*(float *)(gen_frame + 0x104));
      param_11[2] = (*(float *)(gen_frame + 0x108));
      param_11[3] = (*(float *)(gen_frame + 0x10c));
      param_11[4] = (*(float *)(gen_frame + 0x110));
      param_11[5] = (*(float *)(gen_frame + 0x114));
      param_11[6] = (*(float *)(gen_frame + 0x118));
      param_11[7] = (*(float *)(gen_frame + 0x11c));
      param_11[8] = (*(float *)(gen_frame + 0x120));
      param_11[9] = (*(float *)(gen_frame + 0x124));
      param_11[10] = (*(float *)(gen_frame + 0x128));
      param_11[0xb] = (*(float *)(gen_frame + 0x12c));
      param_11[0x11] = 0.0;
      param_11[0xf] = (*(float *)(gen_frame + 0x13c));
      param_11[0x10] = (*(float *)(gen_frame + 0x140));
      F_00c9f100(&(*(float *)(gen_frame + 0x100)),param_11 + 0xc);
      param_11[0x11] = (*(float *)(gen_frame + 0x144));
      param_11[0x14] = (*(float *)(gen_frame + 0x150));
      param_11[0x15] = (*(float *)(gen_frame + 0x154));
      param_11[0x16] = (*(float *)(gen_frame + 0x158));
      *(undefined1 *)(param_11 + 0x18) = (undefined1)(*(undefined2 *)(gen_frame + 0x160));
      *(undefined1 *)((int)param_11 + 0x62) = (*(undefined1 *)(gen_frame + 0x162));
      *(undefined1 *)((int)param_11 + 0x61) = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x160)) + 1));
      param_11[0x1c] = (*(float *)(gen_frame + 0x170));
      param_11[0x1d] = (*(float *)(gen_frame + 0x174));
      param_11[0x1e] = (*(float *)(gen_frame + 0x178));
      *(undefined1 *)(param_11 + 0x20) = (undefined1)(*(undefined2 *)(gen_frame + 0x180));
      *(undefined1 *)((int)param_11 + 0x82) = (*(undefined1 *)(gen_frame + 0x182));
      param_11[0x21] = (*(float *)(gen_frame + 0x184));
      *(undefined1 *)((int)param_11 + 0x81) = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x180)) + 1));
      param_11[0x22] = (*(float *)(gen_frame + 0x188));
    }
  }
  if ((*(bool *)(gen_frame + 0x21f)) == false) {
    if ((*(byte *)(gen_frame + 0x206)) == 0) goto LAB_00af1c26;
    (*(bool *)(gen_frame + 0x21f)) = true;
    if ((*(byte *)(gen_frame + 0x21e)) == 0) {
      (*(char *)(gen_frame + 0x217)) = '\x01';
      this = &(*(float *)(gen_frame + 0x30));
    }
    else {
      (*(float *)(gen_frame + 0x218)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x104)));
      if ((float10)(float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x104))) <=
          (float10)(*(float *)(gen_frame + 0x210)) + (float10)REFG(double, 0x1091858)) {
        (*(char *)(gen_frame + 0x20f)) = '\x01';
        bVar8 = F_00afef80(&(*(float *)(gen_frame + 0x100)),&(*(float *)(gen_frame + 0x1f0)),&(*(float *)(gen_frame + 0x1f4)),((float *)(gen_frame + 0x1f8)));
        if ((bVar8 == 0) || (!GEN_ISNAN((*(float *)(gen_frame + 0x1f4))) && !(0.0 < (*(float *)(gen_frame + 0x1f4))))) {
LAB_00af187f: ;
          bVar8 = F_00afef80(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x1f0)),&(*(float *)(gen_frame + 0x1f4)),((float *)(gen_frame + 0x1f8)));
          if ((bVar8 != 0) && (!((*(float *)(gen_frame + 0x1f4)) <= 0.0))) {
            fVar11 = F_00aeb3f0((uint)&(*(float *)(gen_frame + 0x1f0)));
            (*(float *)(gen_frame + 0x210)) = (float)fVar11;
            if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar11)) goto LAB_00af190f;
          }
          (*(bool *)(gen_frame + 0x21f)) = false;
        }
        else {
          fVar11 = F_00aeb3f0((uint)&(*(float *)(gen_frame + 0x1f0)));
          (*(float *)(gen_frame + 0x210)) = (float)fVar11;
          fVar11 = (float10)(float)fVar11;
          if ((!GEN_ISNAN(fVar11) && !GEN_ISNAN((float10)REFG(float, 0x1339ba0))) && !(fVar11 < (float10)REFG(float, 0x1339ba0)))
          goto LAB_00af187f;
          (*(bool *)(gen_frame + 0x21f)) = false;
        }
        (*(bool *)(gen_frame + 0x21f)) = false;
        this = &(*(float *)(gen_frame + 0x100));
      }
      else {
        bVar8 = F_00afef80(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x1f0)),&(*(float *)(gen_frame + 0x1f4)),((float *)(gen_frame + 0x1f8)));
        if ((bVar8 != 0) && (!((*(float *)(gen_frame + 0x1f4)) <= 0.0))) {
          fVar11 = F_00aeb3f0((uint)&(*(float *)(gen_frame + 0x1f0)));
          (*(float *)(gen_frame + 0x210)) = (float)fVar11;
          if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar11)) {
LAB_00af190f: ;
            (*(char *)(gen_frame + 0x217)) = '\x01';
          }
        }
        this = &(*(float *)(gen_frame + 0x30));
      }
    }
    if (param_9 != (char *)0x0) {
      *param_9 = (*(bool *)(gen_frame + 0x21f));
    }
    if ((*(char *)(gen_frame + 0x217)) != '\0') {
      this[0x14] = 0.0;
      this[0x15] = GEN_FLT_TO(this[0x15], REFG(float, 0x1087f04));
      this[0x16] = 0.0;
    }
    bVar8 = F_00afef80(this,&(*(float *)(gen_frame + 0x1d0)),&(*(float *)(gen_frame + 0x1d4)),((float *)(gen_frame + 0x1d8)));
    if ((bVar8 != 0) &&
       (fVar15 = ((float)GEN_TOF(((float10)((float *)(gen_frame + 0x1d8))[0] * (float10)(*(float *)(gen_frame + 0x1cc)) +
                        ((float10)(*(float *)(gen_frame + 0x1d0)) * (float10)(*(float *)(gen_frame + 0x1c4)) +
                        (float10)(*(float *)(gen_frame + 0x1d4)) * (float10)(*(float *)(gen_frame + 0x1c8)))))), (*(float *)(gen_frame + 0x210)) = fVar15,
       (float10)*(float *)&REFG(undefined, 0x10ebbe8) < (float10)fVar15)) {
      bVar8 = 0;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = (*(float *)(gen_frame + 0x1d0));
      param_6[1] = (*(float *)(gen_frame + 0x1d4));
      param_6[2] = ((float *)(gen_frame + 0x1d8))[0];
    }
    if (param_7 != (byte *)0x0) {
      *param_7 = bVar8;
    }
    if ((*(bool *)(gen_frame + 0x21f)) == false) {
      *param_4 = (*(float *)(gen_frame + 0x104));
    }
    else {
      fVar15 = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(double *)(gen_frame + 0x1b8)));
      (*(float *)(gen_frame + 0x210)) = fVar15;
      *param_4 = fVar15;
      if (((*(byte *)(gen_frame + 0x21e)) != 0) && ((float10)fVar15 < (float10)(*(float *)(gen_frame + 0x104)))) {
        *param_4 = (*(float *)(gen_frame + 0x104));
      }
      F_00c9f380(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0xc0)),((undefined1 *)(gen_frame + 0xc4)),((float *)(gen_frame + 0xc8)));
      (*(undefined4 *)(gen_frame + 0x190)) = (*(undefined4 *)(gen_frame + 0x3c));
      (*(float *)(gen_frame + 0x194)) = (*(float *)(gen_frame + 0x40));
      (*(undefined4 *)(gen_frame + 0x198)) = (*(undefined4 *)(gen_frame + 0x44));
      (*(float *)(gen_frame + 0x1a0)) = 0.0;
      (*(float *)(gen_frame + 0x1a4)) = REFG(float, 0x10ebbf0);
      (*(float *)(gen_frame + 0x1a8)) = 0.0;
      bVar8 = F_00ae8170(param_1,&(*(float *)(gen_frame + 0x1a0)),&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x190)),&(*(undefined4 *)(gen_frame + 0xf0)),0);
      if ((bVar8 != 0) && ((float10)*param_4 < (float10)(*(float *)(gen_frame + 0xf4)))) {
        *param_4 = (*(float *)(gen_frame + 0xf4));
      }
      (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x30));
      (*(float *)(gen_frame + 0xd4)) = *param_4;
      (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0xf0)) = (*(undefined4 *)(gen_frame + 0x3c));
      (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x40));
      (*(undefined4 *)(gen_frame + 0xf8)) = (*(undefined4 *)(gen_frame + 0x44));
      (*(float *)(gen_frame + 0x1a0)) = (*(float *)(gen_frame + 0x48));
      (*(float *)(gen_frame + 0x1a4)) = (*(float *)(gen_frame + 0x4c));
      (*(float *)(gen_frame + 0x1a8)) = (*(float *)(gen_frame + 0x50));
      (*(undefined4 *)(gen_frame + 0x190)) = (*(undefined4 *)(gen_frame + 0x54));
      (*(float *)(gen_frame + 0x194)) = (*(float *)(gen_frame + 0x58));
      (*(undefined4 *)(gen_frame + 0x198)) = (*(undefined4 *)(gen_frame + 0x5c));
      F_00ae7ca0(&(*(float *)(gen_frame + 0x1f0)),&(*(float *)(gen_frame + 0xd0)),&(*(undefined4 *)(gen_frame + 0xf0)),&(*(float *)(gen_frame + 0x1a0)),&(*(undefined4 *)(gen_frame + 0x190)),0);
      if ((float10)(*(float *)(gen_frame + 0x1f4)) < (float10)*param_4) {
        *param_4 = (*(float *)(gen_frame + 0x1f4));
      }
      if (((*(char *)(gen_frame + 0x20f)) == '\0') || ((*(char *)(gen_frame + 0x217)) != '\0')) {
        (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0x1f4));
        (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0x1f0));
        (*(float *)(gen_frame + 0xa8)) = ((float *)(gen_frame + 0x1f8))[0];
        (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xb0)) + 0)) = 1;
        (*(undefined2 *)(gen_frame + 0xb0)) = CONCAT11((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xb0)) + 1)),1);
      }
    }
    if (param_8 != (float *)0x0) {
      fVar15 = this[0xf];
      *param_8 = *this;
      param_8[1] = this[1];
      param_8[2] = this[2];
      param_8[3] = this[3];
      param_8[4] = this[4];
      param_8[5] = this[5];
      param_8[6] = this[6];
      param_8[7] = this[7];
      param_8[8] = this[8];
      param_8[9] = this[9];
      param_8[10] = this[10];
      param_8[0xb] = this[0xb];
      param_8[0xf] = fVar15;
      fVar15 = this[0x10];
      param_8[0x11] = 0.0;
      param_8[0x10] = fVar15;
      F_00c9f100(this,param_8 + 0xc);
      fVar3 = this[0x21];
      uVar4 = *(undefined1 *)(this + 0x18);
      fVar15 = this[0x14];
      fVar13 = this[0x15];
      fVar14 = this[0x16];
      uVar5 = *(undefined1 *)((int)this + 0x61);
      param_8[0x11] = this[0x11];
      uVar6 = *(undefined1 *)((int)this + 0x62);
      param_8[0x14] = fVar15;
      fVar15 = this[0x1c];
      param_8[0x15] = fVar13;
      fVar13 = this[0x1d];
      param_8[0x16] = fVar14;
      fVar14 = this[0x1e];
      *(undefined1 *)(param_8 + 0x18) = uVar4;
      uVar4 = *(undefined1 *)(this + 0x20);
      *(undefined1 *)((int)param_8 + 0x61) = uVar5;
      uVar5 = *(undefined1 *)((int)this + 0x81);
      *(undefined1 *)((int)param_8 + 0x62) = uVar6;
      uVar6 = *(undefined1 *)((int)this + 0x82);
      param_8[0x1c] = fVar15;
      param_8[0x1d] = fVar13;
      param_8[0x1e] = fVar14;
      param_8[0x21] = fVar3;
      *(undefined1 *)(param_8 + 0x20) = uVar4;
      fVar15 = this[0x22];
      *(undefined1 *)((int)param_8 + 0x81) = uVar5;
      *(undefined1 *)((int)param_8 + 0x82) = uVar6;
      param_8[0x22] = fVar15;
    }
    (*(byte *)(gen_frame + 0x20e)) = 1;
    goto LAB_00af1c26;
  }
  if (param_8 != (float *)0x0) {
    *param_8 = (*(float *)(gen_frame + 0x100));
    param_8[1] = (*(float *)(gen_frame + 0x104));
    param_8[2] = (*(float *)(gen_frame + 0x108));
    param_8[3] = (*(float *)(gen_frame + 0x10c));
    param_8[4] = (*(float *)(gen_frame + 0x110));
    param_8[5] = (*(float *)(gen_frame + 0x114));
    param_8[6] = (*(float *)(gen_frame + 0x118));
    param_8[7] = (*(float *)(gen_frame + 0x11c));
    param_8[8] = (*(float *)(gen_frame + 0x120));
    param_8[9] = (*(float *)(gen_frame + 0x124));
    param_8[10] = (*(float *)(gen_frame + 0x128));
    param_8[0xb] = (*(float *)(gen_frame + 0x12c));
    param_8[0x11] = 0.0;
    param_8[0xf] = (*(float *)(gen_frame + 0x13c));
    param_8[0x10] = (*(float *)(gen_frame + 0x140));
    F_00c9f100(&(*(float *)(gen_frame + 0x100)),param_8 + 0xc);
    param_8[0x11] = (*(float *)(gen_frame + 0x144));
    param_8[0x14] = (*(float *)(gen_frame + 0x150));
    param_8[0x15] = (*(float *)(gen_frame + 0x154));
    param_8[0x16] = (*(float *)(gen_frame + 0x158));
    *(undefined1 *)(param_8 + 0x18) = (undefined1)(*(undefined2 *)(gen_frame + 0x160));
    *(undefined1 *)((int)param_8 + 0x61) = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x160)) + 1));
    *(undefined1 *)((int)param_8 + 0x62) = (*(undefined1 *)(gen_frame + 0x162));
    param_8[0x1c] = (*(float *)(gen_frame + 0x170));
    param_8[0x1d] = (*(float *)(gen_frame + 0x174));
    param_8[0x1e] = (*(float *)(gen_frame + 0x178));
    *(undefined1 *)(param_8 + 0x20) = (undefined1)(*(undefined2 *)(gen_frame + 0x180));
    *(undefined1 *)((int)param_8 + 0x81) = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x180)) + 1));
    *(undefined1 *)((int)param_8 + 0x82) = (*(undefined1 *)(gen_frame + 0x182));
    param_8[0x21] = (*(float *)(gen_frame + 0x184));
    param_8[0x22] = (*(float *)(gen_frame + 0x188));
  }
  if ((*(byte *)(gen_frame + 0x21e)) != 0) {
    fVar15 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x158)) * (float10)(*(float *)(gen_frame + 0x158)) +
                    ((float10)(*(float *)(gen_frame + 0x150)) * (float10)(*(float *)(gen_frame + 0x150)) + (float10)(*(float *)(gen_frame + 0x154)) * (float10)(*(float *)(gen_frame + 0x154))))))
    ;
    (*(float *)(gen_frame + 0x210)) = fVar15;
    fVar15 = ((float)GEN_TOF(SQRT((float10)fVar15)));
    (*(float *)(gen_frame + 0x210)) = fVar15;
    fVar11 = (float10)fVar15;
    bVar10 = GEN_ISNAN(fVar11) || GEN_ISNAN((float10)0);
    if ((bVar10 == (bVar10 || fVar11 == (float10)0)) ||
       (bVar8 = F_00c9f380(&(*(float *)(gen_frame + 0x100)),&(*(float *)(gen_frame + 0x1b0)),&(*(float *)(gen_frame + 0x1b4)),&(*(double *)(gen_frame + 0x1b8))), bVar8 == 0)) {
      (*(float *)(gen_frame + 0x1b0)) = (*(float *)(gen_frame + 0x150));
      (*(float *)(gen_frame + 0x1b4)) = (*(float *)(gen_frame + 0x154));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x1b8)) + 0)) = (*(float *)(gen_frame + 0x158));
      (*(double *)(gen_frame + 0x1b8)) = gen_bits2d((ulonglong)(uint)gen_fl2bits((*(float *)(gen_frame + 0x158))));
      fVar15 = (*(float *)(gen_frame + 0x158));
LAB_00af169c: ;
      bVar8 = 1;
      fVar3 = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x1b8)) + 0)) * (float10)(*(float *)(gen_frame + 0x1cc)) +
                     ((float10)(*(float *)(gen_frame + 0x1b4)) * (float10)(*(float *)(gen_frame + 0x1c8)) + (float10)(*(float *)(gen_frame + 0x1b0)) * (float10)(*(float *)(gen_frame + 0x1c4)))
                     )));
      (*(float *)(gen_frame + 0x210)) = fVar3;
      fVar13 = (*(float *)(gen_frame + 0x1b0));
      fVar14 = (*(float *)(gen_frame + 0x1b4));
      if ((float10)*(float *)&REFG(undefined, 0x10ebbe8) < (float10)fVar3) goto LAB_00af16c6;
    }
    else {
      fVar15 = (*(float *)((char *)&(*(double *)(gen_frame + 0x1b8)) + 0));
      if (((GEN_ISNAN((*(float *)(gen_frame + 0x1b0))) == (GEN_ISNAN((*(float *)(gen_frame + 0x1b0))) || (*(float *)(gen_frame + 0x1b0)) == 0.0)) ||
          (GEN_ISNAN((*(float *)(gen_frame + 0x1b4))) == (GEN_ISNAN((*(float *)(gen_frame + 0x1b4))) || (*(float *)(gen_frame + 0x1b4)) == 0.0))) ||
         (fVar13 = (*(float *)(gen_frame + 0x1b0)), fVar14 = (*(float *)(gen_frame + 0x1b4)),
         GEN_ISNAN((*(float *)((char *)&(*(double *)(gen_frame + 0x1b8)) + 0))) == (GEN_ISNAN((*(float *)((char *)&(*(double *)(gen_frame + 0x1b8)) + 0))) || (*(float *)((char *)&(*(double *)(gen_frame + 0x1b8)) + 0)) == 0.0)))
      goto LAB_00af169c;
LAB_00af16c6: ;
      bVar8 = 0;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = fVar13;
      param_6[1] = fVar14;
      param_6[2] = fVar15;
    }
    if (param_7 != (byte *)0x0) {
      *param_7 = bVar8;
    }
    *param_4 = (*(float *)(gen_frame + 0x104));
  }
  (*(byte *)(gen_frame + 0x20e)) = (*(byte *)(gen_frame + 0x21e));
LAB_00af1c26: ;
  if (param_8 != (float *)0x0) {
    *(char *)(param_8 + 0x18) = (*(char *)(gen_frame + 0x217));
    *(char *)((int)param_8 + 0x61) = (*(char *)(gen_frame + 0x20f));
    *(undefined1 *)((int)param_8 + 0x81) = (*(undefined1 *)(gen_frame + 0x207));
  }
  return (*(byte *)(gen_frame + 0x20e));
}

/* ref: FUN_00af1c50 */
float10 F_00af1c50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf1c50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  
  iVar2 = *(int *)(param_3 + 0x50);
  local_c = REFG(float, 0x1087f04);
  local_8 = 0.0;
  if (((iVar2 != 3) && (iVar2 != 7)) && ((iVar2 == 4 || ((iVar2 == 8 || (param_2 < 0.0)))))) {
    local_c = REFG(float, 0x10ebbf0);
  }
  if (*(char *)(param_3 + 0x3d) != '\0') {
    return (float10)param_2;
  }
  fVar1 = *(float *)(param_3 + 0x28);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
    fVar4 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1;
  }
  else {
    fVar1 = *(float *)(param_3 + 0x30);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
      iVar2 = *(int *)(param_3 + 0x38);
      if (iVar2 != 1) {
        if ((((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
              ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) && (2 < iVar2)) &&
           ((iVar2 < 6 && (0.0 <= *(float *)(param_1 + 0x1b0))))) {
          fVar1 = *(float *)(param_1 + 0x1bc);
          fVar4 = F_00aeb260(((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1c0) - (float10)fVar1))));
          param_2 = (float)fVar4;
          if ((float10)local_c * (float10)param_2 < (float10)0) {
            fVar4 = (float10)(float)((float10)param_2 * (float10)REFG(double, 0x1094890));
            fVar5 = ((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)((float)GEN_TOF(ABS(fVar4)))) *
                    (float10)local_c;
            param_2 = ((float)GEN_TOF(((fVar5 + fVar5) + fVar4)));
          }
          fVar4 = F_0054e630(param_1 + 0x16c,*(float *)(param_1 + 0x1b0),1);
          fVar4 = F_00aeb260((float)((float10)(float)fVar4 * (float10)param_2 + (float10)fVar1));
          fVar4 = F_00aeb260(((float)GEN_TOF(((float10)(float)fVar4 -
                                      (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xb0)))))));
          return (float10)(float)fVar4;
        }
        goto LAB_00af1e81;
      }
      fVar4 = F_00ae8460(param_2,*(float *)(param_1 + 0x1d4),*(float *)(param_1 + 0x80),fVar1);
      fVar4 = (float10)((float)GEN_TOF(ABS(fVar4)));
    }
    else {
      if (((*(int *)(param_1 + 0x10) == 0) ||
          (bVar3 = F_00a9f620(*(int *)(param_1 + 0x10)), bVar3 == 0)) || (REFG(char, 0x14c0a65) == '\0'))
      goto LAB_00af1e81;
      fVar4 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)*(float *)&REFG(undefined, 0x14c0a80);
    }
  }
  local_8 = (float)fVar4;
  if ((GEN_ISNAN(local_c) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
      ((GEN_ISNAN(local_c) || GEN_ISNAN(REFG(float, 0x1087f04))) || local_c == REFG(float, 0x1087f04))) {
    local_8 = (float)((float10)local_c * (float10)local_8);
  }
LAB_00af1e81: ;
  return (float10)local_8;
}

/* ref: FUN_00af1e90 */
uint F_00af1e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf1e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined4 * puVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  undefined3 extraout_var_00 = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar2);
    if (((((bVar2 != 0) && (REFG(char, 0x14c0a40) != '\0')) && (*(char *)((int)this + 0x420) != '\0')) &&
        (((*((byte *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x10) + 0x8e))) & 0x40) == 0 ||
         ((*(int *)((int)this + 0x204) != 0 && (*(char *)((int)this + 0x24a) == '\0')))))) &&
       (REFG(char, 0x14a7383) == '\0')) {
      puVar4 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar4;
      uVar5 = F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(uVar5 + 4);
      uVar5 = F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(uVar5 + 8);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
      ((byte *)(gen_frame + 0x4))[4] = (byte)REFG(float, 0x14c0b20);
      ((byte *)(gen_frame + 0x4))[5] = (*(undefined1 *)((char *)&REFG(float, 0x14c0b20) + 1));
      ((byte *)(gen_frame + 0x4))[6] = (*(undefined1 *)((char *)&REFG(float, 0x14c0b20) + 2));
      ((byte *)(gen_frame + 0x4))[7] = (*(undefined1 *)((char *)&REFG(float, 0x14c0b20) + 3));
      bVar2 = F_00aec930(this);
      ((byte *)(gen_frame + 0x4))[8] = bVar2 | (byte)param_1;
      bVar3 = 0;
      if (*(char *)((int)this + 0x359) != '\0') {
        bVar3 = 8;
      }
      ((byte *)(gen_frame + 0x4))[9] = bVar3 | (byte)param_2;
      ((byte *)(gen_frame + 0x4))[10] = 0;
      ((byte *)(gen_frame + 0x4))[10] = 0;
      iVar7 = param_3;
      if (param_3 == 1) {
        piVar1 = *(int * PTR32 *)((int)this + 0x10);
        uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1);
        if (uVar5 != 0) {
          pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1)));
          if (*pcVar6 != '\0') {
            iVar7 = 0;
            goto LAB_00af1f8c;
          }
        }
        REFG(undefined4, 0x14c0cd0) = ((byte *)(gen_frame + 0x4))[8];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cd0) + 0)) = ((byte *)(gen_frame + 0x4))[9];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cd0) + 1)) = ((byte *)(gen_frame + 0x4))[10];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cd0) + 2)) = ((byte *)(gen_frame + 0x4))[0xb];
        REFG(undefined4, 0x14c0cc8) = ((byte *)(gen_frame + 0x4))[0];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cc8) + 0)) = ((byte *)(gen_frame + 0x4))[1];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cc8) + 1)) = ((byte *)(gen_frame + 0x4))[2];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0cc8) + 2)) = ((byte *)(gen_frame + 0x4))[3];
        REFG(undefined4, 0x14c0ccc) = ((byte *)(gen_frame + 0x4))[4];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0ccc) + 0)) = ((byte *)(gen_frame + 0x4))[5];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0ccc) + 1)) = ((byte *)(gen_frame + 0x4))[6];
        (*(undefined1 *)((char *)&REFG(undefined4, 0x14c0ccc) + 2)) = ((byte *)(gen_frame + 0x4))[7];
        *(undefined4 *)&REFG(undefined, 0x14c0cdc) = (*(undefined4 *)(gen_frame + 0x18));
        *(undefined4 *)&REFG(undefined, 0x14c0cd4) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)&REFG(undefined, 0x14c0cd8) = (*(undefined4 *)(gen_frame + 0x14));
        REFG(undefined1, 0x14c0ce4) = 1;
        return CONCAT31((int3)((uint)(*(undefined4 *)(gen_frame + 0x18)) >> 8),1);
      }
LAB_00af1f8c: ;
      bVar2 = F_00ae8330(((byte *)(gen_frame + 0x4)),iVar7);
      return CONCAT31(extraout_var_00,bVar2);
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00af1ff0 */
uint F_00af1ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf1ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00af1e90(this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_00af2010 */
uint F_00af2010(void)
{
  GEN_ENTER(0xaf2010u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined * this;
  undefined4 uVar4;
  
  REFG(undefined1, 0x14c0a69) = 0;
  if (REFG(char, 0x14c0a67) != '\0') {
    uVar2 = F_00b6afa0();
    in_EAX = 0;
    if (uVar2 != 0) {
      bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      in_EAX = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = CONCAT31(extraout_var,1);
        goto LAB_00af203e;
      }
    }
  }
  uVar2 = in_EAX & 0xffffff00;
LAB_00af203e: ;
  REFG(char, 0x14c0a67) = (char)uVar2;
  if (REFG(char, 0x14c0a67) != '\0') {
    REFG(char, 0x14c0a67) = '\0';
  }
  if (REFG(char, 0x14c0a68) != '\0') {
    REFG(char, 0x14c0a68) = '\0';
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x35;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
    uVar2 = F_0046a630(this,uVar4);
  }
  REFG(undefined4, 0x14c0cc5) = 0;
  REFG(undefined1, 0x14c0a6a) = 0;
  return uVar2;
}

/* ref: FUN_00af2090 */
unsigned int F_00af2090(void)
{
  GEN_ENTER(0xaf2090u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x14c0ce4) != '\0') {
    F_00aebe30(REFG(void * PTR32, 0x14c0a60),&REFG(undefined, 0x14c0cc8),1);
  }
  return 0;
}

/* ref: FUN_00af20c0 */
uint F_00af20c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaf20c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00af0770(param_1 + 0x310,param_2);
  return uVar1;
}

/* ref: FUN_00af20e0 */
uint F_00af20e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf20e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 0x1c);
    fVar1 = *(float *)(param_1 + 0x2c);
    bVar5 = GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0));
    bVar6 = bVar5 || fVar1 == REFG(float, 0x10ebbf0);
    uVar4 = CONCAT22((short)((uint)param_2 >> 0x10),
                     CONCAT11(bVar6 << 6 | bVar5 << 2 | 2U | !(REFG(float, 0x10ebbf0) <= fVar1),(char)param_2)
                    );
    *(int *)(param_1 + 0x34) = iVar2;
    if (((bVar5 == bVar6) && (2 < iVar2)) && (iVar2 < 6)) {
      puVar3 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
      uVar4 = F_00aecd10(this,param_1,*(undefined4 *)(param_1 + 0x34),*(float *)(param_1 + 0x2c),
                           &(*(undefined4 *)(gen_frame + 0x0)),param_1,(float)(float10)0);
    }
  }
  return uVar4;
}

/* ref: FUN_00af2190 */
uint F_00af2190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf2190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  int iVar2;
  uint in_EAX = 0;
  bool bVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x14);
    fVar1 = *(float *)(param_2 + 0x30);
    bVar3 = GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0));
    bVar4 = bVar3 || fVar1 == REFG(float, 0x10ebbf0);
    iVar2 = *(int *)(param_3 + 0x20);
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                      CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(REFG(float, 0x10ebbf0) <= fVar1),(char)in_EAX)
                     );
    *(int *)(param_2 + 0x38) = iVar2;
    if (((bVar3 == bVar4) && (2 < iVar2)) && (iVar2 < 6)) {
      in_EAX = F_00aecec0(param_1,param_2,iVar2,fVar1,GEN_TOF(*((float *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xb0)))),
                            *(float *)(param_2 + 0x14),
                            ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x18) * (float10)REFG(double, 0x1094890)))));
    }
  }
  return in_EAX;
}

/* ref: FUN_00af2210 */
uint F_00af2210(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xaf2210u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  undefined4 uVar2;
  uint extraout_EAX = 0;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_8;
  
  fVar3 = (float10)param_2;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1080228);
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  local_8 = 0.0;
  if (*(int *)(param_1 + 0x204) != 0) {
    if ((float10)((float)GEN_TOF(ABS(fVar3))) < (float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b50) * fVar4)) {
      uVar2 = 4;
    }
    else if ((float10)((float)GEN_TOF(ABS(fVar3))) < (float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b54) * fVar4)
            ) {
      if (0.0 < param_2) {
        uVar2 = 5;
      }
      else {
        uVar2 = 6;
      }
    }
    else {
      uVar2 = 7;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 4: ;
    fVar4 = (float10)*(float *)&REFG(undefined, 0x1339b50) * fVar4;
    if ((float10)(float)fVar4 < (float10)((float)GEN_TOF(ABS(fVar3)))) {
      if (0.0 < param_2) {
        local_8 = (float)(fVar4 * (float10)REFG(float, 0x1087f04));
      }
      else {
        local_8 = (float)(fVar4 * (float10)REFG(float, 0x10ebbf0));
      }
    }
    else {
      local_8 = param_2;
    }
    break;
  case 5: ;
    if (0.0 < param_2) {
      fVar4 = F_00aeb260((float)(fVar3 - (float10)*(double *)&REFG(undefined, 0x1094620)));
      local_8 = (float)fVar4;
    }
    break;
  case 6: ;
    if (param_2 < 0.0) {
      fVar4 = F_00aeb260((float)(fVar3 + (float10)*(double *)&REFG(undefined, 0x1094620)));
      local_8 = (float)fVar4;
    }
    break;
  case 7: ;
    if (!((double)((float)GEN_TOF(ABS(fVar3))) < *(double *)&REFG(undefined, 0x1094620))) {
      fVar5 = (float10)*(float *)&REFG(undefined, 0x1339b54) * fVar4;
      if ((double)((float)GEN_TOF(ABS(fVar3))) < (double)(float)fVar5) {
        if (0.0 < param_2) {
          fVar3 = (float10)(float)((float10)REFG(float, 0x1087f04) * fVar5);
        }
        else {
          fVar3 = (float10)(float)((float10)REFG(float, 0x10ebbf0) * fVar5);
        }
      }
      fVar4 = F_00aeb260((float)(fVar3 - fVar4));
      local_8 = (float)fVar4;
    }
  }
  fVar4 = F_00aeb260(((float)GEN_TOF(((float10)local_8 -
                              (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xe0)))))));
  *(float *)(param_1 + 0x448) = local_8;
  fVar1 = REFG(float, 0x1087f04);
  *(float *)(param_1 + 0x44c) = (float)fVar4;
  *(float *)(param_1 + 0x450) = fVar1;
  return extraout_EAX;
}

/* ref: FUN_00af2460 */
uint F_00af2460(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  int in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined2 uVar7;
  uint uVar6;
  bool bVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_c;
  
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00af24af: ;
    if (*(int *)((int)this + 0x10) != 0) {
      bVar5 = F_00a9f620(*(int *)((int)this + 0x10));
      in_EAX = CONCAT31(extraout_var_00,bVar5);
      if ((bVar5 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00af2515;
    }
    if (*(char *)((int)this + 0x1cc) != '\0') goto LAB_00af2515;
  }
  else {
    bVar5 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) goto LAB_00af24af;
    fVar1 = *(float *)((int)this + 0x450);
    in_EAX = CONCAT22((short)((uint3)extraout_var >> 8),(ushort)bVar5);
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
       ((in_EAX = *(int *)((int)this + 0x204), in_EAX != 0 &&
        (((in_EAX == 3 || (in_EAX == 4)) || (in_EAX == 2)))))) goto LAB_00af2515;
  }
  iVar4 = *(int *)((int)this + 0x10);
  fVar1 = *(float *)(iVar4 + 0xe0);
  uVar7 = (undefined2)((uint)iVar4 >> 0x10);
  in_EAX = CONCAT22(uVar7,(ushort)(byte)iVar4);
  if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) &&
     (fVar2 = *(float *)((int)this + 0x448), in_EAX = CONCAT22(uVar7,(ushort)(byte)iVar4),
     GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0))) {
    *(uint *)((int)this + 0x44c) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
    *(undefined4 *)((int)this + 0x448) = 0;
  }
LAB_00af2515: ;
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  fVar2 = *(float *)((int)this + 0x448);
  fVar10 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe0)));
  fVar3 = (float)((float10)fVar2 - fVar10);
  fVar12 = (float10)0;
  fVar11 = (float10)fVar3;
  bVar8 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar12);
  bVar9 = bVar8 || fVar11 == fVar12;
  bVar5 = bVar9 << 6 | bVar8 << 2 | 2U | !(fVar12 <= fVar11);
  if (bVar8 == bVar9) {
    bVar8 = GEN_ISNAN(fVar1);
    bVar9 = bVar8 || fVar1 == 0.0;
    bVar5 = bVar9 << 6 | bVar8 << 2 | 2U | !(0.0 <= fVar1);
    if (bVar8 == bVar9) {
      local_c = ((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 /
                                                            (float10)*(double *)&REFG(undefined, 0x10ec498)) *
                                           (float10)*(float *)((int)this + 0x44c)))))));
      if (!GEN_ISNAN(fVar3) && !(0.0 <= fVar3)) {
        local_c = (float)((float10)local_c * (float10)REFG(double, 0x1094890));
      }
      fVar12 = F_00aeb260((float)(fVar10 + (float10)local_c));
      fVar12 = (float10)(float)fVar12;
      if (((0.0 < fVar3) && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN((float10)fVar2)) && !(fVar12 <= (float10)fVar2)))
         || ((fVar3 < 0.0 && (fVar12 < (float10)fVar2)))) {
        fVar12 = (float10)fVar2;
      }
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x18))))
                        (*(int * PTR32 *)((int)this + 0x10),(undefined4)gen_fl2bits((float)fVar12));
      return uVar6;
    }
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar5,(char)in_EAX));
}

/* ref: FUN_00af2610 */
uint F_00af2610(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf2610u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00af0bb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13,param_14);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00af2660 */
byte F_00af2660(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf2660u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  bVar1 = F_00af0bb0(param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),REFG(float, 0x10ebbf0),param_4,&(*(undefined1 *)(gen_frame + 0xb)),0,0,0,0,0,3,0);
  return bVar1 != 0;
}

/* ref: FUN_00af26b0 */
byte F_00af26b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xaf26b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  byte bVar7;
  undefined1 uVar8;
  float10 fVar9;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  (*(float *)(gen_frame + 0xd4)) = fVar2;
  (*(float *)(gen_frame + 0xdc)) = fVar3;
  (*(float *)(gen_frame + 0x9c)) = fVar1;
  fVar4 = (float)((float10)*param_2 - (float10)fVar1);
  (*(float *)(gen_frame + 0xb0)) = fVar4;
  (*(float *)(gen_frame + 0xa4)) = fVar1;
  fVar1 = param_2[1];
  (*(float *)(gen_frame + 0xc0)) = fVar4;
  (*(float *)(gen_frame + 0xa0)) = fVar2;
  (*(float *)(gen_frame + 0x98)) = fVar3;
  fVar1 = (float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0xb4)) = fVar1;
  fVar5 = param_2[2];
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  (*(float *)(gen_frame + 0xa8)) = fVar2;
  (*(float *)(gen_frame + 0xac)) = fVar3;
  fVar2 = (float)((float10)fVar5 - (float10)fVar3);
  (*(float *)(gen_frame + 0xb8)) = fVar2;
  ((float *)(gen_frame + 0xc8))[0] = fVar2;
  fVar1 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar4 * (float10)fVar4))));
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  F_004bd580(&(*(float *)(gen_frame + 0xc0)));
  (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0xc0));
  (*(float *)(gen_frame + 0xb8)) = (*(float *)(gen_frame + 0xc4));
  (*(float *)(gen_frame + 0xbc)) = ((float *)(gen_frame + 0xc8))[0];
  (*(float *)(gen_frame + 0xdc)) = 0.0;
  (*(float *)(gen_frame + 0xd4)) = 0.0;
  if (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0)) {
    bVar6 = true;
    if (0.0 < REFG(float, 0x1339b58)) {
      (*(float *)(gen_frame + 0xdc)) = (float)((float10)REFG(float, 0x1339b58) + (float10)*(double *)&REFG(undefined, 0x108bec8));
    }
  }
  else {
    bVar6 = false;
    if (0.0 < REFG(float, 0x1339b5c)) {
      (*(float *)(gen_frame + 0xdc)) = (float)((float10)REFG(float, 0x1339b5c) + (float10)0);
    }
    fVar9 = (float10)*(double *)&REFG(undefined, 0x109ce00);
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0x9c)) - (float10)(*(float *)(gen_frame + 0xc0)) * fVar9);
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)(*(float *)(gen_frame + 0xc4)) * fVar9);
    (*(float *)(gen_frame + 0xac)) = (float)((float10)(*(float *)(gen_frame + 0x98)) - (float10)((float *)(gen_frame + 0xc8))[0] * fVar9);
    (*(float *)(gen_frame + 0xd4)) = (float)(fVar9 + (float10)0);
  }
  fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xdc)) + (float10)(*(float *)(gen_frame + 0xd8))) + (float10)(*(float *)(gen_frame + 0xd4)))));
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  if (GEN_ISNAN(param_8) == (GEN_ISNAN(param_8) || param_8 == 0.0)) {
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)fVar1 + (float10)param_8);
  }
  if (bVar6) {
    bVar7 = F_00af09b0((*(float *)(gen_frame + 0xa4)),(*(float *)(gen_frame + 0xa8)),(*(float *)(gen_frame + 0xac)),param_4,&(*(float *)(gen_frame + 0xb4)),(*(float *)(gen_frame + 0xdc)),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  }
  else {
    bVar7 = F_00aeb520(&(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xb4)),(*(float *)(gen_frame + 0xdc)),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  }
  if ((bVar7 != 0) && (!((float10)(*(float *)(gen_frame + 0xd4)) + (float10)(*(float *)(gen_frame + 0xd8)) < (float10)(*(float *)(gen_frame + 0x40))))) {
    bVar7 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0xc4)),((float *)(gen_frame + 0xc8)));
    if (bVar7 == 0) {
      uVar8 = 0;
    }
    else {
      if (param_5 != (float *)0x0) {
        *param_5 = (*(float *)(gen_frame + 0xc0));
        param_5[1] = (*(float *)(gen_frame + 0xc4));
        param_5[2] = ((float *)(gen_frame + 0xc8))[0];
      }
      uVar8 = 1;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = uVar8;
    }
    if (param_7 != (undefined *)0x0) {
      F_00affb20(param_7,&(*(undefined4 *)(gen_frame + 0x0)));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00af2a00 */
uint F_00af2a00(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xaf2a00u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float10 fVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_4 + (float10)REFG(float, 0x1339ba4));
  fVar3 = (float10)0;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_2 + fVar3);
  fVar5 = (float10)(float)((float10)param_4 + (float10)REFG(float, 0x1339ba4));
  fVar1 = (float)(fVar5 + (float10)param_2[1]);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = param_2[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 + fVar3);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_2 + fVar3);
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + fVar3);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_1 + fVar3);
  fVar1 = (float)(fVar5 + (float10)param_1[1]);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = param_1[2];
  (*(float *)(gen_frame + 0x28)) = (float)(fVar3 + (float10)fVar2);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_1 + fVar3);
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = (float)(fVar3 + (float10)fVar2);
  bVar4 = F_00af26b0(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),param_3,param_4,param_5,param_6,param_7,param_8);
  return CONCAT31(extraout_var,bVar4);
}

/* ref: FUN_00af2ad0 */
unsigned int F_00af2ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    *(undefined1 *)((int)this + 0x155) = *(undefined1 *)((int)this + 0x154);
    *(undefined1 *)((int)this + 0x154) = 0;
    if ((((*(char *)((int)this + 0x1a) != '\0') || (*(char *)((int)this + 0x29) != '\0')) ||
        (*(char *)(iVar1 + 0x1cc) != '\0')) || (*(char *)(iVar1 + 0x1cd) != '\0')) {
      if ((*(char *)((int)this + 0x14) != '\0') && (*(char *)(iVar1 + 100) == '\0')) {
        F_00affeb0(this);
      }
      if ((*(char *)((int)this + 0x15) != '\0') && (*(char *)(iVar1 + 0x65) == '\0')) {
        F_00affe40(this);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00af2b40 */
unsigned int F_00af2b40(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  
  if (*(char *)((int)this + 0x294) != '\0') {
    if (0.0 < *(float *)((int)this + 0x290)) {
      fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x290) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      if ((float10)fVar2 < (float10)0) {
        fVar2 = 0.0;
      }
      *(float *)((int)this + 0x290) = fVar2;
    }
    fVar2 = *(float *)((int)this + 0x290);
    if (GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)) {
      lVar1 = *(longlong *)((int)this + 0x298);
      uVar3 = F_00427d90();
      lVar1 = uVar3 - lVar1;
      if ((((int)((ulonglong)lVar1 >> 0x20) != 0) || (100 < (uint)lVar1)) &&
         (*(char *)((int)this + 0x294) != '\0')) {
        F_00aebe30(*(undefined * PTR32 *)((int)this + 0x10),(int)this + 0x278,1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00af2bf0 */
unsigned int F_00af2bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf2bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  iVar2 = REFG(int, 0x1375b90);
  if (REFG(int, 0x1375bbc) != 0) {
    *(undefined1 *)((int)this + 0x271) = 0;
    return 0;
  }
  if (REFG(int, 0x1375b90) == 0) {
    *(undefined1 *)((int)this + 0x271) = 0;
    return 0;
  }
  if ((((REFG(int, 0x137104c) == 0) ||
       (uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf), *(int *)(uVar6 + 0x14) == 0
       )) || ((REFG(int, 0x1375bbc) == 0 && ((REFG(int, 0x1375b90) != 0 && (*(int *)(REFG(int, 0x1375b90) + 0xe0) == 0))))))
     || (*(char *)((int)this + 0x17) != '\0')) {
    if (*(int *)(iVar2 + 0x14c) != 1) {
      *(undefined4 *)(iVar2 + 0x14c) = 1;
    }
  }
  else if (*(int *)(iVar2 + 0x14c) != 0) {
    *(undefined4 *)(iVar2 + 0x14c) = 0;
  }
  bVar3 = 0;
  if (((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) && (*(int *)(REFG(int, 0x1375b90) + 0xe0) == 0)) {
    bVar3 = *(byte *)((int)this + 0x271) | (byte)param_1;
  }
  *(byte *)(iVar2 + 0x151) = bVar3;
  bVar5 = 0;
  bVar3 = bVar5;
  if (((REFG(int, 0x1375bbc) != 0) || (REFG(int, 0x1375b90) == 0)) || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0)) {
    bVar4 = F_00aee1c0(this);
    if (bVar4 == 0) {
      bVar5 = F_00ae8680(*(undefined4 *)((int)this + 0x10));
      if (((bVar5 != 0) &&
          ((bVar5 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar5 == 0 || (uVar6 = F_00b6afa0(), uVar6 == 0))
          )) && (*(char *)((int)this + 0x1a) == '\0')) {
        *(undefined4 *)(iVar2 + 0x14c) = 1;
        bVar3 = 1;
      }
    }
    else {
      bVar1 = false;
      if ((*(int *)((int)this + 0x164) == 0) &&
         (bVar4 = F_00ae8630(*(undefined4 *)((int)this + 0x10)), bVar4 != 0)) {
        bVar1 = true;
      }
      if ((((*(char *)((int)this + 0x17) != '\0') && (REFG(int, 0x137104c) != 0)) &&
          (uVar6 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf),
          *(int *)(uVar6 + 0x14) != 0)) && (*(char *)((int)this + 0x173) != '\0')) {
        bVar1 = true;
      }
      if ((*(char *)((int)this + 0x19) != '\0') || (bVar1)) {
        *(undefined4 *)(iVar2 + 0x14c) = 0;
      }
      else {
        bVar4 = F_005374c0(&REFG(undefined4, 0x1375bc0));
        bVar3 = (byte)param_1;
        if (((bVar4 != 0) && (uVar6 = F_00b6afa0(), uVar6 != 0)) &&
           (bVar3 = bVar5, *(int *)(iVar2 + 0x14c) != 0)) {
          *(undefined4 *)(iVar2 + 0x14c) = 0;
        }
      }
    }
  }
  if (*(int *)((int)this + 0x150) == 0) goto switchD_00af2db2_default;
  switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x150))) {
  case 1: ;
    *(undefined4 *)(iVar2 + 0x14c) = 0;
    bVar3 = 1;
    break;
  case 2: ;
    *(undefined4 *)(iVar2 + 0x14c) = 0;
    goto LAB_00af2de3;
  case 3: ;
    *(undefined4 *)(iVar2 + 0x14c) = 1;
    bVar3 = 1;
    break;
  case 4: ;
    *(undefined4 *)(iVar2 + 0x14c) = 1;
LAB_00af2de3: ;
    bVar3 = 0;
  }
switchD_00af2db2_default: ;
  *(byte *)(iVar2 + 0x150) = bVar3;
  *(undefined1 *)((int)this + 0x271) = 0;
  return 0;
}

/* ref: FUN_00af2e30 */
byte F_00af2e30(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2e30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((((REFG(int, 0x137104c) != 0) &&
       (uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf), *(int *)(uVar1 + 0x14) != 0
       )) && ((REFG(int, 0x1375bbc) != 0 || ((REFG(int, 0x1375b90) == 0 || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0))))))
     && (*(char *)(in_ecx + 0x17) == '\0')) {
    return REFG(undefined1, 0x1379689);
  }
  return 1;
}

/* ref: FUN_00af2e80 */
float10 F_00af2e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf2e80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  float10 fVar5;
  float local_8;
  
  cVar4 = *(char *)(param_1 + 0x171);
  local_8 = 0.0;
  if (param_3 != 0) {
    cVar4 = *(char *)param_3;
  }
  bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar2 != 0) {
    uVar3 = F_00b6afa0();
    if (uVar3 != 0) {
      return (float10)*(float *)(param_1 + 0x68);
    }
  }
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x17) != '\0') {
      return (float10)*(float *)(param_1 + 100);
    }
    bVar2 = F_00aee1c0(param_1);
    if (bVar2 != 0) {
      fVar1 = *(float *)(param_1 + 0x60);
      uVar3 = F_00ae9840();
      fVar5 = (float10)(int)(uVar3 + 100);
      if ((int)(uVar3 + 100) < 0) {
        fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      return (float10)((float)GEN_TOF(((float10)(float)(fVar5 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                             (float10)fVar1)));
    }
    uVar3 = F_00aed240();
    if (uVar3 != 1) goto LAB_00af2f41;
  }
  local_8 = *(float *)(param_1 + 0x5c);
LAB_00af2f41: ;
  return (float10)local_8;
}

/* ref: FUN_00af2f50 */
unsigned int F_00af2f50(unsigned int gen_a0)
{
  GEN_ENTER(0xaf2f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((((((*(int *)(iVar1 + 0x10) != 0) &&
         (bVar4 = F_00a9f620(*(int *)(iVar1 + 0x10)), bVar4 != 0)) && (REFG(char, 0x14c0a64) != '\0')) ||
       (*(char *)(iVar1 + 0x1cc) != '\0')) ||
      ((((*(int *)(iVar1 + 0x10) != 0 && (bVar4 = F_00a9f620(*(int *)(iVar1 + 0x10)), bVar4 != 0))
        && (REFG(char, 0x14c0a65) != '\0')) || (*(char *)(iVar1 + 0x1cd) != '\0')))) &&
     (*(char *)((int)this + 0x14) != '\0')) {
    iVar1 = *(int *)((int)this + 0x10);
    iVar2 = *(int *)(iVar1 + 0x204);
    (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x2c);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    if ((iVar2 == 0) ||
       ((((iVar2 != 3 && (iVar2 != 4)) && (iVar2 != 2)) ||
        (fVar7 = REFG(float, 0x10ebbc4), *(char *)(iVar1 + 0x24b) != '\0')))) {
      if (((((*(int *)(iVar1 + 0x10) == 0) ||
            (bVar4 = F_00a9f620(*(int *)(iVar1 + 0x10)), bVar4 == 0)) || (REFG(char, 0x14c0a64) == '\0'))
          && (*(char *)(iVar1 + 0x1cc) == '\0')) || (*(char *)(iVar1 + 0x66) == '\0')) {
        bVar4 = F_00ae85b0(*(undefined4 *)((int)this + 0x10));
        if (bVar4 == 0) {
          fVar7 = *(float *)((int)this + 0x54);
        }
        else {
          fVar7 = *(float *)((int)this + 0x58);
        }
      }
      else {
        fVar7 = gen_bits2f(*(uint *)((int)this + 0x78) ^ REFG(uint, 0x10920d0));
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
    iVar2 = *(int *)(iVar1 + 0x10);
    (*(float *)(gen_frame + 0x8)) = fVar7;
    uVar3 = *(undefined4 *)(iVar1 + 0x6c);
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar7 + (float10)(*(float *)(gen_frame + 0x4))
                     )));
    if ((((iVar2 == 0) || (bVar4 = F_00a9f620(iVar2), bVar4 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
       (fVar7 = (*(float *)(gen_frame + 0x8)), *(char *)(iVar1 + 0x1cc) == '\0')) {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = 0;
      (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)gen_fl2bits(fVar7) & 0xffffff00);
    }
    else {
      uVar5 = 1;
      if (*(int *)(iVar1 + 0x6c) != 7) {
        uVar5 = *(undefined1 *)(iVar1 + 0x3d);
      }
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = uVar5;
      (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x8)), 1, 3),uVar5));
    }
    fVar6 = F_00ae9ae0(this,(uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),uVar3,&(*(float *)(gen_frame + 0x4)));
    fVar7 = (float)fVar6;
    (*(float *)(gen_frame + 0x8)) = fVar7;
    fVar8 = (*(float *)(gen_frame + 0x4));
    if ((float10)fVar7 < (float10)(*(float *)(gen_frame + 0x4))) {
      fVar8 = fVar7;
    }
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    *(float *)((int)this + 0x2c) = fVar8;
    if (GEN_ISNAN(fVar8) != (GEN_ISNAN(fVar8) || fVar8 == 0.0)) {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x204)));
      if (((iVar1 == 0) || (((iVar1 != 3 && (iVar1 != 4)) && (iVar1 != 2)))) ||
         (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24b))) != '\0')) {
        F_00affeb0(this);
      }
    }
  }
  return 0;
}

/* ref: FUN_00af3110 */
uint F_00af3110(unsigned int gen_a0)
{
  GEN_ENTER(0xaf3110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  uVar8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar8;
  iVar4 = *(int *)((int)this + 0x10);
  if (*(int *)(iVar4 + 0x10) == 0) {
LAB_00af3144: ;
    if (*(char *)(iVar4 + 0x1cc) == '\0') {
      if (*(int *)(iVar4 + 0x10) != 0) {
        bVar6 = F_00a9f620(*(int *)(iVar4 + 0x10));
        uVar8 = CONCAT31(extraout_var_00,bVar6);
        if ((bVar6 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00af3173;
      }
      if (*(char *)(iVar4 + 0x1cd) == '\0') goto LAB_00af3436;
    }
  }
  else {
    bVar6 = F_00a9f620(*(int *)(iVar4 + 0x10));
    uVar8 = CONCAT31(extraout_var,bVar6);
    if ((bVar6 == 0) || (REFG(char, 0x14c0a64) == '\0')) goto LAB_00af3144;
  }
LAB_00af3173: ;
  if (*(char *)((int)this + 0x15) != '\0') {
    fVar13 = *(float *)((int)this + 0x30);
    bVar9 = GEN_ISNAN(*(float *)(iVar4 + 0x50)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
    if (((bVar9 != (bVar9 || *(float *)(iVar4 + 0x50) == REFG(float, 0x10ebbf0))) ||
        (*(int *)(iVar4 + 0x58) < 3)) || (5 < *(int *)(iVar4 + 0x58))) {
      fVar10 = F_00aeb260(((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x34) -
                                   (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) +
                                                      0xb0)))))));
      fVar11 = F_00aeb260(((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x34) -
                                   (float10)*(float *)(iVar4 + 0x38)))));
      if (((float10)((float)GEN_TOF(ABS((float10)(float)fVar10))) <
           (float10)((float)GEN_TOF(ABS(fVar11))) * (float10)*(double *)&REFG(undefined, 0x1094878)) &&
         (*(char *)(iVar4 + 0x67) == '\0')) {
        *(undefined1 *)(iVar4 + 0x67) = 1;
        uVar8 = 0;
        bVar6 = F_00ae85b0(*(undefined4 *)((int)this + 0x10));
        fVar12 = F_00af2e80(this,(uint)bVar6,uVar8);
        iVar5 = *(int *)((int)this + 0x10);
        fVar10 = (float10)*(double *)&REFG(undefined, 0x1080228);
        uVar1 = *(undefined4 *)(iVar4 + 0x34);
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0xb0)));
        (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbec)));
        (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac050)));
        (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
        (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        fVar11 = (float10)*(double *)&REFG(undefined, 0x10946c8);
        F_0054e4e0((undefined *)(iVar5 + 0x128),&(*(undefined4 *)(gen_frame + 0x28)),4);
        F_0054e4e0((undefined *)(iVar5 + 0x16c),&(*(undefined4 *)(gen_frame + 0x18)),4);
        *(float *)(iVar4 + 0x48) = GEN_FLT_TO(*(float *)(iVar4 + 0x48), REFG(float, 0x10ebbf0));
        *(float *)(iVar4 + 0x50) =
             ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)1 / (float10)(float)(fVar12 / fVar10)))) * fVar11)));
        *(undefined4 *)(iVar4 + 0x38) = uVar2;
        *(undefined4 *)(iVar4 + 0x58) = 5;
        *(undefined4 *)(iVar5 + 0x1bc) = uVar2;
        *(undefined4 *)(iVar5 + 0x1c0) = uVar1;
        *(undefined4 *)(iVar5 + 0x1b0) = 0;
      }
    }
    iVar4 = *(int *)((int)this + 0x10);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    if (((((*(int *)(iVar4 + 0x10) == 0) ||
          (bVar6 = F_00a9f620(*(int *)(iVar4 + 0x10)), bVar6 == 0)) || (REFG(char, 0x14c0a65) == '\0')) &&
        (*(char *)(iVar4 + 0x1cd) == '\0')) || (*(char *)(iVar4 + 0x67) == '\0')) {
      cVar3 = *(char *)((int)this + 0x1b);
      bVar6 = F_00ae85b0(*(undefined4 *)((int)this + 0x10));
      if (cVar3 == '\0') {
        if (bVar6 == 0) {
          (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 0x6c);
        }
        else {
          (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 0x70);
        }
      }
      else {
        (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 0x74);
      }
    }
    iVar4 = *(int *)((int)this + 0x10);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)(*(float *)(gen_frame + 0x14)) +
                      (float10)fVar13)));
    if ((((*(int *)(iVar4 + 0x10) == 0) ||
         (bVar6 = F_00a9f620(*(int *)(iVar4 + 0x10)), bVar6 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
       (*(char *)(iVar4 + 0x1cc) == '\0')) {
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3) << 8);
    }
    else {
      uVar7 = 1;
      if (*(int *)(iVar4 + 0x6c) != 7) {
        uVar7 = *(undefined1 *)(iVar4 + 0x3d);
      }
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),uVar7));
    }
    fVar10 = F_00af2e80(this,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))),0);
    uVar8 = extraout_EAX;
    if (fVar10 < (float10)(*(float *)(gen_frame + 0x0))) {
      uVar8 = 0;
      bVar6 = F_00ae85b0(*(undefined4 *)((int)this + 0x10));
      fVar10 = F_00af2e80(this,(uint)bVar6,uVar8);
      (*(float *)(gen_frame + 0x0)) = (float)fVar10;
      uVar8 = extraout_EAX_00;
    }
    fVar13 = (*(float *)(gen_frame + 0x0));
    if ((*(float *)(gen_frame + 0x0)) < 0.0) {
      fVar13 = 0.0;
    }
    *(float *)((int)this + 0x30) = fVar13;
  }
LAB_00af3436: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar8;
}

/* ref: FUN_00af3450 */
byte F_00af3450(unsigned int gen_a0)
{
  GEN_ENTER(0xaf3450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (((bVar1 != 0) && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
     (*(char *)((int)this + 0xb0) != '\0')) {
    return 1;
  }
  if ((((REFG(int, 0x137104c) != 0) &&
       (uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xaf), *(int *)(uVar2 + 0x14) != 0
       )) && ((REFG(int, 0x1375bbc) != 0 || ((REFG(int, 0x1375b90) == 0 || (*(int *)(REFG(int, 0x1375b90) + 0xe0) != 0))))))
     && (*(char *)((int)this + 0x17) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00af34c0 */
byte F_00af34c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf34c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar1 = F_00a34970(pvVar2,0x129);
  if ((((bVar1 == 0) && (*(char *)((int)this + 0x176) == '\0')) ||
      (uVar3 = F_00b6afa0(), uVar3 == 0)) ||
     (uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), uVar4 = F_00b6afa0(), uVar4 == uVar3))
  {
    pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
    bVar1 = F_00a34970(pvVar2,0x12e);
    if ((((bVar1 == 0) &&
         ((bVar1 = F_0053bd10(&REFG(undefined, 0x1375b30)), bVar1 == 0 || (*(char *)((int)this + 0x14) == '\0'))
         )) && (*(char *)((int)this + 0x174) == '\0')) &&
       ((*(char *)((int)this + 0x175) == '\0' &&
        ((REFG(char, 0x1379688) == '\0' || (bVar1 = F_0053d930(&REFG(undefined4, 0x1375bc0)), bVar1 == 0)))))) {
      pvVar2 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
      bVar1 = F_00a34970(pvVar2,0x112);
      if ((bVar1 == 0) && (bVar1 = F_00a34970(pvVar2,0x113), bVar1 == 0)) {
        if (*(char *)((int)this + 0x275) == '\0') {
LAB_00af372a: ;
          F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
          return 0;
        }
        bVar1 = F_00ae9c70();
        if (bVar1 == 0) {
          uVar3 = F_00a34e80(pvVar2,4);
          (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar3);
          (*(float *)(gen_frame + 0x18)) = (float)((float10)(int)uVar3 / (float10)*(double *)&REFG(undefined, 0x1088118));
          fVar5 = (float10)(float)((float10)(int)uVar3 / (float10)*(double *)&REFG(undefined, 0x1088118));
          if (!(fVar5 < -(float10)*(float *)&REFG(undefined, 0x1339b28))) {
            if (((float10)*(float *)&REFG(undefined, 0x1339b28) < fVar5) &&
               (bVar1 = F_00aee270(this), bVar1 != 0)) {
              uVar3 = F_00a34e80(pvVar2,3);
              (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar3);
              (*(float *)(gen_frame + 0x1c)) = (float)((float10)(int)uVar3 / (float10)*(double *)&REFG(undefined, 0x1088118));
              uVar3 = F_00a34e80(pvVar2,4);
              (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar3);
              ((float *)(gen_frame + 0x0))[1] = 0.0;
              (*(float *)(gen_frame + 0x18)) = (float)((float10)(int)uVar3 / (float10)*(double *)&REFG(undefined, 0x1088118));
              ((float *)(gen_frame + 0x0))[0] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x1c))));
              ((float *)(gen_frame + 0x0))[2] = (float)((float10)(int)uVar3 / (float10)*(double *)&REFG(undefined, 0x1088118));
              fVar6 = F_004bd280(((float *)(gen_frame + 0x0)));
              if ((float10)*(float *)&REFG(undefined, 0x1339b28) <= (float10)fVar6) {
                F_004bd580(((float *)(gen_frame + 0x0)));
                pvVar2 = (undefined *)F_00ae7130();
                if (pvVar2 != (undefined *)0x0) {
                  dVar7 = F_00b6c830(pvVar2);
                  (*(float *)(gen_frame + 0x1c)) = (float)((float10)dVar7 + (float10)*(double *)&REFG(undefined, 0x1080228));
                  F_00518220(((undefined1 *)(gen_frame + 0x20)),(float)((float10)dVar7 + (float10)*(double *)&REFG(undefined, 0x1080228)))
                  ;
                }
                F_004eea10(((float *)(gen_frame + 0x0)),(uint)((undefined1 *)(gen_frame + 0x20)));
                fVar5 = F_00aeb3c0(((float *)(gen_frame + 0x0))[0],((float *)(gen_frame + 0x0))[2]);
                (*(float *)(gen_frame + 0x1c)) = (float)fVar5;
                fVar6 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)));
                (*(float *)(gen_frame + 0x18)) = fVar6;
                fVar6 = (float)((float10)(float)fVar5 - (float10)fVar6);
                (*(float *)(gen_frame + 0x1c)) = fVar6;
                fVar5 = F_00aeb260(fVar6);
                fVar6 = ((float)GEN_TOF(ABS(fVar5)));
                (*(float *)(gen_frame + 0x1c)) = fVar6;
                if ((!GEN_ISNAN((float10)fVar6) && !GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x1339b2c))) &&
                    !((float10)fVar6 <= (float10)*(float *)&REFG(undefined, 0x1339b2c))) goto LAB_00af35ff;
              }
            }
            goto LAB_00af372a;
          }
        }
      }
    }
  }
LAB_00af35ff: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return 1;
}

/* ref: FUN_00af3740 */
byte F_00af3740(unsigned int gen_a0)
{
  GEN_ENTER(0xaf3740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  undefined * this_00;
  float * pfVar5;
  
  bVar4 = F_00aeddc0(this);
  if (bVar4 != 0) {
    return 1;
  }
  if ((*(int *)((int)this + 0xa0) == -0x20000000) ||
     (this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)((int)this + 0xa0),
                                     *(undefined4 *)((int)this + 0xa4)), this_00 == (undefined *)0x0)) {
    if (*(char *)((int)this + 0x260) == '\0') {
      return 1;
    }
  }
  else {
    pfVar5 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    fVar1 = *pfVar5;
    fVar2 = pfVar5[2];
    pfVar5 = (float *)F_00a5feb0(this_00);
    dVar3 = (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar5 - (float10)fVar1)
                                                 * (float10)(float)((float10)*pfVar5 -
                                                                   (float10)fVar1) +
                                                (float10)(float)((float10)pfVar5[2] - (float10)fVar2
                                                                ) *
                                                (float10)(float)((float10)pfVar5[2] - (float10)fVar2
                                                                )))))));
    if ((!GEN_ISNAN(dVar3) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1090718))) && !(dVar3 <= *(double *)&REFG(undefined, 0x1090718))) {
      return 1;
    }
  }
  bVar4 = F_00af34c0(this);
  return bVar4;
}

/* ref: FUN_00af3810 */
uint F_00af3810(unsigned int gen_a0)
{
  GEN_ENTER(0xaf3810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * this_00;
  undefined4 uVar5;
  
  iVar1 = *(int *)((int)this + 0x10);
  if ((((*(char *)((int)this + 0x17) != '\0') || (*(char *)((int)this + 0x18) != '\0')) ||
      (*(char *)((int)this + 0x19) != '\0')) || (*(char *)((int)this + 0x1a) != '\0')) {
    pvVar3 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
    if ((*(char *)((int)this + 0x19) != '\0') && (bVar2 = F_00aeddc0(this), bVar2 != 0)) {
      *(undefined1 *)((int)this + 0x19) = 0;
    }
    if ((*(char *)((int)this + 0x17) != '\0') && (bVar2 = F_00af34c0(this), bVar2 != 0)) {
      *(undefined1 *)((int)this + 0x17) = 0;
    }
    if ((*(char *)((int)this + 0x18) != '\0') && (bVar2 = F_00af3740(this), bVar2 != 0)) {
      *(undefined1 *)((int)this + 0x18) = 0;
      piVar4 = (int *)F_00424750(REFG(void * PTR32, 0x137104c));
      uVar5 = 0x35;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046a630(this_00,uVar5);
    }
    bVar2 = F_00431c10(pvVar3);
    if (bVar2 == 0) {
      pvVar3 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
      bVar2 = F_00a34b70(pvVar3,0x118);
      if ((bVar2 == 0) && (REFG(int, 0x1375b64) != 3)) {
        *(undefined1 *)((int)this + 0x275) = 1;
      }
    }
  }
  if (((((*(char *)((int)this + 0x17) != '\0') || (*(char *)((int)this + 0x18) != '\0')) ||
       (*(char *)((int)this + 0x19) != '\0')) || (*(char *)((int)this + 0x1a) != '\0')) &&
     (*(char *)(iVar1 + 100) == '\0')) {
    if (*(char *)((int)this + 0x19) != '\0') {
      *(undefined1 *)((int)this + 0x19) = 0;
      return iVar1 + 0x20U;
    }
    if ((*(char *)((int)this + 0x1a) != '\0') && (*(char *)(iVar1 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 0x1a) = 0;
    }
  }
  return iVar1 + 0x20U;
}

/* ref: FUN_00af39f0 */
uint F_00af39f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf39f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  undefined3 extraout_var = 0;
  uint uVar7;
  undefined3 extraout_var_00 = 0;
  int iVar8;
  float10 fVar9;
  
  iVar8 = *(int *)((int)this + 0x10) + 0x20;
  (*(int *)(gen_frame + 0x28)) = iVar8;
  if (*(char *)((int)this + 0x14) == '\0') {
    return in_EAX & 0xffffff00;
  }
  (*(byte *)(gen_frame + 0x2f)) = 0;
  if ((((*(char *)((int)this + 0x170) != '\0') &&
       (*(undefined1 *)((int)this + 0x170) = 0, *(char *)((int)this + 0x1a) == '\0')) &&
      (bVar4 = F_00aedd50(this), bVar4 != 0)) &&
     (((*(byte *)(gen_frame + 0x2f)) = 1, *(char *)((int)this + 0x18) != '\0' && (bVar4 = F_00aee0e0(this), bVar4 == 0)
      ))) {
    (*(byte *)(gen_frame + 0x2f)) = bVar4;
  }
  if (((((*(char *)((int)this + 0x17) != '\0') && (uVar6 = F_00b6afa0(), uVar6 != 0)) &&
       (bVar4 = F_005374c0(&REFG(undefined4, 0x1375bc0)), bVar4 != 0)) ||
      ((*(char *)((int)this + 0x18) == '\0' &&
       ((*(char *)((int)this + 0x19) != '\0' || (*(char *)((int)this + 0x1a) != '\0')))))) &&
     ((*(char *)((int)this + 0x18) == '\0' &&
      ((*(char *)((int)this + 0x1a) == '\0' || (*(char *)((int)this + 0x12a) != '\0')))))) {
    iVar3 = *(int *)((int)this + 0x10);
    iVar8 = *(int *)(iVar3 + 0x10);
    if ((((iVar8 != 0) && ((bVar4 = F_00a9f620(iVar8), bVar4 != 0 && (REFG(char, 0x14c0a64) != '\0')))) ||
        (iVar8 = (*(int *)(gen_frame + 0x28)), *(char *)(iVar3 + 0x1cc) != '\0')) &&
       (bVar4 = F_00ae8680(*(undefined4 *)((int)this + 0x10)), iVar8 = (*(int *)(gen_frame + 0x28)), bVar4 == 0)) {
      uVar6 = F_00ae9430(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x0)));
      F_0046f4a0(((float *)(gen_frame + 0x10)),(int)this + 0xc0,uVar6);
      fVar9 = F_00aeb3c0(((float *)(gen_frame + 0x10))[0],(*(float *)(gen_frame + 0x18)));
      fVar1 = (float)fVar9;
      (*(float *)(gen_frame + 0x24)) = fVar1;
      if (*(char *)((*(int *)(gen_frame + 0x28)) + 0x45) == '\0') {
        fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)));
        (*(float *)(gen_frame + 0x20)) = fVar2;
        fVar1 = (float)((float10)fVar1 - (float10)fVar2);
        (*(float *)(gen_frame + 0x20)) = fVar1;
        fVar9 = F_00aeb260(fVar1);
        (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(ABS(fVar9)));
      }
      else {
        (*(float *)(gen_frame + 0x20)) = *(float *)((*(int *)(gen_frame + 0x28)) + 0x14);
        fVar1 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)((*(int *)(gen_frame + 0x28)) + 0x14))));
        (*(float *)(gen_frame + 0x20)) = fVar1;
        fVar9 = F_00aeb260(fVar1);
        (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(ABS(fVar9)));
      }
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x20));
      iVar8 = (*(int *)(gen_frame + 0x28));
      if ((!GEN_ISNAN((*(float *)(gen_frame + 0x20))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x10ebd18))) &&
          !((*(float *)(gen_frame + 0x20)) <= *(float *)&REFG(undefined, 0x10ebd18))) {
        (*(byte *)(gen_frame + 0x2f)) = 1;
      }
    }
  }
  bVar5 = F_00aef7c0(this);
  uVar6 = CONCAT31(extraout_var,bVar5);
  bVar4 = 1;
  if (*(int *)(iVar8 + 0x4c) != 7) {
    bVar4 = *(byte *)(iVar8 + 0x1d);
  }
  if (bVar4 == bVar5) {
LAB_00af3bdf: ;
    if (((*(char *)((int)this + 0x1a) != '\0') && (*(char *)((int)this + 300) != '\0')) &&
       (*(char *)((int)this + 0x12a) == '\0')) goto LAB_00af3bfd;
  }
  else {
    if (*(char *)((int)this + 0x17) != '\0') {
      uVar7 = F_00b6afa0();
      uVar6 = 0;
      if (uVar7 == 0) goto LAB_00af3bc9;
      bVar4 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      uVar6 = CONCAT31(extraout_var_00,bVar4);
      if (bVar4 == 0) goto LAB_00af3bc9;
LAB_00af3bdb: ;
      (*(byte *)(gen_frame + 0x2f)) = 1;
      goto LAB_00af3bdf;
    }
LAB_00af3bc9: ;
    if (((*(char *)((int)this + 0x18) != '\0') || (*(char *)((int)this + 0x19) != '\0')) ||
       (*(char *)((int)this + 0x1a) != '\0')) goto LAB_00af3bdb;
  }
  if ((*(byte *)(gen_frame + 0x2f)) == 0) {
    return uVar6;
  }
LAB_00af3bfd: ;
  *param_1 = 1;
  *param_2 = *(undefined4 *)((int)this + 0xc0);
  param_2[1] = *(undefined4 *)((int)this + 0xc4);
  param_2[2] = *(undefined4 *)((int)this + 200);
  return (uint)param_2;
}

/* ref: FUN_00af3c30 */
uint F_00af3c30(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf3c30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00aef7c0(param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  *(byte *)param_4 = bVar1;
  if ((((*(char *)((int)param_1 + 0x17) == '\0') && (*(char *)((int)param_1 + 0x18) == '\0')) &&
      (*(char *)((int)param_1 + 0x19) == '\0')) &&
     ((*(char *)((int)param_1 + 0x1a) == '\0' && (*(int *)((int)param_1 + 0x164) == 4)))) {
    if ((double)((float)GEN_TOF(SQRT((float10)(float)((float10)param_3 * (float10)param_3 +
                                            (float10)param_2 * (float10)param_2)))) <=
        *(double *)&REFG(undefined, 0x1090b18)) {
      uVar2 = *(uint *)((int)param_1 + 0x15c);
      if (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        *(uint *)((int)param_1 + 0x15c) = uVar2;
      }
      if (*(int *)((int)param_1 + 0x15c) == 0) {
        *(undefined1 *)param_4 = 1;
        return uVar2;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x15c) = 5;
    }
  }
  return uVar2;
}

/* ref: FUN_00af3cc0 */
uint F_00af3cc0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf3cc0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float * pfVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined3 extraout_var_00 = 0;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  double dVar15;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(float * PTR32 *)(gen_frame + 0x4c)) = param_7;
  if ((char)param_6 == '\0') {
    *param_8 = param_2;
    param_8[1] = 0.0;
    param_8[2] = param_3;
    fVar14 = (float)((float10)param_2 * (float10)param_2 + (float10)param_3 * (float10)param_3);
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar14))))));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar6;
    fVar13 = (float10)0;
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar6)));
    bVar10 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
    bVar11 = bVar10 || fVar12 == fVar13;
    pfVar6 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)param_7) >> 0x10),
                               CONCAT11(bVar11 << 6 | bVar10 << 2 | 2U | !(fVar13 <= fVar12),
                                        (char)param_7))));
    if (bVar10 != bVar11) goto LAB_00af4245;
    (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
    bVar5 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar5 != 0) {
      uVar7 = F_00b6afa0();
      if (uVar7 != 0) {
        (*(float * PTR32 *)(gen_frame + 0x4c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10)));
        pvVar8 = (undefined *)F_00b6afa0();
        pfVar6 = (float *)F_00a5feb0(pvVar8);
        (*(float *)(gen_frame + 0x20)) = *pfVar6;
        (*(float *)(gen_frame + 0x28)) = pfVar6[2];
        pfVar6 = (float *)F_00a5feb0((*(float * PTR32 *)(gen_frame + 0x4c)));
        fVar14 = *pfVar6;
        (*(float *)(gen_frame + 0x34)) = 0.0;
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar14);
        fVar1 = pfVar6[2];
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar1);
        (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar14);
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar1);
        pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00aeece0(param_1))));
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar6;
      }
    }
    bVar5 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    uVar9 = CONCAT31(extraout_var,bVar5);
    if (bVar5 != 0) {
      uVar7 = F_00b6afa0();
      uVar9 = 0;
      if (uVar7 != 0) {
        (*(float *)(gen_frame + 0x44)) = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))) + 0xc0)));
        uVar7 = F_00b6afa0();
        if (uVar7 != 0) {
          (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(uVar7 + 0xc0) + (float10)(*(float *)(gen_frame + 0x44)))));
        }
        fVar14 = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) +
                        (float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)));
        (*(float *)(gen_frame + 0x48)) = fVar14;
        fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
        (*(float *)(gen_frame + 0x48)) = fVar14;
        if (((float10)fVar14 <= (float10)(*(float *)(gen_frame + 0x44))) && (0.0 < param_8[2])) {
          param_8[2] = 0.0;
        }
        bVar5 = F_00af2e30(param_1);
        uVar9 = CONCAT31(extraout_var_00,bVar5);
        if (bVar5 != 0) {
          fVar14 = *param_8;
          uVar9 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(ushort)bVar5);
          if (GEN_ISNAN(fVar14) == (GEN_ISNAN(fVar14) || fVar14 == 0.0)) {
            if ((float10)(*(float *)(gen_frame + 0x48)) <= (float10)*(double *)&REFG(undefined, 0x1090b18) * (float10)(*(float *)(gen_frame + 0x44))) {
              param_8[2] = (float)REFG(float, 0x10ebbf0);
            }
            if (((float10)(*(float *)(gen_frame + 0x48)) <= (float10)(*(float *)(gen_frame + 0x44))) && (0.0 < param_8[2])) {
              param_8[2] = 0.0;
            }
          }
        }
      }
    }
    fVar14 = (float)((float10)*param_8 * (float10)*param_8 +
                    (float10)param_8[2] * (float10)param_8[2]);
    (*(float *)(gen_frame + 0x48)) = fVar14;
    fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
    (*(float *)(gen_frame + 0x48)) = fVar14;
    fVar13 = (float10)0;
    fVar12 = (float10)fVar14;
    bVar10 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
    bVar11 = bVar10 || fVar12 == fVar13;
    pfVar6 = ((float *)GEN_TOP(CONCAT22((short)((uint)uVar9 >> 0x10),
                               CONCAT11(bVar11 << 6 | bVar10 << 2 | 2U | !(fVar13 <= fVar12),
                                        (char)uVar9))));
    if (bVar10 != bVar11) goto LAB_00af4245;
    F_004bd580(param_8);
    (*(char *)(gen_frame + 0x43)) = '\0';
    (*(float *)(gen_frame + 0x48)) = 0.0;
    (*(float *)(gen_frame + 0x44)) = 0.0;
    bVar5 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar5 == 0) {
LAB_00af4033: ;
      if (*(char *)((int)param_1 + 0x22) == '\0') {
        bVar5 = F_00ae7160();
        if (bVar5 != 0) {
          bVar5 = F_00af2e30(param_1);
          if (bVar5 != 0) goto LAB_00af404f;
LAB_00af4098: ;
          if (*(char *)((int)param_1 + 0x22) != '\0') goto LAB_00af409e;
          goto LAB_00af40b8;
        }
LAB_00af404f: ;
        bVar5 = F_00aee270(param_1);
        if ((bVar5 == 0) || (*(char *)((int)param_1 + 0x173) != '\0')) {
          uVar7 = F_00aed240();
          if ((uVar7 != 0) && ((char)param_5 == '\0')) {
            bVar5 = F_00ae9860();
            if (bVar5 == 0) goto LAB_00af4098;
          }
        }
        pfVar6 = *((float * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))) + 0xb0)));
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar6;
        fVar13 = F_00aeb260(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar6))));
      }
      else {
LAB_00af409e: ;
        if (*(char *)((int)param_1 + 0x28) == '\0') {
LAB_00af40b8: ;
          if ((REFG(int, 0x1375bbc) != 0) || (REFG(void * PTR32, 0x1375b90) == (undefined *)0x0)) goto LAB_00af40e8;
          dVar15 = F_00b6c830(REFG(void * PTR32, 0x1375b90));
          (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)dVar15 + (float10)*(double *)&REFG(undefined, 0x1080228)))));
          fVar13 = (float10)(float)((float10)dVar15 + (float10)*(double *)&REFG(undefined, 0x1080228));
        }
        else {
          (*(float * PTR32 *)(gen_frame + 0x4c)) = *(float * PTR32 *)((int)param_1 + 0x24);
          fVar13 = F_00aeb260(((float)gen_bits2f((unsigned int)(uintptr_t)(*(float * PTR32 *)((int)param_1 + 0x24)))));
        }
      }
      F_00518220(((undefined1 *)(gen_frame + 0x50)),(float)fVar13);
    }
    else {
      uVar7 = F_00b6afa0();
      if (uVar7 == 0) goto LAB_00af4033;
      bVar5 = F_00af2e30(param_1);
      if (bVar5 == 0) goto LAB_00af4033;
      fVar13 = F_00aeb260(((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))));
      F_00518220(((undefined1 *)(gen_frame + 0x50)),(float)fVar13);
      fVar14 = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30))
                      );
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar14))))));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar6;
      dVar15 = F_00ae7490(param_1);
      if (((dVar15 < (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c)))))) &&
          (fVar14 = *param_8, GEN_ISNAN(fVar14) == (GEN_ISNAN(fVar14) || fVar14 == 0.0))) &&
         (fVar14 = param_8[2], GEN_ISNAN(fVar14) != (GEN_ISNAN(fVar14) || fVar14 == 0.0))) {
        (*(char *)(gen_frame + 0x43)) = '\x01';
        dVar15 = F_0054cd20(&(*(float *)(gen_frame + 0x30)));
        (*(float *)(gen_frame + 0x48)) = (float)dVar15;
        pfVar6 = (float *)F_00ae7180(&(*(float *)(gen_frame + 0x10)));
        iVar3 = *(int *)((int)param_1 + 0x10);
        (*(float *)(gen_frame + 0x20)) = *pfVar6;
        (*(float *)(gen_frame + 0x24)) = pfVar6[1];
        iVar4 = *(int *)(iVar3 + 0x10);
        (*(float *)(gen_frame + 0x28)) = pfVar6[2];
        if ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x2dd2) >> 2 & 1) == 0)) {
          if ((char)param_4 != '\0') goto LAB_00af400f;
          fVar14 = *(float *)((int)param_1 + 0x3c);
        }
        else if ((char)param_4 == '\0') {
          fVar14 = *(float *)((int)param_1 + 0x4c);
        }
        else {
LAB_00af400f: ;
          fVar14 = *(float *)((int)param_1 + 0x40);
        }
        (*(float *)(gen_frame + 0x44)) = fVar14;
        fVar14 = F_00aa07e0(*(undefined * PTR32 *)(iVar3 + 0x10));
        (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar14 * (float10)(*(float *)(gen_frame + 0x44)));
      }
    }
LAB_00af40e8: ;
    pfVar6 = (float *)F_004eea10(param_8,(uint)((undefined1 *)(gen_frame + 0x50)));
    if ((*(char *)(gen_frame + 0x43)) == '\0') goto LAB_00af4245;
    bVar10 = GEN_ISNAN((*(float *)(gen_frame + 0x48))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar11 = bVar10 || (*(float *)(gen_frame + 0x48)) == *(float *)&REFG(undefined, 0x1088114);
    pfVar6 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar6) >> 0x10),
                               CONCAT11(bVar11 << 6 | bVar10 << 2 | 2U |
                                        !(*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x48))),(char)pfVar6))));
    if (bVar10 != bVar11) goto LAB_00af4245;
    F_004bd580(param_8);
    fVar14 = F_00ae8430();
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar14 * (float10)(*(float *)(gen_frame + 0x44))))));
    fVar13 = (float10)(float)((float10)fVar14 * (float10)(*(float *)(gen_frame + 0x44)));
    *param_8 = (float)(fVar13 * (float10)*param_8);
    param_8[1] = (float)(fVar13 * (float10)param_8[1]);
    param_8[2] = (float)(fVar13 * (float10)param_8[2]);
    uVar7 = F_00ae9430(*(undefined * PTR32 *)((int)param_1 + 0x10),&(*(float *)(gen_frame + 0x30)));
    F_004bd670(&(*(float *)(gen_frame + 0x10)),param_8,uVar7);
    uVar7 = F_0046f4a0(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x34)) = 0.0;
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) + (float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar14))))));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar6;
    fVar13 = (float10)0;
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar6)));
    bVar10 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
    bVar11 = bVar10 || fVar12 == fVar13;
    pfVar6 = ((float *)GEN_TOP(CONCAT22((short)(uVar7 >> 0x10),
                               CONCAT11(bVar11 << 6 | bVar10 << 2 | 2U | !(fVar13 <= fVar12),
                                        (char)uVar7))));
    if (bVar10 != bVar11) goto LAB_00af4245;
    F_004bd580(&(*(float *)(gen_frame + 0x30)));
    fVar13 = (float10)(*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x30)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar13);
    (*(float *)(gen_frame + 0x38)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x38)));
    pfVar6 = (float *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
    pvVar8 = *(undefined * PTR32 *)((int)param_1 + 0x10);
    (*(float *)(gen_frame + 0x10)) = *pfVar6;
    (*(float *)(gen_frame + 0x14)) = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = pfVar6[2];
    uVar7 = F_00ae9430(pvVar8,((undefined1 *)(gen_frame + 0x0)));
    pfVar6 = (float *)F_0046f4a0(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)),uVar7);
    *param_8 = *pfVar6;
    param_8[1] = pfVar6[1];
    fVar14 = pfVar6[2];
  }
  else {
    pfVar6 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))));
    fVar1 = *(*(float * PTR32 *)(gen_frame + 0x4c));
    fVar2 = *pfVar6;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar1 - (float10)fVar2);
    fVar14 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x4c))[2] - (float10)pfVar6[2]);
    (*(float *)(gen_frame + 0x28)) = fVar14;
    *param_8 = (float)((float10)fVar1 - (float10)fVar2);
  }
  param_8[2] = fVar14;
  param_8[1] = 0.0;
LAB_00af4245: ;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)pfVar6;
}

/* ref: FUN_00af4260 */
uint F_00af4260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xaf4260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  float * param_7 = (float *)(uintptr_t)gen_a7;
  undefined1 * param_8 = (undefined1 *)(uintptr_t)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float * pfVar6;
  float * pfVar7;
  float10 fVar8;
  
  iVar4 = *(int *)((int)this + 0x10);
  *param_8 = 0;
  pfVar7 = (float *)(iVar4 + 0x20);
  fVar1 = *param_2;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar2 = (float)((float10)fVar1 * (float10)fVar1 + (float10)param_2[2] * (float10)param_2[2]);
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  pfVar6 = param_2;
  if ((float10)0 < (float10)fVar2) {
    fVar8 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)param_2[2])));
    fVar1 = (float)fVar8;
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar8 = F_00aeb260(fVar1);
    (*(float *)(gen_frame + 0x18)) = (float)fVar8;
    fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar1 = (float)((float10)(float)fVar8 - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar8 = F_00aeb260(fVar1);
    *(float *)((int)this + 0xd0) = (float)fVar8;
    if ((char)param_6 == '\0') {
      (*(float *)(gen_frame + 0x0)) = *param_2;
      (*(float *)(gen_frame + 0x4)) = param_2[1];
      (*(float *)(gen_frame + 0x8)) = param_2[2];
      F_004bd580(&(*(float *)(gen_frame + 0x0)));
      pfVar6 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      fVar1 = *pfVar6;
      fVar8 = (float10)(*(float *)(gen_frame + 0x0));
      (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + fVar8);
      fVar2 = pfVar6[1];
      fVar5 = (float10)(*(float *)(gen_frame + 0x4));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 + fVar5);
      fVar3 = pfVar6[2];
      *(undefined1 *)(iVar4 + 0x30) = 1;
      fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x8)));
      (*(float *)(gen_frame + 0x8)) = fVar3;
      *pfVar7 = (float)((float10)fVar1 + fVar8);
      *(float *)(iVar4 + 0x24) = (float)((float10)fVar2 + fVar5);
    }
    else {
      *pfVar7 = *param_7;
      *(float *)(iVar4 + 0x24) = param_7[1];
      fVar3 = param_7[2];
      *(undefined1 *)(iVar4 + 0x30) = 0;
    }
    *(float *)(iVar4 + 0x28) = fVar3;
    if (((*(char *)((int)this + 0x17) == '\0') || (*(char *)((int)this + 0x14) == '\0')) &&
       (*(char *)((int)this + 0x1c) != (char)param_3)) {
      *(char *)((int)this + 0x1c) = (char)param_3;
    }
    *(char *)(iVar4 + 0x3d) = (char)param_3;
    *param_8 = 1;
    if (*(char *)(iVar4 + 100) == '\0') {
      *(undefined1 *)(iVar4 + 100) = 1;
    }
    pfVar6 = *(float * PTR32 *)((int)this + 0x10);
    if (*(char *)((int)pfVar6 + 0x66) != '\0') {
      *(undefined1 *)((int)pfVar6 + 0x66) = 0;
    }
    if (*(char *)((int)this + 0x1a) != '\0') {
      pfVar6 = (float *)F_00af20e0(*(undefined * PTR32 *)((int)this + 0x10),pfVar7,(int)this + 0x104);
    }
    *(undefined1 *)(iVar4 + 0x5c) = (undefined1)param_5;
  }
  return (uint)pfVar6;
}

/* ref: FUN_00af43e0 */
uint F_00af43e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xaf43e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  memcpy(&gen_args[7], &gen_a7, sizeof gen_a7);
  gen_args[8] = gen_a8;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  char * pcVar6;
  undefined4 in_EAX = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  uint extraout_EAX_01 = 0;
  uint extraout_EAX_02 = 0;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  float local_8;
  
  pcVar6 = (*(char * PTR32 *)&gen_args[8]);
  iVar4 = *(int *)((*(int *)&gen_args[0]) + 0x10);
  *(*(char * PTR32 *)&gen_args[8]) = '\0';
  fVar1 = *(float *)(iVar4 + 0x34);
  (*(char * PTR32 *)&gen_args[8]) = ((char *)GEN_TOP(((uint)(*(char * PTR32 *)&gen_args[8]) & 0xffffff)));
  local_8 = 0.0;
  if ((char)(*(uint *)&gen_args[6]) != '\0') {
    fVar9 = F_00aeb260(((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + 0x10))) +
                                                    0xb0))) - (float10)(*(float *)&gen_args[7])))));
    uVar7 = extraout_EAX;
    if ((float10)REFG(float, 0x1339b38) < (float10)((float)GEN_TOF(ABS(fVar9)))) {
      local_8 = (*(float *)&gen_args[7]);
      *pcVar6 = '\x01';
      (*(char * PTR32 *)&gen_args[8]) = ((char *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(char * PTR32 *)&gen_args[8]), 0, 3))));
      goto LAB_00af4654;
    }
LAB_00af464f: ;
    if (*pcVar6 == '\0') {
      return uVar7;
    }
    goto LAB_00af4654;
  }
  if ((char)(*(uint *)&gen_args[4]) == '\0') {
    if (GEN_ISNAN((*(float *)&gen_args[1])) == (GEN_ISNAN((*(float *)&gen_args[1])) || (*(float *)&gen_args[1]) == 0.0)) goto LAB_00af4494;
    fVar9 = ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2])));
    if (!((float10)0 <
         (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 +
                                              ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])) * ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])))))))))) {
      return (uint)(*(float * PTR32 *)&gen_args[2]);
    }
    fVar9 = ((float10)GEN_TOD(atan2(((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))),((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])))));
    fVar9 = F_00aeb260((float)fVar9);
    fVar2 = (float)fVar9;
    fVar9 = F_00aeb260(((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + 0x10))) +
                                                    0xb0))) - (float10)fVar2))));
    uVar7 = extraout_EAX_01;
    if (!((float10)REFG(float, 0x1339b38) < (float10)((float)GEN_TOF(ABS(fVar9))))) goto LAB_00af464f;
    if (*(int *)((*(int *)&gen_args[0]) + 0x158) == 0) {
      (*(char * PTR32 *)&gen_args[8]) = ((char *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(char * PTR32 *)&gen_args[8]), 0, 3))));
      *pcVar6 = '\x01';
      local_8 = fVar2;
      goto LAB_00af4654;
    }
    fVar9 = F_00aeb260(((float)GEN_TOF(((float10)fVar2 -
                                (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + 0x10))) + 0xb0
                                                   )))))));
    fVar2 = (float)fVar9;
    fVar3 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    fVar9 = F_00af2e80((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[3]),(int)&(*(char * PTR32 *)&gen_args[8]) + 3);
    fVar3 = (float)(fVar9 * (float10)fVar3);
    (*(uint *)&gen_args[6]) = (uint)gen_fl2bits(fVar3);
    if ((float10)((float)GEN_TOF(ABS((float10)fVar2))) < (float10)fVar3) {
      (*(uint *)&gen_args[6]) = (uint)gen_fl2bits(((float)GEN_TOF(ABS((float10)fVar2))));
    }
    if (!GEN_ISNAN(fVar2) && !(0.0 <= fVar2)) {
      (*(uint *)&gen_args[6]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[6])))) * (float10)REFG(double, 0x1094890)));
    }
    fVar9 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + 0x10))) + 0xb0))) +
            ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[6]))));
  }
  else {
    bVar5 = GEN_ISNAN((*(float *)&gen_args[1]));
    bVar8 = bVar5 || (*(float *)&gen_args[1]) == 0.0;
    if (bVar5 != bVar8) {
      return CONCAT22((short)((uint)in_EAX >> 0x10),
                      CONCAT11(bVar8 << 6 | bVar5 << 2 | 2U | !(0.0 <= (*(float *)&gen_args[1])),(char)in_EAX));
    }
LAB_00af4494: ;
    fVar2 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    fVar9 = F_00af2e80((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[3]),(int)&(*(char * PTR32 *)&gen_args[8]) + 3);
    fVar9 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x10) + 0x10))) + 0xb0))) +
            (float10)((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar2) * (float10)(*(float *)&gen_args[1]))));
  }
  fVar9 = F_00aeb260((float)fVar9);
  *pcVar6 = '\x01';
  uVar7 = extraout_EAX_00;
  local_8 = (float)fVar9;
LAB_00af4654: ;
  *(float *)(iVar4 + 0x34) = local_8;
  if (*pcVar6 != '\0') {
    if (*(char *)(iVar4 + 0x65) == '\0') {
      *(undefined1 *)(iVar4 + 0x65) = 1;
    }
    F_00ae9e50((*(int *)&gen_args[0]),fVar1);
    uVar7 = extraout_EAX_02;
    if (*(char *)((*(int *)&gen_args[0]) + 0x1a) != '\0') {
      uVar7 = F_00af2190(*(undefined4 *)((*(int *)&gen_args[0]) + 0x10),iVar4 + 0x20,(*(int *)&gen_args[0]) + 0x104);
    }
    uVar7 = CONCAT31((int3)(uVar7 >> 8),(undefined1)(*(undefined4 *)&gen_args[5]));
    *(undefined1 *)(iVar4 + 0x5d) = (undefined1)(*(undefined4 *)&gen_args[5]);
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x171) = (*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[8]) + 3))));
  }
  return uVar7;
}

/* ref: FUN_00af46b0 */
unsigned int F_00af46b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaf46b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  float10 fVar2;
  
  if ((char)param_2 != '\0') {
    fVar2 = F_00aeb260(*(float *)(param_1 + 0xd0));
    uVar1 = F_00ae9230(*(undefined4 *)(param_1 + 0x10),(float)fVar2,param_4);
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x6c))) = uVar1;
  }
  F_00aef8e0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00af4710 */
unsigned int F_00af4710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf4710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (((((*(char *)((int)this + 0x14) != '\0') && ((char)param_1 == '\0')) &&
       (bVar3 = GEN_ISNAN(*(float *)((int)this + 0x2c)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
       bVar3 != (bVar3 || *(float *)((int)this + 0x2c) == *(float *)&REFG(undefined, 0x1088114)))) &&
      ((iVar2 = *(int *)(iVar1 + 0x204), iVar2 == 0 ||
       ((((iVar2 != 3 && (iVar2 != 4)) && (iVar2 != 2)) || (*(char *)(iVar1 + 0x24b) != '\0'))))))
     && (*(char *)(iVar1 + 100) == '\0')) {
    F_00affeb0(this);
  }
  if (((*(char *)((int)this + 0x15) != '\0') && ((char)param_2 == '\0')) &&
     (*(char *)(iVar1 + 0x65) == '\0')) {
    F_00affe40(this);
  }
  return 0;
}

/* ref: FUN_00af4790 */
byte F_00af4790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xaf4790u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(int *)(gen_frame + 0xa4)) = param_1;
  bVar4 = F_00a9fc70(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))));
  if (bVar4 == 0) {
    fVar1 = *param_2;
    (*(float *)(gen_frame + 0xa0)) = fVar1;
    fVar2 = *param_3;
    (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar2 - (float10)fVar1);
    (*(float *)(gen_frame + 0x94)) = (float)((float10)param_3[1] - (float10)param_2[1]);
    (*(float *)(gen_frame + 0x98)) = (float)((float10)param_3[2] - (float10)param_2[2]);
    fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_2[1]);
    fVar7 = (float10)(float)((float10)fVar2 - (float10)fVar1);
    fVar8 = (float10)(float)((float10)param_3[2] - (float10)param_2[2]);
    fVar2 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
    (*(float *)(gen_frame + 0xa8)) = fVar2;
    fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
    (*(float *)(gen_frame + 0xa8)) = fVar2;
    if ((float10)fVar2 <= (float10)REFG(float, 0x10ebbe4)) {
      *param_3 = fVar1;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
    }
    else {
      if ((GEN_ISNAN(param_7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN(param_7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || param_7 == REFG(float, 0x10ebbf0))) {
        param_7 = REFG(float, 0x1339ba0);
      }
      iVar3 = *(int *)((*(int *)(gen_frame + 0xa4)) + 0x10);
      (*(undefined2 *)(gen_frame + 0x60)) = 0;
      (*(undefined1 *)(gen_frame + 0x62)) = 0;
      (*(undefined2 *)(gen_frame + 0x80)) = 0;
      (*(undefined1 *)(gen_frame + 0x82)) = 0;
      (*(undefined4 *)(gen_frame + 0x88)) = 0;
      (*(char *)(gen_frame + 0xaf)) = '\0';
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = 0;
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x70)) = 0;
      (*(undefined4 *)(gen_frame + 0x74)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      fVar1 = *((float *)GEN_TOP((*(int *)(iVar3 + 0x10) + 0xc0)));
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      uVar5 = F_00af2a00(param_2,param_3,param_7,fVar1,&(*(float *)(gen_frame + 0x90)),&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),
                           (float)(float10)0);
      if ((char)uVar5 != '\0') {
        if ((char)param_6 == '\0') {
          *(undefined1 *)((*(int *)(gen_frame + 0xa4)) + 0x154) = 1;
        }
        *param_3 = *param_2;
        param_3[1] = param_2[1];
        param_3[2] = param_2[2];
        if (((*(char *)(gen_frame + 0xaf)) != '\0') && (param_4 != (undefined *)0x0)) {
          F_00affb20(param_4,&(*(undefined4 *)(gen_frame + 0x0)));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00af4fe0 */
uint F_00af4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xaf4fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  char * param_6 = (char *)(uintptr_t)gen_a6;
  char * param_7 = (char *)(uintptr_t)gen_a7;
  char * param_8 = (char *)(uintptr_t)gen_a8;
  undefined1 * param_9 = (undefined1 *)(uintptr_t)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  byte bVar8;
  uint3 extraout_var = 0;
  uint3 extraout_var_00 = 0;
  uint3 uVar9;
  char cVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  *param_6 = '\0';
  *param_7 = '\0';
  *param_8 = '\0';
  *param_9 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x204)));
  if ((iVar6 != 0) && (((iVar6 == 3 || (iVar6 == 4)) || (iVar6 == 2)))) {
    bVar8 = F_00afef80(param_5,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),((float *)(gen_frame + 0x8)));
    uVar9 = extraout_var;
    if ((bVar8 != 0) && (!((*(float *)(gen_frame + 0x4)) <= 0.0))) {
      fVar11 = F_00aeb3f0((uint)&(*(float *)(gen_frame + 0x0)));
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar11)));
      uVar9 = extraout_var_00;
      if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar11)) {
        *param_8 = '\x01';
        return CONCAT31(extraout_var_00,1);
      }
    }
    *param_8 = '\0';
    return (uint)uVar9 << 8;
  }
  fVar1 = *param_3;
  fVar14 = param_1[1];
  cVar10 = *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359)));
  (*(char *)(gen_frame + 0x3f)) = cVar10;
  (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar1 - (float10)fVar14);
  fVar2 = *param_2;
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar3 = param_2[2];
  ((float *)(gen_frame + 0x8))[0] = fVar3;
  fVar2 = (float)((float10)fVar2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar11 = (float10)(float)((float10)fVar1 - (float10)fVar14);
  if ((cVar10 == '\0') &&
     ((*(float *)(gen_frame + 0x34)) = (float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890)),
     fVar11 <= (float10)(float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890)))) {
    fVar12 = (float10)fVar3;
    fVar13 = (float10)fVar2;
    fVar1 = ((float)GEN_TOF(ABS(fVar11)));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar14 = (float)(fVar12 * fVar12 + fVar13 * fVar13);
    (*(float *)(gen_frame + 0x34)) = fVar14;
    fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
    (*(float *)(gen_frame + 0x34)) = fVar14;
    (*(float *)(gen_frame + 0x30)) = fVar14;
    fVar11 = ((float10)GEN_TOD(GEN_X87MATH((float10)REFG(float, 0x1339ba0),4)));
    (*(float *)(gen_frame + 0x34)) = (float)fVar11;
    fVar14 = (float)((float10)(float)fVar11 * (float10)fVar14);
    (*(float *)(gen_frame + 0x30)) = fVar14;
    fVar14 = ((float)GEN_TOF(ABS((float10)fVar14)));
    (*(float *)(gen_frame + 0x30)) = fVar14;
    if ((float10)fVar14 < (float10)fVar1) {
      *param_6 = '\x01';
      goto LAB_00af5240;
    }
  }
  bVar8 = F_00afef80(param_5,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),((float *)(gen_frame + 0x8)));
  if ((bVar8 == 0) || (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 < (*(float *)(gen_frame + 0x4))))) {
LAB_00af513b: ;
    cVar10 = '\0';
  }
  else {
    fVar11 = F_00aeb3f0((uint)&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x2c)) = (float)fVar11;
    fVar11 = (float10)(float)fVar11;
    if ((!GEN_ISNAN(fVar11) && !GEN_ISNAN((float10)REFG(float, 0x1339ba0))) && !(fVar11 < (float10)REFG(float, 0x1339ba0)))
    goto LAB_00af513b;
    cVar10 = '\x01';
  }
  *param_8 = cVar10;
  if ((!((float10)REFG(float, 0x1339ba4) < (float10)(*(float *)(gen_frame + 0x38)))) && (cVar10 == '\0')) {
    fVar1 = *param_2;
    fVar14 = *param_1;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 - (float10)fVar14);
    fVar2 = param_2[1];
    fVar3 = param_1[1];
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar4 = param_2[2];
    fVar5 = param_1[2];
    ((float *)(gen_frame + 0x8))[0] = (float)((float10)fVar4 - (float10)fVar5);
    (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 - (float10)fVar14);
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
    F_004bd580(&(*(float *)(gen_frame + 0x10)));
    fVar1 = ((float)GEN_TOF(((float10)param_4[2] * (float10)(*(float *)(gen_frame + 0x18)) +
                   ((float10)*param_4 * (float10)(*(float *)(gen_frame + 0x10)) + (float10)param_4[1] * (float10)(*(float *)(gen_frame + 0x14)))
                   )));
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar14 = REFG(float, 0x1087f04);
    if (((float10)1 < (float10)fVar1) ||
       (fVar14 = REFG(float, 0x10ebbf0),
       (!GEN_ISNAN(REFG(float, 0x10ebbf0)) && !GEN_ISNAN(fVar1)) && (!(REFG(float, 0x10ebbf0) < fVar1) && REFG(uint, 0x10ebbf0) != fVar1))) {
      (*(float *)(gen_frame + 0x38)) = fVar14;
    }
    fVar11 = ((float10)GEN_TOD(GEN_X87MATH((float10)(*(float *)(gen_frame + 0x38)),7)));
    (*(float *)(gen_frame + 0x2c)) = (float)fVar11;
    fVar11 = F_00aeb260((float)fVar11);
    fVar1 = (float)fVar11;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x2c)) = (float)((float10)param_1[1] - (float10)*(double *)&REFG(undefined, 0x10928e8));
    if (((float10)*param_3 <
         (float10)(float)((float10)param_1[1] - (float10)*(double *)&REFG(undefined, 0x10928e8))) &&
       ((!GEN_ISNAN(REFG(float, 0x10ec4b0)) && !GEN_ISNAN(fVar1)) && (!(REFG(float, 0x10ec4b0) < fVar1) && REFG(uint, 0x10ec4b0) != fVar1)))
    {
      if ((*(char *)(gen_frame + 0x3f)) == '\0') {
        *param_7 = '\x01';
      }
      else {
        *param_8 = '\x01';
      }
    }
  }
  if ((*param_6 == '\0') && (*param_7 == '\0')) {
    return (uint)param_6;
  }
LAB_00af5240: ;
  iVar6 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10) + 0x204)));
  if ((iVar6 != 0) && (iVar6 == 1)) {
    *param_6 = '\0';
    *param_7 = '\0';
    return (uint)param_6;
  }
  *param_9 = 1;
  *param_8 = '\0';
  return (uint)param_8;
}

/* ref: FUN_00af52f0 */
uint F_00af52f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaf52f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined2 uVar7;
  uint uVar6;
  bool bVar8;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar3 + 0x204) == 0) &&
     ((*(char *)(param_1 + 8) == '\0' || ((char)param_2 == '\0')))) {
    iVar4 = *(int *)(iVar3 + 0x10);
    fVar1 = *(float *)(iVar4 + 0xe0);
    bVar5 = GEN_ISNAN(fVar1);
    bVar8 = bVar5 || fVar1 == 0.0;
    uVar7 = (undefined2)((uint)iVar4 >> 0x10);
    uVar6 = CONCAT22(uVar7,CONCAT11(bVar8 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar1),(char)iVar4));
    if (bVar5 == bVar8) {
      fVar2 = *(float *)(iVar3 + 0x448);
      bVar5 = GEN_ISNAN(fVar2);
      bVar8 = bVar5 || fVar2 == 0.0;
      uVar6 = CONCAT22(uVar7,CONCAT11(bVar8 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar2),(char)iVar4));
      if (bVar5 == bVar8) {
        *(uint *)(iVar3 + 0x44c) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
        *(undefined4 *)(iVar3 + 0x448) = 0;
        return uVar6;
      }
    }
  }
  else {
    uVar6 = F_00af2210(iVar3,param_3);
  }
  return uVar6;
}

/* ref: FUN_00af5360 */
uint F_00af5360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf5360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float * pfVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float10 fVar7;
  
  uVar6 = *(uint *)((int)this + 0x14);
  if ((uVar6 != 0) && (((uVar6 == 3 || (uVar6 == 4)) || (uVar6 == 2)))) {
    if ((((*(int *)((int)this + 0x10) != 0) &&
         (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar3 != 0)) &&
        (bVar4 = F_00a9f620(iVar3), bVar4 != 0)) && (REFG(char, 0x14c0ba4) != '\0')) {
      pfVar5 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      (*(float *)(gen_frame + 0x10)) = *pfVar5;
      fVar1 = pfVar5[2];
      (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 0)) = fVar1;
      (*(double *)(gen_frame + 0x18)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)),(uint)gen_fl2bits(fVar1)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar5 - (float10)*param_1);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = (float)((float10)fVar1 - (float10)param_1[2]);
      (*(double *)(gen_frame + 0x28)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)),
                                     (uint)gen_fl2bits((float)((float10)fVar1 - (float10)param_1[2])
                                                      )));
      F_00aeff30(this,((float *)(gen_frame + 0x0)));
      fVar7 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0));
      (*(double *)(gen_frame + 0x18)) = (double)(*(float *)(gen_frame + 0x8));
      (*(double *)(gen_frame + 0x28)) = (double)((float *)(gen_frame + 0x0))[0];
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x20)) + fVar7 * fVar7);
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) +
                     (float10)((float *)(gen_frame + 0x0))[0] * (float10)((float *)(gen_frame + 0x0))[0]);
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar1 < (float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x10ec4b8)) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x1094818));
      }
      if (REFG(char, 0x14c0cc6) == '\0') {
        uVar6 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 4) - (float10)param_1[1])));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        fVar7 = (float10)fVar1;
        fVar1 = ((float)GEN_TOF(ABS(fVar7)));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(ABS((float10)*(float *)((int)this + 0x40))));
        if ((float10)fVar1 <
            (float10)((float)GEN_TOF(ABS((float10)*(float *)((int)this + 0x40)))) *
            (float10)*(double *)&REFG(undefined, 0x109cac8)) {
          fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
          (*(float *)(gen_frame + 0x38)) = fVar1;
          if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
              ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
            fVar1 = (float)(fVar7 / (float10)fVar1);
            (*(float *)(gen_frame + 0x38)) = fVar1;
            fVar1 = ((float)GEN_TOF(((float10)REFG(double, 0x1088108) * (float10)*(float *)((int)this + 0x28) +
                           (float10)fVar1 * (float10)REFG(double, 0x1088108))));
            (*(float *)(gen_frame + 0x3c)) = fVar1;
            F_00aeae60(this,*(float *)((int)this + 0x20),fVar1);
            F_00ae7a70(this,(*(float *)(gen_frame + 0x3c)));
          }
        }
      }
    }
    uVar6 = *(uint *)((int)this + 0x10);
    if ((uVar6 != 0) && (*(int *)(uVar6 + 0x10) != 0)) {
      bVar4 = F_00a9f620(*(int *)(uVar6 + 0x10));
      uVar6 = CONCAT31(extraout_var,bVar4);
      if (bVar4 != 0) goto LAB_00af55be;
    }
    if (*(char *)((int)this + 0xa5) != '\0') {
      fVar1 = *(float *)((int)this + 0xa0);
      (*(float *)(gen_frame + 0x38)) = fVar1;
      if (((float10)*(float *)((int)this + 0x98) < (float10)fVar1) &&
         (*(int *)((int)this + 0x14) == 3)) {
        uVar6 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) - (float10)*(float *)(uVar6 + 4))));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        if (((double)fVar1 <= REFG(double, 0x1094800)) &&
           ((!GEN_ISNAN(*(float *)((int)this + 0x28)) && !GEN_ISNAN(REFG(float, 0x10ebcec))) &&
            !(*(float *)((int)this + 0x28) <= REFG(float, 0x10ebcec)))) {
          F_00ae7a70(this,(float)(float10)0);
          uVar6 = F_00aeae60(this,*(float *)((int)this + 0x20),*(float *)((int)this + 0x28));
        }
      }
    }
  }
LAB_00af55be: ;
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar3 != 0)) {
    bVar4 = F_00a9f620(iVar3);
    uVar6 = CONCAT31(extraout_var_00,bVar4);
    if (bVar4 != 0) {
      REFG(char, 0x14c0cc6) = '\0';
    }
  }
  return uVar6;
}

/* ref: FUN_00af55f0 */
uint F_00af55f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf55f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  int * piVar2;
  int in_ecx;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  
  (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(param_2[1]);
  iVar1 = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x98)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(char *)(gen_frame + 0x82)) = '\0';
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  if ((*(int *)(iVar1 + 0x10) == 0) || (bVar3 = F_00a9f620(*(int *)(iVar1 + 0x10)), bVar3 == 0)) {
    fVar6 = 0.0;
    piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
    if (piVar2 == (int *)0x0) goto LAB_00af5716;
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if (uVar4 != 1) {
      fVar6 = 0.0;
      goto LAB_00af5716;
    }
  }
  fVar6 = *((float *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0xc0)));
LAB_00af5716: ;
  iVar1 = *(int *)((int)this + 0x10);
  in_ecx = *(int *)(iVar1 + 0x10);
  (*(float *)(gen_frame + 0xa4)) = fVar6;
  (*(float *)(gen_frame + 0xac)) = *(float *)(in_ecx + 0xc0);
  (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1339ba4);
  if (((in_ecx == 0) || (bVar3 = F_00a9f620(in_ecx), bVar3 == 0)) &&
     ((piVar2 = *(int * PTR32 *)(iVar1 + 0x10), piVar2 == (int *)0x0 ||
      (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar4 != 1)))) {
    (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1339af4);
  }
  else {
    (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xac)) + (float10)(*(float *)(gen_frame + 0xa8))) + (float10)REFG(double, 0x1091858))));
  }
  bVar3 = F_00af0bb0(&(*(undefined4 *)(gen_frame + 0x90)),(*(float *)(gen_frame + 0xac)),(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xa8)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0)
  ;
  if (bVar3 != 0) {
    (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0xa8));
  }
  bVar3 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)),param_1);
  if (bVar3 == 0) {
    F_00aec9f0(*(undefined4 *)((int)this + 0x10),(uint)&(*(undefined4 *)(gen_frame + 0x90)));
  }
  iVar1 = *(int *)((int)this + 0x10);
  uVar5 = (*(undefined4 *)(gen_frame + 0x88));
  if ((*(char *)(gen_frame + 0x82)) == '\0') {
    uVar5 = (*(undefined4 *)(gen_frame + 0x3c));
  }
  *(undefined4 *)(iVar1 + 0x374) = uVar5;
  *(undefined4 *)(iVar1 + 0x378) = (*(undefined4 *)(gen_frame + 0x84));
  F_00affb20((undefined *)(iVar1 + 0x380),&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)(iVar1 + 0x410) = (*(undefined4 *)(gen_frame + 0x90));
  *(float *)(iVar1 + 0x414) = (*(float *)(gen_frame + 0x94));
  *(undefined4 *)(iVar1 + 0x418) = (*(undefined4 *)(gen_frame + 0x98));
  uVar4 = 0;
  if ((*(int *)(gen_frame + 0x44)) != 0) {
    uVar4 = F_00c9f0c0((undefined *)((*(int *)(gen_frame + 0x44)) + 0x58),iVar1 + 0x454);
  }
  return uVar4;
}

/* ref: FUN_00af5870 */
uint F_00af5870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaf5870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float * pfVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  uVar3 = 0;
  if ((*param_3 == '\0') &&
     (pfVar1 = (float *)((int)this + 0x28), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)))
  {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(char *)(gen_frame + 0x9f)) = '\0';
    if (*(char *)((int)this + 0x5b) != '\0') {
      fVar6 = gen_bits2f(param_2[1]);
      (*(float *)(gen_frame + 0x98)) = fVar6;
      (*(undefined * PTR32 *)(gen_frame + 0x94)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)this + 100))));
      fVar4 = (float10)*(float *)((int)this + 100);
      fVar5 = (float10)fVar6;
      if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4)) {
        return 0;
      }
      if (fVar5 <= fVar4) {
        (*(char *)(gen_frame + 0x9f)) = '\x01';
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = *(undefined * PTR32 *)((int)this + 0x10);
    fVar6 = F_00ae9520(*(undefined * PTR32 *)((int)this + 0x10));
    (*(float *)(gen_frame + 0x98)) = fVar6;
    fVar6 = F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0x94)));
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar6)));
    bVar2 = F_00af0bb0(param_2,(*(float *)(gen_frame + 0x98)),fVar6,&(*(float *)(gen_frame + 0x98)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0);
    if (bVar2 == 0) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      return (uint)param_1;
    }
    if (((*(char *)(gen_frame + 0x9f)) == '\0') &&
       ((!(((float10)GEN_TOD(gen_bits2f(param_2[1]))) <= (float10)(*(float *)(gen_frame + 0x98)) + (float10)*(double *)&REFG(undefined, 0x108bec8))
        || ((((((char)(*(undefined2 *)(gen_frame + 0x80)) != '\0' &&
               (uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)))),
               !((float10)(*(float *)(gen_frame + 0x74)) <= (float10)*(float *)(uVar3 + 4)))) ||
              (uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)))),
              !((float10)(*(float *)(gen_frame + 0x98)) <= (float10)*(float *)(uVar3 + 4)))) ||
             (bVar2 = F_00af0940(&(*(undefined4 *)(gen_frame + 0x0))), bVar2 == 0)) && (REFG(char, 0x14c0ba6) == '\0')))))) {
      bVar2 = F_00ae75d0(&REFG(undefined, 0x14c0a50));
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
    }
    *param_3 = '\x01';
    uVar3 = F_00affb20(param_4,&(*(undefined4 *)(gen_frame + 0x0)));
    param_2[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x98)));
    if (*(char *)((int)this + 0x5b) != '\0') {
      *param_2 = *(undefined4 *)((int)this + 0x60);
      param_2[1] = *(undefined4 *)((int)this + 100);
      param_2[2] = *(undefined4 *)((int)this + 0x68);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00af5ac0 */
uint F_00af5ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaf5ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  char * pcVar6;
  
  pcVar6 = param_3;
  if ((((*param_3 == '\0') &&
       (pfVar1 = (float *)((int)this + 0x28), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))
       ) && ((*(char *)((int)this + 0x5b) == '\0' ||
             (!((float10)*(float *)((int)this + 100) < ((float10)GEN_TOD(gen_bits2f(param_2[1])))))))) &&
     ((char)param_4 != '\0')) {
    bVar5 = F_00af0940(param_5);
    pcVar6 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
    if (bVar5 != 0) {
      fVar4 = *(float *)(param_5 + 4);
      uVar2 = *(undefined4 *)param_5;
      uVar3 = *(undefined4 *)(param_5 + 8);
      pcVar6 = param_5;
      if (((float10)GEN_TOD(gen_bits2f(param_2[1]))) <= (float10)fVar4 + (float10)*(double *)&REFG(undefined, 0x108bec8)) {
        *param_3 = '\x01';
        if (*(char *)((int)this + 0x5b) != '\0') {
          *param_2 = *(undefined4 *)((int)this + 0x60);
          param_2[1] = *(undefined4 *)((int)this + 100);
          param_2[2] = *(undefined4 *)((int)this + 0x68);
          return (uint)param_5;
        }
        *param_2 = uVar2;
        param_2[1] = (undefined4)gen_fl2bits(fVar4);
        param_2[2] = uVar3;
      }
    }
  }
  return (uint)pcVar6;
}

/* ref: FUN_00af5b90 */
uint F_00af5b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaf5b90u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  ulonglong uVar2;
  
  if ((char)param_5 == '\0') {
    iVar1 = (int)param_1 + 0xd0;
    if (*(char *)((int)param_1 + 0xa6) == '\0') {
      iVar1 = (int)param_1 + 0x80;
    }
    if (*(char *)(iVar1 + 0x24) != '\0') {
      F_00af0530(param_1,param_2);
    }
  }
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x14) = (undefined1)param_3;
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 4);
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x24) = 1;
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(float *)(iVar1 + 0x10) = param_4;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    param_5 = (int)param_1 + 0x80;
  }
  else {
    param_5 = (int)param_1 + 0xd0;
  }
  uVar2 = F_00427d90();
  *(ulonglong *)(param_5 + 0x40) = uVar2 + (longlong)((double)param_4 * *(double *)&REFG(undefined, 0x10912a8));
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 4);
  uVar2 = F_00427d90();
  *(ulonglong *)((int)param_1 + 0x78) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00af5cb0 */
uint F_00af5cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = (*(uint *)(gen_frame + 0x4)) >> 8;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
      if (*(int *)((int)this + 0x14) == 2) {
        (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar2,0x10);
      }
      if (*(char *)((int)this + 0x5b) != '\0') {
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),0x41);
      }
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),(*(uint *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d10 */
uint F_00af5d10(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,2,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d40 */
uint F_00af5d40(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,4,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d70 */
uint F_00af5d70(unsigned int gen_a0)
{
  GEN_ENTER(0xaf5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x49) = 0;
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      if (*(char *)((int)this + 0x4b) != '\0') {
        uVar2 = F_00aeb1c0(this,(int)this + 0x30,*(float *)((int)this + 0x44),0);
      }
    }
    else {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,0x10,0);
      REFG(undefined1, 0x14c0cc0) = 1;
    }
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xe0000000;
  *(undefined4 *)((int)this + 0x20) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x20), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x24) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x24), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x28) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x28), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x34) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x34), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x38) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x38), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return uVar2;
}

/* ref: FUN_00af5e30 */
uint F_00af5e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf5e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this_00;
  byte bVar5;
  float * pfVar6;
  undefined3 extraout_var = 0;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  pfVar7 = *(float * PTR32 *)((int)this + 0x10);
  if (pfVar7 != (float *)0x0) {
    this_00 = ((undefined *)(uintptr_t)gen_fl2bits((float)(pfVar7[4])));
    (*(undefined * PTR32 *)(gen_frame + 0xac)) = this_00;
    if (this_00 != (undefined *)0x0) {
      pfVar6 = (float *)F_00a5feb0(this_00);
      fVar1 = *param_1;
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      fVar2 = *pfVar6;
      (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar1 - (float10)fVar2);
      pfVar8 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[1])));
      (*(float * PTR32 *)(gen_frame + 0xd4)) = pfVar8;
      fVar3 = pfVar6[1];
      (*(float *)(gen_frame + 0xc4)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar8))) - (float10)fVar3);
      fVar4 = param_1[2];
      (*(float *)(gen_frame + 0xd8)) = fVar4;
      (*(float *)(gen_frame + 0xc8)) = (float)((float10)fVar4 - (float10)pfVar6[2]);
      fVar9 = (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar8))) - (float10)fVar3);
      fVar10 = (float10)(float)((float10)fVar1 - (float10)fVar2);
      fVar11 = (float10)(float)((float10)fVar4 - (float10)pfVar6[2]);
      fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9))));
      (*(float *)(gen_frame + 0xd0)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0xd0)) = fVar2;
      pfVar7 = pfVar6;
      if (!((float10)fVar2 <= (float10)*(float *)&REFG(undefined, 0x10ebbe8))) {
        (*(float *)(gen_frame + 0xb4)) = REFG(float, 0x1339ba4);
        (*(undefined2 *)(gen_frame + 0x60)) = 0;
        fVar9 = (float10)0;
        (*(undefined1 *)(gen_frame + 0x62)) = 0;
        (*(undefined2 *)(gen_frame + 0x80)) = 0;
        (*(undefined1 *)(gen_frame + 0x82)) = 0;
        (*(undefined4 *)(gen_frame + 0x88)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar1 + fVar9);
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        fVar2 = (float)((float10)REFG(float, 0x1339ba4) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar8))));
        (*(float *)(gen_frame + 0xc4)) = fVar2;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(float *)(gen_frame + 0xc8)) = (float)((float10)fVar4 + fVar9);
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar1 + fVar9);
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(float *)(gen_frame + 0x94)) = fVar2;
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar4 + fVar9);
        (*(undefined4 *)(gen_frame + 0x74)) = 0;
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        (*(undefined4 *)(gen_frame + 0x84)) = 0;
        fVar1 = *pfVar6;
        (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar1 + fVar9);
        fVar2 = (float)((float10)REFG(float, 0x1339ba4) + (float10)pfVar6[1]);
        (*(float *)(gen_frame + 0xc4)) = fVar2;
        fVar3 = pfVar6[2];
        (*(float *)(gen_frame + 0xc8)) = (float)(fVar9 + (float10)fVar3);
        (*(float *)(gen_frame + 0xb0)) = (float)((float10)fVar1 + fVar9);
        (*(float *)(gen_frame + 0xb4)) = fVar2;
        (*(float *)(gen_frame + 0xb8)) = (float)(fVar9 + (float10)fVar3);
        fVar9 = (float10)0;
        bVar5 = F_00af26b0(&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0x90)),(float)fVar9,(float)fVar9,&(*(float *)(gen_frame + 0xc0)),&(*(char *)(gen_frame + 0xdf)),
                             &(*(undefined4 *)(gen_frame + 0x0)),(float)fVar9);
        pfVar7 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
        if (bVar5 != 0) {
          if ((*(char *)(gen_frame + 0xdf)) == '\0') {
            fVar1 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xac)) + 0xc0);
            (*(float *)(gen_frame + 0xd0)) = 0.0;
            fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) - (float10)fVar1);
            (*(float *)(gen_frame + 0xd8)) = fVar1;
            if ((float10)0 < (float10)fVar1) {
              (*(float * PTR32 *)(gen_frame + 0xd4)) = &(*(float *)(gen_frame + 0xd8));
            }
            else {
              (*(float * PTR32 *)(gen_frame + 0xd4)) = &(*(float *)(gen_frame + 0xd0));
            }
            F_0046f4a0(&(*(float *)(gen_frame + 0xb0)),param_1,pfVar6);
            F_0046f0e0(&(*(float *)(gen_frame + 0xb0)),*(*(float * PTR32 *)(gen_frame + 0xd4)));
            pfVar7 = &(*(float *)(gen_frame + 0xb0));
            pfVar8 = &(*(float *)(gen_frame + 0x90));
          }
          else {
            F_0046f4a0(&(*(float *)(gen_frame + 0xb0)),param_1,pfVar6);
            F_0046f0e0(&(*(float *)(gen_frame + 0xb0)),(*(float *)(gen_frame + 0x40)));
            F_0046f0e0(&(*(float *)(gen_frame + 0xc0)),*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xac)) + 0xc0));
            pfVar7 = &(*(float *)(gen_frame + 0xc0));
            pfVar6 = (float *)F_004bd670(&(*(float *)(gen_frame + 0x90)),pfVar6,&(*(float *)(gen_frame + 0xb0)));
            pfVar8 = &(*(float *)(gen_frame + 0xb0));
          }
          pfVar7 = (float *)F_004bd670(pfVar8,pfVar6,pfVar7);
          *param_1 = *pfVar7;
          param_1[1] = pfVar7[1];
          param_1[2] = pfVar7[2];
        }
      }
    }
  }
  return (uint)pfVar7;
}

/* ref: FUN_00af6100 */
uint F_00af6100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf6100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  
  fVar3 = param_1[1];
  fVar1 = *param_1;
  (*(float *)(gen_frame + 0xcc)) = fVar3;
  fVar2 = param_1[2];
  fVar7 = (float10)fVar3;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(float *)(gen_frame + 0x94)) = (float)(fVar7 + (float10)REFG(float, 0x1339ba4));
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(float *)(gen_frame + 0xb4)) = (float)(fVar7 - (float10)*(double *)&REFG(undefined, 0x10d57f0));
  fVar7 = (float10)0;
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0xb0)) = fVar1;
  (*(float *)(gen_frame + 0x98)) = fVar2;
  (*(float *)(gen_frame + 0xb8)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  bVar4 = F_00af26b0(&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xb0)),(float)fVar7,(float)fVar7,&(*(float *)(gen_frame + 0xa0)),&(*(undefined1 *)(gen_frame + 0xcb)),&(*(undefined4 *)(gen_frame + 0x0)),
                       (float)fVar7);
  if (bVar4 != 0) {
    (*(float *)(gen_frame + 0xcc)) = 0.0;
    pfVar6 = ((float *)(gen_frame + 0x40));
    if (!(0.0 < ((float *)(gen_frame + 0x40))[0])) {
      pfVar6 = &(*(float *)(gen_frame + 0xcc));
    }
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0x98)));
    (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0x98)));
    uVar5 = F_0046f0e0(&(*(float *)(gen_frame + 0xb0)),*pfVar6);
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(*(float *)(gen_frame + 0x98)));
    *param_1 = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0x90)));
    param_1[1] = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0x94)));
    param_1[2] = (float)((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(*(float *)(gen_frame + 0x98)));
    return uVar5;
  }
  pfVar6 = *(float * PTR32 *)((int)this + 0x10);
  if ((pfVar6 != (float *)0x0) && (((undefined *)(uintptr_t)gen_fl2bits((float)(pfVar6[4]))) != (undefined *)0x0)) {
    pfVar6 = (float *)F_00a5feb0(((undefined *)(uintptr_t)gen_fl2bits((float)(pfVar6[4]))));
    *param_1 = *pfVar6;
    param_1[1] = pfVar6[1];
    param_1[2] = pfVar6[2];
  }
  return (uint)pfVar6;
}

/* ref: FUN_00af6310 */
unsigned int F_00af6310(unsigned int gen_a0)
{
  GEN_ENTER(0xaf6310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_10;
  
  if (*(char *)((int)this + 0x65) == '\0') {
    return 0;
  }
  fVar2 = *(float *)((int)this + 0x34);
  local_10 = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
  fVar5 = F_00aeb260((float)((float10)fVar2 - (float10)local_10));
  fVar6 = F_00af1c50(this,(float)fVar5,(int)this + 0x20);
  bVar4 = false;
  fVar5 = (float10)((float)GEN_TOF(ABS((float10)(float)fVar5)));
  fVar7 = (float10)((float)GEN_TOF(ABS((float10)(float)fVar6))) + (float10)REFG(float, 0x1339b38);
  if (((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 <= fVar5) &&
     (fVar6 = (float10)local_10 + (float10)(float)fVar6,
     fVar5 = (fVar6 - (float10)fVar2) * ((float10)local_10 - (float10)fVar2),
     (GEN_ISNAN((float10)0) || GEN_ISNAN(fVar5)) || (float10)0 < fVar5)) {
    local_10 = (float)fVar6;
  }
  else {
    bVar4 = true;
  }
  fVar1 = *(float *)((int)this + 0x50);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
    iVar3 = *(int *)((int)this + 0x58);
    if (iVar3 == 1) {
      if (!((float10)fVar1 <= (float10)*(float *)((int)this + 0x80))) goto LAB_00af640e;
      bVar4 = true;
    }
    else {
      if (((((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
             ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) || (iVar3 < 3)) ||
          (5 < iVar3)) || (!(REFG(float, 0x1087f04) <= *(float *)((int)this + 0x1b0)))) goto LAB_00af640e;
      bVar4 = true;
    }
  }
  else {
LAB_00af640e: ;
    if (!bVar4) goto LAB_00af641c;
  }
  local_10 = fVar2;
LAB_00af641c: ;
  F_00aeb260(local_10);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x48))))(*(int * PTR32 *)((int)this + 0x10));
  *(bool *)((int)this + 0x65) = !bVar4;
  return 0;
}

/* ref: FUN_00af6450 */
byte F_00af6450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xaf6450u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint param_11 = (uint)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int * piVar2;
  int in_ecx;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if (REFG(char, 0x14c0a40) == '\0') {
    return 0;
  }
  ((float *)(gen_frame + 0x8))[0] = 0.0;
  fVar6 = F_00ae9520(param_1);
  ((float *)(gen_frame + 0x8))[1] = fVar6;
  uVar5 = 0;
  while( true ) {
    if (((*(int *)((int)param_1 + 0x10) == 0) ||
        (bVar3 = F_00a9f620(*(int *)((int)param_1 + 0x10)), bVar3 == 0)) &&
       ((piVar2 = *(int * PTR32 *)((int)param_1 + 0x10), piVar2 == (int *)0x0 ||
        (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar4 != 1)))) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *((float *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0xc0)));
    }
    in_ecx = *(int *)((int)param_1 + 0x10);
    (*(float *)(gen_frame + 0x28)) = fVar6;
    ((float *)(gen_frame + 0x8))[3] = *(float *)(in_ecx + 0xc0);
    ((float *)(gen_frame + 0x8))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[2], REFG(float, 0x1339ba4));
    if (((in_ecx == 0) || (bVar3 = F_00a9f620(in_ecx), bVar3 == 0)) &&
       ((piVar2 = *(int * PTR32 *)((int)param_1 + 0x10), piVar2 == (int *)0x0 ||
        (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar4 != 1)))) {
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1339af4);
    }
    else {
      (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF((((float10)((float *)(gen_frame + 0x8))[3] + (float10)((float *)(gen_frame + 0x8))[2]) + (float10)REFG(double, 0x1091858))));
    }
    fVar6 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) + (float10)param_4) + (float10)((float *)(gen_frame + 0x8))[(int)(uVar5)])));
    (*(float *)(gen_frame + 0x18)) = fVar6;
    bVar3 = F_00af0bb0(param_2,fVar6,(*(float *)(gen_frame + 0x28)),param_3,param_5,0,0,param_6,0,0,0,0,3,param_10);
    if (bVar3 == 0) {
      return 0;
    }
    if (param_9 == (float *)0x0) {
      uVar4 = F_00a5feb0(*(undefined * PTR32 *)((int)param_1 + 0x10));
      fVar6 = *(float *)(uVar4 + 4);
    }
    else {
      fVar6 = *param_9;
    }
    (*(float *)(gen_frame + 0x20)) = fVar6;
    (*(float *)(gen_frame + 0x18)) = fVar6;
    fVar1 = (float)((float10)*param_3 - (float10)fVar6);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    if ((char)param_11 != '\0') {
      return 1;
    }
    if ((char)param_7 == '\0') break;
    fVar6 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x24) - (float10)fVar6)));
    (*(float *)(gen_frame + 0x1c)) = fVar6;
    if ((!((float10)REFG(float, 0x10928e4) < (float10)fVar6)) || (!(fVar1 < REFG(float, 0x109cb08)))) {
      if (((!GEN_ISNAN(REFG(float, 0x109cb08)) && !GEN_ISNAN(fVar6)) && (!(REFG(float, 0x109cb08) < fVar6) && REFG(uint, 0x109cb08) != fVar6)
          ) && ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10928e4))) && !(fVar1 <= REFG(float, 0x10928e4)))) {
        return 0;
      }
      break;
    }
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return 0;
    }
  }
  if ((float10)REFG(float, 0x10ebd70) < (float10)((float)GEN_TOF(ABS((float10)fVar1)))) {
    return 0;
  }
  if (((GEN_ISNAN(param_8) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
       ((GEN_ISNAN(param_8) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || param_8 == REFG(float, 0x10ebbf0))) &&
     ((float10)param_8 < (float10)((float)GEN_TOF(ABS((float10)fVar1))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00af6670 */
uint F_00af6670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf6670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int in_ecx;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  float fVar4;
  
  bVar2 = F_0054ccb0((undefined *)((int)this + 0x410),param_1);
  if (bVar2 != 0) {
    return CONCAT31(extraout_var,bVar2);
  }
  in_ecx = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  if ((in_ecx == 0) || (bVar2 = F_00a9f620(in_ecx), bVar2 == 0)) {
    fVar4 = 0.0;
    piVar1 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar1 == (int *)0x0) goto LAB_00af6780;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (uVar3 != 1) {
      fVar4 = 0.0;
      goto LAB_00af6780;
    }
  }
  fVar4 = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
LAB_00af6780: ;
  (*(float *)(gen_frame + 0x98)) = fVar4;
  fVar4 = F_00ae9520(this);
  (*(float *)(gen_frame + 0x9c)) = fVar4;
  bVar2 = F_00af0bb0(param_1,fVar4,(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x9c)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0);
  uVar3 = CONCAT31(extraout_var_00,bVar2);
  if (bVar2 != 0) {
    uVar3 = F_00aed0a0(this,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: FUN_00af67f0 */
uint F_00af67f0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf67f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  float fVar6;
  
  iVar1 = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(char *)(gen_frame + 0x82)) = '\0';
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(uint *)(gen_frame + 0x88)) = 0;
  if ((iVar1 == 0) || (bVar3 = F_00a9f620(iVar1), bVar3 == 0)) {
    fVar6 = 0.0;
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar2 == (int *)0x0) goto LAB_00af68f6;
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if (uVar4 != 1) {
      fVar6 = 0.0;
      goto LAB_00af68f6;
    }
  }
  fVar6 = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
LAB_00af68f6: ;
  iVar1 = *(int *)((int)this + 0x10);
  (*(float *)(gen_frame + 0xa4)) = fVar6;
  (*(float *)(gen_frame + 0xac)) = *(float *)(iVar1 + 0xc0);
  (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1339ba4);
  if (((iVar1 == 0) || (bVar3 = F_00a9f620(iVar1), bVar3 == 0)) &&
     ((piVar2 = *(int * PTR32 *)((int)this + 0x10), piVar2 == (int *)0x0 ||
      (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar4 != 1)))) {
    (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1339af4);
  }
  else {
    (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xac)) + (float10)(*(float *)(gen_frame + 0xa8))) + (float10)REFG(double, 0x1091858))));
  }
  puVar5 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
  (*(undefined4 *)(gen_frame + 0x90)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0x94)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0x98)) = puVar5[2];
  bVar3 = F_00af0bb0(&(*(undefined4 *)(gen_frame + 0x90)),(*(float *)(gen_frame + 0xac)),(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xa8)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0)
  ;
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    uVar4 = (*(uint *)(gen_frame + 0x88));
    if ((*(char *)(gen_frame + 0x82)) == '\0') {
      uVar4 = (*(uint *)(gen_frame + 0x3c));
    }
    *(uint *)((int)this + 0x374) = uVar4;
    *(undefined4 *)((int)this + 0x378) = (*(undefined4 *)(gen_frame + 0x84));
  }
  return uVar4;
}

/* ref: FUN_00af69f0 */
unsigned int F_00af69f0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf69f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x14) != '\0') {
    F_00af2f50(this);
  }
  if (*(char *)((int)this + 0x15) != '\0') {
    F_00af3110(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00af6a20 */
uint F_00af6a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf6a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  char cVar1;
  uint uVar2;
  uint local_8;
  
  cVar1 = *(char *)((int)this + 0x17);
  local_8 = (uint)this & 0xffffff00;
  F_00af3810(this);
  if ((*(char *)((int)this + 0x17) != cVar1) && (*(char *)((int)this + 0x17) == '\0')) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),1);
  }
  F_00aee3f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  F_00af3920(this,param_3,param_4);
  F_00aee570(this,param_3,param_4,param_7);
  F_00aee6d0(this,param_1,param_2);
  F_00aee900(this,param_1,param_2,local_8);
  if (((*(char *)((int)this + 0x173) != '\0') && (*(char *)((int)this + 0x14) != '\0')) &&
     (*(char *)((int)this + 0x171) == '\0')) {
    *(undefined1 *)((int)this + 0x173) = 0;
  }
  uVar2 = F_00af39f0(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00af6ad0 */
uint F_00af6ad0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, float gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf6ad0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint param_11 = (uint)gen_a10;
  float param_12 = (float)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00af3cc0(param_1,param_2,param_3,param_5,param_6,param_9,param_10,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00af4260(param_1,(undefined4)gen_fl2bits(param_3),&(*(undefined4 *)(gen_frame + 0x0)),param_5,param_6,param_7,param_9,
               param_10,param_13);
  uVar1 = F_00af43e0(param_1,param_4,&(*(undefined4 *)(gen_frame + 0x0)),param_5,param_6,param_8,param_11,param_12,param_14)
  ;
  if (*(char *)((int)param_1 + 0x1a) != '\0') {
    *(uint *)((int)param_1 + 0x150) = *(uint *)((int)param_1 + 0x134);
    return *(uint *)((int)param_1 + 0x134);
  }
  *(undefined4 *)((int)param_1 + 0x150) = 0;
  return uVar1;
}

/* ref: FUN_00af6bb0 */
uint F_00af6bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xaf6bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined4 * PTR32 * param_7 = (undefined4 * PTR32 *)(uintptr_t)gen_a7;
  int param_8 = (int)gen_a8;
  int param_9 = (int)gen_a9;
  int param_10 = (int)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int * piVar6;
  byte bVar8;
  byte bVar9;
  undefined3 extraout_var = 0;
  uint uVar10;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar11;
  undefined4 * PTR32 * ppuVar12;
  float * pfVar13;
  char * pcVar14;
  int iVar15;
  undefined * pvVar16;
  bool bVar17;
  bool bVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined3 extraout_var_01 = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x268)) = this;
  bVar8 = F_0054ccb0(param_1,param_2);
  if (bVar8 != 0) {
    return CONCAT31(extraout_var,bVar8);
  }
  iVar15 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10);
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0;
  (*(undefined2 *)(gen_frame + 0xf0)) = 0;
  (*(undefined1 *)(gen_frame + 0xf2)) = 0;
  (*(undefined4 *)(gen_frame + 0x100)) = 0;
  (*(float *)(gen_frame + 0x104)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  (*(undefined2 *)(gen_frame + 0x110)) = 0;
  (*(undefined1 *)(gen_frame + 0x112)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = (undefined4 *)iVar15;
  iVar15 = *(int *)(iVar15 + 0x10);
  (*(char *)(gen_frame + 0x263)) = '\0';
  if ((iVar15 == 0) || (bVar8 = F_00a9f620(iVar15), bVar8 == 0)) {
    fVar21 = 0.0;
    piVar6 = *(int * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x254)) + 0x10);
    if (piVar6 != (int *)0x0) {
      uVar10 = ((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6);
      if (uVar10 == 1) goto LAB_00af6dc8;
      fVar21 = 0.0;
    }
  }
  else {
LAB_00af6dc8: ;
    fVar21 = *((float *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x254)) + 0x10) + 0xc0)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar21)));
  fVar21 = F_00ae9520(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10));
  (*(float *)(gen_frame + 0x264)) = fVar21;
  bVar8 = F_00af0bb0(param_2,fVar21,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x254))))),&(*(float *)(gen_frame + 0x23c)),REFG(float, 0x10ebbf0),&(*(undefined4 * PTR32 *)(gen_frame + 0x1b0)),0,&(*(undefined4 *)(gen_frame + 0x90)),
                       0,0,&(*(undefined4 *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x263)),3,0);
  if ((bVar8 == 0) && ((*(char *)(gen_frame + 0x263)) == '\0')) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return CONCAT31(extraout_var_00,bVar8);
  }
  fVar21 = param_1[1];
  (*(float *)(gen_frame + 0x218)) = fVar21;
  (*(bool *)(gen_frame + 0x26e)) = false;
  (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x23c));
  fVar19 = (float10)fVar21;
  fVar21 = (float)((float10)(*(float *)(gen_frame + 0x23c)) - fVar19);
  (*(float *)(gen_frame + 0x264)) = fVar21;
  bVar17 = (float10)REFG(float, 0x1339ba4) < (float10)fVar21;
  if (bVar17) {
    (*(bool *)(gen_frame + 0x26e)) = true;
  }
  if (((char)(*(undefined2 *)(gen_frame + 0x110)) == '\0') ||
     (fVar21 = (float)((float10)(*(float *)(gen_frame + 0x104)) - fVar19), (*(float *)(gen_frame + 0x264)) = fVar21,
     !((float10)REFG(float, 0x1339ba4) < (float10)fVar21))) {
    (*(bool *)(gen_frame + 0x26e)) = bVar17;
    if (!bVar17) goto LAB_00af6f33;
  }
  else {
    (*(bool *)(gen_frame + 0x26e)) = true;
  }
  (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x4));
  fVar21 = F_00aea430(param_1,param_2);
  (*(float *)(gen_frame + 0x264)) = fVar21;
  if (((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xf0)) + 1)) == '\0') &&
     (fVar1 = (float)((float10)(*(float *)(gen_frame + 0x218)) - (float10)fVar21), (*(float *)(gen_frame + 0x264)) = fVar1,
     (float10)(*(float *)(gen_frame + 0x4)) < (float10)fVar1)) {
    (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x218));
  }
  fVar21 = (float)((float10)(*(float *)(gen_frame + 0x218)) + (float10)fVar21);
  (*(float *)(gen_frame + 0x264)) = fVar21;
  if ((float10)fVar21 < (float10)(*(float *)(gen_frame + 0x1dc))) {
    (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x218));
  }
LAB_00af6f33: ;
  (*(char *)(gen_frame + 0x253)) = '\0';
  (*(char *)(gen_frame + 0x263)) = '\0';
  (*(byte *)(gen_frame + 0x25b)) = 0;
  (*(byte *)(gen_frame + 0x262)) = 0;
  F_00af4fe0((*(undefined * PTR32 *)(gen_frame + 0x268)),param_1,param_2,&(*(float *)(gen_frame + 0x1dc)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1b0)),&(*(undefined4 *)(gen_frame + 0x90)),&(*(char *)(gen_frame + 0x253)),&(*(char *)(gen_frame + 0x263)),&(*(byte *)(gen_frame + 0x25b))
               ,&(*(byte *)(gen_frame + 0x262)));
  (*(float *)(gen_frame + 0x264)) = REFG(float, 0x1339b64);
  (*(byte *)(gen_frame + 0x26f)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c0)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)0x0;
  ((undefined4 * PTR32 *)(gen_frame + 0x1c8))[0] = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = (undefined4 *)0x0;
  (*(bool *)(gen_frame + 0x21f)) = (*(byte *)(gen_frame + 0x25b)) == 0;
  (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = 0;
  (*(double *)(gen_frame + 0x1f8)) = gen_bits2d((ulonglong)(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0))));
  do {
    fVar21 = (*(float *)(gen_frame + 0x1dc));
    if ((*(bool *)(gen_frame + 0x26e)) == false) {
      if ((*(char *)(gen_frame + 0x253)) == '\0') {
        fVar21 = (*(float *)(gen_frame + 0x23c));
        if ((*(char *)(gen_frame + 0x263)) == '\0') goto LAB_00af7010;
        fVar21 = F_00aea430(param_1,param_2);
        (*(float *)(gen_frame + 0x25c)) = fVar21;
        if ((float10)(*(float *)(gen_frame + 0x23c)) < (float10)param_2[1] - (float10)fVar21) {
          param_2[1] = (float)((float10)param_1[1] - (float10)fVar21);
        }
        else {
          param_2[1] = (*(float *)(gen_frame + 0x23c));
        }
      }
      else {
        param_2[1] = param_1[1];
      }
    }
    else {
LAB_00af7010: ;
      param_2[1] = fVar21;
    }
    (*(undefined1 *)(gen_frame + 0x182)) = 0;
    (*(undefined1 *)(gen_frame + 0x1a2)) = 0;
    (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(undefined4 *)(gen_frame + 0x128)) = 0;
    (*(float *)(gen_frame + 0x12c)) = 0.0;
    (*(float *)(gen_frame + 0x130)) = 0.0;
    (*(float *)(gen_frame + 0x134)) = 0.0;
    (*(float *)(gen_frame + 0x138)) = 0.0;
    (*(float *)(gen_frame + 0x13c)) = 0.0;
    (*(float *)(gen_frame + 0x140)) = 0.0;
    (*(float *)(gen_frame + 0x144)) = 0.0;
    (*(float *)(gen_frame + 0x148)) = 0.0;
    (*(float *)(gen_frame + 0x14c)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x150)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x158)) = 0;
    (*(undefined4 *)(gen_frame + 0x170)) = 0;
    (*(undefined4 *)(gen_frame + 0x174)) = 0;
    (*(undefined4 *)(gen_frame + 0x178)) = 0;
    (*(undefined4 *)(gen_frame + 0x190)) = 0;
    (*(undefined4 *)(gen_frame + 0x194)) = 0;
    (*(undefined4 *)(gen_frame + 0x198)) = 0;
    (*(undefined4 *)(gen_frame + 0x1a4)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
    (*(float *)(gen_frame + 0x1e4)) = param_2[1];
    (*(undefined2 *)(gen_frame + 0x180)) = 0;
    (*(undefined2 *)(gen_frame + 0x1a0)) = 0;
    (*(float *)(gen_frame + 0x1e8)) = param_2[2];
    bVar8 = F_00af4790((*(undefined * PTR32 *)(gen_frame + 0x268)),param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),&(*(undefined4 *)(gen_frame + 0x120)),param_9,0,(float)(float10)0);
    (*(byte *)(gen_frame + 0x252)) = bVar8;
    if (((((bVar8 != 0) && (param_8 != 0)) && (param_10 == 1)) &&
        ((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0xc)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x12c))),
         bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0xc) == (float10)(*(float *)(gen_frame + 0x12c))) &&
         (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x10)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x130))),
         bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x10) == (float10)(*(float *)(gen_frame + 0x130))))))) &&
       ((((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x14)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x134))),
          bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x14) == (float10)(*(float *)(gen_frame + 0x134))) &&
          ((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x18)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x138))),
           bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x18) == (float10)(*(float *)(gen_frame + 0x138))) &&
           (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x1c)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x13c))),
           bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x1c) == (float10)(*(float *)(gen_frame + 0x13c))))))) &&
         (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x20)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x140))),
         bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x20) == (float10)(*(float *)(gen_frame + 0x140))))) &&
        ((((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x24)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x144))),
           bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x24) == (float10)(*(float *)(gen_frame + 0x144))) &&
           (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x28)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x148))),
           bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x28) == (float10)(*(float *)(gen_frame + 0x148))))) &&
          (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x2c)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x14c))),
          bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x2c) == (float10)(*(float *)(gen_frame + 0x14c))))) &&
         (bVar8 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c4)),((undefined4 * PTR32 *)(gen_frame + 0x1c8))), bVar8 != 0)))))) {
      puVar11 = (undefined4 *)0x1;
      (*(byte *)(gen_frame + 0x26f)) = 1;
      goto LAB_00af7511;
    }
    if ((*(byte *)(gen_frame + 0x252)) != 0) {
      (*(byte *)(gen_frame + 0x252)) = 0;
      bVar8 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(float *)(gen_frame + 0x244)),((float *)(gen_frame + 0x248)));
      if (bVar8 != 0) {
        (*(byte *)(gen_frame + 0x252)) = 1;
      }
      bVar8 = F_00aefc10(param_1,param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),param_7,REFG(float, 0x1339b6c));
      (*(byte *)(gen_frame + 0x251)) = bVar8;
      (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = 0;
      gen_piece_set(&(*(double *)(gen_frame + 0x1f8)), 0, 5, (unsigned long long)((uint5)(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)))));
      bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)),param_1,&(*(undefined4 *)(gen_frame + 0x120)));
      bVar8 = (*(byte *)(gen_frame + 0x251));
      if ((bVar9 != 0) &&
         ((param_8 == 0 ||
          (bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)),param_1,param_8), bVar8 = (*(byte *)(gen_frame + 0x251)), bVar9 != 0)))) {
        bVar8 = 1;
        *param_2 = *param_3;
        (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = 1;
        gen_piece_set(&(*(double *)(gen_frame + 0x1f8)), 0, 5, (unsigned long long)(CONCAT14(1,(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0))))));
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
      }
      if (((param_9 < 3) &&
          ((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
           (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))))) &&
         (((*(byte *)(gen_frame + 0x252)) != 0 && (bVar8 != 0)))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1e0));
        (*(float *)(gen_frame + 0x204)) = (*(float *)(gen_frame + 0x1e4));
        (*(float *)(gen_frame + 0x208)) = (*(float *)(gen_frame + 0x1e8));
        if (param_9 + 1 < 2) {
          F_00aed710(param_1,param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),(uint)&(*(undefined4 *)(gen_frame + 0x120)));
          (*(float *)(gen_frame + 0x224)) = (*(float *)(gen_frame + 0x1e4));
          F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)),(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_3,param_4,param_5,
                       param_6,(undefined4 * PTR32 *)0x0,0,3,0);
          bVar8 = F_0054ccb0(&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
          if (bVar8 == 0) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = (*(undefined4 * PTR32 *)(gen_frame + 0x220));
            (*(float *)(gen_frame + 0x204)) = (*(float *)(gen_frame + 0x224));
            (*(float *)(gen_frame + 0x208)) = (*(float *)(gen_frame + 0x228));
          }
        }
        pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x268));
        (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
        (*(float *)(gen_frame + 0x224)) = param_2[1];
        (*(float *)(gen_frame + 0x228)) = param_2[2];
        F_00af49a0((*(undefined * PTR32 *)(gen_frame + 0x268)),&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 *)(gen_frame + 0x120)),1,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)));
        F_00aea070(pvVar16,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)));
        param_2[1] = (*(float *)(gen_frame + 0x204));
        ppuVar12 = &(*(undefined4 * PTR32 *)(gen_frame + 0x240));
        if (param_9 + 1 != 1) {
          ppuVar12 = param_7;
        }
        uVar22 = 1;
        puVar11 = &(*(undefined4 *)(gen_frame + 0x120));
        goto LAB_00af7491;
      }
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      break;
    }
    if ((*(bool *)(gen_frame + 0x26e)) == false) break;
    if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x110)) + 1)) != '\0') {
      F_00affb20(&(*(undefined4 *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)));
      bVar8 = F_00af0940(&(*(undefined4 *)(gen_frame + 0x90)));
      (*(byte *)(gen_frame + 0x25b)) = bVar8;
      (*(bool *)(gen_frame + 0x26e)) = false;
      break;
    }
    if ((0 < param_9) && (param_7 != (undefined4 * PTR32 *)0x0)) {
      (*(byte *)(gen_frame + 0x26f)) = 1;
      if (param_9 == 1) {
        (*(float *)(gen_frame + 0x264)) = REFG(float, 0x1339b60);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c0)) = *param_7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = param_7[1];
      ((undefined4 * PTR32 *)(gen_frame + 0x1c8))[0] = param_7[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = (undefined4 *)0x3;
      goto LAB_00af7514;
    }
    uVar10 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) + 1;
    (*(bool *)(gen_frame + 0x26e)) = false;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = uVar10;
    (*(double *)(gen_frame + 0x1f8)) = gen_bits2d(CONCAT44(uVar10,(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)))));
  } while (uVar10 < 2);
  if (((((*(byte *)(gen_frame + 0x25b)) == 0) && (0 < param_9)) && (param_7 != (undefined4 * PTR32 *)0x0)) &&
     (puVar11 = (undefined4 *)0x2, param_10 == 2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c0)) = *param_7;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = param_7[1];
    (*(byte *)(gen_frame + 0x26f)) = 1;
    ((undefined4 * PTR32 *)(gen_frame + 0x1c8))[0] = param_7[2];
LAB_00af7511: ;
    (*(byte *)(gen_frame + 0x26f)) = 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = puVar11;
  }
LAB_00af7514: ;
  bVar8 = F_0054ccb0(param_2,param_1);
  if ((bVar8 == 0) && ((*(byte *)(gen_frame + 0x26f)) != 0)) {
    fVar21 = *param_2;
    fVar1 = *param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar21 - (float10)fVar1))));
    fVar2 = param_2[1];
    fVar3 = param_1[1];
    (*(float *)(gen_frame + 0x224)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar4 = param_2[2];
    fVar5 = param_1[2];
    (*(float *)(gen_frame + 0x228)) = (float)((float10)fVar4 - (float10)fVar5);
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (undefined4 *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar21 - (float10)fVar1))));
    (*(float *)(gen_frame + 0x224)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x228)) = 0.0;
    ((float *)(gen_frame + 0x248))[0] = (float)((float10)fVar4 - (float10)fVar5);
    F_00ae74d0((*(float *)(gen_frame + 0x264)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
    fVar21 = *param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))) + (float10)fVar21))));
    fVar1 = param_1[1];
    (*(float *)(gen_frame + 0x204)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x244)));
    fVar2 = param_1[2];
    (*(float *)(gen_frame + 0x208)) = (float)((float10)fVar2 + (float10)((float *)(gen_frame + 0x248))[0]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))) + (float10)fVar21))));
    (*(float *)(gen_frame + 0x224)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x244)));
    (*(float *)(gen_frame + 0x228)) = (float)((float10)fVar2 + (float10)((float *)(gen_frame + 0x248))[0]);
    fVar21 = REFG(float, 0x1339b6c);
    if ((*(bool *)(gen_frame + 0x26e)) != false) {
      fVar21 = REFG(float, 0x1339b70);
    }
    (*(float *)(gen_frame + 0x264)) = fVar21;
    bVar8 = F_00aefc10(param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_3,param_7,param_7,fVar21);
    iVar15 = 3;
    if (bVar8 != 0) {
      iVar15 = 5;
    }
    if ((param_9 < iVar15) &&
       (((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
         (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))) && (bVar8 != 0)))) {
      *param_2 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x200)))));
      param_2[1] = (*(float *)(gen_frame + 0x204));
      param_2[2] = (*(float *)(gen_frame + 0x208));
      param_2[1] = param_1[1];
      uVar10 = F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)),param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,param_9 + 1,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x254)));
      return uVar10;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = &(*(undefined4 *)(gen_frame + 0x90));
  if (((*(bool *)(gen_frame + 0x26e)) != false) &&
     ((((param_9 < 1 || (param_7 == (undefined4 * PTR32 *)0x0)) && ((char)(*(undefined2 *)(gen_frame + 0xf0)) != '\0')) &&
      ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xf0)) + 1)) != '\0')))) {
    (*(bool *)(gen_frame + 0x21f)) = true;
    F_00afef80(&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1b0)),&(*(float *)(gen_frame + 0x1b4)),((float *)(gen_frame + 0x1b8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = &(*(undefined4 *)(gen_frame + 0x0));
  }
  bVar8 = F_0054ccb0(param_2,param_1);
  fVar21 = REFG(float, 0x1339b6c);
  if (((bVar8 == 0) && ((*(bool *)(gen_frame + 0x21f)) != false)) && ((*(byte *)(gen_frame + 0x262)) == 0)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1b0));
    (*(float *)(gen_frame + 0x224)) = (*(float *)(gen_frame + 0x1b4));
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x154) = 1;
    (*(float *)(gen_frame + 0x228)) = ((float *)(gen_frame + 0x1b8))[0];
    bVar8 = F_00aefc10(param_1,param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_7,fVar21);
    fVar21 = (*(float *)(gen_frame + 0x264));
    (*(byte *)(gen_frame + 0x251)) = bVar8;
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x264)) + 0)) = 0;
    (*(float *)(gen_frame + 0x264)) = gen_bits2f((uint)gen_fl2bits(fVar21) & 0xffffff00);
    bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)),param_1,(*(undefined4 * PTR32 *)(gen_frame + 0x254)));
    bVar8 = (*(byte *)(gen_frame + 0x251));
    if ((bVar9 != 0) &&
       ((param_8 == 0 ||
        (bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)),param_1,param_8), bVar8 = (*(byte *)(gen_frame + 0x251)), bVar9 != 0)))) {
      bVar8 = 1;
      *param_2 = *param_3;
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x264)) + 0)) = 1;
      (*(float *)(gen_frame + 0x264)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x264)), 1, 3),1));
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
    }
    if ((param_9 < 3) &&
       (((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
         (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))) && (bVar8 != 0)))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      (*(float *)(gen_frame + 0x218)) = param_1[1];
      (*(float *)(gen_frame + 0x204)) = param_1[1];
      (*(float *)(gen_frame + 0x208)) = param_1[2];
      if (param_9 + 1 < 2) {
        F_0046f4a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,param_1);
        fVar19 = (float10)REFG(double, 0x1088108);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1e0))))) * fVar19))));
        (*(float *)(gen_frame + 0x1e4)) = (float)((float10)(*(float *)(gen_frame + 0x1e4)) * fVar19);
        (*(float *)(gen_frame + 0x1e8)) = (float)(fVar19 * (float10)(*(float *)(gen_frame + 0x1e8)));
        F_004bd670(&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)));
        (*(float *)(gen_frame + 0x244)) = (*(float *)(gen_frame + 0x218));
        F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)),(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),param_3,param_4,param_5,param_6,
                     (undefined4 * PTR32 *)0x0,0,3,0);
        bVar8 = F_0054ccb0(&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)));
        if (bVar8 == 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = (*(undefined4 * PTR32 *)(gen_frame + 0x240));
          (*(float *)(gen_frame + 0x204)) = (*(float *)(gen_frame + 0x244));
          (*(float *)(gen_frame + 0x208)) = ((float *)(gen_frame + 0x248))[0];
        }
      }
      pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x268));
      puVar11 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
      param_2[1] = (*(float *)(gen_frame + 0x23c));
      (*(float *)(gen_frame + 0x244)) = (*(float *)(gen_frame + 0x23c));
      fVar21 = param_2[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = puVar11;
      ((float *)(gen_frame + 0x248))[0] = fVar21;
      F_00af49a0((*(undefined * PTR32 *)(gen_frame + 0x268)),&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),(*(undefined4 * PTR32 *)(gen_frame + 0x254)),0,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x264)))
                  );
      F_00aea070(pvVar16,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
      param_2[1] = (*(float *)(gen_frame + 0x204));
      ppuVar12 = &(*(undefined4 * PTR32 *)(gen_frame + 0x220));
      if (param_9 + 1 != 1) {
        ppuVar12 = param_7;
      }
      uVar22 = 2;
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x254));
LAB_00af7491: ;
      uVar10 = F_00af6bb0(pvVar16,(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_3,param_4,param_5,param_6,
                            ppuVar12,(int)puVar11,param_9 + 1,uVar22);
      return uVar10;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
  }
  bVar8 = F_0054ccb0(param_2,param_1);
  if (bVar8 == 0) {
    fVar21 = param_1[1];
    (*(byte *)(gen_frame + 0x262)) = bVar8;
    (*(float *)(gen_frame + 0x218)) = fVar21;
    (*(byte *)(gen_frame + 0x26f)) = bVar8;
    fVar1 = (float)((float10)param_2[1] - (float10)fVar21);
    (*(float *)(gen_frame + 0x25c)) = fVar1;
    if ((float10)REFG(float, 0x1339ba4) < (float10)fVar1) {
      fVar2 = *param_2;
      fVar3 = *param_1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar2 - (float10)fVar3))));
      fVar4 = param_2[2];
      fVar5 = param_1[2];
      ((float *)(gen_frame + 0x248))[0] = (float)((float10)fVar4 - (float10)fVar5);
      fVar19 = (float10)(float)((float10)fVar2 - (float10)fVar3);
      fVar20 = (float10)(float)((float10)fVar4 - (float10)fVar5);
      (*(double *)(gen_frame + 0x1f8)) = (double)fVar1;
      fVar2 = (float)(fVar19 * fVar19 + fVar20 * fVar20);
      (*(float *)(gen_frame + 0x25c)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x25c)) = fVar2;
      (*(float *)(gen_frame + 0x264)) = fVar2;
      fVar19 = ((float10)GEN_TOD(GEN_X87MATH((float10)REFG(float, 0x1339ba0),4)));
      (*(float *)(gen_frame + 0x25c)) = (float)fVar19;
      fVar2 = (float)((float10)(float)fVar19 * (float10)fVar2);
      (*(float *)(gen_frame + 0x25c)) = fVar2;
      if ((double)fVar2 < (double)fVar1) {
        (*(byte *)(gen_frame + 0x262)) = 1;
      }
    }
    if ((char)(*(undefined2 *)(gen_frame + 0x110)) != '\0') {
      pvVar16 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10);
      (*(float *)(gen_frame + 0x23c)) = (float)((float10)(*(float *)(gen_frame + 0x104)) - (float10)fVar21);
      F_00af6670(pvVar16,param_1);
      iVar15 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10);
      if ((*(char *)(iVar15 + 0x3e0) != '\0') && (*(char *)(iVar15 + 0x400) != '\0')) {
        (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x104)) - (float10)*(float *)(iVar15 + 0x3f4))));
      }
      if (((float10)REFG(float, 0x1339ba4) < (float10)(*(float *)(gen_frame + 0x23c))) && (*(char *)(iVar15 + 0x3e2) != '\0')) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = *(undefined4 * PTR32 *)(iVar15 + 0x380);
        (*(float *)(gen_frame + 0x204)) = *(float *)(iVar15 + 900);
        (*(float *)(gen_frame + 0x208)) = *(float *)(iVar15 + 0x388);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = *(undefined4 * PTR32 *)(iVar15 + 0x38c);
        (*(float *)(gen_frame + 0x1e4)) = *(float *)(iVar15 + 0x390);
        (*(float *)(gen_frame + 0x1e8)) = *(float *)(iVar15 + 0x394);
        (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = *(undefined4 * PTR32 *)(iVar15 + 0x398);
        (*(float *)(gen_frame + 0x224)) = *(float *)(iVar15 + 0x39c);
        (*(float *)(gen_frame + 0x228)) = *(float *)(iVar15 + 0x3a0);
        (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = *(undefined4 * PTR32 *)(iVar15 + 0x3a4);
        (*(float *)(gen_frame + 0x244)) = *(float *)(iVar15 + 0x3a8);
        ((float *)(gen_frame + 0x248))[0] = *(float *)(iVar15 + 0x3ac);
        F_00ae7ca0(&(*(undefined4 * PTR32 *)(gen_frame + 0x1f0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),0);
        fVar21 = (float)((float10)(*(float *)(gen_frame + 0x104)) - (float10)(*(float *)(gen_frame + 0x1f4)));
        (*(float *)(gen_frame + 0x264)) = fVar21;
        if ((float10)fVar21 < (float10)(*(float *)(gen_frame + 0x23c))) {
          (*(float *)(gen_frame + 0x23c)) = fVar21;
        }
      }
      if ((float10)REFG(float, 0x1339ba4) < (float10)(*(float *)(gen_frame + 0x23c))) {
        (*(byte *)(gen_frame + 0x26f)) = 1;
      }
    }
    if (((*(byte *)(gen_frame + 0x262)) != 0) || ((*(byte *)(gen_frame + 0x26f)) != 0)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x154) = 1;
      if ((param_9 < 3) &&
         ((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
          (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))))) {
        puVar11 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_1)));
        fVar1 = *param_2;
        (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = puVar11;
        (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = puVar11;
        fVar21 = param_1[1];
        (*(float *)(gen_frame + 0x218)) = fVar21;
        (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar11)))))));
        (*(float *)(gen_frame + 0x1e4)) = fVar21;
        fVar21 = param_1[2];
        (*(float *)(gen_frame + 0x264)) = fVar21;
        (*(float *)(gen_frame + 0x1e8)) = fVar21;
        fVar21 = (float)((float10)param_2[2] - (float10)fVar21);
        ((float *)(gen_frame + 0x248))[0] = fVar21;
        (*(undefined4 * PTR32 *)(gen_frame + 0x1f0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar11)))))));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) = fVar21;
        (*(double *)(gen_frame + 0x1f8)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)),(uint)gen_fl2bits(fVar21)));
        (*(float *)(gen_frame + 0x1f4)) = (float)(float10)0;
        uVar10 = F_004bd580(&(*(undefined4 * PTR32 *)(gen_frame + 0x1f0)));
        fVar21 = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) +
                        ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) +
                        (float10)(*(float *)(gen_frame + 0x1f4)) * (float10)(*(float *)(gen_frame + 0x1f4))))));
        (*(float *)(gen_frame + 0x25c)) = fVar21;
        fVar21 = ((float)GEN_TOF(SQRT((float10)fVar21)));
        (*(float *)(gen_frame + 0x25c)) = fVar21;
        fVar19 = (float10)0;
        fVar20 = (float10)fVar21;
        bVar17 = GEN_ISNAN(fVar20) || GEN_ISNAN(fVar19);
        bVar18 = bVar17 || fVar20 == fVar19;
        if (bVar17 != bVar18) {
          *param_2 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x254)))));
          param_2[1] = param_1[1];
          param_2[2] = param_1[2];
          return CONCAT22((short)(uVar10 >> 0x10),
                          CONCAT11(bVar18 << 6 | bVar17 << 2 | 2U | !(fVar19 <= fVar20),(char)uVar10
                                  ));
        }
        if ((*(byte *)(gen_frame + 0x26f)) == 0) {
          fVar19 = (float10)*(double *)&REFG(undefined, 0x10944e0);
          (*(undefined4 * PTR32 *)(gen_frame + 0x1f0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) * fVar19))));
          fVar20 = (float10)(*(float *)(gen_frame + 0x1f4)) * fVar19;
        }
        else {
          F_0046f4a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 *)(gen_frame + 0x100)),param_1);
          fVar21 = (float)((float10)((float *)(gen_frame + 0x248))[0] * (float10)((float *)(gen_frame + 0x248))[0] +
                          (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))));
          (*(float *)(gen_frame + 0x25c)) = fVar21;
          fVar21 = ((float)GEN_TOF(SQRT((float10)fVar21)));
          (*(float *)(gen_frame + 0x25c)) = fVar21;
          fVar19 = (float10)fVar21;
          (*(undefined4 * PTR32 *)(gen_frame + 0x1f0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(fVar19 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0)))))))));
          fVar20 = fVar19 * (float10)(*(float *)(gen_frame + 0x1f4));
        }
        (*(float *)(gen_frame + 0x1f4)) = (float)fVar20;
        fVar21 = ((float)GEN_TOF((fVar19 * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)))));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) = fVar21;
        (*(double *)(gen_frame + 0x1f8)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)),(uint)gen_fl2bits(fVar21)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x254)))))))));
        fVar1 = (float)((float10)(*(float *)(gen_frame + 0x218)) + (float10)(float)fVar20);
        (*(float *)(gen_frame + 0x244)) = fVar1;
        ((float *)(gen_frame + 0x248))[0] = (float)((float10)(*(float *)(gen_frame + 0x264)) + (float10)fVar21);
        (*(float *)(gen_frame + 0x204)) = fVar1;
        if ((*(byte *)(gen_frame + 0x26f)) != 0) {
          (*(float *)(gen_frame + 0x204)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x104)) -
                            ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x10))) +
                                                0xc0))) + (float10)REFG(float, 0x1339ba4)))));
        }
        F_00a64e00(&(*(undefined4 *)(gen_frame + 0x120)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (*(undefined4 * PTR32 *)(gen_frame + 0x240));
        (*(float *)(gen_frame + 0x224)) = (*(float *)(gen_frame + 0x204));
        (*(float *)(gen_frame + 0x228)) = ((float *)(gen_frame + 0x248))[0];
        (*(byte *)(gen_frame + 0x26f)) = 0;
        bVar8 = F_00af4790((*(undefined * PTR32 *)(gen_frame + 0x268)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 *)(gen_frame + 0x120)),3,1,(float)(float10)0);
        if (bVar8 == 0) {
          if ((param_8 == 0) || (param_10 != 4)) {
            *param_2 = *param_1;
            param_2[1] = param_1[1];
            param_2[2] = param_1[2];
          }
          else {
            (*(byte *)(gen_frame + 0x26f)) = 1;
            F_00affb20(&(*(undefined4 *)(gen_frame + 0x120)),param_8);
          }
        }
        else if ((((param_8 != 0) && (param_10 == 4)) &&
                 ((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0xc)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x12c))),
                  bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0xc) == (float10)(*(float *)(gen_frame + 0x12c))) &&
                  (((((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x10)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x130))),
                      bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x10) == (float10)(*(float *)(gen_frame + 0x130))
                                ) &&
                      (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x14)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x134))),
                      bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x14) == (float10)(*(float *)(gen_frame + 0x134))
                                ))) &&
                     (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x18)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x138))),
                     bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x18) == (float10)(*(float *)(gen_frame + 0x138)))
                     )) && ((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x1c)) ||
                                      GEN_ISNAN((float10)(*(float *)(gen_frame + 0x13c))),
                            bVar17 != (bVar17 ||
                                      (float10)*(float *)(param_8 + 0x1c) == (float10)(*(float *)(gen_frame + 0x13c))) &&
                            (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x20)) ||
                                      GEN_ISNAN((float10)(*(float *)(gen_frame + 0x140))),
                            bVar17 != (bVar17 ||
                                      (float10)*(float *)(param_8 + 0x20) == (float10)(*(float *)(gen_frame + 0x140)))))))
                   && (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x24)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x144))),
                      bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x24) == (float10)(*(float *)(gen_frame + 0x144))
                                ))))))) &&
                ((bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x28)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x148))),
                 bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x28) == (float10)(*(float *)(gen_frame + 0x148))) &&
                 (bVar17 = GEN_ISNAN((float10)*(float *)(param_8 + 0x2c)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x14c))),
                 bVar17 != (bVar17 || (float10)*(float *)(param_8 + 0x2c) == (float10)(*(float *)(gen_frame + 0x14c)))))))
        {
          (*(byte *)(gen_frame + 0x26f)) = 1;
        }
        bVar8 = F_0054ccb0(param_2,param_1);
        if (bVar8 == 0) {
          if ((*(byte *)(gen_frame + 0x26f)) == 0) {
            F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(float *)(gen_frame + 0x244)),((float *)(gen_frame + 0x248)));
            pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x268));
            (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
            (*(float *)(gen_frame + 0x224)) = param_2[1];
            (*(float *)(gen_frame + 0x228)) = param_2[2];
            F_00af49a0((*(undefined * PTR32 *)(gen_frame + 0x268)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 *)(gen_frame + 0x120)),0,0);
            F_00aea070(pvVar16,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)));
          }
          else {
            (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = (undefined4 *)0x0;
            (*(float *)(gen_frame + 0x244)) = 0.0;
            ((float *)(gen_frame + 0x248))[0] = 0.0;
            bVar8 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(float *)(gen_frame + 0x244)),((float *)(gen_frame + 0x248)));
            if (bVar8 == 0) {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
            }
            else {
              F_0046f4a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_1);
              fVar21 = ((float)GEN_TOF(((float10)(param_9 + 1) * (float10)*(float *)&REFG(undefined, 0x1339b68))));
              (*(float *)(gen_frame + 0x25c)) = fVar21;
              (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (undefined4 *)0x0;
              (*(float *)(gen_frame + 0x224)) = REFG(float, 0x1087f04);
              (*(float *)(gen_frame + 0x228)) = 0.0;
              F_00ae74d0(fVar21,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
              pfVar13 = (float *)F_004bd670(&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)));
              *param_2 = *pfVar13;
              param_2[1] = pfVar13[1];
              param_2[2] = pfVar13[2];
            }
          }
          param_2[1] = (*(float *)(gen_frame + 0x1e4));
          uVar10 = F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)),(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,param_3,param_4,param_5,param_6,
                                (undefined4 * PTR32 *)0x0,(int)&(*(undefined4 *)(gen_frame + 0x120)),param_9 + 1,4);
          return uVar10;
        }
      }
      else {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
      }
    }
  }
  bVar8 = F_0054ccb0(param_2,param_1);
  pcVar14 = ((char *)GEN_TOP(CONCAT31(extraout_var_01,bVar8)));
  if (bVar8 == 0) {
    if ((*(char *)(gen_frame + 0x253)) == '\0') {
      F_00affb20(param_6,&(*(undefined4 *)(gen_frame + 0x90)));
    }
    *param_4 = (*(char *)(gen_frame + 0x253));
    *param_5 = (*(char *)(gen_frame + 0x263));
    pcVar14 = param_5;
  }
  return (uint)pcVar14;
}

/* ref: FUN_00af80b0 */
uint F_00af80b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaf80b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar8;
  uint uVar7;
  bool bVar9;
  
  uVar5 = (*(undefined4 *)&gen_args[2]);
  F_00aefe70((*(int *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),(*(uint *)&gen_args[5]));
  uVar6 = 0;
  if ((*(float * PTR32 *)&gen_args[4]) != (float *)0x0) {
    uVar6 = 0;
    if (*(char *)((*(int *)&gen_args[0]) + 9) != '\0') {
      uVar6 = (*(uint *)&gen_args[5]) >> 8;
      (*(uint *)&gen_args[5]) = (*(uint *)&gen_args[5]) & 0xffffff00;
      if (*(char *)((*(int *)&gen_args[0]) + 8) == '\0') {
        (*(uint *)&gen_args[5]) = CONCAT31((int3)uVar6,1);
      }
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),*(char *)((*(int *)&gen_args[0]) + 8));
      uVar6 = F_00ae9300(*(undefined4 *)((*(int *)&gen_args[0]) + 4),GEN_TOF(*(*(float * PTR32 *)&gen_args[4])),(*(uint *)&gen_args[5]),(*(undefined4 *)&gen_args[2]));
    }
    *(uint *)((*(uint *)&gen_args[1]) + 0x50) = uVar6;
  }
  iVar3 = *(int *)((*(int *)&gen_args[0]) + 4);
  if ((*(int *)(iVar3 + 0x204) == 0) && ((*(char *)((*(int *)&gen_args[0]) + 8) == '\0' || ((char)uVar5 == '\0'))))
  {
    fVar1 = *((float *)GEN_TOP((*(int *)(iVar3 + 0x10) + 0xe0)));
    bVar4 = GEN_ISNAN(fVar1);
    bVar9 = bVar4 || fVar1 == 0.0;
    uVar8 = (undefined2)(uVar6 >> 0x10);
    uVar7 = CONCAT22(uVar8,CONCAT11(bVar9 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),(char)uVar6));
    if (bVar4 == bVar9) {
      fVar2 = *(float *)(iVar3 + 0x448);
      bVar4 = GEN_ISNAN(fVar2);
      bVar9 = bVar4 || fVar2 == 0.0;
      uVar7 = CONCAT22(uVar8,CONCAT11(bVar9 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar2),(char)uVar6));
      if (bVar4 == bVar9) {
        *(uint *)(iVar3 + 0x44c) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
        *(undefined4 *)(iVar3 + 0x448) = 0;
        return uVar7;
      }
    }
  }
  else {
    uVar7 = F_00af2210(iVar3,(*(float *)&gen_args[3]));
  }
  return uVar7;
}

/* ref: FUN_00af8190 */
float10 * F_00af8190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf8190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 * __return_storage_ptr__ = (float10 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined * this_00;
  bool bVar7;
  double dVar8;
  byte bVar9;
  undefined3 extraout_var = 0;
  uint uVar10;
  float10 * pfVar11;
  undefined3 extraout_var_00 = 0;
  float10 fVar12;
  float fVar13;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) {
    bVar9 = F_00a9f620(iVar5);
    if (bVar9 != 0) {
      if (REFG(char, 0x14c0a40) == '\0') {
        return ((float10 *)GEN_TOP(CONCAT31(extraout_var,bVar9)));
      }
      if (*((char *)GEN_TOP((*(float10 * PTR32 *)((int)this + 0x10) + 0x42))) == '\0') {
        return *(float10 * PTR32 *)((int)this + 0x10);
      }
    }
  }
  pfVar11 = *(float10 * PTR32 *)((int)this + 0x14);
  if (pfVar11 == (float10 *)0x0) {
    return (float10 *)0x0;
  }
  if (((pfVar11 != (float10 *)0x3) && (pfVar11 != (float10 *)&REFG(undefined, 0x4))) &&
     (pfVar11 != (float10 *)0x2)) {
    return pfVar11;
  }
  if ((((*(int *)((int)this + 0x10) == 0) ||
       (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 == 0)) ||
      (bVar9 = F_00a9f620(iVar5), bVar9 == 0)) &&
     ((iVar5 = *(int *)((int)this + 0x14), iVar5 != 0 && (*(char *)((int)this + 0x5b) == '\0')))) {
    (*(char *)(gen_frame + 0x1b)) = '\0';
    if ((iVar5 == 3) && (*(char *)((int)this + 0xa5) == '\0')) {
      (*(char *)(gen_frame + 0x1b)) = '\x01';
    }
    if (((iVar5 == 4) &&
        (fVar3 = *(float *)((int)this + 0x98),
        uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)))),
        dVar8 = (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)(uVar10 + 4)
                                                   )))))),
        (!GEN_ISNAN(REFG(double, 0x1094800)) && !GEN_ISNAN(dVar8)) && !(REFG(double, 0x1094800) < dVar8))) || ((*(char *)(gen_frame + 0x1b)) != '\0')) {
      uVar1 = *(undefined4 *)((int)this + 0x28);
      uVar2 = *(undefined4 *)((int)this + 0x20);
      pfVar11 = (float10 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)pfVar11 + 4);
      *(undefined4 *)((int)this + 0x4c) = uVar2;
      *(undefined4 *)((int)this + 0x50) = uVar1;
      *(undefined4 *)((int)this + 0x40) = 0;
      return pfVar11;
    }
  }
  fVar3 = *(float *)((int)this + 0x28);
  fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) - (float10)*(float *)((int)this + 0x4c))));
  fVar13 = *(float *)((int)this + 0x50);
  (*(float *)(gen_frame + 0x14)) = fVar13;
  fVar13 = (float)((float10)REFG(float, 0x1339b94) * (float10)fVar4 + (float10)fVar13);
  if (((float10)fVar13 < (float10)0) &&
     ((float10)REFG(float, 0x1339b9c) < (float10)((float)GEN_TOF(ABS((float10)fVar13))))) {
    fVar13 = gen_bits2f((uint)gen_fl2bits(REFG(float, 0x1339b9c)) ^ REFG(uint, 0x10920d0));
  }
  *(float *)((int)this + 0x28) = fVar13;
  if ((*(int *)((int)this + 0x14) == 3) && (fVar13 <= 0.0)) {
    F_00afa930(this,4);
  }
  (*(char *)(gen_frame + 0x1b)) = 0;
  bVar7 = (float10)*(float *)((int)this + 0x28) * (float10)fVar3 < (float10)0;
  if (bVar7) {
    (*(char *)(gen_frame + 0x1b)) = 1;
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x20);
  }
  (*(char *)(gen_frame + 0x1b)) = bVar7;
  if ((((*(int *)((int)this + 0x10) == 0) ||
       (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 == 0)) ||
      (bVar9 = F_00a9f620(iVar5), bVar9 == 0)) || ((*(char *)(gen_frame + 0x1b)) == '\0')) {
    fVar12 = ((float10)GEN_TOD(pow((float10)fVar4,(float10)*(double *)&REFG(undefined, 0x1092098))));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) * (float10)fVar4 +
                     ((float10)REFG(float, 0x1339b94) * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar12)));
  }
  else {
    fVar12 = F_00ae77d0((uint)&(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x14)) = (float)fVar12;
    *(undefined4 *)((int)this + 0x28) = 0;
    if (*(int *)((int)this + 0x14) == 3) {
      F_00afa930(this,4);
    }
  }
  fVar4 = *(float *)((int)this + 0x48);
  uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x14))) -
                 (float10)*(float *)(uVar10 + 4))));
  (*(float *)(gen_frame + 0x14)) = fVar4;
  if (((*(char *)(gen_frame + 0x1b)) == '\0') && ((float10)*(float *)((int)this + 0x28) <= -(float10)REFG(float, 0x1339b9c))) {
    (*(float *)(gen_frame + 0x8)) = *(float *)(REFG(int, 0x137104c) + 0x1198);
    if (REFG(float, 0x10ebd20) < (*(float *)(gen_frame + 0x8))) {
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10ebd20);
    }
    fVar13 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)*(float *)((int)this + 0x28))));
    if ((float10)((float)GEN_TOF(ABS((float10)fVar13))) < (float10)((float)GEN_TOF(ABS((float10)fVar4)))) {
      (*(float *)(gen_frame + 0x14)) = fVar13;
    }
  }
  if ((((*(int *)((int)this + 0x10) != 0) &&
       (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) &&
      (bVar9 = F_00a9f620(iVar5), bVar9 != 0)) &&
     ((((*(char *)(gen_frame + 0x1b)) != '\0' ||
       ((fVar4 = *(float *)((int)this + 0x28),
        (!GEN_ISNAN(fVar4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar4 <= *(float *)&REFG(undefined, 0x1088114)) &&
        (fVar4 < REFG(float, 0x10ebcec))))) && ((*(char *)((int)this + 0x58) == '\0' || ((*(char *)(gen_frame + 0x1b)) != '\0'))))))
  {
    F_00af5d40(this);
    *(undefined1 *)((int)this + 0x58) = 1;
  }
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) {
    bVar9 = F_00a9f620(iVar5);
    pfVar11 = ((float10 *)GEN_TOP(CONCAT31(extraout_var_00,bVar9)));
    if (bVar9 != 0) goto LAB_00af85e9;
  }
  pfVar11 = *(float10 * PTR32 *)((int)this + 0x14);
  if ((pfVar11 != (float10 *)0x0) && (*(char *)((int)this + 0x5b) == '\0')) {
    if (pfVar11 == (float10 *)&REFG(undefined, 0x4)) {
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x98);
      if (*(char *)((int)this + 0xa6) != '\0') {
        (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0xb4);
      }
      pfVar11 = (float10 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)*(float *)((int)pfVar11 + 4) + (float10)(*(float *)(gen_frame + 0x14)) < (float10)(*(float *)(gen_frame + 0x10))) {
        uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        uVar1 = *(undefined4 *)((int)this + 0x20);
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x10)) - (float10)*(float *)(uVar10 + 4))));
        pfVar11 = (float10 *)F_00a5feb0(this_00);
        *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)pfVar11 + 4);
        *(undefined4 *)((int)this + 0x4c) = uVar1;
        *(float *)((int)this + 0x50) = fVar3;
        *(float *)((int)this + 0x40) = (*(float *)(gen_frame + 0x14));
        return pfVar11;
      }
    }
    else if (pfVar11 == (float10 *)0x3) {
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x98);
      if (*(char *)((int)this + 0xa5) != '\0') {
        (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0xa0);
      }
      pfVar11 = (float10 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)(*(float *)(gen_frame + 0x10)) < (float10)*(float *)((int)pfVar11 + 4) + (float10)(*(float *)(gen_frame + 0x14))) {
        uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x10)) - (float10)*(float *)(uVar10 + 4))));
        pfVar11 = (float10 *)F_00aeae60(this,*(float *)((int)this + 0x20),fVar3);
      }
    }
  }
LAB_00af85e9: ;
  *(float *)((int)this + 0x40) = (*(float *)(gen_frame + 0x14));
  return pfVar11;
}

/* ref: FUN_00af8600 */
byte F_00af8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf8600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined * param_9 = (undefined *)(uintptr_t)gen_a9;
  char * param_10 = (char *)(uintptr_t)gen_a10;
  undefined1 * param_11 = (undefined1 *)(uintptr_t)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float * pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined * pvVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  undefined * pvVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0xe8)) = this;
  if (*(char *)((int)this + 0x5b) != '\0') {
    return 0;
  }
  fVar14 = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0xd0)) = fVar14;
  fVar3 = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0xd4)) = fVar3;
  fVar4 = (float)((float10)param_2[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0xd8)) = fVar4;
  (*(float *)(gen_frame + 0x90)) = fVar14;
  (*(float *)(gen_frame + 0x94)) = fVar3;
  (*(float *)(gen_frame + 0x98)) = fVar4;
  pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar4 * (float10)fVar4 +
                           ((float10)fVar3 * (float10)fVar3 + (float10)fVar14 * (float10)fVar14)))))));
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
  pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15)))))))));
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
  (*(char *)(gen_frame + 0xf2)) = '\0';
  (*(char *)(gen_frame + 0xf3)) = '\0';
  (*(char *)(gen_frame + 0x10e)) = '\0';
  (*(byte *)(gen_frame + 0x10f)) = 0;
  pvVar15 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = pvVar15;
  (*(undefined * PTR32 *)(gen_frame + 0xec)) = pvVar15;
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) + (float10)(float)REFG(float, 0x1339ba4)))));
  (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
  (*(undefined * PTR32 *)(gen_frame + 0xf4)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1339ba4)));
  uVar8 = F_00af2a00(param_1,param_2,(float)(float10)0,((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(float *)(gen_frame + 0xb0)),&(*(char *)(gen_frame + 0xf2)),param_5,
                       (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) + (float10)(float)REFG(float, 0x1339ba4)));
  fVar13 = (float10)0;
  (*(char *)(gen_frame + 0x10d)) = (char)uVar8;
  bVar7 = F_00af26b0(param_1,param_2,(float)fVar13,(float)fVar13,&(*(float *)(gen_frame + 0xb0)),&(*(char *)(gen_frame + 0xf3)),param_6,
                       (float)fVar13);
  fVar13 = (float10)0;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0)) = bVar7;
  (*(undefined * PTR32 *)(gen_frame + 0xf8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0xf8)), 1, 3),bVar7)));
  if ((char)param_12 != '\0') {
    fVar14 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10) + 0x10))) + 0xc0)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    (*(undefined * PTR32 *)(gen_frame + 0xec)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar14 + (float10)(float)REFG(float, 0x1339ba4)))));
    fVar10 = (float10)REFG(double, 0x1088108);
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar14 + (float10)(float)REFG(float, 0x1339ba4)) * fVar10)));
    (*(float *)(gen_frame + 0xb4)) = fVar3;
    fVar4 = *param_2;
    (*(float *)(gen_frame + 0xd0)) = (float)((float10)fVar4 + fVar13);
    fVar11 = (float10)fVar3;
    fVar3 = (float)(fVar11 + (float10)param_2[1]);
    (*(float *)(gen_frame + 0xd4)) = fVar3;
    fVar5 = param_2[2];
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)fVar5 + fVar13);
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)fVar4 + fVar13);
    (*(float *)(gen_frame + 0xa4)) = fVar3;
    ((float *)(gen_frame + 0xa8))[0] = (float)((float10)fVar5 + fVar13);
    fVar3 = *param_1;
    (*(float *)(gen_frame + 0xd0)) = (float)((float10)fVar3 + fVar13);
    fVar4 = (float)(fVar11 + (float10)param_1[1]);
    (*(float *)(gen_frame + 0xd4)) = fVar4;
    fVar5 = param_1[2];
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)fVar5 + fVar13);
    (*(float *)(gen_frame + 0xb0)) = (float)((float10)fVar3 + fVar13);
    (*(float *)(gen_frame + 0xb4)) = fVar4;
    (*(float *)(gen_frame + 0xb8)) = (float)((float10)fVar5 + fVar13);
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))))))));
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))))) * fVar10)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar10 * (float10)fVar14))));
    bVar7 = F_00af26b0(&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xa0)),(float)(float10)0,(float)(fVar10 * (float10)fVar14),
                         &(*(float *)(gen_frame + 0xd0)),&(*(char *)(gen_frame + 0x10e)),param_7,fVar3);
    (*(byte *)(gen_frame + 0x10f)) = bVar7;
    if ((bVar7 != 0) &&
       (bVar9 = GEN_ISNAN(*(float *)((int)param_7 + 0x40)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
       bVar9 != (bVar9 || *(float *)((int)param_7 + 0x40) == *(float *)&REFG(undefined, 0x1088114)))) {
      (*(byte *)(gen_frame + 0x10f)) = 0;
    }
  }
  pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0xf8));
  fVar13 = (float10)0;
  fVar10 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))));
  fVar11 = (float10)REFG(float, 0x1339b58);
  (*(undefined * PTR32 *)(gen_frame + 0xcc)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xf4)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xec)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(char *)(gen_frame + 0xf0)) = (*(char *)(gen_frame + 0x10d));
  (*(byte *)(gen_frame + 0xf1)) = (*(byte *)(gen_frame + 0x10f));
  if ((*(char *)(gen_frame + 0x10d)) != '\0') {
    pvVar6 = *(undefined * PTR32 *)((int)param_5 + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar6;
    if (fVar10 + fVar13 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar6)))) {
      (*(char *)(gen_frame + 0x10d)) = '\0';
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xcc)) = pvVar6;
    }
    (*(undefined * PTR32 *)(gen_frame + 0xcc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xcc))))) - (fVar11 + fVar13)))))));
    (*(undefined * PTR32 *)(gen_frame + 0xec)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar6))) - (fVar11 + fVar13)))))));
  }
  if ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) != '\0') {
    pvVar6 = *(undefined * PTR32 *)((int)param_6 + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar6;
    if (fVar10 + (float10)*(double *)&REFG(undefined, 0x109ce00) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar6)))) {
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = (undefined *)((uint)pvVar15 & 0xffffff00);
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xc8)) = pvVar6;
    }
    (*(undefined * PTR32 *)(gen_frame + 0xc8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8))))) -
                              ((float10)REFG(float, 0x1339b5c) + (float10)*(double *)&REFG(undefined, 0x109ce00))))))));
  }
  if ((*(byte *)(gen_frame + 0x10f)) != 0) {
    pvVar15 = *(undefined * PTR32 *)((int)param_7 + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15)));
    if (fVar10 + fVar13 < fVar12) {
      (*(byte *)(gen_frame + 0x10f)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)REFG(float, 0x10ec4c0) - (fVar11 + fVar13)))))));
      (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar12 - (fVar11 + fVar13)))))));
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = pvVar15;
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) - (fVar11 + fVar13)))))));
      (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar12 - (fVar11 + fVar13)))))));
    }
  }
  if ((((*(char *)(gen_frame + 0x10d)) == '\0') && ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) == '\0')) && ((*(byte *)(gen_frame + 0x10f)) == 0)) {
    (*(byte *)(gen_frame + 0x103)) = (*(byte *)(gen_frame + 0x10f));
  }
  else {
    (*(byte *)(gen_frame + 0x103)) = 1;
    fVar13 = (float10)REFG(float, 0x1339b38) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xcc)))));
    if ((fVar13 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8)))))) && (fVar13 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))))) {
      *param_4 = (uint)param_5;
    }
    else {
      pvVar15 = param_7;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) + (float10)REFG(float, 0x1339b38) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8))))))) {
        pvVar15 = param_6;
      }
      *param_4 = (uint)pvVar15;
    }
    if (((((*(char *)(gen_frame + 0x10d)) != '\0') && ((*(char *)(gen_frame + 0xf2)) == '\0')) ||
        (((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) != '\0' && ((*(char *)(gen_frame + 0xf3)) == '\0')))) || (((*(byte *)(gen_frame + 0x10f)) != 0 && ((*(char *)(gen_frame + 0x10e)) == '\0')))
       ) {
      return 1;
    }
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  if (((*(byte *)(gen_frame + 0x103)) != 0) && (*param_10 == '\0')) {
    F_00aed710(param_1,param_2,param_3,*param_4);
  }
  if (((undefined *)*param_4 == param_6) &&
     (pfVar1 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x28),
     !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))) {
    F_00af5ac0((*(undefined * PTR32 *)(gen_frame + 0xe8)),param_1,param_2,param_10,(*(undefined * PTR32 *)(gen_frame + 0xf8)),param_6,param_13);
    if (*param_10 == '\0') {
      if ((((*(char *)(gen_frame + 0x10d)) == '\0') && ((*(byte *)(gen_frame + 0x10f)) == 0)) && (bVar7 = F_00af0940(param_6), bVar7 != 0)) {
        *param_11 = 1;
      }
    }
    else {
      F_00a64e00(((undefined1 *)(gen_frame + 0x0)));
      pvVar15 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
      (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
      pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9520(pvVar15))));
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = pvVar15;
      pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0xfc))))));
      (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
      bVar7 = F_00af0bb0(param_2,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(undefined * PTR32 *)(gen_frame + 0xfc)),REFG(float, 0x10ebbf0),0,0,
                           ((undefined1 *)(gen_frame + 0x0)),0,0,0,0,3,0);
      if (bVar7 != 0) {
        F_00affb20(param_9,((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
  if (((*param_10 == '\0') && ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) == '\0')) && (((*(char *)(gen_frame + 0xf0)) != '\0' || ((*(byte *)(gen_frame + 0xf1)) != 0))))
  {
    if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108)))))) {
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = param_5;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = param_7;
    }
    bVar7 = F_00af0940((*(undefined * PTR32 *)(gen_frame + 0xf8)));
    if (bVar7 != 0) {
      F_00afef80((*(undefined * PTR32 *)(gen_frame + 0xf8)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xa4)),((float *)(gen_frame + 0xa8)));
      (*(float *)(gen_frame + 0xb0)) = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0xc);
      (*(float *)(gen_frame + 0xb4)) = gen_bits2f(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x10));
      uVar2 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x14);
      (*(char *)(gen_frame + 0x10e)) = '\0';
      (*(float *)(gen_frame + 0xb8)) = gen_bits2f(uVar2);
      bVar7 = F_00ae8170(param_1,&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xd0)),&(*(char *)(gen_frame + 0x10e)));
      if (bVar7 != 0) {
        F_0046f4a0(&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xd0)),param_1);
        fVar14 = F_004bd280(&(*(float *)(gen_frame + 0x90)));
        (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        if (0.0 < (*(float *)(gen_frame + 0x94))) {
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x44) != 0) &&
             (fVar14 = *((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x44) + 0x50))),
             GEN_ISNAN(fVar14) == (GEN_ISNAN(fVar14) || fVar14 == 0.0))) {
            *param_10 = '\x01';
            F_00affb20(param_9,(*(undefined * PTR32 *)(gen_frame + 0xf8)));
            F_00a64e00(((undefined1 *)(gen_frame + 0x0)));
            pvVar15 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
            fVar14 = F_00ae9520(pvVar15);
            (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
            pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490(pvVar15))));
            (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
            bVar7 = F_00af0bb0(param_2,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108))))),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(undefined * PTR32 *)(gen_frame + 0x104)),REFG(float, 0x10ebbf0),0,0,
                                 ((undefined1 *)(gen_frame + 0x0)),0,0,0,0,3,0);
            if (bVar7 != 0) {
              param_2[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))));
              F_00affb20(param_9,((undefined1 *)(gen_frame + 0x0)));
              return (*(byte *)(gen_frame + 0x103));
            }
          }
        }
        else if ((float10)fVar14 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))))) {
          pvVar15 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
          (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
          fVar14 = F_00ae9520(pvVar15);
          (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
          pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0x104))))));
          (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
          bVar7 = F_00af0bb0(&(*(float *)(gen_frame + 0xd0)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108))))),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(undefined * PTR32 *)(gen_frame + 0xf4)),REFG(float, 0x10ebbf0),0,0,0
                               ,0,0,0,0,3,0);
          if ((bVar7 != 0) &&
             (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) < (float10)(*(float *)(gen_frame + 0xd4)) - (float10)REFG(float, 0x1339b38)))) {
            *param_10 = '\x01';
            F_00affb20(param_9,(*(undefined * PTR32 *)(gen_frame + 0xf8)));
            fVar14 = param_3[1];
            (*(undefined * PTR32 *)(gen_frame + 0x104)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) - (float10)fVar14))));
            if (((float10)1 < (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) - (float10)fVar14)) &&
               ((*(char *)(gen_frame + 0x10e)) != '\0')) {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
              return (*(byte *)(gen_frame + 0x103));
            }
            *param_2 = (*(float *)(gen_frame + 0xd0));
            param_2[2] = (*(float *)(gen_frame + 0xd8));
            param_2[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))));
          }
        }
      }
    }
  }
  return (*(byte *)(gen_frame + 0x103));
}

/* ref: FUN_00af8d90 */
unsigned int F_00af8d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf8d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  bool bVar6;
  float fVar7;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    F_00aefee0(this);
    goto LAB_00af8e11;
  case 1: ;
  case 2: ;
    if (param_1 == 2) {
      if (((*(int *)((int)this + 0x10) != 0) &&
          (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
         (bVar3 = F_00a9f620(iVar1), bVar3 != 0)) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x10919f0));
      }
      *(undefined1 *)((int)this + 0x59) = 1;
    }
    F_00af5cb0(this);
    break;
  case 3: ;
  case 4: ;
    if (param_2 == 1) {
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1339b98);
      fVar7 = *(float *)((int)this + 0x5c);
      fVar2 = (*(float *)(gen_frame + 0x1c));
      if (GEN_ISNAN(fVar7) == (GEN_ISNAN(fVar7) || fVar7 == 0.0)) {
        (*(float *)(gen_frame + 0x1c)) = fVar7;
        *(undefined4 *)((int)this + 0x5c) = 0;
        fVar2 = (*(float *)(gen_frame + 0x1c));
      }
    }
    else {
      fVar2 = *(float *)&REFG(undefined, 0x10ebbcc);
      if (param_2 != 2) break;
    }
    F_00ae7a70(this,fVar2);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar4 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x1c));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar3 = F_00a9f620(iVar1), bVar3 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae0)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae8)));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar7 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)));
      bVar6 = GEN_ISNAN((float10)fVar7) || GEN_ISNAN((float10)0);
      if (bVar6 == (bVar6 || (float10)fVar7 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)));
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    break;
  case 5: ;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x44);
      uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)REFG(double, 0x10944b8) <= (float10)(*(float *)(gen_frame + 0x1c)) - (float10)*(float *)(uVar4 + 4)) {
        F_00aa3ff0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))),100,0);
      }
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) = 0;
    if ((((*(int *)((int)this + 0x10) != 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
        (bVar3 = F_00a9f620(iVar1), bVar3 != 0)) &&
       (bVar3 = F_00ae8560(*(undefined4 *)((int)this + 0x10)), bVar3 == 0)) {
      puVar5 = (undefined4 *)F_00aeff30(this,&(*(undefined4 *)(gen_frame + 0x0)));
      *(undefined4 *)&REFG(undefined, 0x14c0ad0) = *puVar5;
      *(undefined4 *)&REFG(undefined, 0x14c0ad4) = puVar5[1];
      *(undefined4 *)&REFG(undefined, 0x14c0ad8) = puVar5[2];
      REFG(undefined1, 0x14c0bc0) = 1;
    }
    F_00af5d10(this);
    goto LAB_00af8e11;
  }
  if ((param_1 == 3) || (param_1 == 4)) {
    if (param_2 == 2) {
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x18);
      return 0;
    }
    *(float *)((int)this + 0x20) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) - (float10)*(double *)&REFG(undefined, 0x10ec4c8))));
  }
  else {
LAB_00af8e11: ;
    if (param_2 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00af9030 */
uint F_00af9030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xaf9030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this;
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  
  fVar6 = (*(float *)(gen_frame + 0x34));
  uVar2 = (*(uint *)(gen_frame + 0x30));
  uVar5 = (*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 0;
  (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)gen_fl2bits(fVar6) & 0xffffff00);
  if ((param_2 & 0x20) != 0) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar6) >> 8),1));
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = uVar5 & 0xffffff00;
  (*(char *)(gen_frame + 0x3e)) = '\0';
  (*(char *)(gen_frame + 0x3f)) = '\0';
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x30)) = uVar2 & 0xffffff00;
  if ((param_3 & 1) == 0) {
    if ((param_3 & 4) != 0) {
      (*(char *)(gen_frame + 0x3f)) = '\x01';
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
      goto LAB_00af90a6;
    }
    if ((param_3 & 2) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x30)) = CONCAT31((int3)(uVar2 >> 8),1);
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
      goto LAB_00af90a6;
    }
    if ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0') goto LAB_00af90a6;
  }
  else {
    if ((param_2 & 0x10) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x2c)) = CONCAT31((int3)(uVar5 >> 8),1);
    }
    (*(char *)(gen_frame + 0x3e)) = '\x01';
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
LAB_00af90a6: ;
    this = *(undefined * PTR32 *)((int)param_1 + 0x10);
    (*(undefined4 *)(gen_frame + 0x10)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x14)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x18)) = param_4[2];
    bVar3 = F_00ae96c0(this,0,&(*(undefined4 *)(gen_frame + 0x10)));
    if (bVar3 != 0) {
      if ((*(char *)(gen_frame + 0x3e)) != '\0') {
        (*(char *)(gen_frame + 0x3e)) = '\0';
      }
      if ((*(char *)(gen_frame + 0x3f)) != '\0') {
        (*(char *)(gen_frame + 0x3f)) = '\0';
      }
    }
  }
  if (*(char *)((int)param_1 + 0x70) != '\0') {
    if ((*(char *)(gen_frame + 0x3e)) != '\0') {
      (*(char *)(gen_frame + 0x3e)) = '\0';
    }
    if ((*(char *)(gen_frame + 0x3f)) != '\0') {
      (*(char *)(gen_frame + 0x3f)) = '\0';
    }
  }
  if ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0') {
    uVar7 = F_00427d90();
    *(ulonglong *)((int)param_1 + 0x78) = uVar7;
  }
  (*(char *)(gen_frame + 0x3d)) = '\0';
  (*(char *)(gen_frame + 0x3c)) = '\0';
  (*(char *)(gen_frame + 0x3b)) = '\0';
  if ((param_2 & 0xc0) == 0) {
LAB_00af9209: ;
    if (*(char *)((int)param_1 + 0xa6) != '\0') goto LAB_00af9212;
    uVar5 = (int)param_1 + 0x80;
  }
  else {
    if ((((*(char *)(gen_frame + 0x3e)) == '\0') && ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0')) && (*(char *)((int)param_1 + 0xa4) == '\0')
       ) {
      if (((*(char *)(gen_frame + 0x3f)) != '\0') ||
         ((*(int *)((int)param_1 + 0x14) == 0 && (bVar3 = F_00aead60(param_1), bVar3 == 0)))) {
        (*(char *)(gen_frame + 0x3d)) = '\x01';
        fVar6 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_4[1]))) -
                       (float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x24))))));
        (*(float *)(gen_frame + 0x28)) = fVar6;
        bVar1 = !(*(double *)&REFG(undefined, 0x1094810) < (double)fVar6);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = bVar1;
        (*(uint *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x2c)), 1, 3),bVar1);
        goto LAB_00af9187;
      }
LAB_00af918d: ;
      bVar3 = F_00aeaed0(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34))),(*(uint *)(gen_frame + 0x30)));
      if (bVar3 != 0) {
        (*(char *)(gen_frame + 0x3c)) = '\x01';
        puVar4 = (undefined4 *)F_00aeafa0(param_1,&(*(undefined4 *)(gen_frame + 0x10)),param_4);
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
        (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
      }
    }
    else {
LAB_00af9187: ;
      if ((*(char *)(gen_frame + 0x3f)) == '\0') goto LAB_00af918d;
    }
    if ((((char)(*(uint *)(gen_frame + 0x30)) != '\0') || ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0')) ||
       ((*(char *)((int)param_1 + 0xa4) == '\0' && (*(char *)((int)param_1 + 0xa5) == '\0'))))
    goto LAB_00af9209;
    if (*(char *)((int)param_1 + 0xa6) == '\0') {
      if ((*(int *)((int)param_1 + 0x14) != 0) || (bVar3 = F_00aead60(param_1), bVar3 != 0)) {
        (*(char *)(gen_frame + 0x3b)) = '\x01';
      }
      goto LAB_00af9209;
    }
LAB_00af9212: ;
    uVar5 = (int)param_1 + 0xd0;
  }
  *(undefined4 *)(uVar5 + 0x18) = param_4[1];
  if ((*(char *)(gen_frame + 0x3e)) == '\0') {
    if ((*(char *)(gen_frame + 0x3d)) != '\0') {
      fVar6 = 0.0;
      goto LAB_00af9247;
    }
  }
  else {
    fVar6 = param_5;
    if ((*(char *)(gen_frame + 0x3d)) != '\0') {
      fVar6 = 0.0;
    }
LAB_00af9247: ;
    (*(float *)(gen_frame + 0x34)) = fVar6;
    uVar5 = F_00af5b90(param_1,param_4,(*(uint *)(gen_frame + 0x2c)),fVar6,0);
  }
  if ((*(char *)(gen_frame + 0x3f)) == '\0') {
    if ((*(char *)(gen_frame + 0x3c)) == '\0') goto LAB_00af9287;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
  }
  else {
    puVar4 = param_4;
    if ((*(char *)(gen_frame + 0x3c)) != '\0') {
      puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
    }
  }
  uVar5 = F_00af04a0(param_1,puVar4);
LAB_00af9287: ;
  if (((char)(*(uint *)(gen_frame + 0x30)) != '\0') || ((*(char *)(gen_frame + 0x3b)) != '\0')) {
    uVar5 = F_00af0530(param_1,param_4);
  }
  return uVar5;
}

/* ref: FUN_00af92b0 */
unsigned int F_00af92b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaf92b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * this_00;
  float10 fVar1;
  byte bVar2;
  undefined * this_01;
  uint uVar3;
  uint * puVar4;
  float fVar5;
  int iVar6;
  
  if (*(char *)((int)this + 0x49) != '\0') {
    if (*(char *)((int)this + 0x48) == '\0') {
      F_00af5d70(this);
      return 0;
    }
    *(undefined1 *)((int)this + 0x48) = 0;
    if (((*(int *)((int)this + 0x10) != 0) &&
        (this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), this_00 != (int *)0x0)) &&
       (bVar2 = F_00a9fd00(this_00), bVar2 == 0)) {
      if ((float10)0 < (float10)*(float *)((int)this + 0x40)) {
        if (*(char *)((int)this + 0x4a) == '\0') {
          return 0;
        }
        this_01 = (undefined *)F_00475fa0(*(undefined4 *)((int)this + 0x18),
                                       *(undefined4 *)((int)this + 0x1c));
        if (this_01 == (undefined *)0x0) {
          return 0;
        }
        iVar6 = (int)this + 0x20;
        uVar3 = F_00a5feb0(this_01);
        puVar4 = (uint *)F_0046f4a0(((undefined1 *)(gen_frame + 0x20)),uVar3,iVar6);
        (*(uint *)(gen_frame + 0x10)) = *puVar4;
        (*(uint *)(gen_frame + 0x14)) = puVar4[1];
        (*(uint *)(gen_frame + 0x18)) = puVar4[2];
        fVar5 = F_004bd280(&(*(uint *)(gen_frame + 0x10)));
        (*(double *)(gen_frame + 0x28)) = (double)fVar5;
        fVar5 = F_00aeb160(this);
        fVar1 = (float10)(*(double *)(gen_frame + 0x28));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = (float)(fVar1 - (float10)fVar5);
        fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) *
                       (float10)(float)(fVar1 - (float10)fVar5))));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = fVar5;
        (*(double *)(gen_frame + 0x28)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar5),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0))));
        F_0046f0e0(&(*(uint *)(gen_frame + 0x10)),fVar5);
      }
      else {
        fVar5 = *(float *)((int)this + 0x44);
        (*(uint *)(gen_frame + 0x10)) = (uint)gen_fl2bits((float)(REFG(float, 0x1302c90)));
        (*(uint *)(gen_frame + 0x14)) = (uint)gen_fl2bits((float)(REFG(float, 0x1302c94)));
        (*(uint *)(gen_frame + 0x18)) = (uint)gen_fl2bits((float)(REFG(float, 0x1302c98)));
        F_00aaeb00((uint)&(*(uint *)(gen_frame + 0x10)),fVar5);
        F_0046f0e0(&(*(uint *)(gen_frame + 0x10)),GEN_TOF(gen_bits2f(*(uint *)((int)this + 0x40) ^ REFG(uint, 0x10920d0))));
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) ^ REFG(uint, 0x10920d0);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) ^ REFG(uint, 0x10920d0);
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ REFG(uint, 0x10920d0);
      }
      F_004bd670(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x20,&(*(uint *)(gen_frame + 0x10)));
      uVar3 = F_00a5feb0(this_00);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar3 + 4);
      bVar2 = F_00a9f620(this_00);
      if (bVar2 != 0) {
        F_00aeb1c0(this,((undefined1 *)(gen_frame + 0x0)),*(float *)((int)this + 0x44),1);
        return 0;
      }
      F_00af5e30(this,((undefined1 *)(gen_frame + 0x0)));
      F_00af6100(this,((undefined1 *)(gen_frame + 0x0)));
      ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00,((undefined1 *)(gen_frame + 0x0)));
      F_00a9f870(this_00,*(float *)((int)this + 0x44));
    }
  }
  return 0;
}

/* ref: FUN_00af98d0 */
uint F_00af98d0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xaf98d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  uVar2 = 0;
  if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) == 0) {
      if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x296))) == '\0') ||
         (iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c0, *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) == '\0')) {
        iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270;
      }
      if (0.0 <= *(float *)(iVar4 + 0x10)) {
        return 0;
      }
    }
    else if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) != 5) {
      return 0;
    }
  }
  if (((REFG(char, 0x14c0a40) != '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x420))) != '\0')) &&
     (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x422))) == '\0')) {
    if ((((char)(*(uint *)&gen_args[4]) == '\0') &&
        ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0 ||
         (bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))), bVar1 == 0)))) &&
       (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) != '\0')) {
      (*(undefined4 *)&gen_args[5]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[5]), 1, 3),1);
    }
    this = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    puVar3 = (undefined4 *)F_00a5feb0(this);
    (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0xa4)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
    bVar1 = F_00af6450((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xa0)),&(*(undefined4 *)(gen_frame + 0x9c)),(*(float *)&gen_args[6]),(*(float *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[5]),(*(float *)&gen_args[2]),0,0,
                         (*(uint *)&gen_args[4]));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
      (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
      (*(undefined4 *)(gen_frame + 0xa4)) = (*(undefined4 *)(gen_frame + 0x9c));
      F_00aec9f0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0xa0)));
      puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
      (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0xa4)) = puVar3[1];
      (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
      uVar2 = F_00aed0a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xa0)),&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  return uVar2;
}

/* ref: FUN_00af9b10 */
unsigned int F_00af9b10(unsigned int gen_a0)
{
  GEN_ENTER(0xaf9b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 100) != '\0') {
      F_00aec9f0(iVar1,iVar1 + 0x20);
    }
    F_00af98d0(*(undefined4 *)((int)this + 4),REFG(float, 0x10ebd70),REFG(float, 0x10ebbec),0,0,0,(float)(float10)0);
    F_00aeb700(*(undefined * PTR32 *)((int)this + 4));
    if ((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 9) == '\0')) {
      F_00afbac0(*(undefined * PTR32 *)((int)this + 4));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00af9b80 */
uint F_00af9b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaf9b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  float10 fVar4;
  bool bVar5;
  byte bVar6;
  uint in_EAX = 0;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  float fVar9;
  
  if (1 < REFG(undefined4, 0x14c0a44)) {
    return in_EAX;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x204)));
  if (iVar2 != 0) {
    if (iVar2 == 3) {
      return 3;
    }
    if (iVar2 == 4) {
      return 4;
    }
    if (iVar2 == 2) {
      return 2;
    }
  }
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
  (*(char *)(gen_frame + 0x5f)) = '\0';
  uVar7 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if (((uVar7 == 8) &&
      (uVar7 = F_00aa3470(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10)))), uVar7 != 0)) &&
     (*(char *)(uVar7 + 0x2e09) != '\0')) {
    (*(char *)(gen_frame + 0x5f)) = '\x01';
  }
  (*(char *)(gen_frame + 0x5e)) = '\0';
  if (((*(char *)(gen_frame + 0x5f)) == '\0') &&
     ((*(char *)((int)this + 0x1c) != '\0' ||
      (uVar7 = *(uint *)((int)this + 0x18), uVar8 = F_00aea910(this), uVar7 < uVar8)))) {
    bVar6 = F_00ae96c0(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x0)),0);
    if (bVar6 == 0) {
      return CONCAT31(extraout_var,bVar6);
    }
    (*(char *)(gen_frame + 0x5e)) = '\x01';
  }
  uVar7 = (*(uint *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x10ebd70);
  *(undefined4 *)((int)this + 0x18) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x54)) = uVar7 & 0xffffff00;
  uVar8 = (*(uint *)(gen_frame + 0x54));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = 0.0;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = 0.0;
  gen_piece_set(&(*(uint *)(gen_frame + 0x54)), 1, 3, (unsigned long long)(SUB43(uVar7,1)));
  if ((*(char *)(gen_frame + 0x5f)) == '\0') {
    if ((*(char *)(gen_frame + 0x5e)) == '\0') {
      (*(uint *)(gen_frame + 0x54)) = uVar8;
      bVar6 = F_00ae6930(*(undefined * PTR32 *)((int)this + 4));
      if (bVar6 != 0) {
        uVar7 = F_00ae9430(*(undefined * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x30)));
        fVar9 = F_00ae95f0(param_1,uVar7);
        (*(float *)(gen_frame + 0x58)) = fVar9;
      }
      bVar6 = F_00ae6930(*(undefined * PTR32 *)((int)this + 4));
      if (bVar6 == 0) {
        bVar5 = (*(float *)(gen_frame + 0x58)) < REFG(float, 0x10ebbf0);
        fVar9 = REFG(float, 0x10ebbf0);
      }
      else {
        bVar5 = (double)(*(float *)(gen_frame + 0x58)) < REFG(double, 0x1094800);
        fVar9 = REFG(float, 0x10ebcd0);
      }
      if (bVar5) {
        (*(float *)(gen_frame + 0x58)) = fVar9;
      }
    }
    else {
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x54)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x54)), 1, 3),1);
      fVar9 = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar9;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar1;
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar9 - (float10)fVar1);
      (*(double *)(gen_frame + 0x48)) = (double)fVar9;
      uVar7 = F_00ae9430(this_00,((undefined1 *)(gen_frame + 0x30)));
      (*(double *)(gen_frame + 0x48)) = (*(double *)(gen_frame + 0x48)) - (double)*(float *)(uVar7 + 4);
      fVar9 = F_00ae9520(this_00);
      fVar4 = (float10)(*(double *)(gen_frame + 0x48));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = (float)(fVar4 - (float10)fVar9);
    }
  }
  else {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x10ebd4c);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x54)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x54)), 1, 3),1);
  }
  uVar7 = F_00af98d0(*(undefined4 *)((int)this + 4),(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x58)),0,(*(uint *)(gen_frame + 0x54)),0,(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4))
                      );
  REFG(undefined4, 0x14c0a44) = REFG(undefined4, 0x14c0a44) + 1;
  return uVar7;
}

/* ref: FUN_00af9d80 */
byte F_00af9d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf9d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  float fVar1;
  float fVar2;
  int in_ecx;
  int * piVar3;
  undefined * this_00;
  byte bVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  fVar10 = *param_2;
  fVar1 = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x288)) = this;
  (*(byte *)(gen_frame + 0x28d)) = 0;
  (*(float *)(gen_frame + 0x270)) = (float)((float10)fVar10 - (float10)fVar1);
  (*(float *)(gen_frame + 0x274)) = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x278)) = (float)((float10)param_2[2] - (float10)param_1[2]);
  fVar7 = (float10)(float)((float10)param_2[1] - (float10)param_1[1]);
  fVar8 = (float10)(float)((float10)fVar10 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)param_2[2] - (float10)param_1[2]);
  fVar10 = ((float)GEN_TOF((fVar9 * fVar9 + (fVar8 * fVar8 + fVar7 * fVar7))));
  (*(float *)(gen_frame + 0x280)) = fVar10;
  fVar10 = ((float)GEN_TOF(SQRT((float10)fVar10)));
  (*(float *)(gen_frame + 0x280)) = fVar10;
  if ((param_5 != (char *)0x0) && (*param_5 != '\x01')) {
    *param_5 = '\0';
  }
  if (fVar10 <= REFG(float, 0x10ebbe4)) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return 0;
  }
  fVar2 = *(float *)((int)this + 0x10);
  (*(float *)(gen_frame + 0x270)) = *param_2;
  fVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(undefined4 *)(gen_frame + 0x144)) = 0;
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x164)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x16c)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x190)) = 0;
  (*(undefined4 *)(gen_frame + 0x194)) = 0;
  (*(undefined4 *)(gen_frame + 0x198)) = 0;
  (*(undefined2 *)(gen_frame + 0x1a0)) = 0;
  (*(undefined1 *)(gen_frame + 0x1a2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
  (*(undefined2 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined4 *)(gen_frame + 0x220)) = 0;
  (*(undefined4 *)(gen_frame + 0x224)) = 0;
  (*(undefined4 *)(gen_frame + 0x228)) = 0;
  (*(undefined2 *)(gen_frame + 0x230)) = 0;
  (*(undefined1 *)(gen_frame + 0x232)) = 0;
  (*(undefined4 *)(gen_frame + 0x240)) = 0;
  (*(undefined4 *)(gen_frame + 0x244)) = 0;
  (*(undefined4 *)(gen_frame + 0x248)) = 0;
  (*(undefined2 *)(gen_frame + 0x250)) = 0;
  (*(undefined1 *)(gen_frame + 0x252)) = 0;
  (*(undefined4 *)(gen_frame + 0x254)) = 0;
  (*(undefined4 *)(gen_frame + 0x258)) = 0;
  in_ecx = *(int *)((int)gen_fl2bits(fVar2) + 0x10);
  (*(float *)(gen_frame + 0x278)) = fVar1;
  fVar1 = param_1[1];
  (*(char *)(gen_frame + 0x28f)) = '\0';
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x280)) + 0)) = 1;
  (*(float *)(gen_frame + 0x280)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar10) >> 8),1));
  (*(char *)(gen_frame + 0x28c)) = '\0';
  (*(float *)(gen_frame + 0x26c)) = 0.0;
  (*(float *)(gen_frame + 0x274)) = fVar1;
  (*(float *)(gen_frame + 0x284)) = fVar2;
  if ((in_ecx == 0) || (bVar4 = F_00a9f620(in_ecx), bVar4 == 0)) {
    fVar10 = 0.0;
    piVar3 = *(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x284))) + 0x10);
    if (piVar3 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      if (uVar5 == 1) goto LAB_00afa010;
      fVar10 = 0.0;
    }
  }
  else {
LAB_00afa010: ;
    fVar10 = *((float *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x284))) + 0x10) + 0xc0)));
  }
  this_00 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x10);
  (*(float *)(gen_frame + 0x284)) = fVar10;
  fVar10 = F_00ae9520(this_00);
  (*(float *)(gen_frame + 0x268)) = fVar10;
  bVar4 = F_00af0bb0(&(*(float *)(gen_frame + 0x270)),fVar10,(*(float *)(gen_frame + 0x284)),&(*(float *)(gen_frame + 0x26c)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x1d0)),0,0,0,0,3,0);
  fVar10 = (*(float *)(gen_frame + 0x280));
  if (bVar4 == 0) {
    *param_2 = *param_1;
    param_2[2] = param_1[2];
  }
  else {
    if (((float10)param_2[1] < (float10)(*(float *)(gen_frame + 0x26c))) &&
       ((!GEN_ISNAN(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x28)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x28) <= *(float *)&REFG(undefined, 0x1088114)))) {
      if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x230)) + 1)) == '\0') goto LAB_00afa0bd;
      if ((char)(*(undefined2 *)(gen_frame + 0x230)) == '\0') {
        (*(char *)(gen_frame + 0x28c)) = '\x01';
      }
    }
    if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x230)) + 1)) != '\0') {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x280)) + 0)) = 0;
      (*(float *)(gen_frame + 0x280)) = gen_bits2f((uint)gen_fl2bits(fVar10) & 0xffffff00);
    }
  }
LAB_00afa0bd: ;
  bVar4 = F_0054ccb0(param_2,param_1);
  if (bVar4 == 0) {
    (*(float *)(gen_frame + 0x270)) = *param_1;
    (*(float *)(gen_frame + 0x274)) = param_1[1];
    (*(float *)(gen_frame + 0x278)) = param_1[2];
    (*(float *)(gen_frame + 0x284)) = 0.0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined4 *)(gen_frame + 0xc4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(undefined4 *)(gen_frame + 0xd4)) = 0;
    (*(undefined4 *)(gen_frame + 0xd8)) = 0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(undefined4 *)(gen_frame + 0xe8)) = 0;
    (*(undefined4 *)(gen_frame + 0x100)) = 0;
    (*(undefined4 *)(gen_frame + 0x104)) = 0;
    (*(undefined4 *)(gen_frame + 0x108)) = 0;
    (*(undefined2 *)(gen_frame + 0x110)) = 0;
    (*(undefined1 *)(gen_frame + 0x112)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(undefined4 *)(gen_frame + 0x128)) = 0;
    (*(undefined2 *)(gen_frame + 0x130)) = 0;
    (*(undefined1 *)(gen_frame + 0x132)) = 0;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x138)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined2 *)(gen_frame + 0xa0)) = 0;
    (*(undefined1 *)(gen_frame + 0xa2)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
    (*(undefined4 *)(gen_frame + 0x200)) = 0;
    (*(undefined4 *)(gen_frame + 0x204)) = 0;
    (*(undefined4 *)(gen_frame + 0x208)) = 0;
    (*(undefined4 *)(gen_frame + 0x220)) = 0;
    (*(undefined4 *)(gen_frame + 0x224)) = 0;
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(undefined2 *)(gen_frame + 0x230)) = 0;
    (*(undefined1 *)(gen_frame + 0x232)) = 0;
    (*(undefined2 *)(gen_frame + 0x250)) = 0;
    (*(undefined1 *)(gen_frame + 0x252)) = 0;
    (*(undefined4 *)(gen_frame + 0x258)) = 0;
    (*(char *)(gen_frame + 0x28e)) = '\0';
    (*(undefined4 *)(gen_frame + 0x240)) = 0;
    (*(undefined4 *)(gen_frame + 0x244)) = 0;
    (*(undefined4 *)(gen_frame + 0x248)) = 0;
    (*(undefined4 *)(gen_frame + 0x254)) = 0;
    bVar4 = F_00af8600((*(undefined * PTR32 *)(gen_frame + 0x288)),param_1,param_2,&(*(float *)(gen_frame + 0x270)),&(*(float *)(gen_frame + 0x284)),&(*(undefined4 *)(gen_frame + 0xb0)),&(*(undefined4 *)(gen_frame + 0x20)),
                         &(*(undefined4 *)(gen_frame + 0x1d0)),param_4,&(*(undefined4 *)(gen_frame + 0x140)),&(*(char *)(gen_frame + 0x28f)),&(*(char *)(gen_frame + 0x28e)),
                         (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x280))),param_7);
    if ((bVar4 == 0) && ((*(char *)(gen_frame + 0x28f)) == '\0')) {
      if ((*(char *)(gen_frame + 0x28c)) != '\0') {
        *param_2 = (*(float *)(gen_frame + 0x270));
        param_2[1] = (*(float *)(gen_frame + 0x274));
        param_2[2] = (*(float *)(gen_frame + 0x278));
        REFG(undefined1, 0x14c0cc6) = 1;
      }
    }
    else {
      if ((char)param_7 == '\0') {
        REFG(undefined1, 0x14c0ba4) = 1;
      }
      if ((*(char *)(gen_frame + 0x28f)) == '\0') {
        if ((*(char *)(gen_frame + 0x28e)) == '\0') {
          if (param_4 < 3) {
            F_00af0130((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x284))));
            if (param_3 != 0) {
              F_00aeab30(param_3,&(*(float *)(gen_frame + 0x270)),param_2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x284))));
            }
            bVar4 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,param_3,param_4 + 1,param_5,param_6,
                                 param_7);
            return bVar4;
          }
          if ((param_3 != 0) &&
             (bVar4 = F_00afa520((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,param_3,((undefined1 *)(gen_frame + 0x10))), bVar4 != 0)) {
            pfVar6 = (float *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x270)),((undefined1 *)(gen_frame + 0x10)));
            *param_2 = *pfVar6;
            param_2[1] = pfVar6[1];
            param_2[2] = pfVar6[2];
            bVar4 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x288)),&(*(float *)(gen_frame + 0x270)),param_2,0,0,param_5,param_6,param_7);
            return bVar4;
          }
          *param_2 = (*(float *)(gen_frame + 0x270));
          param_2[1] = (*(float *)(gen_frame + 0x274));
          param_2[2] = (*(float *)(gen_frame + 0x278));
        }
        (*(byte *)(gen_frame + 0x28d)) = 1;
      }
    }
  }
  F_00af5870((*(undefined * PTR32 *)(gen_frame + 0x288)),param_1,param_2,&(*(char *)(gen_frame + 0x28f)),&(*(undefined4 *)(gen_frame + 0x140)),param_4,param_7);
  if (param_5 != (char *)0x0) {
    *param_5 = (*(char *)(gen_frame + 0x28f));
  }
  if (((*(char *)(gen_frame + 0x28f)) != '\0') && (param_6 != (undefined *)0x0)) {
    F_00affb20(param_6,&(*(undefined4 *)(gen_frame + 0x140)));
  }
  return (*(byte *)(gen_frame + 0x28d));
}

/* ref: FUN_00afa520 */
byte F_00afa520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafa520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  float * pfVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) - (float10)param_1[1])));
  (*(byte *)(gen_frame + 0x5f)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)param_1[2])));
  do {
    uVar9 = (*(uint *)(gen_frame + 0x38));
    if ((*(uint *)(gen_frame + 0x38)) == 0) {
      pfVar8 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28);
      if (GEN_ISNAN(*pfVar8) || (0.0 < *pfVar8 || *pfVar8 == 0.0)) {
        param_4[1] = (*(float *)(gen_frame + 0x24));
        *param_4 = 0.0;
        param_4[2] = 0.0;
        goto LAB_00afa6b5;
      }
    }
    else {
      if ((*(uint *)(gen_frame + 0x38)) == 1) {
        uVar10 = 0;
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        if (*(int *)(param_3 + 0x10) != 0) {
          pfVar8 = (float *)(param_3 + 0x58);
          do {
            uVar10 = uVar10 + 1;
            *param_4 = (float)((float10)pfVar8[-2] + (float10)*param_4);
            param_4[1] = (float)((float10)pfVar8[-1] + (float10)param_4[1]);
            param_4[2] = (float)((float10)*pfVar8 + (float10)param_4[2]);
            pfVar8 = pfVar8 + 4;
          } while (uVar10 < *(uint *)(param_3 + 0x10));
        }
        fVar12 = (float10)*(int *)(param_3 + 0x10);
        if (*(int *)(param_3 + 0x10) < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = (float)fVar12;
        fVar12 = (float10)(float)fVar12;
        fVar14 = (float)((float10)*param_4 / fVar12);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar14;
        (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar14),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0))));
        *param_4 = fVar14;
        fVar1 = (float)((float10)param_4[1] / fVar12);
        (*(float *)(gen_frame + 0x54)) = fVar1;
        param_4[1] = fVar1;
        fVar2 = (float)((float10)param_4[2] / fVar12);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar2;
        (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
        param_4[2] = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                       ((float10)fVar14 * (float10)fVar14 + (float10)fVar1 * (float10)fVar1))));
        (*(float *)(gen_frame + 0x34)) = fVar3;
        fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
        (*(float *)(gen_frame + 0x34)) = fVar3;
        fVar12 = (float10)fVar3;
        bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
        if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
          fVar14 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                          ((float10)fVar14 * (float10)fVar14 + (float10)fVar1 * (float10)fVar1))));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = (float)((float10)1 / (float10)fVar14);
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar12 = (float10)fVar14;
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)*param_4);
          fVar13 = (float10)*(double *)&REFG(undefined, 0x10947d0);
          *param_4 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)*param_4) * fVar13)));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)param_4[1]);
          param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)param_4[1]) * fVar13)));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)param_4[2] * fVar12);
          param_4[2] = ((float)GEN_TOF((fVar13 * (float10)(float)((float10)param_4[2] * fVar12))));
        }
      }
      else if ((*(uint *)(gen_frame + 0x38)) == 2) {
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        fVar14 = *(float *)(param_3 + 0x84);
        uVar10 = 0;
        (*(float *)(gen_frame + 0x3c)) = fVar14;
        if (*(int *)(param_3 + 0x10) != 0) {
          pfVar8 = (float *)(param_3 + 0x88);
          do {
            *param_4 = (float)((float10)pfVar8[-2] + (float10)*param_4);
            param_4[1] = (float)((float10)pfVar8[-1] + (float10)param_4[1]);
            param_4[2] = (float)((float10)*pfVar8 + (float10)param_4[2]);
            fVar1 = pfVar8[-1];
            (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar1;
            (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
            if ((float10)(*(float *)(gen_frame + 0x3c)) < (float10)fVar1) {
              (*(float *)(gen_frame + 0x3c)) = fVar1;
              fVar14 = fVar1;
            }
            uVar10 = uVar10 + 1;
            pfVar8 = pfVar8 + 4;
          } while (uVar10 < *(uint *)(param_3 + 0x10));
        }
        fVar12 = (float10)*(int *)(param_3 + 0x10);
        if (*(int *)(param_3 + 0x10) < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x34)) = (float)fVar12;
        param_4[1] = fVar14;
        fVar12 = (float10)(float)fVar12;
        *param_4 = (float)((float10)*param_4 / fVar12);
        param_4[2] = (float)((float10)param_4[2] / fVar12);
      }
LAB_00afa6b5: ;
      pfVar8 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28);
      if (!GEN_ISNAN(*pfVar8) && (!(0.0 < *pfVar8) && *pfVar8 != 0.0)) {
        fVar12 = (float10)param_4[2] * (float10)param_4[2];
        dVar5 = (double)fVar12;
        (*(double *)(gen_frame + 0x48)) = dVar5;
        fVar13 = (float10)*param_4 * (float10)*param_4;
        dVar6 = (double)fVar13;
        (*(double *)(gen_frame + 0x40)) = dVar6;
        fVar14 = (float)(fVar13 + fVar12);
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar12 = (float10)fVar14;
        bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
        if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
          fVar14 = ((float)GEN_TOF((((float10)0 * (float10)0 + (float10)dVar6) + (float10)dVar5)));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = (float)((float10)1 / (float10)fVar14);
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar12 = (float10)fVar14;
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)*param_4);
          fVar13 = (float10)*(double *)&REFG(undefined, 0x10947d0);
          *param_4 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)*param_4) * fVar13)));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)*(double *)&REFG(undefined, 0x108bec8));
          param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)*(double *)&REFG(undefined, 0x108bec8)) * fVar13
                              )));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)param_4[2] * fVar12);
          param_4[2] = ((float)GEN_TOF((fVar13 * (float10)(float)((float10)param_4[2] * fVar12))));
        }
      }
      if (((param_4[1] < 0.0) && (!GEN_ISNAN((*(float *)(gen_frame + 0x24))) && !((*(float *)(gen_frame + 0x24)) <= 0.0))) ||
         ((0.0 < param_4[1] && ((*(float *)(gen_frame + 0x24)) < 0.0)))) {
        param_4[1] = 0.0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x30) = 0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x34) = 0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x38) = 0;
      }
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(ABS((float10)param_4[1])));
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24)))));
      if ((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24))))) < (float10)((float)GEN_TOF(ABS((float10)param_4[1])))) {
        param_4[1] = (*(float *)(gen_frame + 0x24));
      }
      fVar14 = param_4[1];
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar14;
      (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar14),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0))));
      fVar1 = *param_4;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
      fVar2 = param_4[2];
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar3 = ((float)GEN_TOF((((float10)fVar14 * (float10)fVar14 + (float10)fVar1 * (float10)fVar1) +
                     (float10)fVar2 * (float10)fVar2)));
      (*(float *)(gen_frame + 0x34)) = fVar3;
      fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
      (*(float *)(gen_frame + 0x34)) = fVar3;
      fVar12 = (float10)fVar3;
      bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
      if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
        (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)*param_1);
        fVar3 = param_1[1];
        (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar14 + (float10)fVar3);
        fVar4 = param_1[2];
        (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + (float10)fVar4);
        (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + (float10)*param_1);
        (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar14 + (float10)fVar3);
        (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 + (float10)fVar4);
        bVar7 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x58)),param_1,&(*(float *)(gen_frame + 0x0)),0,0,0,0,1);
        uVar9 = (*(uint *)(gen_frame + 0x38));
        if (bVar7 == 0) {
          return 1;
        }
      }
    }
    (*(uint *)(gen_frame + 0x38)) = uVar9 + 1;
    if (2 < uVar9 + 1) {
      if (0.0 <= *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28)) {
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
      return (*(byte *)(gen_frame + 0x5f));
    }
  } while( true );
}

/* ref: FUN_00afa930 */
unsigned int F_00afa930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafa930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (param_1 != iVar1) {
    *(int *)((int)this + 0x14) = param_1;
    F_00af8d90(this,param_1,iVar1);
  }
  return 0;
}

/* ref: FUN_00afa950 */
unsigned int F_00afa950(unsigned int gen_a0)
{
  GEN_ENTER(0xafa950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 5) {
    *(undefined4 *)((int)this + 0x14) = 5;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x44);
      uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)REFG(double, 0x10944b8) <= (float10)(*(float *)(gen_frame + 0x1c)) - (float10)*(float *)(uVar3 + 4)) {
        F_00aa3ff0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))),100,0);
      }
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) = 0;
    if ((*(int *)((int)this + 0x10) != 0) &&
       (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
      bVar2 = F_00a9f620(in_ecx);
      if (bVar2 != 0) {
        bVar2 = F_00ae8560(*(undefined4 *)((int)this + 0x10));
        if (bVar2 == 0) {
          puVar4 = (undefined4 *)F_00aeff30(this,((undefined1 *)(gen_frame + 0x0)));
          *(undefined4 *)&REFG(undefined, 0x14c0ad0) = *puVar4;
          *(undefined4 *)&REFG(undefined, 0x14c0ad4) = puVar4[1];
          *(undefined4 *)&REFG(undefined, 0x14c0ad8) = puVar4[2];
          REFG(undefined1, 0x14c0bc0) = 1;
        }
      }
    }
    F_00af5d10(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00afaa40 */
unsigned int F_00afaa40(unsigned int gen_a0)
{
  GEN_ENTER(0xafaa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    F_00aefee0(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00afaa70 */
byte F_00afaa70(unsigned int gen_a0)
{
  GEN_ENTER(0xafaa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  fVar6 = *(float *)&REFG(undefined, 0x10ebbcc);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 == 1) {
    if (!(*(float *)&REFG(undefined, 0x10ebc7c) <= *(float *)((int)this + 0x20))) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x14) = 3;
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1339b98);
    fVar6 = *(float *)((int)this + 0x5c);
    if (GEN_ISNAN(fVar6) == (GEN_ISNAN(fVar6) || fVar6 == 0.0)) {
      (*(float *)(gen_frame + 0x18)) = fVar6;
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    F_00ae7a70(this,(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar3 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x18));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar2 = F_00a9f620(iVar1), bVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae0)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae8)));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar6 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)));
      bVar4 = GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)0);
      if (bVar4 == (bVar4 || (float10)fVar6 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)));
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    fVar5 = (float10)*(float *)((int)this + 0x18) - (float10)*(double *)&REFG(undefined, 0x10ec4c8);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 5) {
        return 0;
      }
      if (!(*(float *)&REFG(undefined, 0x10ebc7c) <= *(float *)((int)this + 0x20))) {
        return 0;
      }
      *(undefined4 *)((int)this + 0x14) = 0;
      F_00aefee0(this);
      goto LAB_00afac98;
    }
    *(undefined4 *)((int)this + 0x14) = 4;
    F_00ae7a70(this,fVar6);
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar3 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x18));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar2 = F_00a9f620(iVar1), bVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae0)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae8)));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar6 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)));
      bVar4 = GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)0);
      if (bVar4 == (bVar4 || (float10)fVar6 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)));
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    fVar5 = (float10)*(float *)((int)this + 0x18);
  }
  *(float *)((int)this + 0x20) = (float)fVar5;
LAB_00afac98: ;
  (*(byte *)(gen_frame + 0x1f)) = 1;
  F_00afaa70(this);
  return (*(byte *)(gen_frame + 0x1f));
}

/* ref: FUN_00afacb0 */
uint F_00afacb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafacb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    (*(bool *)(gen_frame + 0x1f)) = *(int *)((int)this + 0x14) == 5;
    if ((*(char *)((int)this + 0xa6) == '\0') ||
       (iVar2 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
      iVar2 = (int)this + 0x80;
    }
    F_00a65a30(this,(uint)!(*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar2 + 0x10)));
    if ((*(bool *)(gen_frame + 0x1f)) == false) {
      if (param_1 == (undefined4 *)0x0) {
        F_00af98d0(*(undefined4 *)((int)this + 0x10),REFG(float, 0x10ebbf0),REFG(float, 0x10ebbf0),1,0,0,
                     (float)(float10)0);
      }
      else {
        iVar2 = *(int *)((int)this + 0x10);
        (*(undefined4 *)(gen_frame + 0x18)) = *param_1;
        puVar3 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)(iVar2 + 0x10));
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
        (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
        (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x18));
        F_00aec9f0(iVar2,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
    uVar4 = *(uint *)((int)this + 0x10);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
      bVar1 = F_00a9f620(*(int *)(uVar4 + 0x10));
      uVar4 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar4 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,2,0);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00afae00 */
unsigned int F_00afae00(unsigned int gen_a0)
{
  GEN_ENTER(0xafae00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)(iVar1 + 100) == '\0')) {
      *(undefined1 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined1 *)((int)this + 0x1c) = 0;
      F_00af9b10(this);
    }
    if ((*(char *)((int)this + 9) != '\0') && (*(char *)(iVar1 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 9) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      F_00aea850(this);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00afaf00 */
uint F_00afaf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafaf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int in_ecx;
  undefined * pvVar5;
  byte bVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar7;
  undefined3 extraout_var_01 = 0;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  uVar7 = *(uint *)((int)this + 0x10);
  if ((uVar7 != 0) && (*(int *)(uVar7 + 0x10) != 0)) {
    bVar6 = F_00a9f620(*(int *)(uVar7 + 0x10));
    uVar7 = CONCAT31(extraout_var,bVar6);
    if (bVar6 != 0) {
      return uVar7;
    }
  }
  if (*(int *)((int)this + 0x14) != 4) {
    return uVar7;
  }
  uVar7 = 0;
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00afaf65: ;
    if (*(int *)((int)this + 0x14) == 0) goto LAB_00afb01f;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)((int)this + 0xb0);
      (*(float *)(gen_frame + 0xc4)) = *(float *)((int)this + 0xb4);
      (*(undefined4 *)(gen_frame + 0xc8)) = *(undefined4 *)((int)this + 0xb8);
      if (*(char *)((int)this + 0xa6) == '\0') {
        return uVar7;
      }
      fVar4 = *(float *)((int)this + 0x18);
      (*(float *)(gen_frame + 0xdc)) = fVar4;
      (*(float *)(gen_frame + 0xd8)) = *(float *)((int)this + 200);
      fVar8 = (float10)*(float *)((int)this + 200);
      fVar9 = (float10)fVar4;
      pfVar1 = (float *)((int)this + 0x20);
      if ((!GEN_ISNAN(REFG(float, 0x10ebc30)) && !GEN_ISNAN(*pfVar1)) &&
          (!(REFG(float, 0x10ebc30) < *pfVar1) && REFG(uint, 0x10ebc30) != *pfVar1)) {
        return uVar7;
      }
      if (!(fVar8 <= fVar9)) {
        return uVar7;
      }
      fVar8 = fVar8 - fVar9;
      if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)*(double *)&REFG(undefined, 0x1094878))) &&
          !(fVar8 < (float10)*(double *)&REFG(undefined, 0x1094878))) {
        return uVar7;
      }
      uVar7 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
      if ((float10)*(float *)&REFG(undefined, 0x1339b74) + (float10)(*(float *)(gen_frame + 0xc4)) < (float10)*(float *)(uVar7 + 4)) {
        return uVar7;
      }
      goto LAB_00afb066;
    }
  }
  else {
    in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
    uVar7 = 0;
    if (in_ecx == 0) goto LAB_00afaf65;
    bVar6 = F_00a9f620(in_ecx);
    uVar7 = CONCAT31(extraout_var_00,bVar6);
    if (bVar6 == 0) goto LAB_00afaf65;
LAB_00afb01f: ;
    if (*(char *)((int)this + 0x5b) == '\0') {
      return uVar7;
    }
  }
  fVar4 = *(float *)((int)this + 100);
  uVar2 = *(undefined4 *)((int)this + 0x60);
  uVar3 = *(undefined4 *)((int)this + 0x68);
  (*(float *)(gen_frame + 0xc4)) = fVar4;
  fVar10 = gen_bits2f(param_1[1]);
  (*(undefined4 *)(gen_frame + 0xc0)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xc8)) = uVar3;
  if (!((float10)fVar10 <= (float10)fVar4)) {
    return uVar7;
  }
  *param_1 = uVar2;
  param_1[1] = (undefined4)gen_fl2bits(fVar4);
  param_1[2] = uVar3;
LAB_00afb066: ;
  F_00afa950(this);
  pvVar5 = *(undefined * PTR32 *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined2 *)(gen_frame + 0x90)) = 0;
  (*(undefined1 *)(gen_frame + 0x92)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined2 *)(gen_frame + 0xb0)) = 0;
  (*(undefined1 *)(gen_frame + 0xb2)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  fVar10 = F_00ae9520(pvVar5);
  fVar4 = (*(float *)(gen_frame + 0xdc));
  (*(float *)(gen_frame + 0xd8)) = fVar10;
  pvVar5 = *(undefined * PTR32 *)((int)this + 0x10);
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0xdc)) + 0)) = 0;
  (*(float *)(gen_frame + 0xdc)) = gen_bits2f((uint)gen_fl2bits(fVar4) & 0xffffff00);
  bVar6 = F_00ae96c0(pvVar5,((undefined1 *)(gen_frame + 0x0)),0);
  if (bVar6 != 0) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0xdc)) + 0)) = 1;
    (*(float *)(gen_frame + 0xdc)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0xdc)), 1, 3),1));
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) + (float10)*(double *)&REFG(undefined, 0x10944e0));
  }
  bVar6 = F_00af6450(*(undefined4 *)((int)this + 0x10),&(*(undefined4 *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0xdc)),(*(float *)(gen_frame + 0xd8)),REFG(float, 0x10ebbf0),
                       &(*(undefined4 *)(gen_frame + 0x30)),1,REFG(float, 0x10ebd3c),&(*(float *)(gen_frame + 0xc4)),0,(uint)gen_fl2bits((*(float *)(gen_frame + 0xdc))));
  if (bVar6 == 0) {
    bVar6 = F_00ae7ad0(this);
    if (bVar6 == 0) {
      return CONCAT31(extraout_var_01,bVar6);
    }
    param_1[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4)));
    return CONCAT31(extraout_var_01,bVar6);
  }
  bVar6 = F_00ae7ad0(this);
  if (bVar6 != 0) {
    param_1[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xdc)));
  }
  uVar7 = F_00aed0a0(*(undefined * PTR32 *)((int)this + 0x10),param_1,&(*(undefined4 *)(gen_frame + 0x30)));
  return uVar7;
}

/* ref: FUN_00afb1f0 */
uint F_00afb1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafb1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 uVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x1fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x200);
  (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(param_2[1]);
  uVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(char *)(gen_frame + 0xaf)) = '\0';
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = uVar1;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10ec490));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  F_00af9d80(this,param_1,&(*(undefined4 *)(gen_frame + 0x90)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)),param_4,&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),0);
  if ((REFG(char, 0x14c0ba4) != '\0') && (*(int *)((int)this + 0x14) == 4)) {
    uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    fVar2 = ((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(uVar4 + 4) - (float10)(*(float *)(gen_frame + 0x94))))))));
    (*(float *)(gen_frame + 0xa8)) = fVar2;
    fVar5 = (float10)fVar2;
    if ((fVar5 <= (float10)*(float *)&REFG(undefined, 0x10ebd18)) &&
       ((fVar2 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) *
                        (float10)*(float *)&REFG(undefined, 0x1339b78)))), (*(float *)(gen_frame + 0xa8)) = fVar2,
        fVar5 <= (float10)fVar2 &&
        (fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) -
                        (float10)*(float *)((int)this + 0x24)))), (*(float *)(gen_frame + 0xa8)) = fVar2,
        (float10)REFG(float, 0x10ebc30) <= (float10)fVar2)))) {
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((uint)REFG(undefined1, 0x14c0ba6));
      if ((double)REFG(undefined1, 0x14c0ba6) < *(double *)&REFG(undefined, 0x10944e0)) {
        REFG(undefined1, 0x14c0ba6) = REFG(undefined1, 0x14c0ba6) + 1;
      }
      goto LAB_00afb423;
    }
  }
  if (REFG(undefined1, 0x14c0ba6) != 0) {
    REFG(undefined1, 0x14c0ba6) = 0;
  }
LAB_00afb423: ;
  bVar3 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)),param_1);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    uVar4 = F_00aec9f0(*(undefined4 *)((int)this + 0x10),(uint)&(*(undefined4 *)(gen_frame + 0x90)));
  }
  if ((*(char *)(gen_frame + 0xaf)) != '\0') {
    F_00afa950(this);
    REFG(char, 0x14c0ba4) = '\x01';
    uVar4 = F_00aed0a0(*(undefined * PTR32 *)((int)this + 0x10),&(*(undefined4 *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x1fc)) ^ (uint)(uint)(gen_frame + 0x200));
  return uVar4;
}

/* ref: FUN_00afb490 */
uint F_00afb490(unsigned int gen_a0)
{
  GEN_ENTER(0xafb490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  F_00a9f640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  if (*(int *)((int)this + 0x14) == 0) goto LAB_00afb539;
  if (*(int *)((int)this + 0x14) != 5) {
    uVar3 = *(uint *)((int)this + 0x10);
    if ((uVar3 != 0) && (*(int *)(uVar3 + 0x10) != 0)) {
      bVar2 = F_00a9f620(*(int *)(uVar3 + 0x10));
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        if (!(*(double *)&REFG(undefined, 0x10944e0) <= (double)REFG(undefined1, 0x14c0ba6))) {
          return uVar3;
        }
        goto LAB_00afb4f1;
      }
    }
    if (*(char *)((int)this + 0x70) == '\0') {
      return uVar3;
    }
  }
LAB_00afb4f1: ;
  if ((*(char *)((int)this + 0x70) == '\0') && (iVar1 = *(int *)((int)this + 0x14), iVar1 != 0)) {
    *(undefined4 *)((int)this + 0x14) = 0;
    F_00aefee0(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
     (bVar2 = F_00a9f620(iVar1), bVar2 != 0)) {
    REFG(undefined1, 0x14c0ba6) = 0;
  }
LAB_00afb539: ;
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
     ((bVar2 = F_00a9f620(iVar1), bVar2 != 0 &&
      (F_00a4a760(&REFG(undefined, 0x14a7360),0x20,1), *(char *)((int)this + 0x5b) != '\0')))) {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x2d,1);
  }
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
     (bVar2 = F_00a9f620(iVar1), bVar2 != 0)) {
    *(byte *)((int)this + 0x5a) =
         *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0x8e))) >> 6 & 1;
  }
  uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(uVar3 + 4);
  return uVar3;
}

/* ref: FUN_00afb5c0 */
uint F_00afb5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xafb5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00afb490(this);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 1) {
    *(undefined4 *)((int)this + 0x14) = 1;
    uVar2 = F_00af5cb0(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00afb5f0 */
uint F_00afb5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xafb5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  
  uVar3 = F_00afb490(this);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 2) {
    *(undefined4 *)((int)this + 0x14) = 2;
    if ((*(int *)((int)this + 0x10) != 0) &&
       (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
      bVar2 = F_00a9f620(in_ecx);
      if (bVar2 != 0) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x10919f0));
      }
    }
    *(undefined1 *)((int)this + 0x59) = 1;
    uVar3 = F_00af5cb0(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00afb650 */
uint F_00afb650(unsigned int gen_a0)
{
  GEN_ENTER(0xafb650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  
  F_00afb490(this);
  uVar3 = *(uint *)((int)this + 0x10);
  *(undefined1 *)(uVar3 + 0x68) = 1;
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 2) {
    *(undefined4 *)((int)this + 0x14) = 2;
    if ((*(int *)((int)this + 0x10) != 0) &&
       (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
      bVar2 = F_00a9f620(in_ecx);
      if (bVar2 != 0) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x10919f0));
      }
    }
    *(undefined1 *)((int)this + 0x59) = 1;
    uVar3 = F_00af5cb0(this);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00afb6c0 */
uint F_00afb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xafb6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*(int *)((int)this + 0x14) != 0) && (*(char *)((int)this + 0x70) == '\0')) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0xec);
    F_00afacb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  if (*(char *)((int)this + 0x94) == '\0') {
    F_00afb490(this);
    iVar1 = *(int *)((int)this + 0x14);
    if (iVar1 != 1) {
      *(undefined4 *)((int)this + 0x14) = 1;
      F_00af5cb0(this);
      if (iVar1 != 5) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
    }
  }
  else {
    F_00afb5f0(this);
  }
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined4 *)((int)this + 0xe0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xe0), REFG(float, 0x10ebbf0));
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar2;
  *(undefined1 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0xcc) = 1;
  return 0;
}

/* ref: FUN_00afb7b0 */
uint F_00afb7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xafb7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) {
    bVar2 = F_00a9f620(iVar5);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  uVar3 = REFG(undefined4, 0x137104c);
  if ((*(char *)((int)this + 0xa6) == '\0') ||
     (uVar4 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
    uVar4 = (int)this + 0x80;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(uVar4 + 0x10)) {
    if ((*(char *)((int)this + 0xa6) == '\0') ||
       (iVar5 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
      iVar5 = (int)this + 0x80;
    }
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 0x10) - (float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198))));
    if ((float10)fVar1 <= (float10)0) {
      uVar3 = F_00afb6c0(this);
      *(undefined4 *)((int)this + 0x90) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x90), REFG(float, 0x10ebbf0));
      return uVar3;
    }
    *(float *)(iVar5 + 0x10) = fVar1;
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00afb860 */
uint F_00afb860(unsigned int gen_a0)
{
  GEN_ENTER(0xafb860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  byte bVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10));
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  *(undefined4 *)((int)this + 0x430) = *puVar5;
  *(undefined4 *)((int)this + 0x434) = uVar1;
  *(undefined4 *)((int)this + 0x438) = uVar2;
  *(float *)((int)this + 0x20c) = *(float *)((int)this + 0x208);
  if (*(int *)((int)this + 0x204) != 0) {
    *(float *)((int)this + 0x208) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                 (float10)*(float *)((int)this + 0x208)) + (float10)0)));
    *(float *)((int)this + 0x210) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                 (float10)*(float *)((int)this + 0x210)) + (float10)0)));
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x200) + 0x68))) != '\0') {
      *(float *)((int)this + 0x244) =
           ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                  (float10)*(float *)((int)this + 0x244))));
    }
  }
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00afb924: ;
    if (*(char *)((int)this + 0x1cc) == '\0') {
      if (*(int *)((int)this + 0x10) != 0) {
        bVar4 = F_00a9f620(*(int *)((int)this + 0x10));
        if ((bVar4 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00afb94f;
      }
      if (*(char *)((int)this + 0x1cd) == '\0') goto LAB_00afb98b;
    }
  }
  else {
    bVar4 = F_00a9f620(*(int *)((int)this + 0x10));
    if ((bVar4 == 0) || (REFG(char, 0x14c0a64) == '\0')) goto LAB_00afb924;
  }
LAB_00afb94f: ;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x80)
                 )));
  *(float *)((int)this + 0x80) = fVar3;
  if ((float10)REFG(float, 0x10ec4c0) < (float10)fVar3) {
    *(float *)((int)this + 0x80) = GEN_FLT_TO(*(float *)((int)this + 0x80), REFG(float, 0x10ec4c0));
  }
LAB_00afb98b: ;
  if (*(int *)((int)this + 0x10) != 0) {
    bVar4 = F_00a9f620(*(int *)((int)this + 0x10));
    if (bVar4 != 0) {
      F_00af2ad0(&REFG(undefined, 0x14c0a50));
    }
  }
  uVar6 = *(uint *)((int)this + 0x1c8);
  if (uVar6 != 0) {
    if ((*(char *)((int)this + 0x1cc) != '\0') && (*(char *)(uVar6 + 100) == '\0')) {
      *(undefined1 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1dc) = 0;
      *(undefined1 *)((int)this + 0x1e0) = 0;
      *(undefined4 *)((int)this + 0x1d0) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 0;
      F_00af9b10((undefined *)((int)this + 0x1c4));
    }
    if ((*(char *)((int)this + 0x1cd) != '\0') && (*(char *)(uVar6 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 0x1cd) = 0;
      *(undefined4 *)((int)this + 0x1d4) = 0;
      uVar6 = F_00aea850((undefined *)((int)this + 0x1c4));
    }
  }
  *(undefined4 *)((int)this + 0x450) = 0;
  return uVar6;
}

/* ref: FUN_00afba90 */
uint F_00afba90(unsigned int gen_a0)
{
  GEN_ENTER(0xafba90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00afb650((undefined *)((int)this + 0x1f0));
      return uVar2;
    }
  }
  return in_EAX;
}

/* ref: FUN_00afbac0 */
uint F_00afbac0(unsigned int gen_a0)
{
  GEN_ENTER(0xafbac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)((int)this + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) && ((REFG(char, 0x14c0a64) != '\0' || (REFG(char, 0x14c0a65) != '\0')))) {
      in_EAX = F_00afff50(&REFG(undefined, 0x14c0a50));
    }
  }
  if ((*(char *)((int)this + 0x1cc) != '\0') || (*(char *)((int)this + 0x1cd) != '\0')) {
    *(undefined1 *)((int)this + 0x1cc) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 0;
    *(undefined4 *)((int)this + 0x1d8) = 0;
    *(undefined4 *)((int)this + 0x1dc) = 0;
    *(undefined1 *)((int)this + 0x1e0) = 0;
    F_00af9b10((undefined *)((int)this + 0x1c4));
    *(undefined1 *)((int)this + 0x1cd) = 0;
    *(undefined4 *)((int)this + 0x1d4) = 0;
    in_EAX = F_00aea850((undefined *)((int)this + 0x1c4));
  }
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x65) = 0;
  *(undefined1 *)((int)this + 0x67) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x80) = uVar1;
  return in_EAX;
}

/* ref: FUN_00afbbd0 */
uint F_00afbbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafbbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00afbac0(this);
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && ((char)param_1 != '\0')) {
      uVar2 = F_00aee2a0(&REFG(undefined, 0x14c0a50),0);
    }
  }
  return uVar2;
}

/* ref: FUN_00afbc10 */
uint F_00afbc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafbc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined1 * puVar4;
  
  *param_1 = 0;
  puVar4 = param_1;
  if (*(char *)((int)this + 0x2b) != '\0') {
    iVar1 = *(int *)((int)this + 0x10);
    puVar4 = *(undefined1 * PTR32 *)(iVar1 + 0x204);
    if (((((puVar4 == (undefined1 *)0x0) || (puVar4 == &REFG(undefined, 0x5))) &&
         (*(char *)((int)this + 0x1a) == '\0')) &&
        ((*(char *)((int)this + 0x29) == '\0' && (*(char *)(iVar1 + 0x1cc) == '\0')))) &&
       ((*(char *)(iVar1 + 0x1cd) == '\0' && (*(char *)((int)this + 0x273) == '\0')))) {
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
      puVar4 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if ((bVar3 != 0) && (iVar1 = *(int *)((int)this + 0x10), *(char *)(iVar1 + 0x359) == '\0')) {
        puVar4 = (undefined1 *)F_00afb490((undefined *)(iVar1 + 0x1f0));
        iVar2 = *(int *)(iVar1 + 0x204);
        if (iVar2 != 1) {
          *(undefined4 *)(iVar1 + 0x204) = 1;
          puVar4 = (undefined1 *)F_00af5cb0((undefined *)(iVar1 + 0x1f0));
          if (iVar2 != 5) {
            *(undefined4 *)(iVar1 + 0x210) = 0;
          }
        }
        *param_1 = 1;
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00afbcd0 */
unsigned int F_00afbcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xafbcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a5;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;
  undefined1 * param_7 = (undefined1 *)(uintptr_t)gen_a7;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  float10 fVar8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  F_00aef9b0(this,param_1);
  cVar7 = (char)param_1;
  if ((*(char *)((int)this + 0x14) == '\0') && (cVar7 != '\0')) {
    *(undefined1 *)((int)this + 0x14) = 1;
  }
  if ((*(char *)((int)this + 0x15) == '\0') && ((char)param_2 != '\0')) {
    *(undefined1 *)((int)this + 0x15) = 1;
  }
  F_00af4710(this,param_1,param_2);
  if (cVar7 != '\0') {
    fVar8 = F_00aeb260(*(float *)((int)this + 0xd0));
    uVar6 = F_00ae9230(*(undefined4 *)((int)this + 0x10),(float)fVar8,param_4);
    *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6c))) = uVar6;
  }
  F_00aef8e0(this,param_1,param_2);
  if ((*(char *)((int)this + 0x273) != '\0') ||
     (bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar4 == 0)) {
    iVar2 = *(int *)((int)this + 0x10);
    iVar3 = *(int *)(iVar2 + 0x204);
    if (((iVar3 == 0) || ((iVar3 == 5 || (iVar3 == 1)))) &&
       ((*(char *)((int)this + 0x1a) == '\0' &&
        ((((*(char *)((int)this + 0x29) == '\0' && (*(char *)(iVar2 + 0x1cc) == '\0')) &&
          (*(char *)(iVar2 + 0x1cd) == '\0')) && (*(char *)(iVar2 + 0x359) == '\0')))))) {
      bVar4 = F_00aea660(this);
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      F_00afbac0(this_00);
      iVar2 = *(int *)((int)this_00 + 0x10);
      if (((iVar2 != 0) && (bVar5 = F_00a9f620(iVar2), bVar5 != 0)) && (bVar4 == 0)) {
        F_00aee2a0(&REFG(undefined, 0x14c0a50),0);
      }
    }
  }
  if ((*(char *)(iVar1 + 100) != '\0') && (param_5 != (undefined1 *)0x0)) {
    *param_5 = 1;
  }
  if ((*(char *)(iVar1 + 0x65) != '\0') && (param_6 != (undefined1 *)0x0)) {
    *param_6 = 1;
  }
  if (((char)param_3 != '\0') && (param_7 != (undefined1 *)0x0)) {
    *param_7 = 1;
  }
  if (((cVar7 != '\0') || ((char)param_2 != '\0')) || (*(char *)((int)this + 0x2b) != '\0')) {
    F_00a9fd20(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))),(uint)*(byte *)(iVar1 + 100),
                 (uint)*(byte *)(iVar1 + 0x65),param_3,param_1,param_2,
                 (uint)*(byte *)((int)this + 0x2b));
  }
  if (*(int *)(iVar1 + 0x60) == 0) {
    *(undefined4 *)(iVar1 + 0x60) = 1;
  }
  return 0;
}

/* ref: FUN_00afbe90 */
uint F_00afbe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafbe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  undefined * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x10);
  iVar1 = *(int *)(uVar3 + 0x204);
  if (((iVar1 == 0) || (((iVar1 != 3 && (iVar1 != 4)) && (iVar1 != 2)))) ||
     (*(char *)(uVar3 + 0x24b) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x94)) = param_2[1];
    (*(undefined4 *)(gen_frame + 0x98)) = param_2[2];
    (*(char *)(gen_frame + 0xae)) = '\0';
    (*(char *)(gen_frame + 0xaf)) = '\0';
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)),param_1);
    if (bVar2 == 0) {
      F_00af6bb0(this,param_1,&(*(undefined4 *)(gen_frame + 0x90)),param_2,&(*(char *)(gen_frame + 0xae)),&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0);
    }
    bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)),param_1);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      F_00aec9f0(*(undefined4 *)((int)this + 0x10),(uint)&(*(undefined4 *)(gen_frame + 0x90)));
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((*(char *)(gen_frame + 0xae)) != '\0') {
        uVar3 = F_00afb5f0((undefined *)((int)this_00 + 0x1f0));
        return uVar3;
      }
      if ((*(char *)(gen_frame + 0xaf)) != '\0') {
        uVar3 = F_00afba90(this_00);
        return uVar3;
      }
      uVar3 = F_00aed0a0(this_00,&(*(undefined4 *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  return uVar3;
}

/* ref: FUN_00afc050 */
uint F_00afc050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafc050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  undefined4 uVar7;
  int * piVar8;
  double dVar9;
  byte bVar10;
  float * pfVar11;
  float * pfVar12;
  float * extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  
  iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
  if ((iVar4 != 0) && (bVar10 = F_00a9f620(iVar4), bVar10 != 0)) {
    pvVar5 = *(undefined * PTR32 *)((int)this + 4);
    F_00afbac0(pvVar5);
    iVar4 = *(int *)((int)pvVar5 + 0x10);
    if ((iVar4 != 0) && (bVar10 = F_00a9f620(iVar4), bVar10 != 0)) {
      F_00aee2a0(&REFG(undefined, 0x14c0a50),0);
    }
  }
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x33)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)(gen_frame + 0x35)) = 0;
  (*(undefined1 *)(gen_frame + 0x36)) = 0;
  (*(undefined1 *)(gen_frame + 0x38)) = 0;
  if (param_4 != 0) {
    F_00ae5a80(((undefined1 *)(gen_frame + 0xc)),param_4);
  }
  pfVar11 = param_1;
  if (param_1 == (float *)0x0) {
    pfVar11 = &REFG(float, 0x1375ac0);
  }
  (*(float *)(gen_frame + 0x60)) = *pfVar11;
  (*(float *)(gen_frame + 0x64)) = pfVar11[1];
  (*(float *)(gen_frame + 0x68)) = pfVar11[2];
  if (param_2 == (float *)0x0) {
    (*(float *)(gen_frame + 0x88)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x7c)) = *param_2;
    fVar17 = F_00aeb260(*param_2);
    (*(float *)(gen_frame + 0x88)) = (float)fVar17;
  }
  (*(char *)(gen_frame + 0x8e)) = '\0';
  (*(char *)(gen_frame + 0x8f)) = '\0';
  if (param_1 != (float *)0x0) {
    pfVar11 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))));
    (*(float *)(gen_frame + 0x40)) = *pfVar11;
    (*(float *)(gen_frame + 0x44)) = pfVar11[1];
    (*(float *)(gen_frame + 0x48)) = pfVar11[2];
    bVar10 = F_0054ccb0(&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x60)));
    if (bVar10 == 0) {
      (*(char *)(gen_frame + 0x8e)) = '\x01';
    }
  }
  if ((param_2 != (float *)0x0) &&
     (fVar17 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) + 0xb0))),
     bVar15 = GEN_ISNAN(fVar17) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x88))),
     bVar15 == (bVar15 || fVar17 == (float10)(*(float *)(gen_frame + 0x88))))) {
    (*(char *)(gen_frame + 0x8f)) = '\x01';
  }
  iVar4 = *(int *)((int)this + 4);
  pfVar11 = (float *)(iVar4 + 0x20);
  pfVar12 = (float *)F_00a5feb0(*(undefined * PTR32 *)(iVar4 + 0x10));
  fVar14 = *pfVar12;
  iVar6 = *(int *)((int)this + 4);
  (*(float *)(gen_frame + 0x50)) = fVar14;
  fVar1 = pfVar12[1];
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar2 = pfVar12[2];
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar3 = *((float *)GEN_TOP((*(int *)(iVar6 + 0x10) + 0xb0)));
  (*(float *)(gen_frame + 0x7c)) = fVar3;
  pfVar12 = &(*(float *)(gen_frame + 0x50));
  if ((*(char *)(gen_frame + 0x8e)) == '\0') {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
  }
  else {
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)fVar14);
    (*(float *)(gen_frame + 0x40)) = fVar14;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x44)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)fVar2);
    (*(float *)(gen_frame + 0x48)) = fVar2;
    (*(float *)(gen_frame + 0x50)) = fVar14;
    (*(float *)(gen_frame + 0x54)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = fVar2;
  }
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x58));
  if ((*(char *)(gen_frame + 0x8f)) == '\0') {
    (*(float *)(gen_frame + 0x84)) = 0.0;
  }
  else {
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)fVar3);
    (*(float *)(gen_frame + 0x80)) = fVar14;
    fVar17 = F_00aeb260(fVar14);
    (*(float *)(gen_frame + 0x84)) = (float)fVar17;
    pfVar12 = extraout_EAX;
  }
  if ((*(char *)(gen_frame + 0x8e)) != '\0') {
    if ((char)(*(undefined2 *)(gen_frame + 0x30)) == '\0') {
      *(undefined1 *)(iVar4 + 0x66) = (*(undefined1 *)(gen_frame + 0x35));
      *(undefined1 *)(iVar4 + 0x3d) = (*(undefined1 *)(gen_frame + 0x33));
      *(undefined1 *)(iVar4 + 0x69) = (*(undefined1 *)(gen_frame + 0x36));
    }
    *pfVar11 = (*(float *)(gen_frame + 0x60));
    *(float *)(iVar4 + 0x24) = (*(float *)(gen_frame + 0x64));
    *(float *)(iVar4 + 0x28) = (*(float *)(gen_frame + 0x68));
    *(undefined1 *)(iVar4 + 0x30) = 0;
    if ((char)(*(undefined2 *)(gen_frame + 0x30)) == '\0') {
      fVar14 = (float)((float10)(*(float *)(gen_frame + 0x48)) * (float10)(*(float *)(gen_frame + 0x48)) + (float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x40))
                      );
      (*(float *)(gen_frame + 0x80)) = fVar14;
      fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
      (*(float *)(gen_frame + 0x80)) = fVar14;
      if (!((float10)fVar14 <= (float10)*(float *)&REFG(undefined, 0x10ebbe8))) {
        *(undefined1 *)(iVar4 + 100) = 1;
        if (*(char *)((int)this + 8) == '\0') {
          *(undefined1 *)((int)this + 8) = 1;
        }
        pvVar5 = *(undefined * PTR32 *)((int)this + 4);
        *(float *)((int)this + 0xc) = fVar14;
        pfVar12 = (float *)F_00af20e0(pvVar5,pfVar11,param_4);
        goto LAB_00afc3b7;
      }
      (*(float *)(gen_frame + 0x80)) = *(float *)((int)this + 4);
      uVar13 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)gen_fl2bits(*(float *)((int)this + 4)) + 0x10))));
      (*(float *)(gen_frame + 0x54)) = gen_bits2f(*(undefined4 *)(uVar13 + 4));
      (*(float *)(gen_frame + 0x58)) = gen_bits2f(*(undefined4 *)(uVar13 + 8));
      (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x60));
      F_00aec9f0((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x80))),(uint)&(*(float *)(gen_frame + 0x50)));
      pfVar12 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x80))) + 0x10));
      (*(float *)(gen_frame + 0x50)) = *pfVar12;
      (*(float *)(gen_frame + 0x54)) = pfVar12[1];
      (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x68));
      pfVar12 = &(*(float *)(gen_frame + 0x50));
      fVar14 = (*(float *)(gen_frame + 0x80));
    }
    else {
      pfVar12 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))));
      (*(float *)(gen_frame + 0x50)) = *pfVar12;
      (*(float *)(gen_frame + 0x54)) = pfVar12[1];
      (*(float *)(gen_frame + 0x58)) = pfVar12[2];
      bVar10 = F_0054ccb0(&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x60)));
      pfVar12 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar10)));
      if (bVar10 != 0) goto LAB_00afc3b7;
      fVar14 = *(float *)((int)this + 4);
      pfVar12 = &(*(float *)(gen_frame + 0x60));
    }
    pfVar12 = (float *)F_00aec9f0((undefined4)gen_fl2bits(fVar14),(uint)pfVar12);
  }
LAB_00afc3b7: ;
  if ((*(char *)(gen_frame + 0x8f)) != '\0') {
    *(float *)(iVar4 + 0x34) = (*(float *)(gen_frame + 0x88));
    if (((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x30)) + 1)) == '\0') &&
       ((*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x84))))), dVar9 = (double)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x84))))),
       (GEN_ISNAN(*(double *)&REFG(undefined, 0x10ec4d0)) || GEN_ISNAN(dVar9)) || *(double *)&REFG(undefined, 0x10ec4d0) < dVar9)) {
      *(undefined1 *)(iVar4 + 0x65) = 1;
      if (*(char *)((int)this + 9) == '\0') {
        *(undefined1 *)((int)this + 9) = 1;
      }
      uVar7 = *(undefined4 *)((int)this + 4);
      *(float *)((int)this + 0x10) = (*(float *)(gen_frame + 0x84));
      pfVar12 = (float *)F_00af2190(uVar7,(uint)pfVar11,param_4);
    }
    else {
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
      fVar17 = ((float10)GEN_TOD(gen_bits2f(piVar8[0x2c])));
      fVar18 = (float10)(*(float *)(gen_frame + 0x88));
      bVar15 = GEN_ISNAN(fVar17) || GEN_ISNAN(fVar18);
      bVar16 = bVar15 || fVar17 == fVar18;
      pfVar12 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar12) >> 0x10),
                                  CONCAT11(bVar16 << 6 | bVar15 << 2 | 2U | !(fVar18 <= fVar17),
                                           (char)pfVar12))));
      if (bVar15 == bVar16) {
        pfVar12 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x88))))));
      }
      *(undefined1 *)(iVar4 + 0x65) = 0;
    }
  }
  if (((*(char *)(gen_frame + 0x8e)) == '\0') || ((char)(*(undefined2 *)(gen_frame + 0x30)) != '\0')) {
    if (((*(char *)(gen_frame + 0x8f)) != '\0') && ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x30)) + 1)) == '\0')) {
      pfVar12 = (float *)F_00aea8c0(this,pfVar11,(*(float *)(gen_frame + 0x84)));
    }
  }
  else {
    fVar17 = ((float10)GEN_TOD(atan2((float10)(*(float *)(gen_frame + 0x40)),(float10)(*(float *)(gen_frame + 0x48)))));
    (*(float *)(gen_frame + 0x80)) = (float)fVar17;
    fVar17 = F_00aeb260((float)fVar17);
    (*(float *)(gen_frame + 0x80)) = (float)fVar17;
    fVar14 = (float)((float10)(float)fVar17 - (float10)(*(float *)(gen_frame + 0x7c)));
    (*(float *)(gen_frame + 0x7c)) = fVar14;
    fVar17 = F_00aeb260(fVar14);
    (*(float *)(gen_frame + 0x80)) = (float)fVar17;
    pfVar12 = (float *)F_00af80b0(this,(uint)pfVar11,
                                    CONCAT13((*(undefined1 *)(gen_frame + 0x37)),
                                             CONCAT12((*(undefined1 *)(gen_frame + 0x36)),CONCAT11((*(undefined1 *)(gen_frame + 0x35)),(*(undefined1 *)(gen_frame + 0x34))))),
                                    (float)fVar17,-(uint)((*(char *)(gen_frame + 0x8f)) != '\0') & (uint)&(*(float *)(gen_frame + 0x84)),0);
  }
  if ((*(char *)(gen_frame + 0x8e)) == '\0') {
    *(uint *)(iVar4 + 0x60) = param_3;
    return param_3;
  }
  *(undefined1 *)((int)this + 0x1c) = (*(undefined1 *)(gen_frame + 0x38));
  *(uint *)(iVar4 + 0x60) = param_3;
  return (uint)pfVar12;
}

/* ref: FUN_00afc4f0 */
uint F_00afc4f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xafc4f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  memcpy(&gen_args[7], &gen_a7, sizeof gen_a7);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  float fVar2;
  int * piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined3 uVar6;
  byte bVar7;
  uint uVar8;
  float10 fVar9;
  double dVar10;
  
  (*(undefined4 *)(gen_frame + 0x60)) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  (*(float *)(gen_frame + 0x64)) = gen_bits2f((*(undefined4 * PTR32 *)&gen_args[1])[1]);
  (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 * PTR32 *)&gen_args[1])[2];
  if ((REFG(char, 0x14c0a40) != '\0') && (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x420))) != '\0')) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar3;
    uVar8 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    if (((uVar8 == 2) || (uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))((*(int * PTR32 *)(gen_frame + 0x70))), uVar8 == 3)) &&
       (((*(uint *)&gen_args[4]) & 0x20) == 0)) {
      uVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      (*(float *)(gen_frame + 0x78)) = 0.0;
      bVar7 = F_00af6450(uVar4,&(*(undefined4 *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x78)),(float)(float10)0,REFG(float, 0x10ebbf0),0,0,REFG(float, 0x10ebbf0)
                           ,0,0,0);
      if (bVar7 != 0) {
        (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x78));
      }
    }
  }
  uVar8 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar5 = *(int *)(uVar8 + 0x10);
  if ((*(byte *)(iVar5 + 0x8e) & 0x40) == 0) {
    if (((*(uint *)&gen_args[5]) & 0x10) == 0) {
      if ((((((*(uint *)&gen_args[5]) & 8) == 0) && (*(char *)(uVar8 + 0x359) == '\0')) &&
          (*(char *)(uVar8 + 0x24b) == '\0')) && (uVar8 = F_00aa0f90(iVar5), (char)uVar8 == '\0'))
      {
        F_00af9030(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1f0,(*(uint *)&gen_args[4]),(*(uint *)&gen_args[5]),&(*(undefined4 *)(gen_frame + 0x60)),(*(float *)&gen_args[6]));
        (*(bool *)(gen_frame + 0x7f)) = true;
        if (!((*(float *)&gen_args[6]) <= 0.0)) {
          (*(bool *)(gen_frame + 0x7f)) = false;
        }
        (*(bool *)(gen_frame + 0x7f)) = !GEN_ISNAN((*(float *)&gen_args[6])) && !(0.0 < (*(float *)&gen_args[6]));
        F_0054e820(((undefined1 *)(gen_frame + 0xc)));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 2)) = (byte)(*(uint *)&gen_args[4]) >> 3 & 1;
        uVar6 = CONCAT12((byte)(*(uint *)&gen_args[4]) >> 3,(undefined2)(*(uint *)(gen_frame + 0x34)));
        (*(undefined1 *)(gen_frame + 0x30)) = (*(bool *)(gen_frame + 0x7f));
        (*(undefined1 *)(gen_frame + 0x31)) = (*(bool *)(gen_frame + 0x7f));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = (byte)(*(uint *)&gen_args[4]) >> 2 & 1;
        (*(uint *)(gen_frame + 0x34)) = CONCAT31((int3)(CONCAT13((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 3)),uVar6) >> 8),(byte)(*(uint *)&gen_args[4]) >> 2) &
                   0xff01ff01;
        fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10))) + 0xb0)));
        (*(float *)(gen_frame + 0x74)) = fVar2;
        (*(byte *)(gen_frame + 0x33)) = (byte)(*(uint *)&gen_args[4]) >> 1 & 1;
        fVar2 = (float)((float10)(*(float *)&gen_args[2]) - (float10)fVar2);
        (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        F_00aeb260(fVar2);
        F_00ae9430(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),((undefined1 *)(gen_frame + 0x40)));
        F_0046f4a0(((float *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x40)));
        fVar9 = F_00aeb3c0(((float *)(gen_frame + 0x50))[0],(*(float *)(gen_frame + 0x58)));
        (*(float *)(gen_frame + 0x78)) = (float)fVar9;
        fVar2 = (float)((float10)(float)fVar9 - (float10)(*(float *)(gen_frame + 0x74)));
        (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        fVar9 = F_00aeb260(fVar2);
        (*(float *)(gen_frame + 0x78)) = (float)fVar9;
        if ((((byte)(*(uint *)(gen_frame + 0x34)) == '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != '\0')) &&
           (iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))), *(int *)(iVar5 + 0x6c) - 4U < 4)) {
          fVar2 = ((float)GEN_TOF(ABS((float10)(float)fVar9)));
          (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(float *)&REFG(undefined, 0x1339b50) *
                                   (float10)*(double *)&REFG(undefined, 0x1080228)))));
          if (((float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b50) * (float10)*(double *)&REFG(undefined, 0x1080228)
                               ) < (float10)fVar2) &&
             (uVar8 = F_00ae9230(iVar5,(*(float *)&gen_args[3]),1), uVar8 == *(uint *)(iVar5 + 0x6c))) {
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = 1;
            (*(uint *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x34)), 1, 3),1);
          }
        }
        (*(undefined4 *)(gen_frame + 0x28)) = 1;
        (*(undefined4 *)(gen_frame + 0x2c)) = 1;
        fVar2 = (float)((float10)(*(float *)&gen_args[6]) + (float10)*(double *)&REFG(undefined, 0x1094810));
        (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        (*(float *)(gen_frame + 0x1c)) = fVar2;
        (*(float *)(gen_frame + 0x20)) = fVar2;
        if ((GEN_ISNAN((*(float *)&gen_args[7])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
            ((GEN_ISNAN((*(float *)&gen_args[7])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)&gen_args[7]) == *(float *)&REFG(undefined, 0x1088114)))
        {
          F_0046f4a0(((float *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x40)));
          dVar10 = F_0054cd20(((float *)(gen_frame + 0x50)));
          fVar2 = (float)dVar10;
          (*(float *)(gen_frame + 0x74)) = fVar2;
          fVar9 = (float10)fVar2;
          if ((float10)REFG(float, 0x10ebc4c) <= fVar9) {
            (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
            (*(float *)(gen_frame + 0x74)) = (*(float *)&gen_args[6]);
            if ((*(float *)&gen_args[6]) < REFG(float, 0x10ebc30)) {
              (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10ebc30);
              (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar9 / (float10)REFG(float, 0x10ebc30)))));
            }
            else if ((GEN_ISNAN((*(float *)&gen_args[6])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
                     ((GEN_ISNAN((*(float *)&gen_args[6])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                     (*(float *)&gen_args[6]) == *(float *)&REFG(undefined, 0x1088114))) {
              (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar9 / (float10)(*(float *)&gen_args[6])))));
            }
            if ((float10)(*(float *)&gen_args[7]) * (float10)*(double *)&REFG(undefined, 0x1094788) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x70)))))) {
              (*(undefined1 *)(gen_frame + 0x30)) = 1;
            }
          }
        }
        *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(float *)&gen_args[7]);
        F_00afc050((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x60)),&(*(float *)&gen_args[2]),2,((undefined1 *)(gen_frame + 0xc)));
        uVar8 = (*(uint *)(gen_frame + 0x34));
        F_00aefe70((*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x20,(*(uint *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x78)),&(*(float *)&gen_args[3]));
        uVar8 = F_00af52f0((*(undefined * PTR32 *)&gen_args[0]),uVar8,(*(float *)(gen_frame + 0x78)));
      }
      return uVar8;
    }
    uVar8 = F_00af08a0(uVar8 + 0x310,&(*(undefined4 *)(gen_frame + 0x60)),(*(float *)&gen_args[2]));
    return uVar8;
  }
  uVar4 = (*(undefined4 * PTR32 *)&gen_args[1])[1];
  uVar1 = (*(undefined4 * PTR32 *)&gen_args[1])[2];
  *(undefined4 *)(iVar5 + 0x10) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  *(undefined4 *)(iVar5 + 0x14) = uVar4;
  *(undefined4 *)(iVar5 + 0x18) = uVar1;
  return uVar8;
}

/* ref: FUN_00afc8a0 */
uint F_00afc8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafc8a0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  (*(undefined4 *)(gen_frame + 0x40)) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 * PTR32 *)&gen_args[1])[1];
  (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 * PTR32 *)&gen_args[1])[2];
  if ((REFG(char, 0x14c0a40) != '\0') && (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x420))) != '\0')) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (uVar5 != 2) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if (uVar5 != 3) goto LAB_00afc957;
    }
    uVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    bVar4 = F_00af6450(uVar2,&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x5c)),(float)(float10)0,REFG(float, 0x10ebbf0),0,0,REFG(float, 0x10ebbf0),0
                         ,0,0);
    if (bVar4 != 0) {
      (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x5c));
    }
  }
LAB_00afc957: ;
  uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar3 = *(int *)(uVar5 + 0x10);
  if ((*(byte *)(iVar3 + 0x8e) & 0x40) != 0) {
    *(undefined4 *)(iVar3 + 0x10) = (*(undefined4 *)(gen_frame + 0x40));
    *(undefined4 *)(iVar3 + 0x14) = (*(undefined4 *)(gen_frame + 0x44));
    *(undefined4 *)(iVar3 + 0x18) = (*(undefined4 *)(gen_frame + 0x48));
    return uVar5;
  }
  F_00afacb0((undefined *)(uVar5 + 0x1f0),0);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x28)) = 3;
  (*(undefined4 *)(gen_frame + 0x2c)) = 3;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined2 *)(gen_frame + 0x34)) = 0;
  (*(undefined2 *)(gen_frame + 0x37)) = 0;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(float *)(gen_frame + 0x20)) = (*(float *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x3c)) = 2;
  (*(undefined1 *)(gen_frame + 0x36)) = 1;
  uVar5 = F_00afc050((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)&gen_args[2]),3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  return uVar5;
}

/* ref: FUN_00afca20 */
uint F_00afca20(unsigned int gen_a0)
{
  GEN_ENTER(0xafca20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  undefined * this_00;
  int * piVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined4 * puVar4;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  float10 fVar6;
  float fVar7;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) {
    bVar3 = F_00a9f620(iVar1);
    if (bVar3 != 0) {
      if (REFG(char, 0x14c0a40) == '\0') {
        return CONCAT31(extraout_var,bVar3);
      }
      uVar5 = *(uint *)((int)this + 0x10);
      if (*(char *)(uVar5 + 0x420) == '\0') {
        return uVar5;
      }
      if (*(int *)((int)this + 0x14) != 0) {
        return uVar5;
      }
    }
  }
  (*(char *)(gen_frame + 0xaf)) = '\0';
  if ((((*(int *)((int)this + 0x10) != 0) &&
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
      (bVar3 = F_00a9f620(iVar1), bVar3 != 0)) && (REFG(char, 0x14c0cc0) != '\0')) {
    (*(char *)(gen_frame + 0xaf)) = '\x01';
    REFG(char, 0x14c0cc0) = '\0';
  }
  uVar5 = *(uint *)((int)this + 0x10);
  this_00 = *(undefined * PTR32 *)(uVar5 + 0x10);
  if ((((this_00 == (undefined *)0x0) || ((*(byte *)((int)this_00 + 0x2dd3) & 2) == 0)) ||
      (*(char *)(uVar5 + 0x421) != '\0')) && ((*(char *)(gen_frame + 0xaf)) == '\0')) {
    return uVar5;
  }
  puVar4 = (undefined4 *)F_00a5feb0(this_00);
  iVar1 = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x90)) = *puVar4;
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(puVar4[1]);
  (*(undefined4 *)(gen_frame + 0x98)) = puVar4[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  if ((*(int *)(iVar1 + 0x10) == 0) || (bVar3 = F_00a9f620(*(int *)(iVar1 + 0x10)), bVar3 == 0)) {
    fVar7 = 0.0;
    piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
    if (piVar2 == (int *)0x0) goto LAB_00afcbdf;
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if (uVar5 != 1) {
      fVar7 = 0.0;
      goto LAB_00afcbdf;
    }
  }
  fVar7 = *((float *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0xc0)));
LAB_00afcbdf: ;
  (*(float *)(gen_frame + 0xa4)) = fVar7;
  fVar7 = F_00ae9520(*(undefined * PTR32 *)((int)this + 0x10));
  (*(float *)(gen_frame + 0xa8)) = fVar7;
  bVar3 = F_00af0bb0(&(*(undefined4 *)(gen_frame + 0x90)),fVar7,(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xa8)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0);
  if (bVar3 != 0) {
    fVar6 = (float10)(*(float *)(gen_frame + 0xa8));
    (*(float *)(gen_frame + 0xa8)) = (float)(fVar6 - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890));
    if (!((float10)(float)(fVar6 - (float10)(*(float *)(gen_frame + 0x94))) <=
         (float10)(float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890)))) {
      bVar3 = F_00af0940(&(*(undefined4 *)(gen_frame + 0x0)));
      if (bVar3 != 0) {
        return CONCAT31(extraout_var_00,bVar3);
      }
      uVar5 = F_00afb650(this);
      return uVar5;
    }
  }
  uVar5 = F_00afb5f0(this);
  return uVar5;
}

/* ref: FUN_00afcc90 */
uint F_00afcc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafcc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int in_ecx;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx);
    if (bVar1 != 0) {
      bVar1 = F_0054ccb0(param_1,param_2);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        if ((*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) != '\0') &&
           (*(int *)((int)this + 0x14) == 0)) {
          uVar2 = F_00af55f0(this,param_1,param_2);
          return uVar2;
        }
        uVar2 = F_00afb1f0(this,param_1,param_2,param_2,0);
      }
      return uVar2;
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
  F_00afaf00(this,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_00aec9f0(*(undefined4 *)((int)this + 0x10),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00afcd60 */
uint F_00afcd60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xafcd60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(param_1 + 0x10));
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = F_00afc4f0(param_1 + 0x1c4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return uVar2;
}

/* ref: FUN_00afcdc0 */
uint F_00afcdc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafcdc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00afc8a0(param_1 + 0x1c4,param_2,(undefined4)gen_fl2bits(param_3),param_4,param_5);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return uVar1;
}

/* ref: FUN_00afce30 */
unsigned int F_00afce30(unsigned int gen_a0)
{
  GEN_ENTER(0xafce30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  int in_ecx;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar6 = F_00aea5a0(this,0);
    uVar5 = (*(uint *)(gen_frame + 0x14));
    uVar4 = (*(uint *)(gen_frame + 0x10));
    uVar3 = (*(uint *)(gen_frame + 0xc));
    if (bVar6 != 0) {
      if (*(char *)((int)this + 0x22) != '\0') {
        (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xffffff00;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x10)) = uVar4 & 0xffffff00;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
        (*(uint *)(gen_frame + 0xc)) = uVar3 & 0xffffff00;
        F_00aee340(this,(uint)&(*(uint *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x10)));
        F_00af43e0(this,(float)(float10)0,&REFG(float, 0x1375ac0),0,0,(*(uint *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0xc)));
        in_ecx = *(int *)((int)this + 0x10);
        uVar1 = *(undefined1 *)(in_ecx + 100);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = uVar1;
        (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),uVar1);
        bVar6 = F_00ae8680(in_ecx);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = bVar6;
        (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),bVar6);
        F_00afbcd0(this,(*(uint *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),0,(*(uint *)(gen_frame + 0x10)),0,0,0);
        F_00af6310(*(undefined * PTR32 *)((int)this + 0x10));
        F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10),0,0,1);
      }
      fVar2 = REFG(float, 0x10ebbf0);
      *(undefined1 *)((int)this + 0x22) = 0;
      *(float *)((int)this + 0x24) = fVar2;
      *(undefined1 *)((int)this + 0x28) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00afcf00 */
uint F_00afcf00(unsigned int gen_a0)
{
  GEN_ENTER(0xafcf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    in_EAX = F_00afbac0(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined1 *)((int)this + 0x19) = 0;
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00afcf35: ;
    uVar3 = in_EAX & 0xffffff00;
  }
  else {
    uVar3 = F_00b6afa0();
    in_EAX = 0;
    if (uVar3 == 0) goto LAB_00afcf35;
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    in_EAX = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) goto LAB_00afcf35;
    uVar3 = CONCAT31(extraout_var,1);
  }
  *(char *)((int)this + 0x17) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    uVar4 = F_00b6afa0();
    uVar3 = 0;
    if (uVar4 != 0) {
      bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) goto LAB_00afcf58;
    }
    *(undefined1 *)((int)this + 0x17) = 0;
  }
LAB_00afcf58: ;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined1 *)((int)this + 0x1a) = 0;
  *(undefined1 *)((int)this + 0x275) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x108) = uVar1;
  *(undefined4 *)((int)this + 0x10c) = uVar1;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return uVar3;
}

/* ref: FUN_00afd000 */
uint F_00afd000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined * this_00;
  bool bVar11;
  
  uVar9 = (*(uint *)(gen_frame + 0x49));
  uVar8 = (*(uint *)(gen_frame + 0x45));
  uVar7 = (*(uint *)(gen_frame + 0x3c));
  uVar6 = (*(uint *)(gen_frame + 0x30));
  uVar5 = (*(uint *)(gen_frame + 0x28));
  uVar4 = (*(uint *)(gen_frame + 0x24));
  uVar3 = (*(uint *)(gen_frame + 0x1c));
  uVar2 = (*(uint *)(gen_frame + 0x18));
  if (param_1 != (char *)0x0) {
    *param_1 = '\0';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 0x1cc) != '\0')) || (*(char *)(iVar1 + 0x1cd) != '\0')) {
    return 0;
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x45)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x45)) = uVar8 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = uVar7 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x49)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x49)) = uVar9 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x24)) = uVar4 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x30)) = uVar6 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar5 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar2 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar3 & 0xffffff00;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x40)) = REFG(float, 0x10ebbf0);
  F_00afbc10(this,&(*(uint *)(gen_frame + 0x1c)));
  this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c));
  bVar10 = F_00a34970(this_00,0x130);
  if (bVar10 != 0) {
    bVar11 = *(char *)((int)this + 0x16) == '\0';
    *(bool *)((int)this + 0x16) = bVar11;
    if ((*(char *)((int)this + 0x17) != '\0') && (*(int *)((int)this + 0x164) != 4)) {
      *(bool *)((int)this + 0x1c) = bVar11;
    }
  }
  F_00af6a20(this,&(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x45)),&(*(uint *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x30)));
  F_00aeed60(this,(uint)&(*(float *)(gen_frame + 0x34)),(uint)&(*(float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x2c)),(uint)&(*(uint *)(gen_frame + 0x45)),&(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),
               &(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)));
  F_00aee340(this,(uint)&(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x30)));
  F_00aef6e0(this,(uint)&(*(uint *)(gen_frame + 0x45)));
  F_00ae9de0(this);
  uVar3 = (*(uint *)(gen_frame + 0x45));
  uVar2 = (*(uint *)(gen_frame + 0x20));
  if (((GEN_ISNAN((*(float *)(gen_frame + 0x34))) == (GEN_ISNAN((*(float *)(gen_frame + 0x34))) || (*(float *)(gen_frame + 0x34)) == 0.0)) ||
      (GEN_ISNAN((*(float *)(gen_frame + 0x38))) == (GEN_ISNAN((*(float *)(gen_frame + 0x38))) || (*(float *)(gen_frame + 0x38)) == 0.0))) ||
     ((GEN_ISNAN((*(float *)(gen_frame + 0x2c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x2c))) || (*(float *)(gen_frame + 0x2c)) == 0.0) ||
      (((char)(*(uint *)(gen_frame + 0x3c)) != '\0' || ((char)(*(uint *)(gen_frame + 0x49)) != '\0')))))) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x20)) = uVar2 & 0xffffff00;
    F_00af3c30(this,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(uint)&(*(uint *)(gen_frame + 0x20)));
    F_00af6ad0(this,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x20)),uVar3,(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),
                 (*(uint *)(gen_frame + 0x49)),(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0x18)));
  }
  (*(char *)(gen_frame + 0x4f)) = '\0';
  (*(char *)(gen_frame + 0x4e)) = '\0';
  (*(undefined1 *)(gen_frame + 0x4d)) = 0;
  F_00afbcd0(this,(*(uint *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x1c)),uVar3,&(*(char *)(gen_frame + 0x4f)),&(*(char *)(gen_frame + 0x4e)),&(*(undefined1 *)(gen_frame + 0x4d)));
  if (((char)(*(uint *)(gen_frame + 0x28)) != '\0') && ((char)(*(uint *)(gen_frame + 0x45)) != '\0')) {
    F_00af2210(*(undefined4 *)((int)this + 0x10),*(float *)((int)this + 0xd0));
  }
  if (param_1 != (char *)0x0) {
    *param_1 = (*(char *)(gen_frame + 0x4f));
  }
  if (param_2 != (char *)0x0) {
    *param_2 = (*(char *)(gen_frame + 0x4e));
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (*(undefined1 *)(gen_frame + 0x4d));
  }
  *(undefined2 *)((int)this + 0x174) = 0;
  *(undefined1 *)((int)this + 0x176) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  if (((*(char *)(gen_frame + 0x4f)) == '\0') && ((*(char *)(gen_frame + 0x4e)) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00afd2a0 */
byte F_00afd2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xafd2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab2840((uint)(byte)param_1);
  if (uVar1 != 0) {
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(uVar1 + 0x20);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(uVar1 + 0x24);
    *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(uVar1 + 0x28);
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(uVar1 + 0x2c);
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(uVar1 + 0x30);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar1 + 0x50);
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(uVar1 + 0x54);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(uVar1 + 0x58);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(uVar1 + 0x18);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(uVar1 + 0x1c);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(uVar1 + 0x34);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(uVar1 + 0x38);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(uVar1 + 0x3c);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(uVar1 + 0x40);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(uVar1 + 0x44);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(uVar1 + 0x48);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(uVar1 + 0x4c);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(uVar1 + 0x14);
  }
  *(undefined1 *)((int)this + 0xb0) = 1;
  if ((byte)param_1 == 0) {
    F_00afca20(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f0))));
  }
  return uVar1 != 0;
}

/* ref: FUN_00afd360 */
uint F_00afd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  float10 fVar4;
  
  puVar2 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
  }
  (*(undefined4 *)(gen_frame + 0x40)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x48)) = puVar2[2];
  (*(undefined4 *)(gen_frame + 0x50)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x54)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x58)) = puVar2[2];
  if (param_2 == (float *)0x0) {
    (*(float *)(gen_frame + 0x6c)) = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)));
  }
  else {
    (*(float *)(gen_frame + 0x6c)) = *param_2;
    fVar4 = F_00aeb260(*param_2);
    (*(float *)(gen_frame + 0x6c)) = (float)fVar4;
  }
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)((int)this + 0x2c);
  F_00afcf00(this);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x29) = 1;
  *(undefined4 *)((int)this + 0xf0) = (*(undefined4 *)(gen_frame + 0x50));
  *(undefined4 *)((int)this + 0xf4) = (*(undefined4 *)(gen_frame + 0x54));
  *(undefined4 *)((int)this + 0xf8) = (*(undefined4 *)(gen_frame + 0x58));
  *(float *)((int)this + 0x100) = (*(float *)(gen_frame + 0x6c));
  if (param_3 != 0) {
    F_00afee90(((undefined1 *)(gen_frame + 0x8)),param_3);
    F_00ae5a80((undefined *)((int)this + 0x104),((undefined1 *)(gen_frame + 0x8)));
  }
  uVar3 = F_00afd000(this,0,0,0);
  if ((*(char *)((int)this + 0x14) != '\0') || (*(char *)((int)this + 0x15) != '\0')) {
    *(undefined4 *)(iVar1 + 0x60) = 4;
  }
  if (*(char *)((int)this + 0x14) != '\0') {
    *(undefined4 *)((int)this + 0x2c) = (*(undefined4 *)(gen_frame + 0x68));
    uVar3 = param_3;
    if ((param_3 != 0) && (*(char *)(param_3 + 0x2a) != '\0')) {
      *(undefined1 *)(iVar1 + 0x69) = 1;
      *(undefined1 *)(iVar1 + 0x6a) = *(undefined1 *)(param_3 + 0x2b);
    }
  }
  return uVar3;
}

/* ref: FUN_00afd4c0 */
uint F_00afd4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafd4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_0054ccb0(param_1,param_2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_00afbe90(this,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00afd620 */
byte F_00afd620(unsigned int gen_a0)
{
  GEN_ENTER(0xafd620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined * this_00;
  byte bVar5;
  float * pfVar6;
  undefined4 * puVar7;
  
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar4 != 0)) &&
     (bVar5 = F_00a9f620(iVar4), bVar5 != 0)) {
    if (REFG(char, 0x14c0a40) == '\0') {
      return 0;
    }
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x420))) == '\0') {
      return 0;
    }
  }
  iVar4 = *(int *)((int)this + 0x14);
  if ((iVar4 != 0) && (((iVar4 == 3 || (iVar4 == 4)) || (iVar4 == 2)))) {
    pfVar6 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    fVar1 = pfVar6[1];
    cVar3 = *(char *)((int)this + 0x5b);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar2 = *(float *)((int)this + 0x40);
    (*(float *)(gen_frame + 0x20)) = *pfVar6;
    (*(float *)(gen_frame + 0x28)) = pfVar6[2];
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar2 + (float10)fVar1);
    if (((cVar3 == '\0') && (*(int *)((int)this + 0x10) != 0)) &&
       ((iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar4 != 0 &&
        (bVar5 = F_00a9f620(iVar4), bVar5 != 0)))) {
      F_00aeff30(this,&(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x28)));
    }
    puVar7 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x8)) = puVar7[2];
    pfVar6 = (float *)F_00a5feb0(this_00);
    (*(float *)(gen_frame + 0x10)) = *pfVar6;
    (*(float *)(gen_frame + 0x14)) = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = pfVar6[2];
    F_00afcc90(this,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)));
    pfVar6 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))));
    (*(float *)(gen_frame + 0x10)) = *pfVar6;
    (*(float *)(gen_frame + 0x14)) = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = pfVar6[2];
    bVar5 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)));
    if (bVar5 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00afd7d0 */
uint F_00afd7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(float *)(gen_frame + 0xc)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if (param_3 != 0) {
    F_00ae5a80(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),param_3);
  }
  if ((*(int *)((int)this + 0x10) == 0) ||
     (bVar1 = F_00a9f620(*(int *)((int)this + 0x10)), bVar1 == 0)) {
    if ((((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0xc)) == REFG(float, 0x10ebbf0))) &&
        ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
         ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x18)) == REFG(float, 0x10ebbf0)))) ||
       (((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)) == '\0' &&
        (((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x14)) == REFG(float, 0x10ebbf0)) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x1c)) == REFG(float, 0x10ebbf0)))))))) {
      if (((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
           ((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0xc)) == REFG(float, 0x10ebbf0))) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x18)) == REFG(float, 0x10ebbf0)))) {
        (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1339b14);
        (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1339b1c);
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
      }
      if ((((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)) == '\0') &&
          ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
           ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x14)) == REFG(float, 0x10ebbf0)))) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x1c)) == REFG(float, 0x10ebbf0)))) {
        (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1339b20);
        (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ebc44);
        (*(undefined4 *)(gen_frame + 0x28)) = 4;
      }
    }
    uVar2 = F_00afc050((undefined *)((int)this + 0x1c4),param_1,param_2,4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  else {
    uVar2 = F_00afd360(&REFG(undefined, 0x14c0a50),param_1,param_2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  return uVar2;
}

/* ref: FUN_00afd950 */
uint F_00afd950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafd950u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if ((*(int *)&gen_args[2]) != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((*(int *)&gen_args[2]) + 4);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((*(int *)&gen_args[2]) + 8);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x10);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0xc);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x2c)) + 1)) = *(byte *)((*(int *)&gen_args[2]) + 0x14);
    (*(int *)(gen_frame + 0x2c)) = (uint)*(byte *)((*(int *)&gen_args[2]) + 0x14) << 8;
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x18);
  }
  uVar1 = F_00afd7d0((*(undefined * PTR32 *)&gen_args[0]),0,&(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00afd9f0 */
uint F_00afd9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafd9f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      if (!GEN_ISNAN((*(float *)&gen_args[3])) && !(0.0 <= (*(float *)&gen_args[3]))) {
        (*(float *)&gen_args[3]) = 0.0;
      }
      F_00afacb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))),0);
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      (*(undefined4 *)(gen_frame + 0x28)) = 3;
      (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
      (*(undefined1 *)(gen_frame + 0x33)) = (undefined1)(*(undefined4 *)&gen_args[4]);
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined2 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      (*(float *)(gen_frame + 0x18)) = (*(float *)&gen_args[3]);
      (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
      (*(undefined4 *)(gen_frame + 0x38)) = 2;
      (*(undefined1 *)(gen_frame + 0x32)) = 1;
      in_EAX = F_00afd7d0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return in_EAX;
}

