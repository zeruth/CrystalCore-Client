#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_01068c80 */
uint F_01068c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  return param_3;
}

/* ref: FUN_01068c90 */
uint F_01068c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068c90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_01068d20 */
uint F_01068d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_01068d30 */
uint F_01068d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  param_1[2] = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar3 = 4;
  if (param_2 < 0x10) {
    if (param_2 < 5) goto LAB_01068dad;
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
  }
  else {
    uVar3 = 0;
    iVar4 = 3;
    do {
      uVar1 = param_1[uVar3 + 4];
      param_1[uVar3 + 4] = param_1[uVar3 + 7];
      param_1[uVar3 + 7] = uVar1;
      uVar1 = param_1[uVar3 + 5];
      param_1[uVar3 + 5] = param_1[uVar3 + 6];
      param_1[uVar3 + 6] = uVar1;
      uVar3 = uVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar3 = uVar3 + 4;
LAB_01068dad: ;
  if (uVar3 + 4 <= param_2) {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    uVar2 = param_1[0x12];
    param_1[0x13] = uVar1;
    param_1[0x12] = param_1[0x11];
    param_1[0x11] = uVar2;
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01068de0 */
uint F_01068de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
  uVar2 = 4;
  if (0x17 < param_2) {
    uVar2 = F_01068d30(param_1 + 4,0x14,param_3);
    return uVar2 + 4;
  }
  if (4 < param_2) {
    uVar2 = F_01068d30(param_1 + 4,param_2 - 4,param_3);
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01068e50 */
uint F_01068e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068e50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  if (7 < param_2) {
    uVar1 = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = param_1[4];
    param_1[6] = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    uVar4 = 8;
    if (0xf < param_2) {
      uVar4 = F_0105df60(8,param_1 + 8);
      if (param_2 < uVar4 + 0x10) {
        return uVar4 + 8;
      }
      uVar5 = F_0105df60(8,param_1 + 0x10);
      uVar5 = uVar4 + 0xc + uVar5;
      uVar4 = uVar5;
      if (uVar5 + 4 <= param_2) {
        uVar1 = param_1[0x1f];
        param_1[0x1f] = param_1[0x1c];
        param_1[0x1c] = uVar1;
        uVar1 = param_1[0x1e];
        param_1[0x1e] = param_1[0x1d];
        param_1[0x1d] = uVar1;
        uVar4 = uVar5 + 4;
        if (uVar5 + 8 <= param_2) {
          uVar1 = param_1[0x23];
          param_1[0x23] = param_1[0x20];
          param_1[0x20] = uVar1;
          uVar1 = param_1[0x22];
          param_1[0x22] = param_1[0x21];
          uVar4 = uVar5 + 0xc;
          param_1[0x21] = uVar1;
          if (uVar5 + 0x10 <= param_2) {
            uVar1 = param_1[0x2b];
            param_1[0x2b] = param_1[0x28];
            param_1[0x28] = uVar1;
            uVar1 = param_1[0x2a];
            param_1[0x2a] = param_1[0x29];
            uVar4 = uVar5 + 0x30;
            param_1[0x29] = uVar1;
            uVar3 = uVar5 + 0x10;
            if ((param_2 < uVar4) || (uVar3 = uVar5 + 0x60, uVar5 + 0x60 <= param_2)) {
              uVar4 = uVar3;
            }
          }
        }
      }
    }
    return uVar4;
  }
  return 4;
}

/* ref: FUN_01068f60 */
uint F_01068f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  param_1[2] = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar3 = 4;
  if (param_2 < 0x18) {
    if (param_2 < 5) goto LAB_01068fb8;
    iVar5 = param_2 - 4;
  }
  else {
    iVar5 = 0x14;
  }
  uVar3 = F_01068d30(param_1 + 4,iVar5,param_3);
  uVar3 = uVar3 + 4;
LAB_01068fb8: ;
  uVar4 = uVar3;
  if (uVar3 + 2 <= param_2) {
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x18];
    param_1[0x18] = uVar1;
    uVar4 = uVar3 + 0x402;
    if (param_2 < uVar3 + 0x402) {
      uVar4 = uVar3 + 2;
    }
  }
  return uVar4;
}

/* ref: FUN_01068fe0 */
uint F_01068fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_01069040 */
uint F_01069040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x21) & 0xffffffe0) + 0x21;
}

/* ref: FUN_01069060 */
uint F_01069060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1 + 2;
}

/* ref: FUN_01069160 */
uint F_01069160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069160u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_01069190 */
uint F_01069190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069190u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_010691c0 */
uint F_010691c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10691c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_010691e0 */
uint F_010691e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10691e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069200 */
uint F_01069200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069200u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_01069230 */
uint F_01069230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069230u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_01069260 */
uint F_01069260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_01069280 */
uint F_01069280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_010692a0 */
uint F_010692a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10692a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_010692c0 */
uint F_010692c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10692c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_010692f0 */
uint F_010692f0(void)
{
  GEN_ENTER(0x10692f0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069300 */
uint F_01069300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_01069330 */
uint F_01069330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 2) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 8);
  uVar4 = uVar3 + 4;
  *(undefined1 *)(param_1 + 8) = uVar1;
  if (param_2 < uVar4) {
    return uVar3 + 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  if (param_2 < uVar3 + 0xc) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x10);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 8) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x18);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 8) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x20);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 100) {
    if (param_2 <= uVar4) goto LAB_0106940c;
    uVar3 = F_0105e000(param_2 - uVar4,param_1 + 0x28);
  }
  else {
    uVar3 = 0;
    param_2 = 0x32;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x28 + uVar3);
      *(undefined1 *)(param_1 + 0x28 + uVar3) = *(undefined1 *)(param_1 + 0x29 + uVar3);
      *(undefined1 *)(param_1 + 0x29 + uVar3) = uVar1;
      uVar3 = uVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar4 = uVar4 + uVar3;
LAB_0106940c: ;
  if (uVar2 < uVar4 + 0x20) {
    return uVar4;
  }
  return uVar4 + 0x20;
}

/* ref: FUN_01069420 */
uint F_01069420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_01069450 */
uint F_01069450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069470 */
uint F_01069470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069530 */
uint F_01069530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069530u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_01069600 */
uint F_01069600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069620 */
uint F_01069620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
  return 0xc;
}

/* ref: FUN_010696b0 */
uint F_010696b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10696b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < 0xc) {
    if (param_2 != 0) {
      uVar4 = F_01069620(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = param_1[3];
    param_1[3] = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar1;
    param_1[1] = param_1[2];
    param_1[2] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = param_1[6];
    param_1[6] = uVar2;
    uVar1 = param_1[8];
    param_1[8] = param_1[9];
    param_1[9] = uVar1;
    uVar1 = param_1[10];
    param_1[10] = param_1[0xb];
    param_1[0xb] = uVar1;
    uVar4 = 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0xc,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    param_1[0x13] = uVar1;
    uVar1 = param_1[0x11];
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar1;
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x15];
    param_1[0x15] = uVar1;
    uVar1 = param_1[0x16];
    param_1[0x16] = param_1[0x17];
    param_1[0x17] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x18,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar1 = param_1[0x1c];
    param_1[0x1c] = param_1[0x1f];
    param_1[0x1f] = uVar1;
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_1[0x1e];
    param_1[0x1e] = uVar1;
    uVar1 = param_1[0x20];
    param_1[0x20] = param_1[0x21];
    param_1[0x21] = uVar1;
    uVar1 = param_1[0x22];
    param_1[0x22] = param_1[0x23];
    param_1[0x23] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x24,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x24];
    param_1[0x24] = param_1[0x27];
    param_1[0x27] = uVar1;
    uVar1 = param_1[0x25];
    param_1[0x25] = param_1[0x26];
    param_1[0x26] = uVar1;
    uVar1 = param_1[0x28];
    param_1[0x28] = param_1[0x2b];
    param_1[0x2b] = uVar1;
    uVar1 = param_1[0x29];
    param_1[0x29] = param_1[0x2a];
    param_1[0x2a] = uVar1;
    uVar1 = param_1[0x2c];
    param_1[0x2c] = param_1[0x2d];
    param_1[0x2d] = uVar1;
    uVar1 = param_1[0x2e];
    param_1[0x2e] = param_1[0x2f];
    param_1[0x2f] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x30,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x30];
    param_1[0x30] = param_1[0x33];
    param_1[0x33] = uVar1;
    uVar1 = param_1[0x31];
    param_1[0x31] = param_1[0x32];
    param_1[0x32] = uVar1;
    uVar1 = param_1[0x34];
    param_1[0x34] = param_1[0x37];
    param_1[0x37] = uVar1;
    uVar1 = param_1[0x35];
    param_1[0x35] = param_1[0x36];
    param_1[0x36] = uVar1;
    uVar1 = param_1[0x38];
    param_1[0x38] = param_1[0x39];
    param_1[0x39] = uVar1;
    uVar1 = param_1[0x3a];
    param_1[0x3a] = param_1[0x3b];
    param_1[0x3b] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (uVar4 + 0xc <= param_2) {
    uVar1 = param_1[0x3c];
    param_1[0x3c] = param_1[0x3f];
    param_1[0x3f] = uVar1;
    uVar1 = param_1[0x3d];
    param_1[0x3d] = param_1[0x3e];
    param_1[0x3e] = uVar1;
    uVar1 = param_1[0x40];
    param_1[0x40] = param_1[0x43];
    param_1[0x43] = uVar1;
    uVar1 = param_1[0x41];
    param_1[0x41] = param_1[0x42];
    param_1[0x42] = uVar1;
    uVar1 = param_1[0x44];
    param_1[0x44] = param_1[0x45];
    param_1[0x45] = uVar1;
    uVar1 = param_1[0x46];
    param_1[0x46] = param_1[0x47];
    param_1[0x47] = uVar1;
    return uVar4 + 0xc;
  }
  if (uVar4 < param_2) {
    uVar3 = F_01069620(param_1 + 0x3c,param_2 - uVar4,param_3);
    return uVar3 + uVar4;
  }
  return uVar4;
}

