#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0052e840 */
uint F_0052e840(unsigned int gen_a0)
{
  GEN_ENTER(0x52e840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0052e6b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x3c,0xd6);
  return (uint)uVar1;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf15 */
uint F_0052e880(void)
{
  GEN_ENTER(0x52e880u, 0u, 0u, 0u, 0u);
  return 0xb0;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf17 */
uint F_0052e890(unsigned int gen_a0)
{
  GEN_ENTER(0x52e890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf18 */
uint F_0052e8a0(void)
{
  GEN_ENTER(0x52e8a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0052e8b0 */
uint F_0052e8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x52e8b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_0052e8d0 */
uint F_0052e8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x52e8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[44])REFP(0x109bcfc));
  F_0052e6b0((undefined *)((int)this + 0xa0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xa4),
               *(undefined4 * PTR32 *)((int)this + 0xa4));
  F_00429760(*(undefined4 *)((int)this + 0xa4),0x3c,0xd6);
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this);
  return uVar2;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf0 */
uint F_0052e950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52e950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0052e8d0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
  }
  return (uint)this;
}

/* ref: FUN_0052e980 */
byte F_0052e980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52e980u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[0] = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0052e9a0 */
uint F_0052e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined1 *)in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0052e9c0 */
uint F_0052e9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52e9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0052e9e0 */
byte F_0052e9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52e9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0052ea50 */
unsigned int F_0052ea50(float gen_a0)
{
  GEN_ENTER(0x52ea50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_0052eac0 */
unsigned int F_0052eac0(void)
{
  GEN_ENTER(0x52eac0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x14c4e9c) == 0) {
    this = (undefined *)F_004069f0(0x28);
    if (this != (undefined *)0x0) {
      uVar1 = F_00b5f170(this);
      REFG(undefined4, 0x14c4e9c) = uVar1;
      return 0;
    }
    REFG(undefined4, 0x14c4e9c) = 0;
  }
  return 0;
}

/* ref: FUN_0052eaf0 */
uint F_0052eaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x52eaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b59940(REFG(void * PTR32, 0x14c4e78),param_1);
  return uVar1;
}

/* ref: FUN_0052eb00 */
uint F_0052eb00(unsigned int gen_a0)
{
  GEN_ENTER(0x52eb00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00b59980(REFG(void * PTR32, 0x14c4e78),param_1);
  uVar1 = F_00b5ae40(REFG(void * PTR32, 0x14c4e84),param_1);
  return uVar1;
}

/* ref: FUN_0052eb30 */
unsigned int F_0052eb30(unsigned int gen_a0)
{
  GEN_ENTER(0x52eb30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b599f0(REFG(void * PTR32, 0x14c4e78),param_1);
  return 0;
}

/* ref: FUN_0052eb40 */
uint F_0052eb40(void)
{
  GEN_ENTER(0x52eb40u, 0u, 0u, 0u, 0u);
  undefined4 * this;
  
  if (REFG(undefined4 * PTR32, 0x1375b00) == (undefined4 *)0x0) {
    this = (undefined4 *)F_00406b90(0x38,0,0);
    if (this == (undefined4 *)0x0) {
      REFG(undefined4 * PTR32, 0x1375b00) = (undefined4 *)0x0;
    }
    else {
      F_004a0050(this,"schedule management");
      *this = (*(undefined * PTR32 (*)[3])REFP(0x109be80));
      this[10] = 0;
      this[0xb] = 0;
      this[0xc] = 0;
      this[0xd] = 0;
      REFG(undefined4 * PTR32, 0x1375b00) = this;
    }
    F_00b5c5f0();
    F_00b595a0();
    F_00b5a5a0();
    F_00b5f520();
    F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),0xb,REFG(undefined4 * PTR32, 0x1375b00));
  }
  return (uint)REFG(undefined4 * PTR32, 0x1375b00);
}

/* ref: FUN_0052ebd0 */
uint F_0052ebd0(unsigned int gen_a0)
{
  GEN_ENTER(0x52ebd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  uint uVar3;
  undefined4 * puVar4;
  
  if (REFG(undefined4 * PTR32, 0x14c4e9c) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14c4e9c))))(REFG(undefined4 * PTR32, 0x14c4e9c),1);
    REFG(undefined4 * PTR32, 0x14c4e9c) = (undefined4 *)0x0;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if (*(undefined4 * PTR32 *)((int)this + 0x28) != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar4[7];
      F_00b61030(puVar4);
      F_00b60000(puVar4);
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      puVar4 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (REFG(void * PTR32, 0x14c4e84) != (undefined *)0x0) {
    F_00b5a7c0(REFG(void * PTR32, 0x14c4e84));
  }
  bVar2 = F_00b59aa0(REFG(void * PTR32, 0x14c4e78));
  if (bVar2 == 0) {
    return CONCAT31(extraout_var,bVar2);
  }
  F_00b5e100(REFG(void * PTR32, 0x14c4e90));
  uVar3 = extraout_EAX;
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  if (*(undefined4 * PTR32 *)((int)this + 0x2c) != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar4[5];
      uVar3 = ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      puVar4 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  return CONCAT31((int3)(uVar3 >> 8),bVar2);
}

/* ref: FUN_0052ec80 */
uint F_0052ec80(unsigned int gen_a0)
{
  GEN_ENTER(0x52ec80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00b5f560();
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x28);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar3[7];
      F_00b61030(puVar3);
      F_00b60000(puVar3);
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      puVar3 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (REFG(void * PTR32, 0x14c4e84) != (undefined *)0x0) {
    F_00b5bdb0(REFG(void * PTR32, 0x14c4e84));
  }
  if (REFG(void * PTR32, 0x14c4e78) != (undefined *)0x0) {
    F_00b59e40(REFG(void * PTR32, 0x14c4e78));
  }
  if (REFG(void * PTR32, 0x14c4e90) != (undefined *)0x0) {
    F_00b5e150(REFG(void * PTR32, 0x14c4e90));
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar3[5];
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      puVar3 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar2;
}

/* ref: FUN_0052ed20 */
uint F_0052ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x52ed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint in_ecx_00;
  byte bVar1;
  
  in_ecx_00 = *(uint *)(in_ecx + 0x2c);
  while( true ) {
    if (in_ecx_00 == 0) {
      return 0;
    }
    if (((*(int *)(in_ecx_00 + 0x74) == param_2) &&
        ((param_3 == 0 || (*(byte *)(in_ecx_00 + 0x71) == param_3)))) &&
       ((param_4 == 0 || (bVar1 = F_00b61c90(in_ecx_00,param_4), bVar1 != 0)))) break;
    in_ecx_00 = *(uint *)(in_ecx_00 + 0x14);
  }
  return in_ecx_00;
}

/* ref: FUN_0052ed70 */
byte F_0052ed70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52ed70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (*param_1 == 0) {
    *param_1 = *(int *)((int)this + 0x2c);
    return *param_1 != 0;
  }
  iVar1 = *(int *)(*param_1 + 0x14);
  *param_1 = iVar1;
  return iVar1 != 0;
}

/* ref: FUN_0052eda0 */
uint F_0052eda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52eda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x2c);
  uVar1 = *param_1;
  if (piVar2 != (int *)0x0) {
    while ((piVar2[0x1d] != param_1[1] || ((uVar1 != 0 && (*(byte *)((int)piVar2 + 0x71) != uVar1)))
           )) {
      piVar2 = (int *)piVar2[5];
      if (piVar2 == (int *)0x0) {
        return uVar1;
      }
    }
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x6c))(piVar2,param_1);
  }
  return uVar1;
}

/* ref: FUN_0052ede0 */
uint F_0052ede0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52ede0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x2c);
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    while (piVar2[0x1d] != param_1) {
      piVar2 = (int *)piVar2[5];
      if (piVar2 == (int *)0x0) {
        return uVar1;
      }
    }
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)piVar2 + 0x71))) {
    case 8: ;
    case 9: ;
    case 0x25: ;
    case 0x26: ;
    case 0x2e: ;
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    }
  }
  return uVar1;
}

/* ref: FUN_0052ee60 */
byte F_0052ee60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52ee60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  char * pcVar3;
  int * piVar4;
  code * pcVar5;
  char * pcVar6;
  
  pcVar6 = (char *)(*param_1 + (int)param_1);
  pcVar3 = pcVar6;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != pcVar6 + 1) {
    F_00b5e020(REFG(void * PTR32, 0x14c4e90),pcVar6);
  }
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,1,0,1);
  if ((char)param_1[1] == '\0') {
    pcVar5 = *(gen_code32 *)(*piVar4 + 0xa4);
  }
  else {
    pcVar5 = *(gen_code32 *)(*piVar4 + 0xa8);
  }
  (*pcVar5)(piVar4,0,0,1);
  for (iVar2 = *(int *)((int)this + 0x28); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1c)) {
    *(bool *)(iVar2 + 0xe5) = *(char *)((int)param_1 + 7) != '\0';
  }
  return 1;
}

/* ref: FUN_0052eef0 */
unsigned int F_0052eef0(unsigned int gen_a0)
{
  GEN_ENTER(0x52eef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x2c); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x14)) {
    F_00b63020(pvVar1);
  }
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x30); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x14)) {
    F_00b63020(pvVar1);
  }
  return 0;
}

/* ref: FUN_0052ef30 */
byte F_0052ef30(unsigned int gen_a0)
{
  GEN_ENTER(0x52ef30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x28);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar1 = F_00b5fbb0(this_00);
    if (bVar1 != 0) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  }
  return 1;
}

/* ref: FUN_0052ef60 */
unsigned int F_0052ef60(unsigned int gen_a0)
{
  GEN_ENTER(0x52ef60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x28); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    F_00b60d10(this_00);
  }
  return 0;
}

/* ref: FUN_0052ef80 */
unsigned int F_0052ef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52ef80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x28); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    F_00b608e0(this_00,param_1);
  }
  return 0;
}

/* ref: FUN_0052efb0 */
uint F_0052efb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52efb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x28);
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar1 = F_00b5fc40(this_00,param_1);
    if (bVar1 != 0) break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  }
  return (uint)this_00;
}

/* ref: FUN_0052eff0 */
uint F_0052eff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x52eff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b61f00(param_1);
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x14) = *(undefined4 *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x10))) = uVar1;
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  *(undefined1 *)(uVar1 + 0x60) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_0052f030 */
uint F_0052f030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x52f030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b61ff0(param_1,param_2,0);
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x14) = *(undefined4 *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x10))) = uVar1;
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  *(undefined1 *)(uVar1 + 0x60) = (undefined1)param_3;
  return uVar1;
}

/* ref: FUN_0052f080 */
uint F_0052f080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x52f080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b61cc0(param_1);
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x14) = *(undefined4 *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x10))) = uVar1;
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  *(undefined1 *)(uVar1 + 0x60) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_0052f0c0 */
uint F_0052f0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x52f0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b61d10(param_1);
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x14) = *(undefined4 *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x10))) = uVar1;
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  *(undefined1 *)(uVar1 + 0x60) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_0052f100 */
uint F_0052f100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x52f100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) != 0) {
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x10))) = param_1;
  }
  *(undefined * PTR32 *)((int)this + 0x2c) = param_1;
  uVar1 = F_00b61d70(param_1,param_2);
  *(undefined1 *)((int)param_1 + 0x60) = (undefined1)param_3;
  return uVar1;
}

/* ref: FUN_0052f140 */
byte F_0052f140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (piVar1[0x1d] == param_1) break;
    piVar1 = (int *)piVar1[5];
  }
  F_00b5bab0(REFG(void * PTR32, 0x14c4e84),piVar1);
  if (((piVar1[4] == 0) && (piVar1[5] == 0)) && (piVar1 != *(int * PTR32 *)((int)this + 0x2c))) {
    return 0;
  }
  iVar2 = piVar1[4];
  iVar3 = piVar1[5];
  if (iVar2 == 0) {
    *(int *)((int)this + 0x2c) = iVar3;
  }
  else {
    *(int *)(iVar2 + 0x14) = iVar3;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x10) = iVar2;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1);
  ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
  return 1;
}

/* ref: FUN_0052f1c0 */
uint F_0052f1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = F_00b5bab0(REFG(void * PTR32, 0x14c4e84),param_1);
  if (((param_1[4] != 0) || (param_1[5] != 0)) || (param_1 == *(int * PTR32 *)((int)this + 0x2c))) {
    iVar1 = param_1[4];
    iVar2 = param_1[5];
    if (iVar1 == 0) {
      *(int *)((int)this + 0x2c) = iVar2;
    }
    else {
      *(int *)(iVar1 + 0x14) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x10) = iVar1;
    }
    ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
    uVar3 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return uVar3;
}

/* ref: FUN_0052f220 */
uint F_0052f220(unsigned int gen_a0)
{
  GEN_ENTER(0x52f220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  
  uVar5 = F_00b59ff0(REFG(void * PTR32, 0x14c4e78));
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  while (piVar4 = piVar1, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[5];
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x74))(piVar4);
    if ((((char)uVar5 != '\0') && (uVar5 = piVar4[0x1b] - 1, uVar5 < 5)) &&
       ((uVar5 = F_00b5bab0(REFG(void * PTR32, 0x14c4e84),piVar4), piVar4[4] != 0 ||
        ((piVar4[5] != 0 || (piVar4 == *(int * PTR32 *)((int)this + 0x2c))))))) {
      iVar2 = piVar4[4];
      iVar3 = piVar4[5];
      if (iVar2 == 0) {
        *(int *)((int)this + 0x2c) = iVar3;
      }
      else {
        *(int *)(iVar2 + 0x14) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x10) = iVar2;
      }
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
      uVar5 = ((code *)*(gen_code32 *)*piVar4)(piVar4,1);
    }
  }
  return uVar5;
}

