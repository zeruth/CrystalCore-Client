#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00735af0 */
uint F_00735af0(unsigned int gen_a0)
{
  GEN_ENTER(0x735af0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  bVar1 = F_00729ec0(uVar2 & 0xffff,uVar3 - 1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00735b70 */
uint F_00735b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x735b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236fc),param_1);
  F_0042e430((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042a990((int)this + 8);
  uVar1 = F_00729f10(*(undefined * PTR32 *)((int)this + 0x5c),REFG(undefined * PTR32, 0x13236fc),uVar1,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar1;
}

/* ref: FUN_00735bf0 */
uint F_00735bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x735bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_00729fe0(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00735ca0 */
uint F_00735ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x735ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a060(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00735d50 */
uint F_00735d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x735d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a130(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00735e00 */
uint F_00735e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x735e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a1b0(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00735eb0 */
uint F_00735eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x735eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a240(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00735f60 */
uint F_00735f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x735f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a2e0(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00736010 */
uint F_00736010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x736010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a390(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_007360c0 */
uint F_007360c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7360c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a430(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00736170 */
uint F_00736170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x736170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00736190 */
uint F_00736190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x736190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007361b0 */
uint F_007361b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7361b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a570(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00736260 */
uint F_00736260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x736260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a600(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00736310 */
uint F_00736310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x736310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a680(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_007363c0 */
uint F_007363c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7363c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a720(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00736470 */
uint F_00736470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x736470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a7a0(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00736520 */
uint F_00736520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x736520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a820(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_007365d0 */
uint F_007365d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7365d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072a8a0(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00736680 */
uint F_00736680(unsigned int gen_a0)
{
  GEN_ENTER(0x736680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1de));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007366d0 */
uint F_007366d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7366d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1df));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736720 */
uint F_00736720(unsigned int gen_a0)
{
  GEN_ENTER(0x736720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736770 */
uint F_00736770(unsigned int gen_a0)
{
  GEN_ENTER(0x736770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e1));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007367c0 */
uint F_007367c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7367c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e2));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736810 */
uint F_00736810(unsigned int gen_a0)
{
  GEN_ENTER(0x736810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e3));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736863 */
uint F_00736863(unsigned int gen_a0)
{
  GEN_ENTER(0x736863u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  
  F_00a01860(in_ebp + -0x20,*(undefined4 *)(in_ebp + 8));
  uVar1 = F_00a01d20((undefined *)(in_ebp + -0x20),1);
  piVar2 = (int *)F_00b9c710(*(undefined4 *)(in_ebp + -0x18),1,uVar1);
  F_00b9ae00(*(undefined4 *)(in_ebp + -0x18),(int)*(char *)(*piVar2 + 0x1e4));
  F_00a01890(in_ebp + -0x20);
  return 1;
}

/* ref: FUN_007368b0 */
uint F_007368b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7368b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e5));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736900 */
uint F_00736900(unsigned int gen_a0)
{
  GEN_ENTER(0x736900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e6));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736950 */
uint F_00736950(unsigned int gen_a0)
{
  GEN_ENTER(0x736950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(int)*(char *)(*piVar2 + 0x1e7));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007369a0 */
uint F_007369a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7369a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1de) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736a00 */
uint F_00736a00(unsigned int gen_a0)
{
  GEN_ENTER(0x736a00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1df) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736a60 */
uint F_00736a60(unsigned int gen_a0)
{
  GEN_ENTER(0x736a60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e0) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736ac0 */
uint F_00736ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x736ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e1) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736b20 */
uint F_00736b20(unsigned int gen_a0)
{
  GEN_ENTER(0x736b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e2) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736b80 */
uint F_00736b80(unsigned int gen_a0)
{
  GEN_ENTER(0x736b80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e3) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736be0 */
uint F_00736be0(unsigned int gen_a0)
{
  GEN_ENTER(0x736be0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e4) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736c40 */
uint F_00736c40(unsigned int gen_a0)
{
  GEN_ENTER(0x736c40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e5) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736ca0 */
uint F_00736ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x736ca0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e6) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736d00 */
uint F_00736d00(unsigned int gen_a0)
{
  GEN_ENTER(0x736d00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(*piVar2 + 0x1e7) >> 4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736d60 */
uint F_00736d60(unsigned int gen_a0)
{
  GEN_ENTER(0x736d60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1de) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736dc0 */
uint F_00736dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x736dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1df) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736e20 */
uint F_00736e20(unsigned int gen_a0)
{
  GEN_ENTER(0x736e20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e0) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736e80 */
uint F_00736e80(unsigned int gen_a0)
{
  GEN_ENTER(0x736e80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e1) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736ee0 */
uint F_00736ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x736ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e2) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736f40 */
uint F_00736f40(unsigned int gen_a0)
{
  GEN_ENTER(0x736f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e3) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00736fa0 */
uint F_00736fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x736fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e4) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737000 */
uint F_00737000(unsigned int gen_a0)
{
  GEN_ENTER(0x737000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e5) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737060 */
uint F_00737060(unsigned int gen_a0)
{
  GEN_ENTER(0x737060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e6) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007370c0 */
uint F_007370c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7370c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(byte *)(*piVar2 + 0x1e7) & 0xf);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737120 */
uint F_00737120(unsigned int gen_a0)
{
  GEN_ENTER(0x737120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1de),
                                    *(undefined1 *)(*piVar2 + 0x1df)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737190 */
uint F_00737190(unsigned int gen_a0)
{
  GEN_ENTER(0x737190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e0),
                                    *(undefined1 *)(*piVar2 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737200 */
uint F_00737200(unsigned int gen_a0)
{
  GEN_ENTER(0x737200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e2),
                                    *(undefined1 *)(*piVar2 + 0x1e3)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737270 */
uint F_00737270(unsigned int gen_a0)
{
  GEN_ENTER(0x737270u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e4),
                                    *(undefined1 *)(*piVar2 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007372e0 */
uint F_007372e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7372e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (int)(short)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e6),
                                    *(undefined1 *)(*piVar2 + 0x1e7)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737350 */
uint F_00737350(unsigned int gen_a0)
{
  GEN_ENTER(0x737350u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1de),*(undefined1 *)(*piVar2 + 0x1df)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007373b0 */
uint F_007373b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7373b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e0),*(undefined1 *)(*piVar2 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737410 */
uint F_00737410(unsigned int gen_a0)
{
  GEN_ENTER(0x737410u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e2),*(undefined1 *)(*piVar2 + 0x1e3)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737470 */
uint F_00737470(unsigned int gen_a0)
{
  GEN_ENTER(0x737470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e4),*(undefined1 *)(*piVar2 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007374d0 */
uint F_007374d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7374d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)CONCAT11(*(undefined1 *)(*piVar2 + 0x1e6),*(undefined1 *)(*piVar2 + 0x1e7)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737530 */
uint F_00737530(unsigned int gen_a0)
{
  GEN_ENTER(0x737530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1de),
                                          *(undefined1 *)(iVar1 + 0x1df)),
                                 *(undefined1 *)(iVar1 + 0x1e0)),*(undefined1 *)(iVar1 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007375b0 */
uint F_007375b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7375b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1e2),
                                          *(undefined1 *)(iVar1 + 0x1e3)),
                                 *(undefined1 *)(iVar1 + 0x1e4)),*(undefined1 *)(iVar1 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737630 */
uint F_00737630(unsigned int gen_a0)
{
  GEN_ENTER(0x737630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1de),
                                          *(undefined1 *)(iVar1 + 0x1df)),
                                 *(undefined1 *)(iVar1 + 0x1e0)),*(undefined1 *)(iVar1 + 0x1e1)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007376b0 */
uint F_007376b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7376b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x1e2),
                                          *(undefined1 *)(iVar1 + 0x1e3)),
                                 *(undefined1 *)(iVar1 + 0x1e4)),*(undefined1 *)(iVar1 + 0x1e5)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737730 */
uint F_00737730(unsigned int gen_a0)
{
  GEN_ENTER(0x737730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e7 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007377b0 */
uint F_007377b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7377b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e6 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737830 */
uint F_00737830(unsigned int gen_a0)
{
  GEN_ENTER(0x737830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e5 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007378b0 */
uint F_007378b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7378b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e4 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737930 */
uint F_00737930(unsigned int gen_a0)
{
  GEN_ENTER(0x737930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e3 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007379b0 */
uint F_007379b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7379b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e2 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737a30 */
uint F_00737a30(unsigned int gen_a0)
{
  GEN_ENTER(0x737a30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e1 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737ab0 */
uint F_00737ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x737ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1e0 + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737b30 */
uint F_00737b30(unsigned int gen_a0)
{
  GEN_ENTER(0x737b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1df + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737bb0 */
uint F_00737bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x737bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((*((byte *)GEN_TOP(((uVar2 - 1 >> 3) + 0x1de + iVar1))) &
                             (byte)(0x80 >> ((byte)(uVar2 - 1) & 7))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00737c30 */
uint F_00737c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x737c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pcVar1 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 8);
    uVar2 = F_0042a990((int)this + 0x118);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%u",uVar2,uVar4);
    F_0042e430((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0x8)));
    uVar2 = F_0042a990((int)this + 0x16c);
    uVar3 = F_0042a990((int)this + 0x118);
    uVar2 = F_0072aeb0(*(undefined * PTR32 *)((int)this + 0xf8),uVar3,uVar2,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pcVar1 & 0xffffff00;
}

/* ref: FUN_00737ce0 */
unsigned int F_00737ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737d00 */
unsigned int F_00737d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737d20 */
unsigned int F_00737d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737d40 */
uint F_00737d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x737d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00737d60 */
unsigned int F_00737d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737d80 */
unsigned int F_00737d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737da0 */
unsigned int F_00737da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737dc0 */
unsigned int F_00737dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737de0 */
unsigned int F_00737de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737e00 */
unsigned int F_00737e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737e20 */
uint F_00737e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00737e50 */
unsigned int F_00737e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00737e80 */
unsigned int F_00737e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737ea0 */
unsigned int F_00737ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00737ec0 */
uint F_00737ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ec0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00737ef0 */
unsigned int F_00737ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00737f10 */
unsigned int F_00737f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00737f30 */
unsigned int F_00737f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return 0;
}

/* ref: FUN_00737f60 */
unsigned int F_00737f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return 0;
}

/* ref: FUN_00737f90 */
uint F_00737f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x737f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_2)(param_2,0);
  return uVar1;
}

/* ref: FUN_00737fd0 */
unsigned int F_00737fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00737ff0 */
unsigned int F_00737ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00738010 */
unsigned int F_00738010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00738030 */
unsigned int F_00738030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00738050 */
unsigned int F_00738050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_00738070 */
unsigned int F_00738070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00738090 */
unsigned int F_00738090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_007380b0 */
unsigned int F_007380b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7380b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_007380d0 */
unsigned int F_007380d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7380d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x2c,param_3 + 0x2c);
    param_2[0x56] = param_3[0x56];
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5a) = *(undefined4 *)(param_3 + 0x5a);
  }
  return 0;
}

/* ref: FUN_00738130 */
unsigned int F_00738130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00738150 */
unsigned int F_00738150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00738170 */
unsigned int F_00738170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00738190 */
uint F_00738190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_007381c0 */
unsigned int F_007381c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7381c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00720120(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_007381e0 */
unsigned int F_007381e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7381e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00720120(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00738220 */
uint F_00738220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738220u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00738250 */
unsigned int F_00738250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00738330 */
uint F_00738330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738350 */
uint F_00738350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738370 */
uint F_00738370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738370u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_007383b0 */
uint F_007383b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7383b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007383e0 */
uint F_007383e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7383e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738420 */
uint F_00738420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738440 */
uint F_00738440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738480 */
uint F_00738480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007384a0 */
uint F_007384a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7384a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007384d0 */
uint F_007384d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7384d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007384f0 */
uint F_007384f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7384f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738510 */
uint F_00738510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738530 */
uint F_00738530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007385a0 */
uint F_007385a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7385a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_007385c0 */
unsigned int F_007385c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7385c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00720120(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_007385e0 */
unsigned int F_007385e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7385e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00738600 */
unsigned int F_00738600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
    param_1[7] = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x20);
    param_1[9] = *(undefined4 *)(param_2 + 0x24);
    param_1[10] = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x2c);
  }
  return 0;
}

/* ref: FUN_00738650 */
unsigned int F_00738650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738650u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00728760(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00738670 */
uint F_00738670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00738690 */
uint F_00738690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  *(undefined1 *)this = *param_1;
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar4 = (undefined4 *)((int)this + 8);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xd8);
  puVar4 = (undefined4 *)((int)this + 0xd8);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xf4);
  iVar1 = (int)param_1 - (int)this;
  param_1 = (undefined1 *)0x1;
  puVar3 = ((undefined1 *)GEN_TOP(((int)puVar2 + (8 - (int)puVar3)))) + (int)this;
  do {
    *(undefined4 *)(puVar3 + -8) = *puVar2;
    *(undefined4 *)(puVar3 + -4) = puVar2[1];
    F_0042cbc0(puVar3,puVar3 + iVar1);
    puVar2 = puVar2 + 0x17;
    puVar3 = puVar3 + 0x5c;
    param_1 = (undefined1 *)((int)param_1 + -1);
  } while (-1 < (int)param_1);
  return (uint)this;
}

/* ref: FUN_00738710 */
uint F_00738710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_007387d0 */
uint F_007387d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7387d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa0));
  uVar1 = F_0042c880((undefined *)((int)this + 0x3c));
  return (uint)uVar1;
}

/* ref: FUN_00738820 */
uint F_00738820(unsigned int gen_a0)
{
  GEN_ENTER(0x738820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00738830 */
uint F_00738830(unsigned int gen_a0)
{
  GEN_ENTER(0x738830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728950(this);
  return (uint)this;
}

/* ref: FUN_00738840 */
unsigned int F_00738840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return 0;
}

/* ref: FUN_00738890 */
uint F_00738890(unsigned int gen_a0)
{
  GEN_ENTER(0x738890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007289c0(this);
  return (uint)this;
}

/* ref: FUN_007388a0 */
uint F_007388a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7388a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_2);
  F_0042cbc0((undefined *)((int)this + 0x58),param_2 + 0x54);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_2 + 0xa8);
  return (uint)this;
}

/* ref: FUN_007388f0 */
uint F_007388f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7388f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728a30(this);
  return (uint)this;
}

/* ref: FUN_00738910 */
uint F_00738910(unsigned int gen_a0)
{
  GEN_ENTER(0x738910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728aa0(this);
  return (uint)this;
}

/* ref: FUN_00738920 */
uint F_00738920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0xc),param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00738960 */
uint F_00738960(unsigned int gen_a0)
{
  GEN_ENTER(0x738960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728b10(this);
  return (uint)this;
}

/* ref: FUN_00738a60 */
uint F_00738a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738a80 */
uint F_00738a80(unsigned int gen_a0)
{
  GEN_ENTER(0x738a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728c60(this);
  return (uint)this;
}

/* ref: FUN_00738a90 */
uint F_00738a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ab0 */
uint F_00738ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ad0 */
uint F_00738ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x738ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728cc0(this);
  return (uint)this;
}

/* ref: FUN_00738ae0 */
uint F_00738ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x738ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728d20(this);
  return (uint)this;
}

/* ref: FUN_00738af0 */
uint F_00738af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738b10 */
uint F_00738b10(unsigned int gen_a0)
{
  GEN_ENTER(0x738b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728d80(this);
  return (uint)this;
}

/* ref: FUN_00738b20 */
uint F_00738b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738b40 */
uint F_00738b40(unsigned int gen_a0)
{
  GEN_ENTER(0x738b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728e00(this);
  return (uint)this;
}

/* ref: FUN_00738b50 */
uint F_00738b50(unsigned int gen_a0)
{
  GEN_ENTER(0x738b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728e80(this);
  return (uint)this;
}

/* ref: FUN_00738b60 */
uint F_00738b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738b80 */
uint F_00738b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ba0 */
uint F_00738ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x738ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728f00(this);
  return (uint)this;
}

/* ref: FUN_00738bb0 */
uint F_00738bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738bd0 */
uint F_00738bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x738bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728a30(this);
  return (uint)this;
}

/* ref: FUN_00738be0 */
uint F_00738be0(unsigned int gen_a0)
{
  GEN_ENTER(0x738be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728f60(this);
  return (uint)this;
}

/* ref: FUN_00738bf0 */
uint F_00738bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738c20 */
uint F_00738c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738c50 */
uint F_00738c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738c70 */
uint F_00738c70(unsigned int gen_a0)
{
  GEN_ENTER(0x738c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729000(this);
  return (uint)this;
}

/* ref: FUN_00738c80 */
uint F_00738c80(unsigned int gen_a0)
{
  GEN_ENTER(0x738c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729060(this);
  return (uint)this;
}

/* ref: FUN_00738c90 */
uint F_00738c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738cb0 */
uint F_00738cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ce0 */
uint F_00738ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x738ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007290d0(this);
  return (uint)this;
}

/* ref: FUN_00738cf0 */
uint F_00738cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738d10 */
uint F_00738d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738d30 */
uint F_00738d30(unsigned int gen_a0)
{
  GEN_ENTER(0x738d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729130(this);
  return (uint)this;
}

/* ref: FUN_00738d40 */
uint F_00738d40(unsigned int gen_a0)
{
  GEN_ENTER(0x738d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729190(this);
  return (uint)this;
}

/* ref: FUN_00738d50 */
uint F_00738d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738d70 */
uint F_00738d70(unsigned int gen_a0)
{
  GEN_ENTER(0x738d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007289c0(this);
  return (uint)this;
}

/* ref: FUN_00738d80 */
uint F_00738d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738da0 */
uint F_00738da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738dc0 */
unsigned int F_00738dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return 0;
}

/* ref: FUN_00738df0 */
unsigned int F_00738df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return 0;
}

/* ref: FUN_00738e10 */
unsigned int F_00738e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return 0;
}

/* ref: FUN_00738e40 */
unsigned int F_00738e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return 0;
}

/* ref: FUN_00738e60 */
uint F_00738e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738e80 */
unsigned int F_00738e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return 0;
}

/* ref: FUN_00738ea0 */
uint F_00738ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00738ed0 */
uint F_00738ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ef0 */
unsigned int F_00738ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  *(undefined4 *)((int)this + 0x10) = param_2[3];
  *(undefined4 *)((int)this + 0x14) = param_2[4];
  return 0;
}

/* ref: FUN_00738f20 */
uint F_00738f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738f40 */
uint F_00738f40(unsigned int gen_a0)
{
  GEN_ENTER(0x738f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00738f50 */
uint F_00738f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00738f60 */
unsigned int F_00738f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return 0;
}

/* ref: FUN_00738f80 */
uint F_00738f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738fa0 */
uint F_00738fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738fc0 */
uint F_00738fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00738fe0 */
unsigned int F_00738fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x22;
    puVar3 = puVar2 + 0x22;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x22; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00739020 */
unsigned int F_00739020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x739020u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x19) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x19);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x19);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x19);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x19);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: FUN_00739090 */
unsigned int F_00739090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_007390c0 */
uint F_007390c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7390c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    puVar3 = param_3;
    do {
      *puVar3 = *(undefined2 *)(iVar2 + -0x58);
      F_0042ccf0(puVar3 + 2,iVar2 + -0x54);
      F_0042ccf0(puVar3 + 0x2c,iVar2);
      puVar3[0x56] = *(undefined2 *)(iVar2 + 0x54);
      *(undefined4 *)(puVar3 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(puVar3 + 0x5a) = *(undefined4 *)(iVar2 + 0x5c);
      iVar1 = iVar2 + 0x60;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0xb8;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00739130 */
uint F_00739130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x739130u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 8;
    puVar3 = param_3;
    do {
      *puVar3 = *(undefined1 *)(iVar2 + -8);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(iVar2 + -4);
      F_0042ccf0(puVar3 + 8,iVar2);
      puVar3[0x5c] = *(undefined1 *)(iVar2 + 0x54);
      puVar3[0x5d] = *(undefined1 *)(iVar2 + 0x55);
      *(undefined4 *)(puVar3 + 0x60) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(puVar3 + 100) = *(undefined4 *)(iVar2 + 0x5c);
      *(undefined4 *)(puVar3 + 0x68) = *(undefined4 *)(iVar2 + 0x60);
      *(undefined4 *)(puVar3 + 0x6c) = *(undefined4 *)(iVar2 + 100);
      *(undefined4 *)(puVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x68);
      *(undefined4 *)(puVar3 + 0x74) = *(undefined4 *)(iVar2 + 0x6c);
      *(undefined4 *)(puVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x70);
      *(undefined4 *)(puVar3 + 0x7c) = *(undefined4 *)(iVar2 + 0x74);
      *(undefined4 *)(puVar3 + 0x80) = *(undefined4 *)(iVar2 + 0x78);
      *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar2 + 0x7c);
      *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar2 + 0x80);
      *(undefined4 *)(puVar3 + 0x8c) = *(undefined4 *)(iVar2 + 0x84);
      *(undefined4 *)(puVar3 + 0x90) = *(undefined4 *)(iVar2 + 0x88);
      *(undefined4 *)(puVar3 + 0x94) = *(undefined4 *)(iVar2 + 0x8c);
      *(undefined4 *)(puVar3 + 0x98) = *(undefined4 *)(iVar2 + 0x90);
      *(undefined4 *)(puVar3 + 0x9c) = *(undefined4 *)(iVar2 + 0x94);
      *(undefined4 *)(puVar3 + 0xa0) = *(undefined4 *)(iVar2 + 0x98);
      *(undefined4 *)(puVar3 + 0xa4) = *(undefined4 *)(iVar2 + 0x9c);
      *(undefined4 *)(puVar3 + 0xa8) = *(undefined4 *)(iVar2 + 0xa0);
      *(undefined4 *)(puVar3 + 0xac) = *(undefined4 *)(iVar2 + 0xa4);
      *(undefined4 *)(puVar3 + 0xb0) = *(undefined4 *)(iVar2 + 0xa8);
      *(undefined4 *)(puVar3 + 0xb4) = *(undefined4 *)(iVar2 + 0xac);
      *(undefined4 *)(puVar3 + 0xb8) = *(undefined4 *)(iVar2 + 0xb0);
      *(undefined4 *)(puVar3 + 0xbc) = *(undefined4 *)(iVar2 + 0xb4);
      *(undefined4 *)(puVar3 + 0xc0) = *(undefined4 *)(iVar2 + 0xb8);
      *(undefined4 *)(puVar3 + 0xc4) = *(undefined4 *)(iVar2 + 0xbc);
      *(undefined4 *)(puVar3 + 200) = *(undefined4 *)(iVar2 + 0xc0);
      *(undefined4 *)(puVar3 + 0xcc) = *(undefined4 *)(iVar2 + 0xc4);
      *(undefined4 *)(puVar3 + 0xd0) = *(undefined4 *)(iVar2 + 200);
      *(undefined4 *)(puVar3 + 0xd4) = *(undefined4 *)(iVar2 + 0xcc);
      *(undefined4 *)(puVar3 + 0xd8) = *(undefined4 *)(iVar2 + 0xd0);
      *(undefined4 *)(puVar3 + 0xdc) = *(undefined4 *)(iVar2 + 0xd4);
      *(undefined4 *)(puVar3 + 0xe0) = *(undefined4 *)(iVar2 + 0xd8);
      *(undefined4 *)(puVar3 + 0xe4) = *(undefined4 *)(iVar2 + 0xdc);
      *(undefined4 *)(puVar3 + 0xe8) = *(undefined4 *)(iVar2 + 0xe0);
      *(undefined4 *)(puVar3 + 0xec) = *(undefined4 *)(iVar2 + 0xe4);
      *(undefined4 *)(puVar3 + 0xf0) = *(undefined4 *)(iVar2 + 0xe8);
      *(undefined4 *)(puVar3 + 0xf4) = *(undefined4 *)(iVar2 + 0xec);
      *(undefined4 *)(puVar3 + 0xf8) = *(undefined4 *)(iVar2 + 0xf0);
      *(undefined4 *)(puVar3 + 0xfc) = *(undefined4 *)(iVar2 + 0xf4);
      *(undefined4 *)(puVar3 + 0x100) = *(undefined4 *)(iVar2 + 0xf8);
      *(undefined4 *)(puVar3 + 0x104) = *(undefined4 *)(iVar2 + 0xfc);
      *(undefined4 *)(puVar3 + 0x108) = *(undefined4 *)(iVar2 + 0x100);
      *(undefined4 *)(puVar3 + 0x10c) = *(undefined4 *)(iVar2 + 0x104);
      *(undefined4 *)(puVar3 + 0x110) = *(undefined4 *)(iVar2 + 0x108);
      *(undefined4 *)(puVar3 + 0x114) = *(undefined4 *)(iVar2 + 0x10c);
      *(undefined4 *)(puVar3 + 0x118) = *(undefined4 *)(iVar2 + 0x110);
      *(undefined4 *)(puVar3 + 0x11c) = *(undefined4 *)(iVar2 + 0x114);
      *(undefined4 *)(puVar3 + 0x120) = *(undefined4 *)(iVar2 + 0x118);
      *(undefined4 *)(puVar3 + 0x124) = *(undefined4 *)(iVar2 + 0x11c);
      *(undefined4 *)(puVar3 + 0x128) = *(undefined4 *)(iVar2 + 0x120);
      *(undefined4 *)(puVar3 + 300) = *(undefined4 *)(iVar2 + 0x124);
      *(undefined4 *)(puVar3 + 0x130) = *(undefined4 *)(iVar2 + 0x128);
      *(undefined4 *)(puVar3 + 0x134) = *(undefined4 *)(iVar2 + 300);
      *(undefined4 *)(puVar3 + 0x138) = *(undefined4 *)(iVar2 + 0x130);
      *(undefined4 *)(puVar3 + 0x13c) = *(undefined4 *)(iVar2 + 0x134);
      iVar1 = iVar2 + 0x138;
      puVar3 = puVar3 + 0x140;
      iVar2 = iVar2 + 0x140;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00739400 */
unsigned int F_00739400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 5;
  }
  return 0;
}

/* ref: FUN_00739440 */
unsigned int F_00739440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00739480 */
unsigned int F_00739480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 10;
    puVar3 = puVar2 + 10;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 10; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_007394b0 */
uint F_007394b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7394b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      *puVar3 = puVar2[-2];
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar2 + -1);
      puVar3[2] = *puVar2;
      puVar3[3] = puVar2[1];
      puVar3[4] = puVar2[2];
      puVar3[5] = puVar2[3];
      puVar3[6] = puVar2[4];
      puVar3[7] = puVar2[5];
      *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar2 + 6);
      *(undefined1 *)((int)puVar3 + 0x11) = *(undefined1 *)((int)puVar2 + 0xd);
      *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(puVar2 + 7);
      *(undefined1 *)((int)puVar3 + 0x13) = *(undefined1 *)((int)puVar2 + 0xf);
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar2 + 10);
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)(puVar2 + 0xc);
      *(undefined1 *)((int)puVar3 + 0x1d) = *(undefined1 *)((int)puVar2 + 0x19);
      F_0042ccf0(puVar3 + 0x10,puVar2 + 0xe);
      puVar1 = puVar2 + 0x38;
      puVar3 = puVar3 + 0x3a;
      puVar2 = puVar2 + 0x3a;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00739570 */
uint F_00739570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_007395b0 */
uint F_007395b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7395b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined1 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 8;
    do {
      *param_3 = *(undefined4 *)(puVar4 + -8);
      param_3[1] = *(undefined4 *)(puVar4 + -4);
      *(undefined1 *)(param_3 + 2) = *puVar4;
      param_3[3] = *(undefined4 *)(puVar4 + 4);
      *(undefined1 *)(param_3 + 4) = puVar4[8];
      *(undefined1 *)((int)param_3 + 0x11) = puVar4[9];
      *(undefined1 *)((int)param_3 + 0x12) = puVar4[10];
      param_3[5] = *(undefined4 *)(puVar4 + 0xc);
      param_3[6] = *(undefined4 *)(puVar4 + 0x10);
      F_0042ccf0(param_3 + 7,puVar4 + 0x14);
      puVar2 = param_3 + 0x50;
      puVar5 = (undefined4 *)(puVar4 + 0x68);
      puVar6 = param_3 + 0x1c;
      for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar1 = puVar4 + 0x138;
      puVar4 = puVar4 + 0x140;
      param_3 = puVar2;
    } while (puVar1 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00739630 */
uint F_00739630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739650 */
uint F_00739650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739670 */
uint F_00739670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739690 */
uint F_00739690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007396b0 */
uint F_007396b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7396b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007396d0 */
uint F_007396d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7396d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007396f0 */
uint F_007396f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7396f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739710 */
uint F_00739710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739730 */
uint F_00739730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739750 */
uint F_00739750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739770 */
uint F_00739770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739790 */
uint F_00739790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007397b0 */
uint F_007397b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7397b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007397d0 */
uint F_007397d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7397d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007397f0 */
uint F_007397f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7397f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739810 */
uint F_00739810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739830 */
uint F_00739830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739850 */
uint F_00739850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739870 */
uint F_00739870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)this = *param_1;
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xd8);
  puVar3 = (undefined4 *)((int)this + 0xd8);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xf4);
  iVar1 = (int)param_1 - (int)this;
  puVar3 = (undefined4 *)((int)this + 0xf8);
  param_1 = (undefined1 *)0x2;
  do {
    puVar3[-1] = *puVar2;
    *puVar3 = *(undefined4 *)(iVar1 + (int)puVar3);
    F_0042ccf0(puVar3 + 1,puVar2 + 2);
    puVar2 = puVar2 + 0x17;
    puVar3 = puVar3 + 0x17;
    param_1 = (undefined1 *)((int)param_1 + -1);
  } while (param_1 != (undefined1 *)0x0);
  return (uint)this;
}

/* ref: FUN_007398f0 */
uint F_007398f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7398f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00726b40(this);
  return (uint)this;
}

/* ref: FUN_00739910 */
byte F_00739910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x10,0,800);
    *(uint *)((int)this + 8) = param_1 * 0x10 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_007399e0 */
uint F_007399e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7399e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c190(this);
  return (uint)this;
}

/* ref: FUN_007399f0 */
uint F_007399f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7399f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c1f0(this);
  return (uint)this;
}

/* ref: FUN_00739a00 */
uint F_00739a00(unsigned int gen_a0)
{
  GEN_ENTER(0x739a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c250(this);
  return (uint)this;
}

/* ref: FUN_00739a10 */
uint F_00739a10(unsigned int gen_a0)
{
  GEN_ENTER(0x739a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00739a20 */
uint F_00739a20(unsigned int gen_a0)
{
  GEN_ENTER(0x739a20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00739a40 */
uint F_00739a40(unsigned int gen_a0)
{
  GEN_ENTER(0x739a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c310(this);
  return (uint)this;
}

/* ref: FUN_00739a60 */
uint F_00739a60(unsigned int gen_a0)
{
  GEN_ENTER(0x739a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c380(this);
  return (uint)this;
}

/* ref: FUN_00739a70 */
uint F_00739a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739a90 */
uint F_00739a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739ab0 */
uint F_00739ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739ad0 */
uint F_00739ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739af0 */
uint F_00739af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739b10 */
unsigned int F_00739b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00739b30 */
unsigned int F_00739b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00739b50 */
uint F_00739b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00739b80 */
uint F_00739b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *param_1;
  puVar2 = param_2;
  puVar3 = this;
  for (iVar1 = 10; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = param_2[10];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_2 + 0xb);
  F_0042cbc0((undefined *)((int)this + 0x34),param_2 + 0xc);
  *(undefined4 *)((int)this + 0x88) = param_2[0x21];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_2 + 0x22);
  return (uint)this;
}

/* ref: FUN_00739bf0 */
byte F_00739bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00739c10 */
unsigned int F_00739c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00739c30 */
uint F_00739c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00739c40 */
unsigned int F_00739c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return 0;
}

/* ref: FUN_00739c70 */
unsigned int F_00739c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return 0;
}

/* ref: FUN_00739d00 */
uint F_00739d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739d00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
    }
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00739d40 */
unsigned int F_00739d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    }
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_00739d90 */
unsigned int F_00739d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00739dc0 */
uint F_00739dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739de0 */
uint F_00739de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e00 */
uint F_00739e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e20 */
uint F_00739e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e40 */
uint F_00739e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e60 */
unsigned int F_00739e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0072cf40(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00739e80 */
uint F_00739e80(unsigned int gen_a0)
{
  GEN_ENTER(0x739e80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 8));
  return (uint)uVar1;
}

/* ref: FUN_00739ea0 */
uint F_00739ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x739ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 0x18));
  return (uint)uVar1;
}

/* ref: FUN_00739ec0 */
uint F_00739ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x739ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_1 + 0x58));
  uVar1 = F_0042c880((undefined *)(param_1 + 4));
  return (uint)uVar1;
}