/* ref: FUN_01069a40 */
uint F_01069a40(void)
{
  GEN_ENTER(0x1069a40u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069aa0 */
uint F_01069aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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

/* ref: FUN_01069b00 */
uint F_01069b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < 8) {
    if (param_2 != 0) {
      uVar4 = F_01069aa0(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = param_1[3];
    param_1[3] = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar1;
    param_1[1] = param_1[2];
    param_1[2] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = param_1[6];
    param_1[6] = uVar2;
    uVar4 = 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 8,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    param_1[0xb] = uVar1;
    uVar1 = param_1[9];
    param_1[9] = param_1[10];
    param_1[10] = uVar1;
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x10,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    param_1[0x13] = uVar1;
    uVar1 = param_1[0x11];
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar1;
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x17];
    param_1[0x17] = uVar1;
    uVar1 = param_1[0x15];
    param_1[0x15] = param_1[0x16];
    param_1[0x16] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x18,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar1 = param_1[0x1c];
    param_1[0x1c] = param_1[0x1f];
    param_1[0x1f] = uVar1;
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_1[0x1e];
    param_1[0x1e] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x20,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x20];
    param_1[0x20] = param_1[0x23];
    param_1[0x23] = uVar1;
    uVar1 = param_1[0x21];
    param_1[0x21] = param_1[0x22];
    param_1[0x22] = uVar1;
    uVar1 = param_1[0x24];
    param_1[0x24] = param_1[0x27];
    param_1[0x27] = uVar1;
    uVar1 = param_1[0x25];
    param_1[0x25] = param_1[0x26];
    param_1[0x26] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (uVar4 + 8 <= param_2) {
    uVar1 = param_1[0x28];
    param_1[0x28] = param_1[0x2b];
    param_1[0x2b] = uVar1;
    uVar1 = param_1[0x29];
    param_1[0x29] = param_1[0x2a];
    param_1[0x2a] = uVar1;
    uVar1 = param_1[0x2c];
    param_1[0x2c] = param_1[0x2f];
    param_1[0x2f] = uVar1;
    uVar1 = param_1[0x2d];
    param_1[0x2d] = param_1[0x2e];
    param_1[0x2e] = uVar1;
    return uVar4 + 8;
  }
  if (uVar4 < param_2) {
    uVar3 = F_01069aa0(param_1 + 0x28,param_2 - uVar4,param_3);
    return uVar3 + uVar4;
  }
  return uVar4;
}

/* ref: FUN_01069db0 */
uint F_01069db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069db0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 6;
}

/* ref: FUN_01069de0 */
uint F_01069de0(void)
{
  GEN_ENTER(0x1069de0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069df0 */
uint F_01069df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069df0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_01069e20 */
uint F_01069e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 4;
      if (uVar2 + 8 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x17);
        *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = uVar1;
        uVar3 = uVar2 + 8;
        if (uVar2 + 0xc <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x1b);
          *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
          *(undefined1 *)(param_1 + 0x18) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x1a);
          *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x19);
          uVar3 = uVar2 + 0x10;
          *(undefined1 *)(param_1 + 0x19) = uVar1;
          if (param_2 < uVar3) {
            return uVar2 + 0xc;
          }
          uVar1 = *(undefined1 *)(param_1 + 0x1f);
          *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_1 + 0x1c);
          *(undefined1 *)(param_1 + 0x1c) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x1e);
          *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1d);
          *(undefined1 *)(param_1 + 0x1d) = uVar1;
          if (uVar2 + 0x12 <= param_2) {
            uVar1 = *(undefined1 *)(param_1 + 0x21);
            *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x20);
            *(undefined1 *)(param_1 + 0x20) = uVar1;
            uVar3 = uVar2 + 0x14;
          }
        }
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_01069f10 */
uint F_01069f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069f30 */
uint F_01069f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return (-(uint)(param_2 < 0x83) & 0xffffff87) + 0x83;
}

/* ref: FUN_01069f70 */
uint F_01069f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069fe0 */
uint F_01069fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  uVar2 = uVar1 + 1;
  if (uVar1 + 0x2f <= param_2) {
    uVar2 = uVar1 + 0x2f;
  }
  return uVar2;
}

/* ref: FUN_0106a100 */
uint F_0106a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1 + 1;
}

/* ref: FUN_0106a120 */
uint F_0106a120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x10 <= param_2) {
    uVar1 = uVar1 + 0x10;
  }
  return uVar1;
}

/* ref: FUN_0106a150 */
uint F_0106a150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a150u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_0106a180 */
uint F_0106a180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_0106a1a0 */
uint F_0106a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a220 */
uint F_0106a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a220u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a250 */
uint F_0106a250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc1) & 0xffffff3f) + 0xc1;
}

/* ref: FUN_0106a270 */
uint F_0106a270(void)
{
  GEN_ENTER(0x106a270u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a280 */
uint F_0106a280(void)
{
  GEN_ENTER(0x106a280u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a2e0 */
uint F_0106a2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 3;
}

/* ref: FUN_0106a310 */
uint F_0106a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc1) & 0xffffff3f) + 0xc1;
}

/* ref: FUN_0106a330 */
uint F_0106a330(void)
{
  GEN_ENTER(0x106a330u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a340 */
uint F_0106a340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a340u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a370 */
uint F_0106a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_0106a390 */
uint F_0106a390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a390u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a3c0 */
uint F_0106a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 6;
}

/* ref: FUN_0106a3f0 */
uint F_0106a3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a470 */
uint F_0106a470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a470u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 0x802) {
    return 2;
  }
  return (-(uint)(param_2 < 0xc02) & 0xfffffc00) + 0xc02;
}

/* ref: FUN_0106a4c0 */
uint F_0106a4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a520 */
uint F_0106a520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a520u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a5d0 */
uint F_0106a5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_0106a6c0 */
uint F_0106a6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 7) & 0xfffffffa) + 7;
}

/* ref: FUN_0106a6e0 */
uint F_0106a6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106a790 */
uint F_0106a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a790u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return 0x20;
}

/* ref: FUN_0106a8e0 */
uint F_0106a8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  if (param_2 < 0x18) {
    return 0x10;
  }
  uVar2 = F_0105df60(8,param_1 + 0x10);
  return uVar2 + 0x10;
}

/* ref: FUN_0106a990 */
uint F_0106a990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a990u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_0106aa80 */
uint F_0106aa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106aa80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  return (-(uint)(param_2 < 0x34) & 0xffffffe0) + 0x34;
}

/* ref: FUN_0106ab60 */
uint F_0106ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ab60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  return 0x1c;
}

/* ref: FUN_0106ac70 */
uint F_0106ac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ac70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x17 < param_2) {
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
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_0106ad20 */
uint F_0106ad20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ad20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
      iVar6 = iVar6 + -1;
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
uint F_0106adc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106adc0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106af20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106af20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x1b) & 0xffffffe6) + 0x1b;
}

/* ref: FUN_0106af40 */
uint F_0106af40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106af40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106b0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar6 = iVar6 + -1;
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
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return uVar5 + iVar3;
}

/* ref: FUN_0106b1a0 */
uint F_0106b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b200u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106b230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b230u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106b290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b290u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106b360 */
uint F_0106b360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b360u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106b430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b430u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b500u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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

/* ref: FUN_0106b5a0 */
uint F_0106b5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b630u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b790u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b840u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106b9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106bbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bc40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106bda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bda0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106be50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106be50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106bfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106c060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c060u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106c110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c110u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      iVar5 = iVar5 + -1;
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
uint F_0106c1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c210u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c270u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c330u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x800) & 0xfffff800) + 0x800;
}

