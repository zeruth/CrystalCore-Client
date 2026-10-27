#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0091fb40 */
uint F_0091fb40(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb50 */
uint F_0091fb50(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb60 */
uint F_0091fb60(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb70 */
uint F_0091fb70(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb80 */
uint F_0091fb80(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fb90 */
uint F_0091fb90(unsigned int gen_a0)
{
  GEN_ENTER(0x91fb90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fba0 */
uint F_0091fba0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fbb0 */
uint F_0091fbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fbb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fbc0 */
uint F_0091fbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x91fbc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0091fc00 */
uint F_0091fc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x14);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  return (uint)puVar1;
}

/* ref: FUN_0091fca0 */
byte F_0091fca0(void)
{
  GEN_ENTER(0x91fca0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0091fcb0 */
uint F_0091fcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x14);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  return (uint)puVar1;
}

/* ref: FUN_0091fd50 */
byte F_0091fd50(void)
{
  GEN_ENTER(0x91fd50u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0091fd60 */
uint F_0091fd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
    uVar3 = (*param_5)(puVar1,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar2 * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar2 * 8) = *param_4;
  uVar3 = param_4[1];
  *(uint *)(param_1 + 4 + iVar2 * 8) = uVar3;
  return uVar3;
}

/* ref: FUN_0091fdd0 */
unsigned int F_0091fdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x91fdd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -8) {
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -2;
  }
  return 0;
}

/* ref: FUN_0091fe00 */
uint F_0091fe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar4 = iVar3 * 0x6c + param_1;
    uVar2 = (*param_5)(iVar4,param_4);
    if ((char)uVar2 == '\0') break;
    pvVar5 = (undefined *)(iVar1 * 0x6c + param_1);
    F_0042ccf0(pvVar5,iVar4);
    *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
    *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined4 *)((int)pvVar5 + 100) = *(undefined4 *)(iVar4 + 100);
    *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)(iVar4 + 0x68);
    iVar1 = iVar3;
  }
  pvVar5 = (undefined *)(iVar1 * 0x6c + param_1);
  F_0042ccf0(pvVar5,param_4);
  *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(param_4 + 0x58);
  *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(param_4 + 0x5c);
  *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(param_4 + 0x60);
  uVar2 = *(uint *)(param_4 + 100);
  *(uint *)((int)pvVar5 + 100) = uVar2;
  *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)(param_4 + 0x68);
  return uVar2;
}

/* ref: FUN_0091feb0 */
uint F_0091feb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91feb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_2 + 0x16;
    pvVar3 = param_3;
    do {
      this = (undefined *)((int)pvVar3 - 0x6c);
      F_0042ccf0(this,puVar2 + -0x31);
      *(undefined4 *)((int)pvVar3 - 0x18) = puVar2[-0x1c];
      *(undefined4 *)((int)pvVar3 - 0x14) = puVar2[-0x1b];
      *(undefined4 *)((int)pvVar3 - 0x10) = puVar2[-0x1a];
      *(undefined4 *)((int)pvVar3 - 0xc) = puVar2[-0x19];
      *(undefined4 *)((int)pvVar3 - 8) = puVar2[-0x18];
      puVar1 = puVar2 + -0x31;
      *(undefined4 *)((int)pvVar3 - 4) = puVar2[-0x17];
      puVar2 = puVar2 + -0x1b;
      pvVar3 = this;
    } while (puVar1 != param_1);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_0091ff10 */
uint F_0091ff10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x91ff10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar4 = iVar3 * 0x68 + param_1;
    uVar2 = (*param_5)(iVar4,param_4);
    if ((char)uVar2 == '\0') break;
    pvVar5 = (undefined *)(iVar1 * 0x68 + param_1);
    F_0042ccf0(pvVar5,iVar4);
    *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
    *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined1 *)((int)pvVar5 + 100) = *(undefined1 *)(iVar4 + 100);
    iVar1 = iVar3;
  }
  pvVar5 = (undefined *)(iVar1 * 0x68 + param_1);
  F_0042ccf0(pvVar5,param_4);
  *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(param_4 + 0x58);
  uVar2 = *(uint *)(param_4 + 0x5c);
  *(uint *)((int)pvVar5 + 0x5c) = uVar2;
  *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(param_4 + 0x60);
  *(undefined1 *)((int)pvVar5 + 100) = *(undefined1 *)(param_4 + 100);
  return uVar2;
}

