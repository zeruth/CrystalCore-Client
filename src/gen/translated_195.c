#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00eb3b40 */
uint F_00eb3b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb3b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x198) = *(int *)((int)this + 0x198) + 1;
  uVar3 = *(int *)((int)this + 0x198) * 8;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x30);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar3;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x1c8) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x1c8);
  *(undefined4 * PTR32 *)((int)this + 0x1c8) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb3be0 */
uint F_00eb3be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb3be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb3c80 */
uint F_00eb3c80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb3c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x13c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x138) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x15c) = puVar1;
  *(uint *)((int)this + 0x134) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x168) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x164) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x160) = puVar1;
  *(undefined4 *)((int)this + 0x144) = 6;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x120);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x148) = uVar2;
  *(uint *)((int)this + 0x140) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x148);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x144);
  *(undefined4 *)((int)this + 0x14c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x148) = puVar1;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  return uVar2;
}

/* ref: FUN_00eb3d00 */
uint F_00eb3d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb3d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x138) = *(int *)((int)this + 0x138) + 1;
  uVar3 = *(int *)((int)this + 0x138) * 6;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x30);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar3;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x168) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x168) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x168);
  *(undefined4 * PTR32 *)((int)this + 0x168) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb3da0 */
uint F_00eb3da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb3da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb3e40 */
uint F_00eb3e40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb3e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x9c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x98) = 1;
  *(undefined4 * PTR32 *)((int)this + 0xbc) = puVar1;
  *(uint *)((int)this + 0x94) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 200) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0xc4) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0xc0) = puVar1;
  *(undefined4 *)((int)this + 0xa4) = 4;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x80);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0xa8) = uVar2;
  *(uint *)((int)this + 0xa0) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0xa8);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0xac) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xa8) = puVar1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  return uVar2;
}

/* ref: FUN_00eb3ec0 */
uint F_00eb3ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb3ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
  uVar3 = *(int *)((int)this + 0x98) * 4;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x20);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[1] = uVar3;
  puVar1[3] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 200) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 200) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 200);
  *(undefined4 * PTR32 *)((int)this + 200) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb3f50 */
uint F_00eb3f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb3f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar4 = *(int *)((int)this + 0xc);
  iVar3 = 0;
  while( true ) {
    iVar2 = iVar4;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(uint *)(iVar2 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar2 + 8)) {
      puVar5 = ((undefined4 *)GEN_TOP(((param_1 + 1) * 0x10 + iVar2)));
      puVar5[2] = *(int *)(iVar2 + 8) - param_1;
      puVar5[1] = *(undefined4 *)(iVar2 + 4);
      *puVar5 = this;
      if (iVar3 != 0) {
        *(undefined4 * PTR32 *)(iVar3 + 4) = puVar5;
        *(uint *)(iVar2 + 8) = param_1;
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
        return iVar2 + 0x10;
      }
      *(undefined4 * PTR32 *)((int)this + 0xc) = puVar5;
      *(uint *)(iVar2 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
      return iVar2 + 0x10;
    }
    iVar4 = *(int *)(iVar2 + 4);
    iVar3 = iVar2;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = uVar1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
    return iVar2 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return iVar2 + 0x10;
}

/* ref: FUN_00eb4000 */
uint F_00eb4000(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x94c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x948) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x96c) = puVar1;
  *(uint *)((int)this + 0x944) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x978) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x974) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x970) = puVar1;
  *(undefined4 *)((int)this + 0x954) = 0x31;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x930);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x958) = uVar2;
  *(uint *)((int)this + 0x950) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x958);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x954);
  *(undefined4 *)((int)this + 0x95c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x958) = puVar1;
  *(undefined4 *)((int)this + 0x964) = 0;
  *(undefined4 *)((int)this + 0x960) = 0;
  return uVar2;
}

/* ref: FUN_00eb4080 */
uint F_00eb4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x948) = *(int *)((int)this + 0x948) + 1;
  uVar2 = *(int *)((int)this + 0x948) * 0x31;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x978) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x978) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x978);
  *(undefined4 * PTR32 *)((int)this + 0x978) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb4120 */
uint F_00eb4120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb4120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb41c0 */
uint F_00eb41c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb41c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x5c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x58) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x7c) = puVar1;
  *(uint *)((int)this + 0x54) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x88) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x84) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x80) = puVar1;
  *(undefined4 *)((int)this + 100) = 2;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x40);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x68) = uVar2;
  *(uint *)((int)this + 0x60) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x68);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 100);
  *(undefined4 *)((int)this + 0x6c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x68) = puVar1;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return uVar2;
}

/* ref: FUN_00eb4240 */
uint F_00eb4240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
  uVar3 = *(int *)((int)this + 0x58) * 2;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x20);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[1] = uVar3;
  puVar1[3] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x88);
  *(undefined4 * PTR32 *)((int)this + 0x88) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb42d0 */
uint F_00eb42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb42d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar4 = *(int *)((int)this + 0xc);
  iVar3 = 0;
  while( true ) {
    iVar2 = iVar4;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(uint *)(iVar2 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar2 + 8)) {
      puVar5 = ((undefined4 *)GEN_TOP(((param_1 + 1) * 0x10 + iVar2)));
      puVar5[2] = *(int *)(iVar2 + 8) - param_1;
      puVar5[1] = *(undefined4 *)(iVar2 + 4);
      *puVar5 = this;
      if (iVar3 != 0) {
        *(undefined4 * PTR32 *)(iVar3 + 4) = puVar5;
        *(uint *)(iVar2 + 8) = param_1;
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
        return iVar2 + 0x10;
      }
      *(undefined4 * PTR32 *)((int)this + 0xc) = puVar5;
      *(uint *)(iVar2 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
      return iVar2 + 0x10;
    }
    iVar4 = *(int *)(iVar2 + 4);
    iVar3 = iVar2;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = uVar1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
    return iVar2 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return iVar2 + 0x10;
}

/* ref: FUN_00eb4380 */
uint F_00eb4380(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x31c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x318) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x33c) = puVar1;
  *(uint *)((int)this + 0x314) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x348) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x344) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x340) = puVar1;
  *(undefined4 *)((int)this + 0x324) = 0x10;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x300);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x328) = uVar2;
  *(uint *)((int)this + 800) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x328);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x324);
  *(undefined4 *)((int)this + 0x32c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x328) = puVar1;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  return uVar2;
}

/* ref: FUN_00eb4400 */
uint F_00eb4400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x318) = *(int *)((int)this + 0x318) + 1;
  uVar2 = *(int *)((int)this + 0x318) << 4;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x348) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x348) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x348);
  *(undefined4 * PTR32 *)((int)this + 0x348) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb44a0 */
uint F_00eb44a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb44a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb4540 */
uint F_00eb4540(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x58c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x588) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x5ac) = puVar1;
  *(uint *)((int)this + 0x584) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x5b8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x5b4) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x5b0) = puVar1;
  *(undefined4 *)((int)this + 0x594) = 0x1d;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x570);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x598) = uVar2;
  *(uint *)((int)this + 0x590) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x598);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x594);
  *(undefined4 *)((int)this + 0x59c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x598) = puVar1;
  *(undefined4 *)((int)this + 0x5a4) = 0;
  *(undefined4 *)((int)this + 0x5a0) = 0;
  return uVar2;
}

/* ref: FUN_00eb45c0 */
uint F_00eb45c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb45c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x588) = *(int *)((int)this + 0x588) + 1;
  uVar2 = *(int *)((int)this + 0x588) * 0x1d;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x5b8) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x5b8) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x5b8);
  *(undefined4 * PTR32 *)((int)this + 0x5b8) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb4660 */
uint F_00eb4660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb4660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb4700 */
uint F_00eb4700(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x24dc);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x24d8) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x24fc) = puVar1;
  *(uint *)((int)this + 0x24d4) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x2508) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x2504) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x2500) = puVar1;
  *(undefined4 *)((int)this + 0x24e4) = 0xc4;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x24c0);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x24e8) = uVar2;
  *(uint *)((int)this + 0x24e0) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x24e8);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x24e4);
  *(undefined4 *)((int)this + 0x24ec) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24e8) = puVar1;
  *(undefined4 *)((int)this + 0x24f4) = 0;
  *(undefined4 *)((int)this + 0x24f0) = 0;
  return uVar2;
}

/* ref: FUN_00eb4780 */
uint F_00eb4780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x24d8) = *(int *)((int)this + 0x24d8) + 1;
  uVar2 = *(int *)((int)this + 0x24d8) * 0xc4;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x2508) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2508) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x2508);
  *(undefined4 * PTR32 *)((int)this + 0x2508) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb4820 */
uint F_00eb4820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb4820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb48c0 */
uint F_00eb48c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb48c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x25c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 600) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x27c) = puVar1;
  *(uint *)((int)this + 0x254) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x288) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x284) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x280) = puVar1;
  *(undefined4 *)((int)this + 0x264) = 0xc;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x240);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x268) = uVar2;
  *(uint *)((int)this + 0x260) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x268);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x264);
  *(undefined4 *)((int)this + 0x26c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x268) = puVar1;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  return uVar2;
}