/* ref: FUN_0106c570 */
uint F_0106c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c570u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  return uVar2 + 4;
}

/* ref: FUN_0106c630 */
uint F_0106c630(void)
{
  GEN_ENTER(0x106c630u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c640 */
uint F_0106c640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar4);
      *(undefined1 *)(param_1 + 2 + iVar4) = *(undefined1 *)(param_1 + 3 + iVar4);
      *(undefined1 *)(param_1 + 3 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 4;
  }
  if (2 < param_2) {
    iVar5 = 0;
    for (uVar3 = param_2 - 2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar5);
      *(undefined1 *)(param_1 + 2 + iVar5) = *(undefined1 *)(param_1 + 3 + iVar5);
      *(undefined1 *)(param_1 + 3 + iVar5) = uVar1;
      iVar5 = iVar5 + 2;
    }
    uVar3 = iVar5 + 2;
  }
  return uVar3;
}

/* ref: FUN_0106c6b0 */
uint F_0106c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c740(void)
{
  GEN_ENTER(0x106c740u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0106c750 */
uint F_0106c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c750u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c780(void)
{
  GEN_ENTER(0x106c780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c790 */
uint F_0106c790(void)
{
  GEN_ENTER(0x106c790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c7a0 */
uint F_0106c7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c7a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
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
      uVar1 = *(undefined1 *)(param_1 + 4 + iVar4);
      *(undefined1 *)(param_1 + 4 + iVar4) = *(undefined1 *)(param_1 + 7 + iVar4);
      *(undefined1 *)(param_1 + 7 + iVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + iVar4);
      *(undefined1 *)(param_1 + 5 + iVar4) = *(undefined1 *)(param_1 + 6 + iVar4);
      *(undefined1 *)(param_1 + 6 + iVar4) = uVar1;
      iVar5 = iVar5 + -1;
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
uint F_0106c810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c810u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c870(void)
{
  GEN_ENTER(0x106c870u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c880 */
uint F_0106c880(void)
{
  GEN_ENTER(0x106c880u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c890 */
uint F_0106c890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106c890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return param_3;
}

/* ref: FUN_0106c8a0 */
uint F_0106c8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
uint F_0106c930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106c930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return param_2;
}

/* ref: RecvCallbackInterface_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
uint F_0106c970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106c9b0 */
unsigned int F_0106c9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x106c9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  return 0;
}

/* ref: FUN_0106c9c0 */
uint F_0106c9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x106c9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[249])REFP(0x12b5334));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf0 */
uint F_0106c9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf1 */
uint F_0106ca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ca00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_2 + 0xc) + 0x24)));
  if (*(ushort *)(uVar1 + 2) - 0x65 < 0x287) {
                    
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x106e474) + *(ushort *)(uVar1 + 2) + 3))))) {
    case 0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 10: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x10: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x11: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x12: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x13: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x14: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x15: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x16: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x17: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x18: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x19: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x20: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x21: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x22: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x23: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x24: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x25: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x26: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x27: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x28: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x29: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x30: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x31: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x32: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x33: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x34: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x35: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xdc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x36: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x37: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x38: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x39: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xec))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x40: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x41: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x42: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x43: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x114))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x44: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x45: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x46: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x120))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x47: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x124))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x48: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x128))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x49: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 300))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x130))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x134))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x138))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x13c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x144))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x50: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x148))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x51: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x52: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x150))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x53: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x154))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x54: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x158))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x55: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x15c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x56: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x160))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x57: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x164))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x58: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x168))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x59: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x16c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x170))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x174))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x178))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x17c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x180))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x184))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x60: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x188))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x61: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x62: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 400))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 99: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x194))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 100: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x198))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x65: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x19c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x66: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1a0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x67: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1a4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x68: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1a8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x69: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1ac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1b0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1b4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1b8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1bc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x70: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x71: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1cc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x72: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1d0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x73: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1d4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x74: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1d8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x75: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1dc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x76: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x77: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x78: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1e8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x79: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1ec))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1f0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 500))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1fc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x200))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x204))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x80: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x208))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x81: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x82: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x210))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x83: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x214))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x84: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x218))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x85: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x21c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x86: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x220))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x87: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x224))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x88: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x228))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x89: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x22c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x230))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x234))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x238))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x240))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x244))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x90: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x248))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x91: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x92: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x250))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x93: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x254))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x94: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 600))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x95: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x25c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x96: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x260))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x97: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x264))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x98: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x268))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x99: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x26c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9a: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x270))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9b: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x274))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9c: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x278))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9d: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x27c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9e: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x280))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9f: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x284))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x288))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x290))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x294))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x298))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x29c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2a8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2ac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaa: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2b0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xab: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2b4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xac: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2b8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xad: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 700))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xae: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2cc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2d0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2d4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2d8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2dc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2e0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2e4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2e8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2ec))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xba: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2f0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2f4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2f8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2fc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbe: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x300))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x304))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x308))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x310))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x314))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x318))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x31c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 800))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 199: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x324))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 200: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x328))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x32c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xca: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x330))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x334))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x338))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x33c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xce: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x340))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x344))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x348))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x350))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x354))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x358))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x35c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x360))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x364))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x368))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x36c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xda: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x370))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x374))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdc: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x378))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdd: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x37c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xde: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x380))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdf: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 900))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x388))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x390))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x394))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x398))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x39c))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3a0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe7: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3a4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe8: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3a8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe9: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3ac))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xea: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3b0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xeb: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3b4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xec: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3b8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xed: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3bc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xee: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xef: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf0: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf1: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3cc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf2: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3d0))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf3: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3d4))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3d8))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf5: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3dc))(this,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf6: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3e0))(this,param_1,param_2,uVar1 + 0x10);
    }
  }
  return uVar1;
}

/* ref: FUN_0106f8a0 */
uint F_0106f8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106f8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_01050d30(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf1 */
uint F_0106f8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x106f8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf3 */
uint F_0106f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_0106c890((uint)*(ushort *)(param_1 + 2),param_1 + 0x10,param_2 + -0x10,0);
  uVar1 = F_0106c930(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf2 */
unsigned int F_0106f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf3 */
unsigned int F_0106f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106f950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: PacketBufferTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0106f960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106f960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0106f990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106f990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106f9d0 */
uint F_0106f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x106f9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf2 */
uint F_0106fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106fa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __time64_t _Var1;
  
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *(undefined2 *)((int)param_1 + 2) = *(undefined2 *)(this + 0x30);
  *(undefined1 *)((int)param_1 + 1) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  param_1[2] = (uint)_Var1;
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(this + 0x34);
  return (uint)_Var1;
}

/* ref: FUN_0106fa60 */
uint F_0106fa60(unsigned int gen_a0)
{
  GEN_ENTER(0x106fa60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: FUN_0106fa90 */
unsigned int F_0106fa90(unsigned int gen_a0)
{
  GEN_ENTER(0x106fa90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  return 0;
}

/* ref: FUN_0106fab0 */
uint F_0106fab0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fab0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5738));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoUpPacketBuilder::vf0 */
uint F_0106fae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106fae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106fb20 */
uint F_0106fb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x106fb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30((undefined *)((int)this + 0x20),param_2,param_4);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x28) = *param_3;
  *(undefined4 *)((int)this + 0x2c) = param_3[1];
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf0 */
uint F_0106fb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106fb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106fbc0 */
uint F_0106fbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30((undefined *)((int)this + 0x20),param_2,param_3);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined2 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: Unwind@0106fc20 */
uint F_0106fc20(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc20u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fc28 */
uint F_0106fc28(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc28u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5cbc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc43 */
uint F_0106fc43(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc43u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fc4b */
uint F_0106fc4b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc4bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5ce8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc66 */
uint F_0106fc66(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc66u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fc6e */
uint F_0106fc6e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc6eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d14)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc89 */
unsigned int F_0106fc89(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc89u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00478e10(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@0106fc91 */
uint F_0106fc91(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc91u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00479860(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x18))));
  return uVar1;
}

/* ref: FUN_0106fc9c */
uint F_0106fc9c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc9cu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d48)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fcb7 */
uint F_0106fcb7(unsigned int gen_a0)
{
  GEN_ENTER(0x106fcb7u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fcbf */
uint F_0106fcbf(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fcbfu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_0106fcda */
uint F_0106fcda(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fcdau, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f69e0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd00 */
unsigned int F_0106fd00(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd00u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return 0;
}

/* ref: FUN_0106fd08 */
uint F_0106fd08(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd08u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c0c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd30 */
unsigned int F_0106fd30(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@0106fd38 */
unsigned int F_0106fd38(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd38u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_0106fd40 */
uint F_0106fd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c40)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd60 */
unsigned int F_0106fd60(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd60u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@0106fd68 */
unsigned int F_0106fd68(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd68u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_0106fd70 */
uint F_0106fd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x28) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd90 */
unsigned int F_0106fd90(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd90u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@0106fd98 */
unsigned int F_0106fd98(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd98u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_0106fda0 */
uint F_0106fda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x24) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ca8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fdc0 */
unsigned int F_0106fdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdc0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1870(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@0106fdc8 */
unsigned int F_0106fdc8(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdc8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1a30(*(int *)(in_ebp + -0x10) + 4);
  return 0;
}

/* ref: Unwind@0106fdd3 */
unsigned int F_0106fdd3(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdd3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x10))));
  return 0;
}

/* ref: Unwind@0106fdde */
uint F_0106fdde(unsigned int gen_a0)
{
  GEN_ENTER(0x106fddeu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3020(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x20))));
  return uVar1;
}

/* ref: Unwind@0106fde9 */
uint F_0106fde9(unsigned int gen_a0)
{
  GEN_ENTER(0x106fde9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3070(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x3c))));
  return uVar1;
}

/* ref: Unwind@0106fdf4 */
uint F_0106fdf4(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdf4u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb30c0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x58))));
  return uVar1;
}