/* ref: FUN_00739ee0 */
uint F_00739ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x739ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 0x1c));
  return (uint)uVar1;
}

/* ref: FUN_00739f00 */
uint F_00739f00(unsigned int gen_a0)
{
  GEN_ENTER(0x739f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 0x20));
  return (uint)uVar1;
}

/* ref: FUN_00739f20 */
uint F_00739f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00739f40 */
uint F_00739f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00739f60 */
uint F_00739f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x16);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_1 + 0x2b);
  return (uint)this;
}

/* ref: FUN_00739fa0 */
uint F_00739fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00739fc0 */
unsigned int F_00739fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return 0;
}

/* ref: FUN_00739fe0 */
unsigned int F_00739fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_0073a000 */
uint F_0073a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a020 */
uint F_0073a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0073a040 */
unsigned int F_0073a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_0073a060 */
uint F_0073a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_0073a080 */
uint F_0073a080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a0b0 */
uint F_0073a0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a0e0 */
unsigned int F_0073a0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *(undefined2 *)param_1;
  iVar1 = 10;
  puVar2 = param_1;
  puVar3 = this;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0xc);
  F_0042cbc0((undefined *)((int)this + 0x34),param_1 + 0xd);
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_1 + 0x23);
  return 0;
}

/* ref: FUN_0073a140 */
uint F_0073a140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 1;
  this_00 = (undefined *)((int)this + 0x1b4);
  do {
    this_00 = (undefined *)((int)this_00 + -0x5c);
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0073a180 */
uint F_0073a180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042cbc0((undefined *)((int)this + 0xc),param_1 + 3);
  return (uint)this;
}