/* ref: FUN_00eb4940 */
uint F_00eb4940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 600) = *(int *)((int)this + 600) + 1;
  uVar3 = *(int *)((int)this + 600) * 0xc;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x30);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar3;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x288) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x288) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x288);
  *(undefined4 * PTR32 *)((int)this + 0x288) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb49e0 */
uint F_00eb49e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb49e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb4a80 */
uint F_00eb4a80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x3dc);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x3d8) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x3fc) = puVar1;
  *(uint *)((int)this + 0x3d4) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x408) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x404) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x400) = puVar1;
  *(undefined4 *)((int)this + 0x3e4) = 0x14;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x3c0);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 1000) = uVar2;
  *(uint *)((int)this + 0x3e0) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 1000);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x3e4);
  *(undefined4 *)((int)this + 0x3ec) = 0;
  **(undefined4 * PTR32 *)((int)this + 1000) = puVar1;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  return uVar2;
}

/* ref: FUN_00eb4b00 */
uint F_00eb4b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x3d8) = *(int *)((int)this + 0x3d8) + 1;
  uVar3 = *(int *)((int)this + 0x3d8) * 0x14;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x30);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar3;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x408) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x408) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x408);
  *(undefined4 * PTR32 *)((int)this + 0x408) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb4ba0 */
uint F_00eb4ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb4ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb4c40 */
uint F_00eb4c40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x37c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x378) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x39c) = puVar1;
  *(uint *)((int)this + 0x374) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x3a8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x3a4) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x3a0) = puVar1;
  *(undefined4 *)((int)this + 900) = 0x12;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x360);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x388) = uVar2;
  *(uint *)((int)this + 0x380) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x388);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 900);
  *(undefined4 *)((int)this + 0x38c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x388) = puVar1;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  return uVar2;
}

/* ref: FUN_00eb4cc0 */
uint F_00eb4cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x378) = *(int *)((int)this + 0x378) + 1;
  uVar3 = *(int *)((int)this + 0x378) * 0x12;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x30);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar3;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x3a8) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3a8) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x3a8);
  *(undefined4 * PTR32 *)((int)this + 0x3a8) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb4d60 */
uint F_00eb4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb4d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb4e00 */
uint F_00eb4e00(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 700);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x2b8) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x2dc) = puVar1;
  *(uint *)((int)this + 0x2b4) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x2e8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x2e4) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x2e0) = puVar1;
  *(undefined4 *)((int)this + 0x2c4) = 0xe;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x2a0);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x2c8) = uVar2;
  *(uint *)((int)this + 0x2c0) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x2c8);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x2cc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x2c8) = puVar1;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  return uVar2;
}

/* ref: FUN_00eb4e80 */
uint F_00eb4e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb4e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x2b8) = *(int *)((int)this + 0x2b8) + 1;
  uVar3 = *(int *)((int)this + 0x2b8) * 0xe;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x30);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar3;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x2e8) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2e8) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x2e8);
  *(undefined4 * PTR32 *)((int)this + 0x2e8) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb4f20 */
uint F_00eb4f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb4f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb4fc0 */
uint F_00eb4fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb4fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x43c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x438) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x45c) = puVar1;
  *(uint *)((int)this + 0x434) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x468) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x464) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x460) = puVar1;
  *(undefined4 *)((int)this + 0x444) = 0x16;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x420);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x448) = uVar2;
  *(uint *)((int)this + 0x440) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x448);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x444);
  *(undefined4 *)((int)this + 0x44c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x448) = puVar1;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  return uVar2;
}

/* ref: FUN_00eb5040 */
uint F_00eb5040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x438) = *(int *)((int)this + 0x438) + 1;
  uVar2 = *(int *)((int)this + 0x438) * 0x16;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x468) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x468) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x468);
  *(undefined4 * PTR32 *)((int)this + 0x468) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb50e0 */
uint F_00eb50e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb50e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb5180 */
uint F_00eb5180(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x76c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x768) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x78c) = puVar1;
  *(uint *)((int)this + 0x764) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x798) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x794) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x790) = puVar1;
  *(undefined4 *)((int)this + 0x774) = 0x27;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x750);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x778) = uVar2;
  *(uint *)((int)this + 0x770) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x778);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x774);
  *(undefined4 *)((int)this + 0x77c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x778) = puVar1;
  *(undefined4 *)((int)this + 0x784) = 0;
  *(undefined4 *)((int)this + 0x780) = 0;
  return uVar2;
}

/* ref: FUN_00eb5200 */
uint F_00eb5200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x768) = *(int *)((int)this + 0x768) + 1;
  uVar2 = *(int *)((int)this + 0x768) * 0x27;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x798) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x798) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x798);
  *(undefined4 * PTR32 *)((int)this + 0x798) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb52a0 */
uint F_00eb52a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb52a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb5340 */
uint F_00eb5340(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x46c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x468) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x48c) = puVar1;
  *(uint *)((int)this + 0x464) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x498) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x494) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x490) = puVar1;
  *(undefined4 *)((int)this + 0x474) = 0x17;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x450);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x478) = uVar2;
  *(uint *)((int)this + 0x470) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x478);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x474);
  *(undefined4 *)((int)this + 0x47c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x478) = puVar1;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  return uVar2;
}

/* ref: FUN_00eb53c0 */
uint F_00eb53c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb53c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x468) = *(int *)((int)this + 0x468) + 1;
  uVar2 = *(int *)((int)this + 0x468) * 0x17;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x498) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x498) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x498);
  *(undefined4 * PTR32 *)((int)this + 0x498) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb5460 */
uint F_00eb5460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb5460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb5500 */
uint F_00eb5500(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0xa6c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0xa68) = 1;
  *(undefined4 * PTR32 *)((int)this + 0xa8c) = puVar1;
  *(uint *)((int)this + 0xa64) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0xa98) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0xa94) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0xa90) = puVar1;
  *(undefined4 *)((int)this + 0xa74) = 0x37;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0xa50);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0xa78) = uVar2;
  *(uint *)((int)this + 0xa70) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0xa78);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0xa74);
  *(undefined4 *)((int)this + 0xa7c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xa78) = puVar1;
  *(undefined4 *)((int)this + 0xa84) = 0;
  *(undefined4 *)((int)this + 0xa80) = 0;
  return uVar2;
}

/* ref: FUN_00eb5580 */
uint F_00eb5580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0xa68) = *(int *)((int)this + 0xa68) + 1;
  uVar2 = *(int *)((int)this + 0xa68) * 0x37;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0xa98) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa98) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0xa98);
  *(undefined4 * PTR32 *)((int)this + 0xa98) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb5620 */
uint F_00eb5620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb5620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb56c0 */
uint F_00eb56c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb56c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x85c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x858) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x87c) = puVar1;
  *(uint *)((int)this + 0x854) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x888) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x884) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x880) = puVar1;
  *(undefined4 *)((int)this + 0x864) = 0x2c;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x840);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x868) = uVar2;
  *(uint *)((int)this + 0x860) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x868);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x864);
  *(undefined4 *)((int)this + 0x86c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x868) = puVar1;
  *(undefined4 *)((int)this + 0x874) = 0;
  *(undefined4 *)((int)this + 0x870) = 0;
  return uVar2;
}

/* ref: FUN_00eb5740 */
uint F_00eb5740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x858) = *(int *)((int)this + 0x858) + 1;
  uVar2 = *(int *)((int)this + 0x858) * 0x2c;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x888) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x888) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x888);
  *(undefined4 * PTR32 *)((int)this + 0x888) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb57e0 */
uint F_00eb57e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb57e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb5880 */
uint F_00eb5880(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0xb8c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0xb88) = 1;
  *(undefined4 * PTR32 *)((int)this + 0xbac) = puVar1;
  *(uint *)((int)this + 0xb84) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 3000) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0xbb4) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0xbb0) = puVar1;
  *(undefined4 *)((int)this + 0xb94) = 0x3d;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0xb70);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0xb98) = uVar2;
  *(uint *)((int)this + 0xb90) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0xb98);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0xb94);
  *(undefined4 *)((int)this + 0xb9c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xb98) = puVar1;
  *(undefined4 *)((int)this + 0xba4) = 0;
  *(undefined4 *)((int)this + 0xba0) = 0;
  return uVar2;
}

/* ref: FUN_00eb5900 */
uint F_00eb5900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0xb88) = *(int *)((int)this + 0xb88) + 1;
  uVar2 = *(int *)((int)this + 0xb88) * 0x3d;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 3000) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 3000) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 3000);
  *(undefined4 * PTR32 *)((int)this + 3000) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb59a0 */