/* ref: FUN_0052f2b0 */
uint F_0052f2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x2c);
  uVar4 = 0;
  if (piVar3 != (int *)0x0) {
    while (piVar3 != param_1) {
      piVar3 = (int *)piVar3[5];
      if (piVar3 == (int *)0x0) {
        return 0;
      }
    }
    uVar4 = 0;
    if ((piVar3 != (int *)0x0) &&
       (((uVar4 = F_00b5bab0(REFG(void * PTR32, 0x14c4e84),param_1), param_1[4] != 0 || (param_1[5] != 0)) ||
        (param_1 == *(int * PTR32 *)((int)this + 0x2c))))) {
      iVar1 = param_1[4];
      iVar2 = param_1[5];
      if (iVar1 == 0) {
        *(int *)((int)this + 0x2c) = iVar2;
      }
      else {
        *(int *)(iVar1 + 0x14) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x10) = iVar1;
      }
      uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
    }
  }
  return uVar4;
}

/* ref: FUN_0052f320 */
byte F_0052f320(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x52f320u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)param_1 >> 8),*(char *)(REFG(int, 0x137104c) + 8));
  if (*(char *)(REFG(int, 0x137104c) + 8) != '\0') {
    F_00b5ab70(REFG(void * PTR32, 0x14c4e84));
  }
  for (piVar7 = *(int * PTR32 *)(param_1 + 0x2c); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[5]) {
    ((code *)*(gen_code32 *)(*piVar7 + 0x50))(piVar7);
  }
  F_00b59cb0(REFG(void * PTR32, 0x14c4e78),param_2,local_8);
  F_00b5cc90(REFG(void * PTR32, 0x14c4e90),(undefined4)gen_fl2bits(param_2));
  F_00b5bb10(REFG(void * PTR32, 0x14c4e84),param_2,(uint)(*(int *)(param_1 + 0x28) != 0));
  piVar7 = *(int * PTR32 *)(param_1 + 0x28);
  bVar4 = false;
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[7];
      if (*(char *)((int)piVar7 + 0xe2) != '\0') {
        F_00b613e0(piVar7,param_2);
        uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        if ((char)uVar6 != '\0') {
          iVar2 = piVar7[6];
          iVar3 = piVar7[7];
          if (iVar2 == 0) {
            *(int *)(param_1 + 0x28) = iVar3;
          }
          else {
            *(int *)(iVar2 + 0x1c) = iVar3;
          }
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0x18) = iVar2;
          }
          ((code *)*(gen_code32 *)*piVar7)(piVar7,1);
        }
        bVar4 = true;
      }
      piVar7 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (bVar4) goto LAB_0052f457;
  }
  piVar7 = *(int * PTR32 *)(param_1 + 0x28);
  while (piVar1 = piVar7, piVar1 != (int *)0x0) {
    piVar7 = (int *)piVar1[7];
    F_00b613e0(piVar1,param_2);
    uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
    if ((char)uVar6 != '\0') {
      iVar2 = piVar1[6];
      iVar3 = piVar1[7];
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x28) = iVar3;
      }
      else {
        *(int *)(iVar2 + 0x1c) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x18) = iVar2;
      }
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
    }
  }
LAB_0052f457: ;
  F_00b598e0(REFG(void * PTR32, 0x14c4e78));
  if (*(int *)(param_1 + 0x28) != 0) {
    F_00b59910(REFG(void * PTR32, 0x14c4e78),param_2,(uint)*((byte *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xe6))));
  }
  F_00b636f0();
  F_00a083e0(param_2);
  bVar5 = F_00a04e80();
  return bVar5;
}

/* ref: FUN_0052f4b0 */
uint F_0052f4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x52f4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x60,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00b63100(this_00);
  }
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x14) = *(undefined4 *)((int)this + 0x30);
  if (*(int *)((int)this + 0x30) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x30) + 0x10))) = uVar1;
  }
  *(uint *)((int)this + 0x30) = uVar1;
  return uVar1;
}

/* ref: FUN_0052f4f0 */
uint F_0052f4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[4];
  uVar2 = param_1[5];
  if (iVar1 == 0) {
    *(uint *)((int)this + 0x30) = uVar2;
  }
  else {
    *(uint *)(iVar1 + 0x14) = uVar2;
  }
  if (uVar2 != 0) {
    *(int *)(uVar2 + 0x10) = iVar1;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return uVar2;
}

/* ref: FUN_0052f530 */
byte F_0052f530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * this_00;
  
  this_00 = *(int * PTR32 *)((int)this + 0x28);
  if (this_00 != (int *)0x0) {
    while (bVar1 = F_00b5fc40(this_00,param_1), bVar1 == 0) {
      this_00 = (int *)this_00[7];
      if (this_00 == (int *)0x0) {
        return 0;
      }
    }
    if (this_00 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
      return (byte)uVar2;
    }
  }
  return 0;
}

/* ref: FUN_0052f580 */
unsigned int F_0052f580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x28);
  if (param_1 == 0) {
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
      F_00b60cf0(this_00);
    }
  }
  else if (this_00 != (undefined *)0x0) {
    while (bVar1 = F_00b5fc40(this_00,param_1), bVar1 == 0) {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    if (this_00 != (undefined *)0x0) {
      F_00b60cf0(this_00);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0052f5e0 */
unsigned int F_0052f5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x28);
  if (param_1 == 0) {
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
      F_00b60d00(this_00);
    }
  }
  else if (this_00 != (undefined *)0x0) {
    while (bVar1 = F_00b5fc40(this_00,param_1), bVar1 == 0) {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    if (this_00 != (undefined *)0x0) {
      F_00b60d00(this_00);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0052f640 */
byte F_0052f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x28);
  if (this_00 != (undefined *)0x0) {
    while (bVar1 = F_00b5fc40(this_00,param_1), bVar1 == 0) {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00b5fbb0(this_00);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_0052f690 */
uint F_0052f690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)F_00406b90(0x150,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00b5fee0(pvVar1);
  }
  *(undefined1 *)((int)pvVar1 + 0xe7) = 1;
  F_00b5fbf0(pvVar1,param_1);
  *(undefined4 *)((int)pvVar1 + 0x18) = 0;
  *(undefined4 *)((int)pvVar1 + 0x1c) = *(undefined4 *)((int)this + 0x28);
  if (*(int *)((int)this + 0x28) != 0) {
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x18))) = pvVar1;
  }
  *(undefined * PTR32 *)((int)this + 0x28) = pvVar1;
  return (uint)pvVar1;
}

/* ref: Client::System::Scheduler::ScheduleManagement::vf1 */
byte F_0052f700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f700u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float10 fVar2;
  byte bVar3;
  
  fVar1 = *(float *)param_2;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1088070);
  *(float *)(param_1 + 0x34) = (float)((float10)fVar1 * fVar2);
  bVar3 = F_0052f320(param_1,(float)((float10)fVar1 * fVar2));
  return bVar3;
}

/* ref: FUN_0052f730 */
uint F_0052f730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * this_00;
  uint uVar2;
  
  this_00 = *(int * PTR32 *)((int)this + 0x28);
  do {
    if (this_00 == (int *)0x0) {
LAB_0052f75d: ;
      this_00 = (int *)F_0052f690(this,param_1);
LAB_0052f765: ;
      uVar2 = ((code *)*(gen_code32 *)(*this_00 + 4))(this_00);
      return uVar2;
    }
    bVar1 = F_00b5fc40(this_00,param_1);
    if (bVar1 != 0) {
      if (this_00 != (int *)0x0) goto LAB_0052f765;
      goto LAB_0052f75d;
    }
    this_00 = (int *)this_00[7];
  } while( true );
}

/* ref: FUN_0052f780 */
byte F_0052f780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x28);
  do {
    if (this_00 == (undefined *)0x0) {
LAB_0052f7ad: ;
      this_00 = (undefined *)F_0052f690(this,param_1);
LAB_0052f7b5: ;
      bVar1 = F_00b5fcc0(this_00);
      return bVar1;
    }
    bVar1 = F_00b5fc40(this_00,param_1);
    if (bVar1 != 0) {
      if (this_00 != (undefined *)0x0) goto LAB_0052f7b5;
      goto LAB_0052f7ad;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while( true );
}

/* ref: FUN_0052f7e0 */
byte F_0052f7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0052f8a0 */
uint F_0052f8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f8a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_0052f8b0 */
uint F_0052f8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f8b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_0052f8c0 */
uint F_0052f8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f8c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_0052f8e0 */
uint F_0052f8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f8e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_0052f900 */
byte F_0052f900(unsigned int gen_a0)
{
  GEN_ENTER(0x52f900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(byte *)(param_1 + 1);
}

/* ref: FUN_0052f910 */
uint F_0052f910(unsigned int gen_a0)
{
  GEN_ENTER(0x52f910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: Client::System::Scheduler::ScheduleManagement::vf0 */
uint F_0052f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be80));
  REFG(undefined4, 0x1375b00) = 0;
  F_004a05c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0052f980 */
uint F_0052f980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x10) = (int)this + -0x10;
  }
  *param_1 = (int)this + -0x10;
  return (uint)param_1;
}

/* ref: FUN_0052f9b0 */
unsigned int F_0052f9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x14) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x10) = iVar1;
  }
  return 0;
}

/* ref: FUN_0052f9e0 */
uint F_0052f9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52f9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x18) = (int)this + -0x18;
  }
  *param_1 = (int)this + -0x18;
  return (uint)param_1;
}

/* ref: FUN_0052fa10 */
unsigned int F_0052fa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fa10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x1c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x18) = iVar1;
  }
  return 0;
}

/* ref: FUN_0052fa40 */
uint F_0052fa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fa40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_0052fa60 */
uint F_0052fa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fa60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x54) = param_2;
  return param_2;
}

/* ref: FUN_0052fa80 */
uint F_0052fa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fa80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: Component::Exd::ExdEnvironment::vf1 */
uint F_0052fac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x52fac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = F_00406bb0(param_1,0,0);
    return uVar1;
  }
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: Component::Exd::ExdEnvironment::vf2 */
uint F_0052faf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52faf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_0052fb10 */
unsigned int F_0052fb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_0052fb20 */
unsigned int F_0052fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_0052fb40 */
uint F_0052fb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c49908((int)this + 0x14,0x40,param_1);
  return uVar1;
}

/* ref: Component::Exd::ExdModuleResourceHandle::vf1 */
uint F_0052fb60(unsigned int gen_a0)
{
  GEN_ENTER(0x52fb60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14;
}

/* ref: Component::Exd::ExdModuleResourceHandle::vf4 */
uint F_0052fb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x52fb70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x5c))))
                    (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_0052fb90 */
unsigned int F_0052fb90(unsigned int gen_a0)
{
  GEN_ENTER(0x52fb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cb2920(*(undefined * PTR32 *)((int)this + 0x10));
  return 0;
}

/* ref: FUN_0052fba0 */
uint F_0052fba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))(*(int * PTR32 *)((int)this + 0x10),param_1);
  return uVar1;
}

/* ref: FUN_0052fbb0 */
uint F_0052fbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))(*(int * PTR32 *)((int)this + 0x10),param_1);
  return uVar1;
}

/* ref: FUN_0052fbc0 */
uint F_0052fbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x52fbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x44))))
                    (*(int * PTR32 *)((int)this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_0052fbd0 */
uint F_0052fbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x52fbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = piVar1;
  }
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,param_2)));
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = piVar1;
    }
    if (piVar1 != (int *)0x0) {
      if (param_4 == (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_0052fc30 */
uint F_0052fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x52fc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = piVar1;
  }
  if (piVar1 != (int *)0x0) {
    F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
    (*(uint *)(gen_frame + 0x8)) = param_3 & 0xffff;
    F_00cb41f0(((undefined1 *)(gen_frame + 0xc)),param_2,&(*(uint *)(gen_frame + 0x8)),1);
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,((undefined1 *)(gen_frame + 0xc)))));
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = piVar1;
    }
    if (piVar1 != (int *)0x0) {
      if (param_5 == (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_0052fce0 */
uint F_0052fce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x52fce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = piVar1;
  }
  if (piVar1 != (int *)0x0) {
    F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
    (*(uint *)(gen_frame + 0x8)) = param_3 & 0xffff;
    F_00cb41f0(((undefined1 *)(gen_frame + 0xc)),param_2,&(*(uint *)(gen_frame + 0x8)),1);
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,((undefined1 *)(gen_frame + 0xc)))));
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = piVar1;
    }
    if (piVar1 != (int *)0x0) {
      if (param_5 == (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_0052fd90 */
uint F_0052fd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fd90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,param_2)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_0052fdd0 */
uint F_0052fdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x52fdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,param_2)));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_0052fe20 */
uint F_0052fe20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x52fe20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x38))))(*(int * PTR32 *)((int)this + 0x10));
  if ((char)uVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))
                              (*(int * PTR32 *)((int)this + 0x10),param_1)));
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = piVar2;
    }
    if (piVar2 != (int *)0x0) {
      F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2,param_2,((undefined1 *)(gen_frame + 0xc)))));
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = piVar2;
      }
      if (param_5 != (undefined *)0x0) {
        F_00cb4320(param_5,((undefined1 *)(gen_frame + 0xc)));
      }
      if (piVar2 != (int *)0x0) {
        if (param_4 == (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        }
        uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_0052fef0 */
uint F_0052fef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x52fef0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 != (int *)0x0) {
    F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x58))(param_1,param_2,((undefined1 *)(gen_frame + 0xc)))));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_0052ff60 */
uint F_0052ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x52ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (piVar1 != (int *)0x0) {
    F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,param_2,((undefined1 *)(gen_frame + 0xc)))));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_0052ffe0 */