/* ref: FUN_0073a1b0 */
uint F_0073a1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a1d0 */
byte F_0073a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x14,0,800);
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0073a230 */
byte F_0073a230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0xb8,0,800);
    *(uint *)((int)this + 8) = param_1 * 0xb8 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0073a290 */
unsigned int F_0073a290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_0073a2b0 */
uint F_0073a2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a2d0 */
unsigned int F_0073a2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_0073a2f0 */
uint F_0073a2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x16);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_1 + 0x2b);
  return (uint)this;
}

/* ref: FUN_0073a330 */
uint F_0073a330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a360 */
uint F_0073a360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a390 */
uint F_0073a390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_0042cc20(this,*param_1,REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x54) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a3c0 */
unsigned int F_0073a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *(undefined2 *)param_1;
  iVar1 = 10;
  puVar2 = param_1;
  puVar3 = this;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0xc);
  F_0042cbc0((undefined *)((int)this + 0x34),param_1 + 0xd);
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_1 + 0x23);
  return 0;
}

/* ref: FUN_0073a430 */
uint F_0073a430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042cbc0((undefined *)((int)this + 0xc),param_1 + 3);
  return (uint)this;
}

/* ref: FUN_0073a460 */
unsigned int F_0073a460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return 0;
}

/* ref: FUN_0073a480 */
uint F_0073a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a4a0 */
uint F_0073a4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a4d0 */
unsigned int F_0073a4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0073a500 */
uint F_0073a500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0073a520 */
unsigned int F_0073a520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0073a540 */
unsigned int F_0073a540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return 0;
}

