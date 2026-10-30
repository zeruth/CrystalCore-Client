#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf11 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e35810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe35810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e35820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe35820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: FUN_00e35830 */
GEN_LIB GEN_NOFRAME uint F_00e35830(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xe35830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 7 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 7 + uVar2))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + 1 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 1 + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 6 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 6 + uVar2))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + 2 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 2 + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 5 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 5 + uVar2))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + 3 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 3 + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 4 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 4 + uVar2))) = uVar1;
    uVar2 = uVar2 + 8;
  }
  return uVar2;
}

/* ref: FUN_00e35900 */
GEN_LIB GEN_FRAME uint F_00e35900(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e35930 */
GEN_LIB GEN_FRAME uint F_00e35930(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_00e35990 */
GEN_LIB GEN_FRAME uint F_00e35990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  uVar2 = uVar1 + 1;
  if ((uVar1 + 0x21 <= param_2) && (uVar2 = uVar1 + 0x421, param_2 < uVar1 + 0x421)) {
    uVar2 = uVar1 + 0x21;
  }
  return uVar2;
}

/* ref: FUN_00e359d0 */
GEN_LIB GEN_FRAME uint F_00e359d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe359d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e35830(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_00e35830(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x13)));
      *((undefined1 *)GEN_TOP((param_1 + 0x13))) = *((undefined1 *)GEN_TOP((param_1 + 0x10)));
      *((undefined1 *)GEN_TOP((param_1 + 0x10))) = uVar1;
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x12)));
      *((undefined1 *)GEN_TOP((param_1 + 0x12))) = *((undefined1 *)GEN_TOP((param_1 + 0x11)));
      *((undefined1 *)GEN_TOP((param_1 + 0x11))) = uVar1;
      uVar3 = uVar2 + 5;
      if ((uVar2 + 0x25 <= param_2) && (uVar3 = uVar2 + 0x425, param_2 < uVar2 + 0x425)) {
        uVar3 = uVar2 + 0x25;
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00e35a50 */
GEN_LIB GEN_FRAME uint F_00e35a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35a70 */
GEN_LIB GEN_FRAME uint F_00e35a70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35a90 */
GEN_LIB GEN_FRAME uint F_00e35a90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_00e35ac0 */
GEN_LIB GEN_FRAME uint F_00e35ac0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  int extraout_ECX;
  int in_ecx;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  in_ecx = param_1;
  do {
    if (param_2 <= uVar3) break;
    uVar2 = F_00e35830(8,in_ecx);
    extraout_ECX = ((int)(uint)(in_ecx));
    if (uVar2 + 0x20 < 0x29) {
      uVar2 = uVar2 + 0x20;
    }
    iVar4 = iVar4 + 1;
    uVar3 = uVar3 + uVar2;
    in_ecx = extraout_ECX + 0x28;
  } while (iVar4 < 0x14);
  if (uVar3 + 8 <= param_2) {
    uVar2 = F_00e35830(8,param_1 + 800);
    uVar3 = uVar3 + uVar2;
    if (uVar3 + 2 <= param_2) {
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x328)));
      *((undefined1 *)GEN_TOP((param_1 + 0x328))) = *((undefined1 *)GEN_TOP((param_1 + 0x329)));
      *((undefined1 *)GEN_TOP((param_1 + 0x329))) = uVar1;
      return uVar3 + 2;
    }
  }
  return uVar3;
}

/* ref: FUN_00e35b40 */
GEN_LIB GEN_FRAME uint F_00e35b40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  uVar2 = uVar1 + 1;
  if (uVar1 + 0x21 <= param_2) {
    uVar2 = uVar1 + 0x21;
  }
  return uVar2;
}

/* ref: FUN_00e35b70 */
GEN_LIB GEN_FRAME uint F_00e35b70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int in_ecx;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  in_ecx = param_1;
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = F_00e35830(8,in_ecx);
    extraout_ECX = ((int)(uint)(in_ecx));
    uVar2 = uVar1 + 1;
    if (uVar1 + 0x21 < 0x31) {
      uVar2 = uVar1 + 0x21;
    }
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + uVar2;
    in_ecx = extraout_ECX + 0x30;
  } while (iVar3 < 0x10);
  return uVar4;
}

/* ref: FUN_00e35bb0 */
GEN_LIB GEN_FRAME uint F_00e35bb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35bd0 */
GEN_LIB GEN_FRAME uint F_00e35bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_00e35830(8,((int)(uint)(param_1)) + 8);
  return uVar2 + 1 + uVar1;
}

/* ref: FUN_00e35c20 */
GEN_LIB GEN_FRAME uint F_00e35c20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_00e35830(8,((int)(uint)(param_1)) + 8);
  return uVar2 + 1 + uVar1;
}

/* ref: FUN_00e35c70 */
GEN_LIB GEN_FRAME uint F_00e35c70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe35c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  return param_3;
}

/* ref: FUN_00e35c80 */
GEN_LIB GEN_FRAME uint F_00e35c80(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e35d10 */
GEN_LIB GEN_FRAME uint F_00e35d10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e35d20 */
GEN_LIB GEN_FRAME uint F_00e35d20(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e35d50 */
GEN_LIB GEN_FRAME uint F_00e35d50(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 0x24) {
    return 4;
  }
  if (param_2 < 0x2c) {
    return 0x24;
  }
  uVar3 = F_00e35830(8,param_1 + 0x28);
  if (param_2 < uVar3 + 0x54) {
    return uVar3 + 0x24;
  }
  uVar4 = uVar3 + 0x58;
  if (param_2 < uVar4) {
    return uVar3 + 0x54;
  }
  uVar1 = param_1[99];
  uVar2 = param_1[0x62];
  param_1[99] = param_1[0x60];
  param_1[0x62] = param_1[0x61];
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar2;
  if (uVar3 + 0x60 <= param_2) {
    uVar3 = F_00e35830(8,param_1 + 0x68);
    uVar4 = uVar4 + uVar3;
    if (uVar4 + 8 <= param_2) {
      uVar3 = F_00e35830(8,param_1 + 0x70);
      return uVar3 + uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00e35e10 */
GEN_LIB GEN_FRAME uint F_00e35e10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 0x20) {
    return 0;
  }
  return (-(uint)(param_2 < 0x420) & 0xfffffc00) + 0x420;
}

/* ref: FUN_00e35e40 */
GEN_LIB GEN_FRAME uint F_00e35e40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (uVar1 + 0x400 <= param_2) {
    uVar1 = uVar1 + 0x400;
  }
  return uVar1;
}

/* ref: FUN_00e35e70 */
GEN_LIB GEN_FRAME uint F_00e35e70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35e90 */
GEN_LIB GEN_FRAME uint F_00e35e90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e35830(8,param_1);
  if (uVar2 + 2 <= param_2) {
    uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9))) = uVar1;
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}

/* ref: FUN_00e35ed0 */
GEN_LIB GEN_FRAME uint F_00e35ed0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e35f00 */
GEN_LIB GEN_FRAME uint F_00e35f00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  return uVar1;
}

/* ref: FUN_00e35f20 */
GEN_LIB GEN_FRAME uint F_00e35f20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_00e35830(8,((int)(uint)(param_1)) + 8);
  uVar2 = uVar1 + 1 + uVar2;
  uVar1 = uVar2 + 0x20;
  if (uVar1 <= param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00e35f70 */
GEN_LIB GEN_FRAME uint F_00e35f70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_00e35830(8,((int)(uint)(param_1)) + 8);
  return uVar2 + uVar1;
}

/* ref: FUN_00e35fc0 */
GEN_LIB GEN_FRAME uint F_00e35fc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe35fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return param_3;
}

/* ref: FUN_00e35fd0 */
GEN_LIB GEN_FRAME uint F_00e35fd0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe35fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e36060 */
GEN_LIB GEN_FRAME uint F_00e36060(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe36060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return param_2;
}

/* ref: RecvCallbackInterface_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e360a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe360a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x115754c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e360e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e360e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe360e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x115754c));
  return;
}

/* ref: FUN_00e360f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e360f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe360f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x1157558));
  return (uint)in_ecx;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36100(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x115754c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0xc))) + 0x24)));
  switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((uVar1 + 2))))) {
  case 1: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 2: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 100: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x65: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x66: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x67: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x68: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x69: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x6a: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 200: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0xc9: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
  }
  return uVar1;
}

/* ref: FUN_00e36490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe36490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_01050d30(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e364c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe364c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e364d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe364d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *((undefined2 *)GEN_TOP(((int)param_1 + 2))) = *(undefined2 *)(this + 0x30);
  *((undefined1 *)GEN_TOP(((int)param_1 + 1))) = 0;
  param_1[2] = 10;
  return (uint)param_1;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  F_00e35fc0((uint)*((ushort *)GEN_TOP((param_1 + 2))),param_1 + 0x10,param_2 - 0x10,0);
  uVar1 = F_00e36060(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e36560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe36560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: PacketDataBuilder_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e36570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: PacketBufferTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36580(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PacketDataBuilder_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e365b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe365b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e365f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e365f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe365f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  return (uint)in_ecx;
}

/* ref: FUN_00e36630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e36630(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe36630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  return (uint)in_ecx;
}

/* ref: FUN_00e36660 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e36660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe36660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  return;
}

/* ref: FUN_00e36680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e36680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe36680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11575ac));
  return (uint)in_ecx;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoUpPacketBuilder::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e366b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe366b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e366f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e366f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe366f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  F_01050b60((int)this + 0x10 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11575c0));
  F_01050d30(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36740(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e36790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe36790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_0042ccf0(this GEN_EDX_FWD,param_1);
    *((undefined2 *)GEN_TOP(((int)this + 0x54))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x54)));
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e367d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe367d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x118)));
  *((undefined4 *)GEN_TOP((uVar1 + 4))) = param_2;
  return uVar1;
}

/* ref: FUN_00e367f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e367f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe367f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
  uVar2 = F_0042a990(param_1 GEN_EDX_FWD);
  F_00ba86c0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,uVar2,uVar1);
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf4 */
GEN_LIB GEN_NOFRAME byte F_00e36850(void)
{
  GEN_ENTER(0xe36850u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf3 */
GEN_LIB GEN_NOFRAME byte F_00e36860(void)
{
  GEN_ENTER(0xe36860u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::WriteEncryptionInit */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e36880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe36880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  __time64_t _Var2;
  
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (1) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (2) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (3) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (4) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (5) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (6) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (7) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (8) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (9) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (10) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xb) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xc) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xd) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xe) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xf) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x10) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x11) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x12) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x13) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x14) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x15) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x16) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x17) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x18) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x19) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1a) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1b) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1c) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1d) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1e) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1f) * 1))))) = '\0';
  uVar1 = (*(uint *)(((char *)(this) + 8)));
  *(undefined8 *)((char *)(((char *)(this) + 16))) = (*(undefined8 *)REFP(0x11575d4));
  *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 8))) = (*(undefined8 *)REFP(0x11575dc));
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x10) * 1))))) = ((char *)REFP(0x11575d4))[0x10];
  if (uVar1 == 0) {
    _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    (*(uint *)(((char *)(this) + 8))) = (uint)_Var2;
  }
  F_00c48350(((undefined8 *)GEN_TOP((param_1 + 0x34))),0,0x40);
  *((undefined8 *)GEN_TOP((param_1 + 0x34))) = *(undefined8 *)((char *)(((char *)(this) + 16)));
  *((undefined8 *)GEN_TOP((param_1 + 0x3c))) = *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 8)));
  *((undefined8 *)GEN_TOP((param_1 + 0x44))) = *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 0x10)));
  *((undefined8 *)GEN_TOP((param_1 + 0x4c))) = *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 0x18)));
  *((uint *)GEN_TOP((param_1 + 0x74))) = (*(uint *)(((char *)(this) + 8)));
  return 1;
}