uint F_00eb59a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb59a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb5a40 */
uint F_00eb5a40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x2ec);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x2e8) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x30c) = puVar1;
  *(uint *)((int)this + 0x2e4) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x318) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x314) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x310) = puVar1;
  *(undefined4 *)((int)this + 0x2f4) = 0xf;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x2d0);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x2f8) = uVar2;
  *(uint *)((int)this + 0x2f0) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x2f8);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x2f4);
  *(undefined4 *)((int)this + 0x2fc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x2f8) = puVar1;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  return uVar2;
}

/* ref: FUN_00eb5ac0 */
uint F_00eb5ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x2e8) = *(int *)((int)this + 0x2e8) + 1;
  uVar3 = *(int *)((int)this + 0x2e8) * 0xf;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x30);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar3;
  puVar1[1] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x318) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x318) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x318);
  *(undefined4 * PTR32 *)((int)this + 0x318) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb5b60 */
uint F_00eb5b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb5b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb5c00 */
uint F_00eb5c00(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x25c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 600) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x27c) = puVar1;
  *(uint *)((int)this + 0x254) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x288) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x284) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x280) = puVar1;
  *(undefined4 *)((int)this + 0x264) = 0x12;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x240);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x268) = uVar2;
  *(uint *)((int)this + 0x260) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x268);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x264);
  *(undefined4 *)((int)this + 0x26c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x268) = puVar1;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  return uVar2;
}

/* ref: FUN_00eb5c80 */
uint F_00eb5c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 600) = *(int *)((int)this + 600) + 1;
  uVar3 = *(int *)((int)this + 600) * 0x12;
  if (uVar3 < param_1) {
    uVar3 = param_1 * 2;
  }
  puVar1[2] = uVar3;
  pvVar2 = F_00c51787(uVar3 * 0x20);
  *puVar1 = pvVar2;
  uVar3 = (int)pvVar2 + 0xfU & 0xfffffff0;
  puVar1[1] = uVar3;
  puVar1[3] = uVar3;
  *(undefined4 *)(uVar3 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x288) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x288) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x288);
  *(undefined4 * PTR32 *)((int)this + 0x288) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb5d20 */
uint F_00eb5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb5d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar4 = *(int *)((int)this + 0xc);
  iVar3 = 0;
  while( true ) {
    iVar2 = iVar4;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(uint *)(iVar2 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar2 + 8)) {
      puVar5 = ((undefined4 *)GEN_TOP(((param_1 + 1) * 0x10 + iVar2)));
      puVar5[2] = *(int *)(iVar2 + 8) - param_1;
      puVar5[1] = *(undefined4 *)(iVar2 + 4);
      *puVar5 = this;
      if (iVar3 != 0) {
        *(undefined4 * PTR32 *)(iVar3 + 4) = puVar5;
        *(uint *)(iVar2 + 8) = param_1;
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
        return iVar2 + 0x10;
      }
      *(undefined4 * PTR32 *)((int)this + 0xc) = puVar5;
      *(uint *)(iVar2 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
      return iVar2 + 0x10;
    }
    iVar4 = *(int *)(iVar2 + 4);
    iVar3 = iVar2;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = uVar1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
    return iVar2 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return iVar2 + 0x10;
}

/* ref: FUN_00eb5dd0 */
uint F_00eb5dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x97c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x978) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x99c) = puVar1;
  *(uint *)((int)this + 0x974) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x9a8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x9a4) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x9a0) = puVar1;
  *(undefined4 *)((int)this + 0x984) = 0x32;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x960);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x988) = uVar2;
  *(uint *)((int)this + 0x980) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x988);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x984);
  *(undefined4 *)((int)this + 0x98c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x988) = puVar1;
  *(undefined4 *)((int)this + 0x994) = 0;
  *(undefined4 *)((int)this + 0x990) = 0;
  return uVar2;
}

/* ref: FUN_00eb5e50 */
uint F_00eb5e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb5e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x978) = *(int *)((int)this + 0x978) + 1;
  uVar2 = *(int *)((int)this + 0x978) * 0x32;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x9a8) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9a8) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x9a8);
  *(undefined4 * PTR32 *)((int)this + 0x9a8) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb5ef0 */
uint F_00eb5ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb5ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb5f90 */
uint F_00eb5f90(unsigned int gen_a0)
{
  GEN_ENTER(0xeb5f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x4bc);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x4b8) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x4dc) = puVar1;
  *(uint *)((int)this + 0x4b4) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x4e8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x4e4) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x4e0) = puVar1;
  *(undefined4 *)((int)this + 0x4c4) = 0x25;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x4a0);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x4c8) = uVar2;
  *(uint *)((int)this + 0x4c0) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x4c8);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x4c4);
  *(undefined4 *)((int)this + 0x4cc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x4c8) = puVar1;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  return uVar2;
}

/* ref: FUN_00eb6010 */
uint F_00eb6010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x4b8) = *(int *)((int)this + 0x4b8) + 1;
  uVar2 = *(int *)((int)this + 0x4b8) * 0x25;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x20);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[1] = uVar2;
  puVar1[3] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x4e8) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x4e8) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x4e8);
  *(undefined4 * PTR32 *)((int)this + 0x4e8) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb60a0 */
uint F_00eb60a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb60a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar4 = *(int *)((int)this + 0xc);
  iVar3 = 0;
  while( true ) {
    iVar2 = iVar4;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(uint *)(iVar2 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar2 + 8)) {
      puVar5 = ((undefined4 *)GEN_TOP(((param_1 + 1) * 0x10 + iVar2)));
      puVar5[2] = *(int *)(iVar2 + 8) - param_1;
      puVar5[1] = *(undefined4 *)(iVar2 + 4);
      *puVar5 = this;
      if (iVar3 != 0) {
        *(undefined4 * PTR32 *)(iVar3 + 4) = puVar5;
        *(uint *)(iVar2 + 8) = param_1;
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
        return iVar2 + 0x10;
      }
      *(undefined4 * PTR32 *)((int)this + 0xc) = puVar5;
      *(uint *)(iVar2 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
      return iVar2 + 0x10;
    }
    iVar4 = *(int *)(iVar2 + 4);
    iVar3 = iVar2;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 4) = uVar1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
    return iVar2 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1 * 0x10 + 0x10;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return iVar2 + 0x10;
}

/* ref: FUN_00eb6150 */
uint F_00eb6150(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x193c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined4 *)((int)this + 0x1938) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x195c) = puVar1;
  *(uint *)((int)this + 0x1934) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x1968) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x1964) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x1960) = puVar1;
  *(undefined4 *)((int)this + 0x1944) = 0x86;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x1920);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x1948) = uVar2;
  *(uint *)((int)this + 0x1940) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  uVar2 = *(uint *)((int)this + 0x1948);
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x1944);
  *(undefined4 *)((int)this + 0x194c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x1948) = puVar1;
  *(undefined4 *)((int)this + 0x1954) = 0;
  *(undefined4 *)((int)this + 0x1950) = 0;
  return uVar2;
}

/* ref: FUN_00eb61d0 */
uint F_00eb61d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb61d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = F_00c51787(0x20);
  *(int *)((int)this + 0x1938) = *(int *)((int)this + 0x1938) + 1;
  uVar2 = *(int *)((int)this + 0x1938) * 0x86;
  if (uVar2 < param_1) {
    uVar2 = param_1 * 2;
  }
  puVar1[2] = uVar2;
  pvVar3 = F_00c51787(uVar2 * 0x30);
  *puVar1 = pvVar3;
  uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  puVar1[3] = uVar2;
  puVar1[1] = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
  puVar1[4] = 0;
  *(undefined4 * PTR32 *)puVar1[3] = puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0;
  if (*(int *)((int)this + 0x1968) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1968) + 0x18))) = puVar1;
  }
  puVar1[5] = *(undefined4 *)((int)this + 0x1968);
  *(undefined4 * PTR32 *)((int)this + 0x1968) = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00eb6270 */
uint F_00eb6270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar5;
    if (iVar3 == 0) {
      return 0;
    }
    if (*(uint *)(iVar3 + 8) == param_1) break;
    if (param_1 <= *(uint *)(iVar3 + 8)) {
      puVar1 = (undefined4 *)(param_1 * 0x20 + 0x10 + iVar3);
      puVar1[2] = *(int *)(iVar3 + 8) - param_1;
      puVar1[1] = *(undefined4 *)(iVar3 + 4);
      *puVar1 = this;
      if (iVar4 == 0) {
        *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
      }
      else {
        *(undefined4 * PTR32 *)(iVar4 + 4) = puVar1;
      }
      *(uint *)(iVar3 + 8) = param_1;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
      return iVar3 + 0x10;
    }
    iVar5 = *(int *)(iVar3 + 4);
    iVar4 = iVar3;
  }
  uVar2 = *(undefined4 *)(iVar3 + 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 4) = uVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
    return iVar3 + 0x10;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - 1) * 0x20 + 0x30;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return iVar3 + 0x10;
}

/* ref: FUN_00eb6310 */
uint F_00eb6310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6310u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = (undefined2)param_2;
  return (uint)param_1;
}