byte F_0052ffe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x52ffe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x38))))(*(int * PTR32 *)((int)this + 0x10));
  if ((char)uVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))
                              (*(int * PTR32 *)((int)this + 0x10),param_1)));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2,param_2,param_3);
      if (uVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00530046 */
uint F_00530046(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x530046u, gen_a0, gen_a1, gen_a2, gen_a3);
  code * in_eax = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*in_eax)();
  if (uVar1 != 0) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return 0;
}

/* ref: FUN_00530049 */
uint F_00530049(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x530049u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (in_eax != 0) {
    return CONCAT31((int3)((uint)in_eax >> 8),1);
  }
  return 0;
}

/* ref: FUN_00530055 */
unsigned int F_00530055(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x530055u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0053005f */
unsigned int F_0053005f(void)
{
  GEN_ENTER(0x53005fu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00530060 */
byte F_00530060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x530060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,param_2,param_3);
    if (uVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005300a0 */
uint F_005300a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5300a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x38))))(*(int * PTR32 *)((int)this + 0x10));
  if ((char)uVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))
                              (*(int * PTR32 *)((int)this + 0x10),param_1)));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005300e0 */
uint F_005300e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5300e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x44))(param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00530100 */
uint F_00530100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00530130 */
uint F_00530130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x530130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00530160 */
uint F_00530160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x530160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 4))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00530190 */
unsigned int F_00530190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x530190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(int *)((int)this + 0x10) != 0) {
    F_00510e20(10);
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x24))))
                (*(int * PTR32 *)((int)this + 0x10),param_1,param_2,param_3);
      return 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x24))))(*(int * PTR32 *)((int)this + 0x10),0,0,0);
  }
  return 0;
}

/* ref: Component::Exd::ExdModule::vf1 */
unsigned int F_005301e0(void)
{
  GEN_ENTER(0x5301e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::Exd::ExdModule::vf2 */
unsigned int F_005301f0(void)
{
  GEN_ENTER(0x5301f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::Exd::ExdModule::vf3 */
unsigned int F_00530200(void)
{
  GEN_ENTER(0x530200u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::Exd::ExdModuleResourceHandle::vf2 */
byte F_00530220(unsigned int gen_a0)
{
  GEN_ENTER(0x530220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x88)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return iVar1 == 2;
}

/* ref: Component::Exd::ExdModuleResourceHandle::vf5 */
uint F_00530240(unsigned int gen_a0)
{
  GEN_ENTER(0x530240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x1c)));
}

/* ref: FUN_00530250 */
byte F_00530250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x530250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = *param_2 + 1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x20;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x109be8c);
  bVar1 = F_00cb28f0(this_00,&(*(undefined4 *)(gen_frame + 0x4)));
  return bVar1;
}

/* ref: FUN_005302a0 */
byte F_005302a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5302a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x14))))
                    (*(int * PTR32 *)((int)this + 0x10),*param_1 + 1);
  bVar1 = (byte)uVar2;
  while (bVar1 != 0) {
    F_00cb2920(*(undefined * PTR32 *)((int)this + 0x10));
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x38))))(*(int * PTR32 *)((int)this + 0x10));
    bVar1 = (byte)uVar3;
  }
  return (byte)uVar2;
}

/* ref: FUN_005302e0 */
uint F_005302e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5302e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)((int)this + 0x114);
  while( true ) {
    if (this == (undefined *)0xfffffee8) {
      uVar3 = 0;
    }
    else {
      uVar3 = (int)this + 0x114;
    }
    if (uVar2 == uVar3) break;
    if ((*(int *)(uVar2 + 0x10) == param_1) &&
       (piVar1 = *(int * PTR32 *)(uVar2 + 0x54), piVar1 != (int *)0x0)) {
      *(undefined4 *)(uVar2 + 0x54) = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar2);
      return uVar2;
    }
    uVar2 = *(uint *)(uVar2 + 0xc);
  }
  return uVar2;
}

/* ref: Component::Exd::ExdModuleResourceHandle::vf3 */
uint F_00530330(unsigned int gen_a0)
{
  GEN_ENTER(0x530330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x8c)));
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 < 8) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00530350 */
uint F_00530350(unsigned int gen_a0)
{
  GEN_ENTER(0x530350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109bf7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109bf6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bf54));
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109bf3c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) =
       (*(undefined * PTR32 (*)[1])REFP(0x109befc));
  if (*(int *)((int)this + 0x128) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc))) = *(undefined4 *)((int)this + 300);
  }
  if (*(int *)((int)this + 300) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 300) + 8))) = *(undefined4 *)((int)this + 0x128);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[1])REFP(0x109befc));
  if (*(int *)((int)this + 0x11c) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x11c) + 0xc))) = *(undefined4 *)((int)this + 0x120);
  }
  if (*(int *)((int)this + 0x120) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x120) + 8))) = *(undefined4 *)((int)this + 0x11c);
  }
  uVar1 = F_005095f0((undefined4 *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  return uVar1;
}

/* ref: FUN_005303f0 */
uint F_005303f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5303f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (this == (undefined *)0xfffffee0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)((int)this + 0x11c);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x11c);
  while ((puVar3 = puVar2, puVar1 != puVar2 && (puVar3 = puVar1, puVar1 != param_1))) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar1[3];
    }
  }
  if (this == (undefined *)0xfffffee0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)((int)this + 0x11c);
  }
  if (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_0050c620(puVar3[4],0,0);
    }
    if (puVar3[2] != 0) {
      *(undefined4 *)(puVar3[2] + 0xc) = puVar3[3];
    }
    if (puVar3[3] != 0) {
      *(undefined4 *)(puVar3[3] + 8) = puVar3[2];
    }
    *(int *)((int)this + 300) = *(int *)((int)this + 300) + -1;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*puVar3)(puVar3,1)));
  }
  return (uint)puVar2;
}

/* ref: FUN_00530500 */
uint F_00530500(unsigned int gen_a0)
{
  GEN_ENTER(0x530500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x109bfc8));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar2 = *(uint *)((int)this + 8);
  if (uVar2 != 0) {
    *(undefined4 *)(uVar2 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar2;
}

/* ref: FUN_00530560 */
uint F_00530560(unsigned int gen_a0)
{
  GEN_ENTER(0x530560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109bf2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109bf1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bf04));
  F_00509590((undefined *)((int)this + 0xc));
  iVar1 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109bf7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109bf6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bf54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109bf3c));
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x118) =
       (*(undefined * PTR32 (*)[1])REFP(0x109befc));
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) =
       (*(undefined * PTR32 (*)[1])REFP(0x109befc));
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  if ((undefined4 *)((int)this + 0x124) != (undefined4 *)0x0) {
    iVar1 = (int)this + 0x120;
  }
  *(int *)((int)this + 0x128) = (int)this + 0x114;
  *(int *)((int)this + 0x120) = iVar1;
  return (uint)this;
}

/* ref: FUN_00530610 */
uint F_00530610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x530610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  char * pcVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined1 * puVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  int * piVar9;
  undefined4 * puVar10;
  undefined1 * PTR32 * ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x38)) = this;
  (*(char * PTR32 *)(gen_frame + 0x34)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x3c)) = param_2;
  puVar3 = (undefined4 *)F_00406b90(0x5c,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x109befc))
    ;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x109bf94));
    puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x109bf8c));
    puVar3[4] = 0;
  }
  if (this == (undefined *)0xfffffeec) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)this + 0x110;
  }
  puVar3[2] = iVar6;
  puVar3[3] = *(undefined4 *)((int)this + 0x11c);
  if (*(int *)((int)this + 0x11c) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x11c) + 8))) = puVar3;
  }
  *(int *)((int)this + 300) = *(int *)((int)this + 300) + 1;
  *(undefined4 * PTR32 *)((int)this + 0x11c) = puVar3;
  pcVar1 = ((char *)(gen_frame + 0x40));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x34));
  do {
    pcVar7 = pcVar1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    if (cVar2 == '\\') {
      cVar2 = '/';
    }
    *pcVar7 = cVar2;
    pcVar1 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if (pcVar7[-1] == 'l') {
    piVar9 = (int *)0x65786c;
  }
  else {
    piVar9 = (int *)((uint)(pcVar7[-1] == 'h') * 4 + 0x657864);
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x144)),0x104,"exd/%s",((char *)(gen_frame + 0x40)));
  F_00c49908(puVar3 + 5,0x40,(*(char * PTR32 *)(gen_frame + 0x34)));
  puVar3[0x16] = param_3;
  puVar3[0x15] = (*(int * PTR32 *)(gen_frame + 0x3c));
  if ((char)param_6 == '\0') {
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x38)) == &REFG(undefined, 0x4)) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x38)) + 8;
    }
    uVar13 = 0;
    uVar12 = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = puVar4;
    ppuVar11 = &(*(undefined1 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 *)(gen_frame + 0x14)) = param_4;
    puVar4 = ((undefined1 *)(gen_frame + 0x144));
    (*(undefined4 *)(gen_frame + 0x18)) = param_5;
    puVar10 = &(*(int * PTR32 *)(gen_frame + 0x3c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
    (*(undefined2 *)(gen_frame + 0x2d)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar9;
    uVar5 = F_004ff310(&(*(undefined1 * PTR32 *)(gen_frame + 0x38)),10,0);
    uVar5 = F_00513d20(uVar5,puVar10,puVar4,ppuVar11,uVar12,uVar13);
    puVar3[4] = uVar5;
  }
  else {
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x38)) == &REFG(undefined, 0x4)) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x38)) + 8;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = param_4;
    (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = puVar4;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_5;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
    (*(undefined2 *)(gen_frame + 0x2d)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    uVar5 = F_00513e90(((undefined1 *)(gen_frame + 0x144)),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),0,0);
    puVar3[4] = uVar5;
    if ((*(int * PTR32 *)(gen_frame + 0x3c)) != (int *)0x0) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 4))((*(int * PTR32 *)(gen_frame + 0x3c)),puVar3);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return (uint)puVar3;
}

/* ref: FUN_00530850 */
uint F_00530850(unsigned int gen_a0)
{
  GEN_ENTER(0x530850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x109bfc8));
  pvVar1 = (undefined *)F_00406b90(0x134,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00530560(pvVar1);
  }
  *(uint *)((int)this + 0xc) = uVar2;
  pvVar1 = (undefined *)F_00406b90(0x414,0,0);
  if (pvVar1 != (undefined *)0x0) {
    piVar3 = (int *)F_00cb3e30(pvVar1,0);
    *(int * PTR32 *)((int)this + 0x10) = piVar3;
    ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,this);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x28))(0,this);
  return (uint)this;
}

/* ref: FUN_00530920 */
byte F_00530920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00530970 */
uint F_00530970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(uint *)(in_ecx + 4) = param_2 - 4U;
    return param_2 - 4U;
  }
  *(undefined4 *)(in_ecx + 4) = 0;
  return 0;
}

/* ref: FUN_00530990 */
uint F_00530990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(uint *)(in_ecx + 8) = param_2 - 4U;
    return param_2 - 4U;
  }
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_005309b0 */
uint F_005309b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5309b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_005309c0 */
uint F_005309c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5309c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005309d0 */
uint F_005309d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5309d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *in_ecx = param_2 + -4;
    return (uint)in_ecx;
  }
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005309f0 */
byte F_005309f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5309f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00530a10 */
uint F_00530a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00530a20 */
uint F_00530a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00530a30 */
uint F_00530a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530a30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00530a40 */
uint F_00530a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Common::Component::Environment::AllocatorInterface::vf0 */
uint F_00530a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Component::Environment::ResourceInterface::vf0 */
uint F_00530ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Component::Environment::ResourceInterface::ResourceHandleInterface::vf0 */
uint F_00530ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109bed4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Common::Component::Environment::DebugInterface::vf3 */
unsigned int F_00530b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Common::Component::Environment::DebugInterface::vf4 */
unsigned int F_00530b30(void)
{
  GEN_ENTER(0x530b30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Common::Component::Environment::DebugInterface::vf0 */
uint F_00530b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00530ba0 */
uint F_00530ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00530be0((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00530bb0 */
uint F_00530bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00530be0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Common::Component::Excel::IExcelListener::vf0 */
uint F_00530be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00530c10 */
uint F_00530c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00530c20 */
uint F_00530c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (in_ecx != -0xc) {
    *param_2 = in_ecx + 8;
    return (uint)param_2;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_00530c80 */
uint F_00530c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + -4;
  }
  *(int *)(param_1 + 8) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 8))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00530d70 */
uint F_00530d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + -4;
  }
  *(int *)(param_1 + 8) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 8))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00530da0 */