/* ref: FUN_0091ffb0 */
uint F_0091ffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x91ffb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * this;
  
  if (param_1 != param_2) {
    puVar2 = param_2 + 0x16;
    pvVar3 = param_3;
    do {
      this = (undefined *)((int)pvVar3 - 0x68);
      F_0042ccf0(this,puVar2 + -0x30);
      *(undefined4 *)((int)pvVar3 - 0x14) = puVar2[-0x1b];
      *(undefined4 *)((int)pvVar3 - 0x10) = puVar2[-0x1a];
      *(undefined4 *)((int)pvVar3 - 0xc) = puVar2[-0x19];
      *(undefined4 *)((int)pvVar3 - 8) = puVar2[-0x18];
      puVar1 = puVar2 + -0x30;
      *(undefined1 *)((int)pvVar3 - 4) = *(undefined1 *)(puVar2 + -0x17);
      puVar2 = puVar2 + -0x1a;
      pvVar3 = this;
    } while (puVar1 != param_1);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00920010 */
uint F_00920010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920010u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_00920090 */
byte F_00920090(void)
{
  GEN_ENTER(0x920090u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009200a0 */
uint F_009200a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9200a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009200d0 */
uint F_009200d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9200d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
    uVar3 = (*param_5)(puVar1,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar2 * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar2 * 8) = *param_4;
  uVar3 = param_4[1];
  *(uint *)(param_1 + 4 + iVar2 * 8) = uVar3;
  return uVar3;
}

/* ref: FUN_00920140 */
byte F_00920140(void)
{
  GEN_ENTER(0x920140u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00920150 */
uint F_00920150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920150u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0xc);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return (uint)puVar1;
}

/* ref: FUN_009201e0 */
byte F_009201e0(void)
{
  GEN_ENTER(0x9201e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009201f0 */
uint F_009201f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9201f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_00920270 */
uint F_00920270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009202a0 */
uint F_009202a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9202a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_00920320 */
byte F_00920320(void)
{
  GEN_ENTER(0x920320u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00920330 */
uint F_00920330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920330u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00920360 */
uint F_00920360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920360u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_009203e0 */
byte F_009203e0(void)
{
  GEN_ENTER(0x9203e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009203f0 */
uint F_009203f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9203f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00920420 */
uint F_00920420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920420u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_009204a0 */
byte F_009204a0(void)
{
  GEN_ENTER(0x9204a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009204b0 */
uint F_009204b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9204b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009204e0 */
uint F_009204e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9204e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009204f0 */
uint F_009204f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9204f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00920510 */
uint F_00920510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920510u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x18);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    puVar2[5] = puVar1[5];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x18);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  puVar1[5] = param_4[5];
  return (uint)puVar1;
}

/* ref: FUN_009205c0 */
unsigned int F_009205c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9205c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  
  iVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x18) {
    *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(iVar2 + -0x18);
    *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(iVar2 + -0x14);
    *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(iVar2 + -0x10);
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + -0xc);
    *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(iVar2 + -8);
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(iVar2 + -4);
    iVar1 = iVar1 + -0x18;
  }
  return 0;
}

/* ref: FUN_00920610 */
uint F_00920610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920610u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0xc);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return (uint)puVar1;
}

/* ref: FUN_009206a0 */
byte F_009206a0(void)
{
  GEN_ENTER(0x9206a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009206b0 */
uint F_009206b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9206b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar5 = (iVar1 + -1) / 2;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    uVar2 = (*param_5)(puVar4,param_4);
    if ((char)uVar2 == '\0') break;
    puVar3 = (undefined4 *)(iVar1 * 0x10 + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    iVar1 = iVar5;
  }
  puVar4 = (undefined4 *)(iVar1 * 0x10 + param_1);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  return (uint)param_4;
}

/* ref: FUN_00920740 */
byte F_00920740(void)
{
  GEN_ENTER(0x920740u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00920750 */
uint F_00920750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920750u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0xc);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return (uint)puVar1;
}

/* ref: FUN_009207e0 */
byte F_009207e0(void)
{
  GEN_ENTER(0x9207e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_009207f0 */
uint F_009207f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9207f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar5 = (iVar1 + -1) / 2;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    uVar2 = (*param_5)(puVar4,param_4);
    if ((char)uVar2 == '\0') break;
    puVar3 = (undefined4 *)(iVar1 * 0x10 + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    iVar1 = iVar5;
  }
  puVar4 = (undefined4 *)(iVar1 * 0x10 + param_1);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  return (uint)param_4;
}

/* ref: FUN_00920880 */
byte F_00920880(void)
{
  GEN_ENTER(0x920880u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00920890 */
uint F_00920890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x920890u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = param_2;
  while (param_3 < iVar3) {
    iVar5 = (iVar3 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar5 * 0x14);
    uVar4 = (*param_5)(puVar1,param_4);
    if ((char)uVar4 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[4] = puVar1[4];
    iVar3 = iVar5;
  }
  puVar1 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[4] = param_4[4];
  return (uint)puVar1;
}

/* ref: FUN_00920930 */
uint F_00920930(unsigned int gen_a0)
{
  GEN_ENTER(0x920930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920940 */
uint F_00920940(unsigned int gen_a0)
{
  GEN_ENTER(0x920940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920950 */
uint F_00920950(unsigned int gen_a0)
{
  GEN_ENTER(0x920950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920960 */
uint F_00920960(unsigned int gen_a0)
{
  GEN_ENTER(0x920960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920970 */
uint F_00920970(unsigned int gen_a0)
{
  GEN_ENTER(0x920970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920980 */
uint F_00920980(unsigned int gen_a0)
{
  GEN_ENTER(0x920980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00920990 */
uint F_00920990(unsigned int gen_a0)
{
  GEN_ENTER(0x920990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209a0 */
uint F_009209a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209b0 */
uint F_009209b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209c0 */
uint F_009209c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209d0 */
uint F_009209d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9209d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009209e0 */
uint F_009209e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9209e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922f80((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_009209f0 */
uint F_009209f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9209f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00920a00 */
uint F_00920a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x920a00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00920a10 */
uint F_00920a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00924ae0((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a20 */
uint F_00920a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00923170((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a30 */
uint F_00920a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00924b20((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a40 */
uint F_00920a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922f10((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00920a50 */
uint F_00920a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922fd0((undefined *)((int)this + -0x180),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00920a60 */
byte F_00920a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) | 0x80000;
  *(byte *)(in_ecx + 0x15) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00920a80 */
uint F_00920a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_2 = *in_ecx;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[1] = in_ecx[1];
  param_2[2] = 0;
  uVar1 = in_ecx[2];
  param_2[6] = 0;
  param_2[4] = uVar1;
  param_2[8] = 0;
  uVar1 = in_ecx[3];
  param_2[9] = 0;
  param_2[5] = uVar1;
  param_2[10] = uVar2;
  uVar1 = in_ecx[4];
  param_2[0xe] = 0;
  param_2[0xc] = uVar1;
  param_2[0xd] = in_ecx[5];
  return (uint)param_2;
}

/* ref: FUN_00920ae0 */
uint F_00920ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (this == (undefined *)0x0) {
    F_00568010((undefined *)0x0,param_1);
    return param_1;
  }
  F_00568010(*(undefined * PTR32 *)((int)this + 0x70),param_1);
  return param_1;
}

/* ref: FUN_00920b10 */
uint F_00920b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x920b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  this_00 = (undefined *)0x0;
  if (this != (undefined *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  uVar1 = F_005840a0(this_00,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00920b40 */
uint F_00920b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (this == (undefined *)0x0) {
    bVar1 = F_0055a220((undefined *)0x0,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0055a220(*(undefined * PTR32 *)((int)this + 0x70),param_1);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00920b60 */
uint F_00920b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (this == (undefined *)0x0) {
    uVar1 = F_0055a260((undefined *)0x0,param_1);
    return uVar1;
  }
  uVar1 = F_0055a260(*(undefined * PTR32 *)((int)this + 0x70),param_1);
  return uVar1;
}

/* ref: FUN_00920b80 */
uint F_00920b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00559c60(*(undefined * PTR32 *)((int)this + 0x6c),param_1);
  return uVar1;
}

/* ref: FUN_00920b90 */
unsigned int F_00920b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00577aa0(*(undefined * PTR32 *)((int)this + 0x6c),param_1);
  return 0;
}

/* ref: FUN_00920c00 */
unsigned int F_00920c00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x920c00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(REFG(int, 0x137104c) + 0x25f4);
  if ((char)param_1 != '\0') {
    F_0049b7d0(iVar1,1,param_2,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    return 0;
  }
  do {
    F_0049b7d0(iVar1,0,param_2,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
  } while (0 < *(int *)(iVar1 + 0x54));
  return 0;
}

/* ref: FUN_00920ca0 */
uint F_00920ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x920ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00975680(this_00);
    return *(int *)((int)this + 8) - uVar1;
  }
  uVar2 = F_0046ff40();
  return *(int *)((int)this + 8) - (int)(uVar2 / 1000);
}

/* ref: FUN_00920cf0 */
uint F_00920cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentInterface::vf13 */
unsigned int F_00920d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf14 */
unsigned int F_00920d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf15 */
unsigned int F_00920d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00920d50 */
uint F_00920d50(unsigned int gen_a0)
{
  GEN_ENTER(0x920d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2f00(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_00920d80 */
uint F_00920d80(unsigned int gen_a0)
{
  GEN_ENTER(0x920d80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2e40(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_00920db0 */
uint F_00920db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x34 + *(int *)(in_ecx + 0x5c);
}

/* ref: FUN_00920dc0 */
uint F_00920dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x920dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00920e00 */
uint F_00920e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x920e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10d3d38));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::RegionParam::vf1 */
uint F_00920e20(unsigned int gen_a0)
{
  GEN_ENTER(0x920e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::UI2::Agent::AgentMap::RegionParam::vf2 */
uint F_00920e30(unsigned int gen_a0)
{
  GEN_ENTER(0x920e30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00920e40 */
uint F_00920e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x920e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10d3d48));
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_5;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::AreaParam::vf1 */
uint F_00920e70(unsigned int gen_a0)
{
  GEN_ENTER(0x920e70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Client::UI2::Agent::AgentMap::AreaParam::vf2 */
uint F_00920e80(unsigned int gen_a0)
{
  GEN_ENTER(0x920e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00920e90 */
uint F_00920e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x920e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10d3d58));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::FloorParam::vf1 */
uint F_00920ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x920ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::UI2::Agent::AgentMap::FloorParam::vf2 */
uint F_00920ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x920ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Client::UI2::Agent::AgentMap::RegionParam::vf0 */
uint F_00920ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::AreaParam::vf0 */
uint F_00920f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::FloorParam::vf0 */
uint F_00920f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x920f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c3f28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00920f70 */
uint F_00920f70(unsigned int gen_a0)
{
  GEN_ENTER(0x920f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00920fd0 */
byte F_00920fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x920fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  if (*(char *)((int)this + 0x19f) != '\x01') {
    uVar3 = 0;
    if (*(int *)((int)this + 0x184) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
    }
    uVar2 = F_0055a350(uVar3);
    if (((char)uVar2 != '\x01') || (*(char *)((int)this + 0x19c) != '\0')) {
      if (*(char *)((int)this + 0x19d) == '\x01') {
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1a0) - (float10)REFG(double, 0x1088130))));
        (*(float *)(gen_frame + 0x8)) = fVar1;
        *(float *)((int)this + 0x1a0) = fVar1;
      }
      return 0;
    }
    uVar3 = 0;
    if (*(int *)((int)this + 400) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar2 = F_0055a2d0(uVar3);
    if ((char)uVar2 == '\x01') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),0);
    }
    if (*(int *)((int)this + 0x198) != 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 3;
      (*(undefined4 *)(gen_frame + 0x4)) = 4;
      uVar2 = F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x0)));
      if ((char)uVar2 == '\0') {
        F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),1);
        iVar4 = *(int *)((int)this + 0x198) + 1;
        (*(float *)(gen_frame + 0x8)) = gen_bits2f(iVar4);
        fVar5 = (float10)iVar4;
        if (iVar4 < 0) {
          fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)((int)this + 0x1a0) = (float)fVar5;
        *(undefined1 *)((int)this + 0x19c) = 1;
      }
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
      return 0;
    }
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  return 1;
}

/* ref: FUN_009210f0 */
byte F_009210f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9210f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(char *)((int)this + 0x19f) != '\x01') && (*(char *)((int)this + 0x19c) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x4)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 5;
    F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    uVar2 = 0;
    if (*(int *)((int)this + 400) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar1 = F_0055a2d0(uVar2);
    if ((char)uVar1 == '\x01') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400),1);
      F_0059dde0(*(undefined * PTR32 *)((int)this + 400),0);
    }
    uVar2 = 0;
    if (*(int *)((int)this + 400) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    uVar1 = F_0055a2d0(uVar2);
    if ((char)uVar1 == '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184),1);
    }
    *(undefined1 *)((int)this + 0x19c) = 0;
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
    return 0;
  }
  return 1;
}

/* ref: FUN_009211c0 */
uint F_009211c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9211c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_00921220 */
uint F_00921220(unsigned int gen_a0)
{
  GEN_ENTER(0x921220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_009212d0 */
uint F_009212d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9212d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0078f910(this,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_009212f0 */
uint F_009212f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9212f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)((int)this + uVar3 * 4);
    this_00 = (undefined *)0x0;
    if (iVar1 != 0) {
      this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    bVar2 = F_0055a300(this_00,param_1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::UI2::AddonFishingNote::TreeList::vf2 */
uint F_00921340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x921340u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonFishingNote::TreeList::vf0 */
uint F_00921350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonScreenLog::AddonChild::vf0 */
uint F_009213d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9213d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00921400 */
uint F_00921400(unsigned int gen_a0)
{
  GEN_ENTER(0x921400u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *in_ecx = 0;
  puVar2 = in_ecx + 1;
  iVar1 = 2;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    F_0042b630(puVar2 + 4);
    puVar2 = puVar2 + 0x19;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x51);
  return (uint)in_ecx;
}

/* ref: FUN_00921450 */
uint F_00921450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x921450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * this_00;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined4 uVar4;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x7c))))(*(int * PTR32 *)((int)this + 400));
  iVar1 = *(int *)((int)this + 400);
  if (uVar3 != 0) {
    if (iVar1 != 0) {
      F_0055a300(*(undefined * PTR32 *)(iVar1 + 0x70),param_1);
      bVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
      return CONCAT31(extraout_var_00,bVar2);
    }
    F_0055a300((undefined *)0x0,param_1);
    bVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),0);
    return CONCAT31(extraout_var,bVar2);
  }
  this_00 = (undefined *)0x0;
  if (iVar1 != 0) {
    this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  bVar2 = F_0055a300(this_00,0);
  if ((char)param_2 == '\0') {
    if ((char)param_3 == '\0') {
      return CONCAT31(extraout_var_01,bVar2);
    }
    uVar4 = *(undefined4 *)((int)this + 0x4dc);
  }
  else {
    uVar4 = *(undefined4 *)((int)this + 0x4d8);
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x194),uVar4);
  bVar2 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x194),1);
  return CONCAT31(extraout_var_02,bVar2);
}

/* ref: FUN_00921500 */
uint F_00921500(unsigned int gen_a0)
{
  GEN_ENTER(0x921500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ulonglong uVar4;
  
  *(undefined4 *)this = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x54);
      F_0042c880(this_00);
    }
    uVar4 = F_00406b30((int *)(iVar1 + -4));
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar3;
}

/* ref: FUN_00921570 */
uint F_00921570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x14) = 0xff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)this = 9999;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  uVar1 = F_00760f10(this,param_1,0);
  return uVar1;
}

/* ref: FUN_009215b0 */
uint F_009215b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9215b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009215e0 */
uint F_009215e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9215e0u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined2 * in_ecx_00;
  
  iVar1 = 8;
  in_ecx_00 = in_ecx + 0x10;
  do {
    F_0042b630(in_ecx_00);
    in_ecx_00 = in_ecx_00 + 0x30;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x1c2);
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 6) = 0;
  in_ecx[8] = 0;
  *(undefined1 *)(in_ecx + 9) = 0;
  *(undefined1 *)(in_ecx + 0x1ba) = 0;
  *(undefined4 *)(in_ecx + 0x1bc) = 0;
  *(undefined4 *)(in_ecx + 0x1be) = 0;
  in_ecx[0x1c0] = 0;
  F_0042aca0(in_ecx + 0x1c2);
  return (uint)in_ecx;
}

/* ref: FUN_00921650 */
uint F_00921650(unsigned int gen_a0)
{
  GEN_ENTER(0x921650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x60) = 0;
  pvVar1 = F_00c48350((undefined *)((int)this + 100),0,0x32c);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  return (uint)pvVar1;
}

/* ref: FUN_00921680 */
uint F_00921680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 100 + (int)this);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 100 + (int)this) = bVar1 | 1;
    uVar2 = (uint)(bVar1 >> 1);
    *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + uVar2;
  }
  return uVar2;
}

/* ref: FUN_009216a0 */
uint F_009216a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9216a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x60) = 0;
  F_00c48350((undefined *)((int)this + 100),0,0x32c);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00921730 */
unsigned int F_00921730(unsigned int gen_a0)
{
  GEN_ENTER(0x921730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  return 0;
}

/* ref: FUN_009217f0 */
byte F_009217f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9217f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 5;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemFate::vf0 */
uint F_00921800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemMonsterNote::vf0 */
uint F_00921830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0x6c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemContents::vf0 */
uint F_00921870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009218a0 */
unsigned int F_009218a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9218a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_009218d0 */
unsigned int F_009218d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9218d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x68);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x68) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentModule::vf0 */
uint F_00921900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pAVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c4410));
  pAVar2 = this + 0xc;
  iVar3 = 0x65;
  do {
    puVar1 = *(undefined4 * PTR32 *)pAVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(int *)pAVar2 = 0;
    }
    pAVar2 = pAVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf21 */
byte F_00921950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00921960 */
uint F_00921960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00953300((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921970 */
uint F_00921970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x1400 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_00921990 */
uint F_00921990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x1800 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_009219b0 */
uint F_009219b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9219b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x1c00 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_009219d0 */
uint F_009219d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9219d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x2000 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_009219f0 */
uint F_009219f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9219f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *(undefined4 *)(uVar1 + 0x2400 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_00921a10 */
uint F_00921a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x921a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 + -2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0xc00 + param_5 * 4)));
  return (uint)param_1;
}

/* ref: FUN_00921a50 */
uint F_00921a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x921a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 + -2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x1000 + param_5 * 4)))
  ;
  return (uint)param_1;
}