/* ref: FUN_00eb6320 */
uint F_00eb6320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6320u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  *((undefined2 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x40 + (int)param_1))) = *param_2;
  return (uint)param_1;
}

/* ref: FUN_00eb6340 */
uint F_00eb6340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6340u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x18) {
    F_00ea7d20(this,iVar1);
    this = (undefined *)((int)this + 0x18);
  }
  return (uint)this;
}

/* ref: FUN_00eb6370 */
uint F_00eb6370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    param_2[2] = 0;
    param_2[4] = 0;
    *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00eb63a0 */
uint F_00eb63a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb63a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x18) {
    F_00ea7d20(this,iVar1);
    this = (undefined *)((int)this + 0x18);
  }
  return (uint)this;
}

/* ref: FUN_00eb63e0 */
uint F_00eb63e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb63e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x88);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x20) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00eb6440 */
uint F_00eb6440(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00eaeac0(this);
  return (uint)this;
}

/* ref: FUN_00eb6460 */
uint F_00eb6460(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00eaeb50(this);
  return (uint)this;
}

/* ref: collate<>_00eb6470 */
uint F_00eb6470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined8 _Var1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x115d01c));
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (uint)this;
}

/* ref: FUN_00eb64a0 */
ushort F_00eb64a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb64a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  ((wchar_t *)(gen_frame + 0x8))[0] = L'\0';
  ((wchar_t *)(gen_frame + 0x8))[1] = L'\0';
  (*(int *)(gen_frame + 0x4)) = 0;
  F_010512d7(((wchar_t *)(gen_frame + 0x8)),(char *)&(*(undefined4 *)&gen_args[0]),1,&(*(int *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[2]));
  return ((wchar_t *)(gen_frame + 0x8))[0];
}

/* ref: FUN_00eb64d0 */
uint F_00eb64d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb64d0u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char * pcVar2;
  int iVar3;
  wchar_t * pwVar4;
  char * pcVar5;
  int iVar6;
  uint uVar7;
  char * pcVar8;
  wchar_t * pwVar9;
  
  iVar6 = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar8 = pcVar2 + (1 - (int)(param_1 + 1));
  pcVar5 = param_1;
  while ((pcVar8 != (char *)0x0 &&
         (iVar3 = F_010512d7(((wchar_t *)(gen_frame + 0x8)),pcVar5,(gen_size32)pcVar8,&(*(int *)(gen_frame + 0x4)),param_3), 0 < iVar3))) {
    pcVar5 = pcVar5 + iVar3;
    iVar6 = iVar6 + 1;
    pcVar8 = pcVar8 - iVar3;
  }
  uVar7 = iVar6 + 1;
  pwVar4 = (wchar_t *)
           F_00406a50(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar7 * 2));
  (*(int *)(gen_frame + 0x0)) = 0;
  pcVar8 = param_1;
  pwVar9 = pwVar4;
  while ((uVar7 != 0 &&
         (iVar6 = F_010512d7(pwVar9,pcVar8,(gen_size32)(pcVar2 + (1 - (int)(param_1 + 1))),&(*(int *)(gen_frame + 0x0)),
                            param_3), 0 < iVar6))) {
    pcVar8 = pcVar8 + iVar6;
    pwVar9 = pwVar9 + 1;
    uVar7 = uVar7 - 1;
  }
  *pwVar9 = L'\0';
  return (uint)pwVar4;
}

/* ref: num_put_GV_ostreambuf_iterator_GU_char_traits_G::vf0 */
uint F_00eb65a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb65a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb65d0 */
unsigned int F_00eb65d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeb65d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined2 * puVar1;
  char * pcVar2;
  uint uVar3;
  
  *param_2 = 0x25;
  puVar1 = (undefined2 *)(param_2 + 1);
  if ((param_4 & 0x20) != 0) {
    *(undefined1 *)puVar1 = 0x2b;
    puVar1 = (undefined2 *)(param_2 + 2);
  }
  if ((param_4 & 0x10) != 0) {
    *(undefined1 *)puVar1 = 0x23;
    puVar1 = (undefined2 *)((int)puVar1 + 1);
  }
  *puVar1 = 0x2a2e;
  pcVar2 = (char *)(puVar1 + 1);
  if ((char)param_3 != '\0') {
    *pcVar2 = (char)param_3;
    pcVar2 = (char *)((int)puVar1 + 3);
  }
  uVar3 = param_4 & 0x3000;
  if (uVar3 == 0x2000) {
    *pcVar2 = 'f';
    pcVar2[1] = '\0';
    return 0;
  }
  if (uVar3 == 0x3000) {
    *pcVar2 = 'a';
    pcVar2[1] = '\0';
    return 0;
  }
  *pcVar2 = (uVar3 != 0x1000) * '\x02' + 'e';
  pcVar2[1] = '\0';
  return 0;
}

/* ref: FUN_00eb6650 */
uint F_00eb6650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeb6650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined1 * puVar1;
  char * pcVar2;
  byte * pbVar3;
  
  puVar1 = param_2;
  *param_2 = 0x25;
  pcVar2 = param_2 + 1;
  if ((param_4 & 0x20) != 0) {
    *pcVar2 = '+';
    pcVar2 = param_2 + 2;
  }
  if ((param_4 & 8) != 0) {
    *pcVar2 = '#';
    pcVar2 = pcVar2 + 1;
  }
  if (*param_3 == 'L') {
    pcVar2[0] = 'I';
    pcVar2[1] = '6';
    pcVar2[2] = '4';
    pbVar3 = (byte *)(pcVar2 + 3);
  }
  else {
    *pcVar2 = *param_3;
    pbVar3 = (byte *)(pcVar2 + 1);
  }
  if ((param_4 & 0xe00) == 0x400) {
    *pbVar3 = 0x6f;
    pbVar3[1] = 0;
    return (uint)puVar1;
  }
  if ((param_4 & 0xe00) != 0x800) {
    *pbVar3 = param_3[1];
    pbVar3[1] = 0;
    return (uint)puVar1;
  }
  *pbVar3 = ~((char)param_4 * '\b') & 0x20U | 0x58;
  pbVar3[1] = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eb6720 */
uint F_00eb6720(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00406b30(*(undefined4 *)((int)this + 8));
  F_00406b30(*(undefined4 *)((int)this + 0x10));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x14));
  return (uint)uVar1;
}

/* ref: FUN_00eb6750 */
uint F_00eb6750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6750u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uchar * puVar2;
  undefined * plVar3;
  char * pcVar4;
  wchar_t * pwVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  undefined8 _Var9;
  
  plVar3 = F_00c527f9();
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = plVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    (*(char * PTR32 *)(gen_frame + 0x14)) = (*(char * PTR32 *)(((char *)(plVar3) + 8)));
  }
  else {
    (*(char * PTR32 *)(gen_frame + 0x14)) = "";
  }
  F_01051073();
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x14));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (1 - (int)((*(char * PTR32 *)(gen_frame + 0x14)) + 1));
  pwVar5 = (wchar_t *)F_00406a50(pcVar4);
  (*(wchar_t * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0xc))) + 4))) = pwVar5;
  if (pcVar4 != (char *)0x0) {
    pcVar6 = (*(char * PTR32 *)(gen_frame + 0x14));
    do {
      pcVar6[(int)pwVar5 - (int)(*(char * PTR32 *)(gen_frame + 0x14))] = *pcVar6;
      pcVar4 = pcVar4 + -1;
      pcVar6 = pcVar6 + 1;
    } while (pcVar4 != (char *)0x0);
  }
  *((wchar_t * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = pwVar5;
  (*(undefined8 *)(gen_frame + 0xc)) = F_01051073();
  uVar7 = F_00eb64d0("false",0,&(*(undefined8 *)(gen_frame + 0xc)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar7;
  _Var9 = F_01051073();
  (*(undefined8 *)(gen_frame + 0xc)) = _Var9;
  uVar7 = F_00eb64d0(&REFG(undefined1, 0x113bf28),0,&(*(undefined8 *)(gen_frame + 0xc)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar7;
  _Var9 = F_01051073();
  plVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  puVar2 = (uchar *)(*(char * PTR32 *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
  (*(undefined8 *)(gen_frame + 0xc)) = _Var9;
  ((uchar *)(gen_frame + 0x18))[0] = *puVar2;
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_010512d7((wchar_t *)&(*(char * PTR32 *)(gen_frame + 0x14)),(char *)((uchar *)(gen_frame + 0x18)),1,(int *)&(*(undefined * PTR32 *)(gen_frame + 0x8)),(undefined *)&(*(undefined8 *)(gen_frame + 0xc)));
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x14)) + 0));
  _Var9 = F_01051073();
  puVar2 = (uchar *)(*(char * PTR32 *)(((char *)(plVar3) + 4)));
  (*(undefined8 *)(gen_frame + 0xc)) = _Var9;
  ((uchar *)(gen_frame + 0x18))[0] = *puVar2;
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  iVar8 = F_010512d7((wchar_t *)&(*(char * PTR32 *)(gen_frame + 0x14)),(char *)((uchar *)(gen_frame + 0x18)),1,(int *)&(*(undefined * PTR32 *)(gen_frame + 0x8)),
                    (undefined *)&(*(undefined8 *)(gen_frame + 0xc)));
  uVar7 = CONCAT22((short)((uint)iVar8 >> 0x10),(*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x14)) + 0)));
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x14)) + 0));
  if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
    (*(undefined8 *)(gen_frame + 0xc)) = F_01051073();
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) = '.';
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    F_010512d7((wchar_t *)&(*(char * PTR32 *)(gen_frame + 0x14)),(char *)&(*(undefined4 *)&gen_args[2]),1,(int *)&(*(undefined * PTR32 *)(gen_frame + 0x8)),(undefined *)&(*(undefined8 *)(gen_frame + 0xc)));
    *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x14)) + 0));
    (*(undefined8 *)(gen_frame + 0xc)) = F_01051073();
    (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),0x2c);
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    uVar7 = F_010512d7((wchar_t *)&(*(char * PTR32 *)(gen_frame + 0x14)),(char *)&(*(undefined4 *)&gen_args[2]),1,(int *)&(*(undefined * PTR32 *)(gen_frame + 0x8)),
                      (undefined *)&(*(undefined8 *)(gen_frame + 0xc)));
    *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x14)) + 0));
  }
  return uVar7;
}