/* ref: FUN_0073a570 */
unsigned int F_0073a570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a590 */
unsigned int F_0073a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a5b0 */
unsigned int F_0073a5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a5d0 */
unsigned int F_0073a5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a5f0 */
unsigned int F_0073a5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0073a620 */
unsigned int F_0073a620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a640 */
unsigned int F_0073a640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a660 */
unsigned int F_0073a660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return 0;
}

/* ref: FUN_0073a6a0 */
unsigned int F_0073a6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return 0;
}

/* ref: FUN_0073a6d0 */
unsigned int F_0073a6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return 0;
}

/* ref: FUN_0073a700 */
uint F_0073a700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a720 */
unsigned int F_0073a720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return 0;
}

/* ref: FUN_0073a760 */
unsigned int F_0073a760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return 0;
}

/* ref: FUN_0073a790 */
unsigned int F_0073a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return 0;
}

/* ref: FUN_0073a7c0 */
uint F_0073a7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a7e0 */
unsigned int F_0073a7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a820 */
unsigned int F_0073a820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a860 */
unsigned int F_0073a860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_0073a890 */
uint F_0073a890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0072db20(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0073a8b0 */
unsigned int F_0073a8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x2c,param_3 + 0x2c);
    param_2[0x56] = param_3[0x56];
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5a) = *(undefined4 *)(param_3 + 0x5a);
  }
  return 0;
}