uint F_00530da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
      *((uint *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00530dd0 */
uint F_00530dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x530dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this == (undefined *)0xfffffff4) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 8;
  }
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == iVar3) {
      *param_1 = iVar3;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: LinkList_VExcelReloadEvent_Excel_Component_Common_Excel::vf0 */
uint F_00530e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: LinkList_VExdModuleResourceHandle_Exd_Component_Excel_Component::vf0 */
uint F_00530e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109befc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00530f20 */
uint F_00530f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00531000((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00530f30 */
uint F_00530f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00531000((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00530f40 */
uint F_00530f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00531000((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: Component::Exd::ExdModuleResourceHandle::vf6 */
uint F_00530f50(unsigned int gen_a0)
{
  GEN_ENTER(0x530f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x58);
}

/* ref: FUN_00530f60 */
uint F_00530f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00531030((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00530f90 */
unsigned int F_00530f90(void)
{
  GEN_ENTER(0x530f90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00530fa0 */
unsigned int F_00530fa0(void)
{
  GEN_ENTER(0x530fa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00530fb0 */
unsigned int F_00530fb0(void)
{
  GEN_ENTER(0x530fb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00530fc0 */
uint F_00530fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x530fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Exd::ExdEnvironment::vf0 */
uint F_00531000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00530350(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Exd::ExdModuleResourceHandle::vf0 */
uint F_00531030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109bf94));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x109bf8c));
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x109befc));
  if (*(int *)(this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0xc))) = *(undefined4 *)(this + 0xc);
  }
  if (*(int *)(this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8))) = *(undefined4 *)(this + 8);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x109bed4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Exd::ExdModule::vf0 */
uint F_00531080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00530500(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005310b0 */
float10 F_005310b0(float gen_a0)
{
  GEN_ENTER(0x5310b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
  return (float10)(float)fVar1;
}

/* ref: FUN_005310d0 */
unsigned int F_005310d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5310d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_005310f0 */
uint F_005310f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5310f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((char)param_2 != '\0') - 1;
  *(uint *)(in_ecx + 0x18) = uVar1;
  return uVar1;
}

/* ref: FUN_00531110 */
unsigned int F_00531110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x531110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_00531130 */
uint F_00531130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00531140 */
uint F_00531140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00531160 */
uint F_00531160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_00531170 */
uint F_00531170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x44) = param_2;
  return param_2;
}

/* ref: FUN_00531190 */
byte F_00531190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005311a0 */
uint F_005311a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5311a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_005311d0 */
uint F_005311d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5311d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005311e0 */
uint F_005311e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5311e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00531220 */
float10 F_00531220(unsigned int gen_a0)
{
  GEN_ENTER(0x531220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  if (*(char *)(in_ecx + 0x30) == '\0') {
    if (*(char *)(in_ecx + 0x80) != '\0') {
      return (float10)*(float *)(in_ecx + 0x6c);
    }
    fVar1 = (float10)*(float *)(in_ecx + 0x58);
  }
  else {
    fVar1 = (float10)*(int *)(in_ecx + 0x34);
    if (*(int *)(in_ecx + 0x34) < 0) {
      return fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
  }
  return fVar1;
}

/* ref: FUN_00531290 */
uint F_00531290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_005312b0 */
uint F_005312b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5312b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return param_1;
}

/* ref: FUN_005312e0 */
uint F_005312e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5312e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00531300 */
uint F_00531300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00531320 */
uint F_00531320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00531340 */
unsigned int F_00531340(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x531340u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c) = param_2;
  return 0;
}

/* ref: FUN_00531390 */
byte F_00531390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x41) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Control::OptionOfSetActionTimeline::vf0 */
uint F_005313c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5313c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005313f0 */
uint F_005313f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5313f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 0x150) = 0;
  *(undefined4 *)(in_ecx + 0x154) = 0;
  *(undefined4 *)(in_ecx + 0x158) = 0;
  *(undefined4 *)(in_ecx + 0x15c) = 0;
  *(undefined4 *)(in_ecx + 0x164) = 0;
  uVar1 = REFG(float, 0x1090708);
  *(undefined4 *)(in_ecx + 0x160) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0x168) = uVar1;
  return 0;
}

/* ref: FUN_00531430 */
unsigned int F_00531430(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x531430u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x168) = param_2;
  return 0;
}

/* ref: FUN_00531450 */
uint F_00531450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00531470 */
uint F_00531470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00531490 */
uint F_00531490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x20c + param_2 * 4);
}

/* ref: FUN_005314b0 */
uint F_005314b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5314b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x27c + param_2 * 4);
}

/* ref: FUN_005314f0 */
uint F_005314f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5314f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00531500 */
uint F_00531500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x50) = param_2;
  return param_2;
}

/* ref: FUN_00531520 */
uint F_00531520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x88) = param_2;
  return param_2;
}

/* ref: FUN_00531540 */
uint F_00531540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc0 + param_2 * 4);
}

/* ref: FUN_00531560 */
uint F_00531560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0xc0) = param_2;
  return param_2;
}

/* ref: FUN_005315a0 */
uint F_005315a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5315a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x150 + param_2 * 4);
}

/* ref: FUN_005315c0 */
uint F_005315c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5315c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x150) = param_2;
  return param_2;
}

/* ref: FUN_005315f0 */
uint F_005315f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5315f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x160) = param_2;
  return param_2;
}

/* ref: FUN_00531610 */
unsigned int F_00531610(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x531610u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x164) = param_2;
  return 0;
}

/* ref: FUN_00531640 */
uint F_00531640(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x531640u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x16c + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00531670 */
byte F_00531670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1a4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00531680 */
uint F_00531680(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x531680u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x1a8 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_005316a0 */
byte F_005316a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5316a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x1e0 + in_ecx);
}

/* ref: FUN_005316c0 */
byte F_005316c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5316c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x1e0 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005316e0 */
byte F_005316e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5316e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x1ee + in_ecx);
}

/* ref: FUN_00531700 */
byte F_00531700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x1ee + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00531720 */
byte F_00531720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x1fc + in_ecx);
}

/* ref: FUN_00531740 */
byte F_00531740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x1fc + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00531760 */
uint F_00531760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x20c) = param_2;
  return param_2;
}

/* ref: FUN_00531780 */
uint F_00531780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x244 + param_2 * 4);
}

/* ref: FUN_005317a0 */
uint F_005317a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5317a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x244) = param_2;
  return param_2;
}

/* ref: FUN_005317c0 */
uint F_005317c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5317c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x27c) = param_2;
  return param_2;
}

/* ref: FUN_005317e0 */
uint F_005317e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5317e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2b4) = param_2;
  return param_2;
}

/* ref: Client::Game::Control::MoveControl::MoveConfig::vf0 */
uint F_00531870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005318b0 */
uint F_005318b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5318b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00531910 */
unsigned int F_00531910(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x531910u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 4) = param_2;
  *(float *)(in_ecx + 8) = param_3;
  return 0;
}

/* ref: FUN_00531930 */
uint F_00531930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531930u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(in_ecx + 8) = *(undefined4 *)(param_2 + 8);
  return in_ecx;
}

/* ref: FUN_00531950 */
uint F_00531950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531950u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) + (float10)*(float *)(param_3 + 4))));
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) + (float10)*(float *)(param_3 + 8))));
  return param_1;
}

/* ref: FUN_00531970 */
uint F_00531970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531970u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) - (float10)*(float *)(param_3 + 4))));
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)*(float *)(param_3 + 8))));
  return param_1;
}

/* ref: FUN_00531990 */
uint F_00531990(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x531990u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(param_1 + 4) = ((float)GEN_TOF(((float10)param_3 * (float10)*(float *)(param_2 + 4))));
  *(float *)(param_1 + 8) = ((float)GEN_TOF(((float10)param_3 * (float10)*(float *)(param_2 + 8))));
  return param_1;
}

/* ref: FUN_005319b0 */
byte F_005319b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5319b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  
  uVar1 = 0xc;
  pbVar3 = param_1;
  do {
    if (*(int *)this != *(int *)pbVar3) {
      iVar2 = (uint)*(byte *)this - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)*(byte *)((int)this + 1) - (uint)pbVar3[1], iVar2 == 0))
         && (iVar2 = (uint)*(byte *)((int)this + 2) - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)*(byte *)((int)this + 3) - (uint)pbVar3[3];
      }
      return (iVar2 >> 0x1f | 1U) == 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    this = (undefined *)((int)this + 4);
  } while (3 < uVar1);
  return 1;
}

/* ref: FUN_00531a20 */
byte F_00531a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_005319b0(this,param_1);
  return bVar1 == 0;
}

/* ref: FUN_00531a40 */
float F_00531a40(unsigned int gen_a0)
{
  GEN_ENTER(0x531a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 4) *
                                      (float10)*(float *)((int)this + 4) +
                                     (float10)*(float *)((int)this + 8) *
                                     (float10)*(float *)((int)this + 8)))))));
}

/* ref: Client::Game::Control::MoveControl::SplineVector2::vf0 */
uint F_00531a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00531aa0 */
uint F_00531aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  in_ecx[1] = *(undefined4 *)(param_2 + 4);
  in_ecx[2] = *(undefined4 *)(param_2 + 8);
  return (uint)in_ecx;
}

/* ref: FUN_00531ae0 */
uint F_00531ae0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x531ae0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_00531b10 */
uint F_00531b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531b10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00531b80 */
uint F_00531b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x531b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00690d40((undefined *)((int)this + 0x10),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00531b90 */
uint F_00531b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531b90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00531c00 */
unsigned int F_00531c00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x531c00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_00531c20 */
unsigned int F_00531c20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x531c20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_00531c40 */
uint F_00531c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: Client::Game::Control::MoveControl::OptionOfSetRotateTarget::vf0 */
uint F_00531c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00531cd0 */
byte F_00531cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Control::MoveControl::OptionOfSetMoveTarget::vf0 */
uint F_00531ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00531d30 */
byte F_00531d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 7) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Control::MoveControl::OptionOfSetWarpTarget::vf0 */
uint F_00531d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c974));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00531d90 */
unsigned int F_00531d90(float gen_a0)
{
  GEN_ENTER(0x531d90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00531db0 */
unsigned int F_00531db0(float gen_a0)
{
  GEN_ENTER(0x531db0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00531dd0 */
unsigned int F_00531dd0(float gen_a0)
{
  GEN_ENTER(0x531dd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00531de0 */
float10 F_00531de0(float gen_a0)
{
  GEN_ENTER(0x531de0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(SQRT((float10)param_1)));
}

/* ref: FUN_00531e00 */
uint F_00531e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0xd < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x18 + param_2 * 4);
}

/* ref: FUN_00531e20 */
uint F_00531e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531e20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0xd < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x50 + param_2 * 4);
}

/* ref: FUN_00531e40 */
uint F_00531e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531e40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0xd < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x88 + param_2 * 4);
}

/* ref: FUN_00531e70 */
uint F_00531e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a09f30(param_2,param_1,param_3);
  return uVar1;
}

/* ref: FUN_00531e90 */
uint F_00531e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a09f70(param_2,param_1,param_3);
  return uVar1;
}

/* ref: FUN_00531eb0 */
uint F_00531eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x531eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a09fe0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00531ec0 */
uint F_00531ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x531ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a0a270(param_1);
  return uVar1;
}

/* ref: FUN_00531ed0 */
uint F_00531ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x531ed0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = F_00a5f290(param_1);
      return (uint)*(byte *)(uVar1 + 0x2eaa);
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00531f10 */
uint F_00531f10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x531f10u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_2 < 0xe) {
    fVar3 = (float10)param_3;
    fVar4 = (float10)*(float *)(param_1 + 0x16c + param_2 * 4);
    bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
    bVar2 = bVar1 || fVar4 == fVar3;
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                      CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)in_EAX));
    if (bVar1 == bVar2) {
      *(float *)(param_1 + 0x16c + param_2 * 4) = param_3;
      *(undefined1 *)(param_1 + 0x1a4) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00531f50 */
uint F_00531f50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x531f50u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_2 < 0xe) {
    fVar3 = (float10)param_3;
    fVar4 = (float10)*(float *)(param_1 + 0x1a8 + param_2 * 4);
    bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
    bVar2 = bVar1 || fVar4 == fVar3;
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                      CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)in_EAX));
    if (bVar1 == bVar2) {
      *(float *)(param_1 + 0x1a8 + param_2 * 4) = param_3;
      *(undefined1 *)(param_2 + 0x1e0 + param_1) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00531f90 */
uint F_00531f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x531f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0xe) {
    *(undefined1 *)(param_1 + 0x1ee + (int)this) = (undefined1)param_2;
    *(undefined1 *)(param_1 + 0x1fc + (int)this) = 1;
  }
  return param_1;
}

/* ref: FUN_00531fc0 */
uint F_00531fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x531fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052eaf0((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x10) + 0x88))));
  return uVar1;
}

/* ref: FUN_00531fe0 */
uint F_00531fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x531fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x141) = 0;
  uVar1 = F_0052eb00((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x10) + 0x88))));
  return uVar1;
}

/* ref: FUN_00532030 */
unsigned int F_00532030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x532030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    if (param_2 == 0) {
      *(undefined4 *)((int)this + 0x14) = 2;
    }
    uVar1 = F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar1 != 0) {
      F_00aa0750(param_1,param_2,param_3);
    }
    *(undefined4 *)((int)this + param_2 * 4 + 0x50) = param_1;
    *(undefined4 *)((int)this + param_2 * 4 + 0x88) =
         *(undefined4 *)((int)this + param_2 * 4 + 0xc0);
  }
  return 0;
}

/* ref: FUN_00532080 */
unsigned int F_00532080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x532080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (this_00 != (undefined *)0x0) {
      F_00aa7040(this_00,param_1,param_2,param_3,param_4,param_5);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_005320c0 */
uint F_005320c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5320c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b5bdd0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(param_1 + 0x88));
  *(uint *)((int)this + 0x2b4) = uVar1;
  return uVar1;
}

/* ref: FUN_00532100 */
uint F_00532100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x532100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (0xd < param_1) {
    return 0;
  }
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x50);
  if (*(int *)((int)this + param_1 * 4 + 0x18) == iVar1) {
    return *(uint *)((int)this + param_1 * 4 + 0x27c);
  }
  uVar2 = F_00ab2a20(iVar1);
  return uVar2;
}