/* ref: FUN_00e36920 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e36920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) != ((undefined *)GEN_TOP(0x0))) {
    F_00407e80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,param_1,param_1,param_2 & 0xffffffe0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00e36950 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e36950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) != ((undefined *)GEN_TOP(0x0))) {
    F_00407f40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,param_1,param_1,param_2 & 0xffffffe0);
    return 1;
  }
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e36980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe36980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf3 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e36990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf5 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e369a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe369a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::Encrypt */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e369b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe369b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  if ((*(undefined * PTR32 *)(((char *)(this) + 48))) != ((undefined *)GEN_TOP(0x0))) {
    F_00407e80((*(undefined * PTR32 *)(((char *)(this) + 48))) GEN_EDX_FWD,param_2,param_2,param_3 & 0xffffffe0);
  }
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::Decrypt */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e369e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe369e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  if ((*(undefined * PTR32 *)(((char *)(this) + 48))) != ((undefined *)GEN_TOP(0x0))) {
    F_00407f40((*(undefined * PTR32 *)(((char *)(this) + 48))) GEN_EDX_FWD,param_2,param_2,param_3 & 0xffffffe0);
  }
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf8 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e36a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe36a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: CryptEngineInterface_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e36a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: FUN_00e36aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: FUN_00e36ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36ac0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e36b10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e36b10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e36b30 */
GEN_LIB GEN_FRAME uint F_00e36b30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe36b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00e36b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe36b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e36bb0 */
GEN_LIB GEN_FRAME uint F_00e36bb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe36bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e36bd0 */
GEN_LIB GEN_FRAME uint F_00e36bd0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe36bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e36c00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e36c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe36c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e36c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00e36c80 */
GEN_LIB GEN_FRAME uint F_00e36c80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe36c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e36ca0 */
GEN_LIB GEN_FRAME uint F_00e36ca0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe36ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::InflateFrame */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe36cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1100c, 4, 4);
  uint uVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x11004)) = 0xe36cfd;
  (*(uint *)(gen_frame + 0x11004)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (*((char *)GEN_TOP((uVar1 + 0x19))) == '\x01') {
    if ((param_1 == ((undefined1 *)GEN_TOP(0x0))) || (param_2 == 0)) {
      puVar2 = ((undefined1 *)(gen_frame + 0x10004));
      (*(int *)(gen_frame + 0x10000)) = 0x1000;
    }
    else {
      (*(int *)(gen_frame + 0x10000)) = param_2;
      puVar2 = param_1;
    }
    F_01050f50(puVar2,&(*(int *)(gen_frame + 0x10000)),*((int *)GEN_TOP(((int)this + 8))) + 0x20,
                 *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) - 0x20);
    F_00c46aa0(*((int *)GEN_TOP(((int)this + 8))) + 0x20,puVar2,(*(int *)(gen_frame + 0x10000)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x19))) = 0;
    uVar1 = (*(int *)(gen_frame + 0x10000)) + 0x20;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e36da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00e36db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00e36dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e36dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe36dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00e36df0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e36df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe36df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x48, 8);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x58U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0xc)));
    iVar5 = *((int *)GEN_TOP(((int)this + 8)));
    (*(undefined2 *)(gen_frame + 0xc)) = 2;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = param_1;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    puVar8 = ((undefined4 *)GEN_TOP((iVar4 + iVar5)));
    for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x38;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e36eb0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e36eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe36eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x2a8, 8);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x294)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x298);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x2b0U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    (*(undefined2 *)(gen_frame + 0xc)) = 10;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x290;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if ((param_1 != ((int *)GEN_TOP(0x0))) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD,param_2,((undefined4 *)(gen_frame + 0x0))), (char)uVar4 != '\0')) {
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
      for (iVar5 = 0xa4; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x290;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
      *piVar1 = *piVar1 + 0x290;
      psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
      *psVar2 = *psVar2 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e36fc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e36fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe36fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e36c00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e36fe0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e36fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe36fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e37000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37000(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe37000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e37020 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe37020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e37080 */
GEN_LIB GEN_FRAME uint F_00e37080(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe37080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e37090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe37090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e370b0 */
GEN_LIB GEN_FRAME uint F_00e370b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe370b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e370c0 */
GEN_LIB GEN_FRAME uint F_00e370c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe370c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e370d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e370d0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe370d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00408da0(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00e37100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe37100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00409a70(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e37120 */
GEN_LIB GEN_FRAME uint F_00e37120(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe37120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e37130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe37130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe37150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_SUSPECT(0xe37150u, "uStack_1a");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) &&
     (in_EAX = *((uint *)GEN_TOP(((int)this + 0xc))), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_2;
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    puVar3 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x700000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x18;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e37240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe37240u, gen_a0, gen_a1, 0u, 0u);
  GEN_SUSPECT(0xe37240u, "uStack_1a");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) &&
     (in_EAX = *((uint *)GEN_TOP(((int)this + 0xc))), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    puVar3 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x800000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x18;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e37320 */
GEN_LIB GEN_FRAME uint F_00e37320(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe37320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e37330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe37330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe37350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042cc20(this GEN_EDX_FWD,((char *)REFP(0x1157514)),REFG(undefined4, 0x108cc50));
  *((undefined2 *)GEN_TOP(((int)this + 0x54))) = 0x71d5;
  return (uint)this;
}

/* ref: FUN_00e37370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe37370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_0042b630(this GEN_EDX_FWD);
  if (this != param_1) {
    F_0042ccf0(this GEN_EDX_ARG,param_1);
    *((undefined2 *)GEN_TOP(((int)this + 0x54))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x54)));
  }
  return (uint)this;
}

/* ref: FUN_00e373a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e373a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe373a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x118)));
  uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x114)));
  uVar3 = F_0042a990((int)this + 0xc0 GEN_EDX_FWD);
  F_00ba86c0(((undefined *)GEN_TOP((iVar1 + 0x68))) GEN_EDX_ARG,uVar3,uVar2);
  return 1;
}

/* ref: FUN_00e373d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e373d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe373d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10e0);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10a4)));
  if (iVar3 + param_3 < 0x1001) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,param_3);
    *((int *)GEN_TOP(((int)this + 0x10a4))) = *((int *)GEN_TOP(((int)this + 0x10a4))) + param_3;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  iVar4 = 0x1000 - iVar3;
  if (0 < iVar4) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,iVar4);
    *((int *)GEN_TOP(((int)this + 0x10a4))) = *((int *)GEN_TOP(((int)this + 0x10a4))) + iVar4;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1094))) == 0) {
    uVar1 = param_3;
    if (param_3 < 0x1001) {
      uVar1 = 0x1000;
    }
    *((uint *)GEN_TOP(((int)this + 0x1098))) = uVar1;
    pvVar2 = F_00c51787(uVar1);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) = pvVar2;
    F_00c46aa0(pvVar2,iVar4 + param_2,param_3 - iVar4);
    *((uint *)GEN_TOP(((int)this + 0x109c))) = param_3 - iVar4;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1098))) < *((int *)GEN_TOP(((int)this + 0x109c))) + param_3) {
    iVar3 = *((uint *)GEN_TOP(((int)this + 0x1098))) + param_3;
    pvVar2 = F_00c52171(*((int *)GEN_TOP(((int)this + 0x1094))),iVar3);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) = pvVar2;
    *((int *)GEN_TOP(((int)this + 0x1098))) = iVar3;
  }
  F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x1094))) + *((int *)GEN_TOP(((int)this + 0x109c))),iVar4 + param_2,
             param_3 - iVar4);
  *((int *)GEN_TOP(((int)this + 0x109c))) = *((int *)GEN_TOP(((int)this + 0x109c))) + (param_3 - iVar4);
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe37520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x14);
  uVar2 = 0;
  if (uVar1 != 0) {
    if ((*(int *)(this + 0x90) == 0) || (uVar2 = *(uint *)(this + 0x18), uVar1 <= uVar2)) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      return uVar1;
    }
    uVar1 = F_00ba7610(this + 0x68 GEN_EDX_FWD,*(int *)(this + 0x10) + uVar2,uVar1 - uVar2);
    if ((int)uVar1 < 1) {
      uVar1 = F_00ba74d0(this + 0x68 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x90) = 0;
      return uVar1;
    }
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
    uVar2 = *(uint *)(this + 0x18);
    if (*(uint *)(this + 0x14) <= uVar2) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    if (this[0x10b8] != (undefined1)0x0) {
      uVar2 = F_00427ed0(this + 0x10c0 GEN_EDX_ARG);
      this[0x10b8] = (undefined1)0x0;
    }
  }
  return uVar2;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e375b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe375b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x10e0);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x90) != 0) {
    iVar1 = *(int *)(this + 0x10a0);
    if (iVar1 < *(int *)(this + 0x10a4)) {
      uVar2 = *(uint *)(this + 0x30);
      if (uVar2 < 0x20) {
        uVar4 = *(int *)(this + 0x10a4) - iVar1;
        uVar5 = 0x20 - uVar2;
        if (uVar4 < 0x20 - uVar2) {
          uVar5 = uVar4;
        }
        F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
        *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
        *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
      }
      iVar1 = *(int *)(this + 0x10a0);
      if ((iVar1 < *(int *)(this + 0x10a4)) && (uVar2 = *(uint *)(this + 0x30), 0x1f < uVar2)) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x2c) + 0x10)));
        if (uVar2 < uVar5) {
          uVar4 = *(int *)(this + 0x10a4) - iVar1;
          uVar5 = uVar5 - uVar2;
          if (uVar4 < uVar5) {
            uVar5 = uVar4;
          }
          F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
          *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
          *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
        }
      }
      if (*(int *)(this + 0x10a4) <= *(int *)(this + 0x10a0)) {
        iVar1 = *(int *)(this + 0x1094);
        *(undefined4 *)(this + 0x10a4) = 0;
        *(undefined4 *)(this + 0x10a0) = 0;
        if ((iVar1 != 0) && (uVar2 = *(uint *)(this + 0x109c), 0 < (int)uVar2)) {
          if (uVar2 < 0x1001) {
            F_00c46aa0(this + 0x94,iVar1,uVar2);
            uVar3 = *(undefined4 *)(this + 0x109c);
            *(undefined4 *)(this + 0x109c) = 0;
            *(undefined4 *)(this + 0x10a4) = uVar3;
            return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
          }
          F_00c46aa0(this + 0x94,iVar1,0x1000);
          *(undefined4 *)(this + 0x10a4) = 0x1000;
          F_00c46e20(*(int *)(this + 0x1094),*(int *)(this + 0x1094) + 0x1000,
                     *(int *)(this + 0x109c) - 0x1000);
          *(int *)(this + 0x109c) = *(int *)(this + 0x109c) - 0x1000;
        }
      }
    }
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_00e37740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe37740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x30))));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  return uVar1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe37770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  F_00406ad0(param_1[0xc]);
  param_1[0xc] = 0;
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::LobbyCryptEngine */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e377b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe377b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  (*(void * PTR32 *)((char *)(this))) = (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  (*(undefined * PTR32 *)(((char *)(this) + 48))) = ((undefined *)GEN_TOP(0x0));
  F_00c48350(&(*(uint *)(((char *)(this) + 4))),0,0x2c);
  (*(uint *)(((char *)(this) + 4))) = 0x12345678;
  (*(uint *)(((char *)(this) + 12))) = 1000;
  return (uint)this;
}

/* ref: FUN_00e377f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e377f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe377f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00408da0(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00e37800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe37800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0xc))));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar2;
}

/* ref: FUN_00e37870 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e37870(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe37870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e378c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e378c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe378c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00e37920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe37920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e36c00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e37930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_size32 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe37930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  *(gen_size32 *)this = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00e37970 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e37970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe37970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x50, 0);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x58U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_2;
    (*(undefined2 *)(gen_frame + 0xc)) = 1;
    (*(ulonglong *)(gen_frame + 0x10)) = 0;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined8 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x20)) = 0;
    (*(undefined8 *)(gen_frame + 0x28)) = 0;
    (*(undefined8 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = param_1;
    (*(ulonglong *)(gen_frame + 0x10)) = (ulonglong)param_1;
    if (param_3 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_3;
      if (iVar5 != param_3[1]) {
        F_00c46aa0((int)&(*(ulonglong *)(gen_frame + 0x10)) + 4,iVar5,param_3[1] - iVar5);
      }
    }
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x38;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}

/* ref: FUN_00e37aa0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e37aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe37aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x290, 0);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x298U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_3;
    (*(undefined2 *)(gen_frame + 0xc)) = 9;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x278;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x10)),0,0x268);
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if (param_4 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_4;
      if (iVar5 != param_4[1]) {
        F_00c46aa0(((undefined1 *)(gen_frame + 0x14)),iVar5,param_4[1] - iVar5);
      }
    }
    if ((param_1 != ((int *)GEN_TOP(0x0))) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0))), (char)uVar4 != '\0')) {
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
      for (iVar5 = 0x9e; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x278;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
      *piVar1 = *piVar1 + 0x278;
      psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
      *psVar2 = *psVar2 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: Global::ReadSegment */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(int * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe37c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a5;)
  uint * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  *(undefined2 *)(param_2 + 5) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0xc))) < 0x20) ||
     (*((uint *)GEN_TOP(((int)this + 0xc))) < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))))) {
    return 0;
  }
  F_00e36cf0(this GEN_EDX_FWD,param_3,param_4);
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((iVar2 + 0x10)));
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x20;
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar5 + 0x10U <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
    puVar1 = param_2 + 2;
    *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
    *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
    uVar4 = *puVar1;
    iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
    if (uVar4 + iVar2 <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      switch((unsigned int)(uintptr_t)((short)param_2[5])) {
      case 1: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 2: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 3: ;
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))(param_1 GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0x8c8,0);
        if (uVar4 == 0) {
          return 0;
        }
        *((uint *)GEN_TOP((uVar4 + 0x14))) = param_2[3];
        *((uint *)GEN_TOP((uVar4 + 0x18))) = param_2[4];
        F_00c46aa0(*((undefined4 *)GEN_TOP((uVar4 + 0x24))),
                   *((int *)GEN_TOP(((int)this + 8))) + 0x10 + *((int *)GEN_TOP(((int)this + 0x10))),*puVar1 - 0x10);
        *((uint *)GEN_TOP((uVar4 + 0x20))) = *puVar1 - 0x10;
        if (param_5 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 0x1c))))
                    (param_5 GEN_EDX_ARG,param_2[3],*((undefined4 *)GEN_TOP((uVar4 + 0x24))),*puVar1 - 0x10);
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *param_2 = uVar4;
        if (*((int *)GEN_TOP(((int)this + 0x10))) == *((int *)GEN_TOP(((int)this + 0xc)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
          *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        }
        return uVar4;
      default: ;
        *((uint *)GEN_TOP(((int)this + 0x10))) = uVar4 + iVar2;
        break;
      case 7: ;
        if (uVar4 == 0x18) {
          iVar5 = *((int *)GEN_TOP(((int)this + 8)));
          *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
          *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
          *(undefined8 *)(param_2 + 6) = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar2)));
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        if (*((int *)GEN_TOP(((int)this + 0x10))) != *((int *)GEN_TOP(((int)this + 0xc)))) {
          return 0;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 8: ;
        if (uVar4 == 0x18) {
          iVar5 = *((int *)GEN_TOP(((int)this + 8)));
          *(undefined8 *)puVar1 = *((undefined8 *)GEN_TOP((iVar5 + iVar2)));
          *(undefined8 *)(param_2 + 4) = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar2)));
          *(undefined8 *)(param_2 + 6) = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar2)));
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        if (*((int *)GEN_TOP(((int)this + 0x10))) != *((int *)GEN_TOP(((int)this + 0xc)))) {
          return 0;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 9: ;
        if (uVar4 == 0x278) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0x9e; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      case 10: ;
        if (uVar4 == 0x290) {
          puVar6 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xa4; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + *puVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
        return 0;
      }
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return 0;
}

