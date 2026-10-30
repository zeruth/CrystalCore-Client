#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0106ad20 */
GEN_LIB GEN_FRAME uint F_0106ad20(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x106ad20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  if (0x17 < param_2) {
    uVar1 = *param_1;
    *param_1 = param_1[3];
    uVar2 = param_1[2];
    param_1[3] = uVar1;
    param_1[2] = param_1[1];
    param_1[1] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    param_1[4] = uVar1;
    uVar1 = param_1[6];
    param_1[6] = param_1[5];
    param_1[5] = uVar1;
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (param_2 != 0) {
    uVar4 = F_0106ac70(param_1,param_2,param_3);
  }
  return uVar4;
}

/* ref: FUN_0106adc0 */
GEN_LIB GEN_FRAME uint F_0106adc0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106adc0u, gen_a0, gen_a1, 0u, 0u);
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
  return 0x10;
}

/* ref: FUN_0106ae80 */
GEN_LIB GEN_FRAME uint F_0106ae80(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106ae80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[3];
  param_1[3] = param_1[2];
  param_1[2] = uVar1;
  uVar3 = 4;
  if (0x17 < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_0106af20 */
GEN_LIB GEN_FRAME uint F_0106af20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106af20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (-(uint)(param_2 < 0x1b) & 0xffffffe6) + 0x1b;
}

/* ref: FUN_0106af40 */
GEN_LIB GEN_FRAME uint F_0106af40(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106af40u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  if (param_2 < 0x24) {
    return 0x20;
  }
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  if (param_2 < 0x26) {
    return 0x24;
  }
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x25];
  param_1[0x25] = uVar1;
  if (param_2 < 0x2c) {
    return 0x28;
  }
  uVar1 = param_1[0x28];
  param_1[0x28] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  if (param_2 < 0x30) {
    return 0x2c;
  }
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  return 0x30;
}

/* ref: FUN_0106b0e0 */
GEN_LIB GEN_FRAME uint F_0106b0e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  uVar5 = 4;
  if (param_2 < 0x20) {
    if (param_2 < 5) goto LAB_0106b14a;
    uVar5 = F_0105e000(param_2 - 4,param_1 + 4);
  }
  else {
    uVar5 = 0;
    iVar6 = 0xe;
    do {
      uVar1 = param_1[uVar5 + 4];
      param_1[uVar5 + 4] = param_1[uVar5 + 5];
      param_1[uVar5 + 5] = uVar1;
      uVar5 = uVar5 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  uVar5 = uVar5 + 4;
LAB_0106b14a: ;
  if (param_2 < uVar5 + 0x1c) {
    if (uVar5 < param_2) {
      uVar4 = F_0105e000(param_2 - uVar5,param_1 + 0x20);
      uVar5 = uVar5 + uVar4;
    }
    return uVar5;
  }
  iVar3 = 0;
  iVar6 = 0xe;
  do {
    uVar1 = param_1[iVar3 + 0x20];
    param_1[iVar3 + 0x20] = param_1[iVar3 + 0x21];
    param_1[iVar3 + 0x21] = uVar1;
    iVar3 = iVar3 + 2;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  return uVar5 + iVar3;
}

/* ref: FUN_0106b1a0 */
GEN_LIB GEN_FRAME uint F_0106b1a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b1a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106b200 */
GEN_LIB GEN_FRAME uint F_0106b200(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b200u, gen_a0, gen_a1, 0u, 0u);
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
  return 5;
}

/* ref: FUN_0106b230 */
GEN_LIB GEN_FRAME uint F_0106b230(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b230u, gen_a0, gen_a1, 0u, 0u);
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
  return 9;
}

/* ref: FUN_0106b290 */
GEN_LIB GEN_FRAME uint F_0106b290(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b290u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106b2c0 */
GEN_LIB GEN_FRAME uint F_0106b2c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 4 <= param_2) {
    uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10))) = uVar1;
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_0106b310 */
GEN_LIB GEN_FRAME uint F_0106b310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 4 <= param_2) {
    uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb))) = uVar1;
    uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10)));
    *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10))) = uVar1;
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}

/* ref: FUN_0106b360 */
GEN_LIB GEN_FRAME uint F_0106b360(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b360u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106b430 */
GEN_LIB GEN_FRAME uint F_0106b430(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b430u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106b500 */
GEN_LIB GEN_FRAME uint F_0106b500(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106b530 */
GEN_LIB GEN_FRAME uint F_0106b530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (7 < param_2) {
    uVar3 = F_0105df60(8,param_1);
    uVar4 = uVar3;
    if (uVar3 + 4 <= param_2) {
      uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb)));
      *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xb))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8)));
      *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 8))) = uVar1;
      uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10)));
      *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 10))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9)));
      *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 9))) = uVar1;
      uVar4 = uVar3 + 4;
      if (uVar3 + 8 <= param_2) {
        uVar1 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xc)));
        *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xc))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xf)));
        uVar2 = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xe)));
        *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xf))) = uVar1;
        *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xe))) = *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xd)));
        *((undefined1 *)GEN_TOP((((int)(uint)(param_1)) + 0xd))) = uVar2;
        uVar4 = uVar3 + 9;
      }
    }
    return uVar4;
  }
  return 0;
}

/* ref: FUN_0106b5a0 */
GEN_LIB GEN_FRAME uint F_0106b5a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b630 */
GEN_LIB GEN_FRAME uint F_0106b630(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b6e0 */
GEN_LIB GEN_FRAME uint F_0106b6e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b790 */
GEN_LIB GEN_FRAME uint F_0106b790(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b840 */
GEN_LIB GEN_FRAME uint F_0106b840(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b8f0 */
GEN_LIB GEN_FRAME uint F_0106b8f0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b9a0 */
GEN_LIB GEN_FRAME uint F_0106b9a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106b9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106ba50 */
GEN_LIB GEN_FRAME uint F_0106ba50(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106ba50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bb00 */
GEN_LIB GEN_FRAME uint F_0106bb00(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106bb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bbb0 */
GEN_LIB GEN_FRAME uint F_0106bbb0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106bbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bc40 */
GEN_LIB GEN_FRAME uint F_0106bc40(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106bc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bcf0 */
GEN_LIB GEN_FRAME uint F_0106bcf0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106bcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bda0 */
GEN_LIB GEN_FRAME uint F_0106bda0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106bda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106be50 */
GEN_LIB GEN_FRAME uint F_0106be50(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106be50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bf00 */
GEN_LIB GEN_FRAME uint F_0106bf00(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106bf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bfb0 */
GEN_LIB GEN_FRAME uint F_0106bfb0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106bfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c060 */
GEN_LIB GEN_FRAME uint F_0106c060(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c110 */
GEN_LIB GEN_FRAME uint F_0106c110(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c1c0 */
GEN_LIB GEN_FRAME uint F_0106c1c0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c1c0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 8 - (param_2 < 8);
}

/* ref: FUN_0106c210 */
GEN_LIB GEN_FRAME uint F_0106c210(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c210u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0xf) & 0xfffffff8) + 0xf;
}

/* ref: FUN_0106c270 */
GEN_LIB GEN_FRAME uint F_0106c270(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c270u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x17) & 0xfffffff0) + 0x17;
}

/* ref: FUN_0106c2d0 */
GEN_LIB GEN_FRAME uint F_0106c2d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c2d0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x27) & 0xffffffe0) + 0x27;
}

/* ref: FUN_0106c330 */
GEN_LIB GEN_FRAME uint F_0106c330(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 0x10) {
    return 8;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar2 + 8;
  if (uVar2 + 0x28 <= param_2) {
    uVar3 = uVar2 + 0x28;
  }
  return uVar3;
}

/* ref: FUN_0106c3a0 */
GEN_LIB GEN_FRAME uint F_0106c3a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c3a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c3d0 */
GEN_LIB GEN_FRAME uint F_0106c3d0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106c4a0 */
GEN_LIB GEN_FRAME uint F_0106c4a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c4a0u, gen_a0, gen_a1, 0u, 0u);
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
  return 0x10;
}

/* ref: FUN_0106c550 */
GEN_LIB GEN_FRAME uint F_0106c550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (-(uint)(param_2 < 0x800) & 0xfffff800) + 0x800;
}

/* ref: FUN_0106c570 */
GEN_LIB GEN_FRAME uint F_0106c570(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 4;
}

/* ref: FUN_0106c5a0 */
GEN_LIB GEN_FRAME uint F_0106c5a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  return uVar2 + 4;
}

/* ref: FUN_0106c5e0 */
GEN_LIB GEN_FRAME uint F_0106c5e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *((undefined1 *)GEN_TOP((param_1 + 2)));
  *((undefined1 *)GEN_TOP((param_1 + 2))) = *((undefined1 *)GEN_TOP((param_1 + 3)));
  *((undefined1 *)GEN_TOP((param_1 + 3))) = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  return uVar2 + 4;
}

/* ref: FUN_0106c630 */
GEN_LIB GEN_NOFRAME uint F_0106c630(void)
{
  GEN_ENTER(0x106c630u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c640 */
GEN_LIB GEN_FRAME uint F_0106c640(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 2;
  if (0xb < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 2 + iVar4)));
      *((undefined1 *)GEN_TOP((param_1 + 2 + iVar4))) = *((undefined1 *)GEN_TOP((param_1 + 3 + iVar4)));
      *((undefined1 *)GEN_TOP((param_1 + 3 + iVar4))) = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 4;
  }
  if (2 < param_2) {
    iVar5 = 0;
    for (uVar3 = param_2 - 2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 2 + iVar5)));
      *((undefined1 *)GEN_TOP((param_1 + 2 + iVar5))) = *((undefined1 *)GEN_TOP((param_1 + 3 + iVar5)));
      *((undefined1 *)GEN_TOP((param_1 + 3 + iVar5))) = uVar1;
      iVar5 = iVar5 + 2;
    }
    uVar3 = iVar5 + 2;
  }
  return uVar3;
}