/* ref: Unwind@0106fdff */
uint F_0106fdff(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdffu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb30d0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x3f0))));
  return uVar1;
}

/* ref: FUN_0106fe0d */
uint F_0106fe0d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fe0du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ccc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fe30 */
unsigned int F_0106fe30(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x128));
  return 0;
}

/* ref: Unwind@0106fe3b */
unsigned int F_0106fe3b(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe3bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x128));
  return 0;
}

/* ref: Unwind@0106fe46 */
uint F_0106fe46(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe46u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x140));
  return uVar1;
}

/* ref: FUN_0106fe54 */
uint F_0106fe54(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fe54u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x144) ^ param_2 + 0xcU);
  F_00c47745(*(uint *)(param_2 + -4) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6d40)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fe80 */
unsigned int F_0106fe80(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe80u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1870(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@0106fe88 */
unsigned int F_0106fe88(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe88u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1a30(*(int *)(in_ebp + -0x10) + 4);
  return 0;
}

/* ref: Unwind@0106fe93 */
unsigned int F_0106fe93(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe93u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x10))));
  return 0;
}

/* ref: Unwind@0106fe9e */
uint F_0106fe9e(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe9eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3020(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x20))));
  return uVar1;
}

/* ref: Unwind@0106fea9 */
uint F_0106fea9(unsigned int gen_a0)
{
  GEN_ENTER(0x106fea9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3070(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x3c))));
  return uVar1;
}

/* ref: FUN_0106feb4 */
uint F_0106feb4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106feb4u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6d64)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fed0 */
uint F_0106fed0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fed0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5b50((undefined *)(in_ebp + -0x1c));
  return uVar1;
}

/* ref: Unwind@0106fed8 */
unsigned int F_0106fed8(unsigned int gen_a0)
{
  GEN_ENTER(0x106fed8u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  F_00cb5a10();
  return 0;
}

/* ref: FUN_0106fee0 */
uint F_0106fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x28) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6dc0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff00 */
uint F_0106ff00(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff00u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106ff0b */
uint F_0106ff0b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff0bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6dec)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff30 */
unsigned int F_0106ff30(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb4af0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 8))));
  return 0;
}

/* ref: FUN_0106ff3b */
uint F_0106ff3b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff3bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e18)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff60 */
uint F_0106ff60(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff60u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106ff68 */
uint F_0106ff68(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff68u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e44)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff90 */
uint F_0106ff90(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff90u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106ff98 */
uint F_0106ff98(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff98u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e70)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ffc0 */
uint F_0106ffc0(unsigned int gen_a0)
{
  GEN_ENTER(0x106ffc0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106ffc8 */
uint F_0106ffc8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ffc8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e9c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fff0 */
uint F_0106fff0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fff0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_0106fff8 */
uint F_0106fff8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fff8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ec8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070020 */
unsigned int F_01070020(unsigned int gen_a0)
{
  GEN_ENTER(0x1070020u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return 0;
}

/* ref: FUN_01070028 */
uint F_01070028(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070028u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ef4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070050 */
unsigned int F_01070050(unsigned int gen_a0)
{
  GEN_ENTER(0x1070050u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@01070058 */
unsigned int F_01070058(unsigned int gen_a0)
{
  GEN_ENTER(0x1070058u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 8))));
  return 0;
}

/* ref: FUN_01070063 */
uint F_01070063(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070063u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x10) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6f28)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070080 */
unsigned int F_01070080(unsigned int gen_a0)
{
  GEN_ENTER(0x1070080u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@01070088 */
uint F_01070088(unsigned int gen_a0)
{
  GEN_ENTER(0x1070088u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5e70(*(undefined4 *)(in_ebp + 8));
  return uVar1;
}

/* ref: Unwind@010700b0 */
unsigned int F_010700b0(unsigned int gen_a0)
{
  GEN_ENTER(0x10700b0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@010700b8 */
unsigned int F_010700b8(unsigned int gen_a0)
{
  GEN_ENTER(0x10700b8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 8))));
  return 0;
}

/* ref: FUN_010700c3 */
uint F_010700c3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10700c3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6f90)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010700e0 */
unsigned int F_010700e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10700e0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return 0;
}

/* ref: FUN_010700e8 */
uint F_010700e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10700e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6fbc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070110 */
unsigned int F_01070110(unsigned int gen_a0)
{
  GEN_ENTER(0x1070110u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x18));
  return 0;
}

/* ref: Unwind@01070118 */
unsigned int F_01070118(unsigned int gen_a0)
{
  GEN_ENTER(0x1070118u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x18));
  return 0;
}

/* ref: FUN_01070120 */
uint F_01070120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x1c) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ff0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070140 */
uint F_01070140(unsigned int gen_a0)
{
  GEN_ENTER(0x1070140u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: Unwind@0107014b */
unsigned int F_0107014b(unsigned int gen_a0)
{
  GEN_ENTER(0x107014bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@01070153 */
unsigned int F_01070153(unsigned int gen_a0)
{
  GEN_ENTER(0x1070153u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x14) + 8))));
  return 0;
}

/* ref: FUN_0107015e */
uint F_0107015e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x107015eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x18) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f702c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070180 */
unsigned int F_01070180(unsigned int gen_a0)
{
  GEN_ENTER(0x1070180u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: FUN_01070188 */
uint F_01070188(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070188u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7058)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010701b0 */
unsigned int F_010701b0(unsigned int gen_a0)
{
  GEN_ENTER(0x10701b0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: FUN_010701b8 */
uint F_010701b8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10701b8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7084)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010701e0 */
unsigned int F_010701e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10701e0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_010701e8 */
uint F_010701e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10701e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x18) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f70b0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070210 */
uint F_01070210(unsigned int gen_a0)
{
  GEN_ENTER(0x1070210u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5fd0(in_ebp + -0x140);
  return uVar1;
}

/* ref: Unwind@0107021b */
uint F_0107021b(unsigned int gen_a0)
{
  GEN_ENTER(0x107021bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5fd0(in_ebp + -0x248);
  return uVar1;
}

/* ref: Unwind@01070226 */
unsigned int F_01070226(unsigned int gen_a0)
{
  GEN_ENTER(0x1070226u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x18));
  return 0;
}

/* ref: Unwind@0107022e */
unsigned int F_0107022e(unsigned int gen_a0)
{
  GEN_ENTER(0x107022eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x20));
  return 0;
}

/* ref: Unwind@01070236 */
unsigned int F_01070236(unsigned int gen_a0)
{
  GEN_ENTER(0x1070236u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x34));
  return 0;
}

/* ref: Unwind@0107023e */
unsigned int F_0107023e(unsigned int gen_a0)
{
  GEN_ENTER(0x107023eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x2c));
  return 0;
}

/* ref: Unwind@01070246 */
uint F_01070246(unsigned int gen_a0)
{
  GEN_ENTER(0x1070246u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb6940((undefined *)(in_ebp + -0x34));
  return uVar1;
}

/* ref: Unwind@0107024e */
uint F_0107024e(unsigned int gen_a0)
{
  GEN_ENTER(0x107024eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x38));
  return uVar1;
}

/* ref: Unwind@01070259 */
unsigned int F_01070259(unsigned int gen_a0)
{
  GEN_ENTER(0x1070259u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp + -0x38));
  return 0;
}

/* ref: Unwind@01070261 */
unsigned int F_01070261(unsigned int gen_a0)
{
  GEN_ENTER(0x1070261u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x38) + 8))));
  return 0;
}

/* ref: Unwind@0107026c */
unsigned int F_0107026c(unsigned int gen_a0)
{
  GEN_ENTER(0x107026cu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x34));
  return 0;
}