/* ref: FUN_00532150 */
uint F_00532150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x532150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(int *)((int)this + 0x3afc) = param_1;
  if (param_1 == 0) {
    uVar1 = F_00aeaa10((undefined *)((int)this + 0x3af0),1);
  }
  else {
    uVar1 = param_1 - 1;
    if (uVar1 == 0) {
      uVar1 = F_00aeaa10((undefined *)((int)this + 0x3af0),0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_005321d0 */
unsigned int F_005321d0(void)
{
  GEN_ENTER(0x5321d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005321f0 */
byte F_005321f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5321f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x2dd2) & 0x10) == 0) && (param_1 != REFG(int, 0x1379694))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00532220 */
byte F_00532220(unsigned int gen_a0)
{
  GEN_ENTER(0x532220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a5f2b0(param_1);
  if ((uVar1 != 0) && (((*(byte *)(uVar1 + 0x2dd2) & 0x10) != 0 || (uVar1 == REFG(undefined4, 0x1379694))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00532250 */
uint F_00532250(unsigned int gen_a0)
{
  GEN_ENTER(0x532250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_00a62220(param_1);
  return uVar1;
}

/* ref: FUN_00532270 */
uint F_00532270(unsigned int gen_a0)
{
  GEN_ENTER(0x532270u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a5f2b0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00a62220(uVar1);
  return uVar1;
}

/* ref: FUN_005322a0 */
byte F_005322a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5322a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = F_00a62220(param_1);
  return (char)uVar1 == '\0';
}

/* ref: FUN_005322d0 */
byte F_005322d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5322d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1 == 3;
}

/* ref: FUN_005322f0 */
byte F_005322f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5322f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (((uVar2 == 1) || (piVar3 = (int *)F_00a5f2b0(param_1), piVar3 == (int *)0x0)) ||
     (REFG(int * PTR32, 0x1379694) == (int *)0x0)) {
    return 0;
  }
  if (REFG(int * PTR32, 0x1379694) == piVar3) {
    return 0;
  }
  bVar1 = F_00a62270(piVar3);
  if ((bVar1 == 0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3), uVar2 != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00532360 */
double F_00532360(unsigned int gen_a0)
{
  GEN_ENTER(0x532360u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  float * pfVar2;
  
  if ((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (param_1 != (undefined *)0x0)) {
    pfVar1 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    pfVar2 = (float *)F_00a5feb0(param_1);
    return (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar2[2] -
                                                                (float10)pfVar1[2]) *
                                                (float10)(float)((float10)pfVar2[2] -
                                                                (float10)pfVar1[2]) +
                                               ((float10)0 * (float10)0 +
                                               (float10)(float)((float10)*pfVar2 - (float10)*pfVar1)
                                               * (float10)(float)((float10)*pfVar2 -
                                                                 (float10)*pfVar1))))))));
  }
  return 0.0;
}

/* ref: FUN_005323f0 */
unsigned int F_005323f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5323f0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  F_00a5feb0(REFG(void * PTR32, 0x1379694));
  F_00a5feb0(param_1);
  return 0;
}

/* ref: FUN_00532440 */
byte F_00532440(void)
{
  GEN_ENTER(0x532440u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  while (((*(int *)((int)&REFG(undefined4, 0x14a9a1c) + uVar1) == 0 ||
          ((*((byte *)GEN_TOP((*(int *)((int)&REFG(undefined4, 0x14a9a1c) + uVar1) + 0x2dd2))) & 0x10) == 0)) ||
         (uVar2 = uVar2 + 1, uVar2 < 2))) {
    uVar1 = uVar1 + 4;
    if (399 < uVar1) {
      return 1 < uVar2;
    }
  }
  return 1;
}

/* ref: FUN_00532480 */
float10 F_00532480(float gen_a0)
{
  GEN_ENTER(0x532480u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  float10 fVar2;
  uint local_c;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar2 = (float10)param_1;
  if ((!(fVar1 < fVar2)) && (!(fVar2 < (float10)*(double *)&REFG(undefined, 0x109c9b8)))) {
    return fVar2;
  }
  local_c = (uint)(longlong)TRUNC(((fVar2 + fVar1) / fVar1) * (float10)*(double *)&REFG(undefined, 0x109c9b0));
  return (float10)((float)GEN_TOF((((float10)(local_c & 0x1ffffff) * fVar1) /
                          (float10)*(double *)&REFG(undefined, 0x109c9b0) - fVar1)));
}

/* ref: FUN_005324f0 */
float F_005324f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5324f0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  fVar1 = *param_1;
  fVar2 = (float10)fVar1;
  fVar3 = (float10)param_1[2];
  fVar3 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 +
                                               ((float10)0 * (float10)0 + fVar2 * fVar2)))))));
  fVar2 = (float10)0;
  if ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    return (float)fVar2;
  }
  fVar2 = F_00c4c8d0(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,
                       (float10)(float)((float10)param_1[2] / fVar3));
  fVar2 = F_00532480((float)fVar2);
  fVar2 = (float10)(float)fVar2;
  if (!(*(float *)&REFG(undefined, 0x1088114) <= fVar1)) {
    fVar2 = -fVar2;
  }
  return (float)fVar2;
}

/* ref: FUN_005325b0 */
uint F_005325b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5325b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  
  if (((char)param_4 == '\0') && ((char)param_5 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((char)param_2 == '\0') && ((char)param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar1) || (bVar1 = false, bVar2)) {
    bVar1 = true;
  }
  uVar3 = 4;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
    if (bVar1) {
      return (uint)((char)param_2 == '\0');
    }
    break;
  case 2: ;
  case 3: ;
    if (bVar1) {
      return ((char)param_4 == '\0') + 2;
    }
    break;
  case 4: ;
    if ((char)param_3 == '\0') {
      if ((char)param_4 != '\0') {
        return 2;
      }
      if ((char)param_5 == '\0') {
        if ((char)param_2 == '\0') {
          return 4;
        }
        return 0;
      }
      return 3;
    }
    goto LAB_0053265f;
  }
  if ((char)param_4 != '\0') {
    return 2;
  }
  if ((char)param_5 != '\0') {
    return 3;
  }
  if ((char)param_2 != '\0') {
    return 0;
  }
  if ((char)param_3 != '\0') {
LAB_0053265f: ;
    uVar3 = 1;
  }
  return uVar3;
}

/* ref: FUN_00532730 */
byte F_00532730(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x532730u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    param_1 = 0.0;
  }
  else {
    pfVar1 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    pfVar2 = (float *)F_00a5feb0(((undefined *)(uintptr_t)gen_fl2bits((float)(param_1))));
    param_1 = ((float)GEN_TOF((((float10)*pfVar2 - (float10)*pfVar1) * ((float10)*pfVar2 - (float10)*pfVar1)
                     + ((float10)pfVar2[2] - (float10)pfVar1[2]) *
                       ((float10)pfVar2[2] - (float10)pfVar1[2]))));
  }
  if ((float10)param_1 <= (float10)param_2 * (float10)param_2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00532790 */
byte F_00532790(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x532790u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    param_1 = 0.0;
  }
  else {
    pfVar1 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    pfVar2 = (float *)F_00a5feb0(((undefined *)(uintptr_t)gen_fl2bits((float)(param_1))));
    param_1 = ((float)GEN_TOF((((float10)*pfVar2 - (float10)*pfVar1) * ((float10)*pfVar2 - (float10)*pfVar1)
                     + ((float10)pfVar2[2] - (float10)pfVar1[2]) *
                       ((float10)pfVar2[2] - (float10)pfVar1[2]))));
  }
  if ((float10)param_1 <= (float10)param_2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00532800 */
byte F_00532800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x532800u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x0)) = *param_2;
  (*(float *)(gen_frame + 0x4)) = param_2[1];
  (*(float *)(gen_frame + 0x8)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
  F_004eede0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)),&REFG(undefined4, 0x13796a0));
  if ((*(float *)(gen_frame + 0x1c)) <= 0.0) {
    return 0;
  }
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0x1c)));
  fVar3 = (float10)(float)((float10)1 / (float10)(*(float *)(gen_frame + 0x1c)));
  fVar1 = (float)(fVar3 * (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)(fVar3 * (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 * (float10)REFG(double, 0x1094890));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar1 = (float)((float10)*(float *)&REFG(undefined, 0x13796e0) * (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)*(float *)&REFG(undefined, 0x13796e4) * (float10)fVar2);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar1 = (float)((float10)fVar1 + (float10)*(float *)&REFG(undefined, 0x13796e0));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)*(float *)&REFG(undefined, 0x13796e4) + (float10)fVar2);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  *param_1 = fVar1;
  param_1[1] = fVar2;
  return 1;
}

/* ref: FUN_00532930 */
uint F_00532930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x532930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if (((char)uVar3 != '\0') && (piVar1 = (int *)param_1[0x3b], piVar1 != (int *)0x0)) {
    pcVar2 = *(gen_code32 *)(*piVar1 + 0x60);
    (*(float *)(gen_frame + 0xc)) = param_2;
    (*(float *)(gen_frame + 0x10)) = param_2;
    (*(float *)(gen_frame + 0x14)) = param_2;
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    uVar3 = (*pcVar2)(piVar1,&(*(float *)(gen_frame + 0xc)));
  }
  return uVar3;
}

/* ref: FUN_00532990 */
byte F_00532990(unsigned int gen_a0)
{
  GEN_ENTER(0x532990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)(in_ecx + 0x44) != 0) {
    return *(byte *)(in_ecx + 0x95);
  }
  if (*(int *)(in_ecx + 0x40) != 0) {
    bVar1 = *(byte *)(in_ecx + 0x94);
  }
  return bVar1;
}

/* ref: FUN_005329b0 */
byte F_005329b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5329b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    *(byte *)((int)this + 0x95) = (byte)param_1;
    *(undefined1 *)((int)this + 0x94) = 0;
    return 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    *(undefined1 *)((int)this + 0x95) = 0;
    *(byte *)((int)this + 0x94) = (byte)param_1;
    bVar1 = (byte)param_1;
  }
  return bVar1;
}

/* ref: FUN_00532a00 */
uint F_00532a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x532a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab1290(param_1,param_2);
  *(uint *)((int)this + 0x88) = uVar1;
  return uVar1;
}

/* ref: FUN_00532a80 */
byte F_00532a80(void)
{
  GEN_ENTER(0x532a80u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  return *(byte *)(REFG(int, 0x1379694) + 0x2dd2) >> 2 & 1;
}

/* ref: FUN_00532aa0 */
unsigned int F_00532aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x532aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (((*(int *)((int)this + 0xf04) == 0) &&
      (uVar1 = *((uint *)GEN_TOP(((int)this + (param_1 + 0x2f4 + *(int *)((int)this + 0xea0) * 4) * 4))),
      uVar1 < 0x24)) && (uVar1 != *(uint *)((int)this + 0xeac))) {
    *(uint *)((int)this + 0xea8) = *(uint *)((int)this + 0xea8) | 1;
    *(uint *)((int)this + 0xeac) = uVar1;
  }
  return 0;
}

/* ref: FUN_00532ae0 */
uint F_00532ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x532ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x109c0c3),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  do {
    F_0042e430(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x109c0d1));
    pbVar5 = &REFG(undefined1, 0x109c0d2);
    pbVar2 = this;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00532b44: ;
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00532b49;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00532b44;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00532b49: ;
    if (iVar3 == 0) {
      F_00ab0230(*(undefined4 *)((int)&REFG(undefined4, 0x1306038) + uVar6),((undefined1 *)(gen_frame + 0x4)));
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
      F_00c49908(this,0x20,uVar4);
    }
    uVar6 = uVar6 + 4;
    this = (undefined *)((int)this + 0x54);
    if (0xf < uVar6) {
      uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)uVar8;
    }
  } while( true );
}

/* ref: FUN_00532ba0 */
uint F_00532ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x532ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = F_004458c0(param_1,param_2,param_3,param_4 & 0xff,1,1);
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00532bd0 */
uint F_00532bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x532bd0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint local_8;
  
  bVar1 = *(byte *)((int)param_2 + 0x1c94);
  uVar2 = 0xe0000000;
  uVar4 = 0;
  local_8 = 0xe0000000;
  if (bVar1 != 0) {
    do {
      if (local_8 != 0xe0000000) {
        return local_8;
      }
      puVar3 = (uint *)F_00ae0850(param_2,uVar4);
      if (puVar3 != (uint *)0x0) {
        uVar2 = F_004458c0(param_3,puVar3[2],puVar3[3],0,1,1);
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
        if (uVar2 == param_1) {
          local_8 = *puVar3;
        }
      }
      uVar4 = uVar4 + 1;
      uVar2 = local_8;
    } while (uVar4 < bVar1);
  }
  return uVar2;
}

/* ref: FUN_00532c50 */
uint F_00532c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x532c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((REFG(int, 0x1379694) != 0) && (param_4 != 0)) {
    *param_3 = *(undefined4 *)(REFG(int, 0x1379694) + 0x74);
    uVar5 = 1;
  }
  bVar1 = *(byte *)((int)param_1 + 0x1c94);
  uVar4 = 0;
  if (bVar1 != 0) {
    do {
      puVar2 = (undefined4 *)F_00ae0850(param_1,uVar4);
      if (((puVar2 != (undefined4 *)0x0) &&
          (uVar3 = F_004458c0(param_2,puVar2[2],puVar2[3],0,1,1), -1 < (int)uVar3)) &&
         (uVar3 < param_4)) {
        param_3[uVar3] = *puVar2;
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < bVar1);
  }
  if (param_4 <= uVar5) {
    return uVar5;
  }
  param_3[uVar5] = REFG(undefined4, 0x14ab5bc);
  return uVar5 + 1;
}

/* ref: FUN_00532cf0 */
uint F_00532cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x532cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return 0x14;
  }
  if ((char)param_3 == '\0') {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      return 0x39;
    case 1: ;
      return 0x3a;
    case 2: ;
      return 0x12;
    case 3: ;
      return 0x13;
    default: ;
      return 0x49;
    }
  }
  return 0x15;
}

/* ref: FUN_00532d80 */
uint F_00532d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x532d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  if (7 < *(uint *)((int)this + 0x20)) {
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar1 = *(uint *)((int)this + 0x20);
    *(undefined4 *)((int)this + uVar1 * 4) = param_1;
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 0x20) + 1;
  *(uint *)((int)this + 0x20) = uVar1;
  *(undefined4 *)((int)this + uVar1 * 4) = param_1;
  return uVar1;
}