/* ref: FUN_0106c6b0 */
GEN_LIB GEN_FRAME uint F_0106c6b0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c6b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c6e0 */
GEN_LIB GEN_FRAME uint F_0106c6e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c6e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c740 */
GEN_LIB GEN_NOFRAME uint F_0106c740(void)
{
  GEN_ENTER(0x106c740u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0106c750 */
GEN_LIB GEN_FRAME uint F_0106c750(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_0106c780 */
GEN_LIB GEN_NOFRAME uint F_0106c780(void)
{
  GEN_ENTER(0x106c780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c790 */
GEN_LIB GEN_NOFRAME uint F_0106c790(void)
{
  GEN_ENTER(0x106c790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c7a0 */
GEN_LIB GEN_FRAME uint F_0106c7a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 4;
  if (0x13 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 4 + iVar4)));
      *((undefined1 *)GEN_TOP((param_1 + 4 + iVar4))) = *((undefined1 *)GEN_TOP((param_1 + 7 + iVar4)));
      *((undefined1 *)GEN_TOP((param_1 + 7 + iVar4))) = uVar1;
      uVar1 = *((undefined1 *)GEN_TOP((param_1 + 5 + iVar4)));
      *((undefined1 *)GEN_TOP((param_1 + 5 + iVar4))) = *((undefined1 *)GEN_TOP((param_1 + 6 + iVar4)));
      *((undefined1 *)GEN_TOP((param_1 + 6 + iVar4))) = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_0106c810 */
GEN_LIB GEN_FRAME uint F_0106c810(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c810u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c870 */
GEN_LIB GEN_NOFRAME uint F_0106c870(void)
{
  GEN_ENTER(0x106c870u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c880 */
GEN_LIB GEN_NOFRAME uint F_0106c880(void)
{
  GEN_ENTER(0x106c880u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c890 */
GEN_LIB GEN_FRAME uint F_0106c890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106c890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return param_3;
}

/* ref: FUN_0106c8a0 */
GEN_LIB GEN_FRAME uint F_0106c8a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c8a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c930 */
GEN_LIB GEN_FRAME uint F_0106c930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x106c930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return param_2;
}

/* ref: RecvCallbackInterface_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106c970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0106c9b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0106c9b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x106c9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  return;
}

/* ref: FUN_0106c9c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0106c9c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x106c9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[249])REFP(0x12b5334));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106c9d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106c9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106ca00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x106ca00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0xc))) + 0x24)));
  if (*((ushort *)GEN_TOP((uVar1 + 2))) - 0x65 < 0x287) {
                    
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x106e474) + *((ushort *)GEN_TOP((uVar1 + 2))) + 3))))) {
    case 0: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 1: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 3: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 4: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 5: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 7: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 8: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 9: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 10: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x10: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x11: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x12: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x13: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x14: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x15: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x16: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x17: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x18: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x19: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x20: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x21: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x8c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x22: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x90))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x23: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x94))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x24: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x25: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x26: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x27: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x28: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x29: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xbc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x30: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x31: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x32: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x33: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x34: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x35: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xdc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x36: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x37: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x38: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x39: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xec))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x40: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x41: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x42: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x43: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x114))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x44: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x118))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x45: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x46: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x120))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x47: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x124))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x48: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x128))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x49: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 300))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x130))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x134))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x138))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x13c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x140))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x144))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x50: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x148))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x51: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x52: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x150))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x53: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x154))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x54: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x158))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x55: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x56: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x160))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x57: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x164))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x58: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x168))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x59: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x16c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x170))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x174))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x178))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x17c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x180))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x184))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x60: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x188))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x61: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x62: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 400))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 99: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x194))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 100: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x198))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x65: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x19c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x66: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1a0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x67: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1a4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x68: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1a8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x69: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1ac))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1b0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1b4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1b8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1bc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x70: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x71: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1cc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x72: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1d0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x73: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1d4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x74: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1d8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x75: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1dc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x76: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1e0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x77: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1e4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x78: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1e8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x79: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1ec))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1f0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 500))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1f8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1fc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x200))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x204))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x80: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x208))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x81: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x82: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x210))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x83: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x214))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x84: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x218))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x85: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x21c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x86: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x220))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x87: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x224))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x88: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x228))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x89: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x22c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x230))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x234))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x238))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x23c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x240))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x244))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x90: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x248))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x91: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x92: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x250))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x93: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x254))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x94: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 600))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x95: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x25c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x96: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x260))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x97: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x264))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x98: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x268))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x99: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x26c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9a: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x270))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9b: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x274))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9c: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x278))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9d: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x27c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9e: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x280))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9f: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x284))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa0: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x288))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa1: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x290))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa3: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x294))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa4: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x298))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa5: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x29c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2a0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa7: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2a4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa8: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2a8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa9: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2ac))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaa: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2b0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xab: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2b4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xac: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2b8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xad: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 700))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xae: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaf: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb0: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb1: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2cc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2d0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb3: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2d4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb4: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2d8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb5: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2dc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2e0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb7: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2e4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb8: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2e8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb9: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2ec))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xba: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2f0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbb: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2f4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbc: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2f8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbd: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2fc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbe: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x300))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbf: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x304))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc0: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x308))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc1: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x310))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc3: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x314))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc4: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x318))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc5: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x31c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 800))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 199: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x324))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 200: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x328))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc9: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x32c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xca: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x330))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcb: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x334))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcc: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x338))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcd: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x33c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xce: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x340))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcf: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x344))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd0: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd1: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x348))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x350))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd3: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x354))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd4: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x358))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd5: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x35c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x360))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd7: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x364))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd8: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x368))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd9: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x36c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xda: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x370))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdb: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x374))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdc: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x378))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdd: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x37c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xde: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x380))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdf: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 900))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe0: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x388))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe1: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x390))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe3: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x394))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe4: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x398))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe5: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x39c))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3a0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe7: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3a4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe8: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3a8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe9: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3ac))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xea: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3b0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xeb: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3b4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xec: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3b8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xed: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3bc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xee: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xef: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf0: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf1: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3cc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf2: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3d0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf3: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3d4))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf4: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3d8))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf5: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3dc))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf6: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3e0))))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    }
  }
  return uVar1;
}

/* ref: FUN_0106f8a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106f8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x106f8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_01050d30(this GEN_EDX_FWD,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0106f8d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x106f8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106f8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x106f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  F_0106c890((uint)*((ushort *)GEN_TOP((param_1 + 2))),param_1 + 0x10,param_2 - 0x10,0);
  uVar1 = F_0106c930(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0106f940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x106f940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0106f950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x106f950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: PacketBufferTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106f960(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106f960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106f990(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106f990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0106f9d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0106f9d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x106f9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106fa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x106fa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  __time64_t _Var1;
  
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *((undefined2 *)GEN_TOP(((int)param_1 + 2))) = *(undefined2 *)(this + 0x30);
  *((undefined1 *)GEN_TOP(((int)param_1 + 1))) = 0;
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  param_1[2] = (uint)_Var1;
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = *(undefined2 *)(this + 0x34);
  return (uint)_Var1;
}

/* ref: FUN_0106fa60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0106fa60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x106fa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: FUN_0106fa90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0106fa90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x106fa90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  return;
}

/* ref: FUN_0106fab0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0106fab0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x106fab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5738));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoUpPacketBuilder::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106fae0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106fae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0106fb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106fb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x106fb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,param_2,param_4);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3[1];
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106fb80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x106fb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  param_1[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0106fbc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0106fbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x106fbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,param_2,param_3);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x34))) = 0;
  return (uint)this;
}

/* ref: Unwind@0106fc20 */
GEN_LIB GEN_NOFRAME uint F_0106fc20(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c45be8(((undefined *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc28 */
GEN_LIB GEN_NOFRAME uint F_0106fc28(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fc28u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5cbc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc43 */
GEN_LIB GEN_NOFRAME uint F_0106fc43(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fc43u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c45be8(((undefined *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc4b */
GEN_LIB GEN_NOFRAME uint F_0106fc4b(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fc4bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5ce8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc66 */
GEN_LIB GEN_NOFRAME uint F_0106fc66(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fc66u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c45be8(((undefined *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc6e */
GEN_LIB GEN_NOFRAME uint F_0106fc6e(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fc6eu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d14)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc89 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fc89(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fc89u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00478e10(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fc91 */
GEN_LIB GEN_NOFRAME uint F_0106fc91(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fc91u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00479860(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x18))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc9c */
GEN_LIB GEN_NOFRAME uint F_0106fc9c(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fc9cu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d48)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fcb7 */
GEN_LIB GEN_NOFRAME uint F_0106fcb7(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fcb7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c45be8(((undefined *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fcbf */
GEN_LIB GEN_NOFRAME uint F_0106fcbf(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fcbfu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_0106fcda */
GEN_LIB GEN_NOFRAME uint F_0106fcda(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fcdau, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f69e0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd00 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fd00(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fd08 */
GEN_LIB GEN_NOFRAME uint F_0106fd08(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fd08u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c0c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd30 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fd30(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fd38 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fd38(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fd38u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb20a0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fd40 */
GEN_LIB GEN_NOFRAME uint F_0106fd40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c40)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd60 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fd60(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fd68 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fd68(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fd68u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb20a0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fd70 */
GEN_LIB GEN_NOFRAME uint F_0106fd70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd90 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fd90(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fd98 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fd98(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fd98u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb20a0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fda0 */
GEN_LIB GEN_NOFRAME uint F_0106fda0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ca8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fdc0 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fdc0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1870(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fdc8 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fdc8(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fdc8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1a30(*((int *)GEN_TOP((in_ebp - 0x10))) + 4 GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fdd3 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fdd3(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fdd3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fdde */
GEN_LIB GEN_NOFRAME uint F_0106fdde(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fddeu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb3020(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x20))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fde9 */
GEN_LIB GEN_NOFRAME uint F_0106fde9(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fde9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb3070(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x3c))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fdf4 */
GEN_LIB GEN_NOFRAME uint F_0106fdf4(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fdf4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb30c0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x58))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fdff */
GEN_LIB GEN_NOFRAME uint F_0106fdff(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fdffu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb30d0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x3f0))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fe0d */
GEN_LIB GEN_NOFRAME uint F_0106fe0d(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fe0du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ccc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fe30 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fe30(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fe30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x128))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe3b */
GEN_LIB GEN_NOFRAME unsigned int F_0106fe3b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fe3bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb20a0(((undefined *)GEN_TOP((in_ebp - 0x128))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe46 */
GEN_LIB GEN_NOFRAME uint F_0106fe46(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fe46u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x140))));
  return uVar1;
}

/* ref: FUN_0106fe54 */
GEN_LIB GEN_NOFRAME uint F_0106fe54(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fe54u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6d40)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fe80 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fe80(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1870(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe88 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fe88(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fe88u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1a30(*((int *)GEN_TOP((in_ebp - 0x10))) + 4 GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe93 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fe93(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fe93u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe9e */
GEN_LIB GEN_NOFRAME uint F_0106fe9e(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fe9eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb3020(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x20))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fea9 */
GEN_LIB GEN_NOFRAME uint F_0106fea9(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fea9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb3070(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x3c))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106feb4 */
GEN_LIB GEN_NOFRAME uint F_0106feb4(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106feb4u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6d64)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fed0 */
GEN_LIB GEN_NOFRAME uint F_0106fed0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb5b50(((undefined *)GEN_TOP((in_ebp - 0x1c))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fed8 */
GEN_LIB GEN_NOFRAME unsigned int F_0106fed8(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fed8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  F_00cb5a10();
  return;
}

/* ref: FUN_0106fee0 */
GEN_LIB GEN_NOFRAME uint F_0106fee0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6dc0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff00 */
GEN_LIB GEN_NOFRAME uint F_0106ff00(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106ff00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x10))));
  return uVar1;
}

/* ref: FUN_0106ff0b */
GEN_LIB GEN_NOFRAME uint F_0106ff0b(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106ff0bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6dec)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff30 */
GEN_LIB GEN_NOFRAME unsigned int F_0106ff30(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106ff30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb4af0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106ff3b */
GEN_LIB GEN_NOFRAME uint F_0106ff3b(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106ff3bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e18)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff60 */
GEN_LIB GEN_NOFRAME uint F_0106ff60(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106ff60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb2a00(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106ff68 */
GEN_LIB GEN_NOFRAME uint F_0106ff68(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106ff68u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e44)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff90 */
GEN_LIB GEN_NOFRAME uint F_0106ff90(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106ff90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb2a00(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106ff98 */
GEN_LIB GEN_NOFRAME uint F_0106ff98(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106ff98u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e70)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ffc0 */
GEN_LIB GEN_NOFRAME uint F_0106ffc0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106ffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb2a00(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106ffc8 */
GEN_LIB GEN_NOFRAME uint F_0106ffc8(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106ffc8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e9c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fff0 */
GEN_LIB GEN_NOFRAME uint F_0106fff0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x106fff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb2a00(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fff8 */
GEN_LIB GEN_NOFRAME uint F_0106fff8(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x106fff8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ec8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070020 */
GEN_LIB GEN_NOFRAME unsigned int F_01070020(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070028 */
GEN_LIB GEN_NOFRAME uint F_01070028(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070028u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ef4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070050 */
GEN_LIB GEN_NOFRAME unsigned int F_01070050(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070058 */
GEN_LIB GEN_NOFRAME unsigned int F_01070058(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070058u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070063 */
GEN_LIB GEN_NOFRAME uint F_01070063(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070063u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6f28)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070080 */
GEN_LIB GEN_NOFRAME unsigned int F_01070080(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb62e0(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070088 */
GEN_LIB GEN_NOFRAME uint F_01070088(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070088u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb5e70(*((undefined4 *)GEN_TOP((in_ebp + 8))));
  return uVar1;
}

/* ref: Unwind@010700b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010700b0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10700b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010700b8 */
GEN_LIB GEN_NOFRAME unsigned int F_010700b8(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10700b8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010700c3 */
GEN_LIB GEN_NOFRAME uint F_010700c3(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10700c3u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6f90)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010700e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010700e0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10700e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010700e8 */
GEN_LIB GEN_NOFRAME uint F_010700e8(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10700e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6fbc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070110 */
GEN_LIB GEN_NOFRAME unsigned int F_01070110(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x18))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070118 */
GEN_LIB GEN_NOFRAME unsigned int F_01070118(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070118u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb20a0(((undefined *)GEN_TOP((in_ebp - 0x18))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070120 */
GEN_LIB GEN_NOFRAME uint F_01070120(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ff0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070140 */
GEN_LIB GEN_NOFRAME uint F_01070140(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x14))));
  return uVar1;
}

/* ref: Unwind@0107014b */
GEN_LIB GEN_NOFRAME unsigned int F_0107014b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107014bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070153 */
GEN_LIB GEN_NOFRAME unsigned int F_01070153(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070153u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x14))) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107015e */
GEN_LIB GEN_NOFRAME uint F_0107015e(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x107015eu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f702c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070180 */
GEN_LIB GEN_NOFRAME unsigned int F_01070180(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb62e0(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070188 */
GEN_LIB GEN_NOFRAME uint F_01070188(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070188u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7058)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010701b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010701b0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10701b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb62e0(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010701b8 */
GEN_LIB GEN_NOFRAME uint F_010701b8(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10701b8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7084)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010701e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010701e0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10701e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010701e8 */
GEN_LIB GEN_NOFRAME uint F_010701e8(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10701e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f70b0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070210 */
GEN_LIB GEN_NOFRAME uint F_01070210(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb5fd0(in_ebp - 0x140);
  return uVar1;
}

/* ref: Unwind@0107021b */
GEN_LIB GEN_NOFRAME uint F_0107021b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107021bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb5fd0(in_ebp - 0x248);
  return uVar1;
}

/* ref: Unwind@01070226 */
GEN_LIB GEN_NOFRAME unsigned int F_01070226(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070226u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x18))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0107022e */
GEN_LIB GEN_NOFRAME unsigned int F_0107022e(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107022eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x20))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070236 */
GEN_LIB GEN_NOFRAME unsigned int F_01070236(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070236u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x34))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0107023e */
GEN_LIB GEN_NOFRAME unsigned int F_0107023e(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107023eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x2c))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070246 */
GEN_LIB GEN_NOFRAME uint F_01070246(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070246u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb6940(((undefined *)GEN_TOP((in_ebp - 0x34))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0107024e */
GEN_LIB GEN_NOFRAME uint F_0107024e(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107024eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x38))));
  return uVar1;
}

/* ref: Unwind@01070259 */
GEN_LIB GEN_NOFRAME unsigned int F_01070259(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070259u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x38))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070261 */
GEN_LIB GEN_NOFRAME unsigned int F_01070261(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070261u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x38))) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0107026c */
GEN_LIB GEN_NOFRAME unsigned int F_0107026c(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107026cu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x34))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070274 */
GEN_LIB GEN_NOFRAME uint F_01070274(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070274u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f70d4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010702a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010702a0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10702a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010702a8 */
GEN_LIB GEN_NOFRAME unsigned int F_010702a8(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10702a8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb20a0(((undefined *)GEN_TOP((in_ebp - 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010702b0 */
GEN_LIB GEN_NOFRAME uint F_010702b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10702b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7160)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010702d0 */
GEN_LIB GEN_NOFRAME uint F_010702d0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10702d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb2a30(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010702d8 */
GEN_LIB GEN_NOFRAME unsigned int F_010702d8(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10702d8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb5f00(*((int *)GEN_TOP((in_ebp - 0x10))) + 0xc GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010702e3 */
GEN_LIB GEN_NOFRAME unsigned int F_010702e3(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10702e3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010702ee */
GEN_LIB GEN_NOFRAME uint F_010702ee(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10702eeu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb8370(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x34))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010702f9 */
GEN_LIB GEN_NOFRAME uint F_010702f9(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10702f9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7d90(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x44))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@01070304 */
GEN_LIB GEN_NOFRAME uint F_01070304(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070304u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb69e0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x68))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0107030f */
GEN_LIB GEN_NOFRAME unsigned int F_0107030f(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107030fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb6a40(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x84))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107031d */
GEN_LIB GEN_NOFRAME uint F_0107031d(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x107031du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7184)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070340 */
GEN_LIB GEN_NOFRAME unsigned int F_01070340(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb62e0(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070348 */
GEN_LIB GEN_NOFRAME uint F_01070348(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070348u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7bc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01070353 */
GEN_LIB GEN_NOFRAME uint F_01070353(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070353u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f71f0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070370 */
GEN_LIB GEN_NOFRAME unsigned int F_01070370(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb8750(in_ebp + 0xc GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070378 */
GEN_LIB GEN_NOFRAME uint F_01070378(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070378u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7ab0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01070380 */
GEN_LIB GEN_NOFRAME uint F_01070380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7224)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010703a0 */
GEN_LIB GEN_NOFRAME uint F_010703a0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10703a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x10))));
  return uVar1;
}

/* ref: Unwind@010703ab */
GEN_LIB GEN_NOFRAME unsigned int F_010703ab(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10703abu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb8750(in_ebp - 0x1c GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010703b3 */
GEN_LIB GEN_NOFRAME uint F_010703b3(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10703b3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7ab0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_010703bb */
GEN_LIB GEN_NOFRAME uint F_010703bb(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10703bbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7260)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010703e0 */
GEN_LIB GEN_NOFRAME uint F_010703e0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10703e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7ab0(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010703e8 */
GEN_LIB GEN_NOFRAME unsigned int F_010703e8(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10703e8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb8750(*((int *)GEN_TOP((in_ebp - 0x10))) + 0x18 GEN_EDX_ARG);
  return;
}

/* ref: FUN_010703f3 */
GEN_LIB GEN_NOFRAME uint F_010703f3(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10703f3u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7294)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070410 */
GEN_LIB GEN_NOFRAME unsigned int F_01070410(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb62e0(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070418 */
GEN_LIB GEN_NOFRAME uint F_01070418(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070418u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7bc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01070423 */
GEN_LIB GEN_NOFRAME uint F_01070423(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070423u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f72c8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070440 */
GEN_LIB GEN_NOFRAME uint F_01070440(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp + 0x10))));
  return uVar1;
}

/* ref: Unwind@0107044b */
GEN_LIB GEN_NOFRAME uint F_0107044b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107044bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp + 0x10))));
  return uVar1;
}

/* ref: Unwind@01070456 */
GEN_LIB GEN_NOFRAME uint F_01070456(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070456u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp + 0x10))));
  return uVar1;
}

/* ref: FUN_01070461 */
GEN_LIB GEN_NOFRAME uint F_01070461(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070461u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7304)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070480 */
GEN_LIB GEN_NOFRAME uint F_01070480(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb2a30(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x134))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0107048b */
GEN_LIB GEN_NOFRAME unsigned int F_0107048b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107048bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb5f00(*((int *)GEN_TOP((in_ebp - 0x134))) + 0xc GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070499 */
GEN_LIB GEN_NOFRAME unsigned int F_01070499(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070499u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x134))) + 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010704a7 */
GEN_LIB GEN_NOFRAME uint F_010704a7(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10704a7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb8370(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x134))) + 0x34))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010704b5 */
GEN_LIB GEN_NOFRAME uint F_010704b5(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10704b5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7d90(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x134))) + 0x44))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010704c3 */
GEN_LIB GEN_NOFRAME uint F_010704c3(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10704c3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb69e0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x134))) + 0x68))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010704d1 */
GEN_LIB GEN_NOFRAME unsigned int F_010704d1(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10704d1u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb6a40(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x134))) + 0x84))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010704e2 */
GEN_LIB GEN_NOFRAME uint F_010704e2(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10704e2u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x118))));
  return uVar1;
}

/* ref: Unwind@010704f0 */
GEN_LIB GEN_NOFRAME uint F_010704f0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10704f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x118))));
  return uVar1;
}

/* ref: FUN_010704fe */
GEN_LIB GEN_NOFRAME uint F_010704fe(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10704feu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7328)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070530 */
GEN_LIB GEN_NOFRAME unsigned int F_01070530(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1330(*((undefined4 *)GEN_TOP((in_ebp - 0x40))));
  return;
}

/* ref: FUN_0107053b */
GEN_LIB GEN_NOFRAME uint F_0107053b(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x107053bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f739c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070560 */
GEN_LIB GEN_NOFRAME unsigned int F_01070560(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb8740(*((undefined4 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070568 */
GEN_LIB GEN_NOFRAME uint F_01070568(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070568u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f73c8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070590 */
GEN_LIB GEN_NOFRAME uint F_01070590(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb5e70(*((undefined4 *)GEN_TOP((in_ebp + 8))));
  return uVar1;
}

/* ref: FUN_0107059b */
GEN_LIB GEN_NOFRAME uint F_0107059b(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x107059bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f73f4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010705c0 */
GEN_LIB GEN_NOFRAME uint F_010705c0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10705c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cba040(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_010705c8 */
GEN_LIB GEN_NOFRAME uint F_010705c8(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10705c8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7420)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010705f0 */
GEN_LIB GEN_NOFRAME uint F_010705f0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10705f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp + 0xc))));
  return uVar1;
}

/* ref: Unwind@010705fb */
GEN_LIB GEN_NOFRAME uint F_010705fb(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10705fbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cba040(*((undefined * PTR32 *)GEN_TOP((in_ebp + 0xc))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01070603 */
GEN_LIB GEN_NOFRAME uint F_01070603(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070603u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7454)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070620 */
GEN_LIB GEN_NOFRAME uint F_01070620(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7830(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@01070628 */
GEN_LIB GEN_NOFRAME unsigned int F_01070628(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070628u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1a30(*((int *)GEN_TOP((in_ebp - 0x10))) + 0xc GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070633 */
GEN_LIB GEN_NOFRAME uint F_01070633(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070633u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7488)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070650 */
GEN_LIB GEN_NOFRAME uint F_01070650(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb7830(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@01070658 */
GEN_LIB GEN_NOFRAME unsigned int F_01070658(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070658u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1a30(*((int *)GEN_TOP((in_ebp - 0x10))) + 0xc GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070663 */
GEN_LIB GEN_NOFRAME unsigned int F_01070663(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x1070663u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1fc0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0107066e */
GEN_LIB GEN_NOFRAME uint F_0107066e(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x107066eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cba3d0(((undefined *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x10))) + 0x34))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_01070679 */
GEN_LIB GEN_NOFRAME uint F_01070679(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x1070679u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f74cc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010706a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010706a0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10706a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00cb1330(*((undefined4 *)GEN_TOP((in_ebp - 0x58))));
  return;
}

/* ref: FUN_010706ab */
GEN_LIB GEN_NOFRAME uint F_010706ab(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10706abu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f74f8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010706d0 */
GEN_LIB GEN_NOFRAME uint F_010706d0(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10706d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cb18e0(*((undefined4 *)GEN_TOP((in_ebp - 0x114))));
  return uVar1;
}

/* ref: Unwind@010706de */
GEN_LIB GEN_NOFRAME uint F_010706de(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0x10706deu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cba040(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x114))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_010706e9 */
GEN_LIB GEN_NOFRAME uint F_010706e9(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x10706e9u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f752c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_01070720 */
GEN_LIB GEN_NOFRAME unsigned int F_01070720(void)
{
  GEN_ENTER(0x1070720u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x136fe14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x136fe14), REFG(float, 0x12fa398));
  return;
}

/* ref: FUN_01070740 */
GEN_LIB GEN_NOFRAME unsigned int F_01070740(void)
{
  GEN_ENTER(0x1070740u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x136fe18) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x136fe18), REFG(float, 0x12fa3c8));
  return;
}

/* ref: FUN_01070760 */
GEN_LIB GEN_NOFRAME uint F_01070760(void)
{
  GEN_ENTER(0x1070760u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00421920(&REFG(undefined * PTR32 * PTR32, 0x136fe20) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x136fe20) = (*(undefined * PTR32 (*)[3])REFP(0x1080270));
  uVar1 = F_00c47de6(((code *)REFP(0x107bac0)));
  return uVar1;
}

/* ref: FUN_01070780 */
GEN_LIB GEN_NOFRAME uint F_01070780(void)
{
  GEN_ENTER(0x1070780u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00421a50(&REFG(undefined * PTR32 * PTR32, 0x13700d8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x13700d8) = (*(undefined * PTR32 (*)[3])REFP(0x1080280));
  uVar1 = F_00c47de6(((code *)REFP(0x107bad0)));
  return uVar1;
}

/* ref: FUN_010707a0 */
GEN_LIB GEN_NOFRAME uint F_010707a0(void)
{
  GEN_ENTER(0x10707a0u, 0u, 0u, 0u, 0u);
  short sVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = (short)REFG(undefined4, 0x12fa648) + *(short *)&REFG(undefined, 0x1370ba0);
  sVar3 = (short)((uint)REFG(undefined4, 0x12fa648) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x1370ba0) = CONCAT22(sVar1,*(short *)&REFG(undefined, 0x1370ba0));
  sVar1 = (short)REFG(undefined4, 0x12fa64c) + sVar3;
  sVar4 = (short)((uint)REFG(undefined4, 0x12fa64c) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x1370ba4) = CONCAT22(sVar1,sVar3);
  sVar1 = (short)REFG(undefined4, 0x12fa650) + sVar4;
  sVar3 = (short)((uint)REFG(undefined4, 0x12fa650) >> 0x10) + sVar1;
  *(undefined4 *)&REFG(undefined, 0x1370ba8) = CONCAT22(sVar1,sVar4);
  *(int *)&REFG(undefined, 0x1370bac) = CONCAT22(*(undefined2 *)&REFG(undefined, 0x1370bae),sVar3);
  uVar2 = REFG(int, 0x12fa654) + *(int *)&REFG(undefined, 0x1370bac);
  *(int *)&REFG(undefined, 0x1370bac) = CONCAT22((short)uVar2,sVar3);
  return uVar2;
}

/* ref: FUN_01070820 */
GEN_LIB GEN_NOFRAME unsigned int F_01070820(void)
{
  GEN_ENTER(0x1070820u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x1370b9c) = REFG(float, 0x12fa640) * REFG(float, 0x12fa640);
  return;
}

/* ref: FUN_01070840 */
GEN_LIB GEN_NOFRAME uint F_01070840(void)
{
  GEN_ENTER(0x1070840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x1370bd4) == 0) {
    F_00405f60();
  }
  REFG(char * PTR32, 0x1370bcc) = ((char *)REFP(0x10823a4));
  uVar1 = F_00c47de6(((code *)REFP(0x107bae0)));
  return uVar1;
}

/* ref: FUN_01070870 */
GEN_LIB GEN_NOFRAME unsigned int F_01070870(void)
{
  GEN_ENTER(0x1070870u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1370c10) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1370c10), REFG(float, 0x12fc7b0));
  return;
}

/* ref: FUN_01070890 */
GEN_LIB GEN_NOFRAME unsigned int F_01070890(void)
{
  GEN_ENTER(0x1070890u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1370c14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1370c14), REFG(float, 0x12fc7e0));
  return;
}

/* ref: FUN_010708b0 */
GEN_LIB GEN_NOFRAME uint F_010708b0(void)
{
  GEN_ENTER(0x10708b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370c28) GEN_EDX_ARG,&REFG(undefined, 0x1088157),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107baf0)));
  return uVar1;
}

/* ref: FUN_010708e0 */
GEN_LIB GEN_NOFRAME uint F_010708e0(void)
{
  GEN_ENTER(0x10708e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370c80) GEN_EDX_ARG,&REFG(undefined, 0x108b178),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb00)));
  return uVar1;
}

/* ref: FUN_01070910 */
GEN_LIB GEN_NOFRAME uint F_01070910(void)
{
  GEN_ENTER(0x1070910u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370cd8) GEN_EDX_ARG,&REFG(undefined, 0x108b17c),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb10)));
  return uVar1;
}

/* ref: FUN_01070940 */
GEN_LIB GEN_NOFRAME uint F_01070940(void)
{
  GEN_ENTER(0x1070940u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370d30) GEN_EDX_ARG,&REFG(undefined, 0x108b180),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb20)));
  return uVar1;
}

/* ref: FUN_01070970 */
GEN_LIB GEN_NOFRAME uint F_01070970(void)
{
  GEN_ENTER(0x1070970u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370d88) GEN_EDX_ARG,&REFG(undefined, 0x108b184),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb30)));
  return uVar1;
}

/* ref: FUN_010709a0 */
GEN_LIB GEN_NOFRAME uint F_010709a0(void)
{
  GEN_ENTER(0x10709a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370de0) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108b188)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb40)));
  return uVar1;
}

/* ref: FUN_010709d0 */
GEN_LIB GEN_NOFRAME uint F_010709d0(void)
{
  GEN_ENTER(0x10709d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370e38) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x108b18c)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb50)));
  return uVar1;
}

/* ref: FUN_01070a00 */
GEN_LIB GEN_NOFRAME uint F_01070a00(void)
{
  GEN_ENTER(0x1070a00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370e90) GEN_EDX_ARG,&REFG(undefined, 0x108816b),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb60)));
  return uVar1;
}

/* ref: FUN_01070a30 */
GEN_LIB GEN_NOFRAME uint F_01070a30(void)
{
  GEN_ENTER(0x1070a30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370ee8) GEN_EDX_ARG,((char *)REFP(0x108b198)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb70)));
  return uVar1;
}

/* ref: FUN_01070a60 */
GEN_LIB GEN_NOFRAME uint F_01070a60(void)
{
  GEN_ENTER(0x1070a60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370f40) GEN_EDX_ARG,((char *)REFP(0x108b1a0)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb80)));
  return uVar1;
}

/* ref: FUN_01070a90 */
GEN_LIB GEN_NOFRAME uint F_01070a90(void)
{
  GEN_ENTER(0x1070a90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370f98) GEN_EDX_ARG,((char *)REFP(0x108b1b0)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb90)));
  return uVar1;
}

/* ref: FUN_01070ac0 */
GEN_LIB GEN_NOFRAME uint F_01070ac0(void)
{
  GEN_ENTER(0x1070ac0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370ff0) GEN_EDX_ARG,((char *)REFP(0x108b1b8)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bba0)));
  return uVar1;
}

/* ref: FUN_01070af0 */
GEN_LIB GEN_NOFRAME unsigned int F_01070af0(void)
{
  GEN_ENTER(0x1070af0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1371050) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1371050), REFG(float, 0x12fd048));
  return;
}

/* ref: FUN_01070b10 */
GEN_LIB GEN_NOFRAME unsigned int F_01070b10(void)
{
  GEN_ENTER(0x1070b10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1371054) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1371054), REFG(float, 0x12fd078));
  return;
}

/* ref: FUN_01070b30 */
GEN_LIB GEN_FRAME uint F_01070b30(void)
{
  GEN_ENTER(0x1070b30u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  *(DWORD *)&REFG(undefined, 0x1371058) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  *(LONG *)&REFG(undefined, 0x137105c) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
  *(undefined8 *)&REFG(undefined, 0x1371068) = 0;
  *(DWORD *)&REFG(undefined, 0x1371060) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
  *(LONG *)&REFG(undefined, 0x1371064) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
  uVar1 = F_00c47de6(((code *)REFP(0x107bbb0)));
  return uVar1;
}

/* ref: FUN_01070b90 */
GEN_LIB GEN_NOFRAME uint F_01070b90(void)
{
  GEN_ENTER(0x1070b90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bbd0)));
  return uVar1;
}

/* ref: FUN_01070ba0 */
GEN_LIB GEN_NOFRAME uint F_01070ba0(void)
{
  GEN_ENTER(0x1070ba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bbc0)));
  return uVar1;
}

/* ref: FUN_01070bb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01070bb0(void)
{
  GEN_ENTER(0x1070bb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1372348) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1372348), REFG(float, 0x12fdec0));
  return;
}

/* ref: FUN_01070bd0 */
GEN_LIB GEN_NOFRAME unsigned int F_01070bd0(void)
{
  GEN_ENTER(0x1070bd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137234c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137234c), REFG(float, 0x12fdef0));
  return;
}