/* ref: FUN_00e37ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe37ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37f10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe37f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e37f20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e37f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe37f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e37f60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e37f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe37f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e37020(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e37f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe37f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e37f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe37f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  __time64_t _Var6;
  
  piVar2 = ((int *)GEN_TOP(param_1[1]));
  bVar3 = false;
  puVar4 = param_1;
  if (piVar2[5] == 0) {
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    LOCK();
    iVar1 = piVar2[0x12];
    piVar2[0x12] = 0;
    UNLOCK();
    if (iVar1 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(((int)_Var6 - piVar2[0x10])));
      if (puVar4 <= ((undefined4 *)GEN_TOP(((uint)piVar2[0x11] >> 1)))) goto LAB_00e37ff0;
      puVar4 = ((undefined4 *)GEN_TOP(F_00e37150(piVar2 + 2 GEN_EDX_ARG,*param_1,0)));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(F_00e37240(piVar2 + 2 GEN_EDX_ARG,*param_1)));
    }
    bVar3 = true;
    piVar2[0x10] = (int)_Var6;
  }
LAB_00e37ff0: ;
  if (piVar2[5] != 0) {
    if ((piVar2[6] == 0) && (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG), (char)uVar5 == '\0')) {
      return uVar5;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,*(undefined4 *)this)));
    if (bVar3) {
      piVar2[5] = 0;
      piVar2[6] = 0;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00e38030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe38030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e38050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe38050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e380a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e380a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe380a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e380c0 */
GEN_LIB GEN_FRAME uint F_00e380c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe380c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((uVar1 + 0x90))) = uVar1 + 0x68;
  return uVar1;
}

/* ref: FUN_00e380e0 */
GEN_LIB GEN_FRAME unsigned int F_00e380e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe380e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00e373d0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x24))) GEN_EDX_ARG,param_1,param_2,param_3);
  return;
}

/* ref: FUN_00e38100 */
GEN_LIB GEN_FRAME uint F_00e38100(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe38100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + 0x58))) + 0xbc))) = 4;
  return param_1;
}

/* ref: FUN_00e38120 */
GEN_LIB GEN_FRAME byte F_00e38120(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe38120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + 0x90))) = 0;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::ReadEncryptionReply */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e38140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe38140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x310, 0);
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x2fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x300);
  F_00406ad0((*(undefined * PTR32 *)(((char *)(this) + 48))));
  (*(undefined * PTR32 *)(((char *)(this) + 48))) = ((undefined *)GEN_TOP(0x0));
  F_00408da0(((undefined1 *)(gen_frame + 0x290)) GEN_EDX_ARG);
  F_0040b1f0(((undefined1 *)(gen_frame + 0x290)) GEN_EDX_ARG,&(*(uint *)(((char *)(this) + 4))),0x2c);
  F_0040b2a0(((undefined1 *)(gen_frame + 0x290)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ec)));
  this_00 = ((undefined *)GEN_TOP(F_004069f0(0x1048)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    F_00409a70(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ec)),0x10);
  }
  (*(undefined * PTR32 *)(((char *)(this) + 48))) = this_00;
  puVar2 = param_2;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar1 = 0xa4; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00407f40(this_00 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x10)),0x280);
    *(undefined2 *)(param_3 + 3) = 2;
    param_3[1] = ((undefined4 *)(gen_frame + 0x0))[1];
    *param_3 = 0x38;
    param_3[2] = ((undefined4 *)(gen_frame + 0x0))[2];
    *(undefined8 *)(param_3 + 5) = (*(undefined8 *)(gen_frame + 0x1c));
    *(undefined8 *)(param_3 + 7) = (*(undefined8 *)(gen_frame + 0x24));
    *(undefined8 *)(param_3 + 9) = (*(undefined8 *)(gen_frame + 0x2c));
    param_3[4] = ((undefined4 *)(gen_frame + 0x10))[0];
    *(undefined8 *)(param_3 + 0xb) = (*(undefined8 *)(gen_frame + 0x34));
  }
  return this_00 != ((undefined *)GEN_TOP(0x0));
}

/* ref: FUN_00e38290 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e38290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe38290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  byte bVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x80))) != 0) {
    bVar1 = F_00e37aa0(param_2 + 2 GEN_EDX_FWD,*((int *)GEN_TOP((param_1 + 0x80))),param_3,param_5,param_6);
    if (bVar1 != 0) goto LAB_00e382d8;
  }
  bVar1 = F_00e37970(param_2 + 2 GEN_EDX_ARG,param_3,param_5,param_6);
LAB_00e382d8: ;
  if ((param_4 != '\0') && (param_2[5] != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG,param_1);
  }
  return bVar1;
}

/* ref: FUN_00e38300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e38300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe38300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  return extraout_EAX;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe38320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = 0;
  }
  return 0;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf4 */
GEN_LIB GEN_NOFRAME byte F_00e38340(void)
{
  GEN_ENTER(0xe38340u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00e38350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_size32 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe38350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  *((gen_size32 *)GEN_TOP(((int)this + 8))) = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((gen_size32 *)GEN_TOP(((int)this + 0x24))) = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3c))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x48))))), (long)(0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x2d;
  return (uint)this;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e383d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe383d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  F_00c4c68f(((undefined *)GEN_TOP(param_1[10])));
  F_00c4c68f(((undefined *)GEN_TOP(param_1[3])));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e38410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe38410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e38470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe38470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e36c00(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e38490 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e38490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe38490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)((((uint *)GEN_TOP((param_2 + 0x48))))), (long)(1));
  return uVar1;
}

/* ref: FUN_00e384d0 */
GEN_LIB GEN_FRAME uint F_00e384d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe384d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e384e0 */
GEN_LIB GEN_FRAME uint F_00e384e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe384e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  if ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2])) {
    do {
      F_00e37f90(&(*(undefined4 *)&gen_args[3]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
      if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          (*(int * PTR32 *)&gen_args[1]) = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            (*(int * PTR32 *)&gen_args[1]) = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
          piVar2 = (*(int * PTR32 *)&gen_args[1]);
          while (((*(int * PTR32 *)&gen_args[1]) = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]))))) {
            cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
            piVar2 = (*(int * PTR32 *)&gen_args[1]);
          }
        }
      }
    } while ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e38570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38570(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe38570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e3876d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e3876d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e387a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e387a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe387a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e37020(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e387b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e387b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe387b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e387d0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e387d0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe387d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e387f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e387f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe387f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __time64_t _Var1;
  ulonglong uVar2;
  
  F_00e38350(this GEN_EDX_FWD,0x1000);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157658));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_1;
  F_00ba7100((int)this + 0x5c GEN_EDX_ARG);
  F_00ba85b0((int)this + 0x68 GEN_EDX_ARG,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[1])REFP(0x11574d8));
  *((undefined4 *)GEN_TOP(((int)this + 0x1094))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1098))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x109c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x10b8))) = 1;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x10c0))) GEN_EDX_ARG);
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10a4))) = 0;
  F_00ba8040();
  gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 0x8c))),(LONG)this);
  F_00baba80(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
  F_00ba78e0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe380c0)));
  F_00ba7890(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe380e0)));
  F_00ba7b00(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe38120)));
  F_00ba7a40(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe38100)),0x78);
  F_00ba7aa0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe38100)),0x2d);
  F_00ba9ae0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,(int)this + 0x5c);
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x10c0))) = (int)_Var1;
  uVar2 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x10c8))) = uVar2;
  uVar2 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x10d0))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x14;
  return (uint)this;
}