/* ref: FUN_0073a910 */
unsigned int F_0073a910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 2,param_3 + 2);
    F_0042cbc0(param_2 + 0x2c,param_3 + 0x2c);
    param_2[0x56] = param_3[0x56];
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5a) = *(undefined4 *)(param_3 + 0x5a);
  }
  return 0;
}

/* ref: FUN_0073a970 */
unsigned int F_0073a970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: Client::Game::Event::MakeRetainerTask::vf0 */
uint F_0073a9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73a9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
  if (this[0xc] == (undefined1)0x0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      uVar3 = 1;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      uVar2 = F_00763050(uVar2,uVar3);
      if (uVar2 != 0) {
        F_007e3970(uVar2);
      }
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0073aa00 */
uint F_0073aa00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x73aa00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 * puVar4;
  undefined * puVar5;
  int * piVar6;
  undefined * pvVar7;
  int iVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)(REFG(int, 0x1488344) + 0x100);
  piVar6 = *(int * PTR32 *)((int)this + 0x1c);
  if ((piVar6 != (int *)0x0) && (uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6), (char)uVar3 != '\0')
     ) {
    pvVar7 = *(undefined * PTR32 *)((int)this + 0x1c);
    if (*(char *)((int)this + 0x35) == '\0') {
      if (*(int *)((int)this + 0x28) != 0) {
        F_006d4be0(pvVar7,*(int *)((int)this + 0x28),0,1,0);
      }
    }
    else {
      (*(undefined4 *)(gen_frame + 0x60)) = 0x278;
      uVar3 = F_0042a970((*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
      if (uVar3 < 0x40) {
        if (0xf < uVar3) {
          (*(undefined4 *)(gen_frame + 0x60)) = 0x279;
        }
      }
      else {
        (*(undefined4 *)(gen_frame + 0x60)) = 0x27a;
      }
      (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
      F_00aa0000(pvVar7,(*(undefined4 *)(gen_frame + 0x60)),0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
    }
    if (*(int *)((int)this + 0x2c) != 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
      (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_00aa0000(pvVar7,*(int *)((int)this + 0x2c),0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
    }
    if (*(int *)((int)this + 0x30) == 0) {
      if (*(char *)((int)this + 0x34) != '\0') {
        F_00aa05d0(pvVar7,0);
      }
    }
    else {
      F_006d4be0(pvVar7,*(int *)((int)this + 0x30),0,0,(uint)*(byte *)((int)this + 0x34));
    }
  }
  piVar6 = *(int * PTR32 *)((int)this + 0x1c);
  if ((piVar6 == (int *)0x0) || (uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6), (char)uVar3 == '\0')
     ) {
    (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = &REFG(undefined1, 0x107fc63);
  }
  else {
    puVar4 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xc))))(*(int * PTR32 *)((int)this + 0x1c))));
    (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = puVar4;
  }
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  if (*(char *)*(*(undefined4 * PTR32 *)(gen_frame + 0x5c)) == '\0') {
    puVar5 = &REFG(undefined, 0x10919e8);
  }
  else {
    puVar5 = (undefined *)F_0042a990((*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = puVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x70)),6);
  cVar1 = *(char *)((int)this + 0x36);
  (*(undefined1 * PTR32 *)(gen_frame + 0x74)) = (*(undefined1 * PTR32 *)(gen_frame + 0x64));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)),4);
  (*(uint *)(gen_frame + 0x7c)) = (uint)(cVar1 == '\0');
  uVar9 = *(undefined4 *)((int)this + 0x18);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x80)),4);
  (*(undefined4 *)(gen_frame + 0x84)) = uVar9;
  uVar9 = *(undefined4 *)((int)this + 0x24);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x90)),4);
  (*(undefined4 *)(gen_frame + 0x94)) = uVar9;
  bVar2 = *(int *)((int)this + 0x20) < 1;
  if (bVar2) {
    *(int *)((int)this + 0x40) = (int)this + 0x38;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x88)),4);
    (*(uint *)(gen_frame + 0x8c)) = 0;
  }
  else {
    *(int *)((int)this + 0x40) = (int)this + 0x3c;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x88)),4);
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
    (*(uint *)(gen_frame + 0x8c)) = 1;
  }
  (*(uint *)(gen_frame + 0x8c)) = (uint)!bVar2;
  piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar9 = 0x39;
  uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6);
  pvVar7 = (undefined *)F_00763050(uVar3,uVar9);
  if (pvVar7 != (undefined *)0x0) {
    if (*(int *)((int)this + 8) == 0) {
      uVar3 = F_0086aef0(pvVar7,8,&(*(undefined4 *)(gen_frame + 0x68)),this,0);
      *(uint *)((int)this + 8) = uVar3;
    }
    else {
      F_007d0ef0(pvVar7,*(int *)((int)this + 8),8,&(*(undefined4 *)(gen_frame + 0x68)));
    }
  }
  puVar4 = ((undefined1 *)(gen_frame + 0xa8));
  iVar8 = 7;
  do {
    puVar4 = puVar4 + -8;
    uVar3 = F_005a2670(puVar4);
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return uVar3;
}