/* ref: FUN_01070bf0 */
GEN_LIB GEN_NOFRAME uint F_01070bf0(void)
{
  GEN_ENTER(0x1070bf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1372350) GEN_EDX_ARG,&REFG(undefined, 0x108f7ac),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bc00)));
  return uVar1;
}

/* ref: FUN_01070c20 */
GEN_LIB GEN_NOFRAME uint F_01070c20(void)
{
  GEN_ENTER(0x1070c20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x13723a8) = F_004296a0(0x1c,0,400);
  *((uint *)GEN_TOP(REFG(undefined4, 0x13723a8))) = REFG(undefined4, 0x13723a8);
  *((uint *)GEN_TOP((REFG(undefined4, 0x13723a8) + 4))) = REFG(undefined4, 0x13723a8);
  *((uint *)GEN_TOP((REFG(undefined4, 0x13723a8) + 8))) = REFG(undefined4, 0x13723a8);
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x13723a8) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x13723a8) + 0x19))) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107bc60)));
  return uVar1;
}

/* ref: FUN_01070c70 */
GEN_LIB GEN_NOFRAME unsigned int F_01070c70(void)
{
  GEN_ENTER(0x1070c70u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x13723b4) =
       (float)((float10)*(float *)&REFG(undefined, 0x12fdf54) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01070c90 */
GEN_LIB GEN_NOFRAME unsigned int F_01070c90(void)
{
  GEN_ENTER(0x1070c90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1372634) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1372634), REFG(float, 0x1300f80));
  return;
}