/* ref: FUN_01070274 */
uint F_01070274(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070274u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x24c) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f70d4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010702a0 */
unsigned int F_010702a0(unsigned int gen_a0)
{
  GEN_ENTER(0x10702a0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: Unwind@010702a8 */
unsigned int F_010702a8(unsigned int gen_a0)
{
  GEN_ENTER(0x10702a8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp + -0x14));
  return 0;
}

/* ref: FUN_010702b0 */
uint F_010702b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10702b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x10) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7160)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010702d0 */
uint F_010702d0(unsigned int gen_a0)
{
  GEN_ENTER(0x10702d0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a30(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: Unwind@010702d8 */
unsigned int F_010702d8(unsigned int gen_a0)
{
  GEN_ENTER(0x10702d8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb5f00(*(int *)(in_ebp + -0x10) + 0xc);
  return 0;
}

/* ref: Unwind@010702e3 */
unsigned int F_010702e3(unsigned int gen_a0)
{
  GEN_ENTER(0x10702e3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x14))));
  return 0;
}

/* ref: Unwind@010702ee */
uint F_010702ee(unsigned int gen_a0)
{
  GEN_ENTER(0x10702eeu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb8370(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x34))));
  return uVar1;
}

/* ref: Unwind@010702f9 */
uint F_010702f9(unsigned int gen_a0)
{
  GEN_ENTER(0x10702f9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7d90(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x44))));
  return uVar1;
}

/* ref: Unwind@01070304 */
uint F_01070304(unsigned int gen_a0)
{
  GEN_ENTER(0x1070304u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb69e0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x68))));
  return uVar1;
}

/* ref: Unwind@0107030f */
unsigned int F_0107030f(unsigned int gen_a0)
{
  GEN_ENTER(0x107030fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb6a40(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x84))));
  return 0;
}

/* ref: FUN_0107031d */
uint F_0107031d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x107031du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7184)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070340 */
unsigned int F_01070340(unsigned int gen_a0)
{
  GEN_ENTER(0x1070340u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@01070348 */
uint F_01070348(unsigned int gen_a0)
{
  GEN_ENTER(0x1070348u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7bc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 8))));
  return uVar1;
}

/* ref: FUN_01070353 */
uint F_01070353(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070353u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f71f0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070370 */
unsigned int F_01070370(unsigned int gen_a0)
{
  GEN_ENTER(0x1070370u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb8750(in_ebp + 0xc);
  return 0;
}

/* ref: Unwind@01070378 */
uint F_01070378(unsigned int gen_a0)
{
  GEN_ENTER(0x1070378u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7ab0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_01070380 */
uint F_01070380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7224)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010703a0 */
uint F_010703a0(unsigned int gen_a0)
{
  GEN_ENTER(0x10703a0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: Unwind@010703ab */
unsigned int F_010703ab(unsigned int gen_a0)
{
  GEN_ENTER(0x10703abu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb8750(in_ebp + -0x1c);
  return 0;
}

/* ref: Unwind@010703b3 */
uint F_010703b3(unsigned int gen_a0)
{
  GEN_ENTER(0x10703b3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7ab0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_010703bb */
uint F_010703bb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10703bbu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x20) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7260)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010703e0 */
uint F_010703e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10703e0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7ab0(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: Unwind@010703e8 */
unsigned int F_010703e8(unsigned int gen_a0)
{
  GEN_ENTER(0x10703e8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb8750(*(int *)(in_ebp + -0x10) + 0x18);
  return 0;
}

/* ref: FUN_010703f3 */
uint F_010703f3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10703f3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x10) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7294)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070410 */
unsigned int F_01070410(unsigned int gen_a0)
{
  GEN_ENTER(0x1070410u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: Unwind@01070418 */
uint F_01070418(unsigned int gen_a0)
{
  GEN_ENTER(0x1070418u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7bc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 8))));
  return uVar1;
}

/* ref: FUN_01070423 */
uint F_01070423(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070423u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f72c8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070440 */
uint F_01070440(unsigned int gen_a0)
{
  GEN_ENTER(0x1070440u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + 0x10));
  return uVar1;
}

/* ref: Unwind@0107044b */
uint F_0107044b(unsigned int gen_a0)
{
  GEN_ENTER(0x107044bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + 0x10));
  return uVar1;
}

/* ref: Unwind@01070456 */
uint F_01070456(unsigned int gen_a0)
{
  GEN_ENTER(0x1070456u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + 0x10));
  return uVar1;
}

/* ref: FUN_01070461 */
uint F_01070461(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070461u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x10) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7304)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070480 */
uint F_01070480(unsigned int gen_a0)
{
  GEN_ENTER(0x1070480u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a30(*(undefined * PTR32 *)(in_ebp + -0x134));
  return uVar1;
}

/* ref: Unwind@0107048b */
unsigned int F_0107048b(unsigned int gen_a0)
{
  GEN_ENTER(0x107048bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb5f00(*(int *)(in_ebp + -0x134) + 0xc);
  return 0;
}

/* ref: Unwind@01070499 */
unsigned int F_01070499(unsigned int gen_a0)
{
  GEN_ENTER(0x1070499u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x134) + 0x14))));
  return 0;
}

/* ref: Unwind@010704a7 */
uint F_010704a7(unsigned int gen_a0)
{
  GEN_ENTER(0x10704a7u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb8370(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x134) + 0x34))));
  return uVar1;
}

/* ref: Unwind@010704b5 */
uint F_010704b5(unsigned int gen_a0)
{
  GEN_ENTER(0x10704b5u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7d90(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x134) + 0x44))));
  return uVar1;
}

/* ref: Unwind@010704c3 */
uint F_010704c3(unsigned int gen_a0)
{
  GEN_ENTER(0x10704c3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb69e0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x134) + 0x68))));
  return uVar1;
}

/* ref: Unwind@010704d1 */
unsigned int F_010704d1(unsigned int gen_a0)
{
  GEN_ENTER(0x10704d1u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb6a40(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x134) + 0x84))));
  return 0;
}

/* ref: Unwind@010704e2 */
uint F_010704e2(unsigned int gen_a0)
{
  GEN_ENTER(0x10704e2u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x118));
  return uVar1;
}

/* ref: Unwind@010704f0 */
uint F_010704f0(unsigned int gen_a0)
{
  GEN_ENTER(0x10704f0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x118));
  return uVar1;
}

/* ref: FUN_010704fe */
uint F_010704fe(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10704feu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x138) ^ param_2 + 0xcU);
  F_00c47745(*(uint *)(param_2 + -4) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7328)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070530 */