/* ref: FUN_00e38930 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e38930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe38930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157658));
  F_00ba74d0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_FWD);
  F_00baa650(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))));
    *((undefined4 *)GEN_TOP(((int)this + 0x1094))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x58))) + 0x118))) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  F_00ba85e0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
  F_00bac250(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  return extraout_EAX;
}

/* ref: FUN_00e389c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e389c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe389c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e389e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e389e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe389e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e38a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe38a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e36c00(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e38b5a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e36bd0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e36bb0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e38b5a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e378c0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e36b50(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e378c0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e38c18: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e36b50(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e38c18;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e378c0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e36b50(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e38c90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e38c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe38c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e38c90(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e38cd0 */
GEN_LIB GEN_FRAME uint F_00e38cd0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe38cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_00e384e0(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_00e38d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe38d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00e38570(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e37020(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e38570(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e38de0 */
GEN_LIB GEN_FRAME unsigned int F_00e38de0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe38de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e38e00 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e38e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe38e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  __time64_t _Var5;
  ulonglong uVar6;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x118)));
  uVar4 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  _Var5 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *((int *)GEN_TOP(((int)this + 0x120))) = (int)_Var5;
  uVar6 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x128))) = uVar6;
  uVar6 = F_00427e30();
  *((ulonglong *)GEN_TOP(((int)this + 0x130))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x10f8,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00e387f0(this_00 GEN_EDX_ARG,(int)this + 0xc0,this);
  }
  *((uint *)GEN_TOP(((int)this + 0x118))) = uVar4;
  uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x114)));
  uVar3 = F_0042a990((int)this + 0xc0 GEN_EDX_ARG);
  F_00ba86c0(((undefined *)GEN_TOP((uVar4 + 0x68))) GEN_EDX_ARG,uVar3,uVar2);
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38ea0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe38ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e38930(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e38ed0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e38ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe38ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  F_00e384e0(&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),this)
  ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68)));
}

/* ref: FUN_00e38f20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e38f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe38f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e38c90(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00e38f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe38f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e38fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e38fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe38fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00e38f20(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00e38a40(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e39070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe39070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e38d00(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e390f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e390f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe390f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e38fd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e39110 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e39110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe39110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = param_1;
      puVar1[4] = param_2;
    }
    F_00e38d00(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68)));
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e39190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e38fd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e391c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e391c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe391c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  __time64_t _Var6;
  
  iVar2 = (int)(*(LPCRITICAL_SECTION *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(LPCRITICAL_SECTION *)&gen_args[1]) + 4))) != 0) {
    return;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]));
  if (uVar4 != 0) {
    *((uint *)GEN_TOP((iVar2 + 4))) = uVar4;
    if ((*((int *)GEN_TOP(((int)this + 0x80))) != 0) && ((*(int *)&gen_args[3]) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,uVar4,(*(int *)&gen_args[3]));
    }
    (*(LPCRITICAL_SECTION *)&gen_args[1]) = (LPCRITICAL_SECTION)((int)this + 0x68);
    gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[1]));
    piVar5 = ((int *)GEN_TOP(F_00c32fe0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[0]))));
    if (*piVar5 != *((int *)GEN_TOP(((int)this + 0x10)))) {
      F_00e38a40(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),*piVar5);
      uVar1 = (*(undefined4 *)&gen_args[0]);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
      if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,uVar1);
      }
    }
    F_00e39110(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))),iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    }
    if ((*((int *)GEN_TOP(((int)this + 0x80))) == 0) ||
       (bVar3 = F_00e36eb0(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x80))),
                             *((undefined4 *)GEN_TOP((iVar2 + 4))),(*(int *)&gen_args[3])), bVar3 == 0)) {
      F_00e36df0(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    }
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((int *)GEN_TOP((iVar2 + 0x40))) = (int)_Var6;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[1]));
    return;
  }
  return;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::AcceptConnectionId */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e392e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe392e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  iVar3 = (*(int *)&gen_args[1]);
  if ((*((int *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) == 0) && (*((int *)GEN_TOP(((*(int *)&gen_args[2]) + 0x10))) != 0)) {
    if ((*(int *)&gen_args[0]) != 0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
      piVar4 = ((int *)GEN_TOP(F_00c32fe0(this + 0xc GEN_EDX_ARG,&(*(int *)&gen_args[1]),&(*(int *)&gen_args[0]))));
      if (*piVar4 != *(int *)(this + 0x10)) {
        F_00e38a40(this + 0xc GEN_EDX_ARG,&(*(int *)&gen_args[1]),*piVar4);
        iVar2 = (*(int *)&gen_args[0]);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,(*(int *)&gen_args[0]));
        if (*(int *)(this + 0x80) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x20))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,iVar2);
        }
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
    }
    uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[2]) + 0x10)));
    *((undefined4 *)GEN_TOP((iVar3 + 4))) = uVar1;
    F_00e39110(this GEN_EDX_ARG,uVar1,iVar3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 4))));
    if (*(int *)(this + 8) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 4))));
    }
  }
  return;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::DispatchSegment */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e393a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe393a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x2fc, 4);
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2ec);
  (*(uint *)(gen_frame + 0xc)) = param_1;
  ((undefined4 *)(gen_frame + 0x14))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if (param_3[0xd] == 0) {
    (*(bool *)(gen_frame + 0x13)) = param_3[0xc] == 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 8))))(param_3 GEN_EDX_FWD,this);
    if (((*(bool *)(gen_frame + 0x13)) != false) && (param_3[0xc] != 0)) {
      uVar1 = *((undefined4 *)GEN_TOP((param_3[0xb] + 0xc)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_3[0xb] + 8)));
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      F_00e29e50(this + 0x20 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x14))))(param_3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = *((undefined4 *)GEN_TOP((param_3[0xb] + 0xc)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_3[0xb] + 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  uVar3 = F_00e37c10(param_3 + 9 GEN_EDX_ARG,*(undefined4 *)(this + 8),((undefined4 *)(gen_frame + 0x14)),uVar3,(*(undefined4 *)(gen_frame + 0x0)),
                              *(undefined4 *)(this + 0x80));
  if (uVar3 == 0) {
    switch((unsigned int)(uintptr_t)((*(undefined2 *)(gen_frame + 0x28)))) {
    case 1: ;
      F_00e391c0(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x1c)),0);
      bVar2 = 1;
      break;
    case 2: ;
      F_00e392e0(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x1c)));
      bVar2 = 1;
      break;
    default: ;
      bVar2 = 0;
      break;
    case 7: ;
      LOCK();
      param_3[0x12] = 1;
      UNLOCK();
      bVar2 = 1;
      break;
    case 8: ;
      goto switchD_00e394c6_caseD_8;
    case 9: ;
      (*(uint *)(gen_frame + 0xc)) = 0;
      if (*(int *)(this + 0x80) == 0) {
LAB_00e39522: ;
        F_00e29270(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)));
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 8))))
                          (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x2ac)));
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        if (uVar3 == 0) goto LAB_00e39522;
      }
      F_00e391c0(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2ac)),(*(uint *)(gen_frame + 0xc)));
      bVar2 = 1;
      break;
    case 10: ;
      if ((*(int *)(this + 0x80) == 0) ||
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x10))))
                            (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x2ac))),
         (char)uVar3 == '\0')) {
        F_00e29330(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)));
      }
      F_00e392e0(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2ac)));
      bVar2 = 1;
    }
  }
  else {
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0xc))) = uVar3;
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0x10))) = (*(undefined4 *)(gen_frame + 0x4));
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0x14))) = (*(undefined4 *)(gen_frame + 0x8));
switchD_00e394c6_caseD_8: ;
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: FUN_00e39600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e38fd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e39630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf1 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e39690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  if ((*(int *)(this + 0x118) == 0) || (*((int *)GEN_TOP((*(int *)(this + 0x118) + 4))) != 0))
  goto LAB_00e3975d;
  if (*(int *)(this + 0x138) != 0) {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    if ((uint)((int)_Var4 - *(int *)(this + 0x120)) < *(uint *)(this + 0x138)) goto LAB_00e3975d;
  }
  piVar1 = *(int * PTR32 *)(this + 0x118);
  if (*(int *)(this + 0x80) == 0) {
LAB_00e396fd: ;
    bVar3 = F_00e37970(piVar1 + 2 GEN_EDX_ARG,0,3,0);
  }
  else {
    bVar3 = F_00e37aa0(piVar1 + 2 GEN_EDX_ARG,*(int *)(this + 0x80),0,3,0);
    if (bVar3 == 0) goto LAB_00e396fd;
  }
  if (piVar1[5] != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,this);
  }
  if (bVar3 != 0) {
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 0x120) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)(this + 0x128) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)(this + 0x130) = uVar5;
    *(undefined4 *)(this + 0x138) = 2;
  }
LAB_00e3975d: ;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  F_00e384e0(((undefined1 *)(gen_frame + 0x18)),**(undefined4 * PTR32 *)(this + 0x10),*(undefined4 * PTR32 *)(this + 0x10),this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  if ((*(int *)(this + 0x118) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x118) + 4))) == 0)) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar2 = *(undefined4 *)(this + 0x118);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    bVar3 = F_00e393a0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,uVar2);
    if ((bVar3 != 0) && ((*(int *)(gen_frame + 0xc)) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  if ((*(int *)(this + 0x118) != 0) && (*(int *)(this + 0xbc) != 4)) {
    F_00bad720(((undefined *)GEN_TOP((*(int *)(this + 0x118) + 0x5c))) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00e39820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  return uVar1;
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe39870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe39880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00e39890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe39890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) = *((int *)GEN_TOP(((int)this + 0x10)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((int *)GEN_TOP(((int)this + 0x10)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x15))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
    gen_imp_InitializeCriticalSection((int)this + 0x50);
    gen_imp_InitializeCriticalSection((int)this + 0x68);
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe39940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection(param_1 + 0x1a);
  gen_imp_DeleteCriticalSection(param_1 + 0x14);
  F_00e38fd0(param_1 + 3 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(param_1[4])),((undefined4 *)GEN_TOP(param_1[4])));
  F_00406ad0(param_1[4]);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e399a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e399a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe399a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x118)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157688));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xc0))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) =
       (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0xb8))));
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x88))) =
       (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))));
  uVar2 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  return uVar2;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39a40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe39a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e399a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ServiceConsumerConnectionManager */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe39a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  F_00e39890(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1157688));
  *(undefined * PTR32 * PTR32 *)(this + 0x88) = (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  *(undefined4 *)(this + 0xb8) = 0;
  F_00c48350(this + 0x8c,0,0x2c);
  *(undefined4 *)(this + 0x8c) = 0x12345678;
  this_00 = this + 0xc0;
  *(undefined4 *)(this + 0x94) = 1000;
  F_0042b630(this_00 GEN_EDX_ARG);
  if (this_00 != param_2) {
    F_0042ccf0(this_00 GEN_EDX_ARG,param_2);
    *(undefined2 *)(this + 0x114) = *(undefined2 *)(param_2 + 0x54);
  }
  *(undefined4 *)(this + 0x118) = 0;
  F_00a1af40(this + 0x120 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x138) = 0;
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)(this + 0x120) = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)(this + 0x128) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)(this + 0x130) = uVar3;
  *(undefined4 *)(this + 0xbc) = 0;
  this_01 = ((undefined *)GEN_TOP(F_00406b90(0x10f8,0,0)));
  if (this_01 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00e387f0(this_01 GEN_EDX_ARG,this + 0xc0,this);
  }
  *(undefined4 *)(this + 0x13c) = 0;
  *(uint *)(this + 0x118) = uVar1;
  *(undefined * PTR32 *)(this + 0x80) = this + 0x88;
  return (uint)this;
}

/* ref: FUN_00e39b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe39b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e39bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_01050d30(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e39be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe39bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  F_00e3b780((uint)*((ushort *)GEN_TOP((param_1 + 2))),param_1 + 0x10,param_2 - 0x10,0);
  uVar1 = F_00e3b820(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe39c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe39c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: PacketBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39c70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe39c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe39ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e39ce0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e39ce0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe39d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  __time64_t _Var1;
  
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *((undefined2 *)GEN_TOP(((int)param_1 + 2))) = *(undefined2 *)(this + 0x30);
  *((undefined1 *)GEN_TOP(((int)param_1 + 1))) = 0;
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  param_1[2] = (uint)_Var1;
  return (uint)_Var1;
}

/* ref: FUN_00e39d70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e39d70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  return (uint)in_ecx;
}

/* ref: FUN_00e39da0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39da0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  return;
}

/* ref: FUN_00e39dc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e39dc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576b8));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoUpPacketBuilder::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39df0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe39df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e39e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe39e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60((int)this + 0x10 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11576cc));
  F_01050d30(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,param_2,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3[1];
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39e90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe39e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::ClientPacketBuilder */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e39ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(this + 0x10 GEN_EDX_FWD);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11576cc));
  F_01050d30(this + 0x20 GEN_EDX_ARG,param_2,param_3);
  *(undefined4 *)(this + 0x30) = param_1;
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf8 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf11 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe39fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: FUN_00e39fe0 */
GEN_LIB GEN_NOFRAME uint F_00e39fe0(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xe39fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 7 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 7 + uVar2))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + 1 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 1 + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 6 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 6 + uVar2))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + 2 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 2 + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 5 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 5 + uVar2))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((in_ecx + 3 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 3 + uVar2))) = *((undefined1 *)GEN_TOP((in_ecx + 4 + uVar2)));
    *((undefined1 *)GEN_TOP((in_ecx + 4 + uVar2))) = uVar1;
    uVar2 = uVar2 + 8;
  }
  return uVar2;
}