/* ref: FUN_01070cb0 */
GEN_LIB GEN_NOFRAME unsigned int F_01070cb0(void)
{
  GEN_ENTER(0x1070cb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1372638) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1372638), REFG(float, 0x1300fb0));
  return;
}

/* ref: FUN_01070cd0 */
GEN_LIB GEN_NOFRAME uint F_01070cd0(void)
{
  GEN_ENTER(0x1070cd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bd70)));
  return uVar1;
}

/* ref: FUN_01070ce0 */
GEN_LIB GEN_NOFRAME uint F_01070ce0(void)
{
  GEN_ENTER(0x1070ce0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bce0)));
  return uVar1;
}

/* ref: FUN_01070cf0 */
GEN_LIB GEN_NOFRAME uint F_01070cf0(void)
{
  GEN_ENTER(0x1070cf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x1372678) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107bca0)));
  return uVar1;
}

/* ref: FUN_01070d10 */
GEN_LIB GEN_NOFRAME uint F_01070d10(void)
{
  GEN_ENTER(0x1070d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x13726d0) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107bcb0)));
  return uVar1;
}

/* ref: FUN_01070d30 */
GEN_LIB GEN_NOFRAME uint F_01070d30(void)
{
  GEN_ENTER(0x1070d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bd30)));
  return uVar1;
}