/* ref: FUN_00921a90 */
uint F_00921a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1400 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return (uint)param_1;
}

/* ref: FUN_00921ad0 */
uint F_00921ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1800 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return (uint)param_1;
}

/* ref: FUN_00921b10 */
uint F_00921b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x1c00 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return (uint)param_1;
}

/* ref: FUN_00921b50 */
uint F_00921b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x2000 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return (uint)param_1;
}

/* ref: FUN_00921b90 */
uint F_00921b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *(undefined4 *)(uVar2 + 0x2400 + param_2 * 4);
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return (uint)param_1;
}

/* ref: FUN_00921bd0 */
uint F_00921bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x921bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *((undefined4 *)GEN_TOP((uVar2 + (param_3 + 2 + ((param_2 - 1U & 1) + (param_2 - 1U & 0xfffffffe)) * 2) * 0x1400
            + 0xc00 + param_4 * 4)));
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return (uint)param_1;
}

/* ref: FUN_00921c20 */
uint F_00921c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x921c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x5c))))(*(int * PTR32 *)((int)this + 0x24));
  uVar1 = *((undefined4 *)GEN_TOP((uVar2 + (param_3 + 2 + ((param_2 - 1U & 1) + (param_2 - 1U & 0xfffffffe)) * 2) * 0x1400
            + 0x1000 + param_4 * 4)));
  *param_1 = (char)uVar1;
  param_1[1] = (char)((uint)uVar1 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x10);
  param_1[3] = 0xff;
  return (uint)param_1;
}