/* ref: Client::Game::Event::LuaActor::vf0 */
uint F_0073ad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73ad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)(this + 8) != '\0') {
    uVar1 = F_0042a990(this + 8);
    F_00a023f0(*(undefined * PTR32 *)(this + 0x5c),uVar1);
  }
  F_0042c880(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaEventObject::vf0 */
uint F_0073adb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73adb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)(this + 8) != '\0') {
    uVar1 = F_0042a990(this + 8);
    F_00a023f0(*(undefined * PTR32 *)(this + 0x5c),uVar1);
  }
  F_0042c880(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaAetheryte::vf0 */
uint F_0073ae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73ae00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)(this + 8) != '\0') {
    uVar1 = F_0042a990(this + 8);
    F_00a023f0(*(undefined * PTR32 *)(this + 0x5c),uVar1);
  }
  F_0042c880(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0073ae50 */
unsigned int F_0073ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73ae50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_0073ae80 */
uint F_0073ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73ae80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073aea0 */
uint F_0073aea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73aea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073aec0 */
uint F_0073aec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73aec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073aed0 */
uint F_0073aed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73aed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073af10 */
uint F_0073af10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73af10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073af20 */
uint F_0073af20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73af20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073af40 */
uint F_0073af40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73af40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073af50 */
uint F_0073af50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73af50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073af90 */
uint F_0073af90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73af90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073afb0 */
uint F_0073afb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73afb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073afc0 */
uint F_0073afc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73afc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b020 */
uint F_0073b020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b030 */
uint F_0073b030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b050 */
uint F_0073b050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b060 */
uint F_0073b060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b080 */
uint F_0073b080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b090 */
uint F_0073b090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b0a0 */
unsigned int F_0073b0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x73b0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_0073b0e0 */
uint F_0073b0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b0e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b100 */
byte F_0073b100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0x1c < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  return (*((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4))) & 1 << ((byte)param_1 & 0x1f)) != 0;
}