/* ref: FUN_01070d40 */
GEN_LIB GEN_NOFRAME uint F_01070d40(void)
{
  GEN_ENTER(0x1070d40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bcc0)));
  return uVar1;
}

/* ref: FUN_01070d50 */
GEN_LIB GEN_NOFRAME uint F_01070d50(void)
{
  GEN_ENTER(0x1070d50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004a2270(&REFG(undefined4, 0x13728b8) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107bd80)));
  return uVar1;
}

/* ref: FUN_01070d70 */
GEN_LIB GEN_NOFRAME unsigned int F_01070d70(void)
{
  GEN_ENTER(0x1070d70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137557c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137557c), REFG(float, 0x1301374));
  return;
}

/* ref: FUN_01070d90 */
GEN_LIB GEN_NOFRAME unsigned int F_01070d90(void)
{
  GEN_ENTER(0x1070d90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375580) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375580), REFG(float, 0x13013a4));
  return;
}

/* ref: FUN_01070db0 */
GEN_LIB GEN_NOFRAME uint F_01070db0(void)
{
  GEN_ENTER(0x1070db0u, 0u, 0u, 0u, 0u);
  __time64_t _Var1;
  
  _Var1 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  REFG(undefined4, 0x1375584) = (uint)_Var1;
  REFG(undefined4, 0x1375588) = 0;
  REFG(undefined4, 0x137558c) = 0;
  REFG(undefined4, 0x1375590) = 0;
  return (uint)_Var1;
}

/* ref: FUN_01070de0 */
GEN_LIB GEN_NOFRAME uint F_01070de0(void)
{
  GEN_ENTER(0x1070de0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004a9ec0(&REFG(undefined, 0x1375598) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107bd90)));
  return uVar1;
}

/* ref: FUN_01070e00 */
GEN_LIB GEN_NOFRAME uint F_01070e00(void)
{
  GEN_ENTER(0x1070e00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bda0)));
  return uVar1;
}

/* ref: FUN_01070e10 */
GEN_LIB GEN_FRAME uint F_01070e10(void)
{
  GEN_ENTER(0x1070e10u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar1 = &(*(uint *)(gen_frame + 0x4));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar1 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar2 = *puVar1;
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar1 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar2) {
    puVar1 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar2 = (*puVar1 & 0x3ff) << 10;
  REFG(undefined4, 0x1301dd8) = uVar2;
  return uVar2;
}

/* ref: FUN_01070e70 */
GEN_LIB GEN_NOFRAME uint F_01070e70(void)
{
  GEN_ENTER(0x1070e70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  uVar1 = F_00c47de6(((code *)REFP(0x107bdb0)));
  return uVar1;
}

/* ref: FUN_01070e90 */
GEN_LIB GEN_NOFRAME unsigned int F_01070e90(void)
{
  GEN_ENTER(0x1070e90u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x130236c) = REFG(undefined4, 0x130236c) & 0xffffff03;
  return;
}

/* ref: FUN_01070ea0 */
GEN_LIB GEN_FRAME uint F_01070ea0(void)
{
  GEN_ENTER(0x1070ea0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = ((ushort *)GEN_TOP(F_004d4590((int)&(*(uint *)(gen_frame + 0x4)) + 2,(float)(float10)0)));
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1302370) = ((uint)uVar1 << 5 | 7) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01070f20 */
GEN_LIB GEN_FRAME uint F_01070f20(void)
{
  GEN_ENTER(0x1070f20u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = ((ushort *)GEN_TOP(F_004d4590((int)&(*(uint *)(gen_frame + 0x4)) + 2,(float)(float10)0)));
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1302374) = ((uint)uVar1 << 5 | 0xf) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01070fa0 */
GEN_LIB GEN_FRAME uint F_01070fa0(void)
{
  GEN_ENTER(0x1070fa0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar1 = &(*(uint *)(gen_frame + 0x4));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar1 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar2 = *puVar1;
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar1 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar2) {
    puVar1 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar2 = (*puVar1 & 0x3ff) << 10;
  REFG(undefined4, 0x1375a5c) = uVar2;
  return uVar2;
}

/* ref: FUN_01071000 */
GEN_LIB GEN_NOFRAME unsigned int F_01071000(void)
{
  GEN_ENTER(0x1071000u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375a74) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375a74), REFG(float, 0x13023e4));
  return;
}

/* ref: FUN_01071020 */
GEN_LIB GEN_NOFRAME unsigned int F_01071020(void)
{
  GEN_ENTER(0x1071020u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375a78) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375a78), REFG(float, 0x1302414));
  return;
}

/* ref: FUN_01071040 */
GEN_LIB GEN_NOFRAME uint F_01071040(void)
{
  GEN_ENTER(0x1071040u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x1302e00) = 0;
  REFG(undefined4, 0x1302e04) = 0;
  REFG(undefined4, 0x1302e08) = 0;
  REFG(undefined4, 0x1302e0c) = REFG(float, 0x1087f04);
  return REFG(float, 0x1087f04);
}

/* ref: FUN_010710b0 */
GEN_LIB GEN_NOFRAME uint F_010710b0(void)
{
  GEN_ENTER(0x10710b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bdc0)));
  return uVar1;
}