/* ref: FUN_00e3a0b0 */
GEN_LIB GEN_FRAME uint F_00e3a0b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  uVar3 = uVar2 + 2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10))) = uVar1;
    uVar3 = uVar2 + 0x44;
    if (param_2 < uVar2 + 0x44) {
      uVar3 = uVar2 + 4;
    }
  }
  return uVar3;
}

/* ref: FUN_00e3a100 */
GEN_LIB GEN_FRAME uint F_00e3a100(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x34) {
    return 0x14;
  }
  return (-(uint)(param_2 < 0x54) & 0xffffffe0) + 0x54;
}

/* ref: FUN_00e3a1d0 */
GEN_LIB GEN_FRAME uint F_00e3a1d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  return (-(uint)(param_2 < 0x28) & 0xffffffe0) + 0x28;
}

/* ref: FUN_00e3a230 */
GEN_LIB GEN_FRAME uint F_00e3a230(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3a230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_00e39fe0(8,param_1 + 8);
  uVar3 = uVar2 + 2 + uVar3;
  uVar2 = uVar3 + 2;
  if (param_2 < uVar2) {
    return uVar3;
  }
  uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x13)));
  *((undefined1 *)GEN_TOP((param_1 + 0x13))) = *((undefined1 *)GEN_TOP((param_1 + 0x12)));
  *((undefined1 *)GEN_TOP((param_1 + 0x12))) = uVar1;
  if (uVar3 + 6 <= param_2) {
    uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x17)));
    *((undefined1 *)GEN_TOP((param_1 + 0x17))) = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
    *((undefined1 *)GEN_TOP((param_1 + 0x14))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x16)));
    *((undefined1 *)GEN_TOP((param_1 + 0x16))) = *((undefined1 *)GEN_TOP((param_1 + 0x15)));
    uVar2 = uVar3 + 8;
    *((undefined1 *)GEN_TOP((param_1 + 0x15))) = uVar1;
    if (param_2 < uVar2) {
      return uVar3 + 6;
    }
    uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x19)));
    *((undefined1 *)GEN_TOP((param_1 + 0x19))) = *((undefined1 *)GEN_TOP((param_1 + 0x18)));
    *((undefined1 *)GEN_TOP((param_1 + 0x18))) = uVar1;
    if (uVar3 + 0x28 <= param_2) {
      uVar2 = uVar3 + 0x38;
      if (param_2 < uVar2) {
        return uVar3 + 0x28;
      }
      if (uVar3 + 0x438 <= param_2) {
        return uVar3 + 0x438;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00e3a2e0 */
GEN_LIB GEN_FRAME uint F_00e3a2e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3a2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_00e39fe0(8,param_1 + 8);
  uVar3 = uVar2 + 2 + uVar3;
  uVar2 = uVar3;
  if (uVar3 + 2 <= param_2) {
    uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x13)));
    *((undefined1 *)GEN_TOP((param_1 + 0x13))) = *((undefined1 *)GEN_TOP((param_1 + 0x12)));
    *((undefined1 *)GEN_TOP((param_1 + 0x12))) = uVar1;
    uVar2 = uVar3 + 2;
    if (uVar3 + 6 <= param_2) {
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x17)));
      *((undefined1 *)GEN_TOP((param_1 + 0x17))) = *((undefined1 *)GEN_TOP((param_1 + 0x14)));
      *((undefined1 *)GEN_TOP((param_1 + 0x14))) = uVar1;
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x16)));
      *((undefined1 *)GEN_TOP((param_1 + 0x16))) = *((undefined1 *)GEN_TOP((param_1 + 0x15)));
      uVar2 = uVar3 + 0x26;
      *((undefined1 *)GEN_TOP((param_1 + 0x15))) = uVar1;
      if (param_2 < uVar2) {
        return uVar3 + 6;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00e3a370 */
GEN_LIB GEN_FRAME uint F_00e3a370(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3a3a0 */
GEN_LIB GEN_FRAME uint F_00e3a3a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x14) {
    return 0x12;
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  return (-(uint)(param_2 < 0x214) & 0xfffffe00) + 0x214;
}

/* ref: FUN_00e3a490 */
GEN_LIB GEN_FRAME uint F_00e3a490(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (7 < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    param_1[7] = uVar1;
    uVar1 = param_1[5];
    param_1[5] = param_1[6];
    param_1[6] = uVar1;
    if (param_2 < 0x10) {
      return 0xc;
    }
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar4 = 0x10;
    iVar6 = 0;
    puVar5 = param_1 + 0x1a;
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar2 = F_00e39fe0(8,puVar5 - 10);
      uVar3 = uVar2 + 2;
      if (uVar2 + 4 < 0x51) {
        uVar1 = puVar5[1];
        puVar5[1] = *puVar5;
        *puVar5 = uVar1;
        uVar3 = uVar2 + 0x44;
        if (0x50 < uVar2 + 0x44) {
          uVar3 = uVar2 + 4;
        }
      }
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 + uVar3;
      puVar5 = puVar5 + 0x50;
    } while (iVar6 < 8);
    return uVar4;
  }
  return 4;
}

/* ref: FUN_00e3a560 */
GEN_LIB GEN_FRAME uint F_00e3a560(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3a560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    if (param_2 < 0x12) {
      return 0x10;
    }
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x11];
    param_1[0x11] = uVar1;
    if (0x13 < param_2) {
      uVar1 = param_1[0x12];
      param_1[0x12] = param_1[0x13];
      param_1[0x13] = uVar1;
      uVar3 = 0x14;
      iVar4 = 0;
      puVar5 = param_1 + 0x18;
      do {
        if (param_2 <= uVar3) {
          return uVar3;
        }
        uVar2 = F_00e3a230(puVar5,0x450,param_3);
        iVar4 = iVar4 + 1;
        uVar3 = uVar3 + uVar2;
        puVar5 = puVar5 + 0x450;
      } while (iVar4 < 2);
      return uVar3;
    }
    return 0x12;
  }
  return 0xc;
}

/* ref: FUN_00e3a660 */
GEN_LIB GEN_FRAME uint F_00e3a660(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3a660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar3 = 0x10;
    iVar4 = 0;
    puVar5 = param_1 + 0x10;
    do {
      if (param_2 <= uVar3) {
        return uVar3;
      }
      uVar2 = F_00e3a230(puVar5,0x450,param_3);
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + uVar2;
      puVar5 = puVar5 + 0x450;
    } while (iVar4 < 2);
    return uVar3;
  }
  return 0xc;
}

/* ref: FUN_00e3a730 */
GEN_LIB GEN_FRAME uint F_00e3a730(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  param_1[7] = param_1[4];
  uVar2 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = param_1[6];
  param_1[6] = uVar2;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[8];
  uVar2 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = param_1[10];
  param_1[10] = uVar2;
  if (param_2 < 0x14) {
    return 0xc;
  }
  uVar3 = F_00e39fe0(8,param_1 + 0x10);
  uVar4 = uVar3 + 0xe;
  if (uVar3 + 0x10 <= param_2) {
    uVar1 = param_1[0x1b];
    param_1[0x1b] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar4 = uVar3 + 0x10;
    if (uVar3 + 0x50 <= param_2) {
      uVar4 = uVar3 + 0x52;
      if (param_2 < uVar4) {
        return uVar3 + 0x50;
      }
      uVar1 = param_1[0x5d];
      param_1[0x5d] = param_1[0x5c];
      param_1[0x5c] = uVar1;
      if (uVar3 + 0x54 <= param_2) {
        uVar1 = param_1[0x5f];
        param_1[0x5f] = param_1[0x5e];
        uVar4 = uVar3 + 0x74;
        param_1[0x5e] = uVar1;
        if (param_2 < uVar4) {
          return uVar3 + 0x54;
        }
        if (uVar3 + 0x94 <= param_2) {
          return uVar3 + 0x94;
        }
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00e3a820 */
GEN_LIB GEN_FRAME uint F_00e3a820(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x14) {
    return 0x12;
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  if (param_2 < 0x16) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x15];
  param_1[0x15] = uVar1;
  if (param_2 < 0x18) {
    return 0x16;
  }
  uVar1 = param_1[0x16];
  param_1[0x16] = param_1[0x17];
  param_1[0x17] = uVar1;
  if (param_2 < 0x1a) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x19];
  param_1[0x19] = uVar1;
  if (param_2 < 0x1c) {
    return 0x1a;
  }
  uVar1 = param_1[0x1a];
  param_1[0x1a] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  return 0x1c;
}

/* ref: FUN_00e3a970 */
GEN_LIB GEN_FRAME uint F_00e3a970(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3a970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xb) {
    return 9;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xc < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xd];
    param_1[0xd] = uVar1;
    if (param_2 < 0xf) {
      return 0xd;
    }
    uVar1 = param_1[0xe];
    param_1[0xe] = param_1[0xf];
    param_1[0xf] = uVar1;
    if (0x14 < param_2) {
      uVar1 = param_1[0x14];
      param_1[0x14] = param_1[0x17];
      param_1[0x17] = uVar1;
      uVar1 = param_1[0x15];
      param_1[0x15] = param_1[0x16];
      param_1[0x16] = uVar1;
      iVar3 = 0;
      uVar4 = 0x15;
      puVar2 = param_1 + 0x23;
      do {
        if (param_2 <= uVar4) {
          return uVar4;
        }
        uVar1 = puVar2[-0xb];
        puVar2[-0xb] = puVar2[-10];
        puVar2[-10] = uVar1;
        uVar1 = puVar2[-9];
        puVar2[-9] = puVar2[-8];
        puVar2[-8] = uVar1;
        uVar1 = puVar2[-3];
        puVar2[-3] = *puVar2;
        *puVar2 = uVar1;
        uVar1 = puVar2[-2];
        puVar2[-2] = puVar2[-1];
        puVar2[-1] = uVar1;
        uVar1 = puVar2[1];
        puVar2[1] = puVar2[4];
        puVar2[4] = uVar1;
        uVar1 = puVar2[2];
        puVar2[2] = puVar2[3];
        puVar2[3] = uVar1;
        uVar1 = puVar2[5];
        puVar2[5] = puVar2[8];
        puVar2[8] = uVar1;
        uVar1 = puVar2[6];
        puVar2[6] = puVar2[7];
        puVar2[7] = uVar1;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 + 0x54;
        puVar2 = puVar2 + 0x54;
      } while (iVar3 < 6);
      return uVar4;
    }
    return 0x11;
  }
  return 0xb;
}

/* ref: FUN_00e3aac0 */
GEN_LIB GEN_FRAME uint F_00e3aac0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3aac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    iVar3 = 0;
    uVar4 = 0x10;
    puVar2 = param_1 + 0x13;
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar1 = puVar2[-3];
      puVar2[-3] = *puVar2;
      *puVar2 = uVar1;
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[-1];
      puVar2[-1] = uVar1;
      uVar1 = puVar2[3];
      puVar2[3] = puVar2[4];
      puVar2[4] = uVar1;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 0x28;
      puVar2 = puVar2 + 0x28;
    } while (iVar3 < 0xc);
    return uVar4;
  }
  return 0xc;
}