/* ref: FUN_0073b140 */
uint F_0073b140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b160 */
uint F_0073b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b170 */
uint F_0073b170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b190 */
uint F_0073b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b1a0 */
uint F_0073b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b1c0 */
uint F_0073b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b1d0 */
uint F_0073b1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b1f0 */
uint F_0073b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b200 */
uint F_0073b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b210 */
uint F_0073b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b230 */
uint F_0073b230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b250 */
uint F_0073b250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b260 */
uint F_0073b260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b270 */
uint F_0073b270(unsigned int gen_a0)
{
  GEN_ENTER(0x73b270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724c40(this);
  return (uint)this;
}

/* ref: FUN_0073b280 */
uint F_0073b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73b280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724c40(this);
  return (uint)param_1;
}

/* ref: FUN_0073b2a0 */
uint F_0073b2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x73b2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007316f0(this);
  return (uint)this;
}

/* ref: FUN_0073b2b0 */
byte F_0073b2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_0073b2d0 */
byte F_0073b2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b300 */
uint F_0073b300(unsigned int gen_a0)
{
  GEN_ENTER(0x73b300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724ce0(this);
  return (uint)this;
}

/* ref: FUN_0073b310 */
uint F_0073b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73b310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724ce0(this);
  return (uint)param_1;
}