unsigned int F_01070530(unsigned int gen_a0)
{
  GEN_ENTER(0x1070530u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1330(*(undefined4 *)(in_ebp + -0x40));
  return 0;
}

/* ref: FUN_0107053b */
uint F_0107053b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x107053bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x68) ^ param_2 + 0xcU);
  F_00c47745(*(uint *)(param_2 + -4) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f739c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070560 */
unsigned int F_01070560(unsigned int gen_a0)
{
  GEN_ENTER(0x1070560u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb8740(*(undefined4 *)(in_ebp + -0x10));
  return 0;
}

/* ref: FUN_01070568 */
uint F_01070568(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070568u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f73c8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070590 */
uint F_01070590(unsigned int gen_a0)
{
  GEN_ENTER(0x1070590u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5e70(*(undefined4 *)(in_ebp + 8));
  return uVar1;
}

/* ref: FUN_0107059b */
uint F_0107059b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x107059bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x10) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f73f4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010705c0 */
uint F_010705c0(unsigned int gen_a0)
{
  GEN_ENTER(0x10705c0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cba040(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: FUN_010705c8 */
uint F_010705c8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10705c8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x10) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7420)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010705f0 */
uint F_010705f0(unsigned int gen_a0)
{
  GEN_ENTER(0x10705f0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + 0xc));
  return uVar1;
}

/* ref: Unwind@010705fb */
uint F_010705fb(unsigned int gen_a0)
{
  GEN_ENTER(0x10705fbu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cba040(*(undefined * PTR32 *)(in_ebp + 0xc));
  return uVar1;
}

/* ref: FUN_01070603 */
uint F_01070603(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070603u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x14) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7454)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070620 */
uint F_01070620(unsigned int gen_a0)
{
  GEN_ENTER(0x1070620u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7830(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: Unwind@01070628 */
unsigned int F_01070628(unsigned int gen_a0)
{
  GEN_ENTER(0x1070628u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1a30(*(int *)(in_ebp + -0x10) + 0xc);
  return 0;
}

/* ref: FUN_01070633 */
uint F_01070633(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070633u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x10) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7488)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070650 */
uint F_01070650(unsigned int gen_a0)
{
  GEN_ENTER(0x1070650u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7830(*(undefined * PTR32 *)(in_ebp + -0x10));
  return uVar1;
}

/* ref: Unwind@01070658 */
unsigned int F_01070658(unsigned int gen_a0)
{
  GEN_ENTER(0x1070658u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1a30(*(int *)(in_ebp + -0x10) + 0xc);
  return 0;
}

/* ref: Unwind@01070663 */
unsigned int F_01070663(unsigned int gen_a0)
{
  GEN_ENTER(0x1070663u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x14))));
  return 0;
}

/* ref: Unwind@0107066e */
uint F_0107066e(unsigned int gen_a0)
{
  GEN_ENTER(0x107066eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cba3d0(((undefined *)GEN_TOP((*(int *)(in_ebp + -0x10) + 0x34))));
  return uVar1;
}

/* ref: FUN_01070679 */
uint F_01070679(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070679u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0xc) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f74cc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010706a0 */
unsigned int F_010706a0(unsigned int gen_a0)
{
  GEN_ENTER(0x10706a0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1330(*(undefined4 *)(in_ebp + -0x58));
  return 0;
}

/* ref: FUN_010706ab */
uint F_010706ab(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10706abu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x74) ^ param_2 + 0xcU);
  F_00c47745(*(uint *)(param_2 + -4) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f74f8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010706d0 */
uint F_010706d0(unsigned int gen_a0)
{
  GEN_ENTER(0x10706d0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp + -0x114));
  return uVar1;
}

/* ref: Unwind@010706de */
uint F_010706de(unsigned int gen_a0)
{
  GEN_ENTER(0x10706deu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cba040(*(undefined * PTR32 *)(in_ebp + -0x114));
  return uVar1;
}

/* ref: FUN_010706e9 */
uint F_010706e9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10706e9u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 + -0x114) ^ param_2 + 0xcU);
  F_00c47745(*(uint *)(param_2 + -4) ^ param_2 + 0xcU);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f752c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_01070720 */
unsigned int F_01070720(void)
{
  GEN_ENTER(0x1070720u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x136fe14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x136fe14), REFG(float, 0x12fa398));
  return 0;
}

/* ref: FUN_01070740 */
unsigned int F_01070740(void)
{
  GEN_ENTER(0x1070740u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x136fe18) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x136fe18), REFG(float, 0x12fa3c8));
  return 0;
}

/* ref: FUN_01070760 */
uint F_01070760(void)
{
  GEN_ENTER(0x1070760u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00421920(&REFG(undefined, 0x136fe20));
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x136fe20) = (*(undefined * PTR32 (*)[3])REFP(0x1080270));
  uVar1 = F_00c47de6(((code *)REFP(0x107bac0)));
  return uVar1;
}

/* ref: FUN_01070780 */
uint F_01070780(void)
{
  GEN_ENTER(0x1070780u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00421a50(&REFG(undefined, 0x13700d8));
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x13700d8) = (*(undefined * PTR32 (*)[3])REFP(0x1080280));
  uVar1 = F_00c47de6(((code *)REFP(0x107bad0)));
  return uVar1;
}

/* ref: FUN_010707a0 */
uint F_010707a0(void)
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
unsigned int F_01070820(void)
{
  GEN_ENTER(0x1070820u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x1370b9c) = REFG(float, 0x12fa640) * REFG(float, 0x12fa640);
  return 0;
}

/* ref: FUN_01070840 */
uint F_01070840(void)
{
  GEN_ENTER(0x1070840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int, 0x1370bd4) == 0) {
    F_00405f60();
  }
  REFG(char * PTR32, 0x1370bcc) = "GlobalNew";
  uVar1 = F_00c47de6(((code *)REFP(0x107bae0)));
  return uVar1;
}

/* ref: FUN_01070870 */
unsigned int F_01070870(void)
{
  GEN_ENTER(0x1070870u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1370c10) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1370c10), REFG(float, 0x12fc7b0));
  return 0;
}

/* ref: FUN_01070890 */
unsigned int F_01070890(void)
{
  GEN_ENTER(0x1070890u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1370c14) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1370c14), REFG(float, 0x12fc7e0));
  return 0;
}

/* ref: FUN_010708b0 */
uint F_010708b0(void)
{
  GEN_ENTER(0x10708b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370c28),&REFG(undefined, 0x1088157),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107baf0)));
  return uVar1;
}

/* ref: FUN_010708e0 */
uint F_010708e0(void)
{
  GEN_ENTER(0x10708e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370c80),&REFG(undefined, 0x108b178),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb00)));
  return uVar1;
}

/* ref: FUN_01070910 */
uint F_01070910(void)
{
  GEN_ENTER(0x1070910u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370cd8),&REFG(undefined, 0x108b17c),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb10)));
  return uVar1;
}

/* ref: FUN_01070940 */
uint F_01070940(void)
{
  GEN_ENTER(0x1070940u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370d30),&REFG(undefined, 0x108b180),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb20)));
  return uVar1;
}

/* ref: FUN_01070970 */
uint F_01070970(void)
{
  GEN_ENTER(0x1070970u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370d88),&REFG(undefined, 0x108b184),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb30)));
  return uVar1;
}

/* ref: FUN_010709a0 */
uint F_010709a0(void)
{
  GEN_ENTER(0x10709a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370de0),(*(undefined * PTR32 (*)[1])REFP(0x108b188)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb40)));
  return uVar1;
}

/* ref: FUN_010709d0 */
uint F_010709d0(void)
{
  GEN_ENTER(0x10709d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370e38),(*(undefined * PTR32 (*)[1])REFP(0x108b18c)),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb50)));
  return uVar1;
}

/* ref: FUN_01070a00 */
uint F_01070a00(void)
{
  GEN_ENTER(0x1070a00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370e90),&REFG(undefined, 0x108816b),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb60)));
  return uVar1;
}

/* ref: FUN_01070a30 */
uint F_01070a30(void)
{
  GEN_ENTER(0x1070a30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370ee8),"japan",REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb70)));
  return uVar1;
}

/* ref: FUN_01070a60 */
uint F_01070a60(void)
{
  GEN_ENTER(0x1070a60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370f40),"north_america",REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb80)));
  return uVar1;
}

/* ref: FUN_01070a90 */
uint F_01070a90(void)
{
  GEN_ENTER(0x1070a90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370f98),"europe",REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bb90)));
  return uVar1;
}

/* ref: FUN_01070ac0 */
uint F_01070ac0(void)
{
  GEN_ENTER(0x1070ac0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1370ff0),"china",REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bba0)));
  return uVar1;
}

/* ref: FUN_01070af0 */
unsigned int F_01070af0(void)
{
  GEN_ENTER(0x1070af0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1371050) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1371050), REFG(float, 0x12fd048));
  return 0;
}

/* ref: FUN_01070b10 */
unsigned int F_01070b10(void)
{
  GEN_ENTER(0x1070b10u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1371054) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1371054), REFG(float, 0x12fd078));
  return 0;
}

/* ref: FUN_01070b30 */
uint F_01070b30(void)
{
  GEN_ENTER(0x1070b30u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(DWORD *)&REFG(undefined, 0x1371058) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)&REFG(undefined, 0x137105c) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(undefined8 *)&REFG(undefined, 0x1371068) = 0;
  *(DWORD *)&REFG(undefined, 0x1371060) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)&REFG(undefined, 0x1371064) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  uVar1 = F_00c47de6(((code *)REFP(0x107bbb0)));
  return uVar1;
}

/* ref: FUN_01070b90 */
uint F_01070b90(void)
{
  GEN_ENTER(0x1070b90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bbd0)));
  return uVar1;
}

/* ref: FUN_01070ba0 */
uint F_01070ba0(void)
{
  GEN_ENTER(0x1070ba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bbc0)));
  return uVar1;
}

/* ref: FUN_01070bb0 */
unsigned int F_01070bb0(void)
{
  GEN_ENTER(0x1070bb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1372348) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1372348), REFG(float, 0x12fdec0));
  return 0;
}

/* ref: FUN_01070bd0 */
unsigned int F_01070bd0(void)
{
  GEN_ENTER(0x1070bd0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137234c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137234c), REFG(float, 0x12fdef0));
  return 0;
}