/* ref: FUN_00e3aba0 */
GEN_LIB GEN_FRAME uint F_00e3aba0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3aba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  uVar2 = param_2;
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x14) {
    return 0x12;
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  if (param_2 < 0x16) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x15];
  param_1[0x15] = uVar1;
  if (0x17 < param_2) {
    uVar1 = param_1[0x16];
    param_1[0x16] = param_1[0x17];
    param_1[0x17] = uVar1;
    if (param_2 < 0x1a) {
      return 0x18;
    }
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x19];
    param_1[0x19] = uVar1;
    if (0x1b < param_2) {
      uVar1 = param_1[0x1a];
      param_1[0x1a] = param_1[0x1b];
      param_1[0x1b] = uVar1;
      param_2 = 0x1c;
      iVar5 = 0;
      puVar4 = param_1 + 0x20;
      do {
        if (uVar2 <= param_2) {
          return param_2;
        }
        uVar3 = F_00e3a2e0(puVar4,0x38,param_3);
        param_2 = param_2 + uVar3;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 0x38;
      } while (iVar5 < 9);
      return param_2;
    }
    return 0x1a;
  }
  return 0x16;
}

/* ref: FUN_00e3ad00 */
GEN_LIB GEN_FRAME uint F_00e3ad00(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ad00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3ad30 */
GEN_LIB GEN_FRAME uint F_00e3ad30(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ad30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x2c) {
    return 0xc;
  }
  return (-(uint)(param_2 < 0x4c) & 0xffffffe0) + 0x4c;
}

/* ref: FUN_00e3add0 */
GEN_LIB GEN_FRAME uint F_00e3add0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3add0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  return param_3;
}

/* ref: FUN_00e3ade0 */
GEN_LIB GEN_FRAME uint F_00e3ade0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ade0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e3ae70 */
GEN_LIB GEN_FRAME uint F_00e3ae70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ae70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e3ae80 */
GEN_LIB GEN_FRAME uint F_00e3ae80(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3ae80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3aeb0 */
GEN_LIB GEN_FRAME uint F_00e3aeb0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3aeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x4c) {
    return 0xc;
  }
  return (-(uint)(param_2 < 0xcc) & 0xffffff80) + 0xcc;
}

/* ref: FUN_00e3af60 */
GEN_LIB GEN_FRAME uint F_00e3af60(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3af60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xd];
  param_1[0xd] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xe];
  param_1[0xe] = param_1[0xf];
  param_1[0xf] = uVar1;
  if (param_2 < 0x50) {
    return 0x10;
  }
  if (param_2 < 0xd0) {
    return 0x50;
  }
  return (-(uint)(param_2 < 0xf0) & 0xffffffe0) + 0xf0;
}

/* ref: FUN_00e3b050 */
GEN_LIB GEN_FRAME uint F_00e3b050(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xd];
  param_1[0xd] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xe];
  param_1[0xe] = param_1[0xf];
  param_1[0xf] = uVar1;
  if (param_2 < 400) {
    return 0x10;
  }
  if (param_2 < 0x210) {
    return 400;
  }
  return (-(uint)(param_2 < 0x230) & 0xffffffe0) + 0x230;
}

/* ref: FUN_00e3b140 */
GEN_LIB GEN_FRAME uint F_00e3b140(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x14) {
    return 0xc;
  }
  uVar2 = F_00e39fe0(8,param_1 + 0x10);
  return uVar2 + 0xc;
}

/* ref: FUN_00e3b1d0 */
GEN_LIB GEN_FRAME uint F_00e3b1d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar3 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    if (param_2 < uVar3 + 0x10) {
      return uVar3 + 8;
    }
    uVar4 = F_00e39fe0(8,param_1 + 0x10);
    uVar4 = uVar3 + 10 + uVar4;
    uVar3 = uVar4 + 2;
    if (param_2 < uVar3) {
      return uVar4;
    }
    uVar1 = param_1[0x1a];
    param_1[0x1a] = param_1[0x1b];
    param_1[0x1b] = uVar1;
  }
  return uVar3;
}

/* ref: FUN_00e3b280 */
GEN_LIB GEN_FRAME uint F_00e3b280(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar3 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    if (param_2 < uVar3 + 0x10) {
      return uVar3 + 8;
    }
    uVar4 = F_00e39fe0(8,param_1 + 0x10);
    uVar4 = uVar3 + 10 + uVar4;
    uVar3 = uVar4;
    if (uVar4 + 2 <= param_2) {
      uVar1 = param_1[0x1b];
      param_1[0x1b] = param_1[0x1a];
      uVar3 = uVar4 + 0x22;
      param_1[0x1a] = uVar1;
      if (param_2 < uVar3) {
        return uVar4 + 2;
      }
      if (uVar4 + 0x1b2 <= param_2) {
        if (param_2 < uVar4 + 0x1ba) {
          return uVar4 + 0x1b2;
        }
        uVar5 = F_00e39fe0(8,param_1 + 0x1d0);
        uVar5 = uVar4 + 0x1b4 + uVar5;
        uVar3 = uVar5 + 2;
        if (param_2 < uVar3) {
          return uVar5;
        }
        uVar1 = param_1[0x1da];
        param_1[0x1da] = param_1[0x1db];
        param_1[0x1db] = uVar1;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00e3b380 */
GEN_LIB GEN_FRAME uint F_00e3b380(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar3 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    if (param_2 < uVar3 + 0x10) {
      return uVar3 + 8;
    }
    uVar4 = F_00e39fe0(8,param_1 + 0x10);
    uVar4 = uVar3 + 10 + uVar4;
    uVar3 = uVar4 + 2;
    if (param_2 < uVar3) {
      return uVar4;
    }
    uVar1 = param_1[0x1a];
    param_1[0x1a] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    if (uVar4 + 0x22 <= param_2) {
      if (param_2 < uVar4 + 0x2a) {
        return uVar4 + 0x22;
      }
      uVar5 = F_00e39fe0(8,param_1 + 0x40);
      uVar5 = uVar4 + 0x24 + uVar5;
      uVar3 = uVar5 + 2;
      if (param_2 < uVar3) {
        return uVar5;
      }
      uVar1 = param_1[0x4a];
      param_1[0x4a] = param_1[0x4b];
      param_1[0x4b] = uVar1;
    }
  }
  return uVar3;
}

/* ref: FUN_00e3b460 */
GEN_LIB GEN_FRAME uint F_00e3b460(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (7 < param_2) {
    uVar1 = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = param_1[4];
    param_1[6] = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    uVar3 = 8;
    if (0xf < param_2) {
      uVar3 = F_00e39fe0(8,param_1 + 8);
      if (param_2 < uVar3 + 0x10) {
        return uVar3 + 8;
      }
      uVar4 = F_00e39fe0(8,param_1 + 0x10);
      uVar4 = uVar3 + 10 + uVar4;
      uVar3 = uVar4;
      if (uVar4 + 2 <= param_2) {
        uVar1 = param_1[0x1b];
        param_1[0x1b] = param_1[0x1a];
        param_1[0x1a] = uVar1;
        uVar3 = uVar4 + 0x22;
        if (param_2 < uVar4 + 0x22) {
          uVar3 = uVar4 + 2;
        }
      }
    }
    return uVar3;
  }
  return 4;
}

/* ref: FUN_00e3b510 */
GEN_LIB GEN_FRAME uint F_00e3b510(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar4 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    uVar4 = uVar3 + 10;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x13];
      param_1[0x13] = param_1[0x12];
      param_1[0x12] = uVar1;
      uVar4 = uVar3 + 0x2c;
      if (param_2 < uVar3 + 0x2c) {
        uVar4 = uVar3 + 0xc;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00e3b5a0 */
GEN_LIB GEN_FRAME uint F_00e3b5a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  int in_eax;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xf];
  param_1[0xf] = param_1[0xe];
  param_1[0xe] = uVar1;
  uVar2 = 0x10;
  if (param_2 < 0x50) {
    if (param_2 < 0x11) goto LAB_00e3b658;
    in_eax = param_2 - 0x10;
  }
  else {
    in_eax = 0x40;
  }
  uVar2 = F_00e39fe0(in_eax,param_1 + 0x10);
  uVar2 = uVar2 + 0x10;
LAB_00e3b658: ;
  if (uVar2 + 0x60 <= param_2) {
    uVar2 = uVar2 + 0x60;
  }
  return uVar2;
}

/* ref: FUN_00e3b670 */
GEN_LIB GEN_FRAME uint F_00e3b670(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3b6a0 */
GEN_LIB GEN_FRAME uint F_00e3b6a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return (-(uint)(param_2 < 0x28) & 0xffffffe0) + 0x28;
}

/* ref: FUN_00e3b700 */
GEN_LIB GEN_FRAME uint F_00e3b700(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0x28) {
    return 8;
  }
  if (param_2 < 0x68) {
    return 0x28;
  }
  return (-(uint)(param_2 < 0x88) & 0xffffffe0) + 0x88;
}

/* ref: FUN_00e3b780 */
GEN_LIB GEN_FRAME uint F_00e3b780(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe3b780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return param_3;
}

/* ref: FUN_00e3b790 */
GEN_LIB GEN_FRAME uint F_00e3b790(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e3b820 */
GEN_LIB GEN_FRAME uint F_00e3b820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3b820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return param_2;
}

/* ref: RecvCallbackInterface_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3b860(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11576e0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e3b8a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3b8a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3b8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x11576e0));
  return;
}

/* ref: FUN_00e3b8b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3b8b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3b8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x11576ec));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3b8c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3b8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11576e0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::Dispatch */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3b8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3b8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0xc))) + 0x24)));
  uVar1 = *((ushort *)GEN_TOP((uVar2 + 2)));
  if (uVar1 < 0x1f5) {
    if (uVar1 == 500) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    }
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 1: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 2: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xc: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xd: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xe: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xf: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x10: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x15: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x16: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x17: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    }
  }
  else if (uVar1 == 0x1f5) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
  }
  return uVar2;
}

/* ref: FUN_00e3bac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x14))) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x24)));
  }
  if (*((short *)GEN_TOP((iVar1 + 2))) == 5) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x14))) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x24)));
  }
  if (*((short *)GEN_TOP((iVar1 + 2))) == 6) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bb00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bb00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x14))) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x24)));
  }
  if (*((short *)GEN_TOP((iVar1 + 2))) == 3) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bb20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x14))) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x24)));
  }
  if (*((short *)GEN_TOP((iVar1 + 2))) == 4) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bb40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bb40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x14))) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x24)));
  }
  if (*((short *)GEN_TOP((iVar1 + 2))) == 0xb) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bc00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bc00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x14))) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x24)));
  }
  if (*((short *)GEN_TOP((iVar1 + 2))) == 0x1f5) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bc20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bc20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x14))) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x14))) + 0x24)));
  }
  if (*((short *)GEN_TOP((iVar1 + 2))) == 0x1f6) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3bc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = param_2;
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  *piVar1 = param_3 - param_2;
  return (uint)piVar1;
}

/* ref: FUN_00e3bcb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bcb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1000;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  F_00a1af40(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e3bd20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bd20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x5c;
}

/* ref: FUN_00e3bd30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bd30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x60)));
}

/* ref: FUN_00e3bd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3bd40(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3bd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00e3bd60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bd60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0x14))) + 1;
  *((uint *)GEN_TOP((in_ecx + 0x14))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e3bd70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bd70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x14;
}

/* ref: FUN_00e3bd80 */
GEN_LIB GEN_FRAME uint F_00e3bd80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3bd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((param_1 + 0x60))) = *param_2;
  return (uint)param_2;
}