/* ref: FUN_00eb68f0 */
uint F_00eb68f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb68f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  short * psVar3;
  uint uVar4;
  short sVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    if ((*(int *)piVar1[9] == 0) || (piVar2 = (int *)piVar1[0xd], *piVar2 < 1)) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1);
      sVar5 = (short)uVar4;
    }
    else {
      *piVar2 = *piVar2 + -1;
      psVar3 = *(short * PTR32 *)piVar1[9];
      *(short * PTR32 *)piVar1[9] = psVar3 + 1;
      sVar5 = (short)param_1;
      *psVar3 = sVar5;
    }
    if (sVar5 != -1) {
      return (uint)this;
    }
  }
  *(undefined1 *)this = 1;
  return (uint)this;
}

/* ref: collate<>_00eb6950 */
uint F_00eb6950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined8 _Var1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[12])REFP(0x115d044));
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (uint)this;
}

/* ref: FUN_00eb6980 */
float10 F_00eb6980(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6980u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  double param_1 = (double)gen_a0;
  int param_2 = (int)gen_a1;
  double dVar1;
  
  dVar1 = F_00c52a5e(param_1,param_2);
  return (float10)dVar1;
}

/* ref: num_get_DV_istreambuf_iterator_DU_char_traits_D::vf0 */
uint F_00eb69b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb69b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb69e0 */
uint F_00eb69e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xeb69e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  
  if ((char)param_3 <= (char)param_2) {
    if ((int)(char)param_2 <= (char)param_3 + 9) {
      return (int)(char)param_2 - (int)(char)param_3;
    }
  }
  if ((((char)param_2 < (char)param_4) ||
      (iVar1 = (int)(char)param_4, iVar1 + 5 < (int)(char)param_2)) &&
     (((char)param_2 < (char)param_5 || (iVar1 = (int)(char)param_5, iVar1 + 5 < (int)(char)param_2)
      ))) {
    return 0xffffffff;
  }
  return ((char)param_2 - iVar1) + 10;
}

/* ref: FUN_00eb6a40 */
byte F_00eb6a40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6a40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00eb6a50 */
unsigned int F_00eb6a50(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    if ((*(int *)piVar1[8] == 0) || (piVar2 = (int *)piVar1[0xc], *piVar2 < 1)) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    }
    else {
      *piVar2 = *piVar2 + -1;
      pbVar3 = *(byte * PTR32 *)piVar1[8];
      *(byte * PTR32 *)piVar1[8] = pbVar3 + 1;
      uVar4 = (uint)*pbVar3;
    }
    if (uVar4 != 0xffffffff) {
      *(undefined1 *)((int)this + 4) = 0;
      return 0;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 1;
  return 0;
}

/* ref: FUN_00eb6aa0 */
byte F_00eb6aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    if ((*(int *)piVar1[8] == 0) || (*(int *)piVar1[0xc] < 1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
    else {
      uVar2 = (uint)**(byte * PTR32 *)piVar1[8];
    }
    if (uVar2 != 0xffffffff) {
      *(byte *)((int)this + 5) = (byte)uVar2;
      *(undefined1 *)((int)this + 4) = 1;
      return (byte)uVar2;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 1;
  return *(byte *)((int)this + 5);
}

/* ref: FUN_00eb6af0 */
byte F_00eb6af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 4) == '\0') {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1 == (int *)0x0) {
LAB_00eb6b2b: ;
      *(undefined4 *)this = 0;
    }
    else {
      if ((*(int *)piVar1[8] == 0) || (*(int *)piVar1[0xc] < 1)) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      }
      else {
        uVar2 = (uint)**(byte * PTR32 *)piVar1[8];
      }
      if (uVar2 == 0xffffffff) goto LAB_00eb6b2b;
      *(char *)((int)this + 5) = (char)uVar2;
    }
    *(undefined1 *)((int)this + 4) = 1;
  }
  if ((char)param_1[1] != '\0') goto LAB_00eb6b76;
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
LAB_00eb6b6c: ;
    *param_1 = 0;
  }
  else {
    if ((*(int *)piVar1[8] == 0) || (*(int *)piVar1[0xc] < 1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
    }
    else {
      uVar2 = (uint)**(byte * PTR32 *)piVar1[8];
    }
    if (uVar2 == 0xffffffff) goto LAB_00eb6b6c;
    *(char *)((int)param_1 + 5) = (char)uVar2;
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_00eb6b76: ;
  if (*(int *)this == 0) {
    if (*param_1 == 0) {
      return 1;
    }
  }
  else if (*param_1 != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00eb6ba0 */
uint F_00eb6ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeb6ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d078));
  F_00eb6750(this,param_1,param_3);
  return (uint)this;
}

/* ref: numpunct_G_std::vf1 */
ushort F_00eb6bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0xc);
}

/* ref: numpunct_G_std::vf2 */
ushort F_00eb6be0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0xe);
}

/* ref: FUN_00eb6bf0 */
uint F_00eb6bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d078));
  F_00406b30(*(undefined4 *)((int)this + 8));
  F_00406b30(*(undefined4 *)((int)this + 0x10));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return (uint)uVar1;
}

/* ref: numpunct_G_std::vf0 */
uint F_00eb6c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d078));
  F_00406b30(*(undefined4 *)((int)this + 8));
  F_00406b30(*(undefined4 *)((int)this + 0x10));
  F_00406b30(*(undefined4 *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb6c80 */
uint F_00eb6c80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00eaeac0(this);
  return (uint)this;
}

/* ref: FUN_00eb6ca0 */
uint F_00eb6ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00eaeb50(this);
  return (uint)this;
}

/* ref: FUN_00eb6cb0 */
uint F_00eb6cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eb6cd0 */
uint F_00eb6cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eb6cf0 */
unsigned int F_00eb6cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00eb6d10 */
uint F_00eb6d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eb6d30 */
uint F_00eb6d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eb6d50 */
uint F_00eb6d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb6d80 */
uint F_00eb6d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)this + 0x58));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb6dc0 */
uint F_00eb6dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x2d) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00eb6e10 */
unsigned int F_00eb6e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    *(undefined4 *)((int)param_1 + 0x60) = 0;
    *(undefined4 *)((int)param_1 + 0x68) = 0;
    F_00ea7d20((undefined4 *)((int)param_1 + 0x58),param_2 + 0x58);
  }
  return 0;
}

/* ref: FUN_00eb6e50 */
uint F_00eb6e50(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6e50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00eb6e70 */
uint F_00eb6e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_2);
  return (uint)this;
}

/* ref: FUN_00eb6ea0 */
uint F_00eb6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = (undefined *)((int)this + 0x60);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) + -0x60))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d014));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60((undefined *)((int)this + 0x18));
  F_00479ae0((undefined *)((int)this + 0x18));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) + -0x60))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + -0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) + -0x60))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: FUN_00eb6f10 */
uint F_00eb6f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6f10u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if ((param_1 != (uint *)0x0) && (*param_1 == 0)) {
    this = (undefined *)F_004069f0(0x20);
    if (this == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      uVar4 = 0;
      uVar1 = F_0047dca0(((undefined1 *)(gen_frame + 0x4)),iVar2);
      uVar1 = F_00eaef10(this,uVar1,uVar4);
    }
    *param_1 = uVar1;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 2;
}