/* ref: FUN_0073b360 */
uint F_0073b360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b370 */
uint F_0073b370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b380 */
byte F_0073b380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b3b0 */
uint F_0073b3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b3c0 */
uint F_0073b3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b3d0 */
byte F_0073b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b410 */
uint F_0073b410(unsigned int gen_a0)
{
  GEN_ENTER(0x73b410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724e40(this);
  return (uint)this;
}

/* ref: FUN_0073b420 */
uint F_0073b420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73b420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724e40(this);
  return (uint)param_1;
}

/* ref: FUN_0073b440 */
byte F_0073b440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b460 */
byte F_0073b460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FormatStringCallback_VTalkCallback_Event_Game_Client_Event::vf1 */
uint F_0073b480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x73b480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0073aa00(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0073b4b0 */
byte F_0073b4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b4e0 */
byte F_0073b4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b500 */
uint F_0073b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b510 */
uint F_0073b510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b520 */
byte F_0073b520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b550 */
byte F_0073b550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b570 */
uint F_0073b570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b580 */
uint F_0073b580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b5b0 */
uint F_0073b5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b5c0 */
uint F_0073b5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b5d0 */
byte F_0073b5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b5f0 */
byte F_0073b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b620 */
byte F_0073b620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b660 */
uint F_0073b660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b680 */
uint F_0073b680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b6a0 */
uint F_0073b6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b6b0 */
uint F_0073b6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b6c0 */
uint F_0073b6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x73b6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731b70(this);
  return (uint)this;
}

/* ref: FUN_0073b6f0 */
uint F_0073b6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x73b6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731b70(this);
  return (uint)this;
}

/* ref: FUN_0073b700 */
byte F_0073b700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b720 */
uint F_0073b720(unsigned int gen_a0)
{
  GEN_ENTER(0x73b720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731c40(this);
  return (uint)this;
}

/* ref: FUN_0073b760 */
uint F_0073b760(unsigned int gen_a0)
{
  GEN_ENTER(0x73b760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731c40(this);
  return (uint)this;
}

/* ref: FUN_0073b780 */
uint F_0073b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b790 */
uint F_0073b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b7a0 */
byte F_0073b7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b7f0 */
uint F_0073b7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b800 */
uint F_0073b800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b810 */
byte F_0073b810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b840 */
uint F_0073b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73b840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