/* ref: FUN_01070bf0 */
uint F_01070bf0(void)
{
  GEN_ENTER(0x1070bf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042cc20(&REFG(undefined, 0x1372350),&REFG(undefined, 0x108f7ac),REFG(undefined4, 0x108cc50));
  uVar1 = F_00c47de6(((code *)REFP(0x107bc00)));
  return uVar1;
}

/* ref: FUN_01070c20 */
uint F_01070c20(void)
{
  GEN_ENTER(0x1070c20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x13723a8) = F_004296a0(0x1c,0,400);
  *(uint *)REFG(undefined4, 0x13723a8) = REFG(undefined4, 0x13723a8);
  *(uint *)(REFG(undefined4, 0x13723a8) + 4) = REFG(undefined4, 0x13723a8);
  *(uint *)(REFG(undefined4, 0x13723a8) + 8) = REFG(undefined4, 0x13723a8);
  *(undefined1 *)(REFG(undefined4, 0x13723a8) + 0x18) = 1;
  *(undefined1 *)(REFG(undefined4, 0x13723a8) + 0x19) = 1;
  uVar1 = F_00c47de6(((code *)REFP(0x107bc60)));
  return uVar1;
}

/* ref: FUN_01070c70 */
unsigned int F_01070c70(void)
{
  GEN_ENTER(0x1070c70u, 0u, 0u, 0u, 0u);
  *(float *)&REFG(undefined, 0x13723b4) =
       (float)((float10)*(float *)&REFG(undefined, 0x12fdf54) / (float10)*(double *)&REFG(undefined, 0x10919f0));
  return 0;
}

/* ref: FUN_01070c90 */
unsigned int F_01070c90(void)
{
  GEN_ENTER(0x1070c90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1372634) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1372634), REFG(float, 0x1300f80));
  return 0;
}

/* ref: FUN_01070cb0 */
unsigned int F_01070cb0(void)
{
  GEN_ENTER(0x1070cb0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1372638) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1372638), REFG(float, 0x1300fb0));
  return 0;
}

/* ref: FUN_01070cd0 */
uint F_01070cd0(void)
{
  GEN_ENTER(0x1070cd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bd70)));
  return uVar1;
}

/* ref: FUN_01070ce0 */
uint F_01070ce0(void)
{
  GEN_ENTER(0x1070ce0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bce0)));
  return uVar1;
}

/* ref: FUN_01070cf0 */
uint F_01070cf0(void)
{
  GEN_ENTER(0x1070cf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x1372678));
  uVar1 = F_00c47de6(((code *)REFP(0x107bca0)));
  return uVar1;
}

/* ref: FUN_01070d10 */
uint F_01070d10(void)
{
  GEN_ENTER(0x1070d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_0042b630(&REFG(undefined, 0x13726d0));
  uVar1 = F_00c47de6(((code *)REFP(0x107bcb0)));
  return uVar1;
}

/* ref: FUN_01070d30 */
uint F_01070d30(void)
{
  GEN_ENTER(0x1070d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bd30)));
  return uVar1;
}

/* ref: FUN_01070d40 */
uint F_01070d40(void)
{
  GEN_ENTER(0x1070d40u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bcc0)));
  return uVar1;
}

/* ref: FUN_01070d50 */
uint F_01070d50(void)
{
  GEN_ENTER(0x1070d50u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004a2270(&REFG(undefined4, 0x13728b8));
  uVar1 = F_00c47de6(((code *)REFP(0x107bd80)));
  return uVar1;
}

/* ref: FUN_01070d70 */
unsigned int F_01070d70(void)
{
  GEN_ENTER(0x1070d70u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137557c) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137557c), REFG(float, 0x1301374));
  return 0;
}

/* ref: FUN_01070d90 */
unsigned int F_01070d90(void)
{
  GEN_ENTER(0x1070d90u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375580) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375580), REFG(float, 0x13013a4));
  return 0;
}

/* ref: FUN_01070db0 */
uint F_01070db0(void)
{
  GEN_ENTER(0x1070db0u, 0u, 0u, 0u, 0u);
  __time64_t _Var1;
  
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  REFG(undefined4, 0x1375584) = (uint)_Var1;
  REFG(undefined4, 0x1375588) = 0;
  REFG(undefined4, 0x137558c) = 0;
  REFG(undefined4, 0x1375590) = 0;
  return (uint)_Var1;
}

/* ref: FUN_01070de0 */
uint F_01070de0(void)
{
  GEN_ENTER(0x1070de0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004a9ec0(&REFG(undefined, 0x1375598));
  uVar1 = F_00c47de6(((code *)REFP(0x107bd90)));
  return uVar1;
}

/* ref: FUN_01070e00 */
uint F_01070e00(void)
{
  GEN_ENTER(0x1070e00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bda0)));
  return uVar1;
}

/* ref: FUN_01070e10 */
uint F_01070e10(void)
{
  GEN_ENTER(0x1070e10u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar1 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar1 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar2 = *puVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar1 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)uVar2) {
    puVar1 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar2 = (*puVar1 & 0x3ff) << 10;
  REFG(undefined4, 0x1301dd8) = uVar2;
  return uVar2;
}

/* ref: FUN_01070e70 */
uint F_01070e70(void)
{
  GEN_ENTER(0x1070e70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  uVar1 = F_00c47de6(((code *)REFP(0x107bdb0)));
  return uVar1;
}

/* ref: FUN_01070e90 */
unsigned int F_01070e90(void)
{
  GEN_ENTER(0x1070e90u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x130236c) = REFG(undefined4, 0x130236c) & 0xffffff03;
  return 0;
}

/* ref: FUN_01070ea0 */
uint F_01070ea0(void)
{
  GEN_ENTER(0x1070ea0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1302370) = ((uint)uVar1 << 5 | 7) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01070f20 */
uint F_01070f20(void)
{
  GEN_ENTER(0x1070f20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1302374) = ((uint)uVar1 << 5 | 0xf) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01070fa0 */
uint F_01070fa0(void)
{
  GEN_ENTER(0x1070fa0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar1 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar1 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar2 = *puVar1;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar1 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)uVar2) {
    puVar1 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar2 = (*puVar1 & 0x3ff) << 10;
  REFG(undefined4, 0x1375a5c) = uVar2;
  return uVar2;
}

/* ref: FUN_01071000 */
unsigned int F_01071000(void)
{
  GEN_ENTER(0x1071000u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375a74) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375a74), REFG(float, 0x13023e4));
  return 0;
}

/* ref: FUN_01071020 */
unsigned int F_01071020(void)
{
  GEN_ENTER(0x1071020u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375a78) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375a78), REFG(float, 0x1302414));
  return 0;
}

/* ref: FUN_01071040 */
uint F_01071040(void)
{
  GEN_ENTER(0x1071040u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x1302e00) = 0;
  REFG(undefined4, 0x1302e04) = 0;
  REFG(undefined4, 0x1302e08) = 0;
  REFG(undefined4, 0x1302e0c) = REFG(float, 0x1087f04);
  return REFG(float, 0x1087f04);
}

/* ref: FUN_010710b0 */
uint F_010710b0(void)
{
  GEN_ENTER(0x10710b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bdc0)));
  return uVar1;
}

/* ref: FUN_010710c0 */
unsigned int F_010710c0(void)
{
  GEN_ENTER(0x10710c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b04) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b04), REFG(float, 0x1305634));
  return 0;
}

/* ref: FUN_010710e0 */
unsigned int F_010710e0(void)
{
  GEN_ENTER(0x10710e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b08) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b08), REFG(float, 0x1305664));
  return 0;
}

/* ref: FUN_01071100 */
unsigned int F_01071100(void)
{
  GEN_ENTER(0x1071100u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b80) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b80), REFG(float, 0x1305bb8));
  return 0;
}

/* ref: FUN_01071120 */
unsigned int F_01071120(void)
{
  GEN_ENTER(0x1071120u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b84) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b84), REFG(float, 0x1305be8));
  return 0;
}

/* ref: FUN_01071140 */
uint F_01071140(void)
{
  GEN_ENTER(0x1071140u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00b74aa0(&REFG(undefined4, 0x1375b90));
  REFG(undefined * PTR32 * PTR32, 0x1375bc0) = (*(undefined * PTR32 (*)[8])REFP(0x109cae8));
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x1375bc8) = (*(undefined * PTR32 (*)[2])REFP(0x109c9e8));
  *(undefined4 *)&REFG(undefined, 0x1375bd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375bd4) = 0;
  *(undefined4 *)&REFG(undefined, 0x1375bd8) = 1;
  F_0054d740(&REFG(undefined, 0x1375c68));
  *(undefined4 *)&REFG(undefined, 0x1376b78) = 0;
  *(undefined4 *)&REFG(undefined, 0x13770dc) = 0;
  F_0054f210(&REFG(undefined, 0x1377640));
  *(undefined4 *)&REFG(undefined, 0x1378b9c) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba0) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba4) = 0;
  *(undefined4 *)&REFG(undefined, 0x1378ba8) = 0;
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x1379680) = (*(undefined * PTR32 (*)[1])REFP(0x109c954));
  *(undefined4 *)&REFG(undefined, 0x1379684) = 0;
  *(undefined2 *)&REFG(undefined1, 0x1379688) = 0x100;
  uVar1 = F_00c47de6(((code *)REFP(0x107bde0)));
  return uVar1;
}