/* ref: FUN_00eb6f80 */
uint F_00eb6f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb6f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = F_00e68a50(this,0,*(undefined4 *)((int)this + 0x10),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_00eb6fb0 */
unsigned int F_00eb6fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb6fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != 0) {
    F_00eaf8e0(this,*(uint *)((int)this + 0xc) | param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00eb6fd0 */
uint F_00eb6fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb6fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  
  if (**(int * PTR32 *)((int)this + 0x20) != 0) {
    if (1 < **(int * PTR32 *)((int)this + 0x30)) {
      **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) + -1;
      pbVar2 = ((byte *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 1)));
      **(int * PTR32 *)((int)this + 0x20) = (int)pbVar2;
      return (uint)*pbVar2;
    }
    if ((**(int * PTR32 *)((int)this + 0x20) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 0x30), 0 < *piVar1))
    {
      *piVar1 = *piVar1 + -1;
      pbVar2 = ((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
      **(int * PTR32 *)((int)this + 0x20) = (int)(pbVar2 + 1);
      uVar3 = (uint)*pbVar2;
      goto LAB_00eb7020;
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
LAB_00eb7020: ;
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  if ((**(int * PTR32 *)((int)this + 0x20) != 0) && (0 < **(int * PTR32 *)((int)this + 0x30))) {
    return (uint)*((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  return uVar3;
}

/* ref: FUN_00eb7050 */
uint F_00eb7050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb7050u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00eb7080 */
uint F_00eb7080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb7080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2;
}

/* ref: FUN_00eb70a0 */
uint F_00eb70a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb70a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00eb70c0 */
uint F_00eb70c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb70c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e38f4);
  if (REFG(undefined4, 0x15d67a0) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x15d67a0) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15d67a0) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x15d67a0);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15d67a0) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x15d67a0) * 4)));
    if (uVar3 != 0) goto LAB_00eb71c1;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00eb7143: ;
    if (uVar3 != 0) goto LAB_00eb71c1;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00eb7143;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00eb6f10(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e38f4) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00eb71c1: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00eb71e0 */
uint F_00eb71e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeb71e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  
  pbVar6 = param_5;
  iVar5 = param_6;
  do {
    if (iVar5 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == (int *)0x0) {
LAB_00eb722f: ;
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *pbVar6;
      if ((*(int *)param_4[9] == 0) || (piVar2 = (int *)param_4[0xd], *piVar2 < 1)) {
        uVar4 = ((code *)*(gen_code32 *)(*param_4 + 0xc))(param_4,(uint)bVar1);
      }
      else {
        *piVar2 = *piVar2 + -1;
        pbVar3 = *(byte * PTR32 *)param_4[9];
        *(byte * PTR32 *)param_4[9] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_00eb722f;
    }
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 + -1;
  } while( true );
}

/* ref: FUN_00eb7250 */
uint F_00eb7250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeb7250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_6;
  do {
    if (iVar4 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == (int *)0x0) {
LAB_00eb729c: ;
      uVar3 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar3,1);
    }
    else {
      if ((*(int *)param_4[9] == 0) || (piVar1 = (int *)param_4[0xd], *piVar1 < 1)) {
        uVar3 = ((code *)*(gen_code32 *)(*param_4 + 0xc))(param_4,(uint)(byte)param_5);
      }
      else {
        *piVar1 = *piVar1 + -1;
        pbVar2 = *(byte * PTR32 *)param_4[9];
        *(byte * PTR32 *)param_4[9] = pbVar2 + 1;
        *pbVar2 = (byte)param_5;
        uVar3 = (uint)(byte)param_5;
      }
      if (uVar3 == 0xffffffff) goto LAB_00eb729c;
    }
    iVar4 = iVar4 + -1;
  } while( true );
}

/* ref: FUN_00eb72c0 */
uint F_00eb72c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeb72c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  
  pbVar6 = param_5;
  iVar5 = param_6;
  do {
    if (iVar5 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == (int *)0x0) {
LAB_00eb730f: ;
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *pbVar6;
      if ((*(int *)param_4[9] == 0) || (piVar2 = (int *)param_4[0xd], *piVar2 < 1)) {
        uVar4 = ((code *)*(gen_code32 *)(*param_4 + 0xc))(param_4,(uint)bVar1);
      }
      else {
        *piVar2 = *piVar2 + -1;
        pbVar3 = *(byte * PTR32 *)param_4[9];
        *(byte * PTR32 *)param_4[9] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_00eb730f;
    }
    pbVar6 = pbVar6 + 1;
    iVar5 = iVar5 + -1;
  } while( true );
}

/* ref: FUN_00eb7330 */
uint F_00eb7330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xeb7330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  gen_size32 param_6 = (gen_size32)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  gen_size32 _MaxCount;
  gen_size32 sVar4;
  undefined * _Buf;
  
  _MaxCount = param_6;
  _Buf = param_5;
  while( true ) {
    pvVar2 = F_00c48f80(_Buf,0,_MaxCount);
    sVar4 = _MaxCount;
    if (pvVar2 != (undefined *)0x0) {
      sVar4 = (int)pvVar2 - (int)_Buf;
    }
    puVar3 = (undefined4 *)F_00eb72c0(param_1,((undefined1 *)(gen_frame + 0x14)),param_3,param_4,_Buf,sVar4);
    param_3 = *puVar3;
    param_4 = puVar3[1];
    if (_MaxCount - sVar4 == 0) break;
    if ((char)param_7 != '\0') {
      puVar3 = (undefined4 *)F_00eb7250(param_1,((undefined1 *)(gen_frame + 0xc)),*puVar3,puVar3[1],param_7,1);
      param_3 = *puVar3;
      param_4 = puVar3[1];
    }
    _Buf = (undefined *)((int)_Buf + sVar4 + 1);
    _MaxCount = (_MaxCount - sVar4) - 1;
  }
  uVar1 = *puVar3;
  param_2[1] = puVar3[1];
  *param_2 = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00eb73d0 */
uint F_00eb73d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb73d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  bool bVar3;
  undefined8 _Var4;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)F_004069f0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      F_0047dca0(((undefined1 *)(gen_frame + 0x4)),iVar2);
      puVar1[1] = 0;
      *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x115cb34));
      _Var4 = F_01051073();
      *(undefined *)(puVar1 + 2) = _Var4;
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 4;
}

/* ref: FUN_00eb7450 */
uint F_00eb7450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeb7450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d094));
  F_00eafca0(this,param_1,param_3);
  return (uint)this;
}

/* ref: numpunct_D_std::vf1 */
byte F_00eb7480(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xc);
}

/* ref: numpunct_D_std::vf2 */
byte F_00eb7490(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xd);
}

/* ref: FUN_00eb74a0 */
uint F_00eb74a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb74a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d094));
  F_00406b30(*(undefined4 *)((int)this + 8));
  F_00406b30(*(undefined4 *)((int)this + 0x10));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return (uint)uVar1;
}

/* ref: numpunct_D_std::vf0 */
uint F_00eb74d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb74d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x115d094));
  F_00406b30(*(undefined4 *)((int)this + 8));
  F_00406b30(*(undefined4 *)((int)this + 0x10));
  F_00406b30(*(undefined4 *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf0 */
uint F_00eb7520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb7520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb7550 */
uint F_00eb7550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb7550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00eb7570 */
uint F_00eb7570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb7570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00eb7580 */
uint F_00eb7580(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00eb1600(this);
  return (uint)this;
}

/* ref: FUN_00eb75b0 */
uint F_00eb75b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb75b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00eb75c0 */
uint F_00eb75c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb75c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00eb75e0 */
uint F_00eb75e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb75e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00eacb60(this);
  return (uint)this;
}

/* ref: FUN_00eb75f0 */
byte F_00eb75f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb75f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00eb7610 */
uint F_00eb7610(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + -0x50) + 4))) + -0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
  *(undefined * PTR32 * PTR32 *)((int)this + -0x4c) =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  F_00eacbd0((undefined *)((int)this + -0x4c));
  F_00eaf3b0((undefined *)((int)this + -0x4c));
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + -0x50) + 4)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((uVar1 - 0x50) + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  return uVar1;
}