/* ref: FUN_010710c0 */
GEN_LIB GEN_NOFRAME unsigned int F_010710c0(void)
{
  GEN_ENTER(0x10710c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b04) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b04), REFG(float, 0x1305634));
  return;
}

/* ref: FUN_010710e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010710e0(void)
{
  GEN_ENTER(0x10710e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b08) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b08), REFG(float, 0x1305664));
  return;
}

/* ref: FUN_01071100 */
GEN_LIB GEN_NOFRAME unsigned int F_01071100(void)
{
  GEN_ENTER(0x1071100u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b80) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b80), REFG(float, 0x1305bb8));
  return;
}

/* ref: FUN_01071120 */
GEN_LIB GEN_NOFRAME unsigned int F_01071120(void)
{
  GEN_ENTER(0x1071120u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b84) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b84), REFG(float, 0x1305be8));
  return;
}

/* ref: FUN_01071140 */
GEN_LIB GEN_NOFRAME uint F_01071140(void)
{
  GEN_ENTER(0x1071140u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00b74aa0(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG);
  REFG(undefined * PTR32 * PTR32, 0x1375bc0) = (*(undefined * PTR32 (*)[8])REFP(0x109cae8));
  *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1375bc8) = (*(undefined * PTR32 (*)[2])REFP(0x109c9e8));
  *(undefined4 *)&REFG(undefined, 0x1375bd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375bd4) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375bd8) = 1;
  F_0054d740(&REFG(undefined, 0x1375c68) GEN_EDX_ARG);
  *(undefined4 *)&REFG(undefined, 0x1376b78) = 0;
  *(undefined4 *)&REFG(undefined, 0x13770dc) = 0;
  F_0054f210(&REFG(undefined, 0x1377640) GEN_EDX_ARG);
  *(undefined4 *)&REFG(undefined, 0x1378b9c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba4) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba8) = 0;
  *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x1379680) = (*(undefined * PTR32 (*)[1])REFP(0x109c954));
  *(undefined4 *)&REFG(undefined, 0x1379684) = 0;
  *(undefined2 *)&REFG(undefined1, 0x1379688) = 0x100;
  uVar1 = F_00c47de6(((code *)REFP(0x107bde0)));
  return uVar1;
}

/* ref: FUN_010711e0 */
GEN_LIB GEN_NOFRAME unsigned int F_010711e0(void)
{
  GEN_ENTER(0x10711e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b88) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b88), REFG(float, 0x1305b68));
  return;
}

/* ref: FUN_01071200 */
GEN_LIB GEN_NOFRAME unsigned int F_01071200(void)
{
  GEN_ENTER(0x1071200u, 0u, 0u, 0u, 0u);
  REFG(float, 0x1375b8c) = ((float)GEN_TOF((((float10)*(float *)&REFG(undefined, 0x1375b88) / (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                        (float10)*(double *)&REFG(undefined, 0x10947f0))));
  return;
}

/* ref: FUN_01071220 */
GEN_LIB GEN_NOFRAME unsigned int F_01071220(void)
{
  GEN_ENTER(0x1071220u, 0u, 0u, 0u, 0u);
  REFG(float, 0x13796f0) = REFG(float, 0x1305c4c);
  return;
}

/* ref: FUN_01071240 */
GEN_LIB GEN_NOFRAME unsigned int F_01071240(void)
{
  GEN_ENTER(0x1071240u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x13796f4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x13796f4), REFG(float, 0x13796f0));
  return;
}

/* ref: FUN_01071260 */
GEN_LIB GEN_NOFRAME unsigned int F_01071260(void)
{
  GEN_ENTER(0x1071260u, 0u, 0u, 0u, 0u);
  REFG(float, 0x13796f8) = REFG(float, 0x13796f0);
  return;
}

/* ref: FUN_01071280 */
GEN_LIB GEN_NOFRAME unsigned int F_01071280(void)
{
  GEN_ENTER(0x1071280u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x13796fc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x13796fc), REFG(float, 0x1305c8c));
  return;
}

/* ref: FUN_010712a0 */
GEN_LIB GEN_NOFRAME uint F_010712a0(void)
{
  GEN_ENTER(0x10712a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bdd0)));
  return uVar1;
}

/* ref: FUN_010712b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010712b0(void)
{
  GEN_ENTER(0x10712b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379714) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379714), REFG(float, 0x1306478));
  return;
}

/* ref: FUN_010712d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010712d0(void)
{
  GEN_ENTER(0x10712d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379718) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379718), REFG(float, 0x13064a8));
  return;
}

/* ref: FUN_010712f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010712f0(void)
{
  GEN_ENTER(0x10712f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379970) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379970), REFG(float, 0x131ddbc));
  return;
}

/* ref: FUN_01071310 */
GEN_LIB GEN_NOFRAME unsigned int F_01071310(void)
{
  GEN_ENTER(0x1071310u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379974) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379974), REFG(float, 0x131ddec));
  return;
}

/* ref: FUN_01071330 */
GEN_LIB GEN_NOFRAME uint F_01071330(void)
{
  GEN_ENTER(0x1071330u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004d58e0(&REFG(undefined, 0x1379978) GEN_EDX_ARG,0,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x137997c) GEN_EDX_ARG,0,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x1379980) GEN_EDX_ARG,0,0x10,0x52,8);
  F_004d58e0(&REFG(undefined, 0x1379984) GEN_EDX_ARG,0,0x14,0x74,9);
  uVar1 = F_004d58e0(&REFG(undefined, 0x1379988) GEN_EDX_ARG,0,0x18,0x54,10);
  return uVar1;
}

/* ref: FUN_01071390 */
GEN_LIB GEN_NOFRAME uint F_01071390(void)
{
  GEN_ENTER(0x1071390u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004d58e0(&REFG(undefined, 0x137998c) GEN_EDX_ARG,1,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x1379990) GEN_EDX_ARG,1,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x1379994) GEN_EDX_ARG,1,0x10,0x52,8);
  uVar1 = F_004d58e0(&REFG(undefined, 0x1379998) GEN_EDX_ARG,1,0x14,0x52,9);
  return uVar1;
}

/* ref: FUN_010713e0 */
GEN_LIB GEN_NOFRAME uint F_010713e0(void)
{
  GEN_ENTER(0x10713e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004d58e0(&REFG(undefined, 0x137999c) GEN_EDX_ARG,2,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x13799a0) GEN_EDX_ARG,2,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x13799a4) GEN_EDX_ARG,2,0x10,0x52,8);
  F_004d58e0(&REFG(undefined, 0x13799a8) GEN_EDX_ARG,2,0x14,0x52,9);
  uVar1 = F_004d58e0(&REFG(undefined, 0x13799ac) GEN_EDX_ARG,2,0x18,0x54,10);
  return uVar1;
}

/* ref: FUN_01071440 */
GEN_LIB GEN_NOFRAME unsigned int F_01071440(void)
{
  GEN_ENTER(0x1071440u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379c64) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379c64), REFG(float, 0x131f348));
  return;
}

/* ref: FUN_01071460 */
GEN_LIB GEN_NOFRAME unsigned int F_01071460(void)
{
  GEN_ENTER(0x1071460u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379c68) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379c68), REFG(float, 0x131f378));
  return;
}

/* ref: FUN_01071480 */
GEN_LIB GEN_NOFRAME unsigned int F_01071480(void)
{
  GEN_ENTER(0x1071480u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cbc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cbc), REFG(float, 0x131f428));
  return;
}

/* ref: FUN_010714a0 */
GEN_LIB GEN_NOFRAME unsigned int F_010714a0(void)
{
  GEN_ENTER(0x10714a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cc0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cc0), REFG(float, 0x131f458));
  return;
}

/* ref: FUN_010714c0 */
GEN_LIB GEN_NOFRAME uint F_010714c0(void)
{
  GEN_ENTER(0x10714c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cd0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cd0), REFG(float, 0x1302df0));
  *(undefined4 *)&REFG(undefined, 0x1379cd4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cd4), REFG(float, 0x1302df4));
  *(undefined4 *)&REFG(undefined, 0x1379cd8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cd8), REFG(float, 0x1302df8));
  *(undefined4 *)&REFG(undefined, 0x1379cf0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cf0), REFG(float, 0x1302e10));
  *(undefined4 *)&REFG(undefined, 0x1379ce0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)&REFG(undefined, 0x1379cf4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cf4), REFG(float, 0x1302e14));
  *(undefined4 *)&REFG(undefined, 0x1379ce4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)&REFG(undefined, 0x1379ce8) = REFG(undefined4, 0x1302e08);
  *(uint *)&REFG(undefined, 0x1379cec) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)&REFG(undefined, 0x1379cf8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cf8), REFG(float, 0x1302e18));
  return REFG(undefined4, 0x1302e0c);
}

/* ref: FUN_01071550 */
GEN_LIB GEN_NOFRAME unsigned int F_01071550(void)
{
  GEN_ENTER(0x1071550u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d00) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d00), REFG(float, 0x1375ac0));
  *(undefined4 *)&REFG(undefined, 0x1379d04) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d04), REFG(float, 0x1375ac4));
  *(undefined4 *)&REFG(undefined, 0x1379d08) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d08), REFG(float, 0x1375ac8));
  return;
}