/* ref: FUN_010711e0 */
unsigned int F_010711e0(void)
{
  GEN_ENTER(0x10711e0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1375b88) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1375b88), REFG(float, 0x1305b68));
  return 0;
}

/* ref: FUN_01071200 */
unsigned int F_01071200(void)
{
  GEN_ENTER(0x1071200u, 0u, 0u, 0u, 0u);
  REFG(float, 0x1375b8c) = ((float)GEN_TOF((((float10)*(float *)&REFG(undefined, 0x1375b88) / (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                        (float10)*(double *)&REFG(undefined, 0x10947f0))));
  return 0;
}

/* ref: FUN_01071220 */
unsigned int F_01071220(void)
{
  GEN_ENTER(0x1071220u, 0u, 0u, 0u, 0u);
  REFG(float, 0x13796f0) = REFG(float, 0x1305c4c);
  return 0;
}

/* ref: FUN_01071240 */
unsigned int F_01071240(void)
{
  GEN_ENTER(0x1071240u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x13796f4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x13796f4), REFG(float, 0x13796f0));
  return 0;
}

/* ref: FUN_01071260 */
unsigned int F_01071260(void)
{
  GEN_ENTER(0x1071260u, 0u, 0u, 0u, 0u);
  REFG(float, 0x13796f8) = REFG(float, 0x13796f0);
  return 0;
}

/* ref: FUN_01071280 */
unsigned int F_01071280(void)
{
  GEN_ENTER(0x1071280u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x13796fc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x13796fc), REFG(float, 0x1305c8c));
  return 0;
}

/* ref: FUN_010712a0 */
uint F_010712a0(void)
{
  GEN_ENTER(0x10712a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107bdd0)));
  return uVar1;
}

/* ref: FUN_010712b0 */
unsigned int F_010712b0(void)
{
  GEN_ENTER(0x10712b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379714) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379714), REFG(float, 0x1306478));
  return 0;
}

/* ref: FUN_010712d0 */
unsigned int F_010712d0(void)
{
  GEN_ENTER(0x10712d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379718) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379718), REFG(float, 0x13064a8));
  return 0;
}

/* ref: FUN_010712f0 */
unsigned int F_010712f0(void)
{
  GEN_ENTER(0x10712f0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379970) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379970), REFG(float, 0x131ddbc));
  return 0;
}

/* ref: FUN_01071310 */
unsigned int F_01071310(void)
{
  GEN_ENTER(0x1071310u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379974) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379974), REFG(float, 0x131ddec));
  return 0;
}

/* ref: FUN_01071330 */
uint F_01071330(void)
{
  GEN_ENTER(0x1071330u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004d58e0(&REFG(undefined, 0x1379978),0,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x137997c),0,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x1379980),0,0x10,0x52,8);
  F_004d58e0(&REFG(undefined, 0x1379984),0,0x14,0x74,9);
  uVar1 = F_004d58e0(&REFG(undefined, 0x1379988),0,0x18,0x54,10);
  return uVar1;
}

/* ref: FUN_01071390 */
uint F_01071390(void)
{
  GEN_ENTER(0x1071390u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004d58e0(&REFG(undefined, 0x137998c),1,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x1379990),1,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x1379994),1,0x10,0x52,8);
  uVar1 = F_004d58e0(&REFG(undefined, 0x1379998),1,0x14,0x52,9);
  return uVar1;
}

/* ref: FUN_010713e0 */
uint F_010713e0(void)
{
  GEN_ENTER(0x10713e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_004d58e0(&REFG(undefined, 0x137999c),2,0,0x23,0);
  F_004d58e0(&REFG(undefined, 0x13799a0),2,0xc,0x44,3);
  F_004d58e0(&REFG(undefined, 0x13799a4),2,0x10,0x52,8);
  F_004d58e0(&REFG(undefined, 0x13799a8),2,0x14,0x52,9);
  uVar1 = F_004d58e0(&REFG(undefined, 0x13799ac),2,0x18,0x54,10);
  return uVar1;
}

/* ref: FUN_01071440 */
unsigned int F_01071440(void)
{
  GEN_ENTER(0x1071440u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379c64) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379c64), REFG(float, 0x131f348));
  return 0;
}

/* ref: FUN_01071460 */
unsigned int F_01071460(void)
{
  GEN_ENTER(0x1071460u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379c68) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379c68), REFG(float, 0x131f378));
  return 0;
}

/* ref: FUN_01071480 */
unsigned int F_01071480(void)
{
  GEN_ENTER(0x1071480u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cbc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cbc), REFG(float, 0x131f428));
  return 0;
}

/* ref: FUN_010714a0 */
unsigned int F_010714a0(void)
{
  GEN_ENTER(0x10714a0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379cc0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379cc0), REFG(float, 0x131f458));
  return 0;
}

/* ref: FUN_010714c0 */
uint F_010714c0(void)
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
unsigned int F_01071550(void)
{
  GEN_ENTER(0x1071550u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d00) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d00), REFG(float, 0x1375ac0));
  *(undefined4 *)&REFG(undefined, 0x1379d04) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d04), REFG(float, 0x1375ac4));
  *(undefined4 *)&REFG(undefined, 0x1379d08) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d08), REFG(float, 0x1375ac8));
  return 0;
}

/* ref: FUN_01071590 */
uint F_01071590(void)
{
  GEN_ENTER(0x1071590u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d10) = REFG(undefined4, 0x1302cf0);
  *(undefined4 *)&REFG(undefined, 0x1379d14) = REFG(undefined4, 0x1302cf4);
  *(undefined4 *)&REFG(undefined, 0x1379d18) = REFG(undefined4, 0x1302cf8);
  *(uint *)&REFG(undefined, 0x1379d1c) = REFG(undefined4, 0x1302cfc);
  return REFG(undefined4, 0x1302cfc);
}

/* ref: FUN_010715c0 */
unsigned int F_010715c0(void)
{
  GEN_ENTER(0x10715c0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1379d20) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d20), REFG(float, 0x1302c60));
  *(undefined4 *)&REFG(undefined, 0x1379d24) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d24), REFG(float, 0x1302c64));
  *(undefined4 *)&REFG(undefined, 0x1379d28) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1379d28), REFG(float, 0x1302c68));
  return 0;
}

/* ref: FUN_01071600 */
unsigned int F_01071600(void)
{
  GEN_ENTER(0x1071600u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137fab4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137fab4), REFG(float, 0x13206c8));
  return 0;
}

/* ref: FUN_01071620 */
unsigned int F_01071620(void)
{
  GEN_ENTER(0x1071620u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x137fab8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x137fab8), REFG(float, 0x13206f8));
  return 0;
}

/* ref: FUN_01071640 */
unsigned int F_01071640(void)
{
  GEN_ENTER(0x1071640u, 0u, 0u, 0u, 0u);
  F_00660cd0(&REFG(undefined, 0x137fb00));
  return 0;
}

/* ref: FUN_01071650 */
uint F_01071650(void)
{
  GEN_ENTER(0x1071650u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be60)));
  return uVar1;
}

/* ref: FUN_01071660 */
uint F_01071660(void)
{
  GEN_ENTER(0x1071660u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47de6(((code *)REFP(0x107be70)));
  return uVar1;
}

/* ref: FUN_01071670 */
uint F_01071670(void)
{
  GEN_ENTER(0x1071670u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  *(uint *)&REFG(undefined, 0x132076c) = ((uint)uVar1 << 5 | 2) ^ uVar4;
  return uVar4;
}

/* ref: FUN_010716f0 */
uint F_010716f0(void)
{
  GEN_ENTER(0x10716f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar2 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
  uVar1 = *puVar2;
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar3 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = *puVar3;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = (*puVar3 & 0x3ff) << 0x15;
  REFG(undefined4, 0x1320770) = ((uint)uVar1 << 5 | 7) ^ uVar4;
  return uVar4;
}

/* ref: FUN_01071770 */
unsigned int F_01071770(void)
{
  GEN_ENTER(0x1071770u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14882d8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14882d8), REFG(float, 0x1322988));
  return 0;
}

/* ref: FUN_01071790 */
unsigned int F_01071790(void)
{
  GEN_ENTER(0x1071790u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x14882dc) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14882dc), REFG(float, 0x13229b8));
  return 0;
}

/* ref: FUN_010717b0 */
unsigned int F_010717b0(void)
{
  GEN_ENTER(0x10717b0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1488770) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1488770), REFG(float, 0x13237e0));
  return 0;
}

/* ref: FUN_010717d0 */
unsigned int F_010717d0(void)
{
  GEN_ENTER(0x10717d0u, 0u, 0u, 0u, 0u);
  *(undefined4 *)&REFG(undefined, 0x1488774) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x1488774), REFG(float, 0x1323810));
  return 0;
}