/* ref: FUN_00eb7650 */
byte F_00eb7650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb7650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00eb7670 */
uint F_00eb7670(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  uVar1 = F_00eb1780(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1 */
uint F_00eb7690(void)
{
  GEN_ENTER(0xeb7690u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2 */
uint F_00eb76a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb76a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x38) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3 */
uint F_00eb76b0(void)
{
  GEN_ENTER(0xeb76b0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4 */
uint F_00eb76c0(void)
{
  GEN_ENTER(0xeb76c0u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5 */
int F_00eb7700(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 100); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6 */
unsigned int F_00eb7720(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 100); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7760 */
unsigned int F_00eb7760(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb17d0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1 */
uint F_00eb7780(void)
{
  GEN_ENTER(0xeb7780u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2 */
uint F_00eb7790(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xd8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3 */
uint F_00eb77a0(void)
{
  GEN_ENTER(0xeb77a0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4 */
uint F_00eb77b0(void)
{
  GEN_ENTER(0xeb77b0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5 */
int F_00eb77f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb77f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x104); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6 */
unsigned int F_00eb7810(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x104); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7850 */
unsigned int F_00eb7850(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb1820(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7870 */
uint F_00eb7870(void)
{
  GEN_ENTER(0xeb7870u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7880 */
uint F_00eb7880(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7880u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x78) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7890 */
uint F_00eb7890(void)
{
  GEN_ENTER(0xeb7890u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb78a0 */
uint F_00eb78a0(void)
{
  GEN_ENTER(0xeb78a0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb78e0 */
int F_00eb78e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb78e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xa4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7900 */
unsigned int F_00eb7900(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xa4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7940 */
unsigned int F_00eb7940(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb1870(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7960 */
uint F_00eb7960(void)
{
  GEN_ENTER(0xeb7960u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7970 */
uint F_00eb7970(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x168) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7980 */
uint F_00eb7980(void)
{
  GEN_ENTER(0xeb7980u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7990 */
uint F_00eb7990(void)
{
  GEN_ENTER(0xeb7990u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb79d0 */
int F_00eb79d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb79d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x194); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb79f0 */
unsigned int F_00eb79f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb79f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x194); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7a30 */
unsigned int F_00eb7a30(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb18c0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7a50 */
uint F_00eb7a50(void)
{
  GEN_ENTER(0xeb7a50u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7a60 */
uint F_00eb7a60(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7a60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xa8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7a70 */
uint F_00eb7a70(void)
{
  GEN_ENTER(0xeb7a70u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7a80 */
uint F_00eb7a80(void)
{
  GEN_ENTER(0xeb7a80u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7ac0 */
int F_00eb7ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xd4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7ae0 */
unsigned int F_00eb7ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xd4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7b20 */
unsigned int F_00eb7b20(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb1910(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7b40 */
uint F_00eb7b40(void)
{
  GEN_ENTER(0xeb7b40u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7b50 */
uint F_00eb7b50(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7b50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x1c8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7b60 */
uint F_00eb7b60(void)
{
  GEN_ENTER(0xeb7b60u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7b70 */
uint F_00eb7b70(void)
{
  GEN_ENTER(0xeb7b70u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7bb0 */
int F_00eb7bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7bb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 500); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7bd0 */
unsigned int F_00eb7bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 500); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7c10 */
unsigned int F_00eb7c10(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb1960(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7c30 */
uint F_00eb7c30(void)
{
  GEN_ENTER(0xeb7c30u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7c40 */
uint F_00eb7c40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x1f8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7c50 */
uint F_00eb7c50(void)
{
  GEN_ENTER(0xeb7c50u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7c60 */
uint F_00eb7c60(void)
{
  GEN_ENTER(0xeb7c60u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7ca0 */
int F_00eb7ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x224); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7cc0 */
unsigned int F_00eb7cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x224); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7d00 */
uint F_00eb7d00(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  uVar1 = F_00eb19b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar1;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7d20 */
uint F_00eb7d20(void)
{
  GEN_ENTER(0xeb7d20u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7d30 */
uint F_00eb7d30(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7d30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x78) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7d40 */
uint F_00eb7d40(void)
{
  GEN_ENTER(0xeb7d40u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7d50 */
uint F_00eb7d50(void)
{
  GEN_ENTER(0xeb7d50u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7d90 */
int F_00eb7d90(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xa4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7db0 */
unsigned int F_00eb7db0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xa4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7df0 */
unsigned int F_00eb7df0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb1a00(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7e10 */
uint F_00eb7e10(void)
{
  GEN_ENTER(0xeb7e10u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7e20 */
uint F_00eb7e20(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x198) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7e30 */
uint F_00eb7e30(void)
{
  GEN_ENTER(0xeb7e30u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7e40 */
uint F_00eb7e40(void)
{
  GEN_ENTER(0xeb7e40u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7e80 */
int F_00eb7e80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x1c4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7ea0 */
unsigned int F_00eb7ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x1c4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7ee0 */
unsigned int F_00eb7ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb1a50(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7f00 */
uint F_00eb7f00(void)
{
  GEN_ENTER(0xeb7f00u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb7f10 */
uint F_00eb7f10(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x138) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb7f20 */
uint F_00eb7f20(void)
{
  GEN_ENTER(0xeb7f20u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb7f30 */
uint F_00eb7f30(void)
{
  GEN_ENTER(0xeb7f30u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb7f70 */
int F_00eb7f70(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x164); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb7f90 */
unsigned int F_00eb7f90(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x164); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb7fd0 */
unsigned int F_00eb7fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb7fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb7ff0 */
uint F_00eb7ff0(void)
{
  GEN_ENTER(0xeb7ff0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb8000 */
uint F_00eb8000(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x98) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb8010 */
uint F_00eb8010(void)
{
  GEN_ENTER(0xeb8010u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb8020 */
uint F_00eb8020(void)
{
  GEN_ENTER(0xeb8020u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb8060 */
int F_00eb8060(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb8080 */
unsigned int F_00eb8080(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xc4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb80c0 */
unsigned int F_00eb80c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb80c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb1af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf1 */
uint F_00eb80e0(void)
{
  GEN_ENTER(0xeb80e0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf2 */
uint F_00eb80f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb80f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x948) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf3 */
uint F_00eb8100(void)
{
  GEN_ENTER(0xeb8100u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf4 */
uint F_00eb8110(void)
{
  GEN_ENTER(0xeb8110u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf5 */
int F_00eb8150(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x974); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf6 */
unsigned int F_00eb8170(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x974); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb81b0 */
unsigned int F_00eb81b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb81b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf1_00eb81d0 */
uint F_00eb81d0(void)
{
  GEN_ENTER(0xeb81d0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf2_00eb81e0 */
uint F_00eb81e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb81e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x58) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf3_00eb81f0 */
uint F_00eb81f0(void)
{
  GEN_ENTER(0xeb81f0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf4_00eb8200 */
uint F_00eb8200(void)
{
  GEN_ENTER(0xeb8200u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf5_00eb8240 */
int F_00eb8240(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x84); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf6_00eb8260 */
unsigned int F_00eb8260(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x84); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb82a0 */
unsigned int F_00eb82a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb82a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb1b90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf1 */
uint F_00eb82c0(void)
{
  GEN_ENTER(0xeb82c0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf2 */
uint F_00eb82d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb82d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x318) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf3 */
uint F_00eb82e0(void)
{
  GEN_ENTER(0xeb82e0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf4 */
uint F_00eb82f0(void)
{
  GEN_ENTER(0xeb82f0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf5 */
int F_00eb8330(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x344); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf6 */
unsigned int F_00eb8350(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x344); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8390 */
unsigned int F_00eb8390(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb1be0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf1 */
uint F_00eb83b0(void)
{
  GEN_ENTER(0xeb83b0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf2 */
uint F_00eb83c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb83c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x588) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf3 */
uint F_00eb83d0(void)
{
  GEN_ENTER(0xeb83d0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf4 */
uint F_00eb83e0(void)
{
  GEN_ENTER(0xeb83e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf5 */
int F_00eb8420(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x5b4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf6 */
unsigned int F_00eb8440(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x5b4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8480 */
unsigned int F_00eb8480(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb1c30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf1 */
uint F_00eb84a0(void)
{
  GEN_ENTER(0xeb84a0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf2 */
uint F_00eb84b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb84b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x24d8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf3 */
uint F_00eb84c0(void)
{
  GEN_ENTER(0xeb84c0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf4 */
uint F_00eb84d0(void)
{
  GEN_ENTER(0xeb84d0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf5 */
int F_00eb8510(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x2504); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf6 */
unsigned int F_00eb8530(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x2504); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8570 */
unsigned int F_00eb8570(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf1 */
uint F_00eb8590(void)
{
  GEN_ENTER(0xeb8590u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf2 */
uint F_00eb85a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb85a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 600) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf3 */
uint F_00eb85b0(void)
{
  GEN_ENTER(0xeb85b0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf4 */
uint F_00eb85c0(void)
{
  GEN_ENTER(0xeb85c0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf5 */
int F_00eb8600(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x284); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf6 */
unsigned int F_00eb8620(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x284); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8660 */
unsigned int F_00eb8660(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf1 */
uint F_00eb8680(void)
{
  GEN_ENTER(0xeb8680u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf2 */
uint F_00eb8690(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x3d8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf3 */
uint F_00eb86a0(void)
{
  GEN_ENTER(0xeb86a0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf4 */
uint F_00eb86b0(void)
{
  GEN_ENTER(0xeb86b0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf5 */
int F_00eb86f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb86f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x404); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf6 */
unsigned int F_00eb8710(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x404); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8750 */
unsigned int F_00eb8750(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf1 */
uint F_00eb8770(void)
{
  GEN_ENTER(0xeb8770u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf2 */
uint F_00eb8780(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x378) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf3 */
uint F_00eb8790(void)
{
  GEN_ENTER(0xeb8790u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf4 */
uint F_00eb87a0(void)
{
  GEN_ENTER(0xeb87a0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf5 */
int F_00eb87e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb87e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x3a4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf6 */
unsigned int F_00eb8800(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x3a4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8840 */
unsigned int F_00eb8840(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf1 */
uint F_00eb8860(void)
{
  GEN_ENTER(0xeb8860u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf2 */
uint F_00eb8870(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x2b8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf3 */
uint F_00eb8880(void)
{
  GEN_ENTER(0xeb8880u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf4 */
uint F_00eb8890(void)
{
  GEN_ENTER(0xeb8890u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf5 */
int F_00eb88d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb88d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x2e4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf6 */
unsigned int F_00eb88f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x2e4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8930 */
unsigned int F_00eb8930(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf1 */
uint F_00eb8950(void)
{
  GEN_ENTER(0xeb8950u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf2 */
uint F_00eb8960(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x438) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf3 */
uint F_00eb8970(void)
{
  GEN_ENTER(0xeb8970u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf4 */
uint F_00eb8980(void)
{
  GEN_ENTER(0xeb8980u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf5 */
int F_00eb89c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb89c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x464); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf6 */
unsigned int F_00eb89e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb89e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x464); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8a20 */
unsigned int F_00eb8a20(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf1 */
uint F_00eb8a40(void)
{
  GEN_ENTER(0xeb8a40u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf2 */
uint F_00eb8a50(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8a50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x768) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf3 */
uint F_00eb8a60(void)
{
  GEN_ENTER(0xeb8a60u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf4 */
uint F_00eb8a70(void)
{
  GEN_ENTER(0xeb8a70u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf5 */
int F_00eb8ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x794); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf6 */
unsigned int F_00eb8ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x794); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8b10 */
unsigned int F_00eb8b10(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf1 */
uint F_00eb8b30(void)
{
  GEN_ENTER(0xeb8b30u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf2 */
uint F_00eb8b40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x468) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf3 */
uint F_00eb8b50(void)
{
  GEN_ENTER(0xeb8b50u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf4 */
uint F_00eb8b60(void)
{
  GEN_ENTER(0xeb8b60u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf5 */
int F_00eb8ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x494); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf6 */
unsigned int F_00eb8bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x494); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8c00 */
unsigned int F_00eb8c00(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf1 */
uint F_00eb8c20(void)
{
  GEN_ENTER(0xeb8c20u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf2 */
uint F_00eb8c30(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xa68) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf3 */
uint F_00eb8c40(void)
{
  GEN_ENTER(0xeb8c40u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf4 */
uint F_00eb8c50(void)
{
  GEN_ENTER(0xeb8c50u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf5 */
int F_00eb8c90(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8c90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xa94); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf6 */
unsigned int F_00eb8cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xa94); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8cf0 */
unsigned int F_00eb8cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf1 */
uint F_00eb8d10(void)
{
  GEN_ENTER(0xeb8d10u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf2 */
uint F_00eb8d20(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x858) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf3 */
uint F_00eb8d30(void)
{
  GEN_ENTER(0xeb8d30u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf4 */
uint F_00eb8d40(void)
{
  GEN_ENTER(0xeb8d40u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf5 */
int F_00eb8d80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x884); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf6 */
unsigned int F_00eb8da0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x884); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8de0 */
unsigned int F_00eb8de0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf1 */
uint F_00eb8e00(void)
{
  GEN_ENTER(0xeb8e00u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf2 */
uint F_00eb8e10(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xb88) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf3 */
uint F_00eb8e20(void)
{
  GEN_ENTER(0xeb8e20u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf4 */
uint F_00eb8e30(void)
{
  GEN_ENTER(0xeb8e30u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf5 */
int F_00eb8e70(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8e70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xbb4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf6 */
unsigned int F_00eb8e90(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xbb4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8ed0 */
unsigned int F_00eb8ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf1 */
uint F_00eb8ef0(void)
{
  GEN_ENTER(0xeb8ef0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf2 */
uint F_00eb8f00(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8f00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x2e8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf3 */
uint F_00eb8f10(void)
{
  GEN_ENTER(0xeb8f10u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf4 */
uint F_00eb8f20(void)
{
  GEN_ENTER(0xeb8f20u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf5 */
int F_00eb8f60(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x314); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf6 */
unsigned int F_00eb8f80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x314); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8fc0 */
unsigned int F_00eb8fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf1 */
uint F_00eb8fe0(void)
{
  GEN_ENTER(0xeb8fe0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf2 */
uint F_00eb8ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 600) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf3 */
uint F_00eb9000(void)
{
  GEN_ENTER(0xeb9000u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf4 */
uint F_00eb9010(void)
{
  GEN_ENTER(0xeb9010u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf5 */
int F_00eb9050(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x284); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf6 */
unsigned int F_00eb9070(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x284); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb90b0 */
unsigned int F_00eb90b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb90b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf1 */
uint F_00eb90d0(void)
{
  GEN_ENTER(0xeb90d0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf2 */
uint F_00eb90e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb90e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x978) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf3 */
uint F_00eb90f0(void)
{
  GEN_ENTER(0xeb90f0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf4 */
uint F_00eb9100(void)
{
  GEN_ENTER(0xeb9100u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf5 */
int F_00eb9140(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x9a4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf6 */
unsigned int F_00eb9160(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x9a4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb91a0 */
unsigned int F_00eb91a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb91a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf1 */
uint F_00eb91c0(void)
{
  GEN_ENTER(0xeb91c0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf2 */
uint F_00eb91d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb91d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x4b8) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf3 */
uint F_00eb91e0(void)
{
  GEN_ENTER(0xeb91e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf4 */
uint F_00eb91f0(void)
{
  GEN_ENTER(0xeb91f0u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf5 */
int F_00eb9230(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x4e4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf6 */
unsigned int F_00eb9250(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x4e4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb9290 */
unsigned int F_00eb9290(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf1 */
uint F_00eb92b0(void)
{
  GEN_ENTER(0xeb92b0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf2 */
uint F_00eb92c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb92c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x1938) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf3 */
uint F_00eb92d0(void)
{
  GEN_ENTER(0xeb92d0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf4 */
uint F_00eb92e0(void)
{
  GEN_ENTER(0xeb92e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf5 */
int F_00eb9320(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x1964); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf6 */
unsigned int F_00eb9340(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x1964); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb9380 */
uint F_00eb9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = (undefined *)((int)this + -0x60);
  F_00eb6ea0(this_00);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this_00);
  }
  return (uint)this_00;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
uint F_00eb93b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb93b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  F_00eb1780(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
uint F_00eb93e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb93e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb17d0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9410 */
uint F_00eb9410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb1820(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9440 */
uint F_00eb9440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb1870(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9470 */
uint F_00eb9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb18c0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb94a0 */
uint F_00eb94a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb94a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb1910(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb94d0 */
uint F_00eb94d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb94d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb1960(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9500 */
uint F_00eb9500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb19b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9530 */
uint F_00eb9530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb1a00(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9560 */
uint F_00eb9560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb1a50(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9590 */
uint F_00eb9590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf0 */
uint F_00eb95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb1af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb95f0 */
uint F_00eb95f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb95f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf0 */
uint F_00eb9620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb1b90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf0 */
uint F_00eb9650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb1be0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf0 */
uint F_00eb9680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb1c30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf0 */
uint F_00eb96b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb96b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf0 */
uint F_00eb96e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb96e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf0 */
uint F_00eb9710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf0 */
uint F_00eb9740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf0 */
uint F_00eb9770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf0 */
uint F_00eb97a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb97a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf0 */
uint F_00eb97d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb97d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf0 */
uint F_00eb9800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf0 */
uint F_00eb9830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf0 */
uint F_00eb9860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf0 */
uint F_00eb9890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf0 */
uint F_00eb98c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb98c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf0 */
uint F_00eb98f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb98f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf0 */
uint F_00eb9920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf0 */
uint F_00eb9950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb9980 */
uint F_00eb9980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xb5);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xb5);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00eb99d0 */
uint F_00eb99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb99d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eb99e0 */
uint F_00eb99e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb99e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x81) == '\0') {
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

/* ref: FUN_00eb9a40 */
byte F_00eb9a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004069f0(param_1 * 0x18);
    if (uVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
  }
  *(uint *)this = uVar1;
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 8) = uVar1 + param_1 * 0x18;
  return 1;
}

/* ref: FUN_00eb9ad0 */
uint F_00eb9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eb9ae0 */
uint F_00eb9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_2);
  return (uint)this;
}

/* ref: FUN_00eb9b10 */
uint F_00eb9b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: FUN_00eb9b30 */
uint F_00eb9b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  F_00eb2150(this);
  uVar1 = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
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
  *(uint *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return (uint)this;
}

/* ref: FUN_00eb9b80 */
uint F_00eb9b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0xb8);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb4))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb5))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00eb9bf0 */
uint F_00eb9bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x88);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x80))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x81))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00eb9c60 */
uint F_00eb9c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x10 + -0x20;
  return uVar1;
}