/* ref: FUN_00532e50 */
uint F_00532e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x532e50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 * 7 + 0x7a + param_2;
}

/* ref: FUN_00532e70 */
uint F_00532e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x532e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c9dc));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_00532ea0 */
byte F_00532ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x532ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != *(int *)(in_ecx + 0x10)) {
    *(int *)(in_ecx + 0x10) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00532ec0 */
uint F_00532ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x532ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 3;
  case 1: ;
    return 4;
  case 2: ;
    return 5;
  case 3: ;
    return 6;
  default: ;
    return 7;
  }
}

/* ref: FUN_00532f30 */
uint F_00532f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x532f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_00533000 */
byte F_00533000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (char)((uint)param_1 >> 8) == (char)((uint)param_2 >> 8) && (char)param_1 == (char)param_2;
}

/* ref: FUN_00533030 */
uint F_00533030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(undefined4 *)((int)this + 0xc) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_00533110 */
float F_00533110(unsigned int gen_a0)
{
  GEN_ENTER(0x533110u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  undefined * pvVar2;
  float * pfVar3;
  float10 fVar4;
  float fVar5;
  
  pvVar2 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return REFG(float, 0x1097b10);
  }
  pfVar3 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
  (*(float *)(gen_frame + 0x20)) = *pfVar3;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = pfVar3[2];
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  fVar5 = (float)((float10)*param_1 - (float10)*pfVar3);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar1 = (float)((float10)param_1[2] - (float10)pfVar3[2]);
  (*(float *)(gen_frame + 0x18)) = fVar1;
  ((float *)(gen_frame + 0x0))[0] = fVar5;
  ((float *)(gen_frame + 0x0))[2] = fVar1;
  fVar5 = ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
                 ((float10)0 * (float10)0 + (float10)fVar5 * (float10)fVar5))));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  fVar5 = ((float)GEN_TOF(SQRT((float10)fVar5)));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  (*(double *)(gen_frame + 0x28)) = (double)((float10)1 - (float10)fVar5 / (float10)*(double *)&REFG(undefined, 0x1090718));
  fVar5 = F_005324f0(((float *)(gen_frame + 0x0)));
  fVar5 = ((float)GEN_TOF(((float10)fVar5 - (float10)*(float *)((int)pvVar2 + 0xb0))));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  fVar4 = F_00532480(fVar5);
  fVar5 = ((float)GEN_TOF(((fVar4 * (float10)*(double *)&REFG(undefined, 0x1080220)) / (float10)*(double *)&REFG(undefined, 0x1080228))));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  fVar5 = ((float)GEN_TOF(ABS((float10)fVar5)));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  fVar5 = (float)((float10)(*(double *)(gen_frame + 0x28)) - (float10)fVar5 / (float10)*(double *)&REFG(undefined, 0x10920c0));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  return fVar5;
}

/* ref: FUN_00533210 */
uint F_00533210(unsigned int gen_a0)
{
  GEN_ENTER(0x533210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3000;
}

/* ref: FUN_005332a0 */
uint F_005332a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5332a0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)*param_1 <= (float10)*param_2) {
    return 0xffffffff;
  }
  return 1;
}

/* ref: FUN_005332c0 */
uint F_005332c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5332c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = param_2 + 1;
  if (*in_ecx <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_005332e0 */
uint F_005332e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5332e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *(int *)((int)this + *(int *)((int)(uintptr_t)this) * 8 + 0xc) = param_1;
    uVar1 = *(uint *)this;
    *(undefined1 *)((int)this + uVar1 * 8 + 0x10) = 0;
    *(int *)this = *(int *)this + 1;
  }
  return uVar1;
}

/* ref: FUN_00533300 */
uint F_00533300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0xc + param_2 * 8;
}

/* ref: FUN_00533310 */
uint F_00533310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x533310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  
  pcVar1 = (char *)((int)this + param_1 * 8 + 0x10);
  *(byte *)((int)this + 8) =
       *(byte *)((int)this + 8) | *(char *)((int)this + param_1 * 8 + 0x10) != (char)param_2;
  *pcVar1 = (char)param_2;
  return (uint)pcVar1;
}

/* ref: Client::Game::Control::TargetSystem::TargetFilter::vf1 */
uint F_00533330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00a5f060(param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar2 != 8) {
      uVar2 = F_00a5f290(param_1);
      if (uVar2 == 0) {
        return 1;
      }
      if (*(char *)(uVar2 + 0x188) == '\x02') {
        uVar2 = F_00a62220(uVar2);
        if ((char)uVar2 != '\0') {
          return 0;
        }
      }
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00533390 */
uint F_00533390(unsigned int gen_a0)
{
  GEN_ENTER(0x533390u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  return uVar1;
}

/* ref: FUN_005333b0 */
uint F_005333b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5333b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca00));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::RayFilter::vf1 */
byte F_005333d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5333d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00a618e0(param_1);
  return bVar1;
}

/* ref: Client::Game::Control::TargetSystem::DelayedRayFilter::vf1 */
byte F_005333e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5333e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00a618e0(param_1);
  return bVar1;
}

/* ref: FUN_005333f0 */
uint F_005333f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5333f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca0c));
  in_ecx[1] = param_2;
  in_ecx[2] = (undefined4)gen_fl2bits((float)((float10)param_3 * (float10)param_3));
  return (uint)in_ecx;
}

/* ref: FUN_00533410 */
uint F_00533410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x533410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca18));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00533430 */
uint F_00533430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca24));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00533450 */
uint F_00533450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca30));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00533470 */
uint F_00533470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x533470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca3c));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00533490 */
uint F_00533490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x533490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_3;
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::OrFilter::vf1 */
uint F_005334c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5334c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4),param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8),param_1);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::Control::TargetSystem::NotFilter::vf1 */
byte F_00533500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4),param_1);
  return (char)uVar1 == '\0';
}

/* ref: FUN_00533520 */
uint F_00533520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x4c) = param_2;
  return param_2;
}

/* ref: FUN_00533600 */
uint F_00533600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x533600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = F_00ac1a20(param_2,param_3);
  bVar1 = F_00ac1510(uVar2,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00533630 */
uint F_00533630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0xfb0) == 0) {
    return 1;
  }
  uVar2 = F_00ac1a20(*(undefined4 *)((int)this + 0xfb4),*(int *)((int)this + 0xfb0));
  bVar1 = F_00ac1510(uVar2,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00533670 */
byte F_00533670(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x533670u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if (param_2 == 0.0) {
    return 0;
  }
  if (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (bVar1 = F_00532730(param_2,param_3), bVar1 == 0)) {
    return 0;
  }
  bVar1 = F_00533060((uint)gen_fl2bits(param_2),*(float *)&REFG(undefined, 0x109c740));
  return bVar1 != 0;
}

/* ref: FUN_005336d0 */
byte F_005336d0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5336d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  if (param_2 == 0.0) {
    return 0;
  }
  if (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (bVar1 = F_00532790(param_2,param_3), bVar1 == 0)) {
    return 0;
  }
  bVar1 = F_00533060((uint)gen_fl2bits(param_2),*(float *)&REFG(undefined, 0x109c740));
  return bVar1 != 0;
}

/* ref: FUN_00533750 */
uint F_00533750(unsigned int gen_a0)
{
  GEN_ENTER(0x533750u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  return uVar1;
}

/* ref: FUN_00533770 */
byte F_00533770(unsigned int gen_a0)
{
  GEN_ENTER(0x533770u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1 - 4 < 5;
}

/* ref: FUN_00533790 */
uint F_00533790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00a5f0b0(param_1,param_2);
  if (uVar2 != 0xe0000000) {
    bVar1 = F_00a66e00(&REFG(undefined, 0x14aa74c),uVar2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0xe0000000;
}

/* ref: FUN_005337c0 */
uint F_005337c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5337c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = F_00a5f2b0(param_1);
  if ((uVar1 != 0) && (uVar1 = F_00a62220(uVar1), (char)uVar1 != '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533800 */
uint F_00533800(unsigned int gen_a0)
{
  GEN_ENTER(0x533800u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  if ((char)uVar1 != '\x03') {
    return 0;
  }
  uVar1 = F_00a5f2b0(param_1);
  if ((uVar1 != 0) && (uVar1 = F_00a62220(uVar1), (char)uVar1 != '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533840 */
uint F_00533840(unsigned int gen_a0)
{
  GEN_ENTER(0x533840u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
    if ((char)uVar1 == '\x02') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533880 */
uint F_00533880(unsigned int gen_a0)
{
  GEN_ENTER(0x533880u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 1) {
    uVar1 = F_00a5f2b0(param_1);
    if (uVar1 == 0) {
      return 1;
    }
    uVar1 = F_00a62220(uVar1);
    if ((char)uVar1 == '\0') {
      return 1;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((uVar1 == 2) && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1), (char)uVar1 == '\x03')) {
    return 1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((uVar1 == 2) && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1), (char)uVar1 == '\x02')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00533900 */
byte F_00533900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533900u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0xb8))(param_2);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00a5f290(param_2);
      bVar1 = F_00a9f2c0(uVar2,param_1);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00533950 */
byte F_00533950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533950u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00a5f290(param_1);
      bVar1 = F_00a9f2c0(uVar2,param_2);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005339c0 */
uint F_005339c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5339c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x40) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x40) + 0x74)));
  }
  return 0xe0000000;
}

/* ref: FUN_005339e0 */
uint F_005339e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5339e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x40);
}

/* ref: FUN_005339f0 */
ulonglong F_005339f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5339f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 extraout_EDX = 0;
  
  if (*(int *)((int)this + 0x44) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x44))))(*(undefined4 * PTR32 *)((int)this + 0x44));
    return CONCAT44(extraout_EDX,uVar1);
  }
  return 0xe0000000;
}

/* ref: FUN_00533a10 */
uint F_00533a10(unsigned int gen_a0)
{
  GEN_ENTER(0x533a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x44) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x44) + 0x74)));
  }
  return 0xe0000000;
}

/* ref: FUN_00533a30 */
uint F_00533a30(unsigned int gen_a0)
{
  GEN_ENTER(0x533a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x44);
}

/* ref: FUN_00533b10 */
uint F_00533b10(unsigned int gen_a0)
{
  GEN_ENTER(0x533b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 extraout_EDX = 0;
  
  if (*(int *)((int)this + 0x58) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))))(*(undefined4 * PTR32 *)((int)this + 0x58));
    uVar1 = F_00a5f0b0(uVar1,extraout_EDX);
    return uVar1;
  }
  uVar1 = F_00a5f0b0(0xe0000000,0);
  return uVar1;
}

/* ref: FUN_00533b40 */
uint F_00533b40(unsigned int gen_a0)
{
  GEN_ENTER(0x533b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x58);
}

/* ref: FUN_00533b50 */
uint F_00533b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x78) = param_2;
  return param_2;
}

/* ref: FUN_00533b60 */
ulonglong F_00533b60(unsigned int gen_a0)
{
  GEN_ENTER(0x533b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  if (*(int *)((int)this + 0x44) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x44))))(*(undefined4 * PTR32 *)((int)this + 0x44));
    return CONCAT44(extraout_EDX,uVar2);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1);
    return CONCAT44(extraout_EDX_00,uVar2);
  }
  return 0xe0000000;
}

/* ref: FUN_00533b90 */
uint F_00533b90(unsigned int gen_a0)
{
  GEN_ENTER(0x533b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 extraout_EDX = 0;
  
  if (*(int *)((int)this + 0x44) == 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = F_00a5f0b0(0xe0000000,0);
      return uVar1;
    }
  }
  else {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x44);
  }
  uVar1 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
  uVar1 = F_00a5f0b0(uVar1,extraout_EDX);
  return uVar1;
}

/* ref: FUN_00533c20 */
ulonglong F_00533c20(unsigned int gen_a0)
{
  GEN_ENTER(0x533c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  if (*(int *)((int)this + 0x44) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x44))))(*(undefined4 * PTR32 *)((int)this + 0x44));
    return CONCAT44(extraout_EDX,uVar2);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1);
    return CONCAT44(extraout_EDX_00,uVar2);
  }
  return 0xe0000000;
}

/* ref: FUN_00533d10 */
uint F_00533d10(unsigned int gen_a0)
{
  GEN_ENTER(0x533d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x74) = 0;
  *(undefined4 *)(in_ecx + 0x78) = 0;
  return 0;
}