/* ref: FUN_01071590 */
GEN_LIB GEN_NOFRAME uint F_01071590(void)
{
  GEN_ENTER(0x1071590u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d10) = REFG(undefined4, 0x1302cf0);
  *(undefined4 *)&REFG(undefined, 0x1379d14) = REFG(undefined4, 0x1302cf4);
  *(undefined4 *)&REFG(undefined, 0x1379d18) = REFG(undefined4, 0x1302cf8);
  *(uint *)&REFG(undefined, 0x1379d1c) = REFG(undefined4, 0x1302cfc);
  return REFG(undefined4, 0x1302cfc);
}

/* ref: FUN_010715c0 */
GEN_LIB GEN_NOFRAME unsigned int F_010715c0(void)
{
  GEN_ENTER(0x10715c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d20) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d20), REFG(float, 0x1302c60));
  *(undefined4 *)&REFG(undefined, 0x1379d24) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d24), REFG(float, 0x1302c64));
  *(undefined4 *)&REFG(undefined, 0x1379d28) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d28), REFG(float, 0x1302c68));
  return;
}

/* ref: FUN_01071600 */
GEN_LIB GEN_NOFRAME unsigned int F_01071600(void)
{
  GEN_ENTER(0x1071600u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137fab4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137fab4), REFG(float, 0x13206c8));
  return;
}

/* ref: FUN_01071620 */
GEN_LIB GEN_NOFRAME unsigned int F_01071620(void)
{
  GEN_ENTER(0x1071620u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137fab8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137fab8), REFG(float, 0x13206f8));
  return;
}

/* ref: FUN_01071640 */
GEN_LIB GEN_NOFRAME unsigned int F_01071640(void)
{
  GEN_ENTER(0x1071640u, 0u, 0u, 0u, 0u);
  F_00660cd0(&REFG(undefined, 0x137fb00) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01071650 */
GEN_LIB GEN_NOFRAME uint F_01071650(void)
{
  GEN_ENTER(0x1071650u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be60)));
  return uVar1;
}

/* ref: FUN_01071660 */
GEN_LIB GEN_NOFRAME uint F_01071660(void)
{
  GEN_ENTER(0x1071660u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be70)));
  return uVar1;
}

/* ref: FUN_01071670 */
GEN_LIB GEN_FRAME uint F_01071670(void)
{
  GEN_ENTER(0x1071670u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = ((ushort *)GEN_TOP(F_004d4590((int)&(*(uint *)(gen_frame + 0x4)) + 2,(float)(float10)0)));
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  *(uint *)&REFG(undefined, 0x132076c) = ((uint)uVar1 << 5 | 2) ^ uVar4;
  return uVar4;
}

/* ref: FUN_010716f0 */
GEN_LIB GEN_FRAME uint F_010716f0(void)
{
  GEN_ENTER(0x10716f0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = ((ushort *)GEN_TOP(F_004d4590((int)&(*(uint *)(gen_frame + 0x4)) + 2,(float)(float10)0)));
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1320770) = ((uint)uVar1 << 5 | 7) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01071770 */
GEN_LIB GEN_NOFRAME unsigned int F_01071770(void)
{
  GEN_ENTER(0x1071770u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14882d8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14882d8), REFG(float, 0x1322988));
  return;
}

/* ref: FUN_01071790 */
GEN_LIB GEN_NOFRAME unsigned int F_01071790(void)
{
  GEN_ENTER(0x1071790u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14882dc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14882dc), REFG(float, 0x13229b8));
  return;
}

/* ref: FUN_010717b0 */
GEN_LIB GEN_NOFRAME unsigned int F_010717b0(void)
{
  GEN_ENTER(0x10717b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1488770) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1488770), REFG(float, 0x13237e0));
  return;
}

/* ref: FUN_010717d0 */
GEN_LIB GEN_NOFRAME unsigned int F_010717d0(void)
{
  GEN_ENTER(0x10717d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1488774) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1488774), REFG(float, 0x1323810));
  return;
}

/* ref: FUN_010717f0 */
GEN_LIB GEN_NOFRAME unsigned int F_010717f0(void)
{
  GEN_ENTER(0x10717f0u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x1488778) =
       (float)((float10)*(float *)&REFG(undefined, 0x132386c) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01071810 */
GEN_LIB GEN_NOFRAME uint F_01071810(void)
{
  GEN_ENTER(0x1071810u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be80)));
  return uVar1;
}

/* ref: FUN_01071820 */
GEN_LIB GEN_NOFRAME uint F_01071820(void)
{
  GEN_ENTER(0x1071820u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bf00)));
  return uVar1;
}

/* ref: FUN_01071830 */
GEN_LIB GEN_NOFRAME uint F_01071830(void)
{
  GEN_ENTER(0x1071830u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1d0)));
  return uVar1;
}

/* ref: FUN_01071840 */
GEN_LIB GEN_NOFRAME uint F_01071840(void)
{
  GEN_ENTER(0x1071840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c200)));
  return uVar1;
}

/* ref: FUN_01071850 */
GEN_LIB GEN_NOFRAME uint F_01071850(void)
{
  GEN_ENTER(0x1071850u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c230)));
  return uVar1;
}

/* ref: FUN_01071860 */
GEN_LIB GEN_NOFRAME uint F_01071860(void)
{
  GEN_ENTER(0x1071860u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c260)));
  return uVar1;
}

/* ref: FUN_01071870 */
GEN_LIB GEN_NOFRAME uint F_01071870(void)
{
  GEN_ENTER(0x1071870u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c290)));
  return uVar1;
}

/* ref: FUN_01071880 */
GEN_LIB GEN_NOFRAME uint F_01071880(void)
{
  GEN_ENTER(0x1071880u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c2c0)));
  return uVar1;
}

/* ref: FUN_01071890 */
GEN_LIB GEN_NOFRAME uint F_01071890(void)
{
  GEN_ENTER(0x1071890u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c2d0)));
  return uVar1;
}

/* ref: FUN_010718a0 */
GEN_LIB GEN_NOFRAME uint F_010718a0(void)
{
  GEN_ENTER(0x10718a0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x1f;
  puVar1 = &REFG(undefined4, 0x1488784);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[-1] = (*(undefined * PTR32 (*)[3])REFP(0x10b9324));
    puVar1[3] = (*(undefined * PTR32 (*)[3])REFP(0x10b9144));
    puVar1[4] = puVar1 - 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0x101;
    *((undefined1 *)GEN_TOP(((int)puVar1 + 0x1e))) = 0;
    puVar1 = puVar1 + 9;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar2 = F_00c47de6(((code *)REFP(0x107bf30)));
  return uVar2;
}

/* ref: FUN_01071900 */
GEN_LIB GEN_NOFRAME uint F_01071900(void)
{
  GEN_ENTER(0x1071900u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0x1f;
  puVar2 = &REFG(undefined4, 0x1488c04);
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[-1] = (*(undefined * PTR32 (*)[3])REFP(0x10b9334));
    puVar2[3] = (*(undefined * PTR32 (*)[3])REFP(0x10b9154));
    puVar2[4] = puVar2 - 1;
    F_0042b630(puVar2 + 5 GEN_EDX_ARG);
    *(undefined1 *)(puVar2 + 0x1b) = 0;
    puVar2 = puVar2 + 0x1d;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar1 = F_00c47de6(((code *)REFP(0x107bf50)));
  return uVar1;
}

/* ref: FUN_01071950 */
GEN_LIB GEN_NOFRAME uint F_01071950(void)
{
  GEN_ENTER(0x1071950u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bf90)));
  return uVar1;
}

/* ref: FUN_01071960 */
GEN_LIB GEN_NOFRAME uint F_01071960(void)
{
  GEN_ENTER(0x1071960u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfa0)));
  return uVar1;
}

/* ref: FUN_01071970 */
GEN_LIB GEN_NOFRAME uint F_01071970(void)
{
  GEN_ENTER(0x1071970u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfb0)));
  return uVar1;
}

/* ref: FUN_01071980 */
GEN_LIB GEN_NOFRAME uint F_01071980(void)
{
  GEN_ENTER(0x1071980u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfc0)));
  return uVar1;
}

/* ref: FUN_01071990 */
GEN_LIB GEN_NOFRAME uint F_01071990(void)
{
  GEN_ENTER(0x1071990u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfd0)));
  return uVar1;
}

/* ref: FUN_010719a0 */
GEN_LIB GEN_NOFRAME uint F_010719a0(void)
{
  GEN_ENTER(0x10719a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bfe0)));
  return uVar1;
}

/* ref: FUN_010719b0 */
GEN_LIB GEN_NOFRAME uint F_010719b0(void)
{
  GEN_ENTER(0x10719b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bff0)));
  return uVar1;
}

/* ref: FUN_010719c0 */
GEN_LIB GEN_NOFRAME uint F_010719c0(void)
{
  GEN_ENTER(0x10719c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c000)));
  return uVar1;
}

/* ref: FUN_010719d0 */
GEN_LIB GEN_NOFRAME uint F_010719d0(void)
{
  GEN_ENTER(0x10719d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c010)));
  return uVar1;
}

/* ref: FUN_010719e0 */
GEN_LIB GEN_NOFRAME uint F_010719e0(void)
{
  GEN_ENTER(0x10719e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c020)));
  return uVar1;
}

/* ref: FUN_010719f0 */
GEN_LIB GEN_NOFRAME uint F_010719f0(void)
{
  GEN_ENTER(0x10719f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c030)));
  return uVar1;
}

/* ref: FUN_01071a00 */
GEN_LIB GEN_NOFRAME uint F_01071a00(void)
{
  GEN_ENTER(0x1071a00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c040)));
  return uVar1;
}

/* ref: FUN_01071a10 */
GEN_LIB GEN_NOFRAME uint F_01071a10(void)
{
  GEN_ENTER(0x1071a10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c050)));
  return uVar1;
}

/* ref: FUN_01071a20 */
GEN_LIB GEN_NOFRAME uint F_01071a20(void)
{
  GEN_ENTER(0x1071a20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c060)));
  return uVar1;
}

/* ref: FUN_01071a30 */
GEN_LIB GEN_NOFRAME uint F_01071a30(void)
{
  GEN_ENTER(0x1071a30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c070)));
  return uVar1;
}