/* ref: FUN_00e3bd90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bd90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  *(undefined2 *)(in_ecx + 0x18) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e3bdc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bdc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00e3bdd0 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00e3bdd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 0x60)));
}

/* ref: FUN_00e3bde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3bde0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3bde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e3be40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3be40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3be40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x460)));
}

/* ref: FUN_00e3be50 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3be50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3be50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((byte *)GEN_TOP((in_ecx + 0x11))) & REFG(undefined1, 0x13598ec)) == 0;
}

/* ref: FUN_00e3be70 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3be70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3be70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((byte *)GEN_TOP((in_ecx + 0x11))) & REFG(undefined1, 0x13598f0)) != 0;
}

/* ref: FUN_00e3bef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3bef0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3bef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00e3bf00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3bf00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: FUN_00e3bf40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3bf40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3bf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e3bf60 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3bf60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((byte *)GEN_TOP((in_ecx + 4))) & REFG(undefined1, 0x13598ee)) != 0;
}

/* ref: FUN_00e3bf80 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3bf80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((byte *)GEN_TOP((in_ecx + 4))) & REFG(undefined1, 0x13598ef)) != 0;
}

/* ref: FUN_00e3bfa0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3bfa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((byte *)GEN_TOP((in_ecx + 4))) & REFG(undefined1, 0x13598f2)) != 0;
}

/* ref: FUN_00e3bfc0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3bfc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00e3bfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3bfd0(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3bfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  return (uint)in_ecx;
}

/* ref: FUN_00e3c010 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c010(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e3c020 */
GEN_LIB GEN_NOFRAME unsigned int F_00e3c020(void)
{
  GEN_ENTER(0xe3c020u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e3c030 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c030(GEN_P(ushort * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;)
  return (uint)*in_ecx;
}

/* ref: FUN_00e3c040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00e3c050 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 2)));
}

/* ref: FUN_00e3c060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3c060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 2))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00e3c080 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e3c080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (byte)((uint)*((undefined4 *)GEN_TOP((in_ecx + 4))) >> 0x1f);
}

/* ref: FUN_00e3c090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3c090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00e3c0b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c0b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[39])REFP(0x1157734));
  return (uint)in_ecx;
}

/* ref: FUN_00e3c0c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[39])REFP(0x1157734));
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf8 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3c160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf11 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf14 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf15 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe3c1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xe3c1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe3c1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf18 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf22 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf23 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf24 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf25 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf26 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf27 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf28 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf29 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf31 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf32 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf33 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf34 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe3c2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf35 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe3c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf36 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf37 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf38 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00e3c330 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 0x10))) < (*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) - 1U) {
    *piVar1 = *((uint *)GEN_TOP(((int)this + 0x10))) + 1;
    return (uint)piVar1;
  }
  *piVar1 = 0;
  return (uint)piVar1;
}

/* ref: FUN_00e3c350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((iVar1 != *((int *)GEN_TOP(((int)this + 4)))) &&
     (((uint)(*((int *)GEN_TOP(((int)this + 4))) - iVar1 >> 2) <= *((uint *)GEN_TOP(((int)this + 0x18))) ||
      (*((char *)GEN_TOP(((int)this + 0x20))) == '\0')))) {
    return *((uint *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x10))) * 4)));
  }
  return 0;
}

/* ref: FUN_00e3c380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)this;
  uVar2 = *((int *)GEN_TOP(((int)this + 4))) - (int)((int)(uintptr_t)piVar1) >> 2;
  uVar3 = 0;
  piVar4 = piVar1;
  if (uVar2 != 0) {
    do {
      if (((((int *)GEN_TOP(*piVar4)))[0x1b] == 0) && (*((int *)GEN_TOP(*piVar4)) == 0)) {
        *((undefined4 *)GEN_TOP((piVar1[uVar3] + 0x6c))) = 1;
        return *((uint *)GEN_TOP((*(int *)this + uVar3 * 4)));
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00e3c3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3c3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int * this_00;
  code * pcVar4;
  undefined4 uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar2 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x18)))) {
    return uVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) == 0) {
    pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x78,0,0)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      pvVar3 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      pvVar3 = ((undefined *)GEN_TOP(F_00bac2f0(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))))));
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = pvVar3;
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)) = 1;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x0)), 0, 3))));
    bVar1 = F_00babce0(pvVar3 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 0x18))) * 4)));
      pcVar4 = ((code *)REFP(0xe3bd80));
      uVar2 = F_0042a990(*((int *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 0x18))) * 4))) + 8 GEN_EDX_ARG);
      bVar1 = F_00baa680(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar2,pcVar4,uVar5);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) goto LAB_00e3c453;
    }
    this_00 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  }
  else {
LAB_00e3c453: ;
    uVar2 = F_00bada90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
    this_00 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (*this_00 != 4) {
      return uVar2;
    }
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  if (this_00 != ((int *)GEN_TOP(0x0))) {
    F_00bac3b0(this_00 GEN_EDX_ARG);
    uVar2 = F_00406ad0(this_00);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  return uVar2;
}

/* ref: FUN_00e3c4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x454))) - *((int *)GEN_TOP(((int)this + 0x450))) >> 2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x450))) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00e3c4d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x20))) != '\0') {
    F_00e3c3d0(this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00e3c4e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)this;
  while( true ) {
    if (puVar1 == *((uint * PTR32 *)GEN_TOP(((int)this + 4)))) {
      return 0;
    }
    if ((((undefined4 *)GEN_TOP(*puVar1)))[0x1b] == 2) break;
    puVar1 = puVar1 + 1;
  }
  *((undefined4 *)GEN_TOP(*puVar1)) = 0;
  *((undefined4 *)GEN_TOP((*puVar1 + 0x6c))) = 1;
  return *puVar1;
}

/* ref: FUN_00e3c520 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3c520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      *((undefined4 *)GEN_TOP((*piVar2 + 0x6c))) = 2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3c560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3c560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((int *)GEN_TOP(((int)this + 0x24))) = param_1;
  if (0 < param_1) {
    *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 1;
  }
  return (uint)this;
}

/* ref: FUN_00e3c590 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        F_0042c880(((undefined *)GEN_TOP((iVar1 + 8))) GEN_EDX_FWD);
        F_00406ad0(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00bac3b0(this_00 GEN_EDX_ARG);
    F_00406ad0(this_00);
  }
  if (*(int *)this != 0) {
    F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00e3c600 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        F_0042c880(((undefined *)GEN_TOP((iVar1 + 8))) GEN_EDX_FWD);
        in_EAX = F_00406ad0(iVar1);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    in_EAX = F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return in_EAX;
}

/* ref: FUN_00e3c670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      if (*piVar2 != 0) {
        F_00406ad0(*piVar2);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e3c6c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      if (*piVar2 != 0) {
        F_00406ad0(*piVar2);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00e3c720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x450)));
  if (piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x454)))) {
    do {
      if (*piVar3 != 0) {
        F_00406ad0(*piVar3);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x454))));
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x460)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x450))) != 0) {
    uVar2 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0x450))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x450))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x454))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x458))) = 0;
  return uVar2;
}

/* ref: FUN_00e3c7a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      this_00 = ((undefined *)GEN_TOP(*puVar2));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00e3c720(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00e3c800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c800(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e3c810 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
    do {
      F_00406ad0(*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))));
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar1;
}

/* ref: FUN_00e3c860 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *(undefined4 *)this = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 8)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 8))),0);
    *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  }
  return;
}

/* ref: FUN_00e3c8a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3c8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint * this_00;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 4))) != '\0') {
    this_00 = ((uint *)GEN_TOP(((int)this + 0x450)));
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x450))); piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0x454)));
        piVar1 = piVar1 + 1) {
      if (*((char *)GEN_TOP((*piVar1 + 0x10))) == *((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 4)))) {
        puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
        puVar2 = ((undefined4 *)GEN_TOP(*piVar1));
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 - 1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
        return;
      }
    }
    puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x38,0,0)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      puVar5 = puVar2;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x454)));
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar2;
    if ((&(*(undefined4 * PTR32 *)&gen_args[0]) < puVar4) && (puVar5 = ((undefined4 *)GEN_TOP(*this_00)), puVar5 <= &(*(undefined4 * PTR32 *)&gen_args[0]))) {
      if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x458)))) {
        F_00e3e470(this_00 GEN_EDX_ARG,1);
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x454))) != ((undefined4 *)GEN_TOP(0x0))) {
        **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x454))) =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(undefined4 * PTR32 *)&gen_args[0]) - (int)((int)(uintptr_t)puVar5) >> 2) * 4)));
        *((int *)GEN_TOP(((int)this + 0x454))) = *((int *)GEN_TOP(((int)this + 0x454))) + 4;
        return;
      }
    }
    else {
      if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x458)))) {
        F_00e3e470(this_00 GEN_EDX_ARG,1);
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x454))) != ((undefined4 *)GEN_TOP(0x0))) {
        **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x454))) = puVar2;
      }
    }
    *((int *)GEN_TOP(((int)this + 0x454))) = *((int *)GEN_TOP(((int)this + 0x454))) + 4;
  }
  return;
}

/* ref: FUN_00e3c980 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e3c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3c980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(*param_1));
  if (piVar2 != ((int *)GEN_TOP(param_1[1]))) {
    do {
      iVar1 = *piVar2;
      if ((*((int *)GEN_TOP((iVar1 + 8))) == *((int *)GEN_TOP(((int)this + 8)))) &&
         (*((int *)GEN_TOP((iVar1 + 0xc))) == *((int *)GEN_TOP(((int)this + 0xc))))) {
        F_00e3c8a0(this GEN_EDX_FWD,iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != ((int *)GEN_TOP(param_1[1])));
  }
  return;
}

/* ref: FUN_00e3c9c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3c9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      this_00 = ((undefined *)GEN_TOP(*puVar1));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00e3c720(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  if (*(int *)this != 0) {
    F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00e3ca10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3ca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ca10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint * this_00;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[0]);
  iVar5 = (*(undefined4 * PTR32 *)&gen_args[0])[3];
  if ((iVar5 != 0) || (puVar3 = ((undefined4 *)GEN_TOP(0x0)), (*(undefined4 * PTR32 *)&gen_args[0])[2] != 0)) {
    cVar1 = *((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)iVar5 >> 8),cVar1)));
    if (cVar1 != '\0') {
      this_00 = ((uint *)GEN_TOP(((int)this + 4)));
      for (puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))); puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
          puVar3 = puVar3 + 1) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
        if ((((*(undefined4 * PTR32 *)&gen_args[0])[2] == puVar4[2]) && (iVar5 == puVar4[3])) && (cVar1 == *(char *)(puVar4 + 4)))
        {
          puVar6 = (*(undefined4 * PTR32 *)&gen_args[0]);
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar4 = puVar4 + 1;
          }
          return (uint)puVar3;
        }
      }
      puVar4 = ((undefined4 *)GEN_TOP(F_00406b90(0x38,0,0)));
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar4 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        puVar3 = puVar4;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar3 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
      (*(undefined4 * PTR32 *)&gen_args[0]) = puVar4;
      if ((&(*(undefined4 * PTR32 *)&gen_args[0]) < puVar6) && (puVar2 = ((undefined4 *)GEN_TOP(*this_00)), puVar2 <= &(*(undefined4 * PTR32 *)&gen_args[0]))) {
        if (puVar6 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
          F_00e3e470(this_00 GEN_EDX_ARG,1);
        }
        puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
        puVar3 = ((undefined4 *)GEN_TOP(0x0));
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar6 = *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(undefined4 * PTR32 *)&gen_args[0]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
          *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 4;
          return (uint)puVar6;
        }
      }
      else {
        if (puVar6 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
          F_00e3e470(this_00 GEN_EDX_ARG,1);
        }
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar3 = puVar4;
        }
      }
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) + 4;
    }
  }
  return (uint)puVar3;
}

/* ref: Global::CharaEntry */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e3cb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xe0, 0, 4);
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  undefined4 * puVar3;
  char * pcVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  int iVar6;
  undefined4 * puVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc));
  puVar3 = param_1;
  puVar7 = this;
  for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x450))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x454))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x458))) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_00406b90(0xe8,0,0)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00f36280(puVar3 GEN_EDX_ARG);
    *puVar3 = (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x460))) = puVar3;
  F_00e82b60(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
  (*(uint *)(gen_frame + 0xd0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = ((undefined4 * PTR32 * PTR32 *)GEN_TOP(((uint)pppuVar2 & 0xffffff00)));
  pcVar4 = ((char *)GEN_TOP(((int)this + 0x4a)));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG,((char *)GEN_TOP(((int)this + 0x4a))),(int)pcVar4 - ((int)this + 0x4b));
  ((undefined * PTR32 *)(gen_frame + 0x0))[0] = &REFG(undefined, 0x1157820);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  (*(undefined8 *)(gen_frame + 0x8)) = 0;
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x0)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x0))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
  if ((*(uint *)(gen_frame + 0xd0)) < 0x10) {
    ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc));
  }
  F_00e3da10(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,ppppuVar5,(*(undefined4 *)(gen_frame + 0xcc)),2);
  if (0xf < (*(uint *)(gen_frame + 0xd0))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0]);
  }
  F_00ea9ac0(((undefined * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xa0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x460))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x460))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x0)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x0))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x0)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x0))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)));
  F_00e82b80(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e3cce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3cce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_00e3e6e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00e3cd00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3cd00(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00e3cd30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3cd30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bac3b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e3cd70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3cd70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e3cd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3cd90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e3cdf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3cdf0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cdf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e3ce60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3ce60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3ce60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 1) != 0) {
    F_00406ad0(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = 0;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  *puVar1 = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x40))) = *((uint *)GEN_TOP(((int)this + 0x40))) & 0xfffffffe;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00e3cec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3cec0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3cec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3cee0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3cee0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e3cf20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3cf20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cf20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e3cf40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3cf40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3cf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e3cf60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3cf60(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3cf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

/* ref: FUN_00e3cfb0 */
GEN_LIB GEN_FRAME uint F_00e3cfb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3cfb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e3cfc0 */
GEN_LIB GEN_FRAME uint F_00e3cfc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3cfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e3d010 */
GEN_LIB GEN_FRAME unsigned int F_00e3d010(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00e3d030 */
GEN_LIB GEN_FRAME uint F_00e3d030(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3d030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e3d040 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3d040(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d060 */
GEN_LIB GEN_FRAME uint F_00e3d060(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe3d060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e3d070 */
GEN_LIB GEN_FRAME uint F_00e3d070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d0a0 */
GEN_LIB GEN_FRAME byte F_00e3d0a0(void)
{
  GEN_ENTER(0xe3d0a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d0b0 */
GEN_LIB GEN_FRAME uint F_00e3d0b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d0b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d0e0 */
GEN_LIB GEN_FRAME byte F_00e3d0e0(void)
{
  GEN_ENTER(0xe3d0e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d0f0 */
GEN_LIB GEN_FRAME uint F_00e3d0f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d120 */
GEN_LIB GEN_FRAME byte F_00e3d120(void)
{
  GEN_ENTER(0xe3d120u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d130 */
GEN_LIB GEN_FRAME uint F_00e3d130(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d190 */
GEN_LIB GEN_FRAME uint F_00e3d190(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d1b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d1d0 */
GEN_LIB GEN_FRAME byte F_00e3d1d0(void)
{
  GEN_ENTER(0xe3d1d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d1f0 */
GEN_LIB GEN_FRAME uint F_00e3d1f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e3d240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d240(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * piVar1;
  
  piVar1 = param_1 - 0x10;
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)piVar1 + 4))) - 0x10))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d280(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x1157734));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d2b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3d2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e3d2f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3d2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3d2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(this GEN_EDX_FWD);
  uVar1 = F_00479ae0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e3d310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3d310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * pbVar1;
  byte * pbVar2;
  
  pbVar1 = ((byte *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x20)))));
  if (pbVar1 == ((byte *)GEN_TOP(0x0))) {
    return 0xffffffff;
  }
  if (pbVar1 < pbVar1 + **((int * PTR32 *)GEN_TOP(((int)this + 0x30)))) {
    return (uint)*pbVar1;
  }
  if ((((*((byte *)GEN_TOP(((int)this + 0x40))) & 4) == 0) &&
      (pbVar2 = ((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))), pbVar2 != ((byte *)GEN_TOP(0x0)))) &&
     ((pbVar1 < pbVar2 || (pbVar1 < *((byte * PTR32 *)GEN_TOP(((int)this + 0x3c))))))) {
    if (*((byte * PTR32 *)GEN_TOP(((int)this + 0x3c))) < pbVar2) {
      *((byte * PTR32 *)GEN_TOP(((int)this + 0x3c))) = pbVar2;
    }
    **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
    return (uint)*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)))));
  }
  return 0xffffffff;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe3d380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if ((uVar2 != 0) && (*((uint *)GEN_TOP(((int)this + 0x3c))) < uVar2)) {
    *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar2;
  }
  uVar2 = param_3;
  uVar6 = param_2;
  if ((((byte)param_5 & 1) == 0) || (iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))), iVar7 == 0)) {
    if ((((byte)param_5 & 2) == 0) || (uVar3 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))), uVar3 == 0)) {
      if (param_2 == 0 && param_3 == 0) goto LAB_00e3d51d;
    }
    else {
      if (param_4 == 2) {
        uVar2 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        uVar6 = param_2 + uVar2;
        uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else if (param_4 == 1) {
        uVar2 = uVar3 - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        uVar6 = param_2 + uVar2;
        uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else if (param_4 != 0) {
        uVar2 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
      if (-1 < (int)uVar2) {
        uVar4 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        iVar7 = (int)uVar4 >> 0x1f;
        if (((int)uVar2 <= iVar7) && (((int)uVar2 < iVar7 || (uVar6 <= uVar4)))) {
          iVar7 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - uVar3) + uVar6;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - iVar7;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + iVar7;
          goto LAB_00e3d51d;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
      uVar6 = param_2 + uVar2;
      uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
    }
    else if (param_4 == 1) {
      if (((byte)param_5 & 2) == 0) {
        uVar2 = iVar7 - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        uVar6 = param_2 + uVar2;
        uVar2 = param_3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else {
LAB_00e3d3f1: ;
        uVar2 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
    }
    else if (param_4 != 0) goto LAB_00e3d3f1;
    if (-1 < (int)uVar2) {
      uVar3 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar2 <= iVar5) && (((int)uVar2 < iVar5 || (uVar6 <= uVar3)))) {
        iVar7 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - iVar7) + uVar6;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) - iVar7;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + iVar7;
        if ((((byte)param_5 & 2) != 0) && (iVar7 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))), iVar7 != 0)) {
          iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
          iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = iVar1;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (iVar5 + iVar7) - iVar1;
        }
        goto LAB_00e3d51d;
      }
    }
  }
  uVar2 = REFG(undefined4, 0x1118764);
  uVar6 = REFG(undefined4, 0x1118760);