/* ref: FUN_00921c70 */
unsigned int F_00921c70(unsigned int gen_a0)
{
  GEN_ENTER(0x921c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921cb0 */
uint F_00921cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x921cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  undefined * pvVar4;
  
  pvVar4 = (undefined *)((int)this + 0x518);
  iVar3 = 7;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0x210));
  pvVar4 = (undefined *)((int)this + 0x150);
  iVar3 = 0x27;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -8);
    uVar1 = F_005a2670(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_00921d30 */
unsigned int F_00921d30(unsigned int gen_a0)
{
  GEN_ENTER(0x921d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921d70 */
uint F_00921d70(unsigned int gen_a0)
{
  GEN_ENTER(0x921d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = (undefined *)((int)this + 0x194);
  iVar3 = 0x2f;
  do {
    this_00 = (undefined *)((int)this_00 + -8);
    uVar1 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf14 */
unsigned int F_00921dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x921dd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 0x1c) = 0x1f;
  return 0;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf15 */
unsigned int F_00921de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x1c) = 0x1f;
  return 0;
}

/* ref: FUN_00921df0 */
uint F_00921df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943b80((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf2 */
unsigned int F_00921e00(void)
{
  GEN_ENTER(0x921e00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00921e10 */
uint F_00921e10(unsigned int gen_a0)
{
  GEN_ENTER(0x921e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 100));
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00921e60 */
unsigned int F_00921e60(unsigned int gen_a0)
{
  GEN_ENTER(0x921e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921ea0 */
uint F_00921ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943d10((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921eb0 */
unsigned int F_00921eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x921eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921ef0 */
uint F_00921ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943d70((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921f00 */
unsigned int F_00921f00(unsigned int gen_a0)
{
  GEN_ENTER(0x921f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921f40 */
uint F_00921f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x921f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943dd0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00921f50 */
unsigned int F_00921f50(unsigned int gen_a0)
{
  GEN_ENTER(0x921f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921fa0 */
unsigned int F_00921fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x921fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00921fe0 */
uint F_00921fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x921fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0x15c));
  F_0042c880((undefined *)((int)this + 0x70));
  uVar3 = F_0042c880((undefined *)((int)this + 0x1c));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922040 */
unsigned int F_00922040(unsigned int gen_a0)
{
  GEN_ENTER(0x922040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922080 */
uint F_00922080(unsigned int gen_a0)
{
  GEN_ENTER(0x922080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  ulonglong uVar5;
  
  iVar4 = (int)this + 0xbe38;
  iVar3 = 0x10;
  do {
    iVar4 = iVar4 + -0xa98;
    F_00401530(iVar4,0x544,2,((code *)REFP(0x46fb20)));
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0x5b0));
  F_0042c880((undefined *)((int)this + 0x55c));
  this_00 = (undefined *)((int)this + 0x550);
  iVar4 = 0xe;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    F_0042c880(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  uVar5 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922120 */
uint F_00922120(unsigned int gen_a0)
{
  GEN_ENTER(0x922120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00922170 */
uint F_00922170(unsigned int gen_a0)
{
  GEN_ENTER(0x922170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_009221c0 */
uint F_009221c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9221c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_0042a990(this);
  *(uint *)((int)this + 100) = uVar1;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00922210 */
unsigned int F_00922210(unsigned int gen_a0)
{
  GEN_ENTER(0x922210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922250 */
uint F_00922250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944050((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922260 */
uint F_00922260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944050((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00922270 */
uint F_00922270(unsigned int gen_a0)
{
  GEN_ENTER(0x922270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  iVar3 = 4;
  puVar4 = (undefined4 *)((int)this + 0x468);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(puVar4 + -0x19);
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0x70));
  uVar5 = F_0042c880((undefined *)((int)this + 0x1c));
  uVar2 = (uint)uVar5;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_009222f0 */
uint F_009222f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9222f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar1 = param_1;
  puVar3 = (undefined4 *)(param_1 + 4);
  *(undefined1 *)this = *param_1;
  param_1 = (undefined1 *)0x4;
  puVar2 = ((undefined4 *)GEN_TOP((((undefined1 *)GEN_TOP(((int)puVar3 + (8 - (int)puVar1)))) + (int)this)));
  do {
    puVar2[-2] = *puVar3;
    puVar2[-1] = puVar3[1];
    *puVar2 = *((undefined4 *)GEN_TOP((((int)puVar1 - (int)this) + (int)puVar2)));
    F_0042cbc0(puVar2 + 1,puVar3 + 3);
    *(undefined1 *)(puVar2 + 0x16) = *(undefined1 *)(puVar3 + 0x18);
    *(undefined4 *)((int)puVar2 + 0x5a) = *(undefined4 *)((int)puVar3 + 0x62);
    *(undefined4 *)((int)puVar2 + 0x5e) = *(undefined4 *)((int)puVar3 + 0x66);
    *(undefined2 *)((int)puVar2 + 0x62) = *(undefined2 *)((int)puVar3 + 0x6a);
    puVar2[0x19] = puVar3[0x1b];
    *(undefined1 *)(puVar2 + 0x1a) = *(undefined1 *)(puVar3 + 0x1c);
    *(undefined1 *)((int)puVar2 + 0x69) = *(undefined1 *)((int)puVar3 + 0x71);
    *(undefined1 *)((int)puVar2 + 0x6a) = *(undefined1 *)((int)puVar3 + 0x72);
    *(undefined1 *)((int)puVar2 + 0x6b) = *(undefined1 *)((int)puVar3 + 0x73);
    puVar3 = puVar3 + 0x1d;
    puVar2 = puVar2 + 0x1d;
    param_1 = (undefined1 *)((int)param_1 + -1);
  } while (-1 < (int)param_1);
  return (uint)this;
}

/* ref: FUN_00922390 */
uint F_00922390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944080((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_009223a0 */
unsigned int F_009223a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9223a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_009223e0 */
uint F_009223e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9223e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009440e0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_009223f0 */
uint F_009223f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9223f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  iVar3 = 0x13;
  pvVar4 = (undefined *)((int)this + 0x19ac);
  do {
    F_0042c880((undefined *)((int)pvVar4 + -0x68));
    F_0042c880((undefined *)((int)pvVar4 + -0xc0));
    iVar3 = iVar3 + -1;
    pvVar4 = (undefined *)((int)pvVar4 + -0xc0);
  } while (-1 < iVar3);
  iVar3 = 0x18;
  puVar5 = (undefined4 *)((int)this + 0xa70);
  do {
    puVar5[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar6 = F_0042c880(puVar5 + -0x19);
    uVar2 = (uint)uVar6;
    iVar3 = iVar3 + -1;
    puVar5 = puVar5 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922490 */
unsigned int F_00922490(unsigned int gen_a0)
{
  GEN_ENTER(0x922490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_009224d0 */
unsigned int F_009224d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9224d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922510 */
unsigned int F_00922510(unsigned int gen_a0)
{
  GEN_ENTER(0x922510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922550 */
uint F_00922550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944230((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922560 */
uint F_00922560(unsigned int gen_a0)
{
  GEN_ENTER(0x922560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  iVar3 = 9;
  puVar4 = (undefined4 *)((int)this + 0x420);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_009225d0 */
uint F_009225d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9225d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944260((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_009225e0 */
uint F_009225e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9225e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  iVar3 = 0x31;
  puVar4 = (undefined4 *)((int)this + 0x1474);
  do {
    puVar4[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    uVar5 = F_0042c880(puVar4 + -0x19);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
    puVar4 = puVar4 + -0x1a;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922640 */
unsigned int F_00922640(unsigned int gen_a0)
{
  GEN_ENTER(0x922640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922680 */
uint F_00922680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00922720((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922690 */
uint F_00922690(unsigned int gen_a0)
{
  GEN_ENTER(0x922690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d472c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4720));
  pvVar4 = (undefined *)((int)this + 0x454);
  iVar3 = 10;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0xb8);
  iVar3 = 1;
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -0x54);
    uVar5 = F_0042c880(pvVar4);
    uVar2 = (uint)uVar5;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentContentsTimer::vf0 */
uint F_00922720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922690(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00922750 */
uint F_00922750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_0042c880(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    this_00 = (undefined *)(iVar2 * 0x74 + (int)this);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x74);
      F_0042c880(this_00);
    }
    this = piVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_009227c0 */
unsigned int F_009227c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9227c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922800 */
uint F_00922800(unsigned int gen_a0)
{
  GEN_ENTER(0x922800u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int in_ecx_00;
  int iVar1;
  
  in_ecx_00 = in_ecx + 8;
  iVar1 = 0xf;
  do {
    F_0042b630(in_ecx_00);
    F_0042b630(in_ecx_00 + 0x54);
    in_ecx_00 = in_ecx_00 + 0xc4;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0xca8);
  F_0042b630(in_ecx + 0xcfc);
  F_0042b630(in_ecx + 0xd50);
  F_0042b630(in_ecx + 0xda4);
  return in_ecx;
}

/* ref: FUN_00922860 */
uint F_00922860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0090de10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf14 */
unsigned int F_00922890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x922890u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return 0;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf15 */
unsigned int F_009228a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9228a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return 0;
}

/* ref: FUN_009228b0 */
unsigned int F_009228b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9228b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_009228f0 */
uint F_009228f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9228f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  
  if ((param_1 & 2) == 0) {
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    pvVar3 = (undefined *)(iVar2 * 0xcc + (int)this);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      F_0042c880((undefined *)((int)pvVar3 + -0x78));
      F_0042c880((undefined *)((int)pvVar3 + -0xcc));
      pvVar3 = (undefined *)((int)pvVar3 + -0xcc);
    }
    this = piVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00922980 */
uint F_00922980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00953390((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922990 */
uint F_00922990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  if ((param_1 & 2) != 0) {
    iVar1 = *(int *)((int)this + -4) + -1;
    if (-1 < iVar1) {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + -4) * 0x58 + 4 + (int)this)));
      do {
        this_00 = (undefined *)((int)this_00 + -0x58);
        F_0042c880(this_00);
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30((int)this - 4U);
    }
    return (int)this - 4U;
  }
  F_0042c880((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00922a00 */
unsigned int F_00922a00(unsigned int gen_a0)
{
  GEN_ENTER(0x922a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922a40 */
uint F_00922a40(unsigned int gen_a0)
{
  GEN_ENTER(0x922a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentDetail::vf2 */
unsigned int F_00922a80(void)
{
  GEN_ENTER(0x922a80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922a90 */
uint F_00922a90(unsigned int gen_a0)
{
  GEN_ENTER(0x922a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922ad0 */
uint F_00922ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x922ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_00922b10 */
uint F_00922b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944740((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922b20 */
unsigned int F_00922b20(unsigned int gen_a0)
{
  GEN_ENTER(0x922b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922b60 */
uint F_00922b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009447c0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922b70 */
unsigned int F_00922b70(unsigned int gen_a0)
{
  GEN_ENTER(0x922b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: FUN_00922bb0 */
uint F_00922bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944840((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922bc0 */
uint F_00922bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009448d0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922bd0 */
uint F_00922bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944940((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922be0 */
uint F_00922be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009449b0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922bf0 */
uint F_00922bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944b30((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c00 */
uint F_00922c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944b30((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00922c10 */
uint F_00922c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944b60((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c20 */
uint F_00922c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944c10((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c30 */
uint F_00922c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00944c70((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00922c40 */
uint F_00922c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0090e260(this,param_1);
  return (uint)this;
}

/* ref: FUN_00922c60 */
uint F_00922c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042ccf0((undefined *)((int)this + 0xc),param_1 + 3);
  *(undefined2 *)((int)this + 0x60) = *(undefined2 *)(param_1 + 0x18);
  return (uint)this;
}

/* ref: FUN_00922ca0 */
unsigned int F_00922ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x922ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentSupportSubList::vf2 */
unsigned int F_00922ce0(void)
{
  GEN_ENTER(0x922ce0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922cf0 */
uint F_00922cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x922cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_0042c880((undefined *)((int)this + 0x10));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf2 */
unsigned int F_00922d30(void)
{
  GEN_ENTER(0x922d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922d40 */
unsigned int F_00922d40(unsigned int gen_a0)
{
  GEN_ENTER(0x922d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf2 */
unsigned int F_00922d80(void)
{
  GEN_ENTER(0x922d80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00922d90 */
uint F_00922d90(unsigned int gen_a0)
{
  GEN_ENTER(0x922d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0x144));
  F_0042c880((undefined *)((int)this + 0xf0));
  F_0042c880((undefined *)((int)this + 0x9c));
  uVar3 = F_0042c880((undefined *)((int)this + 0x34));
  uVar2 = (uint)uVar3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::UI2::PopupMenu::vf0 */
uint F_00922df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406b30(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::LogViewer::vf0 */
uint F_00922e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  F_00580e00(this + 0x78);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCursor::vf0 */
uint F_00922e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c467c));
  F_0058d4b0(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFade::vf0 */
uint F_00922ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c477c));
  F_0055b840();
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonDialogue::vf0 */
uint F_00922f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c488c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonDragDrop::vf0 */
uint F_00922f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c498c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFilter::vf0 */
uint F_00922f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4a9c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c4a88));
  F_0055b840();
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonOperationGuide::vf0 */
uint F_00922fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x922fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4bac));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNowLoading::vf0 */
uint F_00923010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4cac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonYesNo::vf0 */
uint F_00923040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4dac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectOk::vf0 */
uint F_00923070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4eac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf0 */
uint F_009230a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9230a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c4fac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonListGrid::vf0 */
uint F_009230d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9230d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c50ac));
  if (*(int *)(this + 0x19c) != 0) {
    F_00406b30(*(int *)(this + 0x19c));
    *(undefined4 *)(this + 0x19c) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonListIcon::vf0 */
uint F_00923120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c51ac));
  if (*(int *)(this + 0x1a0) != 0) {
    F_00406b30(*(int *)(this + 0x1a0));
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonToolTipS::vf0 */
uint F_00923170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c52bc));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInputNumeric::vf0 */
uint F_009231b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9231b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c53bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInputString::vf0 */
uint F_009231e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9231e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c54bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonListColorChooser::vf0 */
uint F_00923210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c55bc));
  if (*(int *)(this + 0x1a8) != 0) {
    F_00406b30(*(int *)(this + 0x1a8));
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContextIconMenu::vf0 */
uint F_00923260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c56bc));
  if (*(int *)(this + 0x1a4) != 0) {
    F_00406b30(*(int *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditCast::vf0 */
uint F_009232b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9232b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c57bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCreditEnd::vf0 */
uint F_009232e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9232e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c58bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHud::vf0 */
uint F_00923310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c59bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHudTargetInfo::vf0 */
uint F_00923340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5abc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursor::vf0 */
uint F_00923370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5bbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTargetCursorGround::vf0 */
uint F_009233a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9233a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5cbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBattleTalk::vf0 */
uint F_009233d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9233d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c5dbc));
  F_0058d4b0(this + 400);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00923410 */
uint F_00923410(unsigned int gen_a0)
{
  GEN_ENTER(0x923410u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x5c);
  return in_ecx;
}

/* ref: FUN_00923430 */
uint F_00923430(unsigned int gen_a0)
{
  GEN_ENTER(0x923430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf0 */
uint F_00923450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[66])REFP(0x10c6544));
  this_00 = this + 0xff0;
  iVar1 = 0x2b;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonParameter::vf0 */
uint F_009234a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9234a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6654));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonExp::vf0 */
uint F_009234d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9234d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6754));
  this_00 = this + 0x238;
  iVar1 = 1;
  do {
    this_00 = this_00 + -0x30;
    F_0058d4b0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00580e00(this + 0x198);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonEnemyList::vf0 */
uint F_00923530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6854));
  if (*(int *)(this + 0x180) != 0) {
    F_00406b30(*(int *)(this + 0x180));
    *(undefined4 *)(this + 0x180) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBagStatus::vf0 */
uint F_00923580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6954));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMoney::vf0 */
uint F_009235b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9235b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6a54));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNotification::vf0 */
uint F_009235e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9235e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6b54));
  iVar1 = 7;
  this_00 = this + 0x39c;
  do {
    this_00 = this_00 + -0x40;
    F_0058d4b0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNotificationItem::vf0 */
uint F_00923630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6c54));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonDTR::vf0 */
uint F_00923660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6d74));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCastBar::vf0 */
uint F_00923690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6e74));
  F_0042c880(this + 0x1b4);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNaviMap::vf0 */
uint F_009236d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9236d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6f74));
  *(undefined * PTR32 * PTR32 *)(this + 0x1b50) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  *(undefined * PTR32 * PTR32 *)(this + 0x1b44) = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  F_0055c5b0(this + 0x1b3c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00923720 */
unsigned int F_00923720(unsigned int gen_a0)
{
  GEN_ENTER(0x923720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  puVar2 = (undefined4 *)((int)this + 0x48);
  iVar3 = 100;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 6) = 0;
    *(undefined2 *)((int)puVar2 + 0x1a) = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2 = puVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return 0;
}

/* ref: Client::UI2::AddonPartyList::vf0 */
uint F_009237a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9237a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c707c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf0 */
uint F_009237d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9237d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c719c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf0 */
uint F_00923800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00790ee0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLimitBreak::vf0 */
uint F_00923830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c739c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHudLayout::vf0 */
uint F_00923860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c749c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHudLayoutWindow::vf0 */
uint F_00923890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c75ac));
  if (*(int *)(this + 0x188) != 0) {
    F_00406b30(*(int *)(this + 0x188));
    *(undefined4 *)(this + 0x188) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocial::vf0 */
uint F_009238e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9238e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c76ac));
  F_00590cc0(this + 0x188);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialList::vf0 */
uint F_00923920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c77ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBlackList::vf0 */
uint F_00923950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c78ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonPartyMemberList::vf0 */
uint F_00923980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c77ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterList::vf0 */
uint F_009239b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9239b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7aac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009239e0 */
uint F_009239e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9239e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this + -4) + -1;
    if (-1 < iVar2) {
      pvVar1 = ((undefined *)GEN_TOP((*(int *)((int)this + -4) * 0x104 + 0x58 + (int)this)));
      do {
        F_0042c880((undefined *)((int)pvVar1 + -0xb0));
        F_0042c880((undefined *)((int)pvVar1 + -0x104));
        F_0042c880((undefined *)((int)pvVar1 + -0x158));
        iVar2 = iVar2 + -1;
        pvVar1 = (undefined *)((int)pvVar1 + -0x104);
      } while (-1 < iVar2);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30((int)this - 4U);
    }
    return (int)this - 4U;
  }
  F_0042c880((undefined *)((int)this + 0xac));
  F_0042c880((undefined *)((int)this + 0x58));
  F_0042c880((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterViewer::vf0 */
uint F_00923a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7bac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLinkShell::vf0 */
uint F_00923ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00794760(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterEditor::vf0 */
uint F_00923ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00794e50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRequest::vf0 */
uint F_00923b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7eac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialDetailA::vf0 */
uint F_00923b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00795a50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialDetailB::vf0 */
uint F_00923b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c80ac));
  F_0042c880(this + 0x28c);
  F_0042c880(this + 0x238);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf0 */
uint F_00923bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00796340(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearch::vf0 */
uint F_00923be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007967d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchResult::vf0 */
uint F_00923c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c83ac));
  F_0042c880(this + 0x254);
  F_0042c880(this + 0x200);
  F_0042c880(this + 0x1ac);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf0 */
uint F_00923c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c84ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf0 */
uint F_00923c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c85ac));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf0 */
uint F_00923cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c86bc));
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf0 */
uint F_00923d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c87bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf0 */
uint F_00923d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c88bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf0 */
uint F_00923d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c89bc));
  F_0042c880(this + 0x200);
  F_0042c880(this + 0x1ac);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf0 */
uint F_00923da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8abc));
  this_00 = this + 0x328;
  iVar1 = 2;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf0 */
uint F_00923df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8bbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf0 */
uint F_00923e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8cbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf0 */
uint F_00923e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8dbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf0 */
uint F_00923e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8ebc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompany::vf0 */
uint F_00923eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8fbc));
  F_00590cc0(this + 0x1c4);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf0 */
uint F_00923ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf0 */
uint F_00923f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf0 */
uint F_00923f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMember::vf0 */
uint F_00923f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9424));
  F_0042c880(this + 0x214);
  F_0042c880(this + 0x1c0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRank::vf0 */
uint F_00923fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x923fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyStatus::vf0 */
uint F_00924000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyTopics::vf0 */
uint F_00924030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9784));
  F_0042c880(this + 0x1a0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournal::vf0 */
uint F_00924070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0079d190(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalAccept::vf0 */
uint F_009240a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9240a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c99bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalDetail::vf0 */
uint F_009240d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9240d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9abc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonJournalResult::vf0 */
uint F_00924100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9bbc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeve::vf0 */
uint F_00924130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0079e280(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveDifficulty::vf0 */
uint F_00924160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9dcc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeveHistory::vf0 */
uint F_00924190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9ecc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonColosseumRecord::vf0 */
uint F_009241c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9241c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c9fcc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSell::vf0 */
uint F_009241f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9241f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca0cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerSellList::vf0 */
uint F_00924220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0079ee50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRetainerHistory::vf0 */
uint F_00924250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca2cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainer::vf0 */
uint F_00924280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca3cc));
  F_00590cc0(this + 0x1ac);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGrid::vf0 */
uint F_009242c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9242c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca4cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryRetainerGridCrystal::vf0 */
uint F_009242f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9242f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca5cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGatheringNoteBook::vf0 */
uint F_00924320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca6f4));
  *(undefined * PTR32 * PTR32 *)(this + 0x73c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf0 */
uint F_00924360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca7f4));
  F_0058d4b0(this + 0x3a0);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFishGuide::vf0 */
uint F_009243a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9243a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca8f4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFishRecord::vf0 */
uint F_009243d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9243d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ca9f4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinder::vf0 */
uint F_00924400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cab04));
  this_00 = this + 0x720;
  iVar1 = 0xa0;
  do {
    this_00 = this_00 + -8;
    F_005a2670(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590cc0(this + 0x18c);
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderStatus::vf0 */
uint F_00924470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cac04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderConfirm::vf0 */
uint F_009244a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9244a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cad04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderReady::vf0 */
uint F_009244d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9244d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cae04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinderSupply::vf0 */
uint F_00924500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10caf04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMaterializeDialog::vf0 */
uint F_00924530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb004));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaAttachDialog::vf0 */
uint F_00924560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb104));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaBrokerDialog::vf0 */
uint F_00924590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb204));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaAttachedRepair::vf0 */
uint F_009245c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9245c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb304));
  this_00 = this + 0xa34;
  iVar1 = 0x17;
  do {
    this_00 = this_00 + -0x5c;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonColorantColoringSelector::vf0 */
uint F_00924610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb404));
  this_00 = this + 0xae0;
  iVar1 = 0x17;
  do {
    this_00 = this_00 + -100;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyExchange::vf0 */
uint F_00924660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb504));
  F_00581600(this + 400);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRank::vf0 */
uint F_009246a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9246a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb604));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanyRankUp::vf0 */
uint F_009246d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9246d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyList::vf0 */
uint F_00924700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb804));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGrandCompanySupplyReward::vf0 */
uint F_00924730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cb904));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventory::vf0 */
uint F_00924760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cba04));
  F_00590cc0(this + 0x1c0);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryGrid::vf0 */
uint F_009247a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9247a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbb04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryGridCrystal::vf0 */
uint F_009247d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9247d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbc04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryEvent::vf0 */
uint F_00924800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbd04));
  F_00590cc0(this + 0x1b4);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonInventoryEventGrid::vf0 */
uint F_00924840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbe04));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonShop::vf0 */
uint F_00924870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cbf04));
  this_00 = this + 0x290;
  iVar1 = 2;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonShopExchangeItem::vf0 */
uint F_009248c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9248c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc004));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonShopExchangeCurrency::vf0 */
uint F_009248f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9248f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc104));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTalkSubtitle::vf0 */
uint F_00924920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc204));
  F_0042c880(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTalk::vf0 */
uint F_00924960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc304));
  F_0042c880(this + 0x1e8);
  F_0042c880(this + 0x194);
  F_005a2670(this + 0x18c);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonEventSkip::vf0 */
uint F_009249b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9249b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc404));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHowTo::vf0 */
uint F_009249e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9249e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc504));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHowToNotice::vf0 */
uint F_00924a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc604));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonChatLogPanel::vf0 */
uint F_00924a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc704));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10c4668));
  F_00580e00(this + 0x218);
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMacro::vf0 */
uint F_00924a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc804));
  this_00 = this + 0x25a0;
  iVar1 = 99;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionDetail::vf0 */