/* ref: FUN_01071a40 */
GEN_LIB GEN_NOFRAME uint F_01071a40(void)
{
  GEN_ENTER(0x1071a40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c080)));
  return uVar1;
}

/* ref: FUN_01071a50 */
GEN_LIB GEN_NOFRAME uint F_01071a50(void)
{
  GEN_ENTER(0x1071a50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c090)));
  return uVar1;
}

/* ref: FUN_01071a60 */
GEN_LIB GEN_NOFRAME uint F_01071a60(void)
{
  GEN_ENTER(0x1071a60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00754160(&REFG(undefined, 0x1323c00) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c300)));
  return uVar1;
}

/* ref: FUN_01071a80 */
GEN_LIB GEN_NOFRAME uint F_01071a80(void)
{
  GEN_ENTER(0x1071a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0a0)));
  return uVar1;
}

/* ref: FUN_01071a90 */
GEN_LIB GEN_NOFRAME uint F_01071a90(void)
{
  GEN_ENTER(0x1071a90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0b0)));
  return uVar1;
}

/* ref: FUN_01071aa0 */
GEN_LIB GEN_NOFRAME uint F_01071aa0(void)
{
  GEN_ENTER(0x1071aa0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0c0)));
  return uVar1;
}

/* ref: FUN_01071ab0 */
GEN_LIB GEN_NOFRAME uint F_01071ab0(void)
{
  GEN_ENTER(0x1071ab0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0d0)));
  return uVar1;
}

/* ref: FUN_01071ac0 */
GEN_LIB GEN_NOFRAME uint F_01071ac0(void)
{
  GEN_ENTER(0x1071ac0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * in_ecx;
  int iVar2;
  
  in_ecx = &REFG(undefined, 0x1489a80);
  iVar2 = 7;
  do {
    F_0042b630(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x54;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  uVar1 = F_00c47de6(((code *)REFP(0x107bea0)));
  return uVar1;
}

/* ref: FUN_01071af0 */
GEN_LIB GEN_NOFRAME unsigned int F_01071af0(void)
{
  GEN_ENTER(0x1071af0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = 0;
  do {
    (&REFG(undefined4, 0x1489d20))[(int)(iVar1)] = 0;
    (&REFG(undefined4, 0x1489d48))[(int)(iVar1)] = 0;
    (&REFG(undefined4, 0x1489d70))[(int)(iVar1)] = 0;
    (&REFG(undefined1, 0x1489d98))[(int)(iVar1)] = 0;
    (&REFG(undefined1, 0x1489da2))[(int)(iVar1)] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  return 0;
}

/* ref: FUN_01071b30 */
GEN_LIB GEN_NOFRAME uint F_01071b30(void)
{
  GEN_ENTER(0x1071b30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0e0)));
  return uVar1;
}

/* ref: FUN_01071b40 */
GEN_LIB GEN_NOFRAME uint F_01071b40(void)
{
  GEN_ENTER(0x1071b40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x1489db0) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107bec0)));
  return uVar1;
}

/* ref: FUN_01071b60 */
GEN_LIB GEN_NOFRAME uint F_01071b60(void)
{
  GEN_ENTER(0x1071b60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c0f0)));
  return uVar1;
}

/* ref: FUN_01071b70 */
GEN_LIB GEN_NOFRAME uint F_01071b70(void)
{
  GEN_ENTER(0x1071b70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c100)));
  return uVar1;
}

/* ref: FUN_01071b80 */
GEN_LIB GEN_NOFRAME uint F_01071b80(void)
{
  GEN_ENTER(0x1071b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c110)));
  return uVar1;
}

/* ref: FUN_01071b90 */
GEN_LIB GEN_NOFRAME uint F_01071b90(void)
{
  GEN_ENTER(0x1071b90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c120)));
  return uVar1;
}

/* ref: FUN_01071ba0 */
GEN_LIB GEN_NOFRAME uint F_01071ba0(void)
{
  GEN_ENTER(0x1071ba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c130)));
  return uVar1;
}

/* ref: FUN_01071bb0 */
GEN_LIB GEN_NOFRAME uint F_01071bb0(void)
{
  GEN_ENTER(0x1071bb0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c140)));
  return uVar1;
}

/* ref: FUN_01071bc0 */
GEN_LIB GEN_NOFRAME uint F_01071bc0(void)
{
  GEN_ENTER(0x1071bc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c150)));
  return uVar1;
}

/* ref: FUN_01071bd0 */
GEN_LIB GEN_NOFRAME uint F_01071bd0(void)
{
  GEN_ENTER(0x1071bd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c160)));
  return uVar1;
}

/* ref: FUN_01071be0 */
GEN_LIB GEN_NOFRAME uint F_01071be0(void)
{
  GEN_ENTER(0x1071be0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c170)));
  return uVar1;
}

/* ref: FUN_01071bf0 */
GEN_LIB GEN_NOFRAME uint F_01071bf0(void)
{
  GEN_ENTER(0x1071bf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c180)));
  return uVar1;
}

/* ref: FUN_01071c00 */
GEN_LIB GEN_NOFRAME uint F_01071c00(void)
{
  GEN_ENTER(0x1071c00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c190)));
  return uVar1;
}

/* ref: FUN_01071c10 */
GEN_LIB GEN_NOFRAME uint F_01071c10(void)
{
  GEN_ENTER(0x1071c10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1a0)));
  return uVar1;
}

/* ref: FUN_01071c20 */
GEN_LIB GEN_NOFRAME uint F_01071c20(void)
{
  GEN_ENTER(0x1071c20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1b0)));
  return uVar1;
}

/* ref: FUN_01071c30 */
GEN_LIB GEN_NOFRAME uint F_01071c30(void)
{
  GEN_ENTER(0x1071c30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c1c0)));
  return uVar1;
}

/* ref: FUN_01071c40 */
GEN_LIB GEN_NOFRAME uint F_01071c40(void)
{
  GEN_ENTER(0x1071c40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1489e08) GEN_EDX_ARG,&REFG(undefined, 0x10b3a76),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bed0)));
  return uVar1;
}

/* ref: FUN_01071c70 */
GEN_LIB GEN_NOFRAME uint F_01071c70(void)
{
  GEN_ENTER(0x1071c70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1489e60) GEN_EDX_ARG,&REFG(undefined, 0x10b3a77),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bee0)));
  return uVar1;
}

/* ref: FUN_01071ca0 */
GEN_LIB GEN_NOFRAME uint F_01071ca0(void)
{
  GEN_ENTER(0x1071ca0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x1489eb8) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107bef0)));
  return uVar1;
}

/* ref: FUN_01071cc0 */
GEN_LIB GEN_NOFRAME unsigned int F_01071cc0(void)
{
  GEN_ENTER(0x1071cc0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x148a464) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x148a464), REFG(float, 0x13284b0));
  return;
}

/* ref: FUN_01071ce0 */
GEN_LIB GEN_NOFRAME unsigned int F_01071ce0(void)
{
  GEN_ENTER(0x1071ce0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x148a468) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x148a468), REFG(float, 0x13284e0));
  return;
}

/* ref: FUN_01071d00 */
GEN_LIB GEN_NOFRAME unsigned int F_01071d00(void)
{
  GEN_ENTER(0x1071d00u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x148a46c) =
       (float)((float10)*(float *)&REFG(undefined, 0x132853c) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return;
}

/* ref: FUN_01071d20 */
GEN_LIB GEN_NOFRAME uint F_01071d20(void)
{
  GEN_ENTER(0x1071d20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107c310)));
  return uVar1;
}

/* ref: FUN_01071d30 */
GEN_LIB GEN_NOFRAME unsigned int F_01071d30(void)
{
  GEN_ENTER(0x1071d30u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = &REFG(undefined4, 0x148a470);
  iVar2 = 0xf;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xffffffff;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return 0;
}

/* ref: FUN_01071d60 */
GEN_LIB GEN_NOFRAME uint F_01071d60(void)
{
  GEN_ENTER(0x1071d60u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x148a570) = 0;
  REFG(undefined4, 0x148a574) = 0;
  REFG(undefined4, 0x148a578) = 0xffffffff;
  REFG(undefined4, 0x148a580) = 0;
  REFG(undefined4, 0x148a584) = 0;
  REFG(undefined4, 0x148a588) = 0xffffffff;
  return 0;
}

/* ref: FUN_01071d90 */
GEN_LIB GEN_NOFRAME uint F_01071d90(void)
{
  GEN_ENTER(0x1071d90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00acbcc0(&REFG(undefined, 0x148a590) GEN_EDX_ARG);
  uVar1 = F_00c47de6(((code *)REFP(0x107c320)));
  return uVar1;
}

/* ref: FUN_01071db0 */
GEN_LIB GEN_NOFRAME uint F_01071db0(void)
{
  GEN_ENTER(0x1071db0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int iVar2;
  
  this = &REFG(undefined, 0x1493c28);
  iVar2 = 0x1f;
  do {
    uVar1 = F_00976f30(this GEN_EDX_ARG);
    this = this + 0x194;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_01071de0 */
GEN_LIB GEN_NOFRAME uint F_01071de0(void)
{
  GEN_ENTER(0x1071de0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * in_ecx;
  int iVar2;
  
  in_ecx = &REFG(undefined, 0x1496ea8);
  iVar2 = 0x1f;
  do {
    uVar1 = F_00a1b190(in_ecx GEN_EDX_ARG);
    in_ecx = in_ecx + 0x2c;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_01071e00 */
GEN_LIB GEN_NOFRAME uint F_01071e00(void)
{
  GEN_ENTER(0x1071e00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int iVar2;
  
  this = &REFG(undefined, 0x1497428);
  iVar2 = 0x1f;
  do {
    uVar1 = F_00a1b0d0(this GEN_EDX_ARG);
    this = this + 0x494;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_01071e30 */
GEN_LIB GEN_NOFRAME unsigned int F_01071e30(void)
{
  GEN_ENTER(0x1071e30u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a06ac) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a06ac), REFG(float, 0x132efa8));
  return;
}

/* ref: FUN_01071e50 */
GEN_LIB GEN_NOFRAME unsigned int F_01071e50(void)
{
  GEN_ENTER(0x1071e50u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14a06b0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a06b0), REFG(float, 0x132efd8));
  return;
}