LAB_00e3d51d: ;
  *param_1 = uVar6;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(uint param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe3d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(uint param_8 = (uint)gen_a8;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = param_4 + param_2;
  uVar7 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
  uVar6 = ((int)param_4 >> 0x1f) + param_3 + (uint)CARRY4(param_4,param_2);
  if ((uVar7 != 0) && (*((uint *)GEN_TOP(((int)this + 0x3c))) < uVar7)) {
    *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar7;
  }
  if ((uVar8 != REFG(undefined4, 0x1118760)) || (uVar7 = uVar6, uVar9 = uVar8, uVar6 != REFG(undefined4, 0x1118764))) {
    uVar7 = REFG(undefined4, 0x1118764);
    uVar9 = REFG(undefined4, 0x1118760);
    if (((param_8 & 1) == 0) || (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) == 0)) {
      if ((((param_8 & 2) != 0) && (uVar3 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))), uVar3 != 0)) &&
         (-1 < (int)uVar6)) {
        uVar4 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
        iVar5 = (int)uVar4 >> 0x1f;
        if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar8 <= uVar4)))) {
          iVar5 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - uVar3) + uVar8;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - iVar5;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + iVar5;
          uVar7 = uVar6;
          uVar9 = uVar8;
        }
      }
    }
    else if (-1 < (int)uVar6) {
      uVar3 = *((int *)GEN_TOP(((int)this + 0x3c))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar8 <= uVar3)))) {
        iVar5 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x20)))) + uVar8;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) - iVar5;
        **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + iVar5;
        uVar7 = uVar6;
        uVar9 = uVar8;
        if (((param_8 & 2) != 0) && (iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))), iVar5 != 0)) {
          iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
          iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
          **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = iVar1;
          **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (iVar2 + iVar5) - iVar1;
        }
      }
    }
  }
  *param_1 = uVar9;
  param_1[1] = uVar7;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int * piVar2;
  undefined1 * puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 8) != 0) {
    uVar7 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
    if ((uVar7 != 0) && (uVar4 = *((uint *)GEN_TOP(((int)this + 0x3c))), uVar7 < uVar4)) {
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))) = uVar4;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (iVar1 + uVar7) - uVar4;
    }
  }
  if (param_1 == 0xffffffff) {
    return 0;
  }
  uVar7 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if ((uVar7 != 0) && (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34))), uVar7 < *piVar2 + uVar7)) {
    *piVar2 = *piVar2 - 1;
    goto LAB_00e3d7ed;
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 2) != 0) {
    return 0xffffffff;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - **((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) + uVar7;
  }
  uVar4 = uVar7 >> 1;
  if (uVar4 < 0x20) {
    uVar4 = 0x20;
  }
  else if (uVar4 == 0) {
    return 0xffffffff;
  }
  do {
    if (uVar7 <= 0x7fffffff - uVar4) break;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  iVar5 = uVar4 + uVar7;
  uVar4 = F_00a15a50(iVar5);
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if ((uVar7 == 0) || (F_00c46aa0(uVar4,iVar1,uVar7), uVar7 == 0)) {
    *((uint *)GEN_TOP(((int)this + 0x3c))) = uVar4;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x14))) = uVar4;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x24))) = uVar4;
    **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = iVar5;
    if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 4) != 0) goto LAB_00e3d79d;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = uVar4;
    **((uint * PTR32 *)GEN_TOP(((int)this + 0x20))) = uVar4;
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))) = 1;
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x3c))) = *((int *)GEN_TOP(((int)this + 0x3c))) + (uVar4 - iVar1);
    iVar6 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24)));
    **((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + (uVar4 - iVar1);
    iVar6 = (iVar6 - iVar1) + uVar4;
    **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = iVar6;
    **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (uVar4 - iVar6) + iVar5;
    if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 4) == 0) {
      iVar5 = **((int * PTR32 *)GEN_TOP(((int)this + 0x24)));
      iVar6 = (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) - iVar1) + uVar4;
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = uVar4;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = iVar6;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = (iVar5 - iVar6) + 1;
    }
    else {
LAB_00e3d79d: ;
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = uVar4;
      **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))) = 0;
      **((uint * PTR32 *)GEN_TOP(((int)this + 0x30))) = uVar4;
    }
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x40))) & 1) != 0) {
    F_00406ad0(iVar1);
  }
  *((uint *)GEN_TOP(((int)this + 0x40))) = *((uint *)GEN_TOP(((int)this + 0x40))) | 1;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - 1;
LAB_00e3d7ed: ;
  puVar3 = ((undefined1 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x24)))));
  **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = (int)(puVar3 + 1);
  *puVar3 = (char)param_1;
  return param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if ((uVar1 != 0) && (**((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) < uVar1)) {
    if ((param_1 == 0xffffffff) ||
       (((char)param_1 == *((char *)GEN_TOP((uVar1 - 1))) || ((*((byte *)GEN_TOP(((int)this + 0x40))) & 2) == 0)))) {
      **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 1;
      **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x20))) - 1;
      if (param_1 != 0xffffffff) {
        *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))))) = (char)param_1;
        return param_1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d8a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(param_1 GEN_EDX_FWD);
  F_00479ae0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d8f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d900(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d910 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e3d910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e3d930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e3d930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe3d930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d940 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3d940(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3d950 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e3d950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe3d950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