uint F_00924ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc914));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonItemDetail::vf0 */
uint F_00924b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cca24));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[4])REFP(0x10c3f58));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacter::vf0 */
uint F_00924b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ab110(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterStatus::vf0 */
uint F_00924b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccc4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterProfile::vf0 */
uint F_00924bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccd4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterClass::vf0 */
uint F_00924bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cce4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterCurrency::vf0 */
uint F_00924c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ccf4c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterInspect::vf0 */
uint F_00924c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd04c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharacterBonus::vf0 */
uint F_00924c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd14c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Atk2DAreaMap::vf0 */
uint F_00924cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  if (*(int *)(this + 0x74) != 0) {
    F_00406b30(*(int *)(this + 0x74));
    *(undefined4 *)(this + 0x74) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonScreenLog::vf0 */
uint F_00924cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd254));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMiniTalk::vf0 */
uint F_00924d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd354));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesis::vf0 */
uint F_00924d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd4cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimple::vf0 */
uint F_00924d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd5cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSynthesisSimpleDialog::vf0 */
uint F_00924db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd6cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonActionMenu::vf0 */
uint F_00924de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd7cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGathering::vf0 */
uint F_00924e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd8cc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFateReward::vf0 */
uint F_00924e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cd9cc));
  F_0042c880(this + 0x2e4);
  iVar1 = 2;
  this_00 = this + 0x2e0;
  do {
    this_00 = this_00 + -100;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNamePlate::vf0 */
uint F_00924e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdad4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonArmouryBoard::vf0 */
uint F_00924ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdbd4));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonHowtoList::vf0 */
uint F_00924ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b29f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCabinet::vf0 */
uint F_00924f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b2c20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCabinetWithdraw::vf0 */
uint F_00924f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdeec));
  this_00 = this + 0x1444;
  iVar1 = 0x31;
  do {
    this_00 = this_00 + -0x60;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonLegacyItemStorage::vf0 */
uint F_00924fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cdfec));
  this_00 = this + 0x3d80;
  iVar1 = 0x9f;
  do {
    this_00 = this_00 + -0x60;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSet::vf0 */
uint F_00924ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x924ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce0ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGearSetView::vf0 */
uint F_00925020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce1ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTrade::vf0 */
uint F_00925050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce2ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCrossEditor::vf0 */
uint F_00925080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce3ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsInfo::vf0 */
uint F_009250b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9250b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce4ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMovieSubtitle::vf0 */
uint F_009250e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9250e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce5ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonPadMouseMode::vf0 */
uint F_00925110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce6ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBank::vf0 */
uint F_00925140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce7ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBuddy::vf0 */
uint F_00925170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce8ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonBuddyEquipList::vf0 */
uint F_009251a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9251a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ce9ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonRecommendList::vf0 */
uint F_009251d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9251d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10ceaec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCatch::vf0 */
uint F_00925200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cebec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCutSceneReplay::vf0 */
uint F_00925230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cecec));
  F_00590cc0(this + 0x19c);
  *(undefined * PTR32 * PTR32 *)(this + 400) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCutSceneReplayDetail::vf0 */
uint F_00925270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cedec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigKeybind::vf0 */
uint F_009252a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9252a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b73c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLog::vf0 */
uint F_009252d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9252d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b7c60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogColor::vf0 */
uint F_00925300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf0ec));
  this_00 = this + 0xda4;
  iVar1 = 0x21;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogFilter::vf0 */
uint F_00925350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007b8720(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigLogFilterInputString::vf0 */
uint F_00925380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf2ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigSystem::vf0 */
uint F_009253b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9253b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf3ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf0 */
uint F_009253e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9253e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf4ec));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacter::vf0 */
uint F_00925410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf604));
  F_00590cc0(this + 0x180);
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterBase::vf0 */
uint F_00925450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::vf0 */
uint F_00925480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf804));
  this_00 = this + 0x594;
  iVar1 = 8;
  do {
    this_00 = this_00 + -0x54;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)(this + 0x194) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::CChatLog::vf0 */
uint F_009254f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9254f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::vf0 */
uint F_00925520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x925520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x294) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x1fc) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)(this + 0x19c) = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cf704));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