/* ref: FUN_00533d50 */
uint F_00533d50(unsigned int gen_a0)
{
  GEN_ENTER(0x533d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint in_EAX = 0;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if ((param_1 != REFG(int, 0x1379694)) && (param_1 != *(int *)(REFG(int, 0x1379694) + 0x2e00))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533d80 */
double F_00533d80(unsigned int gen_a0)
{
  GEN_ENTER(0x533d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float fVar1;
  
  fVar1 = REFG(float, 0x109c7c8);
  if (param_1 != 0) {
    if (param_1 == 1) {
      return (double)REFG(float, 0x109c7cc);
    }
    fVar1 = 0.0;
    if (param_1 == 2) {
      return (double)REFG(float, 0x109c7d0);
    }
  }
  return (double)fVar1;
}

/* ref: FUN_00533de0 */
byte F_00533de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float fVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  if (((*(int *)((int)this + 8) != 0x49) && (*(int *)((int)this + 8) == param_1)) &&
     (iVar2 = *(int *)((int)this + 4), -1 < iVar2)) {
    if (iVar2 < 2) {
      fVar1 = *(float *)this;
      dVar4 = F_00533d80(iVar2);
      bVar3 = GEN_ISNAN((double)fVar1) || GEN_ISNAN(dVar4);
      if (bVar3 != (bVar3 || (double)fVar1 == dVar4)) {
        return 1;
      }
    }
    else if ((iVar2 == 2) && (!GEN_ISNAN(*(float *)this) && !(0.0 < *(float *)this))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533e40 */
uint F_00533e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533e40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (*param_2 == param_1) {
    *param_2 = 0;
  }
  return (uint)param_2;
}

/* ref: FUN_00533e60 */
byte F_00533e60(unsigned int gen_a0)
{
  GEN_ENTER(0x533e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 8));
    if (bVar1 != 0) {
      *(undefined1 *)((int)this + 0x39) = 0;
      F_00a51200(0x3c,0,0,0,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533ea0 */
byte F_00533ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x533ea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 8) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 8));
    if (bVar1 == 0) {
      *(undefined1 *)(in_ecx + 0x38) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533ec0 */
byte F_00533ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x533ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) != 0;
}

/* ref: FUN_00533ed0 */
byte F_00533ed0(void)
{
  GEN_ENTER(0x533ed0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x2f);
  return bVar1 != 0;
}

/* ref: FUN_00533ef0 */
byte F_00533ef0(void)
{
  GEN_ENTER(0x533ef0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),3);
  return bVar1 != 0;
}

/* ref: FUN_00533f10 */
byte F_00533f10(unsigned int gen_a0)
{
  GEN_ENTER(0x533f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x10) != 0;
}

/* ref: FUN_00533f20 */
byte F_00533f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x533f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(int *)(in_ecx + 0xc) != 0) && (*(int *)(in_ecx + 0x40) == param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00533f40 */
uint F_00533f40(unsigned int gen_a0)
{
  GEN_ENTER(0x533f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x32: ;
  case 0x33: ;
    return 1;
  case 0x34: ;
  case 0x35: ;
    return 2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00533f80 */
byte F_00533f80(unsigned int gen_a0)
{
  GEN_ENTER(0x533f80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 1) && (param_1 != 2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533fa0 */
uint F_00533fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x533fa0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((*(int *)(in_ecx + 8) == 0) || (param_2 == 0)) {
    return 0;
  }
  if (param_3 == 1) {
    return *(uint *)(param_2 + 0x10);
  }
  if (param_3 != 2) {
    if (param_3 != 3) {
      return *(uint *)(param_2 + 4);
    }
    return *(uint *)(param_2 + 0x18);
  }
  return *(uint *)(param_2 + 0x14);
}

/* ref: FUN_00533fe0 */
uint F_00533fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x533fe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 1) {
    return 0x32;
  }
  if (param_1 != 2) {
    return 0;
  }
  return 0x34;
}

/* ref: FUN_00534000 */
uint F_00534000(unsigned int gen_a0)
{
  GEN_ENTER(0x534000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 1) {
    return 0x33;
  }
  if (param_1 != 2) {
    return 0;
  }
  return 0x35;
}

/* ref: FUN_00534020 */
byte F_00534020(unsigned int gen_a0)
{
  GEN_ENTER(0x534020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x33) && (param_1 != 0x35)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00534040 */
byte F_00534040(unsigned int gen_a0)
{
  GEN_ENTER(0x534040u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (uVar3 == 0) {
      uVar1 = 0x33;
    }
    else {
      if (uVar3 != 1) {
        return 0;
      }
      uVar1 = 0x35;
    }
    uVar2 = F_00ab28a0(uVar1);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 4) == param_1)) break;
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00534140 */
unsigned int F_00534140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x534140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00534150 */
uint F_00534150(unsigned int gen_a0)
{
  GEN_ENTER(0x534150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 8) != 0) {
    if (*((char *)GEN_TOP((*(int *)(in_ecx + 8) + 0x2e08))) != '\0') {
      return 3;
    }
    iVar1 = *(int *)(in_ecx + 0x10);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if ((*(int *)(in_ecx + 0xc) != 0x33) && (*(int *)(in_ecx + 0xc) != 0x35)) {
          return 1;
        }
      }
      else if (iVar1 != 2) {
        return 0;
      }
      if ((*(int *)(in_ecx + 0xc) != 0x33) && (*(int *)(in_ecx + 0xc) != 0x35)) {
        return 2;
      }
    }
  }
  return 0;
}

/* ref: FUN_005341a0 */
byte F_005341a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5341a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x3c) && (param_1 != 0x3d)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005341c0 */
byte F_005341c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5341c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab28a0(param_1);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x2d) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005341f0 */
unsigned int F_005341f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5341f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 0x40) != 0) {
      F_00aa0100(*(undefined * PTR32 *)((int)this + 8),0,param_1);
    }
    F_00aa0100(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x40),param_1);
  }
  return 0;
}

/* ref: FUN_00534230 */
uint F_00534230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x534230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00aa0350(*(undefined4 *)((int)this + 8),1,0);
  if (1 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  if ((*(int *)((int)this + 8) == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00534150(this);
    if (uVar1 == 1) {
      uVar1 = *(uint *)(param_1 + 0x10);
    }
    else if (uVar1 == 2) {
      uVar1 = *(uint *)(param_1 + 0x14);
    }
    else if (uVar1 == 3) {
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    else {
      uVar1 = *(uint *)(param_1 + 4);
    }
  }
  uVar2 = F_00ab2a20(uVar1);
  if (((char)param_2 != '\0') &&
     (uVar3 = F_00aa0210(*(undefined4 *)((int)this + 8),(uint)*(byte *)(uVar2 + 7),0),
     uVar3 == uVar1)) {
    return uVar3 & 0xffffff00;
  }
  *(undefined1 *)((int)this + 0x3b) = 1;
  if ((*(int *)((int)this + 0xc) != 0) &&
     ((uint)*(byte *)(uVar2 + 7) != *(uint *)((int)this + 0x40))) {
    F_00aa0100(*(undefined * PTR32 *)((int)this + 8),*(uint *)((int)this + 0x40),0);
  }
  uVar1 = F_00aa0040(*(undefined4 *)((int)this + 8),0,*(undefined4 *)(param_1 + 8),uVar1,
                       *(undefined4 *)(param_1 + 0xc),REFG(float, 0x1090708),0,1);
  if ((char)uVar1 != '\0') {
    *(uint *)((int)this + 0x40) = (uint)*(byte *)(uVar2 + 7);
  }
  *(undefined1 *)((int)this + 0x3b) = 0;
  return uVar1;
}

/* ref: FUN_00534310 */
uint F_00534310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x534310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa0040(*(undefined4 *)((int)this + 8),0,*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),REFG(float, 0x1090708),0,1)
  ;
  return uVar1;
}

/* ref: FUN_00534340 */
uint F_00534340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x534340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)((int)this + 0x28) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)((int)this + 0x29) = *(undefined1 *)(param_1 + 0x11);
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x18);
    *(uint *)((int)this + 0x30) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00534380 */
uint F_00534380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x534380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  if ((char)param_1 == '\0') {
    if (*(char *)((int)this_00 + 0x188) == '\x03') {
      F_00aaa5b0(this_00,1);
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else {
    F_00aaa5b0(this_00,3);
    bVar1 = F_00a9f620(*(undefined4 *)((int)this + 8));
    if (bVar1 == 0) {
      F_00aa6f20(*(undefined * PTR32 *)((int)this + 8),0,1);
    }
    else {
      F_00a7ef20(&REFG(undefined1, 0x14ab058),0,1,0);
    }
  }
  bVar1 = F_00a9f620(*(undefined4 *)((int)this + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),3,param_1);
  }
  return uVar2;
}

/* ref: FUN_00534400 */
uint F_00534400(unsigned int gen_a0)
{
  GEN_ENTER(0x534400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 == 1) {
    uVar2 = 0x33;
  }
  else {
    uVar2 = iVar1 - 2;
    if (uVar2 != 0) goto LAB_0053443d;
    uVar2 = 0x35;
  }
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar3 = F_00ab28a0(uVar2);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00534230(this,uVar3,1);
      return uVar2;
    }
  }
LAB_0053443d: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00534450 */
unsigned int F_00534450(unsigned int gen_a0)
{
  GEN_ENTER(0x534450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x20) = 0x30f;
  *(undefined4 *)(in_ecx + 0x24) = 0x317;
  *(undefined4 *)(in_ecx + 0x28) = 0x314;
  *(undefined4 *)(in_ecx + 0x48) = 0x31b;
  *(undefined4 *)(in_ecx + 0x4c) = 0x319;
  *(undefined4 *)(in_ecx + 0x50) = 0x31a;
  *(undefined4 *)(in_ecx + 0x54) = 0x318;
  return 0;
}

/* ref: FUN_005344c0 */
byte F_005344c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5344c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x18) != 0;
}

/* ref: FUN_005344d0 */
byte F_005344d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5344d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  *(undefined4 *)(in_ecx + 0x18) = 0;
  bVar1 = F_00a9fc40(*(undefined4 *)(in_ecx + 0x10));
  if ((bVar1 == 0) && (*(char *)(in_ecx + 0x60) == '\0')) {
    *(undefined4 *)(in_ecx + 0x5c) = 0;
    *(undefined4 *)(in_ecx + 100) = 0;
    *(undefined1 *)(in_ecx + 0x60) = 0;
  }
  if (*(char *)(in_ecx + 200) != '\0') {
    *(undefined1 *)(in_ecx + 200) = 0;
  }
  return bVar1;
}

/* ref: FUN_00534510 */
byte F_00534510(unsigned int gen_a0)
{
  GEN_ENTER(0x534510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x18) == 0) {
    return 0;
  }
  if ((((*(int *)(in_ecx + 0x14) == 1) && (*(int *)(in_ecx + 100) == 1)) &&
      (bVar1 = F_00a9fc40(*(undefined4 *)(in_ecx + 0x10)), bVar1 != 0)) &&
     (bVar1 = F_00a9fc50(*(undefined4 *)(in_ecx + 0x10)), bVar1 == 0)) {
    return 0;
  }
  uVar2 = F_00a9fbf0(*(undefined4 *)(in_ecx + 0x10));
  return (char)uVar2 == '\0';
}

/* ref: FUN_00534559 */
unsigned int F_00534559(void)
{
  GEN_ENTER(0x534559u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00534560 */
byte F_00534560(unsigned int gen_a0)
{
  GEN_ENTER(0x534560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
  case 5: ;
  case 8: ;
  case 0xb: ;
  case 0xd: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005345a0 */
byte F_005345a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5345a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 3: ;
  case 6: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005345e0 */
byte F_005345e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5345e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((10 < param_1) && (param_1 < 0xd)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534600 */
byte F_00534600(unsigned int gen_a0)
{
  GEN_ENTER(0x534600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((0xc < param_1) && (param_1 < 0xf)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534620 */
byte F_00534620(unsigned int gen_a0)
{
  GEN_ENTER(0x534620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((param_1 < 0xb) || (0xc < param_1)) && ((param_1 < 0xd || (0xe < param_1)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00534650 */
byte F_00534650(unsigned int gen_a0)
{
  GEN_ENTER(0x534650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 0xf;
}

/* ref: FUN_00534660 */
byte F_00534660(unsigned int gen_a0)
{
  GEN_ENTER(0x534660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 10;
}

/* ref: FUN_00534670 */
byte F_00534670(unsigned int gen_a0)
{
  GEN_ENTER(0x534670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((6 < param_1) && (param_1 < 10)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534690 */
byte F_00534690(unsigned int gen_a0)
{
  GEN_ENTER(0x534690u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((0 < param_1) && ((param_1 < 7 || (param_1 == 10)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005346b0 */
uint F_005346b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5346b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  if ((param_2 == 0xf) || (param_2 == 10)) {
    uVar3 = F_00a9f870(*(undefined4 *)(param_1 + 0x10),*(float *)(param_1 + 0x5c));
    return uVar3;
  }
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(REFG(float, 0x1090708));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (iVar2 - 0xbU < 2) {
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 0xb: ;
      uVar5 = REFG(float, 0x109c03c);
      break;
    default: ;
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 3: ;
      case 6: ;
      case 9: ;
      case 0xc: ;
      case 0xe: ;
        uVar5 = REFG(float, 0x109c7d0);
        break;
      default: ;
        goto switchD_00534742_caseD_4;
      }
    }
    (*(undefined4 *)(gen_frame + 0x18)) = uVar5;
  }
switchD_00534742_caseD_4: ;
  fVar1 = *((float *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xb0)));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar4 = F_00aed220(((float)GEN_TOF(((float10)*(float *)(param_1 + 0x5c) - (float10)fVar1))));
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  fVar4 = (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(ABS(fVar4))) - (float10)*(double *)&REFG(undefined, 0x1094620)) /
                          (float10)*(double *)&REFG(undefined, 0x1094620))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((fVar4 * (float10)*(double *)&REFG(undefined, 0x1094818) +
                    ((float10)1 - fVar4) * (float10)*(double *)&REFG(undefined, 0x109ca50))));
  uVar3 = F_00a9f850(*(undefined4 *)(param_1 + 0x10),*(float *)(param_1 + 0x5c),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  return uVar3;
}

/* ref: FUN_00534800 */
byte F_00534800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x534800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((*(char *)((int)this + 0x60) != '\0') &&
     (*(int *)((int)this + 0x14) == *(int *)((int)this + 100))) {
    F_005346b0(this,param_1);
    *(undefined1 *)((int)this + 0x60) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00534840 */
byte F_00534840(unsigned int gen_a0)
{
  GEN_ENTER(0x534840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aa0310(*(undefined * PTR32 *)((int)this + 0x10),1,0);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),1,0);
    uVar1 = F_00ab2a20(uVar1);
    if ((uVar1 != 0) && (*(char *)(uVar1 + 0xd) == '\0')) {
      return 1;
    }
  }
  uVar1 = F_00aa0310(*(undefined * PTR32 *)((int)this + 0x10),5,0);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00aa0210(*(undefined4 *)((int)this + 0x10),5,0);
    uVar1 = F_00ab2a20(uVar1);
    if ((uVar1 != 0) && (*(char *)(uVar1 + 0xd) == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005348d0 */
byte F_005348d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5348d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0xc4) != '\0') {
    return 0;
  }
  return *(int *)(in_ecx + 0x58) == 1;
}

/* ref: FUN_00534970 */
byte F_00534970(unsigned int gen_a0)
{
  GEN_ENTER(0x534970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  bool bVar1;
  
  bVar1 = GEN_ISNAN(*(float *)(in_ecx + 0xb0)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 == (bVar1 || *(float *)(in_ecx + 0xb0) == *(float *)&REFG(undefined, 0x1088114))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534990 */
uint F_00534990(unsigned int gen_a0)
{
  GEN_ENTER(0x534990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: FUN_005349a0 */
byte F_005349a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5349a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x20) != 0;
}

/* ref: FUN_005349f0 */
float10 F_005349f0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5349f0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  if ((GEN_ISNAN(param_1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_1 == *(float *)&REFG(undefined, 0x1088114))) {
    if ((float10)((float)GEN_TOF(ABS((float10)*(float *)(param_2 + 8)))) <
        (float10)((float)GEN_TOF(ABS((float10)*(float *)(param_2 + 4))))) {
      if ((float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_3 + 4) < (float10)0) {
        return (float10)0;
      }
    }
    else if ((float10)*(float *)(param_2 + 8) * (float10)*(float *)(param_3 + 8) < (float10)0) {
      return (float10)0;
    }
    if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(REFG(float, 0x109c7c8))) && !(param_1 <= REFG(float, 0x109c7c8))) {
      return (float10)(float)((float10)1 - (float10)param_1);
    }
  }
  return (float10)param_1;
}

/* ref: FUN_00534ab0 */
float10 F_00534ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x534ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  float local_8;
  
  fVar1 = *(float *)(in_ecx + 0x228);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708))) {
    return (float10)1;
  }
  if ((float10)fVar1 <= (float10)*(double *)&REFG(undefined, 0x109ca58)) {
    return (float10)0;
  }
  local_8 = (float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x10920a8));
  if ((float10)1 < (float10)local_8) {
    local_8 = REFG(float, 0x1087f04);
  }
  return (float10)local_8;
}

/* ref: FUN_00534ec0 */
uint F_00534ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x534ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(float *)(gen_frame + 0x34)) = *param_4;
  (*(float *)(gen_frame + 0x3c)) = *param_3;
  fVar8 = (float10)*param_3;
  fVar1 = (float)((float10)*param_4 - fVar8);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = param_4[1];
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x2c)) = param_3[1];
  fVar9 = (float10)param_3[1];
  fVar2 = (float)((float10)fVar2 - fVar9);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x2c)) = param_4[2];
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0x38)) = param_3[2];
  fVar10 = (float10)param_3[2];
  fVar3 = (float)((float10)param_4[2] - fVar10);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar4 = *param_2;
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar1 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2))));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar11 = (float10)fVar1;
  bVar7 = GEN_ISNAN(fVar11) || GEN_ISNAN((float10)0);
  if (bVar7 == (bVar7 || fVar11 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x0)));
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(float)((float10)fVar6 - fVar10) +
                   ((float10)(*(float *)(gen_frame + 0x4)) * (float10)(float)((float10)fVar5 - fVar9) +
                   (float10)(*(float *)(gen_frame + 0x0)) * (float10)(float)((float10)fVar4 - fVar8)))));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar8 = (float10)fVar1;
    if (!(fVar8 < (float10)0)) {
      if (!((float10)(*(float *)(gen_frame + 0x38)) < fVar8)) {
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0x0))))));
        (*(float *)(gen_frame + 0x0)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0x4))) + (float10)param_3[1])));
        (*(float *)(gen_frame + 0x4)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)param_3[2] + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0x8))))));
        (*(float *)(gen_frame + 0x8)) = fVar3;
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
        return (uint)param_1;
      }
      *param_1 = (*(float *)(gen_frame + 0x34));
      param_1[1] = (*(float *)(gen_frame + 0x30));
      param_1[2] = (*(float *)(gen_frame + 0x2c));
      return (uint)param_1;
    }
  }
  param_1[1] = param_3[1];
  fVar1 = param_3[2];
  *param_1 = (*(float *)(gen_frame + 0x3c));
  param_1[2] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_00535080 */
uint F_00535080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x535080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
  uVar1 = F_00688e90(this_00,param_1);
  return uVar1;
}

/* ref: FUN_005350a0 */
unsigned int F_005350a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5350a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
  F_00688ed0(this_00,param_1);
  return 0;
}

/* ref: FUN_005350c0 */
uint F_005350c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5350c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00688eb0(this_00,param_1);
  return uVar1;
}

/* ref: FUN_005350e0 */
unsigned int F_005350e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5350e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  
  this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
  F_00688e60(this_00,param_1,param_2);
  return 0;
}

/* ref: FUN_00535100 */
unsigned int F_00535100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x535100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if (this_00 != (undefined *)0x0) {
      F_00688ef0(this_00,param_1);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00535160 */
uint F_00535160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x535160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
  F_00689090(this_00,uVar1,param_2);
  return param_1;
}

/* ref: FUN_00535190 */
uint F_00535190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x535190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
  F_006890d0(this_00,uVar1,param_2);
  return param_1;
}

/* ref: FUN_005351c0 */
uint F_005351c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5351c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if (this_00 != (undefined *)0x0) {
      F_00689110(this_00,&(*(float *)(gen_frame + 0x0)),param_2);
      if ((float10)REFG(float, 0x1305cb4) < (float10)(*(float *)(gen_frame + 0x0))) {
        (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1305cb4);
      }
      fVar1 = ((float)GEN_TOF(-(float10)REFG(float, 0x1305cb4)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      if ((float10)(*(float *)(gen_frame + 0x4)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0x4)) = fVar1;
      }
      if ((float10)REFG(float, 0x1305cb0) < (float10)(*(float *)(gen_frame + 0x8))) {
        (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1305cb0);
      }
      fVar1 = ((float)GEN_TOF(-(float10)REFG(float, 0x1305cb0)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      if ((float10)(*(float *)(gen_frame + 0xc)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0xc)) = fVar1;
      }
      *param_1 = (*(float *)(gen_frame + 0x0));
      param_1[1] = (*(float *)(gen_frame + 0x4));
      param_1[2] = (*(float *)(gen_frame + 0x8));
      param_1[3] = (*(float *)(gen_frame + 0xc));
      return (uint)param_1;
    }
  }
  fVar1 = (*(float *)((char *)&REFG(float, 0x1375ad0) + 4));
  *param_1 = (float)REFG(float, 0x1375ad0);
  fVar2 = (float)REFG(float, 0x1375ad8);
  param_1[1] = fVar1;
  fVar1 = (*(float *)((char *)&REFG(float, 0x1375ad8) + 4));
  param_1[2] = fVar2;
  param_1[3] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_005353c0 */
float F_005353c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5353c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  float fVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if (this_00 != (undefined *)0x0) {
      fVar1 = F_00688f30(this_00,param_1);
      return fVar1;
    }
  }
  return (float)(float10)0;
}

/* ref: FUN_005353f0 */
uint F_005353f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5353f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10));
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00689180(this_00,param_1);
      return uVar1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00535420 */
uint F_00535420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x535420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) &&
     (this_00 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10)), this_00 != (undefined *)0x0)) {
    if (param_1 == 0) {
      uVar1 = F_00689180(this_00,&REFG(undefined, 0x109c890));
      return uVar1;
    }
    if (param_1 == 1) {
      uVar1 = F_00689180(this_00,&REFG(undefined, 0x109c898));
      return uVar1;
    }
    if (param_1 == 2) {
      uVar1 = F_00689180(this_00,"backbone");
      return uVar1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00535480 */
uint F_00535480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x535480u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  fVar4 = *param_1;
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x28)) = param_1[2];
  fVar2 = (float10)fVar4;
  fVar3 = (float10)param_1[2];
  fVar4 = ((float)GEN_TOF((fVar3 * fVar3 + ((float10)0 * (float10)0 + fVar2 * fVar2))));
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar2 = (float10)fVar4;
  bVar1 = GEN_ISNAN(fVar2) || GEN_ISNAN((float10)0);
  if (bVar1 == (bVar1 || fVar2 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1305c60);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1305c64);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1305c68);
    fVar4 = ((float)GEN_TOF(((float10)REFG(float, 0x1305c68) * (float10)(*(float *)(gen_frame + 0x28)) +
                   ((float10)REFG(float, 0x1305c64) * (float10)(*(float *)(gen_frame + 0x24)) +
                   (float10)REFG(float, 0x1305c60) * (float10)(*(float *)(gen_frame + 0x20))))));
    (*(float *)(gen_frame + 0x38)) = fVar4;
    fVar2 = F_00aeb350(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,fVar4);
    (*(float *)(gen_frame + 0x3c)) = (float)fVar2;
    F_0054ce40(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x20)));
    if (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 <= (*(float *)(gen_frame + 0x4)))) {
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) * (float10)REFG(double, 0x1094890));
    }
  }
  (*(float *)(gen_frame + 0x38)) = 0.0;
  fVar4 = (float)((float10)*param_1 * (float10)*param_1 + (float10)param_1[2] * (float10)param_1[2])
  ;
  (*(float *)(gen_frame + 0x34)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x34)) = fVar4;
  fVar2 = (float10)fVar4;
  bVar1 = GEN_ISNAN(fVar2) || GEN_ISNAN((float10)0);
  if (bVar1 == (bVar1 || fVar2 == (float10)0)) {
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_1[1] / fVar2);
    fVar2 = F_00aeb3a0((float)((float10)param_1[1] / fVar2));
    (*(float *)(gen_frame + 0x38)) = (float)fVar2;
  }
  else {
    fVar4 = REFG(float, 0x109ca64);
    if ((0.0 < param_1[1]) || (fVar4 = REFG(float, 0x109ca60), param_1[1] < 0.0)) goto LAB_005355cc;
  }
  fVar4 = (*(float *)(gen_frame + 0x38));
LAB_005355cc: ;
  if (param_2 != (float *)0x0) {
    *param_2 = (*(float *)(gen_frame + 0x3c));
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar4;
  }
  return (uint)param_3;
}

/* ref: FUN_00535620 */
uint F_00535620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x535620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * this;
  uint uVar1;
  
  this = *(int * PTR32 *)(param_1 + 0x10);
  if (this == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((code *)*(gen_code32 *)(*this + 0xb8))(this);
    if ((char)uVar1 == '\0') {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = F_00a5f290(this);
      uVar1 = (uint)*(byte *)(uVar1 + 0x2eaa);
    }
  }
  uVar1 = F_00a09f70(param_3,param_2,uVar1);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00535690 */
uint F_00535690(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x535690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  ((float *)(gen_frame + 0x0))[0] = (float)fVar3;
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x20)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x28)) = (float)fVar3;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  uVar1 = F_004eea10(param_1,(uint)((float *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1;
}

/* ref: FUN_00535740 */
uint F_00535740(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x535740u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  fVar7 = ((float10)GEN_TOD(fsin((float10)param_3)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar7;
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_3)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar6;
  (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
  (*(float *)(gen_frame + 0x4)) = (float)(float10)1;
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  F_004bd580(&(*(float *)(gen_frame + 0x0)));
  fVar6 = (float10)(float)fVar6;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x8)) * (float10)0 - fVar6 * (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar7 = (float10)(float)fVar7;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x0)) * fVar6 - fVar7 * (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar7 - (float10)0 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar7 = (float10)fVar2;
  fVar6 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  fVar1 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar6 * fVar6 + fVar7 * fVar7))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar7 = (float10)fVar1;
  bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)0);
  if (bVar5 == (bVar5 || fVar7 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x10)));
  }
  F_004ef1c0(((undefined1 *)(gen_frame + 0x30)),(uint)&(*(float *)(gen_frame + 0x10)),param_2);
  uVar4 = F_004eea10(param_1,(uint)((undefined1 *)(gen_frame + 0x30)));
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return uVar4;
}

/* ref: FUN_00535860 */
byte F_00535860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x535860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    return 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 == 2) {
    if ((*(undefined * PTR32 *)((int)this + 0x10) == (undefined *)0x0) ||
       (pvVar1 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10)), pvVar1 == (undefined *)0x0)) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = F_00689180(pvVar1,&REFG(undefined, 0x109c898));
    }
    if ((param_1 != uVar2) && (uVar2 = F_00535420(this,0), param_1 != uVar2)) {
      return 1;
    }
    return 0;
  }
  if (param_2 != 3) {
    return 0;
  }
  if ((*(undefined * PTR32 *)((int)this + 0x10) == (undefined *)0x0) ||
     (pvVar1 = (undefined *)F_00a5f500(*(undefined * PTR32 *)((int)this + 0x10)), pvVar1 == (undefined *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = F_00689180(pvVar1,&REFG(undefined, 0x109c898));
  }
  if (param_1 != uVar2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00535900 */
float10 F_00535900(unsigned int gen_a0)
{
  GEN_ENTER(0x535900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  float local_8;
  
  fVar1 = *((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc0)));
  local_8 = REFG(float, 0x1087f04);
  if (REFG(float, 0x1087f04) < fVar1) {
    local_8 = fVar1;
  }
  return (float10)local_8;
}

/* ref: FUN_00535930 */
unsigned int F_00535930(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x535930u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00535950 */
uint F_00535950(unsigned int gen_a0)
{
  GEN_ENTER(0x535950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    return param_1 - 1;
  }
  return 0xffffffff;
}

/* ref: FUN_00535953 */
uint F_00535953(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x535953u, gen_a0, gen_a1, 0u, 0u);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ebp + 8) != 0) {
    return *(int *)(in_ebp + 8) - 1;
  }
  return 0xffffffff;
}

