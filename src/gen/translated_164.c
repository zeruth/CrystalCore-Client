#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d3e880 */
uint F_00d3e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e8a0 */
unsigned int F_00d3e8a0(void)
{
  GEN_ENTER(0xd3e8a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e8c0 */
unsigned int F_00d3e8c0(void)
{
  GEN_ENTER(0xd3e8c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e8e0 */
unsigned int F_00d3e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d64fd0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3e900 */
uint F_00d3e900(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e900u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d64fe0(param_1);
  return uVar1;
}

/* ref: FUN_00d3e910 */
unsigned int F_00d3e910(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x70);
  }
  return 0;
}

/* ref: FUN_00d3e940 */
uint F_00d3e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d64fe0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x70);
  }
  return (uint)this;
}

/* ref: FUN_00d3e980 */
uint F_00d3e980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e990 */
uint F_00d3e990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e9c0 */
uint F_00d3e9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3e9d0 */
unsigned int F_00d3e9d0(void)
{
  GEN_ENTER(0xd3e9d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e9e0 */
unsigned int F_00d3e9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1);
  }
  *param_1 = 0;
  return 0;
}

/* ref: FUN_00d3ea00 */
uint F_00d3ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d3ea20 */
uint F_00d3ea20(void)
{
  GEN_ENTER(0xd3ea20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x1135a3c;
}

/* ref: FUN_00d3ead0 */
unsigned int F_00d3ead0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ead0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3eb30 */
uint F_00d3eb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3eb60 */
uint F_00d3eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3eb90 */
uint F_00d3eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3ebc0 */
unsigned int F_00d3ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ebc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3ebf0 */
unsigned int F_00d3ebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ebf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3ec30 */
unsigned int F_00d3ec30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ec30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3ecb0 */
uint F_00d3ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3ecf0 */
unsigned int F_00d3ecf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ecf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d3ed20 */
uint F_00d3ed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3ed60 */
unsigned int F_00d3ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 8);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3ed90 */
unsigned int F_00d3ed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 8);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 8 + iVar1 * 8) = 0;
  }
  return 0;
}

/* ref: FUN_00d3edc0 */
uint F_00d3edc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3edc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d3ee00 */
uint F_00d3ee00(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ee00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3ee30 */
unsigned int F_00d3ee30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ee30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 4);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -4);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3eea0 */
uint F_00d3eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3ef00 */
uint F_00d3ef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3ef70 */
uint F_00d3ef70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 4);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3efa0 */
uint F_00d3efa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3efa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f000 */
uint F_00d3f000(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f070 */
uint F_00d3f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f0d0 */
uint F_00d3f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f130 */
uint F_00d3f130(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f1a0 */
uint F_00d3f1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f200 */
uint F_00d3f200(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f260 */
uint F_00d3f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d3f280 */
uint F_00d3f280(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d3f2b0 */
uint F_00d3f2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x48);
  iVar3 = *(int *)((int)this + 0x4c) + -1;
  while (-1 < iVar3) {
    pvVar2 = *(undefined * PTR32 *)(iVar4 + iVar3 * 8);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 8 + iVar3 * 8) = 0;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  if ((*(uint *)((int)this + 0x50) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x48),
               *(uint *)((int)this + 0x50) * 8);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x40) + -1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar4 * 4)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -4);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  if ((*(uint *)((int)this + 0x44) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x3c),
               *(uint *)((int)this + 0x44) * 4);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(uint *)((int)this + 0x38) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),
               *(uint *)((int)this + 0x38) * 4);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((*(uint *)((int)this + 0x2c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               (*(uint *)((int)this + 0x2c) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x1c) + -1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4 * 8)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -8);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((*(uint *)((int)this + 0x20) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(uint *)((int)this + 0x20) * 8);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               (*(uint *)((int)this + 0x14) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaSkeleton::vf0 */
uint F_00d3f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3f2b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3f4a0 */
uint F_00d3f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f4c0 */
unsigned int F_00d3f4c0(void)
{
  GEN_ENTER(0xd3f4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f4e0 */
uint F_00d3f4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f4f0 */
unsigned int F_00d3f4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c)), param_2 != 0)) {
    F_00d76e30(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00d3f510 */
uint F_00d3f510(void)
{
  GEN_ENTER(0xd3f510u, 0u, 0u, 0u, 0u);
  return 0x1135b5c;
}

/* ref: FUN_00d3f520 */
uint F_00d3f520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  if (param_1 != 0) {
    F_00d76e30(this);
  }
  return (uint)this;
}

/* ref: FUN_00d3f540 */
uint F_00d3f540(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaQuantizedAnimation::vf0 */
uint F_00d3f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d78ae0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3f5b0 */
uint F_00d3f5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f5d0 */
unsigned int F_00d3f5d0(void)
{
  GEN_ENTER(0xd3f5d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f5f0 */
unsigned int F_00d3f5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d7be90(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f610 */
uint F_00d3f610(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f610u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f620 */
uint F_00d3f620(void)
{
  GEN_ENTER(0xd3f620u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  
  F_00d7be90(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f660 */
uint F_00d3f660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f670 */
uint F_00d3f670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f6a0 */
unsigned int F_00d3f6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f6a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d7e8d0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f6c0 */
uint F_00d3f6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f6d0 */
uint F_00d3f6d0(void)
{
  GEN_ENTER(0xd3f6d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d7e8d0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f700 */
unsigned int F_00d3f700(void)
{
  GEN_ENTER(0xd3f700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f710 */
uint F_00d3f710(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f710u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d3f750 */
unsigned int F_00d3f750(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00d3f790 */
uint F_00d3f790(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f7d0 */
uint F_00d3f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(*(uint *)((int)this + 8) & 0x3fffffff) * 2
              );
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00d3f840 */
uint F_00d3f840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f850 */
uint F_00d3f850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f850u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f880 */
unsigned int F_00d3f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f880u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f8a0 */
uint F_00d3f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510(param_1);
  return uVar1;
}

/* ref: FUN_00d3f8d0 */
uint F_00d3f8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f8d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d3f8f0 */
uint F_00d3f8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f8f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4));
  return uVar1;
}

/* ref: FUN_00d3f900 */
unsigned int F_00d3f900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f900u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f920 */
uint F_00d3f920(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f920u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d3e1d0(param_1);
  return uVar1;
}

/* ref: FUN_00d3f930 */
uint F_00d3f930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f940 */
uint F_00d3f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f950 */
uint F_00d3f950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f950u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f990 */
uint F_00d3f990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f990u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f9b0 */
uint F_00d3f9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f9d0 */
uint F_00d3f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f9e0 */
uint F_00d3f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[19])REFP(0x113657c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3fa00 */
uint F_00d3fa00(void)
{
  GEN_ENTER(0xd3fa00u, 0u, 0u, 0u, 0u);
  return 0x113657c;
}

/* ref: FUN_00d3fa20 */
uint F_00d3fa20(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fa20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d3fa50 */
uint F_00d3fa50(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < *(int *)((int)this + 0x3c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),
               *(int *)((int)this + 0x3c) * 4);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x30)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),
               (*(uint *)((int)this + 0x30) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar1 = F_00d3e6d0(this);
  return uVar1;
}

/* ref: hkaInterleavedUncompressedAnimation::vf0 */
uint F_00d3fad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3fa50(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3fb10 */
uint F_00d3fb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fb10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3fb20 */
uint F_00d3fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3fb40 */
unsigned int F_00d3fb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fb40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d7f240(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3fb60 */
uint F_00d3fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3fb70 */
uint F_00d3fb70(void)
{
  GEN_ENTER(0xd3fb70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  
  F_00d7f240(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3fbc0 */
uint F_00d3fbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3fbd0 */
uint F_00d3fbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fbd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x113680c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3fbf0 */
uint F_00d3fbf0(void)
{
  GEN_ENTER(0xd3fbf0u, 0u, 0u, 0u, 0u);
  return 0x113680c;
}

/* ref: FUN_00d3fc30 */
uint F_00d3fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3fc50 */
unsigned int F_00d3fc50(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3fc80 */
unsigned int F_00d3fc80(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fc80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d3fcb0 */
uint F_00d3fcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d3fcf0 */
unsigned int F_00d3fcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fcf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00d3fd60 */
uint F_00d3fd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3fdd0 */
uint F_00d3fdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3fe40 */
uint F_00d3fe40(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3fec0 */
uint F_00d3fec0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaFootstepAnalysisInfoContainer::vf0 */
uint F_00d3fef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7f590(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3ff30 */
uint F_00d3ff30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ff30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3ff50 */
uint F_00d3ff50(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ff50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3ff60 */
uint F_00d3ff60(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ff60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1136938));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3ff80 */
uint F_00d3ff80(void)
{
  GEN_ENTER(0xd3ff80u, 0u, 0u, 0u, 0u);
  return 0x1136938;
}

/* ref: FUN_00d3ffc0 */
uint F_00d3ffc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3ffc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d40030 */
uint F_00d40030(unsigned int gen_a0)
{
  GEN_ENTER(0xd40030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d40060 */
uint F_00d40060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d400a0 */
uint F_00d400a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd400a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d400e0 */
uint F_00d400e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd400e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d40120 */
uint F_00d40120(unsigned int gen_a0)
{
  GEN_ENTER(0xd40120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d40170 */
uint F_00d40170(unsigned int gen_a0)
{
  GEN_ENTER(0xd40170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d401a0 */
uint F_00d401a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd401a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf0 */
uint F_00d401f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd401f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0x38) = 0;
  if (-1 < *(int *)(this + 0x3c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x34),*(int *)(this + 0x3c) << 4);
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d40260 */
uint F_00d40260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d40280 */
uint F_00d40280(unsigned int gen_a0)
{
  GEN_ENTER(0xd40280u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d40290 */
unsigned int F_00d40290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136a34));
    F_00d91350(param_1 + 2,param_2);
    F_00d91350(param_1 + 0x15,param_2);
  }
  return 0;
}

/* ref: FUN_00d402c0 */
uint F_00d402c0(void)
{
  GEN_ENTER(0xd402c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x54)),0);
  return 0x1136a34;
}

/* ref: FUN_00d40310 */
unsigned int F_00d40310(unsigned int gen_a0)
{
  GEN_ENTER(0xd40310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d40340 */
unsigned int F_00d40340(unsigned int gen_a0)
{
  GEN_ENTER(0xd40340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d40360 */
uint F_00d40360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1136a34));
  F_00d91350(in_ecx + 2,param_2);
  F_00d91350(in_ecx + 0x15,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d40390 */
uint F_00d40390(unsigned int gen_a0)
{
  GEN_ENTER(0xd40390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d403c0 */
uint F_00d403c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd403c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x54));
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaBoneAttachment::vf0 */
uint F_00d403f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd403f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x54);
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x50));
  }
  *(undefined4 *)(this + 0x50) = 0;
  F_00d91510(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d40450 */
uint F_00d40450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d40470 */
uint F_00d40470(unsigned int gen_a0)
{
  GEN_ENTER(0xd40470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d40480 */
uint F_00d40480(unsigned int gen_a0)
{
  GEN_ENTER(0xd40480u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136a94));
  }
  return (uint)param_1;
}

/* ref: FUN_00d404a0 */
uint F_00d404a0(void)
{
  GEN_ENTER(0xd404a0u, 0u, 0u, 0u, 0u);
  return 0x1136a94;
}

/* ref: FUN_00d404c0 */
uint F_00d404c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd404c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaAnimationPreviewColorContainer::vf0 */
uint F_00d404f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd404f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d80c20(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d40530 */
uint F_00d40530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d40550 */
uint F_00d40550(unsigned int gen_a0)
{
  GEN_ENTER(0xd40550u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d40560 */
uint F_00d40560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d40580 */
uint F_00d40580(void)
{
  GEN_ENTER(0xd40580u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x1136b9c;
}

/* ref: FUN_00d405e0 */
uint F_00d405e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd405e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d40600 */
uint F_00d40600(unsigned int gen_a0)
{
  GEN_ENTER(0xd40600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d40630 */
uint F_00d40630(unsigned int gen_a0)
{
  GEN_ENTER(0xd40630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x24)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),
               (*(uint *)((int)this + 0x24) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x18)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),
               (*(uint *)((int)this + 0x18) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaAnimationBinding::vf0 */
uint F_00d406c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd406c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d40630(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaRaycastInterface::vf2 */
uint F_00d40750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd40750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkaRaycastInterface::vf1 */
uint F_00d40760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd40760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00d407f0 */
unsigned int F_00d407f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd407f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136c44));
  *(undefined2 *)((int)this + 6) = 1;
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined8 *)((int)this + 0xa0) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((int)this + 0xa8) = *(undefined8 *)(param_1 + 0xe);
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined8 *)((int)this + 0xc0) = REFG(undefined8, 0x1138ae0);
  *(undefined8 *)((int)this + 200) = REFG(undefined8, 0x1138ae8);
  *(undefined8 *)((int)this + 0xd0) = REFG(undefined8, 0x1138ae0);
  *(undefined8 *)((int)this + 0xd8) = REFG(undefined8, 0x1138ae8);
  *(undefined8 *)((int)this + 0xe0) = REFG(undefined8, 0x1138ae0);
  *(undefined8 *)((int)this + 0xe8) = REFG(undefined8, 0x1138ae8);
  return 0;
}

/* ref: FUN_00d41b10 */
byte F_00d41b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd41b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char * pcVar1;
  
  if (*(char *)((*(int *)&gen_args[0]) + 0x84) != '\0') {
    pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 100) + 4))))
                               (*(int * PTR32 *)((*(int *)&gen_args[0]) + 100),(int)&(*(undefined4 *)&gen_args[4]) + 3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),
                                *(undefined4 *)((*(int *)&gen_args[0]) + 0x80),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]))));
    return *pcVar1 != '\0';
  }
  pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 100) + 8))))
                             (*(int * PTR32 *)((*(int *)&gen_args[0]) + 100),(int)&(*(undefined4 *)&gen_args[4]) + 3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),
                              (*(undefined4 *)&gen_args[4]))));
  return *pcVar1 != '\0';
}

/* ref: FUN_00d41b80 */
uint F_00d41b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d41ba0 */
uint F_00d41ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd41ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_1 - *param_2 * *param_3;
  *(float *)((int)this + 4) = fVar7 - fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar8 - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar9 - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41bc0 */
uint F_00d41bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41bc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d41be0 */
uint F_00d41be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d41bf0 */
uint F_00d41bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41bf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = gen_movmskps(&(*(gen_v16 *)(*(undefined * PTR32 *)&gen_args[0])));
  return (uint)((uVar1 & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]));
}

/* ref: FUN_00d41c10 */
uint F_00d41c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d41c30 */
uint F_00d41c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41c30u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = *param_3 + *in_ecx;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  return (uint)param_2;
}

/* ref: FUN_00d41c50 */
uint F_00d41c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41c50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (uint)!(*param_2 <= *in_ecx);
}

/* ref: FUN_00d41c70 */
uint F_00d41c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41c70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = *in_ecx;
  return (uint)((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*param_2)) && (!(fVar1 < *param_2) && fVar1 != *param_2));
}

/* ref: FUN_00d41c90 */
uint F_00d41c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41cb0 */
uint F_00d41cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41cd0 */
uint F_00d41cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  return (uint)param_1;
}

/* ref: FUN_00d41cf0 */
uint F_00d41cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 - *param_2;
  *(float *)((int)this + 4) = fVar1 - fVar4;
  *(float *)((int)this + 8) = fVar2 - fVar5;
  *(float *)((int)this + 0xc) = fVar3 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41d10 */
uint F_00d41d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd41d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00d41d30 */
uint F_00d41d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41d40 */
uint F_00d41d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd41d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00d41d70 */
uint F_00d41d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c) = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41da0 */
uint F_00d41da0(unsigned int gen_a0)
{
  GEN_ENTER(0xd41da0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138bdc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138bd8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138bd4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138bd0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d41dc0 */
uint F_00d41dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41dc0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx <= *param_3);
  param_2[1] = -(uint)(fVar4 <= fVar1);
  param_2[2] = -(uint)(fVar5 <= fVar2);
  param_2[3] = -(uint)(fVar6 <= fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d41df0 */
uint F_00d41df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41df0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 * *in_ecx;
  fVar2 = param_3[1] * in_ecx[1];
  fVar3 = param_3[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41e20 */
byte F_00d41e20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd41e20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] - param_2[1]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - *param_2) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] - param_2[2]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(in_ecx[3] - param_2[3]) <= param_3);
  uVar2 = gen_movmskps(&(auVar1));
  return ((byte)uVar2 & 7) == 7;
}

/* ref: FUN_00d41f50 */
uint F_00d41f50(unsigned int gen_a0)
{
  GEN_ENTER(0xd41f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaFootPlacementIkSolver::vf0 */
uint F_00d41f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d41fc0 */
uint F_00d41fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41fc0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  
  memcpy(&(auVar1), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar1) ? sizeof(*in_ecx) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1136bf4) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x1136bf8) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x1136bfc) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1136c04) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1136c08) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1136c0c) * fVar4;
  *param_2 = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136bf0) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c00) * fVar8));
  param_2[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  param_2[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  param_2[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d42330 */
uint F_00d42330(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd42330u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136ca4));
  param_1[2] = param_2;
  param_1[3] = (undefined4)gen_fl2bits(param_3);
  return (uint)param_1;
}

/* ref: FUN_00d428f0 */
uint F_00d428f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd428f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d42900 */
uint F_00d42900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd42900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *in_ecx = *in_ecx;
  in_ecx[1] = in_ecx[1];
  in_ecx[2] = in_ecx[2];
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: FUN_00d42940 */
uint F_00d42940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd42940u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_3), sizeof(*param_3) < sizeof(auVar1) ? sizeof(*param_3) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136c64) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136c68) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136c6c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = *param_2 * ((*(float *)&REFG(undefined, 0x1136c60) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  param_1[1] = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  param_1[2] = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  param_1[3] = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_3;
}

/* ref: FUN_00d429b0 */
uint F_00d429b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd429b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136c64) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136c68) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136c6c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)this =
       *param_1 * ((*(float *)&REFG(undefined, 0x1136c60) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  *(float *)((int)this + 4) = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  *(float *)((int)this + 8) = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  *(float *)((int)this + 0xc) = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_2;
}

/* ref: FUN_00d42a20 */
uint F_00d42a20(unsigned int gen_a0)
{
  GEN_ENTER(0xd42a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaCcdIkSolver::vf0 */
uint F_00d42a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd42a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d42a90 */
uint F_00d42a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd42a90u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  memcpy(&(auVar9), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar9) ? sizeof(*in_ecx) : sizeof(auVar9));
  fVar1 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1136c74) - (fVar2 * fVar10) * fVar10;
  fVar6 = *(float *)&REFG(undefined, 0x1136c78) - (fVar3 * fVar11) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136c7c) - (fVar4 * fVar12) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136c84) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136c88) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136c8c) * fVar12;
  *param_2 = ~-(uint)(fVar1 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c70) - (fVar1 * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c80) * fVar8)) * fVar1);
  param_2[1] = ~-(uint)(fVar2 <= 0.0) & (uint)gen_fl2bits((fVar5 * fVar10) * fVar2);
  param_2[2] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar6 * fVar11) * fVar3);
  param_2[3] = ~-(uint)(fVar4 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar4);
  return (uint)param_2;
}

/* ref: hkaDefaultAnimationControl::vf14 */
uint F_00d42db0(unsigned int gen_a0)
{
  GEN_ENTER(0xd42db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 8)));
}

/* ref: hkaDefaultAnimationControl::vf4 */
uint F_00d42e20(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd42e20u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  float fVar1;
  int * piVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))) + 0xc))) - *(float *)(param_1 + 0x80))
          - *(float *)(param_1 + 0x7c);
  if (fVar4 <= 0.0) {
    *param_3 = *(float *)(param_1 + 8);
    *param_4 = 0;
    return (uint)param_3;
  }
  piVar2 = param_4;
  *param_3 = (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x7c)) +
             *(float *)(param_1 + 0x40) * param_2;
  *param_4 = 0;
  fVar1 = *param_3;
  if (fVar4 < fVar1) {
    iVar3 = (int)(fVar1 / fVar4);
    *param_4 = iVar3;
    if ((0 < (int)*(uint *)(param_1 + 0x4c)) &&
       (*(uint *)(param_1 + 0x4c) <= (uint)(*(int *)(param_1 + 0x44) + iVar3))) {
      *param_3 = fVar4;
      *param_4 = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + -1;
      *param_3 = *param_3 + *(float *)(param_1 + 0x7c);
      return (uint)piVar2;
    }
  }
  else {
    if (!(fVar1 < 0.0)) goto LAB_00d42f22;
    iVar3 = (int)(fVar1 / fVar4) + -1;
    *param_4 = iVar3;
    if ((0 < *(int *)(param_1 + 0x4c)) &&
       (*(int *)(param_1 + 0x4c) + 1U <= (uint)(*(int *)(param_1 + 0x48) - iVar3))) {
      *param_3 = 0.0;
      *param_4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48);
      *param_3 = *param_3 + *(float *)(param_1 + 0x7c);
      return (uint)piVar2;
    }
  }
  *param_3 = *param_3 - (float)iVar3 * fVar4;
LAB_00d42f22: ;
  *param_3 = *param_3 + *(float *)(param_1 + 0x7c);
  return (uint)piVar2;
}

/* ref: hkaDefaultAnimationControl::vf8 */
uint F_00d42f40(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x10)));
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x28)));
}

/* ref: hkaDefaultAnimationControl::vf9 */
uint F_00d42f60(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x14)));
}

/* ref: hkaDefaultAnimationControl::vf10 */
uint F_00d42f70(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x14)));
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x28)));
}

/* ref: hkaDefaultAnimationControl::vf11 */
uint F_00d42f90(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x10)));
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x24)));
}

/* ref: hkaDefaultAnimationControl::vf6 */
uint F_00d42fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd42fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0x10))))
                    (*(undefined4 *)(this + 8),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: hkaDefaultAnimationControl::vf7 */
uint F_00d42ff0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd42ff0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00d82ba0(param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)),*(float *)(param_1 + 0x7c),*(float *)(param_1 + 0x80));
  if (*(int *)(param_1 + 0x90) == 0) {
    *param_3 = (*(undefined4 *)(gen_frame + 0x0));
    param_3[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_3[2] = (*(undefined4 *)(gen_frame + 0x8));
    param_3[3] = (*(undefined4 *)(gen_frame + 0xc));
    param_3[4] = (*(undefined4 *)(gen_frame + 0x10));
    param_3[5] = (*(undefined4 *)(gen_frame + 0x14));
    param_3[6] = (*(undefined4 *)(gen_frame + 0x18));
    param_3[7] = (*(undefined4 *)(gen_frame + 0x1c));
    param_3[8] = (*(undefined4 *)(gen_frame + 0x20));
    param_3[9] = (*(undefined4 *)(gen_frame + 0x24));
    param_3[10] = (*(undefined4 *)(gen_frame + 0x28));
    param_3[0xb] = (*(undefined4 *)(gen_frame + 0x2c));
    return (uint)param_3;
  }
  uVar1 = F_00d65320(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x90) + 8))),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: hkaDefaultAnimationControl::vf3 */
unsigned int F_00d43090(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd43090u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float * pfVar4;
  code * pcVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_18;
  
  fVar10 = REFG(float, 0x1136c54);
  if (((*(int *)(param_1 + 0x28) != 0) &&
      (iVar7 = *((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))), iVar7 != 0)) &&
     (fVar10 = (*(float *)(iVar7 + 0xc) - *(float *)(param_1 + 0x80)) - *(float *)(param_1 + 0x7c),
     fVar10 < 0.0)) {
    fVar10 = 0.0;
  }
  fVar8 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 8) = fVar8;
  if (fVar8 < 0.0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (GEN_ISNAN(fVar10) != (GEN_ISNAN(fVar10) || fVar10 == 0.0)) goto LAB_00d43360;
  fVar8 = *(float *)(param_1 + 0x40) * param_2 + *(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = fVar8;
  local_18 = 0;
  if (fVar10 < fVar8) {
    local_18 = (int)(fVar8 / fVar10);
    fVar8 = fVar8 - (float)local_18 * fVar10;
    *(float *)(param_1 + 8) = fVar8;
    if (!(0.0 < fVar8)) {
      fVar8 = 0.0;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + local_18;
    *(float *)(param_1 + 8) = fVar8;
  }
  else if (fVar8 < 0.0) {
    iVar7 = (int)gen_bits2f((uint)gen_fl2bits(fVar8 / fVar10) ^ REFG(uint, 0x10920d0));
    fVar8 = (float)(iVar7 + 1) * fVar10 + fVar8;
    *(float *)(param_1 + 8) = fVar8;
    if (!(fVar8 < fVar10)) {
      fVar8 = fVar10;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar7 + 1;
    *(float *)(param_1 + 8) = fVar8;
    local_18 = -1 - iVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (0 < (int)uVar1) {
    if (*(uint *)(param_1 + 0x44) < uVar1) {
      if (*(uint *)(param_1 + 0x48) < uVar1 + 1) goto LAB_00d431c7;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      *(float *)(param_1 + 8) = fVar10;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_00d431c7: ;
  fVar10 = REFG(float, 0x1087f04);
  pfVar4 = (float *)(param_1 + 0x74);
  bVar3 = false;
  if (((!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(*pfVar4)) &&
       (!(REFG(float, 0x1087f04) < *pfVar4) && REFG(uint, 0x1087f04) != *pfVar4)) &&
     (fVar8 = *(float *)(param_1 + 0x70) * ABS(param_2) + *(float *)(param_1 + 0x74),
     bVar2 = REFG(float, 0x1087f04) <= fVar8, *(float *)(param_1 + 0x74) = fVar8, bVar2)) {
    *(float *)(param_1 + 0x74) = fVar10;
    bVar3 = true;
    *(uint *)(param_1 + 0x78) = (uint)(*(int *)(param_1 + 0x78) != 0) * 2 + 1;
  }
  if ((*(int *)(param_1 + 0x78) == 1) ||
     (pfVar4 = (float *)(param_1 + 0x60), *(int *)(param_1 + 0x78) == 0)) {
    pfVar4 = (float *)(param_1 + 0x50);
  }
  fVar10 = *pfVar4;
  fVar8 = *(float *)(param_1 + 0x74);
  fVar9 = pfVar4[1] * REFG(float, 0x1087ef8);
  *(float *)(param_1 + 0xc) =
       ((((((fVar9 - fVar10) - pfVar4[2] * REFG(float, 0x1087ef8)) + pfVar4[3]) * ((fVar8 * fVar8) * fVar8) +
         ((fVar10 * REFG(float, 0x1087ef8) - pfVar4[1] * REFG(float, 0x10adb9c)) + pfVar4[2] * REFG(float, 0x1087ef8)) *
         (fVar8 * fVar8)) + (fVar9 - fVar10 * REFG(float, 0x1087ef8)) * fVar8) + fVar10) *
       *(float *)(param_1 + 0x3c);
  if ((local_18 != 0) && (iVar7 = 0, 0 < *(int *)(param_1 + 0x88))) {
    do {
      if (local_18 < 1) {
        iVar6 = -local_18;
        pcVar5 = *((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar7 * 4))) + 4)));
      }
      else {
        pcVar5 = *((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar7 * 4)))));
        iVar6 = local_18;
      }
      (*pcVar5)(param_1,(undefined4)gen_fl2bits(param_2),iVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x88));
  }
  if ((bVar3) && (iVar7 = 0, 0 < *(int *)(param_1 + 0x88))) {
    do {
      if ((*(int *)(param_1 + 0x78) == 1) || (*(int *)(param_1 + 0x78) == 0)) {
        pcVar5 = *((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar7 * 4))) + 8)));
      }
      else {
        pcVar5 = *((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar7 * 4))) + 0xc)));
      }
      (*pcVar5)(param_1,(undefined4)gen_fl2bits(param_2));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x88));
  }
LAB_00d43360: ;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 8);
  return 0;
}

/* ref: hkaDefaultAnimationControl::vf5 */
uint F_00d43380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd43380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  uint uVar7;
  LPVOID pvVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined4 * puVar11;
  uint local_8;
  
  if (*(int *)(this + 0x90) == 0) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0xc))))
                      (*(undefined4 *)(this + 8),param_1,param_2);
    return uVar7;
  }
  iVar1 = (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))[4];
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar8 + 0xc);
  uVar7 = iVar1 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar8 + 8) < (int)uVar7) || (*(uint *)((int)pvVar8 + 0x10) < local_8 + uVar7))
  {
    local_8 = F_00d94390(pvVar8,uVar7);
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = local_8 + uVar7;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0xc))))
            (*(undefined4 *)(this + 8),local_8,param_2);
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x90) + 8))) + 0x14)));
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x90) + 0x28)));
  iVar10 = 0;
  sVar6 = 0;
  if (0 < iVar2) {
    do {
      puVar9 = ((undefined4 *)GEN_TOP((*((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x90) + 0x24))) + iVar10 * 2))) * 0x30 +
               *(int *)(iVar1 + 0x24))));
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      puVar11 = (undefined4 *)(iVar10 * 0x30 + param_1);
      *puVar11 = *puVar9;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      uVar3 = puVar9[5];
      uVar4 = puVar9[6];
      uVar5 = puVar9[7];
      puVar11[4] = puVar9[4];
      puVar11[5] = uVar3;
      puVar11[6] = uVar4;
      puVar11[7] = uVar5;
      uVar3 = puVar9[9];
      uVar4 = puVar9[10];
      uVar5 = puVar9[0xb];
      sVar6 = sVar6 + 1;
      puVar11[8] = puVar9[8];
      puVar11[9] = uVar3;
      puVar11[10] = uVar4;
      puVar11[0xb] = uVar5;
      iVar10 = (int)sVar6;
    } while (iVar10 < iVar2);
  }
  F_00d657d0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 8))),local_8,param_1,
               *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0xc))),
               *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0x18))),
               (uint)(*((char *)GEN_TOP((*(int *)(this + 0x28) + 0x28))) == '\x01'),0,0);
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar7 <= *(int *)((int)pvVar8 + 8)) && (uVar7 + local_8 == *(int *)((int)pvVar8 + 0xc))
      ) && (*(uint *)((int)pvVar8 + 0x14) != local_8)) {
    *(uint *)((int)pvVar8 + 0xc) = local_8;
    return (uint)pvVar8;
  }
  uVar7 = F_00d945c0(pvVar8,local_8,uVar7);
  return uVar7;
}

/* ref: FUN_00d43510 */
uint F_00d43510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd43510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  F_00d82c40(this,param_1);
  uVar5 = *(undefined4 *)&REFG(undefined, 0x1136ccc);
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1136cc8);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1136cc4);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1136cc0);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0x80000000;
  *(undefined4 *)((int)this + 0x50) = uVar2;
  *(undefined4 *)((int)this + 0x54) = uVar3;
  *(undefined4 *)((int)this + 0x58) = uVar4;
  *(undefined4 *)((int)this + 0x5c) = uVar5;
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1136cdc);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1136cd8);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1136cd4);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)&REFG(undefined, 0x1136cd0);
  *(undefined4 *)((int)this + 100) = uVar2;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  *(undefined4 *)((int)this + 0x6c) = uVar4;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  *(undefined4 *)((int)this + 0x90) = 0;
  if ((char)param_2 == '\0') {
    *(undefined4 *)((int)this + 0x78) = 3;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x78) = 1;
    *(undefined4 *)((int)this + 0xc) = uVar1;
  }
  *(undefined4 *)((int)this + 0x70) = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_00d435d0 */
uint F_00d435d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd435d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  if (*(undefined * PTR32 *)((int)this + 0x90) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x90));
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  if (-1 < *(int *)((int)this + 0x8c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x84),
               *(int *)((int)this + 0x8c) * 4);
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0x80000000;
  uVar1 = F_00d82db0(this);
  return uVar1;
}

/* ref: FUN_00d43640 */
uint F_00d43640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd43640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136d24));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  F_00d919e0(param_1);
  F_00d66360(param_1,param_2,(int)this + 0xc,(int)this + 0x18,(int)this + 0x24);
  return (uint)this;
}

/* ref: FUN_00d436b0 */
uint F_00d436b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd436b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136d24));
  F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x2c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               (*(uint *)((int)this + 0x2c) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               (*(uint *)((int)this + 0x20) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
                       (uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d43760 */
unsigned int F_00d43760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x90) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x90));
  }
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                                (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x30)));
    *(undefined2 *)((int)this_00 + 4) = 0x30;
    uVar2 = F_00d43640(this_00,param_1,*(undefined4 *)((int)this + 0x28));
    *(uint *)((int)this + 0x90) = uVar2;
    return 0;
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  return 0;
}

/* ref: FUN_00d437d0 */
uint F_00d437d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd437d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  F_00d82c40(this,param_1[10]);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  *(undefined4 *)((int)this + 0x8c) = 0x80000000;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(int *)((int)this + 0x3c) = param_1[0xf];
  *(int *)((int)this + 0x40) = param_1[0x10];
  *(int *)((int)this + 0x44) = param_1[0x11];
  *(int *)((int)this + 0x48) = param_1[0x12];
  iVar1 = param_1[0x15];
  iVar2 = param_1[0x16];
  iVar3 = param_1[0x17];
  *(int *)((int)this + 0x50) = param_1[0x14];
  *(int *)((int)this + 0x54) = iVar1;
  *(int *)((int)this + 0x58) = iVar2;
  *(int *)((int)this + 0x5c) = iVar3;
  iVar1 = param_1[0x19];
  iVar2 = param_1[0x1a];
  iVar3 = param_1[0x1b];
  *(int *)((int)this + 0x60) = param_1[0x18];
  *(int *)((int)this + 100) = iVar1;
  *(int *)((int)this + 0x68) = iVar2;
  *(int *)((int)this + 0x6c) = iVar3;
  *(int *)((int)this + 0x70) = param_1[0x1c];
  *(int *)((int)this + 0x74) = param_1[0x1d];
  *(int *)((int)this + 0x78) = param_1[0x1e];
  *(int *)((int)this + 0x7c) = param_1[0x1f];
  *(int *)((int)this + 0x80) = param_1[0x20];
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1);
  F_00d43760(this,uVar4);
  return (uint)this;
}

/* ref: FUN_00d438b0 */
uint F_00d438b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd438b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d438e0 */
uint F_00d438e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd438e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d43900 */
uint F_00d43900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d43910 */
uint F_00d43910(unsigned int gen_a0)
{
  GEN_ENTER(0xd43910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d43960 */
uint F_00d43960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d439a0 */
uint F_00d439a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd439a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d439e0 */
uint F_00d439e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd439e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d43a20 */
uint F_00d43a20(unsigned int gen_a0)
{
  GEN_ENTER(0xd43a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaDefaultAnimationControl::vf0 */
uint F_00d43a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d435d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d43a90 */
uint F_00d43a90(unsigned int gen_a0)
{
  GEN_ENTER(0xd43a90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaDefaultAnimationControlMapperData::vf0 */
uint F_00d43ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d436b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaAnimationControlListener::vf0 */
unsigned int F_00d43b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaAnimationControlListener::vf1 */
uint F_00d43b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00d43c70 */
unsigned int F_00d43c70(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd43c70u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float in_xmm0 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((!GEN_ISNAN(in_xmm0) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(in_xmm0 <= *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00d43c90 */
ushort F_00d43c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd43c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  
  if ((param_3 != 0) &&
     (((short)param_2 <= (short)(ushort)param_1 ||
      (*(ushort *)(param_3 + (short)(ushort)param_1 * 2) != (ushort)param_1)))) {
    uVar1 = 0;
    if (0 < (short)param_2) {
      do {
        if (*(ushort *)(param_3 + (short)uVar1 * 2) == (ushort)param_1) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while ((short)uVar1 < (short)param_2);
    }
    return 0xffff;
  }
  return (ushort)param_1;
}

/* ref: hkaAnimatedSkeleton::vf3 */
uint F_00d43ce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd43ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  int iVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtStepDelta";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 3;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar5 * 4))) + 0xc))))
                ((undefined4)gen_fl2bits(param_2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar4 + 4);
  pvVar3 = pvVar4;
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar4 + 0xc)) {
    *puVar1 = &REFG(undefined, 0x1136cb0);
    uVar2 = rdtsc();
    pvVar3 = (LPVOID)uVar2;
    puVar1[1] = pvVar3;
    *(undefined4 * PTR32 *)((int)pvVar4 + 4) = puVar1 + 3;
  }
  return (uint)pvVar3;
}

/* ref: FUN_00d43d90 */
uint F_00d43d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    while ((undefined *)*piVar2 != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)((int)this + 0x14) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != 0xffffffff) {
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
      if (*(uint *)((int)this + 0x14) != uVar1) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + *(uint *)((int)this + 0x14) * 4)));
      }
      F_00d82a00(param_1,(int)this + 8);
      uVar1 = F_00d91a80(param_1);
    }
  }
  return uVar1;
}

/* ref: FUN_00d43df0 */
uint F_00d43df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    piVar2 = *(int * PTR32 *)((int)this + 8);
    while ((undefined *)*piVar2 != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)((int)this + 0xc) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != 0xffffffff) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
      if (*(uint *)((int)this + 0xc) != uVar1) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + *(uint *)((int)this + 0xc) * 4)));
      }
      uVar1 = F_00d82a00(param_1,-(uint)(this != (undefined *)0x8) & (uint)this);
    }
  }
  return uVar1;
}

/* ref: FUN_00d43e50 */
uint F_00d43e50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd43e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar4 * 4))) + 0x28))) + 0xc)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + uVar2;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  return uVar3;
}

/* ref: FUN_00d43ea0 */
uint F_00d43ea0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd43ea0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + local_8 * 4)));
      iVar1 = *(int *)(iVar4 + 0x28);
      puVar3 = (ushort *)(param_3 + uVar5 * 0xc);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0xc) + 0x3c))))
                        (*(int * PTR32 *)(iVar1 + 0xc),*(undefined4 *)(iVar4 + 8),
                         (undefined4)gen_fl2bits(param_2));
      if ((*(int *)(iVar1 + 0x14) != 0) && (uVar5 < uVar2 + uVar5)) {
        iVar4 = (uVar2 + uVar5) - uVar5;
        do {
          *puVar3 = *((ushort *)GEN_TOP((*(int *)(iVar1 + 0x10) + (uint)*puVar3 * 2)));
          puVar3 = puVar3 + 6;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      uVar5 = uVar5 + uVar2;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x14));
  }
  return uVar5;
}

/* ref: FUN_00d43f50 */
uint F_00d43f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43f50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  bool bVar1;
  bool bVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  int * this_01;
  
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),4);
  }
  this_00 = (*(int * PTR32 *)&gen_args[1]);
  *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) * 4))) = (*(int * PTR32 *)&gen_args[1]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 1;
  F_00d919e0((*(int * PTR32 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 8;
  }
  F_00d82b40(this_00,iVar3);
  iVar3 = *(int *)((int)this_00 + 0x28);
  if (iVar3 == 0) {
    bVar2 = true;
    bVar1 = false;
    this_01 = (int *)0x0;
  }
  else {
    if (*(undefined * PTR32 *)(iVar3 + 0xc) != (undefined *)0x0) {
      F_00d919e0(*(undefined * PTR32 *)(iVar3 + 0xc));
    }
    this_01 = *(int * PTR32 *)(iVar3 + 0xc);
    bVar2 = false;
    bVar1 = true;
  }
  puVar4 = &(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = this_01;
  if ((bVar1) && (this_01 != (int *)0x0)) {
    puVar4 = (undefined4 *)F_00d91a80(this_01);
  }
  if ((bVar2) && (this_01 != (int *)0x0)) {
    puVar4 = (undefined4 *)F_00d91a80(this_01);
  }
  if (this_01 != (int *)0x0) {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*this_01 + 0x44))(this_01)));
    if ((puVar4 == (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)0x0, *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) != 0)) {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*this_01 + 0x48))(this_01,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))));
    }
    if (this_01[2] == 4) {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 1;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00d44040 */
uint F_00d44040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd44040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1094884);
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1136dac));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1136da0));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00d44090 */
uint F_00d44090(unsigned int gen_a0)
{
  GEN_ENTER(0xd44090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1136dac));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1136da0));
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      F_00d82a00(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar3 * 4))),puVar1);
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x14));
  }
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  return uVar2;
}

/* ref: FUN_00d44120 */
uint F_00d44120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd44120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  short sVar1;
  undefined4 * puVar2;
  undefined8 uVar3;
  int * piVar4;
  ushort uVar5;
  LPVOID pvVar6;
  uint uVar7;
  gen_v16 * pauVar8;
  float * pfVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float * pfVar16;
  undefined * pvVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
    *puVar2 = "LtSampCombIndividual";
    puVar2[3] = "StInit";
    uVar3 = rdtsc();
    (*(int *)(gen_frame + 0xcc)) = (int)uVar3;
    puVar2[1] = (int)uVar3;
    *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 4;
  }
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x94)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x98)) = (float *)0x0;
  (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
  (*(float * PTR32 *)(gen_frame + 0xa4)) = param_1;
  if (param_1 != (float *)0x0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = *(uint *)((int)pvVar6 + 0xc);
    uVar14 = (int)((int)(uintptr_t)param_1) * 4 + 0x7fU & 0xffffff80;
    if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
      uVar7 = F_00d94390(pvVar6,uVar14);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
    }
  }
  (*(uint *)(gen_frame + 0x94)) = uVar7;
  (*(uint *)(gen_frame + 0x9c)) = (uint)param_1 | 0x80000000;
  (*(uint *)(gen_frame + 0xa0)) = uVar7;
  if ((int)((uint)param_1 & 0x3fffffff) < (int)param_1) {
    pfVar9 = ((float *)GEN_TOP((((uint)param_1 & 0x3fffffff) * 2)));
    if ((int)pfVar9 <= (int)param_1) {
      pfVar9 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x94)),pfVar9,4);
  }
  uVar7 = 0;
  (*(float * PTR32 *)(gen_frame + 0x98)) = param_1;
  (*(uint *)(gen_frame + 0xb0)) = 0;
  (*(uint *)(gen_frame + 0xb4)) = 0;
  (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
  (*(uint *)(gen_frame + 0xc0)) = param_4;
  if (param_4 != 0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = *(uint *)((int)pvVar6 + 0xc);
    uVar14 = param_4 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
      uVar7 = F_00d94390(pvVar6,uVar14);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
    }
  }
  (*(uint *)(gen_frame + 0xb0)) = uVar7;
  (*(uint *)(gen_frame + 0xb8)) = param_4 | 0x80000000;
  (*(uint *)(gen_frame + 0xbc)) = uVar7;
  if ((int)(param_4 & 0x3fffffff) < (int)param_4) {
    uVar7 = (param_4 & 0x3fffffff) * 2;
    if ((int)uVar7 <= (int)param_4) {
      uVar7 = param_4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0xb0)),uVar7,4);
  }
  pfVar9 = (float *)0x0;
  (*(uint *)(gen_frame + 0xb4)) = param_4;
  if (param_1 != (float *)0x0) {
    pfVar16 = param_3 + 8;
    do {
      pfVar16[-8] = 0.0;
      pfVar16[-7] = 0.0;
      pfVar16[-6] = 0.0;
      pfVar16[-5] = 0.0;
      pfVar16[-4] = 0.0;
      pfVar16[-3] = 0.0;
      pfVar16[-2] = 0.0;
      pfVar16[-1] = 0.0;
      *pfVar16 = 0.0;
      pfVar16[1] = 0.0;
      pfVar16[2] = 0.0;
      pfVar16[3] = 0.0;
      *(undefined4 *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4) = 0;
      pfVar9 = (float *)((int)pfVar9 + 1);
      pfVar16 = pfVar16 + 0xc;
    } while (pfVar9 < param_1);
  }
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      *(undefined4 *)(param_6 + uVar7 * 4) = 0;
      *(undefined4 *)((*(uint *)(gen_frame + 0xb0)) + uVar7 * 4) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  (*(int *)(gen_frame + 0x84)) = 0;
  pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
  do {
    (*(int *)(gen_frame + 0x4c)) = 0;
    if (0 < *(int *)((int)pvVar17 + 0x14)) {
      do {
        iVar13 = *((int *)GEN_TOP((*(int *)((int)pvVar17 + 0x10) + (*(int *)(gen_frame + 0x4c)) * 4)));
        pfVar9 = (float *)(iVar13 + 0xc);
        if ((GEN_ISNAN(REFG(float, 0x10905c4)) || GEN_ISNAN(*pfVar9)) ||
            (REFG(float, 0x10905c4) < *pfVar9 || REFG(uint, 0x10905c4) == *pfVar9)) {
          iVar15 = *(int *)(iVar13 + 0x28);
          (*(int *)(gen_frame + 0xcc)) = iVar15;
          if ((iVar15 != 0) && (*(char *)(iVar15 + 0x28) == (*(int *)(gen_frame + 0x84)))) {
            (*(int * PTR32 *)(gen_frame + 0xac)) = *(int * PTR32 *)(iVar15 + 0xc);
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = *(uint *)((int)pvVar6 + 0xc);
            uVar10 = (int)((int)(uintptr_t)param_1) * 0x30 + 0x7fU & 0xffffff80;
            uVar7 = uVar14 + uVar10;
            if ((*(int *)((int)pvVar6 + 8) < (int)uVar10) || (*(uint *)((int)pvVar6 + 0x10) < uVar7)
               ) {
              uVar7 = F_00d94390(pvVar6,uVar10);
              (*(uint *)(gen_frame + 0x88)) = uVar7;
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
              (*(uint *)(gen_frame + 0x88)) = uVar14;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = *(uint *)((int)pvVar6 + 0xc);
            uVar11 = param_4 * 4 + 0x7f & 0xffffff80;
            uVar7 = uVar14 + uVar11;
            if ((*(int *)((int)pvVar6 + 8) < (int)uVar11) || (*(uint *)((int)pvVar6 + 0x10) < uVar7)
               ) {
              uVar7 = F_00d94390(pvVar6,uVar11);
              (*(uint *)(gen_frame + 0xa8)) = uVar7;
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
              (*(uint *)(gen_frame + 0xa8)) = uVar14;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
            if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
              *puVar2 = "StSample";
              uVar3 = rdtsc();
              puVar2[1] = (int)uVar3;
              *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
            }
            uVar7 = 0;
            (*(uint *)(gen_frame + 0x5c)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x60)) = (float *)0x0;
            (*(uint *)(gen_frame + 0x64)) = 0x80000000;
            (*(float * PTR32 *)(gen_frame + 0x6c)) = param_1;
            if (param_1 != (float *)0x0) {
              pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              uVar7 = *(uint *)((int)pvVar6 + 0xc);
              uVar14 = (int)((int)(uintptr_t)param_1) * 2 + 0x7fU & 0xffffff80;
              if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                 (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
                uVar7 = F_00d94390(pvVar6,uVar14);
              }
              else {
                *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
              }
            }
            (*(uint *)(gen_frame + 0x64)) = (uint)param_1 | 0x80000000;
            (*(uint *)(gen_frame + 0x5c)) = uVar7;
            (*(uint *)(gen_frame + 0x68)) = uVar7;
            if ((int)((uint)param_1 & 0x3fffffff) < (int)param_1) {
              pfVar9 = ((float *)GEN_TOP((((uint)param_1 & 0x3fffffff) * 2)));
              if ((int)pfVar9 <= (int)param_1) {
                pfVar9 = param_1;
              }
              F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x5c)),pfVar9,2);
            }
            uVar7 = 0;
            (*(float * PTR32 *)(gen_frame + 0x60)) = param_1;
            (*(uint *)(gen_frame + 0x70)) = 0;
            (*(uint *)(gen_frame + 0x74)) = 0;
            (*(uint *)(gen_frame + 0x78)) = 0x80000000;
            (*(uint *)(gen_frame + 0x80)) = param_4;
            if (param_4 != 0) {
              pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              uVar7 = *(uint *)((int)pvVar6 + 0xc);
              uVar14 = param_4 * 2 + 0x7f & 0xffffff80;
              if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                 (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
                uVar7 = F_00d94390(pvVar6,uVar14);
              }
              else {
                *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
              }
            }
            (*(uint *)(gen_frame + 0x78)) = param_4 | 0x80000000;
            (*(uint *)(gen_frame + 0x70)) = uVar7;
            (*(uint *)(gen_frame + 0x7c)) = uVar7;
            if ((int)(param_4 & 0x3fffffff) < (int)param_4) {
              uVar7 = (param_4 & 0x3fffffff) * 2;
              uVar14 = param_4;
              if ((int)param_4 < (int)uVar7) {
                uVar14 = uVar7;
              }
              F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x70)),uVar14,2);
            }
            pfVar9 = (float *)0x0;
            (*(uint *)(gen_frame + 0x74)) = param_4;
            if (param_1 != (float *)0x0) {
              do {
                uVar5 = F_00d43c90((uint)*(ushort *)(param_2 + (int)((int)(uintptr_t)pfVar9) * 2),
                                     (uint)*(ushort *)((*(int *)(gen_frame + 0xcc)) + 0x14),
                                     *(undefined4 *)((*(int *)(gen_frame + 0xcc)) + 0x10));
                *(ushort *)((*(uint *)(gen_frame + 0x5c)) + (int)((int)(uintptr_t)pfVar9) * 2) = uVar5;
                pfVar9 = (float *)((int)pfVar9 + 1);
              } while (pfVar9 < param_1);
            }
            uVar7 = 0;
            if (param_4 != 0) {
              do {
                uVar5 = F_00d43c90((uint)*(ushort *)(param_5 + uVar7 * 2),
                                     (uint)*(ushort *)((*(int *)(gen_frame + 0xcc)) + 0x20),
                                     *(undefined4 *)((*(int *)(gen_frame + 0xcc)) + 0x1c));
                *(ushort *)((*(uint *)(gen_frame + 0x70)) + uVar7 * 2) = uVar5;
                uVar7 = uVar7 + 1;
              } while (uVar7 < param_4);
            }
            piVar4 = (*(int * PTR32 *)(gen_frame + 0xac));
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xac)) + 0x14))
                      ((*(int * PTR32 *)(gen_frame + 0xac)),*(undefined4 *)(iVar13 + 8),(*(uint *)(gen_frame + 0x5c)),param_1,(*(uint *)(gen_frame + 0x88)));
            ((code *)*(gen_code32 *)(*piVar4 + 0x18))
                      (piVar4,*(undefined4 *)(iVar13 + 8),(*(uint *)(gen_frame + 0x70)),param_4,(*(uint *)(gen_frame + 0xa8)));
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            uVar14 = (*(uint *)(gen_frame + 0x80));
            uVar7 = (*(uint *)(gen_frame + 0x7c));
            puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
            if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
              *puVar2 = "StCombine";
              uVar3 = rdtsc();
              puVar2[1] = (int)uVar3;
              *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
            }
            (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)0x0;
            fVar39 = REFG(float, 0x10addc0);
            if (param_1 != (float *)0x0) {
              iVar15 = (int)param_3 - (*(uint *)(gen_frame + 0x88));
              (*(int *)(gen_frame + 0xcc)) = iVar15;
              pauVar8 = (gen_v16 *)((*(uint *)(gen_frame + 0x88)) + 0x10);
              pfVar9 = param_3;
              do {
                sVar1 = *(short *)((*(uint *)(gen_frame + 0x5c)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 2);
                if ((-1 < sVar1) && ((int)sVar1 < (*(int * PTR32 *)(gen_frame + 0xac))[4])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x10) + (int)sVar1))) * fVar39) *
                           *(float *)(iVar13 + 0xc);
                  if ((*(int *)(gen_frame + 0x84)) == 0) {
                    fVar26 = *(float *)(pauVar8[-1] + 4);
                    fVar25 = *(float *)(pauVar8[-1] + 8);
                    fVar28 = *(float *)(pauVar8[-1] + 0xc);
                    *pfVar9 = *(float *)pauVar8[-1] * fVar43 + *pfVar9;
                    pfVar9[1] = fVar26 * fVar43 + pfVar9[1];
                    pfVar9[2] = fVar25 * fVar43 + pfVar9[2];
                    pfVar9[3] = fVar28 * fVar43 + pfVar9[3];
                    fVar26 = *(float *)(pauVar8[1] + 4);
                    fVar25 = *(float *)(pauVar8[1] + 8);
                    fVar28 = *(float *)(pauVar8[1] + 0xc);
                    pfVar9[8] = *(float *)pauVar8[1] * fVar43 + pfVar9[8];
                    pfVar9[9] = fVar26 * fVar43 + pfVar9[9];
                    pfVar9[10] = fVar25 * fVar43 + pfVar9[10];
                    pfVar9[0xb] = fVar28 * fVar43 + pfVar9[0xb];
                    memcpy(&(auVar41), &(*pauVar8), sizeof(*pauVar8) < sizeof(auVar41) ? sizeof(*pauVar8) : sizeof(auVar41));
                    fVar26 = (*(float *)((char *)&auVar41 + 0));
                    fVar33 = (*(float *)((char *)&auVar41 + 12));
                    pfVar16 = (float *)(iVar15 + (int)pauVar8);
                    fVar34 = (*(float *)((char *)&auVar41 + 4));
                    fVar27 = (*(float *)((char *)&auVar41 + 8));
                    fVar25 = pfVar16[2] * fVar27 + *pfVar16 * fVar26;
                    fVar28 = pfVar16[3] * fVar33 + pfVar16[1] * fVar34;
                    fVar30 = *pfVar16 * fVar26 + pfVar16[2] * fVar27;
                    fVar32 = pfVar16[1] * fVar34 + pfVar16[3] * fVar33;
                    uVar18 = -(uint)(fVar28 + fVar25 < 0.0);
                    uVar19 = -(uint)(fVar25 + fVar28 < 0.0);
                    uVar20 = -(uint)(fVar32 + fVar30 < 0.0);
                    uVar21 = -(uint)(fVar30 + fVar32 < 0.0);
                    pfVar16 = (float *)(iVar15 + (int)pauVar8);
                    fVar26 = gen_bits2f(((uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) &
                                        uVar18 | ~uVar18 & (uint)gen_fl2bits(fVar26)) * fVar43 +
                             *pfVar16;
                    fVar25 = gen_bits2f(((uint)gen_fl2bits(fVar34) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) &
                                        uVar19 | ~uVar19 & (uint)gen_fl2bits(fVar34)) * fVar43 +
                             pfVar16[1];
                    fVar28 = gen_bits2f(((uint)gen_fl2bits(fVar27) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) &
                                        uVar20 | ~uVar20 & (uint)gen_fl2bits(fVar27)) * fVar43 +
                             pfVar16[2];
                    fVar33 = gen_bits2f(((uint)gen_fl2bits(fVar33) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) &
                                        uVar21 | ~uVar21 & (uint)gen_fl2bits(fVar33)) * fVar43 +
                             pfVar16[3];
                  }
                  else {
                    fVar39 = *(float *)*pauVar8;
                    fVar26 = *(float *)(*pauVar8 + 4);
                    fVar25 = *(float *)(*pauVar8 + 8);
                    fVar28 = *(float *)(*pauVar8 + 0xc);
                    fVar33 = *pfVar9;
                    fVar30 = pfVar9[1];
                    fVar32 = pfVar9[2];
                    fVar34 = pfVar9[3];
                    fVar27 = fVar39 * fVar33;
                    fVar29 = fVar26 * fVar30;
                    fVar31 = fVar25 * fVar32;
                    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)*(undefined8 *)(iVar15 + (int)pauVar8));
                    (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar15 + (int)pauVar8)
                                                 >> 0x20));
                    (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(undefined8 *)(iVar15 + 8 + (int)pauVar8));
                    fVar35 = (((fVar29 + fVar27) + fVar31) * fVar39 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar33)
                             + (fVar32 * fVar26 - fVar30 * fVar25) * fVar28;
                    fVar36 = (((fVar29 + fVar27) + fVar31) * fVar26 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar30)
                             + (fVar33 * fVar25 - fVar32 * fVar39) * fVar28;
                    fVar37 = (((fVar29 + fVar27) + fVar31) * fVar25 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar32)
                             + (fVar30 * fVar39 - fVar33 * fVar26) * fVar28;
                    fVar38 = (((fVar29 + fVar27) + fVar31) * fVar28 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar34)
                             + (fVar34 * fVar28 - fVar34 * fVar28) * fVar28;
                    fVar39 = *(float *)((int)pauVar8 + iVar15 + 0xc);
                    (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)*(undefined8 *)*pauVar8);
                    (*(float *)(gen_frame + 0x4)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)*pauVar8 >> 0x20));
                    (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)*(undefined8 *)(*pauVar8 + 8));
                    fVar26 = *(float *)pauVar8[-1];
                    fVar25 = *(float *)(pauVar8[-1] + 4);
                    fVar33 = *(float *)(pauVar8[-1] + 8);
                    fVar30 = *(float *)(pauVar8[-1] + 0xc);
                    fVar22 = (((*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x14))) + (*(float *)(gen_frame + 0x10)) * fVar28) +
                             (*(float *)(gen_frame + 0x0)) * fVar39;
                    fVar23 = (((*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x10)) - (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x18))) + (*(float *)(gen_frame + 0x14)) * fVar28) +
                             (*(float *)(gen_frame + 0x4)) * fVar39;
                    fVar24 = (((*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x14)) - (*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x10))) + (*(float *)(gen_frame + 0x18)) * fVar28) +
                             (*(float *)(gen_frame + 0x8)) * fVar39;
                    fVar32 = pfVar9[8];
                    fVar34 = pfVar9[9];
                    fVar27 = pfVar9[10];
                    fVar29 = pfVar9[0xb];
                    fVar42 = fVar39 * fVar28 -
                             (((*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x14)) + (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x10))) + (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x18)))
                    ;
                    fVar39 = *(float *)(pauVar8[1] + 4);
                    fVar28 = *(float *)(pauVar8[1] + 8);
                    fVar31 = *(float *)(pauVar8[1] + 0xc);
                    pfVar9[8] = (*(float *)pauVar8[1] * fVar32 - fVar32) * fVar43 + fVar32;
                    pfVar9[9] = (fVar39 * fVar34 - fVar34) * fVar43 + fVar34;
                    pfVar9[10] = (fVar28 * fVar27 - fVar27) * fVar43 + fVar27;
                    pfVar9[0xb] = (fVar31 * fVar29 - fVar29) * fVar43 + fVar29;
                    *pfVar9 = (((fVar35 + fVar35) + fVar26) - *pfVar9) * fVar43 + *pfVar9;
                    pfVar9[1] = (((fVar36 + fVar36) + fVar25) - pfVar9[1]) * fVar43 + pfVar9[1];
                    pfVar9[2] = (((fVar37 + fVar37) + fVar33) - pfVar9[2]) * fVar43 + pfVar9[2];
                    pfVar9[3] = (((fVar38 + fVar38) + fVar30) - pfVar9[3]) * fVar43 + pfVar9[3];
                    pfVar16 = (float *)(iVar15 + (int)pauVar8);
                    fVar39 = *pfVar16 * fVar22;
                    fVar26 = pfVar16[1] * fVar23;
                    fVar25 = pfVar16[2] * fVar24;
                    fVar28 = pfVar16[3] * fVar42;
                    (*(float *)((char *)&auVar40 + 0)) = fVar25 + fVar39;
                    (*(float *)((char *)&auVar40 + 4)) = fVar28 + fVar26;
                    (*(float *)((char *)&auVar40 + 8)) = fVar39 + fVar25;
                    (*(float *)((char *)&auVar40 + 12)) = fVar26 + fVar28;
                    uVar18 = -(uint)((*(float *)((char *)&auVar40 + 4)) + (*(float *)((char *)&auVar40 + 0)) < 0.0);
                    uVar19 = -(uint)((*(float *)((char *)&auVar40 + 0)) + (*(float *)((char *)&auVar40 + 4)) < 0.0);
                    uVar20 = -(uint)((*(float *)((char *)&auVar40 + 12)) + (*(float *)((char *)&auVar40 + 8)) < 0.0);
                    uVar21 = -(uint)((*(float *)((char *)&auVar40 + 8)) + (*(float *)((char *)&auVar40 + 12)) < 0.0);
                    fVar26 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar18 |
                                        ~uVar18 & (uint)gen_fl2bits(fVar43)) * fVar22 +
                             (*(float *)&REFG(undefined, 0x1138af0) - fVar43) * *pfVar16;
                    fVar25 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar19 |
                                        ~uVar19 & (uint)gen_fl2bits(fVar43)) * fVar23 +
                             (*(float *)&REFG(undefined, 0x1138af4) - fVar43) * pfVar16[1];
                    fVar28 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar20 |
                                        ~uVar20 & (uint)gen_fl2bits(fVar43)) * fVar24 +
                             (*(float *)&REFG(undefined, 0x1138af8) - fVar43) * pfVar16[2];
                    fVar33 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar21 |
                                        ~uVar21 & (uint)gen_fl2bits(fVar43)) * fVar42 +
                             (*(float *)&REFG(undefined, 0x1138afc) - fVar43) * pfVar16[3];
                    fVar39 = fVar28 * fVar28 + fVar26 * fVar26;
                    fVar30 = fVar33 * fVar33 + fVar25 * fVar25;
                    fVar32 = fVar26 * fVar26 + fVar28 * fVar28;
                    fVar34 = fVar25 * fVar25 + fVar33 * fVar33;
                    fVar27 = fVar30 + fVar39;
                    fVar39 = fVar39 + fVar30;
                    fVar30 = fVar34 + fVar32;
                    fVar32 = fVar32 + fVar34;
                    (*(undefined4 *)((char *)&auVar41 + 4)) = (undefined4)gen_fl2bits(fVar39);
                    (*(undefined4 *)((char *)&auVar41 + 0)) = (undefined4)gen_fl2bits(fVar27);
                    (*(undefined4 *)((char *)&auVar41 + 8)) = (undefined4)gen_fl2bits(fVar30);
                    (*(undefined4 *)((char *)&auVar41 + 12)) = (undefined4)gen_fl2bits(fVar32);
                    gen_rsqrtps(&(auVar41), &(auVar40), &(auVar41));
                    fVar34 = (*(float *)((char *)&auVar41 + 0));
                    fVar29 = (*(float *)((char *)&auVar41 + 4));
                    fVar31 = (*(float *)((char *)&auVar41 + 8));
                    fVar22 = (*(float *)((char *)&auVar41 + 12));
                    fVar26 = ((*(float *)&REFG(undefined, 0x1136d50) - (fVar34 * fVar27) * fVar34) *
                             (*(float *)&REFG(undefined, 0x1136d60) * fVar34)) * fVar26;
                    fVar25 = ((*(float *)&REFG(undefined, 0x1136d54) - (fVar29 * fVar39) * fVar29) *
                             (*(float *)&REFG(undefined, 0x1136d64) * fVar29)) * fVar25;
                    fVar28 = ((*(float *)&REFG(undefined, 0x1136d58) - (fVar31 * fVar30) * fVar31) *
                             (*(float *)&REFG(undefined, 0x1136d68) * fVar31)) * fVar28;
                    fVar33 = ((*(float *)&REFG(undefined, 0x1136d5c) - (fVar22 * fVar32) * fVar22) *
                             (*(float *)&REFG(undefined, 0x1136d6c) * fVar22)) * fVar33;
                    fVar39 = REFG(float, 0x10addc0);
                  }
                  pfVar16 = (float *)(iVar15 + (int)pauVar8);
                  *pfVar16 = fVar26;
                  pfVar16[1] = fVar25;
                  pfVar16[2] = fVar28;
                  pfVar16[3] = fVar33;
                  *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 4) =
                       *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 4) + fVar43;
                }
                pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) + 1);
                pauVar8 = pauVar8 + 3;
                pfVar9 = pfVar9 + 0xc;
                (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
              } while (pfVar16 < param_1);
            }
            uVar18 = 0;
            if (3 < (int)param_4) {
              (*(int *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0xa8)) - param_6;
              iVar15 = -param_6;
              (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((*(uint *)(gen_frame + 0xa8)) + 0xc);
              pfVar9 = (float *)(param_6 + 4);
              do {
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  pfVar9[-1] = (*(float * PTR32 *)(gen_frame + 0xc8))[-3] * fVar43 + pfVar9[-1];
                  *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15 + -4) =
                       fVar43 + *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15 + -4);
                }
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + 2 + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  *pfVar9 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xa8)) - param_6) + (int)pfVar9))) * fVar43 + *pfVar9;
                  *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15) =
                       *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15) + fVar43;
                }
                sVar1 = *(short *)((*(uint *)(gen_frame + 0x70)) + 4 + uVar18 * 2);
                if ((-1 < sVar1) && ((int)sVar1 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)sVar1))) * fVar39) *
                           *(float *)(iVar13 + 0xc);
                  pfVar9[1] = (*(float * PTR32 *)(gen_frame + 0xc8))[-1] * fVar43 + pfVar9[1];
                  *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (4 - param_6)))) =
                       fVar43 + *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (4 - param_6))));
                }
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + 6 + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  pfVar9[2] = *(*(float * PTR32 *)(gen_frame + 0xc8)) * fVar43 + pfVar9[2];
                  *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (8 - param_6)))) =
                       fVar43 + *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (8 - param_6))));
                }
                (*(float * PTR32 *)(gen_frame + 0xc8)) = (*(float * PTR32 *)(gen_frame + 0xc8)) + 4;
                uVar18 = uVar18 + 4;
                pfVar9 = pfVar9 + 4;
              } while (uVar18 < param_4 - 3);
            }
            if (uVar18 < param_4) {
              pfVar9 = (float *)(param_6 + uVar18 * 4);
              (*(int *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0xa8)) - param_6;
              do {
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  *pfVar9 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xa8)) - param_6) + (int)pfVar9))) * fVar43 + *pfVar9;
                  *(float *)((*(uint *)(gen_frame + 0xb0)) + uVar18 * 4) = fVar43 + *(float *)((*(uint *)(gen_frame + 0xb0)) + uVar18 * 4);
                }
                uVar18 = uVar18 + 1;
                pfVar9 = pfVar9 + 1;
              } while (uVar18 < param_4);
            }
            if ((*(uint *)(gen_frame + 0x7c)) == (*(uint *)(gen_frame + 0x70))) {
              (*(uint *)(gen_frame + 0x74)) = 0;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = uVar14 * 2 + 0x7f & 0xffffff80;
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
              F_00d945c0(pvVar6,uVar7,uVar14);
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
            }
            (*(uint *)(gen_frame + 0x74)) = 0;
            if (-1 < (int)(*(uint *)(gen_frame + 0x78))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x70)),((*(uint *)(gen_frame + 0x78)) & 0x3fffffff) * 2);
            }
            pfVar9 = (*(float * PTR32 *)(gen_frame + 0x6c));
            uVar7 = (*(uint *)(gen_frame + 0x68));
            (*(uint *)(gen_frame + 0x70)) = 0;
            (*(uint *)(gen_frame + 0x78)) = 0x80000000;
            if ((*(uint *)(gen_frame + 0x68)) == (*(uint *)(gen_frame + 0x5c))) {
              (*(float * PTR32 *)(gen_frame + 0x60)) = (float *)0x0;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = (int)((int)(uintptr_t)pfVar9) * 2 + 0x7fU & 0xffffff80;
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
              F_00d945c0(pvVar6,uVar7,uVar14);
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
            }
            (*(float * PTR32 *)(gen_frame + 0x60)) = (float *)0x0;
            if (-1 < (int)(*(uint *)(gen_frame + 0x64))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x5c)),((*(uint *)(gen_frame + 0x64)) & 0x3fffffff) * 2);
            }
            (*(uint *)(gen_frame + 0x5c)) = 0;
            (*(uint *)(gen_frame + 0x64)) = 0x80000000;
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar11) ||
                (uVar11 + (*(uint *)(gen_frame + 0xa8)) != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == (*(uint *)(gen_frame + 0xa8)))) {
              F_00d945c0(pvVar6,(*(uint *)(gen_frame + 0xa8)),uVar11);
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = (*(uint *)(gen_frame + 0xa8));
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar10) ||
                (uVar10 + (*(uint *)(gen_frame + 0x88)) != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == (*(uint *)(gen_frame + 0x88)))) {
              F_00d945c0(pvVar6,(*(uint *)(gen_frame + 0x88)),uVar10);
              pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = (*(uint *)(gen_frame + 0x88));
              pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
            }
          }
        }
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 1;
      } while ((*(int *)(gen_frame + 0x4c)) < *(int *)((int)pvVar17 + 0x14));
    }
    if ((*(int *)(gen_frame + 0x84)) == 0) {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
      if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
        *puVar2 = "StReferencePose";
        uVar3 = rdtsc();
        puVar2[1] = (int)uVar3;
        *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
      }
      if (((!GEN_ISNAN(*(float *)((int)pvVar17 + 0x20)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
           !(*(float *)((int)pvVar17 + 0x20) <= *(float *)&REFG(undefined, 0x1088114))) &&
         (pfVar9 = (float *)0x0, param_1 != (float *)0x0)) {
        pfVar16 = param_3 + 4;
        do {
          fVar39 = *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4);
          if (fVar39 <= *(float *)((int)pvVar17 + 0x20)) {
            fVar39 = *(float *)((int)pvVar17 + 0x20) - fVar39;
            pfVar12 = ((float *)GEN_TOP((*(short *)(param_2 + (int)((int)(uintptr_t)pfVar9) * 2) * 0x30 +
                               *((int *)GEN_TOP((*(int *)((int)pvVar17 + 0x1c) + 0x24))))));
            fVar43 = pfVar12[1];
            fVar26 = pfVar12[2];
            fVar25 = pfVar12[3];
            pfVar16[-4] = fVar39 * *pfVar12 + pfVar16[-4];
            pfVar16[-3] = fVar39 * fVar43 + pfVar16[-3];
            pfVar16[-2] = fVar39 * fVar26 + pfVar16[-2];
            pfVar16[-1] = fVar39 * fVar25 + pfVar16[-1];
            fVar43 = pfVar12[9];
            fVar26 = pfVar12[10];
            fVar25 = pfVar12[0xb];
            pfVar16[4] = pfVar12[8] * fVar39 + pfVar16[4];
            pfVar16[5] = fVar43 * fVar39 + pfVar16[5];
            pfVar16[6] = fVar26 * fVar39 + pfVar16[6];
            pfVar16[7] = fVar25 * fVar39 + pfVar16[7];
            fVar43 = pfVar12[4];
            fVar26 = pfVar12[5];
            fVar25 = pfVar12[6];
            fVar28 = pfVar12[7];
            fVar33 = pfVar16[2] * fVar25 + *pfVar16 * fVar43;
            fVar30 = pfVar16[3] * fVar28 + pfVar16[1] * fVar26;
            fVar32 = *pfVar16 * fVar43 + pfVar16[2] * fVar25;
            fVar34 = pfVar16[1] * fVar26 + pfVar16[3] * fVar28;
            uVar7 = -(uint)(fVar30 + fVar33 < 0.0);
            uVar14 = -(uint)(fVar33 + fVar30 < 0.0);
            uVar10 = -(uint)(fVar34 + fVar32 < 0.0);
            uVar11 = -(uint)(fVar32 + fVar34 < 0.0);
            uVar18 = (uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
            uVar19 = (uint)gen_fl2bits(fVar25) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
            uVar20 = (uint)gen_fl2bits(fVar28) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
            *pfVar16 = gen_bits2f(((uint)gen_fl2bits(fVar43) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar7 |
                                  ~uVar7 & (uint)gen_fl2bits(fVar43)) * fVar39 + *pfVar16;
            pfVar16[1] = gen_bits2f(uVar18 & uVar14 | ~uVar14 & (uint)gen_fl2bits(fVar26)) * fVar39
                         + pfVar16[1];
            pfVar16[2] = gen_bits2f(uVar19 & uVar10 | ~uVar10 & (uint)gen_fl2bits(fVar25)) * fVar39
                         + pfVar16[2];
            pfVar16[3] = gen_bits2f(uVar20 & uVar11 | ~uVar11 & (uint)gen_fl2bits(fVar28)) * fVar39
                         + pfVar16[3];
            *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4) = fVar39 + *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4)
            ;
            pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
          }
          pfVar9 = (float *)((int)pfVar9 + 1);
          pfVar16 = pfVar16 + 0xc;
        } while (pfVar9 < param_1);
      }
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
      if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
        *puVar2 = "StNormalize";
        uVar3 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar3;
        puVar2[1] = (int)uVar3;
        *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
      }
      F_00d93ba0(param_3,(*(uint *)(gen_frame + 0x94)),param_1);
      fVar39 = REFG(float, 0x1087f04);
      uVar7 = 0;
      if (3 < (int)param_4) {
        pfVar9 = (float *)((*(uint *)(gen_frame + 0xb0)) + 0xc);
        iVar13 = (param_4 - 4 >> 2) + 1;
        pfVar16 = (float *)(param_6 + 4);
        uVar7 = iVar13 * 4;
        do {
          fVar43 = pfVar9[-3];
          if (!(0.0 < pfVar9[-3])) {
            fVar43 = fVar39;
          }
          pfVar16[-1] = pfVar16[-1] / fVar43;
          fVar43 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xb0)) - param_6) + (int)pfVar16)));
          if (!(0.0 < fVar43)) {
            fVar43 = fVar39;
          }
          *pfVar16 = *pfVar16 / fVar43;
          fVar43 = pfVar9[-1];
          if (!(0.0 < pfVar9[-1])) {
            fVar43 = fVar39;
          }
          pfVar16[1] = pfVar16[1] / fVar43;
          fVar43 = *pfVar9;
          if (!(0.0 < *pfVar9)) {
            fVar43 = fVar39;
          }
          pfVar16[2] = pfVar16[2] / fVar43;
          pfVar16 = pfVar16 + 4;
          pfVar9 = pfVar9 + 4;
          iVar13 = iVar13 + -1;
          pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
        } while (iVar13 != 0);
      }
      if (uVar7 < param_4) {
        pfVar9 = (float *)(param_6 + uVar7 * 4);
        iVar13 = param_4 - uVar7;
        do {
          fVar43 = *((float *)GEN_TOP(((int)pfVar9 + ((*(uint *)(gen_frame + 0xb0)) - param_6))));
          if (!(0.0 < fVar43)) {
            fVar43 = fVar39;
          }
          *pfVar9 = *pfVar9 / fVar43;
          pfVar9 = pfVar9 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    iVar13 = (*(int *)(gen_frame + 0x84)) + 1;
    (*(int *)(gen_frame + 0x84)) = iVar13;
  } while (iVar13 < 2);
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  uVar14 = (*(uint *)(gen_frame + 0xc0));
  uVar7 = (*(uint *)(gen_frame + 0xbc));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
    *puVar2 = &REFG(undefined, 0x1134dd0);
    uVar3 = rdtsc();
    (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar3;
    puVar2[1] = (int)uVar3;
    *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
  }
  if ((*(uint *)(gen_frame + 0xbc)) == (*(uint *)(gen_frame + 0xb0))) {
    (*(uint *)(gen_frame + 0xb4)) = 0;
  }
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar14 = uVar14 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) || (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc)))
     || (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
    F_00d945c0(pvVar6,uVar7,uVar14);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = uVar7;
  }
  (*(uint *)(gen_frame + 0xb4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0xb8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xb0)),(*(uint *)(gen_frame + 0xb8)) * 4);
  }
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0xa4));
  uVar7 = (*(uint *)(gen_frame + 0xa0));
  (*(uint *)(gen_frame + 0xb0)) = 0;
  (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
  if ((*(uint *)(gen_frame + 0xa0)) == (*(uint *)(gen_frame + 0x94))) {
    (*(float * PTR32 *)(gen_frame + 0x98)) = (float *)0x0;
  }
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar14 = (int)((int)(uintptr_t)pfVar9) * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) || (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc)))
     || (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
    F_00d945c0(pvVar6,uVar7,uVar14);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = uVar7;
  }
  (*(float * PTR32 *)(gen_frame + 0x98)) = (float *)0x0;
  uVar7 = (*(uint *)(gen_frame + 0x9c));
  if (-1 < (int)(*(uint *)(gen_frame + 0x9c))) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x94)),(*(uint *)(gen_frame + 0x9c)) * 4);
  }
  return uVar7;
}

/* ref: hkaAnimatedSkeleton::vf4 */
uint F_00d45b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d45060(this,param_1,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x1c))),param_2,
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x40))),0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf5 */
uint F_00d45b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd45b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00d45060(this,param_1,param_2,param_3,param_4,1);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf6 */
uint F_00d45b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00d44120((*(undefined * PTR32 *)&gen_args[0]),1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0,0,0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf7 */
uint F_00d45b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00d44120((*(undefined * PTR32 *)&gen_args[0]),0,0,0,1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf8 */
uint F_00d45bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd45bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00d44120(this,param_3,param_2,param_1,0,0,0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf9 */
uint F_00d45bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd45bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00d44120(this,0,0,0,param_3,param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d461b0 */
uint F_00d461b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd461b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1136d84);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1136d88);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x1136d8c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1136d80) ^ *param_1;
  *(uint *)((int)this + 4) = uVar4 ^ uVar1;
  *(uint *)((int)this + 8) = uVar5 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d461d0 */
unsigned int F_00d461d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd461d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00d461f0 */
uint F_00d461f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd461f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < *param_3);
  param_2[1] = -(uint)(fVar4 < fVar1);
  param_2[2] = -(uint)(fVar5 < fVar2);
  param_2[3] = -(uint)(fVar6 < fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d46220 */
uint F_00d46220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46220u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d46250 */
uint F_00d46250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46250u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d462a0 */
uint F_00d462a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd462a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d462b0 */
uint F_00d462b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd462b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < iVar3) {
    piVar2 = (int *)(*(int *)this + param_2 * 4);
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00d462f0 */
uint F_00d462f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd462f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d46310 */
uint F_00d46310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00d46340 */
uint F_00d46340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d46350 */
uint F_00d46350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd46350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d463a0 */
unsigned int F_00d463a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd463a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d463d0 */
uint F_00d463d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd463d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00d46420 */
uint F_00d46420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd46420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d46450 */
uint F_00d46450(unsigned int gen_a0)
{
  GEN_ENTER(0xd46450u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138ccc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cc8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cc4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138cc0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d46470 */
uint F_00d46470(unsigned int gen_a0)
{
  GEN_ENTER(0xd46470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cdc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cd8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cd4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138cd0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d46490 */
byte F_00d46490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((byte *)GEN_TOP((param_2 + *(int *)(in_ecx + 0x10))));
}

/* ref: FUN_00d464a0 */
byte F_00d464a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd464a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((byte *)GEN_TOP((param_2 + *(int *)(in_ecx + 0x1c))));
}

/* ref: FUN_00d464b0 */
uint F_00d464b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd464b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (uint)!(*param_2 <= *param_1);
}

/* ref: FUN_00d464d0 */
uint F_00d464d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd464d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined2 *)((int)this + 1) = 0x204;
  *(undefined2 *)((int)this + 6) = 0xffff;
  *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x10) = 0x11800;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00d46590 */
uint F_00d46590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd46590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d465d0 */
uint F_00d465d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd465d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 != param_1) {
    uVar1 = *(uint *)(*(int *)this + uVar1 * 4);
    *(uint *)(*(int *)this + param_1 * 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d465f0 */
uint F_00d465f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd465f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d46630 */
uint F_00d46630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46630u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 0x30;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]) / 0x30;
    if (iVar3 != 0) goto LAB_00d4668e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d4668e: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d466b0 */
uint F_00d466b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd466b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d46706;
  }
  iVar3 = ((int)0x80000000);
LAB_00d46706: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d46720 */
uint F_00d46720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46800 */
uint F_00d46800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d46840 */
uint F_00d46840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d46880 */
uint F_00d46880(unsigned int gen_a0)
{
  GEN_ENTER(0xd46880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d468c0 */
uint F_00d468c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd468c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46900 */
uint F_00d46900(unsigned int gen_a0)
{
  GEN_ENTER(0xd46900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46980 */
uint F_00d46980(unsigned int gen_a0)
{
  GEN_ENTER(0xd46980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d469c0 */
uint F_00d469c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd469c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46a00 */
uint F_00d46a00(unsigned int gen_a0)
{
  GEN_ENTER(0xd46a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46a40 */
uint F_00d46a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46a40u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar22;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined1 in_XMM3 [16] = {0};
  
  fVar4 = *(float *)&REFG(undefined, 0x1138ccc);
  fVar3 = *(float *)&REFG(undefined, 0x1138cc8);
  fVar2 = *(float *)&REFG(undefined, 0x1138cc4);
  fVar1 = *(float *)&REFG(undefined, 0x1138cc0);
  memcpy(&(auVar21), &(*param_2), sizeof(*param_2) < sizeof(auVar21) ? sizeof(*param_2) : sizeof(auVar21));
  if (!(*(float *)&REFG(undefined, 0x1138cc0) <= ABS((*(float *)((char *)&auVar21 + 0))))) {
    *in_ecx = 0.0;
    in_ecx[1] = 0.0;
    in_ecx[2] = 0.0;
    in_ecx[3] = 0.0;
    fVar3 = *(float *)&REFG(undefined, 0x1138cac);
    fVar2 = *(float *)&REFG(undefined, 0x1138ca8);
    fVar1 = *(float *)&REFG(undefined, 0x1138ca4);
    in_ecx[4] = *(float *)&REFG(undefined, 0x1138ca0);
    in_ecx[5] = fVar1;
    in_ecx[6] = fVar2;
    in_ecx[7] = fVar3;
    fVar3 = *(float *)&REFG(undefined, 0x1138afc);
    fVar2 = *(float *)&REFG(undefined, 0x1138af8);
    fVar1 = *(float *)&REFG(undefined, 0x1138af4);
    in_ecx[8] = *(float *)&REFG(undefined, 0x1138af0);
    in_ecx[9] = fVar1;
    in_ecx[10] = fVar2;
    in_ecx[0xb] = fVar3;
    return (uint)param_2;
  }
  gen_rcpps(&(auVar20), &(in_XMM2), &(auVar21));
  fVar9 = (*(float *)&REFG(undefined, 0x1136d40) - (*(float *)((char *)&auVar21 + 0)) * (*(float *)((char *)&auVar20 + 0))) * (*(float *)((char *)&auVar20 + 0));
  fVar11 = (*(float *)&REFG(undefined, 0x1136d44) - (*(float *)((char *)&auVar21 + 4)) * (*(float *)((char *)&auVar20 + 4))) * (*(float *)((char *)&auVar20 + 4));
  fVar13 = (*(float *)&REFG(undefined, 0x1136d48) - (*(float *)((char *)&auVar21 + 8)) * (*(float *)((char *)&auVar20 + 8))) * (*(float *)((char *)&auVar20 + 8));
  fVar15 = (*(float *)&REFG(undefined, 0x1136d4c) - (*(float *)((char *)&auVar21 + 12)) * (*(float *)((char *)&auVar20 + 12))) * (*(float *)((char *)&auVar20 + 12));
  *in_ecx = *in_ecx * fVar9;
  in_ecx[1] = in_ecx[1] * fVar11;
  in_ecx[2] = in_ecx[2] * fVar13;
  in_ecx[3] = in_ecx[3] * fVar15;
  in_ecx[8] = in_ecx[8] * fVar9;
  in_ecx[9] = in_ecx[9] * fVar11;
  in_ecx[10] = in_ecx[10] * fVar13;
  in_ecx[0xb] = in_ecx[0xb] * fVar15;
  fVar13 = *(float *)&REFG(undefined, 0x1138cac);
  fVar11 = *(float *)&REFG(undefined, 0x1138ca8);
  fVar9 = *(float *)&REFG(undefined, 0x1138ca4);
  fVar15 = (in_ecx[7] * in_ecx[7] + in_ecx[5] * in_ecx[5]) +
           (in_ecx[6] * in_ecx[6] + in_ecx[4] * in_ecx[4]);
  if ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar1)) || fVar15 < fVar1) {
    in_ecx[4] = *(float *)&REFG(undefined, 0x1138ca0);
    in_ecx[5] = fVar9;
    in_ecx[6] = fVar11;
    in_ecx[7] = fVar13;
  }
  else {
    fVar9 = in_ecx[4];
    fVar11 = in_ecx[5];
    fVar13 = in_ecx[6];
    fVar15 = in_ecx[7];
    fVar10 = fVar13 * fVar13 + fVar9 * fVar9;
    fVar12 = fVar15 * fVar15 + fVar11 * fVar11;
    fVar14 = fVar9 * fVar9 + fVar13 * fVar13;
    fVar16 = fVar11 * fVar11 + fVar15 * fVar15;
    (*(float *)((char *)&auVar21 + 0)) = fVar12 + fVar10;
    (*(float *)((char *)&auVar21 + 4)) = fVar10 + fVar12;
    (*(float *)((char *)&auVar21 + 8)) = fVar16 + fVar14;
    (*(float *)((char *)&auVar21 + 12)) = fVar14 + fVar16;
    gen_rsqrtps(&(auVar20), &(in_XMM3), &(auVar21));
    fVar24 = (*(float *)((char *)&auVar20 + 0));
    fVar16 = (*(float *)((char *)&auVar20 + 4));
    fVar22 = (*(float *)((char *)&auVar20 + 8));
    fVar23 = (*(float *)((char *)&auVar20 + 12));
    fVar10 = *(float *)&REFG(undefined, 0x1136d54) - (fVar16 * (*(float *)((char *)&auVar21 + 4))) * fVar16;
    fVar12 = *(float *)&REFG(undefined, 0x1136d58) - (fVar22 * (*(float *)((char *)&auVar21 + 8))) * fVar22;
    fVar14 = *(float *)&REFG(undefined, 0x1136d5c) - (fVar23 * (*(float *)((char *)&auVar21 + 12))) * fVar23;
    fVar16 = *(float *)&REFG(undefined, 0x1136d64) * fVar16;
    fVar22 = *(float *)&REFG(undefined, 0x1136d68) * fVar22;
    fVar23 = *(float *)&REFG(undefined, 0x1136d6c) * fVar23;
    in_ecx[4] = fVar9 * ((*(float *)&REFG(undefined, 0x1136d50) - (fVar24 * (*(float *)((char *)&auVar21 + 0))) * fVar24) *
                        (*(float *)&REFG(undefined, 0x1136d60) * fVar24));
    in_ecx[5] = fVar11 * (fVar10 * fVar16);
    in_ecx[6] = fVar13 * (fVar12 * fVar22);
    in_ecx[7] = fVar15 * (fVar14 * fVar23);
  }
  fVar9 = in_ecx[8] * in_ecx[8];
  fVar11 = in_ecx[9] * in_ecx[9];
  fVar13 = in_ecx[10] * in_ecx[10];
  uVar5 = -(uint)((fVar11 + fVar9) + fVar13 < fVar1);
  uVar6 = -(uint)((fVar11 + fVar9) + fVar13 < fVar2);
  uVar7 = -(uint)((fVar11 + fVar9) + fVar13 < fVar3);
  uVar8 = -(uint)((fVar11 + fVar9) + fVar13 < fVar4);
  uVar17 = uVar6 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4));
  uVar18 = uVar7 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8));
  uVar19 = uVar8 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc));
  in_ecx[8] = gen_bits2f(uVar5 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                         ~uVar5 & (uint)gen_fl2bits(in_ecx[8]));
  in_ecx[9] = gen_bits2f(uVar17 | ~uVar6 & (uint)gen_fl2bits(in_ecx[9]));
  in_ecx[10] = gen_bits2f(uVar18 | ~uVar7 & (uint)gen_fl2bits(in_ecx[10]));
  in_ecx[0xb] = gen_bits2f(uVar19 | ~uVar8 & (uint)gen_fl2bits(in_ecx[0xb]));
  return (uint)param_2;
}

/* ref: FUN_00d46b60 */
uint F_00d46b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d46d00((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00d46b70 */
uint F_00d46b70(unsigned int gen_a0)
{
  GEN_ENTER(0xd46b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d46ba0 */
uint F_00d46ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d46c10 */
uint F_00d46c10(unsigned int gen_a0)
{
  GEN_ENTER(0xd46c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: hkaAnimatedSkeleton::vf0 */
uint F_00d46d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d44090(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d46ea0 */
unsigned int F_00d46ea0(float gen_a0)
{
  GEN_ENTER(0xd46ea0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00d470c0 */
float F_00d470c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd470c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  fVar4 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)uVar3)));
  fVar4 = fVar4 * fVar1;
  fVar5 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)uVar2)));
  fVar6 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)uVar2)));
  fVar6 = fVar6 * fVar4;
  fVar7 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)uVar3)));
  *(float *)param_1 = fVar5 * fVar4;
  *(float *)(param_1 + 4) = fVar6;
  *(float *)(param_1 + 8) = fVar7 * fVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return fVar6;
}

/* ref: FUN_00d47150 */
float10 F_00d47150(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xd47150u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float local_14;
  
  fVar1 = ABS(param_1);
  fVar2 = ABS(param_2);
  if (fVar1 <= fVar2) {
    fVar1 = fVar1 / (fVar2 + REFG(float, 0x10905c4));
    fVar2 = (REFG(float, 0x1087f04) - fVar1 * *(float *)&REFG(undefined, 0x1136e94)) * fVar1;
    fVar1 = ((fVar1 * *(float *)&REFG(undefined, 0x1136e90)) * fVar1) * fVar1;
  }
  else {
    fVar2 = fVar2 / (fVar1 + REFG(float, 0x10905c4));
    fVar1 = (REFG(float, 0x1087f04) - fVar2 * *(float *)&REFG(undefined, 0x1136e94)) * fVar2 -
            ((fVar2 * *(float *)&REFG(undefined, 0x1136e90)) * fVar2) * fVar2;
    fVar2 = REFG(float, 0x109ca64);
  }
  local_14 = fVar2 - fVar1;
  if (param_2 < 0.0) {
    local_14 = REFG(float, 0x110e250) - local_14;
  }
  if (param_1 < 0.0) {
    local_14 = gen_bits2f((uint)gen_fl2bits(local_14) ^ REFG(uint, 0x10920d0));
  }
  return (float10)local_14;
}

/* ref: FUN_00d47d40 */
uint F_00d47d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd47d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d47d60 */
uint F_00d47d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd47d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d47d80 */
uint F_00d47d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd47d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)((int)this + 0x20) = *param_3;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return (uint)param_3;
}

/* ref: FUN_00d47db0 */
uint F_00d47db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd47db0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *in_ecx = (fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8];
  in_ecx[1] = (fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10;
  in_ecx[2] = (fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11;
  in_ecx[3] = (fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12;
  return (uint)param_2;
}

/* ref: FUN_00d47df0 */
uint F_00d47df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd47df0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_3), sizeof(*param_3) < sizeof(auVar1) ? sizeof(*param_3) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136e54) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136e58) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136e5c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[3];
  *param_2 = *in_ecx * ((*(float *)&REFG(undefined, 0x1136e50) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  param_2[1] = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  param_2[2] = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  param_2[3] = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_2;
}

/* ref: FUN_00d47e20 */
uint F_00d47e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd47e20u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *in_ecx = (fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8];
  in_ecx[1] = (fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10;
  in_ecx[2] = (fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11;
  in_ecx[3] = (fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12;
  return (uint)param_2;
}

/* ref: FUN_00d47e60 */
uint F_00d47e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd47e60u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  memcpy(&(auVar9), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar9) ? sizeof(*in_ecx) : sizeof(auVar9));
  fVar1 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1136e64) - (fVar2 * fVar10) * fVar10;
  fVar6 = *(float *)&REFG(undefined, 0x1136e68) - (fVar3 * fVar11) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar4 * fVar12) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar1 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar1 * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar1);
  param_2[1] = ~-(uint)(fVar2 <= 0.0) & (uint)gen_fl2bits((fVar5 * fVar10) * fVar2);
  param_2[2] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar6 * fVar11) * fVar3);
  param_2[3] = ~-(uint)(fVar4 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d47eb0 */
unsigned int F_00d47eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd47eb0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x1136e64) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x1136e68) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: FUN_00d47f10 */
unsigned int F_00d47f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd47f10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x1136e64) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x1136e68) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: FUN_00d47f70 */
unsigned int F_00d47f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd47f70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar12 [16];
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = (fVar5 + fVar4) + fVar6;
  fVar10 = (fVar5 + fVar4) + fVar6;
  fVar11 = (fVar5 + fVar4) + fVar6;
  fVar6 = (fVar5 + fVar4) + fVar6;
  (*(undefined4 *)((char *)&auVar12 + 4)) = (undefined4)gen_fl2bits(fVar10);
  (*(undefined4 *)((char *)&auVar12 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar12 + 8)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar12 + 12)) = (undefined4)gen_fl2bits(fVar6);
  gen_rsqrtps(&(auVar12), &(in_XMM4), &(auVar12));
  fVar4 = (*(float *)((char *)&auVar12 + 0));
  fVar5 = (*(float *)((char *)&auVar12 + 4));
  fVar7 = (*(float *)((char *)&auVar12 + 8));
  fVar8 = (*(float *)((char *)&auVar12 + 12));
  fVar4 = gen_bits2f(~-(uint)(fVar9 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e60) - (fVar4 * fVar9) * fVar4) *
                                       (*(float *)&REFG(undefined, 0x1136e70) * fVar4)));
  fVar5 = gen_bits2f(~-(uint)(fVar10 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e64) - (fVar5 * fVar10) * fVar5) *
                                       (*(float *)&REFG(undefined, 0x1136e74) * fVar5)));
  fVar7 = gen_bits2f(~-(uint)(fVar11 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e68) - (fVar7 * fVar11) * fVar7) *
                                       (*(float *)&REFG(undefined, 0x1136e78) * fVar7)));
  fVar8 = gen_bits2f(~-(uint)(fVar6 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e6c) - (fVar8 * fVar6) * fVar8) *
                                       (*(float *)&REFG(undefined, 0x1136e7c) * fVar8)));
  *in_ecx = fVar1 * fVar4;
  in_ecx[1] = fVar2 * fVar5;
  in_ecx[2] = fVar3 * fVar7;
  in_ecx[3] = in_ecx[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return 0;
}

/* ref: FUN_00d47fe0 */
unsigned int F_00d47fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd47fe0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar12 [16];
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = (fVar5 + fVar4) + fVar6;
  fVar10 = (fVar5 + fVar4) + fVar6;
  fVar11 = (fVar5 + fVar4) + fVar6;
  fVar6 = (fVar5 + fVar4) + fVar6;
  (*(undefined4 *)((char *)&auVar12 + 4)) = (undefined4)gen_fl2bits(fVar10);
  (*(undefined4 *)((char *)&auVar12 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar12 + 8)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar12 + 12)) = (undefined4)gen_fl2bits(fVar6);
  gen_rsqrtps(&(auVar12), &(in_XMM4), &(auVar12));
  fVar4 = (*(float *)((char *)&auVar12 + 0));
  fVar5 = (*(float *)((char *)&auVar12 + 4));
  fVar7 = (*(float *)((char *)&auVar12 + 8));
  fVar8 = (*(float *)((char *)&auVar12 + 12));
  fVar4 = gen_bits2f(~-(uint)(fVar9 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e60) - (fVar4 * fVar9) * fVar4) *
                                       (*(float *)&REFG(undefined, 0x1136e70) * fVar4)));
  fVar5 = gen_bits2f(~-(uint)(fVar10 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e64) - (fVar5 * fVar10) * fVar5) *
                                       (*(float *)&REFG(undefined, 0x1136e74) * fVar5)));
  fVar7 = gen_bits2f(~-(uint)(fVar11 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e68) - (fVar7 * fVar11) * fVar7) *
                                       (*(float *)&REFG(undefined, 0x1136e78) * fVar7)));
  fVar8 = gen_bits2f(~-(uint)(fVar6 <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136e6c) - (fVar8 * fVar6) * fVar8) *
                                       (*(float *)&REFG(undefined, 0x1136e7c) * fVar8)));
  *in_ecx = fVar1 * fVar4;
  in_ecx[1] = fVar2 * fVar5;
  in_ecx[2] = fVar3 * fVar7;
  in_ecx[3] = in_ecx[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return 0;
}

/* ref: FUN_00d48050 */
unsigned int F_00d48050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd48050u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x1136e64) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x1136e68) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136e6c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136e74) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136e78) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136e7c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136e60) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136e70) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: FUN_00d480b0 */
unsigned int F_00d480b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd480b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = *param_3;
  uVar9 = param_3[1];
  uVar10 = param_3[2];
  uVar11 = param_3[3];
  uVar12 = *param_4;
  uVar13 = param_4[1];
  uVar14 = param_4[2];
  uVar15 = param_4[3];
  *param_1 = *param_1;
  param_1[1] = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uVar12;
  *param_2 = uVar1;
  param_2[1] = uVar5;
  param_2[2] = uVar9;
  param_2[3] = uVar13;
  *param_3 = uVar2;
  param_3[1] = uVar6;
  param_3[2] = uVar10;
  param_3[3] = uVar14;
  *param_4 = uVar3;
  param_4[1] = uVar7;
  param_4[2] = uVar11;
  param_4[3] = uVar15;
  return 0;
}

/* ref: FUN_00d48170 */
unsigned int F_00d48170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd48170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  float * pfVar11;
  
  iVar8 = (int)(param_4 + 3 + (param_4 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar8) {
    pfVar11 = (float *)(param_2 + 0x20);
    pfVar10 = (float *)(param_1 + 0x20);
    pfVar9 = (float *)(param_3 + 0x20);
    do {
      pfVar1 = ((float *)GEN_TOP(((param_2 - param_3) + -0x20 + (int)pfVar9)));
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      fVar5 = pfVar9[-7];
      fVar6 = pfVar9[-6];
      fVar7 = pfVar9[-5];
      pfVar10[-8] = *pfVar1 * pfVar9[-8];
      pfVar10[-7] = fVar2 * fVar5;
      pfVar10[-6] = fVar3 * fVar6;
      pfVar10[-5] = fVar4 * fVar7;
      fVar2 = pfVar9[-3];
      fVar3 = pfVar9[-2];
      fVar4 = pfVar9[-1];
      fVar5 = pfVar11[-3];
      fVar6 = pfVar11[-2];
      fVar7 = pfVar11[-1];
      pfVar10[-4] = pfVar9[-4] * pfVar11[-4];
      pfVar10[-3] = fVar2 * fVar5;
      pfVar10[-2] = fVar3 * fVar6;
      pfVar10[-1] = fVar4 * fVar7;
      fVar2 = pfVar9[1];
      fVar3 = pfVar9[2];
      fVar4 = pfVar9[3];
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      fVar7 = pfVar11[3];
      *pfVar10 = *pfVar9 * *pfVar11;
      pfVar10[1] = fVar2 * fVar5;
      pfVar10[2] = fVar3 * fVar6;
      pfVar10[3] = fVar4 * fVar7;
      fVar2 = pfVar9[5];
      fVar3 = pfVar9[6];
      fVar4 = pfVar9[7];
      fVar5 = pfVar11[5];
      fVar6 = pfVar11[6];
      fVar7 = pfVar11[7];
      pfVar10[4] = pfVar9[4] * pfVar11[4];
      pfVar10[5] = fVar2 * fVar5;
      pfVar10[6] = fVar3 * fVar6;
      pfVar10[7] = fVar4 * fVar7;
      pfVar11 = pfVar11 + 0x10;
      pfVar9 = pfVar9 + 0x10;
      pfVar10 = pfVar10 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return 0;
}

/* ref: FUN_00d48570 */
unsigned int F_00d48570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd48570u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar12 = param_4 & 0xfffffff0;
  iVar13 = (int)((param_4 & 0xf) + 3) >> 2;
  F_00d48170(param_1,param_2,param_3,(int)uVar12 >> 2);
  pfVar9 = (float *)(param_2 + uVar12 * 4);
  if (iVar13 != 0) {
    iVar10 = (param_3 + uVar12 * 4) - (int)pfVar9;
    iVar11 = (param_1 + uVar12 * 4) - (int)pfVar9;
    do {
      pfVar1 = (float *)(iVar10 + (int)pfVar9);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar9[1];
      fVar7 = pfVar9[2];
      fVar8 = pfVar9[3];
      pfVar2 = (float *)(iVar11 + (int)pfVar9);
      *pfVar2 = *pfVar1 * *pfVar9;
      pfVar2[1] = fVar3 * fVar6;
      pfVar2[2] = fVar4 * fVar7;
      pfVar2[3] = fVar5 * fVar8;
      pfVar9 = pfVar9 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  return 0;
}

/* ref: FUN_00d48a30 */
unsigned int F_00d48a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd48a30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float * pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  
  fVar20 = *(float *)&REFG(undefined, 0x1136ebc);
  fVar19 = *(float *)&REFG(undefined, 0x1136eb8);
  fVar18 = *(float *)&REFG(undefined, 0x1136eb4);
  fVar17 = *(float *)&REFG(undefined, 0x1136eb0);
  iVar21 = (int)(param_2 + 3 + (param_2 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar21) {
    pfVar22 = (float *)(param_1 + 0x20);
    do {
      fVar1 = pfVar22[-8];
      fVar2 = pfVar22[-7];
      fVar3 = pfVar22[-6];
      fVar4 = pfVar22[-5];
      fVar5 = pfVar22[-4];
      fVar6 = pfVar22[-3];
      fVar7 = pfVar22[-2];
      fVar8 = pfVar22[-1];
      fVar9 = *pfVar22;
      fVar10 = pfVar22[1];
      fVar11 = pfVar22[2];
      fVar12 = pfVar22[3];
      fVar13 = pfVar22[4];
      fVar14 = pfVar22[5];
      fVar15 = pfVar22[6];
      fVar16 = pfVar22[7];
      (*(float *)((char *)&auVar28 + 0)) = fVar4 * fVar4;
      (*(float *)((char *)&auVar28 + 4)) = fVar8 * fVar8;
      (*(float *)((char *)&auVar28 + 8)) = fVar12 * fVar12;
      (*(float *)((char *)&auVar28 + 12)) = fVar16 * fVar16;
      fVar23 = ((fVar2 * fVar2 + fVar1 * fVar1) + fVar3 * fVar3) + (*(float *)((char *)&auVar28 + 0));
      fVar24 = ((fVar6 * fVar6 + fVar5 * fVar5) + fVar7 * fVar7) + (*(float *)((char *)&auVar28 + 4));
      fVar25 = ((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11) + (*(float *)((char *)&auVar28 + 8));
      fVar26 = ((fVar14 * fVar14 + fVar13 * fVar13) + fVar15 * fVar15) + (*(float *)((char *)&auVar28 + 12));
      (*(undefined4 *)((char *)&auVar29 + 4)) = (undefined4)gen_fl2bits(fVar24);
      (*(undefined4 *)((char *)&auVar29 + 0)) = (undefined4)gen_fl2bits(fVar23);
      (*(undefined4 *)((char *)&auVar29 + 8)) = (undefined4)gen_fl2bits(fVar25);
      (*(undefined4 *)((char *)&auVar29 + 12)) = (undefined4)gen_fl2bits(fVar26);
      gen_rsqrtps(&(auVar29), &(auVar28), &(auVar29));
      fVar27 = (*(float *)((char *)&auVar29 + 0));
      fVar30 = (*(float *)((char *)&auVar29 + 4));
      fVar31 = (*(float *)((char *)&auVar29 + 8));
      fVar32 = (*(float *)((char *)&auVar29 + 12));
      fVar23 = (fVar17 - (fVar27 * fVar23) * fVar27) * (*(float *)&REFG(undefined, 0x1136ec0) * fVar27);
      fVar24 = (fVar18 - (fVar30 * fVar24) * fVar30) * (*(float *)&REFG(undefined, 0x1136ec4) * fVar30);
      fVar25 = (fVar19 - (fVar31 * fVar25) * fVar31) * (*(float *)&REFG(undefined, 0x1136ec8) * fVar31);
      fVar26 = (fVar20 - (fVar32 * fVar26) * fVar32) * (*(float *)&REFG(undefined, 0x1136ecc) * fVar32);
      pfVar22[-8] = fVar23 * fVar1;
      pfVar22[-7] = fVar23 * fVar2;
      pfVar22[-6] = fVar23 * fVar3;
      pfVar22[-5] = fVar23 * fVar4;
      pfVar22[-4] = fVar24 * fVar5;
      pfVar22[-3] = fVar24 * fVar6;
      pfVar22[-2] = fVar24 * fVar7;
      pfVar22[-1] = fVar24 * fVar8;
      *pfVar22 = fVar25 * fVar9;
      pfVar22[1] = fVar25 * fVar10;
      pfVar22[2] = fVar25 * fVar11;
      pfVar22[3] = fVar25 * fVar12;
      pfVar22[4] = fVar26 * fVar13;
      pfVar22[5] = fVar26 * fVar14;
      pfVar22[6] = fVar26 * fVar15;
      pfVar22[7] = fVar26 * fVar16;
      pfVar22 = pfVar22 + 0x10;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  return 0;
}

/* ref: FUN_00d48b40 */
uint F_00d48b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd48b40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  float * pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  
  fVar20 = *(float *)&REFG(undefined, 0x1136ebc);
  fVar19 = *(float *)&REFG(undefined, 0x1136eb8);
  fVar18 = *(float *)&REFG(undefined, 0x1136eb4);
  fVar17 = *(float *)&REFG(undefined, 0x1136eb0);
  uVar21 = (int)(param_2 + 3 + (param_2 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar21) {
    pfVar23 = (float *)(param_1 + 0x70);
    uVar22 = uVar21;
    do {
      fVar1 = pfVar23[-0x18];
      fVar2 = pfVar23[-0x17];
      fVar3 = pfVar23[-0x16];
      fVar4 = pfVar23[-0x15];
      fVar5 = pfVar23[-0xc];
      fVar6 = pfVar23[-0xb];
      fVar7 = pfVar23[-10];
      fVar8 = pfVar23[-9];
      fVar9 = *pfVar23;
      fVar10 = pfVar23[1];
      fVar11 = pfVar23[2];
      fVar12 = pfVar23[3];
      fVar13 = pfVar23[0xc];
      fVar14 = pfVar23[0xd];
      fVar15 = pfVar23[0xe];
      fVar16 = pfVar23[0xf];
      (*(float *)((char *)&auVar29 + 0)) = fVar4 * fVar4;
      (*(float *)((char *)&auVar29 + 4)) = fVar8 * fVar8;
      (*(float *)((char *)&auVar29 + 8)) = fVar12 * fVar12;
      (*(float *)((char *)&auVar29 + 12)) = fVar16 * fVar16;
      fVar24 = ((fVar2 * fVar2 + fVar1 * fVar1) + fVar3 * fVar3) + (*(float *)((char *)&auVar29 + 0));
      fVar25 = ((fVar6 * fVar6 + fVar5 * fVar5) + fVar7 * fVar7) + (*(float *)((char *)&auVar29 + 4));
      fVar26 = ((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11) + (*(float *)((char *)&auVar29 + 8));
      fVar27 = ((fVar14 * fVar14 + fVar13 * fVar13) + fVar15 * fVar15) + (*(float *)((char *)&auVar29 + 12));
      (*(undefined4 *)((char *)&auVar30 + 4)) = (undefined4)gen_fl2bits(fVar25);
      (*(undefined4 *)((char *)&auVar30 + 0)) = (undefined4)gen_fl2bits(fVar24);
      (*(undefined4 *)((char *)&auVar30 + 8)) = (undefined4)gen_fl2bits(fVar26);
      (*(undefined4 *)((char *)&auVar30 + 12)) = (undefined4)gen_fl2bits(fVar27);
      gen_rsqrtps(&(auVar30), &(auVar29), &(auVar30));
      fVar28 = (*(float *)((char *)&auVar30 + 0));
      fVar31 = (*(float *)((char *)&auVar30 + 4));
      fVar32 = (*(float *)((char *)&auVar30 + 8));
      fVar33 = (*(float *)((char *)&auVar30 + 12));
      fVar24 = (fVar17 - (fVar28 * fVar24) * fVar28) * (*(float *)&REFG(undefined, 0x1136ec0) * fVar28);
      fVar25 = (fVar18 - (fVar31 * fVar25) * fVar31) * (*(float *)&REFG(undefined, 0x1136ec4) * fVar31);
      fVar26 = (fVar19 - (fVar32 * fVar26) * fVar32) * (*(float *)&REFG(undefined, 0x1136ec8) * fVar32);
      fVar27 = (fVar20 - (fVar33 * fVar27) * fVar33) * (*(float *)&REFG(undefined, 0x1136ecc) * fVar33);
      pfVar23[-0x18] = fVar24 * fVar1;
      pfVar23[-0x17] = fVar24 * fVar2;
      pfVar23[-0x16] = fVar24 * fVar3;
      pfVar23[-0x15] = fVar24 * fVar4;
      pfVar23[-0xc] = fVar25 * fVar5;
      pfVar23[-0xb] = fVar25 * fVar6;
      pfVar23[-10] = fVar25 * fVar7;
      pfVar23[-9] = fVar25 * fVar8;
      *pfVar23 = fVar26 * fVar9;
      pfVar23[1] = fVar26 * fVar10;
      pfVar23[2] = fVar26 * fVar11;
      pfVar23[3] = fVar26 * fVar12;
      pfVar23[0xc] = fVar27 * fVar13;
      pfVar23[0xd] = fVar27 * fVar14;
      pfVar23[0xe] = fVar27 * fVar15;
      pfVar23[0xf] = fVar27 * fVar16;
      pfVar23 = pfVar23 + 0x30;
      uVar22 = uVar22 - 1;
      uVar21 = 0;
    } while (uVar22 != 0);
  }
  return uVar21;
}

/* ref: FUN_00d49310 */
unsigned int F_00d49310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd49310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00d4d080(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return 0;
}

/* ref: FUN_00d49c70 */
unsigned int F_00d49c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd49c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined8 * param_5 = (undefined8 *)(uintptr_t)gen_a4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 * puVar8;
  undefined8 * puVar9;
  float * pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar11 = 0;
  if (0 < param_4) {
    pfVar10 = (float *)(param_1 + 0x20);
    puVar9 = param_2;
    do {
      iVar7 = (int)*(short *)(param_3 + iVar11 * 2);
      uVar1 = puVar9[2];
      uVar2 = puVar9[3];
      uVar3 = puVar9[4];
      uVar4 = puVar9[5];
      puVar8 = param_5;
      if (-1 < iVar7) {
        puVar8 = (undefined8 *)(iVar7 * 0x30 + param_1);
      }
      local_80 = gen_bits2f((uint)*puVar9);
      fStack_7c = gen_bits2f((uint)((ulonglong)*puVar9 >> 0x20));
      fStack_78 = gen_bits2f((uint)puVar9[1]);
      fStack_74 = gen_bits2f((uint)((ulonglong)puVar9[1] >> 0x20));
      local_40 = gen_bits2f((uint)puVar8[2]);
      fStack_3c = gen_bits2f((uint)((ulonglong)puVar8[2] >> 0x20));
      fStack_38 = gen_bits2f((uint)puVar8[3]);
      fStack_34 = gen_bits2f((uint)((ulonglong)puVar8[3] >> 0x20));
      uVar5 = puVar8[4];
      uVar6 = puVar8[5];
      fVar12 = local_80 * local_40;
      fVar13 = fStack_7c * fStack_3c;
      fVar14 = fStack_78 * fStack_38;
      fVar15 = (((fVar13 + fVar12) + fVar14) * local_40 +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)))
               * local_80) + (fStack_78 * fStack_3c - fStack_7c * fStack_38) * fStack_34;
      fVar16 = (((fVar13 + fVar12) + fVar14) * fStack_3c +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)))
               * fStack_7c) + (local_80 * fStack_38 - fStack_78 * local_40) * fStack_34;
      fVar17 = (((fVar13 + fVar12) + fVar14) * fStack_38 +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)))
               * fStack_78) + (fStack_7c * local_40 - local_80 * fStack_3c) * fStack_34;
      fVar12 = (((fVar13 + fVar12) + fVar14) * fStack_34 +
               (fStack_34 * fStack_34 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)))
               * fStack_74) + (fStack_74 * fStack_34 - fStack_74 * fStack_34) * fStack_34;
      local_50 = gen_bits2f((uint)*puVar8);
      fStack_4c = gen_bits2f((uint)((ulonglong)*puVar8 >> 0x20));
      fStack_48 = gen_bits2f((uint)puVar8[1]);
      fStack_44 = gen_bits2f((uint)((ulonglong)puVar8[1] >> 0x20));
      pfVar10[-8] = (fVar15 + fVar15) + local_50;
      pfVar10[-7] = (fVar16 + fVar16) + fStack_4c;
      pfVar10[-6] = (fVar17 + fVar17) + fStack_48;
      pfVar10[-5] = (fVar12 + fVar12) + fStack_44;
      local_70 = gen_bits2f((uint)uVar1);
      fStack_6c = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      fStack_68 = gen_bits2f((uint)uVar2);
      fStack_64 = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      local_30 = gen_bits2f((uint)uVar5);
      fStack_2c = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
      fStack_28 = gen_bits2f((uint)uVar6);
      fStack_24 = gen_bits2f((uint)((ulonglong)uVar6 >> 0x20));
      local_60 = gen_bits2f((uint)uVar3);
      fStack_5c = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
      fStack_58 = gen_bits2f((uint)uVar4);
      fStack_54 = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
      pfVar10[-4] = ((fStack_68 * fStack_3c - fStack_6c * fStack_38) + local_70 * fStack_34) +
                    fStack_64 * local_40;
      pfVar10[-3] = ((local_70 * fStack_38 - fStack_68 * local_40) + fStack_6c * fStack_34) +
                    fStack_64 * fStack_3c;
      pfVar10[-2] = ((fStack_6c * local_40 - local_70 * fStack_3c) + fStack_68 * fStack_34) +
                    fStack_64 * fStack_38;
      pfVar10[-1] = fStack_64 * fStack_34 -
                    ((fStack_6c * fStack_3c + local_70 * local_40) + fStack_68 * fStack_38);
      *pfVar10 = local_30 * local_60;
      pfVar10[1] = fStack_2c * fStack_5c;
      pfVar10[2] = fStack_28 * fStack_58;
      pfVar10[3] = fStack_24 * fStack_54;
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 6;
      pfVar10 = pfVar10 + 0xc;
    } while (iVar11 < param_4);
  }
  return 0;
}

/* ref: FUN_00d49e40 */
unsigned int F_00d49e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd49e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00d526c0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return 0;
}

/* ref: FUN_00d49e70 */
unsigned int F_00d49e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd49e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  F_00d53070(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return 0;
}

/* ref: FUN_00d49eb0 */
unsigned int F_00d49eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd49eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  F_00d535d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return 0;
}

/* ref: FUN_00d49ef0 */
unsigned int F_00d49ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd49ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_00d5b1f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}

/* ref: FUN_00d49f00 */
unsigned int F_00d49f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd49f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_00d5c7e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}

/* ref: FUN_00d49f10 */
unsigned int F_00d49f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd49f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  F_00d5fab0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return 0;
}

/* ref: FUN_00d49f20 */
unsigned int F_00d49f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd49f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  F_00d613d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return 0;
}

/* ref: FUN_00d49f30 */
uint F_00d49f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd49f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_1 - *param_2 * *param_3;
  *(float *)((int)this + 4) = fVar7 - fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar8 - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar9 - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d49f50 */
uint F_00d49f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd49f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(uint *)this = *param_1 & *param_2;
  *(uint *)((int)this + 4) = uVar1 & uVar4;
  *(uint *)((int)this + 8) = uVar2 & uVar5;
  *(uint *)((int)this + 0xc) = uVar3 & uVar6;
  return (uint)param_1;
}

/* ref: FUN_00d49f70 */
uint F_00d49f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd49f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d49f90 */
uint F_00d49f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd49f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d49fb0 */
uint F_00d49fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd49fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  *(uint *)this = *param_2 & *param_3 | ~*param_3 & *param_1;
  *(uint *)((int)this + 4) = uVar4 & uVar1 | ~uVar1 & uVar7;
  *(uint *)((int)this + 8) = uVar5 & uVar2 | ~uVar2 & uVar8;
  *(uint *)((int)this + 0xc) = uVar6 & uVar3 | ~uVar3 & uVar9;
  return (uint)param_1;
}

/* ref: FUN_00d49fe0 */
uint F_00d49fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd49fe0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d4a000 */
uint F_00d4a000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd4a000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00d4a020 */
uint F_00d4a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd4a020u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  memcpy(&(auVar1), &(*param_3), sizeof(*param_3) < sizeof(auVar1) ? sizeof(*param_3) : sizeof(auVar1));
  gen_rcpps(&(auVar5), &(in_XMM1), &(auVar1));
  fVar6 = *(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar5 + 4));
  fVar7 = *(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar5 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar5 + 12));
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = ((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar5 + 0))) * (*(float *)((char *)&auVar5 + 0))) * *param_2;
  param_1[1] = (fVar6 * (*(float *)((char *)&auVar5 + 4))) * fVar2;
  param_1[2] = (fVar7 * (*(float *)((char *)&auVar5 + 8))) * fVar3;
  param_1[3] = (fVar8 * (*(float *)((char *)&auVar5 + 12))) * fVar4;
  return (uint)param_3;
}

/* ref: FUN_00d4a050 */
uint F_00d4a050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd4a050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar5), &(in_XMM1), &(auVar1));
  fVar6 = *(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar5 + 4));
  fVar7 = *(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar5 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar5 + 12));
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)this =
       ((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar5 + 0))) * (*(float *)((char *)&auVar5 + 0))) * *param_1;
  *(float *)((int)this + 4) = (fVar6 * (*(float *)((char *)&auVar5 + 4))) * fVar2;
  *(float *)((int)this + 8) = (fVar7 * (*(float *)((char *)&auVar5 + 8))) * fVar3;
  *(float *)((int)this + 0xc) = (fVar8 * (*(float *)((char *)&auVar5 + 12))) * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00d4a080 */
uint F_00d4a080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4a080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *param_2 = *param_6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  uVar3 = param_7[3];
  *param_3 = *param_7;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *param_4 = *param_8;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_8;
}

/* ref: FUN_00d4a0c0 */
uint F_00d4a0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4a0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *param_2 = *param_6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  uVar3 = param_7[3];
  *param_3 = *param_7;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *param_4 = *param_8;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_8;
}

/* ref: FUN_00d4a100 */
uint F_00d4a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a100u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float * param_10 = (float *)(uintptr_t)gen_a9;
  float * param_11 = (float *)(uintptr_t)gen_a10;
  float * param_12 = (float *)(uintptr_t)gen_a11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 + *param_5;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 + *param_10;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 + *param_11;
  param_3[1] = fVar1 + fVar4;
  param_3[2] = fVar2 + fVar5;
  param_3[3] = fVar3 + fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 + *param_12;
  param_4[1] = fVar1 + fVar4;
  param_4[2] = fVar2 + fVar5;
  param_4[3] = fVar3 + fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4a150 */
uint F_00d4a150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a150u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float * param_10 = (float *)(uintptr_t)gen_a9;
  float * param_11 = (float *)(uintptr_t)gen_a10;
  float * param_12 = (float *)(uintptr_t)gen_a11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = *param_5 - *param_9;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  param_1[3] = fVar3 - fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 - *param_10;
  param_2[1] = fVar1 - fVar4;
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 - *param_11;
  param_3[1] = fVar1 - fVar4;
  param_3[2] = fVar2 - fVar5;
  param_3[3] = fVar3 - fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 - *param_12;
  param_4[1] = fVar1 - fVar4;
  param_4[2] = fVar2 - fVar5;
  param_4[3] = fVar3 - fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4a1a0 */
uint F_00d4a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float * param_10 = (float *)(uintptr_t)gen_a9;
  float * param_11 = (float *)(uintptr_t)gen_a10;
  float * param_12 = (float *)(uintptr_t)gen_a11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 * *param_5;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar5;
  param_1[3] = fVar3 * fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 * *param_10;
  param_2[1] = fVar1 * fVar4;
  param_2[2] = fVar2 * fVar5;
  param_2[3] = fVar3 * fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 * *param_11;
  param_3[1] = fVar1 * fVar4;
  param_3[2] = fVar2 * fVar5;
  param_3[3] = fVar3 * fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 * *param_12;
  param_4[1] = fVar1 * fVar4;
  param_4[2] = fVar2 * fVar5;
  param_4[3] = fVar3 * fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4a530 */
uint F_00d4a530(unsigned int gen_a0)
{
  GEN_ENTER(0xd4a530u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar2 = param_1[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar3 = param_1[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *param_1 = *param_1 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d4a550 */
uint F_00d4a550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd4a550u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = (*(float *)&REFG(undefined, 0x1136ef4) * (fVar2 * fVar2) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar2 * fVar2) +
          *(float *)&REFG(undefined, 0x1138af4);
  fVar6 = (*(float *)&REFG(undefined, 0x1136ef8) * (fVar3 * fVar3) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar3 * fVar3) +
          *(float *)&REFG(undefined, 0x1138af8);
  fVar7 = (*(float *)&REFG(undefined, 0x1136efc) * (fVar4 * fVar4) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar4 * fVar4) +
          *(float *)&REFG(undefined, 0x1138afc);
  *param_1 = ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar1 * fVar1) + *(float *)&REFG(undefined, 0x1136ee0)) *
              (fVar1 * fVar1) + *(float *)&REFG(undefined, 0x1138af0)) * fVar1;
  param_1[1] = fVar5 * fVar2;
  param_1[2] = fVar6 * fVar3;
  param_1[3] = fVar7 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00d4a590 */
uint F_00d4a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xd4a590u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  float * param_13 = (float *)(uintptr_t)gen_a12;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  fVar7 = param_13[1];
  fVar8 = param_13[2];
  fVar9 = param_13[3];
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  *param_1 = (*param_9 - *param_5) * *param_13 + *param_5;
  param_1[1] = (fVar1 - fVar4) * fVar7 + fVar10;
  param_1[2] = (fVar2 - fVar5) * fVar8 + fVar11;
  param_1[3] = (fVar3 - fVar6) * fVar9 + fVar12;
  return (uint)param_1;
}

/* ref: FUN_00d4a5c0 */
uint F_00d4a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xd4a5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  float * param_13 = (float *)(uintptr_t)gen_a12;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  fVar7 = param_13[1];
  fVar8 = param_13[2];
  fVar9 = param_13[3];
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  *param_1 = (*param_9 - *param_5) * *param_13 + *param_5;
  param_1[1] = (fVar1 - fVar4) * fVar7 + fVar10;
  param_1[2] = (fVar2 - fVar5) * fVar8 + fVar11;
  param_1[3] = (fVar3 - fVar6) * fVar9 + fVar12;
  return (uint)param_1;
}

/* ref: FUN_00d4a5f0 */
uint F_00d4a5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_9;
}

/* ref: FUN_00d4a610 */
uint F_00d4a610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a10;
  undefined4 * param_12 = (undefined4 *)(uintptr_t)gen_a11;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_10[1];
  uVar2 = param_10[2];
  uVar3 = param_10[3];
  *param_2 = *param_10;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *param_3 = *param_11;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_12[1];
  uVar2 = param_12[2];
  uVar3 = param_12[3];
  *param_4 = *param_12;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_12;
}

/* ref: FUN_00d4a650 */
uint F_00d4a650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a10;
  undefined4 * param_12 = (undefined4 *)(uintptr_t)gen_a11;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_10[1];
  uVar2 = param_10[2];
  uVar3 = param_10[3];
  *param_2 = *param_10;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *param_3 = *param_11;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_12[1];
  uVar2 = param_12[2];
  uVar3 = param_12[3];
  *param_4 = *param_12;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  return (uint)param_12;
}

/* ref: FUN_00d4a690 */
uint F_00d4a690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a690u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 + *param_5;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  return (uint)param_9;
}

/* ref: FUN_00d4a6b0 */
uint F_00d4a6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float * param_10 = (float *)(uintptr_t)gen_a9;
  float * param_11 = (float *)(uintptr_t)gen_a10;
  float * param_12 = (float *)(uintptr_t)gen_a11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_9[1];
  fVar2 = param_9[2];
  fVar3 = param_9[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_9 + *param_5;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  fVar1 = param_10[1];
  fVar2 = param_10[2];
  fVar3 = param_10[3];
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  fVar6 = param_6[3];
  *param_2 = *param_10 + *param_6;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 + *param_11;
  param_3[1] = fVar1 + fVar4;
  param_3[2] = fVar2 + fVar5;
  param_3[3] = fVar3 + fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 + *param_12;
  param_4[1] = fVar1 + fVar4;
  param_4[2] = fVar2 + fVar5;
  param_4[3] = fVar3 + fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4a8a0 */
uint F_00d4a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = *param_5 - *param_9;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  param_1[3] = fVar3 - fVar6;
  return (uint)param_9;
}

/* ref: FUN_00d4a8c0 */
uint F_00d4a8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4a8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float * param_10 = (float *)(uintptr_t)gen_a9;
  float * param_11 = (float *)(uintptr_t)gen_a10;
  float * param_12 = (float *)(uintptr_t)gen_a11;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = *param_5 - *param_9;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  param_1[3] = fVar3 - fVar6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar4 = param_10[1];
  fVar5 = param_10[2];
  fVar6 = param_10[3];
  *param_2 = *param_6 - *param_10;
  param_2[1] = fVar1 - fVar4;
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar6;
  fVar1 = param_7[1];
  fVar2 = param_7[2];
  fVar3 = param_7[3];
  fVar4 = param_11[1];
  fVar5 = param_11[2];
  fVar6 = param_11[3];
  *param_3 = *param_7 - *param_11;
  param_3[1] = fVar1 - fVar4;
  param_3[2] = fVar2 - fVar5;
  param_3[3] = fVar3 - fVar6;
  fVar1 = param_8[1];
  fVar2 = param_8[2];
  fVar3 = param_8[3];
  fVar4 = param_12[1];
  fVar5 = param_12[2];
  fVar6 = param_12[3];
  *param_4 = *param_8 - *param_12;
  param_4[1] = fVar1 - fVar4;
  param_4[2] = fVar2 - fVar5;
  param_4[3] = fVar3 - fVar6;
  return (uint)param_8;
}

/* ref: FUN_00d4aab0 */
uint F_00d4aab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd4aab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_3;
}

/* ref: FUN_00d4aad0 */
uint F_00d4aad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd4aad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  *param_1 = *param_3 * *param_5;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar5;
  param_1[3] = fVar3 * fVar6;
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_2 = *param_4;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  return (uint)param_4;
}

/* ref: FUN_00d4af10 */
unsigned int F_00d4af10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4af10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float * pfVar17;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar16 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar16) {
    pfVar17 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar17)));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = pfVar17[1];
      fVar11 = pfVar17[2];
      fVar12 = pfVar17[3];
      fVar13 = pfVar17[1];
      fVar14 = pfVar17[2];
      fVar15 = pfVar17[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar17)));
      *pfVar2 = (*pfVar1 - *pfVar17) * fVar3 + *pfVar17;
      pfVar2[1] = (fVar7 - fVar10) * fVar4 + fVar13;
      pfVar2[2] = (fVar8 - fVar11) * fVar5 + fVar14;
      pfVar2[3] = (fVar9 - fVar12) * fVar6 + fVar15;
      pfVar17 = pfVar17 + 4;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return 0;
}

/* ref: FUN_00d4af60 */
unsigned int F_00d4af60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4af60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((*pfVar1 + fVar7) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar11 + fVar8) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar12 + fVar9) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar13 + fVar10) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: FUN_00d4afb0 */
unsigned int F_00d4afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4afb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b000 */
unsigned int F_00d4b000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b000u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float * pfVar17;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar16 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar16) {
    pfVar17 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar17)));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = pfVar17[1];
      fVar11 = pfVar17[2];
      fVar12 = pfVar17[3];
      fVar13 = pfVar17[1];
      fVar14 = pfVar17[2];
      fVar15 = pfVar17[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar17)));
      *pfVar2 = (*pfVar1 - *pfVar17) * fVar3 + *pfVar17;
      pfVar2[1] = (fVar7 - fVar10) * fVar4 + fVar13;
      pfVar2[2] = (fVar8 - fVar11) * fVar5 + fVar14;
      pfVar2[3] = (fVar9 - fVar12) * fVar6 + fVar15;
      pfVar17 = pfVar17 + 4;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b050 */
unsigned int F_00d4b050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b050u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((*pfVar1 + fVar7) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar11 + fVar8) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar12 + fVar9) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar13 + fVar10) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b0a0 */
unsigned int F_00d4b0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float * pfVar15;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  iVar14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar14) {
    pfVar15 = param_3;
    do {
      fVar7 = *pfVar15;
      fVar8 = pfVar15[1];
      fVar9 = pfVar15[2];
      fVar10 = pfVar15[3];
      pfVar1 = ((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar15)));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar15)));
      *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
      pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
      pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
      pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
      pfVar15 = pfVar15 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b0f0 */
uint F_00d4b0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd4b0f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 < *in_ecx);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return (uint)param_2;
}

/* ref: FUN_00d4b110 */
uint F_00d4b110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd4b110u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < 0.0);
  param_2[1] = -(uint)(fVar1 < 0.0);
  param_2[2] = -(uint)(fVar2 < 0.0);
  param_2[3] = -(uint)(fVar3 < 0.0);
  return (uint)param_2;
}

/* ref: FUN_00d4b130 */
unsigned int F_00d4b130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b130u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 + *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 + fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 + fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 + fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b1c0 */
unsigned int F_00d4b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 - *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 - fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 - fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 - fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b250 */
unsigned int F_00d4b250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b250u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 + *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 + fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 + fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 + fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b2e0 */
unsigned int F_00d4b2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  float * pfVar1;
  undefined4 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 * puVar21;
  float * pfVar22;
  float * pfVar23;
  
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  param_8 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    param_7 = param_1;
    puVar21 = param_2;
    pfVar22 = param_5;
    pfVar23 = param_3;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_6 - (int)param_2) + (int)puVar21)));
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      puVar2 = ((undefined4 *)GEN_TOP(((param_4 - (int)param_2) + (int)puVar21)));
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      *puVar21 = *puVar2;
      puVar21[1] = uVar18;
      puVar21[2] = uVar19;
      puVar21[3] = uVar20;
      fVar11 = *pfVar23;
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar22[1];
      fVar16 = pfVar22[2];
      fVar17 = pfVar22[3];
      *param_7 = ((fVar11 - *pfVar22) - fVar11) * (fVar7 * fVar3) + fVar11;
      param_7[1] = ((fVar12 - fVar15) - fVar12) * (fVar8 * fVar4) + fVar12;
      param_7[2] = ((fVar13 - fVar16) - fVar13) * (fVar9 * fVar5) + fVar13;
      param_7[3] = ((fVar14 - fVar17) - fVar14) * (fVar10 * fVar6) + fVar14;
      param_7 = param_7 + 4;
      puVar21 = puVar21 + 4;
      pfVar22 = pfVar22 + 4;
      pfVar23 = pfVar23 + 4;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d4b370 */
uint F_00d4b370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd4b370u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx <= *param_3);
  param_2[1] = -(uint)(fVar4 <= fVar1);
  param_2[2] = -(uint)(fVar5 <= fVar2);
  param_2[3] = -(uint)(fVar6 <= fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d4b390 */
uint F_00d4b390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd4b390u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 < *in_ecx);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return (uint)param_2;
}

/* ref: FUN_00d4b3b0 */
uint F_00d4b3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd4b3b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < 0.0);
  param_2[1] = -(uint)(fVar1 < 0.0);
  param_2[2] = -(uint)(fVar2 < 0.0);
  param_2[3] = -(uint)(fVar3 < 0.0);
  return (uint)param_2;
}

/* ref: FUN_00d4b3d0 */
uint F_00d4b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd4b3d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = ((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0))) * *in_ecx;
  in_ecx[1] = (fVar3 * (*(float *)((char *)&auVar2 + 4))) * in_ecx[1];
  in_ecx[2] = (fVar4 * (*(float *)((char *)&auVar2 + 8))) * in_ecx[2];
  in_ecx[3] = (fVar5 * (*(float *)((char *)&auVar2 + 12))) * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d4b6e0 */
uint F_00d4b6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd4b6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_5[5];
  uVar2 = param_5[6];
  uVar3 = param_5[7];
  param_1[4] = param_5[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_5[9];
  uVar2 = param_5[10];
  uVar3 = param_5[0xb];
  param_1[8] = param_5[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *param_2 = *param_6;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_6[5];
  uVar2 = param_6[6];
  uVar3 = param_6[7];
  param_2[4] = param_6[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_6[9];
  uVar2 = param_6[10];
  uVar3 = param_6[0xb];
  param_2[8] = param_6[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_7[1];
  uVar2 = param_7[2];
  uVar3 = param_7[3];
  *param_3 = *param_7;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_7[5];
  uVar2 = param_7[6];
  uVar3 = param_7[7];
  param_3[4] = param_7[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  uVar1 = param_7[9];
  uVar2 = param_7[10];
  uVar3 = param_7[0xb];
  param_3[8] = param_7[8];
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  uVar1 = param_8[1];
  uVar2 = param_8[2];
  uVar3 = param_8[3];
  *param_4 = *param_8;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_8[5];
  uVar2 = param_8[6];
  uVar3 = param_8[7];
  param_4[4] = param_8[4];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  uVar1 = param_8[9];
  uVar2 = param_8[10];
  uVar3 = param_8[0xb];
  param_4[8] = param_8[8];
  param_4[9] = uVar1;
  param_4[10] = uVar2;
  param_4[0xb] = uVar3;
  return (uint)param_8;
}

/* ref: FUN_00d4b760 */
unsigned int F_00d4b760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd4b760u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  fVar13 = *param_4;
  fVar14 = param_4[1];
  fVar15 = param_4[2];
  fVar16 = param_4[3];
  (*(float *)((char *)&auVar22 + 0)) = fVar4 * fVar4;
  (*(float *)((char *)&auVar22 + 4)) = fVar8 * fVar8;
  (*(float *)((char *)&auVar22 + 8)) = fVar12 * fVar12;
  (*(float *)((char *)&auVar22 + 12)) = fVar16 * fVar16;
  fVar17 = ((fVar2 * fVar2 + fVar1 * fVar1) + fVar3 * fVar3) + (*(float *)((char *)&auVar22 + 0));
  fVar18 = ((fVar6 * fVar6 + fVar5 * fVar5) + fVar7 * fVar7) + (*(float *)((char *)&auVar22 + 4));
  fVar19 = ((fVar10 * fVar10 + fVar9 * fVar9) + fVar11 * fVar11) + (*(float *)((char *)&auVar22 + 8));
  fVar20 = ((fVar14 * fVar14 + fVar13 * fVar13) + fVar15 * fVar15) + (*(float *)((char *)&auVar22 + 12));
  (*(undefined4 *)((char *)&auVar23 + 4)) = (undefined4)gen_fl2bits(fVar18);
  (*(undefined4 *)((char *)&auVar23 + 0)) = (undefined4)gen_fl2bits(fVar17);
  (*(undefined4 *)((char *)&auVar23 + 8)) = (undefined4)gen_fl2bits(fVar19);
  (*(undefined4 *)((char *)&auVar23 + 12)) = (undefined4)gen_fl2bits(fVar20);
  gen_rsqrtps(&(auVar23), &(auVar22), &(auVar23));
  fVar21 = (*(float *)((char *)&auVar23 + 0));
  fVar24 = (*(float *)((char *)&auVar23 + 4));
  fVar25 = (*(float *)((char *)&auVar23 + 8));
  fVar26 = (*(float *)((char *)&auVar23 + 12));
  fVar17 = (*(float *)&REFG(undefined, 0x1136eb0) - (fVar21 * fVar17) * fVar21) *
           (*(float *)&REFG(undefined, 0x1136ec0) * fVar21);
  fVar18 = (*(float *)&REFG(undefined, 0x1136eb4) - (fVar24 * fVar18) * fVar24) *
           (*(float *)&REFG(undefined, 0x1136ec4) * fVar24);
  fVar19 = (*(float *)&REFG(undefined, 0x1136eb8) - (fVar25 * fVar19) * fVar25) *
           (*(float *)&REFG(undefined, 0x1136ec8) * fVar25);
  fVar20 = (*(float *)&REFG(undefined, 0x1136ebc) - (fVar26 * fVar20) * fVar26) *
           (*(float *)&REFG(undefined, 0x1136ecc) * fVar26);
  *param_1 = fVar17 * fVar1;
  param_1[1] = fVar17 * fVar2;
  param_1[2] = fVar17 * fVar3;
  param_1[3] = fVar17 * fVar4;
  *param_2 = fVar18 * fVar5;
  param_2[1] = fVar18 * fVar6;
  param_2[2] = fVar18 * fVar7;
  param_2[3] = fVar18 * fVar8;
  *param_3 = fVar19 * fVar9;
  param_3[1] = fVar19 * fVar10;
  param_3[2] = fVar19 * fVar11;
  param_3[3] = fVar19 * fVar12;
  *param_4 = fVar20 * fVar13;
  param_4[1] = fVar20 * fVar14;
  param_4[2] = fVar20 * fVar15;
  param_4[3] = fVar20 * fVar16;
  return 0;
}

/* ref: FUN_00d4cad0 */
uint F_00d4cad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xd4cad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  undefined4 * param_11 = (undefined4 *)(uintptr_t)gen_a10;
  undefined4 * param_12 = (undefined4 *)(uintptr_t)gen_a11;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_9[1];
  uVar2 = param_9[2];
  uVar3 = param_9[3];
  *param_1 = *param_9;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_9[5];
  uVar2 = param_9[6];
  uVar3 = param_9[7];
  param_1[4] = param_9[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_9[9];
  uVar2 = param_9[10];
  uVar3 = param_9[0xb];
  param_1[8] = param_9[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_10[1];
  uVar2 = param_10[2];
  uVar3 = param_10[3];
  *param_2 = *param_10;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_10[5];
  uVar2 = param_10[6];
  uVar3 = param_10[7];
  param_2[4] = param_10[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_10[9];
  uVar2 = param_10[10];
  uVar3 = param_10[0xb];
  param_2[8] = param_10[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *param_3 = *param_11;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_11[5];
  uVar2 = param_11[6];
  uVar3 = param_11[7];
  param_3[4] = param_11[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  uVar1 = param_11[9];
  uVar2 = param_11[10];
  uVar3 = param_11[0xb];
  param_3[8] = param_11[8];
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  uVar1 = param_12[1];
  uVar2 = param_12[2];
  uVar3 = param_12[3];
  *param_4 = *param_12;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_12[5];
  uVar2 = param_12[6];
  uVar3 = param_12[7];
  param_4[4] = param_12[4];
  param_4[5] = uVar1;
  param_4[6] = uVar2;
  param_4[7] = uVar3;
  uVar1 = param_12[9];
  uVar2 = param_12[10];
  uVar3 = param_12[0xb];
  param_4[8] = param_12[8];
  param_4[9] = uVar1;
  param_4[10] = uVar2;
  param_4[0xb] = uVar3;
  return (uint)param_12;
}

/* ref: FUN_00d4d080 */
unsigned int F_00d4d080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd4d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float * pfVar19;
  
  if (param_7 == 0) {
    if (param_6 == -1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 + -1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar1 + (param_1 - param_3))));
          *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
        } while (iVar18 != 0);
        return 0;
      }
    }
    else if (param_6 == 0) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          pfVar1 = ((float *)GEN_TOP(((param_1 - (int)param_2) + (int)pfVar19)));
          pfVar2 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar1)));
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          fVar10 = *pfVar19;
          fVar11 = pfVar19[1];
          fVar12 = pfVar19[2];
          fVar13 = pfVar19[3];
          fVar14 = *pfVar19;
          fVar15 = pfVar19[1];
          fVar16 = pfVar19[2];
          fVar17 = pfVar19[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 + -1;
          *pfVar1 = (*pfVar2 - fVar10) * fVar3 + fVar14;
          pfVar1[1] = (fVar7 - fVar11) * fVar4 + fVar15;
          pfVar1[2] = (fVar8 - fVar12) * fVar5 + fVar16;
          pfVar1[3] = (fVar9 - fVar13) * fVar6 + fVar17;
        } while (iVar18 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 + -1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar1 + (param_1 - param_3))));
          *pfVar2 = ((fVar7 + *pfVar1) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar8 + fVar11) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar9 + fVar12) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar10 + fVar13) - fVar10) * fVar6 + fVar10;
        } while (iVar18 != 0);
        return 0;
      }
    }
  }
  else if (param_7 == 1) {
    if (param_6 == -1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar19 = pfVar19 + 4;
          iVar18 = iVar18 + -1;
          pfVar2 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pfVar1)));
          *pfVar2 = ((fVar7 - *pfVar1) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar8 - fVar11) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar9 - fVar12) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar10 - fVar13) - fVar10) * fVar6 + fVar10;
        } while (iVar18 != 0);
      }
    }
    else if (param_6 == 0) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          fVar10 = pfVar19[1];
          fVar11 = pfVar19[2];
          fVar12 = pfVar19[3];
          fVar13 = pfVar19[1];
          fVar14 = pfVar19[2];
          fVar15 = pfVar19[3];
          iVar18 = iVar18 + -1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + (param_1 - param_3) + (param_3 - (int)param_2))));
          *pfVar2 = (*pfVar1 - *pfVar19) * fVar3 + *pfVar19;
          pfVar2[1] = (fVar7 - fVar10) * fVar4 + fVar13;
          pfVar2[2] = (fVar8 - fVar11) * fVar5 + fVar14;
          pfVar2[3] = (fVar9 - fVar12) * fVar6 + fVar15;
          pfVar19 = pfVar19 + 4;
        } while (iVar18 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      iVar18 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < iVar18) {
        pfVar19 = param_2;
        do {
          fVar7 = *pfVar19;
          fVar8 = pfVar19[1];
          fVar9 = pfVar19[2];
          fVar10 = pfVar19[3];
          pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar19)));
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          iVar18 = iVar18 + -1;
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + (param_1 - param_3) + (param_3 - (int)param_2))));
          *pfVar2 = ((*pfVar1 + fVar7) - fVar7) * fVar3 + fVar7;
          pfVar2[1] = ((fVar11 + fVar8) - fVar8) * fVar4 + fVar8;
          pfVar2[2] = ((fVar12 + fVar9) - fVar9) * fVar5 + fVar9;
          pfVar2[3] = ((fVar13 + fVar10) - fVar10) * fVar6 + fVar10;
          pfVar19 = pfVar19 + 4;
        } while (iVar18 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d52230 */
uint F_00d52230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd52230u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar8 [16];
  float fVar11;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) - fVar3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) - fVar2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) - fVar4);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) - fVar5);
  gen_rsqrtps(&(auVar8), &(in_XMM3), &(auVar1));
  (*(float *)((char *)&auVar6 + 0)) =
       ((fVar2 * *(float *)&REFG(undefined, 0x1136f40) + *(float *)&REFG(undefined, 0x1136f30)) * fVar2 +
       *(float *)&REFG(undefined, 0x1136f20)) * fVar2 + *(float *)&REFG(undefined, 0x1136f10);
  (*(float *)((char *)&auVar6 + 4)) =
       ((fVar3 * *(float *)&REFG(undefined, 0x1136f44) + *(float *)&REFG(undefined, 0x1136f34)) * fVar3 +
       *(float *)&REFG(undefined, 0x1136f24)) * fVar3 + *(float *)&REFG(undefined, 0x1136f14);
  (*(float *)((char *)&auVar6 + 8)) =
       ((fVar4 * *(float *)&REFG(undefined, 0x1136f48) + *(float *)&REFG(undefined, 0x1136f38)) * fVar4 +
       *(float *)&REFG(undefined, 0x1136f28)) * fVar4 + *(float *)&REFG(undefined, 0x1136f18);
  (*(float *)((char *)&auVar6 + 12)) =
       ((fVar5 * *(float *)&REFG(undefined, 0x1136f4c) + *(float *)&REFG(undefined, 0x1136f3c)) * fVar5 +
       *(float *)&REFG(undefined, 0x1136f2c)) * fVar5 + *(float *)&REFG(undefined, 0x1136f1c);
  fVar7 = (*(float *)((char *)&auVar8 + 0));
  fVar9 = (*(float *)((char *)&auVar8 + 4));
  fVar10 = (*(float *)((char *)&auVar8 + 8));
  fVar11 = (*(float *)((char *)&auVar8 + 12));
  (*(undefined4 *)((char *)&auVar8 + 4)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x1136eb4) -
                             (fVar9 * (*(float *)&REFG(undefined, 0x1138af4) - fVar3)) * fVar9) *
                             (*(float *)&REFG(undefined, 0x1136ec4) * fVar9));
  (*(undefined4 *)((char *)&auVar8 + 0)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x1136eb0) -
                             (fVar7 * (*(float *)&REFG(undefined, 0x1138af0) - fVar2)) * fVar7) *
                             (*(float *)&REFG(undefined, 0x1136ec0) * fVar7));
  (*(undefined4 *)((char *)&auVar8 + 8)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x1136eb8) -
                             (fVar10 * (*(float *)&REFG(undefined, 0x1138af8) - fVar4)) * fVar10) *
                             (*(float *)&REFG(undefined, 0x1136ec8) * fVar10));
  (*(undefined4 *)((char *)&auVar8 + 12)) =
       (undefined4)
       gen_fl2bits((*(float *)&REFG(undefined, 0x1136ebc) - (fVar11 * (*(float *)&REFG(undefined, 0x1138afc) - fVar5)) * fVar11)
                   * (*(float *)&REFG(undefined, 0x1136ecc) * fVar11));
  gen_divps(&(auVar8), &(auVar6), &(auVar8));
  memcpy(&(*param_1), &(auVar8), sizeof(auVar8) < sizeof(*param_1) ? sizeof(auVar8) : sizeof(*param_1));
  return (uint)param_2;
}

/* ref: FUN_00d526c0 */
unsigned int F_00d526c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd526c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  gen_v12 * param_4 = (gen_v12 *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  float * pfVar1;
  float * pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  float * pfVar36;
  float * pfVar37;
  float * pfVar38;
  gen_v16 * pauVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_70;
  float fStack_6c;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_14;
  
  if (param_7 == 0) {
    if (param_6 == -1) {
      memcpy(&(auVar35), &(*param_4), sizeof(*param_4) < sizeof(auVar35) ? sizeof(*param_4) : sizeof(auVar35));
      fVar4 = *(float *)param_4[1];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = (float *)(param_1 + 0x20);
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - *(float *)*param_4;
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - *(float *)(*param_4 + 4);
        fVar45 = *(float *)&REFG(undefined, 0x1138af8) - *(float *)(*param_4 + 8);
        fVar40 = *(float *)&REFG(undefined, 0x1138afc) - fVar4;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          fVar42 = pfVar36[-0xb];
          fVar44 = pfVar36[-10];
          fVar46 = pfVar36[-9];
          fVar5 = pfVar36[-8];
          fVar6 = pfVar36[-7];
          fVar7 = pfVar36[-6];
          fVar8 = pfVar36[-5];
          fVar9 = *pfVar36;
          fVar10 = pfVar36[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar36[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pfVar36)));
          fVar13 = *pfVar2;
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          fVar17 = pfVar37[1];
          fVar18 = pfVar37[2];
          fVar19 = pfVar37[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + -0x20 + (int)pfVar36)));
          fVar24 = *pfVar2;
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          fVar28 = *pfVar36;
          fVar29 = pfVar36[1];
          fVar30 = pfVar36[2];
          fVar31 = pfVar36[3];
          local_40 = (*(float *)((char *)&auVar35 + 0));
          fStack_3c = (*(float *)((char *)&auVar35 + 4));
          fStack_38 = (*(float *)((char *)&auVar35 + 8));
          pfVar38[-8] = (pfVar36[-0xc] - *pfVar37) * local_40 + pfVar36[-0xc] * fVar41;
          pfVar38[-7] = (fVar42 - fVar17) * local_40 + fVar42 * fVar41;
          pfVar38[-6] = (fVar44 - fVar18) * local_40 + fVar44 * fVar41;
          pfVar38[-5] = (fVar46 - fVar19) * local_40 + fVar46 * fVar41;
          pfVar38[-4] = (fVar5 - fVar24) * fStack_3c + fVar5 * fVar43;
          pfVar38[-3] = (fVar6 - fVar25) * fStack_3c + fVar6 * fVar43;
          pfVar38[-2] = (fVar7 - fVar26) * fStack_3c + fVar7 * fVar43;
          pfVar38[-1] = (fVar8 - fVar27) * fStack_3c + fVar8 * fVar43;
          *pfVar38 = ((*(float *)((char *)&auVar3 + 0)) - fVar20) * fStack_38 + (*(float *)((char *)&auVar3 + 0)) * fVar45;
          pfVar38[1] = ((*(float *)((char *)&auVar3 + 4)) - fVar21) * fStack_38 + (*(float *)((char *)&auVar3 + 4)) * fVar45;
          pfVar38[2] = ((*(float *)((char *)&auVar3 + 8)) - fVar22) * fStack_38 + (*(float *)((char *)&auVar3 + 8)) * fVar45;
          pfVar38[3] = ((*(float *)((char *)&auVar3 + 12)) - fVar23) * fStack_38 + (*(float *)((char *)&auVar3 + 12)) * fVar45;
          pfVar38[4] = (fVar9 - fVar13) * fVar4 + fVar28 * fVar40;
          pfVar38[5] = (fVar10 - fVar14) * fVar4 + fVar29 * fVar40;
          pfVar38[6] = (fVar11 - fVar15) * fVar4 + fVar30 * fVar40;
          pfVar38[7] = (fVar12 - fVar16) * fVar4 + fVar31 * fVar40;
          pfVar36 = pfVar36 + 0x10;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 0) {
      memcpy(&(auVar35), &(*param_4), sizeof(*param_4) < sizeof(auVar35) ? sizeof(*param_4) : sizeof(auVar35));
      fVar4 = *(float *)param_4[1];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = (float *)(param_1 + 0x30);
        pfVar37 = param_3 + 8;
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - *(float *)*param_4;
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - *(float *)(*param_4 + 4);
        fVar45 = *(float *)&REFG(undefined, 0x1138af8) - *(float *)(*param_4 + 8);
        fVar40 = *(float *)&REFG(undefined, 0x1138afc) - fVar4;
        pfVar36 = param_2;
        do {
          fVar42 = pfVar36[1];
          fVar44 = pfVar36[2];
          fVar46 = pfVar36[3];
          fVar5 = pfVar36[4];
          fVar6 = pfVar36[5];
          fVar7 = pfVar36[6];
          fVar8 = pfVar36[7];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar37)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar37)))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar37)))) : sizeof(auVar3));
          pfVar2 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))));
          fVar9 = *pfVar2;
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          fVar13 = pfVar37[-7];
          fVar14 = pfVar37[-6];
          fVar15 = pfVar37[-5];
          fVar16 = pfVar37[-4];
          fVar17 = pfVar37[-3];
          fVar18 = pfVar37[-2];
          fVar19 = pfVar37[-1];
          fVar24 = *pfVar37;
          fVar25 = pfVar37[1];
          fVar20 = pfVar37[4];
          fVar21 = pfVar37[5];
          fVar22 = pfVar37[6];
          fVar23 = pfVar37[7];
          local_30 = (*(float *)((char *)&auVar35 + 0));
          fStack_2c = (*(float *)((char *)&auVar35 + 4));
          fStack_28 = (*(float *)((char *)&auVar35 + 8));
          local_70 = (*(float *)((char *)&auVar3 + 8));
          fStack_6c = (*(float *)((char *)&auVar3 + 12));
          fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar37 + 2) >> 0x20));
          local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar37 + 2));
          pfVar38[-0xc] = pfVar37[-8] * local_30 + *pfVar36 * fVar41;
          pfVar38[-0xb] = fVar13 * local_30 + fVar42 * fVar41;
          pfVar38[-10] = fVar14 * local_30 + fVar44 * fVar41;
          pfVar38[-9] = fVar15 * local_30 + fVar46 * fVar41;
          pfVar38[-8] = fVar16 * fStack_2c + fVar5 * fVar43;
          pfVar38[-7] = fVar17 * fStack_2c + fVar6 * fVar43;
          pfVar38[-6] = fVar18 * fStack_2c + fVar7 * fVar43;
          pfVar38[-5] = fVar19 * fStack_2c + fVar8 * fVar43;
          pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar37)));
          *pfVar2 = fVar24 * fStack_28 + (*(float *)((char *)&auVar3 + 0)) * fVar45;
          pfVar2[1] = fVar25 * fStack_28 + (*(float *)((char *)&auVar3 + 4)) * fVar45;
          pfVar2[2] = local_40 * fStack_28 + local_70 * fVar45;
          pfVar2[3] = fStack_3c * fStack_28 + fStack_6c * fVar45;
          *pfVar38 = fVar20 * fVar4 + fVar9 * fVar40;
          pfVar38[1] = fVar21 * fVar4 + fVar10 * fVar40;
          pfVar38[2] = fVar22 * fVar4 + fVar11 * fVar40;
          pfVar38[3] = fVar23 * fVar4 + fVar12 * fVar40;
          pfVar36 = pfVar36 + 0x10;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar4 = *(float *)*param_4;
      fVar41 = *(float *)(*param_4 + 4);
      fVar43 = *(float *)(*param_4 + 8);
      fVar45 = *(float *)param_4[1];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = (float *)(param_1 + 0x20);
        fVar40 = *(float *)&REFG(undefined, 0x1138af0) - fVar4;
        fVar42 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
        fVar46 = *(float *)&REFG(undefined, 0x1138afc) - fVar45;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          pfVar2 = pfVar36 + -0xc;
          fVar5 = pfVar36[-0xb];
          fVar6 = pfVar36[-10];
          fVar7 = pfVar36[-9];
          fVar8 = pfVar36[-8];
          fVar9 = pfVar36[-7];
          fVar10 = pfVar36[-6];
          fVar11 = pfVar36[-5];
          fVar12 = *pfVar36;
          fVar13 = pfVar36[1];
          fVar14 = pfVar36[2];
          fVar15 = pfVar36[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar36 + ((int)param_3 - (int)param_2))));
          fVar16 = *pfVar1;
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar36 + ((int)param_3 - (int)param_2) + -0x20)));
          fVar20 = *pfVar1;
          fVar21 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          fVar24 = *pfVar36;
          fVar25 = pfVar36[1];
          fVar26 = pfVar36[2];
          fVar27 = pfVar36[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar28 = *pfVar1;
          fVar29 = pfVar1[1];
          fVar30 = pfVar1[2];
          fVar31 = pfVar1[3];
          fVar32 = pfVar37[1];
          fVar33 = pfVar37[2];
          fVar34 = pfVar37[3];
          pfVar36 = pfVar36 + 0x10;
          pfVar38[-8] = *pfVar2 * fVar40 + (*pfVar2 + *pfVar37) * fVar4;
          pfVar38[-7] = fVar5 * fVar40 + (fVar5 + fVar32) * fVar4;
          pfVar38[-6] = fVar6 * fVar40 + (fVar6 + fVar33) * fVar4;
          pfVar38[-5] = fVar7 * fVar40 + (fVar7 + fVar34) * fVar4;
          pfVar38[-4] = fVar8 * fVar42 + (fVar20 + fVar8) * fVar41;
          pfVar38[-3] = fVar9 * fVar42 + (fVar21 + fVar9) * fVar41;
          pfVar38[-2] = fVar10 * fVar42 + (fVar22 + fVar10) * fVar41;
          pfVar38[-1] = fVar11 * fVar42 + (fVar23 + fVar11) * fVar41;
          *pfVar38 = (*(float *)((char *)&auVar3 + 0)) * fVar44 + (fVar28 + (*(float *)((char *)&auVar3 + 0))) * fVar43;
          pfVar38[1] = (*(float *)((char *)&auVar3 + 4)) * fVar44 + (fVar29 + (*(float *)((char *)&auVar3 + 4))) * fVar43;
          pfVar38[2] = (*(float *)((char *)&auVar3 + 8)) * fVar44 + (fVar30 + (*(float *)((char *)&auVar3 + 8))) * fVar43;
          pfVar38[3] = (*(float *)((char *)&auVar3 + 12)) * fVar44 + (fVar31 + (*(float *)((char *)&auVar3 + 12))) * fVar43;
          pfVar38[4] = fVar24 * fVar46 + (fVar12 + fVar16) * fVar45;
          pfVar38[5] = fVar25 * fVar46 + (fVar13 + fVar17) * fVar45;
          pfVar38[6] = fVar26 * fVar46 + (fVar14 + fVar18) * fVar45;
          pfVar38[7] = fVar27 * fVar46 + (fVar15 + fVar19) * fVar45;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  else if (param_7 == 1) {
    if (param_6 == -1) {
      memcpy(&(auVar35), &(*param_4), sizeof(*param_4) < sizeof(auVar35) ? sizeof(*param_4) : sizeof(auVar35));
      fVar4 = *(float *)param_4[1];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = (float *)(param_1 + 0x20);
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - *(float *)*param_4;
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - *(float *)(*param_4 + 4);
        fVar45 = *(float *)&REFG(undefined, 0x1138af8) - *(float *)(*param_4 + 8);
        fVar40 = *(float *)&REFG(undefined, 0x1138afc) - fVar4;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          fVar42 = pfVar36[-0xb];
          fVar44 = pfVar36[-10];
          fVar46 = pfVar36[-9];
          fVar5 = pfVar36[-8];
          fVar6 = pfVar36[-7];
          fVar7 = pfVar36[-6];
          fVar8 = pfVar36[-5];
          fVar9 = *pfVar36;
          fVar10 = pfVar36[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar36[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pfVar36)));
          fVar13 = *pfVar2;
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          fVar17 = pfVar37[1];
          fVar18 = pfVar37[2];
          fVar19 = pfVar37[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + -0x20 + (int)pfVar36)));
          fVar24 = *pfVar2;
          fVar25 = pfVar2[1];
          fVar26 = pfVar2[2];
          fVar27 = pfVar2[3];
          fVar28 = *pfVar36;
          fVar29 = pfVar36[1];
          fVar30 = pfVar36[2];
          fVar31 = pfVar36[3];
          local_40 = (*(float *)((char *)&auVar35 + 0));
          fStack_3c = (*(float *)((char *)&auVar35 + 4));
          fStack_38 = (*(float *)((char *)&auVar35 + 8));
          pfVar38[-8] = (pfVar36[-0xc] - *pfVar37) * local_40 + pfVar36[-0xc] * fVar41;
          pfVar38[-7] = (fVar42 - fVar17) * local_40 + fVar42 * fVar41;
          pfVar38[-6] = (fVar44 - fVar18) * local_40 + fVar44 * fVar41;
          pfVar38[-5] = (fVar46 - fVar19) * local_40 + fVar46 * fVar41;
          pfVar38[-4] = (fVar5 - fVar24) * fStack_3c + fVar5 * fVar43;
          pfVar38[-3] = (fVar6 - fVar25) * fStack_3c + fVar6 * fVar43;
          pfVar38[-2] = (fVar7 - fVar26) * fStack_3c + fVar7 * fVar43;
          pfVar38[-1] = (fVar8 - fVar27) * fStack_3c + fVar8 * fVar43;
          *pfVar38 = ((*(float *)((char *)&auVar3 + 0)) - fVar20) * fStack_38 + (*(float *)((char *)&auVar3 + 0)) * fVar45;
          pfVar38[1] = ((*(float *)((char *)&auVar3 + 4)) - fVar21) * fStack_38 + (*(float *)((char *)&auVar3 + 4)) * fVar45;
          pfVar38[2] = ((*(float *)((char *)&auVar3 + 8)) - fVar22) * fStack_38 + (*(float *)((char *)&auVar3 + 8)) * fVar45;
          pfVar38[3] = ((*(float *)((char *)&auVar3 + 12)) - fVar23) * fStack_38 + (*(float *)((char *)&auVar3 + 12)) * fVar45;
          pfVar38[4] = (fVar9 - fVar13) * fVar4 + fVar28 * fVar40;
          pfVar38[5] = (fVar10 - fVar14) * fVar4 + fVar29 * fVar40;
          pfVar38[6] = (fVar11 - fVar15) * fVar4 + fVar30 * fVar40;
          pfVar38[7] = (fVar12 - fVar16) * fVar4 + fVar31 * fVar40;
          pfVar36 = pfVar36 + 0x10;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else if (param_6 == 0) {
      fVar4 = *(float *)*param_4;
      fVar41 = *(float *)(*param_4 + 4);
      fVar43 = *(float *)(*param_4 + 8);
      fVar45 = *(float *)param_4[1];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = (float *)(param_1 + 0x30);
        pauVar39 = (gen_v16 *)(param_2 + 8);
        fVar40 = *(float *)&REFG(undefined, 0x1138af0) - fVar4;
        fVar42 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
        fVar46 = *(float *)&REFG(undefined, 0x1138afc) - fVar45;
        pfVar37 = param_3;
        do {
          pfVar36 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar25 = *pfVar36;
          fVar26 = pfVar36[1];
          fVar27 = pfVar36[2];
          fVar28 = pfVar36[3];
          fVar5 = *(float *)(pauVar39[-2] + 4);
          fVar6 = *(float *)(pauVar39[-2] + 8);
          fVar7 = *(float *)(pauVar39[-2] + 0xc);
          fVar8 = *(float *)pauVar39[-1];
          fVar9 = *(float *)(pauVar39[-1] + 4);
          fVar10 = *(float *)(pauVar39[-1] + 8);
          fVar11 = *(float *)(pauVar39[-1] + 0xc);
          memcpy(&(auVar3), &(*pauVar39), sizeof(*pauVar39) < sizeof(auVar3) ? sizeof(*pauVar39) : sizeof(auVar3));
          fVar12 = *(float *)pauVar39[1];
          fVar13 = *(float *)(pauVar39[1] + 4);
          fVar14 = *(float *)(pauVar39[1] + 8);
          fVar15 = *(float *)(pauVar39[1] + 0xc);
          fVar16 = pfVar37[1];
          fVar17 = pfVar37[2];
          fVar18 = pfVar37[3];
          fVar19 = pfVar37[4];
          fVar20 = pfVar37[5];
          fVar21 = pfVar37[6];
          fVar22 = pfVar37[7];
          pfVar36 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pauVar39)));
          fVar23 = *pfVar36;
          fVar24 = pfVar36[1];
          local_70 = gen_bits2f((uint)*(undefined8 *)(pfVar36 + 2));
          fStack_6c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar36 + 2) >> 0x20));
          fStack_3c = (*(float *)((char *)&auVar3 + 12));
          local_40 = (*(float *)((char *)&auVar3 + 8));
          pfVar38[-0xc] = *(float *)pauVar39[-2] * fVar40 + *pfVar37 * fVar4;
          pfVar38[-0xb] = fVar5 * fVar40 + fVar16 * fVar4;
          pfVar38[-10] = fVar6 * fVar40 + fVar17 * fVar4;
          pfVar38[-9] = fVar7 * fVar40 + fVar18 * fVar4;
          pfVar38[-8] = fVar8 * fVar42 + fVar19 * fVar41;
          pfVar38[-7] = fVar9 * fVar42 + fVar20 * fVar41;
          pfVar38[-6] = fVar10 * fVar42 + fVar21 * fVar41;
          pfVar38[-5] = fVar11 * fVar42 + fVar22 * fVar41;
          pfVar36 = ((float *)GEN_TOP(((int)pauVar39 + (param_1 - (int)param_2))));
          *pfVar36 = (*(float *)((char *)&auVar3 + 0)) * fVar44 + fVar23 * fVar43;
          pfVar36[1] = (*(float *)((char *)&auVar3 + 4)) * fVar44 + fVar24 * fVar43;
          pfVar36[2] = local_40 * fVar44 + local_70 * fVar43;
          pfVar36[3] = fStack_3c * fVar44 + fStack_6c * fVar43;
          *pfVar38 = fVar12 * fVar46 + fVar25 * fVar45;
          pfVar38[1] = fVar13 * fVar46 + fVar26 * fVar45;
          pfVar38[2] = fVar14 * fVar46 + fVar27 * fVar45;
          pfVar38[3] = fVar15 * fVar46 + fVar28 * fVar45;
          pfVar37 = pfVar37 + 0x10;
          pauVar39 = pauVar39 + 4;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar4 = *(float *)*param_4;
      fVar41 = *(float *)(*param_4 + 4);
      fVar43 = *(float *)(*param_4 + 8);
      fVar45 = *(float *)param_4[1];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar38 = (float *)(param_1 + 0x20);
        fVar40 = *(float *)&REFG(undefined, 0x1138af0) - fVar4;
        fVar42 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
        fVar46 = *(float *)&REFG(undefined, 0x1138afc) - fVar45;
        pfVar36 = param_2 + 0xc;
        pfVar37 = param_3;
        do {
          fVar5 = *pfVar36;
          fVar6 = pfVar36[1];
          fVar7 = pfVar36[2];
          fVar8 = pfVar36[3];
          memcpy(&(auVar3), &(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) < sizeof(auVar3) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar38 + ((int)param_2 - param_1))))) : sizeof(auVar3));
          pfVar2 = pfVar36 + -0xc;
          fVar9 = pfVar36[-0xb];
          fVar10 = pfVar36[-10];
          fVar11 = pfVar36[-9];
          fVar12 = pfVar36[-8];
          fVar13 = pfVar36[-7];
          fVar14 = pfVar36[-6];
          fVar15 = pfVar36[-5];
          pfVar1 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + (int)pfVar36)));
          fVar16 = *pfVar1;
          fVar17 = pfVar1[1];
          fVar18 = pfVar1[2];
          fVar19 = pfVar1[3];
          pfVar1 = ((float *)GEN_TOP((((int)param_3 - (int)param_2) + -0x20 + (int)pfVar36)));
          fVar20 = *pfVar1;
          fVar21 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar38 + ((int)param_3 - param_1))));
          fVar24 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar26 = pfVar1[2];
          fVar27 = pfVar1[3];
          fVar28 = pfVar37[1];
          fVar29 = pfVar37[2];
          fVar30 = pfVar37[3];
          pfVar36 = pfVar36 + 0x10;
          pfVar38[-8] = *pfVar2 * fVar40 + (*pfVar2 + *pfVar37) * fVar4;
          pfVar38[-7] = fVar9 * fVar40 + (fVar9 + fVar28) * fVar4;
          pfVar38[-6] = fVar10 * fVar40 + (fVar10 + fVar29) * fVar4;
          pfVar38[-5] = fVar11 * fVar40 + (fVar11 + fVar30) * fVar4;
          pfVar38[-4] = fVar12 * fVar42 + (fVar20 + fVar12) * fVar41;
          pfVar38[-3] = fVar13 * fVar42 + (fVar21 + fVar13) * fVar41;
          pfVar38[-2] = fVar14 * fVar42 + (fVar22 + fVar14) * fVar41;
          pfVar38[-1] = fVar15 * fVar42 + (fVar23 + fVar15) * fVar41;
          *pfVar38 = (*(float *)((char *)&auVar3 + 0)) * fVar44 + (fVar24 + (*(float *)((char *)&auVar3 + 0))) * fVar43;
          pfVar38[1] = (*(float *)((char *)&auVar3 + 4)) * fVar44 + (fVar25 + (*(float *)((char *)&auVar3 + 4))) * fVar43;
          pfVar38[2] = (*(float *)((char *)&auVar3 + 8)) * fVar44 + (fVar26 + (*(float *)((char *)&auVar3 + 8))) * fVar43;
          pfVar38[3] = (*(float *)((char *)&auVar3 + 12)) * fVar44 + (fVar27 + (*(float *)((char *)&auVar3 + 12))) * fVar43;
          pfVar38[4] = fVar5 * fVar46 + (fVar16 + fVar5) * fVar45;
          pfVar38[5] = fVar6 * fVar46 + (fVar17 + fVar6) * fVar45;
          pfVar38[6] = fVar7 * fVar46 + (fVar18 + fVar7) * fVar45;
          pfVar38[7] = fVar8 * fVar46 + (fVar19 + fVar8) * fVar45;
          pfVar37 = pfVar37 + 0x10;
          pfVar38 = pfVar38 + 0x10;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d53070 */
unsigned int F_00d53070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd53070u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  gen_v16 * param_4 = (gen_v16 *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  gen_v16 * param_6 = (gen_v16 *)(uintptr_t)gen_a5;
  gen_v16 * param_7 = (gen_v16 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  uint * puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  gen_v16 * pauVar24;
  float * pfVar25;
  undefined4 * puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar58;
  float fVar59;
  float fVar61;
  float fVar62;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  uint local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    F_00d4d080(param_1,param_3,param_5,param_7,param_8,param_9,param_10);
    return 0;
  }
  if (param_10 == 0) {
    if (param_9 == -1) {
      fVar11 = *(float *)*param_7;
      fVar64 = *(float *)(*param_7 + 4);
      fVar66 = *(float *)(*param_7 + 8);
      fVar67 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar26 = *(undefined4 *)*pauVar24;
          pauVar24 = (gen_v16 *)(*pauVar24 + 4);
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar25 + ((int)param_6 - (int)param_3))));
          fVar41 = pfVar1[1];
          fVar43 = pfVar1[2];
          fVar44 = pfVar1[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar25 + (param_5 - (int)param_6) + ((int)param_6 - (int)param_3)
                            )));
          fVar45 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar25 + (param_1 - (int)param_3))));
          *pfVar3 = ((fVar65 - *pfVar2) - fVar65) * (*pfVar1 * fVar11) + fVar65;
          pfVar3[1] = ((fVar35 - fVar45) - fVar35) * (fVar41 * fVar64) + fVar35;
          pfVar3[2] = ((fVar37 - fVar5) - fVar37) * (fVar43 * fVar66) + fVar37;
          pfVar3[3] = ((fVar39 - fVar6) - fVar39) * (fVar44 * fVar67) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_9 == 0) {
      memcpy(&(auVar60), &(*param_7), sizeof(*param_7) < sizeof(auVar60) ? sizeof(*param_7) : sizeof(auVar60));
      fVar11 = (*(float *)((char *)&auVar60 + 12));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        fVar43 = (*(float *)((char *)&auVar60 + 0));
        fVar35 = *(float *)&REFG(undefined, 0x1138af0) - fVar43;
        fVar44 = (*(float *)((char *)&auVar60 + 4));
        fVar37 = *(float *)&REFG(undefined, 0x1138af4) - fVar44;
        fVar45 = (*(float *)((char *)&auVar60 + 8));
        fVar39 = *(float *)&REFG(undefined, 0x1138af8) - fVar45;
        fVar41 = *(float *)&REFG(undefined, 0x1138afc) - fVar11;
        pauVar24 = param_6;
        fVar64 = *(float *)&REFG(undefined, 0x1138af0);
        fVar66 = *(float *)&REFG(undefined, 0x1138af4);
        fVar67 = *(float *)&REFG(undefined, 0x1138af8);
        fVar65 = *(float *)&REFG(undefined, 0x1138afc);
        do {
          fVar22 = *(float *)&REFG(undefined, 0x1138afc);
          fVar21 = *(float *)&REFG(undefined, 0x1138af8);
          fVar20 = *(float *)&REFG(undefined, 0x1138af4);
          fVar19 = *(float *)&REFG(undefined, 0x1138af0);
          memcpy(&(auVar53), &(*pauVar24), sizeof(*pauVar24) < sizeof(auVar53) ? sizeof(*pauVar24) : sizeof(auVar53));
          fVar5 = (*(float *)((char *)&auVar53 + 0));
          fVar7 = (*(float *)((char *)&auVar53 + 4));
          fVar9 = (*(float *)((char *)&auVar53 + 8));
          fVar12 = (*(float *)((char *)&auVar53 + 12));
          memcpy(&(auVar52), &(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar24)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar24)))) < sizeof(auVar52) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar24)))) : sizeof(auVar52));
          fVar6 = (*(float *)((char *)&auVar52 + 0));
          fVar8 = (*(float *)((char *)&auVar52 + 4));
          fVar10 = (*(float *)((char *)&auVar52 + 8));
          fVar13 = (*(float *)((char *)&auVar52 + 12));
          gen_rcpps(&(auVar52), &(auVar60), &(auVar52));
          gen_rcpps(&(auVar53), &(auVar52), &(auVar53));
          fVar50 = gen_bits2f(~-(uint)(fVar5 < fVar6) &
                              (uint)gen_fl2bits(fVar64 - ((*(float *)&REFG(undefined, 0x1136ea0) -
                                                          fVar5 * (*(float *)((char *)&auVar53 + 0))) * (*(float *)((char *)&auVar53 + 0)))
                                                         * (fVar6 * fVar35)) |
                              -(uint)(fVar5 < fVar6) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - fVar6 * (*(float *)((char *)&auVar52 + 0)))
                                                * (*(float *)((char *)&auVar52 + 0))) * (fVar5 * fVar43)));
          fVar54 = gen_bits2f(~-(uint)(fVar7 < fVar8) &
                              (uint)gen_fl2bits(fVar66 - ((*(float *)&REFG(undefined, 0x1136ea4) -
                                                          fVar7 * (*(float *)((char *)&auVar53 + 4))) * (*(float *)((char *)&auVar53 + 4)))
                                                         * (fVar8 * fVar37)) |
                              -(uint)(fVar7 < fVar8) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - fVar8 * (*(float *)((char *)&auVar52 + 4)))
                                                * (*(float *)((char *)&auVar52 + 4))) * (fVar7 * fVar44)));
          fVar56 = gen_bits2f(~-(uint)(fVar9 < fVar10) &
                              (uint)gen_fl2bits(fVar67 - ((*(float *)&REFG(undefined, 0x1136ea8) -
                                                          fVar9 * (*(float *)((char *)&auVar53 + 8))) * (*(float *)((char *)&auVar53 + 8)))
                                                         * (fVar10 * fVar39)) |
                              -(uint)(fVar9 < fVar10) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - fVar10 * (*(float *)((char *)&auVar52 + 8)))
                                                * (*(float *)((char *)&auVar52 + 8))) * (fVar9 * fVar45)));
          fVar58 = gen_bits2f(~-(uint)(fVar12 < fVar13) &
                              (uint)gen_fl2bits(fVar65 - ((*(float *)&REFG(undefined, 0x1136eac) -
                                                          fVar12 * (*(float *)((char *)&auVar53 + 12))) *
                                                         (*(float *)((char *)&auVar53 + 12))) * (fVar13 * fVar41)) |
                              -(uint)(fVar12 < fVar13) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - fVar13 * (*(float *)((char *)&auVar52 + 12))
                                                 ) * (*(float *)((char *)&auVar52 + 12))) * (fVar12 * fVar11)));
          uVar27 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar29 = -(uint)(fVar7 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar31 = -(uint)(fVar9 <= (float)REFG(undefined8, 0x1138ae8));
          uVar33 = -(uint)(fVar12 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar28 = -(uint)(fVar6 <= (float)REFG(undefined8, 0x1138ae0));
          uVar30 = -(uint)(fVar8 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar32 = -(uint)(fVar10 <= (float)REFG(undefined8, 0x1138ae8));
          uVar34 = -(uint)(fVar13 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar36 = uVar27 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0));
          uVar38 = uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar40 = uVar31 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8));
          uVar42 = uVar33 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar46 = uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0));
          uVar47 = uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4));
          uVar48 = uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8));
          uVar49 = uVar34 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc));
          pfVar25 = ((float *)GEN_TOP(((int)pauVar24 + (param_5 - (int)param_6))));
          fVar14 = *pfVar25;
          fVar51 = pfVar25[1];
          fVar55 = pfVar25[2];
          fVar57 = pfVar25[3];
          pfVar25 = ((float *)GEN_TOP((((int)param_3 - (int)param_6) + (int)pauVar24)));
          fVar59 = *pfVar25;
          fVar61 = pfVar25[1];
          fVar62 = pfVar25[2];
          fVar63 = pfVar25[3];
          pfVar25 = ((float *)GEN_TOP((((int)param_3 - (int)param_6) + (int)pauVar24)));
          fVar15 = *pfVar25;
          fVar16 = pfVar25[1];
          fVar17 = pfVar25[2];
          fVar18 = pfVar25[3];
          puVar4 = ((uint *)GEN_TOP((((int)param_2 - (int)param_6) + (int)pauVar24)));
          *puVar4 = ~uVar27 & (~uVar28 & (uint)gen_fl2bits((fVar64 - fVar50) * fVar6 +
                                                           fVar5 * fVar50) |
                              (uint)gen_fl2bits(fVar5) & uVar28) | (uint)gen_fl2bits(fVar6) & uVar27
          ;
          puVar4[1] = ~uVar29 & (~uVar30 & (uint)gen_fl2bits((fVar66 - fVar54) * fVar8 +
                                                             fVar7 * fVar54) |
                                (uint)gen_fl2bits(fVar7) & uVar30) |
                      (uint)gen_fl2bits(fVar8) & uVar29;
          puVar4[2] = ~uVar31 & (~uVar32 & (uint)gen_fl2bits((fVar67 - fVar56) * fVar10 +
                                                             fVar9 * fVar56) |
                                (uint)gen_fl2bits(fVar9) & uVar32) |
                      (uint)gen_fl2bits(fVar10) & uVar31;
          puVar4[3] = ~uVar33 & (~uVar34 & (uint)gen_fl2bits((fVar65 - fVar58) * fVar13 +
                                                             fVar12 * fVar58) |
                                (uint)gen_fl2bits(fVar12) & uVar34) |
                      (uint)gen_fl2bits(fVar13) & uVar33;
          pfVar25 = ((float *)GEN_TOP(((param_1 - (int)param_6) + (int)pauVar24)));
          *pfVar25 = gen_bits2f(~(uVar27 & uVar28) &
                                (~uVar27 & (~uVar28 & (uint)gen_fl2bits(fVar50) | uVar46) | uVar36)
                                | uVar27 & uVar28 & (uint)gen_fl2bits(fVar43)) * (fVar14 - fVar59) +
                     fVar15;
          pfVar25[1] = gen_bits2f(~(uVar29 & uVar30) &
                                  (~uVar29 & (~uVar30 & (uint)gen_fl2bits(fVar54) | uVar47) | uVar38
                                  ) | uVar29 & uVar30 & (uint)gen_fl2bits(fVar44)) *
                       (fVar51 - fVar61) + fVar16;
          pfVar25[2] = gen_bits2f(~(uVar31 & uVar32) &
                                  (~uVar31 & (~uVar32 & (uint)gen_fl2bits(fVar56) | uVar48) | uVar40
                                  ) | uVar31 & uVar32 & (uint)gen_fl2bits(fVar45)) *
                       (fVar55 - fVar62) + fVar17;
          pfVar25[3] = gen_bits2f(~(uVar33 & uVar34) &
                                  (~uVar33 & (~uVar34 & (uint)gen_fl2bits(fVar58) | uVar49) | uVar42
                                  ) | uVar33 & uVar34 & (uint)gen_fl2bits(fVar11)) *
                       (fVar57 - fVar63) + fVar18;
          pauVar24 = pauVar24 + 1;
          local_14 = local_14 + -1;
          fVar64 = fVar19;
          fVar66 = fVar20;
          fVar67 = fVar21;
          fVar65 = fVar22;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      fVar11 = *(float *)*param_7;
      fVar64 = *(float *)(*param_7 + 4);
      fVar66 = *(float *)(*param_7 + 8);
      fVar67 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar26 = *(undefined4 *)*pauVar24;
          pauVar24 = (gen_v16 *)(*pauVar24 + 4);
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP((((int)param_6 - (int)param_3) + (int)pfVar25)));
          pfVar2 = ((float *)GEN_TOP(((int)pfVar1 + (param_5 - (int)param_6))));
          fVar41 = pfVar2[1];
          fVar43 = pfVar2[2];
          fVar44 = pfVar2[3];
          fVar45 = pfVar1[1];
          fVar5 = pfVar1[2];
          fVar6 = pfVar1[3];
          pfVar3 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar25)));
          *pfVar3 = ((*pfVar2 + fVar65) - fVar65) * (fVar11 * *pfVar1) + fVar65;
          pfVar3[1] = ((fVar41 + fVar35) - fVar35) * (fVar64 * fVar45) + fVar35;
          pfVar3[2] = ((fVar43 + fVar37) - fVar37) * (fVar66 * fVar5) + fVar37;
          pfVar3[3] = ((fVar44 + fVar39) - fVar39) * (fVar67 * fVar6) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  else if (param_10 == 1) {
    if (param_9 == -1) {
      fVar11 = *(float *)*param_7;
      fVar64 = *(float *)(*param_7 + 4);
      fVar66 = *(float *)(*param_7 + 8);
      fVar67 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar26 = *(undefined4 *)*pauVar24;
          pauVar24 = (gen_v16 *)(*pauVar24 + 4);
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP((((int)param_6 - (int)param_3) + (int)pfVar25)));
          fVar41 = pfVar1[1];
          fVar43 = pfVar1[2];
          fVar44 = pfVar1[3];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar25 + (param_5 - (int)param_6) + ((int)param_6 - (int)param_3)
                            )));
          fVar45 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
          pfVar3 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar25)));
          *pfVar3 = ((fVar65 - *pfVar2) - fVar65) * (*pfVar1 * fVar11) + fVar65;
          pfVar3[1] = ((fVar35 - fVar45) - fVar35) * (fVar41 * fVar64) + fVar35;
          pfVar3[2] = ((fVar37 - fVar5) - fVar37) * (fVar43 * fVar66) + fVar37;
          pfVar3[3] = ((fVar39 - fVar6) - fVar39) * (fVar44 * fVar67) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
    }
    else if (param_9 == 0) {
      fVar11 = *(float *)*param_7;
      fVar64 = *(float *)(*param_7 + 4);
      fVar66 = *(float *)(*param_7 + 8);
      fVar67 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        fVar41 = *(float *)&REFG(undefined, 0x1138af0) - fVar11;
        fVar43 = *(float *)&REFG(undefined, 0x1138af4) - fVar64;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar66;
        fVar45 = *(float *)&REFG(undefined, 0x1138afc) - fVar67;
        pauVar24 = param_4;
        fVar65 = *(float *)&REFG(undefined, 0x1138af0);
        fVar35 = *(float *)&REFG(undefined, 0x1138af4);
        fVar37 = *(float *)&REFG(undefined, 0x1138af8);
        fVar39 = *(float *)&REFG(undefined, 0x1138afc);
        do {
          fVar14 = *(float *)&REFG(undefined, 0x1138afc);
          fVar13 = *(float *)&REFG(undefined, 0x1138af8);
          fVar12 = *(float *)&REFG(undefined, 0x1138af4);
          fVar10 = *(float *)&REFG(undefined, 0x1138af0);
          memcpy(&(auVar60), &(*pauVar24), sizeof(*pauVar24) < sizeof(auVar60) ? sizeof(*pauVar24) : sizeof(auVar60));
          fVar8 = (*(float *)((char *)&auVar60 + 12));
          memcpy(&(auVar53), &(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar24)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar24)))) < sizeof(auVar53) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar24)))) : sizeof(auVar53));
          fVar5 = (*(float *)((char *)&auVar53 + 0));
          fVar6 = (*(float *)((char *)&auVar53 + 4));
          fVar7 = (*(float *)((char *)&auVar53 + 8));
          fVar9 = (*(float *)((char *)&auVar53 + 12));
          gen_rcpps(&(auVar52), &(in_XMM4), &(auVar60));
          fVar51 = (*(float *)((char *)&auVar60 + 0));
          fVar55 = (*(float *)((char *)&auVar60 + 4));
          fVar57 = (*(float *)((char *)&auVar60 + 8));
          gen_rcpps(&(auVar60), &(auVar52), &(auVar53));
          fVar59 = gen_bits2f(~-(uint)(fVar5 < fVar51) &
                              (uint)gen_fl2bits(fVar65 - ((*(float *)&REFG(undefined, 0x1136ea0) -
                                                          (*(float *)((char *)&auVar60 + 0)) * fVar5) * (*(float *)((char *)&auVar60 + 0)))
                                                         * (fVar51 * fVar41)) |
                              -(uint)(fVar5 < fVar51) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar52 + 0)) * fVar51)
                                                * (*(float *)((char *)&auVar52 + 0))) * (fVar11 * fVar5)));
          fVar61 = gen_bits2f(~-(uint)(fVar6 < fVar55) &
                              (uint)gen_fl2bits(fVar35 - ((*(float *)&REFG(undefined, 0x1136ea4) -
                                                          (*(float *)((char *)&auVar60 + 4)) * fVar6) * (*(float *)((char *)&auVar60 + 4)))
                                                         * (fVar55 * fVar43)) |
                              -(uint)(fVar6 < fVar55) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar52 + 4)) * fVar55)
                                                * (*(float *)((char *)&auVar52 + 4))) * (fVar64 * fVar6)));
          fVar62 = gen_bits2f(~-(uint)(fVar7 < fVar57) &
                              (uint)gen_fl2bits(fVar37 - ((*(float *)&REFG(undefined, 0x1136ea8) -
                                                          (*(float *)((char *)&auVar60 + 8)) * fVar7) * (*(float *)((char *)&auVar60 + 8)))
                                                         * (fVar57 * fVar44)) |
                              -(uint)(fVar7 < fVar57) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar52 + 8)) * fVar57)
                                                * (*(float *)((char *)&auVar52 + 8))) * (fVar66 * fVar7)));
          fVar63 = gen_bits2f(~-(uint)(fVar9 < fVar8) &
                              (uint)gen_fl2bits(fVar39 - ((*(float *)&REFG(undefined, 0x1136eac) -
                                                          (*(float *)((char *)&auVar60 + 12)) * fVar9) * (*(float *)((char *)&auVar60 + 12))
                                                         ) * (fVar8 * fVar45)) |
                              -(uint)(fVar9 < fVar8) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar52 + 12)) * fVar8)
                                                * (*(float *)((char *)&auVar52 + 12))) * (fVar67 * fVar9)));
          uVar27 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar29 = -(uint)(fVar6 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar31 = -(uint)(fVar7 <= (float)REFG(undefined8, 0x1138ae8));
          uVar33 = -(uint)(fVar9 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar28 = -(uint)(fVar51 <= (float)REFG(undefined8, 0x1138ae0));
          uVar30 = -(uint)(fVar55 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar32 = -(uint)(fVar57 <= (float)REFG(undefined8, 0x1138ae8));
          uVar34 = -(uint)(fVar8 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          puVar4 = ((uint *)GEN_TOP((((int)param_2 - (int)param_4) + (int)pauVar24)));
          *puVar4 = ~uVar27 & (~uVar28 & (uint)gen_fl2bits((fVar65 - fVar59) * fVar51 +
                                                           fVar59 * fVar5) |
                              uVar28 & (uint)gen_fl2bits(fVar5)) |
                    uVar27 & (uint)gen_fl2bits(fVar51);
          puVar4[1] = ~uVar29 & (~uVar30 & (uint)gen_fl2bits((fVar35 - fVar61) * fVar55 +
                                                             fVar61 * fVar6) |
                                uVar30 & (uint)gen_fl2bits(fVar6)) |
                      uVar29 & (uint)gen_fl2bits(fVar55);
          puVar4[2] = ~uVar31 & (~uVar32 & (uint)gen_fl2bits((fVar37 - fVar62) * fVar57 +
                                                             fVar62 * fVar7) |
                                uVar32 & (uint)gen_fl2bits(fVar7)) |
                      uVar31 & (uint)gen_fl2bits(fVar57);
          puVar4[3] = ~uVar33 & (~uVar34 & (uint)gen_fl2bits((fVar39 - fVar63) * fVar8 +
                                                             fVar63 * fVar9) |
                                uVar34 & (uint)gen_fl2bits(fVar9)) |
                      uVar33 & (uint)gen_fl2bits(fVar8);
          pfVar25 = ((float *)GEN_TOP(((param_5 - (int)param_4) + (int)pauVar24)));
          pfVar1 = ((float *)GEN_TOP((((int)param_3 - (int)param_4) + (int)pauVar24)));
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_4) + (int)pauVar24)));
          (*(float *)((char *)&in_XMM4 + 0)) =
               gen_bits2f(~(uVar27 & uVar28) &
                          (~uVar27 & (uVar28 & (uint)gen_fl2bits(fVar10) |
                                     ~uVar28 & (uint)gen_fl2bits(fVar59)) |
                          uVar27 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                          uVar27 & uVar28 & (uint)gen_fl2bits(fVar11)) * (*pfVar25 - *pfVar1) +
               *pfVar2;
          (*(float *)((char *)&in_XMM4 + 4)) =
               gen_bits2f(~(uVar29 & uVar30) &
                          (~uVar29 & (uVar30 & (uint)gen_fl2bits(fVar12) |
                                     ~uVar30 & (uint)gen_fl2bits(fVar61)) |
                          uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                          uVar29 & uVar30 & (uint)gen_fl2bits(fVar64)) * (pfVar25[1] - pfVar1[1]) +
               pfVar2[1];
          (*(float *)((char *)&in_XMM4 + 8)) =
               gen_bits2f(~(uVar31 & uVar32) &
                          (~uVar31 & (uVar32 & (uint)gen_fl2bits(fVar13) |
                                     ~uVar32 & (uint)gen_fl2bits(fVar62)) |
                          uVar31 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                          uVar31 & uVar32 & (uint)gen_fl2bits(fVar66)) * (pfVar25[2] - pfVar1[2]) +
               pfVar2[2];
          (*(float *)((char *)&in_XMM4 + 12)) =
               gen_bits2f(~(uVar33 & uVar34) &
                          (~uVar33 & (uVar34 & (uint)gen_fl2bits(fVar14) |
                                     ~uVar34 & (uint)gen_fl2bits(fVar63)) |
                          uVar33 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                          uVar33 & uVar34 & (uint)gen_fl2bits(fVar67)) * (pfVar25[3] - pfVar1[3]) +
               pfVar2[3];
          memcpy(&(*((gen_v16 *)GEN_TOP(((param_1 - (int)param_4) + (int)pauVar24)))), &(in_XMM4), sizeof(in_XMM4) < sizeof(*((gen_v16 *)GEN_TOP(((param_1 - (int)param_4) + (int)pauVar24)))) ? sizeof(in_XMM4) : sizeof(*((gen_v16 *)GEN_TOP(((param_1 - (int)param_4) + (int)pauVar24)))));
          pauVar24 = pauVar24 + 1;
          local_14 = local_14 + -1;
          fVar65 = fVar10;
          fVar35 = fVar12;
          fVar37 = fVar13;
          fVar39 = fVar14;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      fVar11 = *(float *)*param_7;
      fVar64 = *(float *)(*param_7 + 4);
      fVar66 = *(float *)(*param_7 + 8);
      fVar67 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_14) {
        pauVar24 = param_4;
        puVar26 = param_2;
        for (iVar23 = (local_14 & 0xfffffff) * 4; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar26 = *(undefined4 *)*pauVar24;
          pauVar24 = (gen_v16 *)(*pauVar24 + 4);
          puVar26 = puVar26 + 1;
        }
        pfVar25 = param_3;
        do {
          fVar65 = *pfVar25;
          fVar35 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar39 = pfVar25[3];
          pfVar1 = ((float *)GEN_TOP(((int)pfVar25 + ((int)param_6 - (int)param_3))));
          pfVar2 = ((float *)GEN_TOP(((param_5 - (int)param_6) + (int)pfVar1)));
          fVar41 = pfVar2[1];
          fVar43 = pfVar2[2];
          fVar44 = pfVar2[3];
          fVar45 = pfVar1[1];
          fVar5 = pfVar1[2];
          fVar6 = pfVar1[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar25 + (param_1 - (int)param_3))));
          *pfVar3 = ((*pfVar2 + fVar65) - fVar65) * (fVar11 * *pfVar1) + fVar65;
          pfVar3[1] = ((fVar41 + fVar35) - fVar35) * (fVar64 * fVar45) + fVar35;
          pfVar3[2] = ((fVar43 + fVar37) - fVar37) * (fVar66 * fVar5) + fVar37;
          pfVar3[3] = ((fVar44 + fVar39) - fVar39) * (fVar67 * fVar6) + fVar39;
          pfVar25 = pfVar25 + 4;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d535d0 */
unsigned int F_00d535d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd535d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  gen_v16 * param_4 = (gen_v16 *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  gen_v16 * param_6 = (gen_v16 *)(uintptr_t)gen_a5;
  gen_v12 * param_7 = (gen_v12 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  uint * puVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  float * pfVar19;
  float * pfVar20;
  int iVar21;
  gen_v16 * pauVar22;
  gen_v16 * pauVar23;
  undefined4 * puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 in_XMM3 [16] = {0};
  float fVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar54;
  float fVar55;
  float fVar57;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float local_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_a0;
  float fStack_9c;
  float local_80;
  float fStack_7c;
  float local_70;
  float fStack_6c;
  float local_40;
  float fStack_3c;
  float local_30;
  float fStack_2c;
  float fStack_28;
  gen_v16 * local_1c;
  uint local_18;
  gen_v16 * local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    F_00d526c0(param_1,param_3,param_5,param_7,param_8,param_9,param_10);
    return 0;
  }
  if (param_10 == 0) {
    if (param_9 == -1) {
      fVar40 = *(float *)*param_7;
      fVar41 = *(float *)(*param_7 + 4);
      fVar42 = *(float *)(*param_7 + 8);
      fVar12 = *(float *)param_7[1];
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar24 = *(undefined4 *)*pauVar22;
          pauVar22 = (gen_v16 *)(*pauVar22 + 4);
          puVar24 = puVar24 + 1;
        }
        local_14 = (gen_v16 *)param_5;
        local_1c = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = (float *)(param_1 + 0x20);
        do {
          fVar36 = pfVar20[-8];
          fVar37 = pfVar20[-7];
          fVar38 = pfVar20[-6];
          fVar39 = pfVar20[-5];
          fVar53 = fVar40 * *(float *)*local_1c;
          fVar58 = fVar41 * *(float *)(*local_1c + 4);
          fVar59 = fVar42 * *(float *)(*local_1c + 8);
          fVar62 = fVar12 * *(float *)(*local_1c + 0xc);
          fVar4 = pfVar20[-0xb];
          fVar5 = pfVar20[-10];
          fVar6 = pfVar20[-9];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + -0x20 + (int)pfVar20)));
          fVar7 = *pfVar3;
          fVar8 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          fVar11 = *pfVar20;
          fVar13 = pfVar20[1];
          fVar14 = pfVar20[2];
          fVar15 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + (int)pfVar20)));
          fVar16 = *pfVar3;
          fVar17 = pfVar3[1];
          fVar44 = pfVar3[2];
          fVar48 = pfVar3[3];
          fVar49 = *(float *)((int)local_14 + 4);
          fVar52 = *(float *)((int)local_14 + 8);
          fVar55 = *(float *)((int)local_14 + 0xc);
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar57 = *pfVar3;
          fVar51 = pfVar3[1];
          fVar54 = pfVar3[2];
          fVar60 = pfVar3[3];
          fVar63 = *pfVar20;
          fVar43 = pfVar20[1];
          fVar47 = pfVar20[2];
          fVar50 = pfVar20[3];
          fVar65 = *(float *)&REFG(undefined, 0x1138af0) - fVar53;
          fVar61 = *(float *)&REFG(undefined, 0x1138af4) - fVar58;
          fVar64 = *(float *)&REFG(undefined, 0x1138af8) - fVar59;
          fVar66 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-8] = pfVar20[-0xc] * fVar65 + (pfVar20[-0xc] - *(float *)local_14) * fVar53;
          pfVar19[-7] = fVar4 * fVar65 + (fVar4 - fVar49) * fVar53;
          pfVar19[-6] = fVar5 * fVar65 + (fVar5 - fVar52) * fVar53;
          pfVar19[-5] = fVar6 * fVar65 + (fVar6 - fVar55) * fVar53;
          pfVar19[-4] = fVar36 * fVar61 + (fVar36 - fVar7) * fVar58;
          pfVar19[-3] = fVar37 * fVar61 + (fVar37 - fVar8) * fVar58;
          pfVar19[-2] = fVar38 * fVar61 + (fVar38 - fVar9) * fVar58;
          pfVar19[-1] = fVar39 * fVar61 + (fVar39 - fVar10) * fVar58;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar64 + ((*(float *)((char *)&auVar46 + 0)) - fVar57) * fVar59;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar64 + ((*(float *)((char *)&auVar46 + 4)) - fVar51) * fVar59;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar64 + ((*(float *)((char *)&auVar46 + 8)) - fVar54) * fVar59;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar64 + ((*(float *)((char *)&auVar46 + 12)) - fVar60) * fVar59;
          local_14 = (gen_v16 *)((int)local_14 + 0x40);
          local_1c = local_1c + 1;
          pfVar19[4] = fVar63 * fVar66 + (fVar11 - fVar16) * fVar62;
          pfVar19[5] = fVar43 * fVar66 + (fVar13 - fVar17) * fVar62;
          pfVar19[6] = fVar47 * fVar66 + (fVar14 - fVar44) * fVar62;
          pfVar19[7] = fVar50 * fVar66 + (fVar15 - fVar48) * fVar62;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
        return 0;
      }
    }
    else if (param_9 == 0) {
      fVar40 = *(float *)*param_7;
      fVar41 = *(float *)(*param_7 + 4);
      fVar42 = *(float *)(*param_7 + 8);
      memcpy(&(auVar18), &(*param_7), sizeof(*param_7) < sizeof(auVar18) ? sizeof(*param_7) : sizeof(auVar18));
      fVar12 = *(float *)param_7[1];
      local_18 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_18) {
        pfVar19 = (float *)(param_1 + 0x30);
        pauVar22 = (gen_v16 *)(param_5 + 8);
        fVar36 = *(float *)&REFG(undefined, 0x1138af0) - fVar40;
        fVar37 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar38 = *(float *)&REFG(undefined, 0x1138af8) - fVar42;
        fVar39 = *(float *)&REFG(undefined, 0x1138afc) - fVar12;
        pfVar20 = param_3;
        pauVar23 = param_6;
        do {
          memcpy(&(auVar46), &(*pauVar23), sizeof(*pauVar23) < sizeof(auVar46) ? sizeof(*pauVar23) : sizeof(auVar46));
          fVar4 = (*(float *)((char *)&auVar46 + 0));
          fVar6 = (*(float *)((char *)&auVar46 + 4));
          fVar8 = (*(float *)((char *)&auVar46 + 8));
          fVar10 = (*(float *)((char *)&auVar46 + 12));
          memcpy(&(auVar45), &(*((gen_v16 *)GEN_TOP(((int)pauVar23 + ((int)param_4 - (int)param_6))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pauVar23 + ((int)param_4 - (int)param_6))))) < sizeof(auVar45) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pauVar23 + ((int)param_4 - (int)param_6))))) : sizeof(auVar45));
          fVar5 = (*(float *)((char *)&auVar45 + 0));
          fVar7 = (*(float *)((char *)&auVar45 + 4));
          fVar9 = (*(float *)((char *)&auVar45 + 8));
          fVar11 = (*(float *)((char *)&auVar45 + 12));
          gen_rcpps(&(auVar45), &(in_XMM3), &(auVar45));
          gen_rcpps(&(auVar46), &(auVar45), &(auVar46));
          fVar44 = gen_bits2f(~-(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) -
                                                ((*(float *)&REFG(undefined, 0x1136ea0) - fVar4 * (*(float *)((char *)&auVar46 + 0)))
                                                * (*(float *)((char *)&auVar46 + 0))) * (fVar5 * fVar36)) |
                              -(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - fVar5 * (*(float *)((char *)&auVar45 + 0)))
                                                * (*(float *)((char *)&auVar45 + 0))) * (fVar4 * fVar40)));
          fVar48 = gen_bits2f(~-(uint)(fVar6 < fVar7) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) -
                                                ((*(float *)&REFG(undefined, 0x1136ea4) - fVar6 * (*(float *)((char *)&auVar46 + 4)))
                                                * (*(float *)((char *)&auVar46 + 4))) * (fVar7 * fVar37)) |
                              -(uint)(fVar6 < fVar7) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - fVar7 * (*(float *)((char *)&auVar45 + 4)))
                                                * (*(float *)((char *)&auVar45 + 4))) * (fVar6 * fVar41)));
          fVar51 = gen_bits2f(~-(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) -
                                                ((*(float *)&REFG(undefined, 0x1136ea8) - fVar8 * (*(float *)((char *)&auVar46 + 8)))
                                                * (*(float *)((char *)&auVar46 + 8))) * (fVar9 * fVar38)) |
                              -(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - fVar9 * (*(float *)((char *)&auVar45 + 8)))
                                                * (*(float *)((char *)&auVar45 + 8))) * (fVar8 * fVar42)));
          fVar54 = gen_bits2f(~-(uint)(fVar10 < fVar11) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) -
                                                ((*(float *)&REFG(undefined, 0x1136eac) - fVar10 * (*(float *)((char *)&auVar46 + 12))
                                                 ) * (*(float *)((char *)&auVar46 + 12))) * (fVar11 * fVar39)) |
                              -(uint)(fVar10 < fVar11) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - fVar11 * (*(float *)((char *)&auVar45 + 12))
                                                 ) * (*(float *)((char *)&auVar45 + 12))) * (fVar10 * fVar12)));
          uVar25 = -(uint)(fVar4 <= (float)REFG(undefined8, 0x1138ae0));
          uVar27 = -(uint)(fVar6 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar29 = -(uint)(fVar8 <= (float)REFG(undefined8, 0x1138ae8));
          uVar32 = -(uint)(fVar10 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar26 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar28 = -(uint)(fVar7 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar30 = -(uint)(fVar9 <= (float)REFG(undefined8, 0x1138ae8));
          uVar33 = -(uint)(fVar11 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          local_c0 = (*(float *)((char *)&auVar18 + 0));
          fStack_bc = (*(float *)((char *)&auVar18 + 4));
          fStack_b8 = (*(float *)((char *)&auVar18 + 8));
          fVar60 = *(float *)&REFG(undefined, 0x1138af4) - fVar48;
          fVar63 = *(float *)&REFG(undefined, 0x1138af8) - fVar51;
          fVar43 = *(float *)&REFG(undefined, 0x1138afc) - fVar54;
          fVar49 = gen_bits2f(~(uVar25 & uVar26) &
                              (~uVar25 & (~uVar26 & (uint)gen_fl2bits(fVar44) |
                                         uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0))) |
                              uVar25 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                              uVar25 & uVar26 & (uint)gen_fl2bits(local_c0));
          fVar52 = gen_bits2f(~(uVar27 & uVar28) &
                              (~uVar27 & (~uVar28 & (uint)gen_fl2bits(fVar48) |
                                         uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4))) |
                              uVar27 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                              uVar27 & uVar28 & (uint)gen_fl2bits(fStack_bc));
          fVar55 = gen_bits2f(~(uVar29 & uVar30) &
                              (~uVar29 & (~uVar30 & (uint)gen_fl2bits(fVar51) |
                                         uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8))) |
                              uVar29 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                              uVar29 & uVar30 & (uint)gen_fl2bits(fStack_b8));
          fVar57 = gen_bits2f(~(uVar32 & uVar33) &
                              (~uVar32 & (~uVar33 & (uint)gen_fl2bits(fVar54) |
                                         uVar33 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc))) |
                              uVar32 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                              uVar32 & uVar33 & (uint)gen_fl2bits(fVar12));
          fVar40 = pfVar20[4];
          fVar41 = pfVar20[5];
          fVar42 = pfVar20[6];
          fVar13 = pfVar20[7];
          fVar14 = *pfVar20;
          fVar15 = pfVar20[1];
          fVar16 = pfVar20[2];
          fVar17 = pfVar20[3];
          memcpy(&(auVar46), &(pauVar22[-2]), sizeof(pauVar22[-2]) < sizeof(auVar46) ? sizeof(pauVar22[-2]) : sizeof(auVar46));
          puVar1 = ((uint *)GEN_TOP(((int)pauVar23 + ((int)param_2 - (int)param_6))));
          *puVar1 = ~uVar25 & (~uVar26 & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138af0) - fVar44) *
                                                           fVar5 + fVar4 * fVar44) |
                              (uint)gen_fl2bits(fVar4) & uVar26) | (uint)gen_fl2bits(fVar5) & uVar25
          ;
          puVar1[1] = ~uVar27 & (~uVar28 & (uint)gen_fl2bits(fVar60 * fVar7 + fVar6 * fVar48) |
                                (uint)gen_fl2bits(fVar6) & uVar28) |
                      (uint)gen_fl2bits(fVar7) & uVar27;
          puVar1[2] = ~uVar29 & (~uVar30 & (uint)gen_fl2bits(fVar63 * fVar9 + fVar8 * fVar51) |
                                (uint)gen_fl2bits(fVar8) & uVar30) |
                      (uint)gen_fl2bits(fVar9) & uVar29;
          puVar1[3] = ~uVar32 & (~uVar33 & (uint)gen_fl2bits(fVar43 * fVar11 + fVar10 * fVar54) |
                                (uint)gen_fl2bits(fVar10) & uVar33) |
                      (uint)gen_fl2bits(fVar11) & uVar32;
          pfVar3 = ((float *)GEN_TOP((((int)param_3 - (int)param_5) + (int)pauVar22)));
          fVar44 = *pfVar3;
          fVar48 = pfVar3[1];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + ((int)param_3 - param_1))));
          fVar4 = *pfVar2;
          fVar5 = pfVar2[1];
          memcpy(&(auVar45), &(*pauVar22), sizeof(*pauVar22) < sizeof(auVar45) ? sizeof(*pauVar22) : sizeof(auVar45));
          fVar6 = *(float *)pauVar22[-1];
          fVar7 = *(float *)(pauVar22[-1] + 4);
          fVar8 = *(float *)(pauVar22[-1] + 8);
          fVar9 = *(float *)(pauVar22[-1] + 0xc);
          fVar10 = *(float *)pauVar22[1];
          fVar11 = *(float *)(pauVar22[1] + 4);
          local_a0 = (*(float *)((char *)&auVar46 + 8));
          fStack_9c = (*(float *)((char *)&auVar46 + 12));
          fVar43 = *(float *)&REFG(undefined, 0x1138af0) - fVar49;
          fVar47 = *(float *)&REFG(undefined, 0x1138af4) - fVar52;
          fVar50 = *(float *)&REFG(undefined, 0x1138af8) - fVar55;
          fVar53 = *(float *)&REFG(undefined, 0x1138afc) - fVar57;
          local_70 = (*(float *)((char *)&auVar45 + 8));
          fStack_6c = (*(float *)((char *)&auVar45 + 12));
          local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar3 + 2));
          fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar3 + 2) >> 0x20));
          fVar60 = fStack_2c * fVar50 + fStack_6c * fVar55;
          fVar63 = pfVar2[3] * fVar53 + *(float *)(pauVar22[1] + 0xc) * fVar57;
          fVar51 = local_30 * fVar50 + local_70 * fVar55;
          fVar54 = pfVar2[2] * fVar53 + *(float *)(pauVar22[1] + 8) * fVar57;
          (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar54);
          (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar51);
          (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar60);
          (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar63);
          pfVar19[-0xc] = fVar14 * fVar43 + (*(float *)((char *)&auVar46 + 0)) * fVar49;
          pfVar19[-0xb] = fVar15 * fVar43 + (*(float *)((char *)&auVar46 + 4)) * fVar49;
          pfVar19[-10] = fVar16 * fVar43 + local_a0 * fVar49;
          pfVar19[-9] = fVar17 * fVar43 + fStack_9c * fVar49;
          pfVar19[-8] = fVar40 * fVar47 + fVar6 * fVar52;
          pfVar19[-7] = fVar41 * fVar47 + fVar7 * fVar52;
          pfVar19[-6] = fVar42 * fVar47 + fVar8 * fVar52;
          pfVar19[-5] = fVar13 * fVar47 + fVar9 * fVar52;
          pfVar3 = ((float *)GEN_TOP(((int)pauVar22 + (param_1 - (int)param_5))));
          *pfVar3 = fVar44 * fVar50 + (*(float *)((char *)&auVar45 + 0)) * fVar55;
          pfVar3[1] = fVar48 * fVar50 + (*(float *)((char *)&auVar45 + 4)) * fVar55;
          pfVar3[2] = fVar51;
          pfVar3[3] = fVar60;
          *pfVar19 = fVar4 * fVar53 + fVar10 * fVar57;
          pfVar19[1] = fVar5 * fVar53 + fVar11 * fVar57;
          pfVar19[2] = fVar54;
          pfVar19[3] = fVar63;
          pfVar20 = pfVar20 + 0x10;
          pauVar22 = pauVar22 + 4;
          pfVar19 = pfVar19 + 0x10;
          pauVar23 = pauVar23 + 1;
          local_18 = local_18 + -1;
          fVar40 = local_c0;
          fVar41 = fStack_bc;
          fVar42 = fStack_b8;
        } while (local_18 != 0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      memcpy(&(auVar18), &(*param_7), sizeof(*param_7) < sizeof(auVar18) ? sizeof(*param_7) : sizeof(auVar18));
      fVar40 = *(float *)param_7[1];
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar24 = *(undefined4 *)*pauVar22;
          pauVar22 = (gen_v16 *)(*pauVar22 + 4);
          puVar24 = puVar24 + 1;
        }
        local_1c = (gen_v16 *)param_5;
        local_14 = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = (float *)(param_1 + 0x20);
        do {
          fVar41 = pfVar20[-8];
          fVar42 = pfVar20[-7];
          fVar12 = pfVar20[-6];
          fVar36 = pfVar20[-5];
          local_30 = (*(float *)((char *)&auVar18 + 0));
          fStack_2c = (*(float *)((char *)&auVar18 + 4));
          fStack_28 = (*(float *)((char *)&auVar18 + 8));
          fVar43 = local_30 * *(float *)*local_14;
          fVar47 = fStack_2c * *(float *)(*local_14 + 4);
          fVar50 = fStack_28 * *(float *)(*local_14 + 8);
          fVar53 = fVar40 * *(float *)(*local_14 + 0xc);
          fVar37 = pfVar20[-0xb];
          fVar38 = pfVar20[-10];
          fVar39 = pfVar20[-9];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3) + -0x20)));
          fVar4 = *pfVar3;
          fVar5 = pfVar3[1];
          fVar6 = pfVar3[2];
          fVar7 = pfVar3[3];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar11 = pfVar3[3];
          fVar13 = *pfVar20;
          fVar14 = pfVar20[1];
          fVar15 = pfVar20[2];
          fVar16 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3))));
          fVar17 = *pfVar3;
          fVar44 = pfVar3[1];
          fVar48 = pfVar3[2];
          fVar49 = pfVar3[3];
          fVar52 = *(float *)((int)local_1c + 4);
          fVar55 = *(float *)((int)local_1c + 8);
          fVar57 = *(float *)((int)local_1c + 0xc);
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          fVar51 = *pfVar20;
          fVar54 = pfVar20[1];
          fVar60 = pfVar20[2];
          fVar63 = pfVar20[3];
          fVar58 = *(float *)&REFG(undefined, 0x1138af0) - fVar43;
          fVar59 = *(float *)&REFG(undefined, 0x1138af4) - fVar47;
          fVar62 = *(float *)&REFG(undefined, 0x1138af8) - fVar50;
          fVar65 = *(float *)&REFG(undefined, 0x1138afc) - fVar53;
          pfVar19[-8] = pfVar20[-0xc] * fVar58 + (pfVar20[-0xc] + *(float *)local_1c) * fVar43;
          pfVar19[-7] = fVar37 * fVar58 + (fVar37 + fVar52) * fVar43;
          pfVar19[-6] = fVar38 * fVar58 + (fVar38 + fVar55) * fVar43;
          pfVar19[-5] = fVar39 * fVar58 + (fVar39 + fVar57) * fVar43;
          pfVar19[-4] = fVar41 * fVar59 + (fVar4 + fVar41) * fVar47;
          pfVar19[-3] = fVar42 * fVar59 + (fVar5 + fVar42) * fVar47;
          pfVar19[-2] = fVar12 * fVar59 + (fVar6 + fVar12) * fVar47;
          pfVar19[-1] = fVar36 * fVar59 + (fVar7 + fVar36) * fVar47;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar62 + (fVar8 + (*(float *)((char *)&auVar46 + 0))) * fVar50;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar62 + (fVar9 + (*(float *)((char *)&auVar46 + 4))) * fVar50;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar62 + (fVar10 + (*(float *)((char *)&auVar46 + 8))) * fVar50;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar62 + (fVar11 + (*(float *)((char *)&auVar46 + 12))) * fVar50;
          local_1c = (gen_v16 *)((int)local_1c + 0x40);
          local_14 = local_14 + 1;
          pfVar19[4] = fVar51 * fVar65 + (fVar13 + fVar17) * fVar53;
          pfVar19[5] = fVar54 * fVar65 + (fVar14 + fVar44) * fVar53;
          pfVar19[6] = fVar60 * fVar65 + (fVar15 + fVar48) * fVar53;
          pfVar19[7] = fVar63 * fVar65 + (fVar16 + fVar49) * fVar53;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
        return 0;
      }
    }
  }
  else if (param_10 == 1) {
    if (param_9 == -1) {
      fVar40 = *(float *)*param_7;
      fVar41 = *(float *)(*param_7 + 4);
      fVar42 = *(float *)(*param_7 + 8);
      fVar12 = *(float *)param_7[1];
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar24 = *(undefined4 *)*pauVar22;
          pauVar22 = (gen_v16 *)(*pauVar22 + 4);
          puVar24 = puVar24 + 1;
        }
        local_14 = (gen_v16 *)param_5;
        local_1c = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = (float *)(param_1 + 0x20);
        do {
          fVar36 = pfVar20[-8];
          fVar37 = pfVar20[-7];
          fVar38 = pfVar20[-6];
          fVar39 = pfVar20[-5];
          fVar53 = fVar40 * *(float *)*local_1c;
          fVar58 = fVar41 * *(float *)(*local_1c + 4);
          fVar59 = fVar42 * *(float *)(*local_1c + 8);
          fVar62 = fVar12 * *(float *)(*local_1c + 0xc);
          fVar4 = pfVar20[-0xb];
          fVar5 = pfVar20[-10];
          fVar6 = pfVar20[-9];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + -0x20 + (int)pfVar20)));
          fVar7 = *pfVar3;
          fVar8 = pfVar3[1];
          fVar9 = pfVar3[2];
          fVar10 = pfVar3[3];
          fVar11 = *pfVar20;
          fVar13 = pfVar20[1];
          fVar14 = pfVar20[2];
          fVar15 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + (int)pfVar20)));
          fVar16 = *pfVar3;
          fVar17 = pfVar3[1];
          fVar44 = pfVar3[2];
          fVar48 = pfVar3[3];
          fVar49 = *(float *)((int)local_14 + 4);
          fVar52 = *(float *)((int)local_14 + 8);
          fVar55 = *(float *)((int)local_14 + 0xc);
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar57 = *pfVar3;
          fVar51 = pfVar3[1];
          fVar54 = pfVar3[2];
          fVar60 = pfVar3[3];
          fVar63 = *pfVar20;
          fVar43 = pfVar20[1];
          fVar47 = pfVar20[2];
          fVar50 = pfVar20[3];
          fVar65 = *(float *)&REFG(undefined, 0x1138af0) - fVar53;
          fVar61 = *(float *)&REFG(undefined, 0x1138af4) - fVar58;
          fVar64 = *(float *)&REFG(undefined, 0x1138af8) - fVar59;
          fVar66 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-8] = pfVar20[-0xc] * fVar65 + (pfVar20[-0xc] - *(float *)local_14) * fVar53;
          pfVar19[-7] = fVar4 * fVar65 + (fVar4 - fVar49) * fVar53;
          pfVar19[-6] = fVar5 * fVar65 + (fVar5 - fVar52) * fVar53;
          pfVar19[-5] = fVar6 * fVar65 + (fVar6 - fVar55) * fVar53;
          pfVar19[-4] = fVar36 * fVar61 + (fVar36 - fVar7) * fVar58;
          pfVar19[-3] = fVar37 * fVar61 + (fVar37 - fVar8) * fVar58;
          pfVar19[-2] = fVar38 * fVar61 + (fVar38 - fVar9) * fVar58;
          pfVar19[-1] = fVar39 * fVar61 + (fVar39 - fVar10) * fVar58;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar64 + ((*(float *)((char *)&auVar46 + 0)) - fVar57) * fVar59;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar64 + ((*(float *)((char *)&auVar46 + 4)) - fVar51) * fVar59;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar64 + ((*(float *)((char *)&auVar46 + 8)) - fVar54) * fVar59;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar64 + ((*(float *)((char *)&auVar46 + 12)) - fVar60) * fVar59;
          local_14 = (gen_v16 *)((int)local_14 + 0x40);
          local_1c = local_1c + 1;
          pfVar19[4] = fVar63 * fVar66 + (fVar11 - fVar16) * fVar62;
          pfVar19[5] = fVar43 * fVar66 + (fVar13 - fVar17) * fVar62;
          pfVar19[6] = fVar47 * fVar66 + (fVar14 - fVar44) * fVar62;
          pfVar19[7] = fVar50 * fVar66 + (fVar15 - fVar48) * fVar62;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
    }
    else if (param_9 == 0) {
      fVar40 = *(float *)*param_7;
      fVar41 = *(float *)(*param_7 + 4);
      fVar42 = *(float *)(*param_7 + 8);
      memcpy(&(auVar18), &(*param_7), sizeof(*param_7) < sizeof(auVar18) ? sizeof(*param_7) : sizeof(auVar18));
      fVar12 = *(float *)param_7[1];
      local_18 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < (int)local_18) {
        pfVar19 = (float *)(param_1 + 0x30);
        pauVar22 = (gen_v16 *)(param_3 + 8);
        fVar36 = *(float *)&REFG(undefined, 0x1138af0) - fVar40;
        fVar37 = *(float *)&REFG(undefined, 0x1138af4) - fVar41;
        fVar38 = *(float *)&REFG(undefined, 0x1138af8) - fVar42;
        fVar39 = *(float *)&REFG(undefined, 0x1138afc) - fVar12;
        pfVar20 = param_5;
        pauVar23 = param_4;
        do {
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar23)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar23)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar23)))) : sizeof(auVar46));
          fVar4 = (*(float *)((char *)&auVar46 + 0));
          fVar6 = (*(float *)((char *)&auVar46 + 4));
          fVar7 = (*(float *)((char *)&auVar46 + 8));
          fVar8 = (*(float *)((char *)&auVar46 + 12));
          memcpy(&(auVar45), &(*pauVar23), sizeof(*pauVar23) < sizeof(auVar45) ? sizeof(*pauVar23) : sizeof(auVar45));
          fVar5 = (*(float *)((char *)&auVar45 + 0));
          fVar9 = (*(float *)((char *)&auVar45 + 12));
          gen_rcpps(&(auVar56), &(in_XMM4), &(auVar45));
          fVar49 = (*(float *)((char *)&auVar45 + 4));
          fVar52 = (*(float *)((char *)&auVar45 + 8));
          gen_rcpps(&(auVar46), &(auVar56), &(auVar46));
          fVar55 = gen_bits2f(~-(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) -
                                                ((*(float *)&REFG(undefined, 0x1136ea0) - fVar4 * (*(float *)((char *)&auVar46 + 0)))
                                                * (*(float *)((char *)&auVar46 + 0))) * (fVar36 * fVar5)) |
                              -(uint)(fVar4 < fVar5) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar56 + 0)) * fVar5)
                                                * (*(float *)((char *)&auVar56 + 0))) * (fVar4 * fVar40)));
          fVar57 = gen_bits2f(~-(uint)(fVar6 < fVar49) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) -
                                                ((*(float *)&REFG(undefined, 0x1136ea4) - fVar6 * (*(float *)((char *)&auVar46 + 4)))
                                                * (*(float *)((char *)&auVar46 + 4))) * (fVar37 * fVar49)) |
                              -(uint)(fVar6 < fVar49) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar56 + 4)) * fVar49)
                                                * (*(float *)((char *)&auVar56 + 4))) * (fVar6 * fVar41)));
          fVar43 = gen_bits2f(~-(uint)(fVar7 < fVar52) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) -
                                                ((*(float *)&REFG(undefined, 0x1136ea8) - fVar7 * (*(float *)((char *)&auVar46 + 8)))
                                                * (*(float *)((char *)&auVar46 + 8))) * (fVar38 * fVar52)) |
                              -(uint)(fVar7 < fVar52) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar56 + 8)) * fVar52)
                                                * (*(float *)((char *)&auVar56 + 8))) * (fVar7 * fVar42)));
          fVar47 = gen_bits2f(~-(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) -
                                                ((*(float *)&REFG(undefined, 0x1136eac) - fVar8 * (*(float *)((char *)&auVar46 + 12)))
                                                * (*(float *)((char *)&auVar46 + 12))) * (fVar39 * fVar9)) |
                              -(uint)(fVar8 < fVar9) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar56 + 12)) * fVar9)
                                                * (*(float *)((char *)&auVar56 + 12))) * (fVar8 * fVar12)));
          uVar28 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar30 = -(uint)(fVar49 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar33 = -(uint)(fVar52 <= (float)REFG(undefined8, 0x1138ae8));
          uVar34 = -(uint)(fVar9 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar29 = -(uint)(fVar4 <= (float)REFG(undefined8, 0x1138ae0));
          uVar32 = -(uint)(fVar6 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar31 = -(uint)(fVar7 <= (float)REFG(undefined8, 0x1138ae8));
          uVar35 = -(uint)(fVar8 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          local_30 = (*(float *)((char *)&auVar18 + 0));
          fStack_2c = (*(float *)((char *)&auVar18 + 4));
          fStack_28 = (*(float *)((char *)&auVar18 + 8));
          fVar50 = *(float *)&REFG(undefined, 0x1138af4) - fVar57;
          fVar53 = *(float *)&REFG(undefined, 0x1138af8) - fVar43;
          fVar58 = *(float *)&REFG(undefined, 0x1138afc) - fVar47;
          fVar40 = *pfVar20;
          fVar41 = pfVar20[1];
          fVar42 = pfVar20[2];
          fVar10 = pfVar20[3];
          fVar51 = gen_bits2f(~(uVar29 & uVar28) &
                              (~uVar29 & (uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                                         ~uVar28 & (uint)gen_fl2bits(fVar55)) |
                              uVar29 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                              uVar29 & uVar28 & (uint)gen_fl2bits(local_30));
          fVar54 = gen_bits2f(~(uVar32 & uVar30) &
                              (~uVar32 & (uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                                         ~uVar30 & (uint)gen_fl2bits(fVar57)) |
                              uVar32 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                              uVar32 & uVar30 & (uint)gen_fl2bits(fStack_2c));
          fVar60 = gen_bits2f(~(uVar31 & uVar33) &
                              (~uVar31 & (uVar33 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                                         ~uVar33 & (uint)gen_fl2bits(fVar43)) |
                              uVar31 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                              uVar31 & uVar33 & (uint)gen_fl2bits(fStack_28));
          fVar63 = gen_bits2f(~(uVar35 & uVar34) &
                              (~uVar35 & (uVar34 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                                         ~uVar34 & (uint)gen_fl2bits(fVar47)) |
                              uVar35 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                              uVar35 & uVar34 & (uint)gen_fl2bits(fVar12));
          fVar11 = pfVar20[4];
          fVar13 = pfVar20[5];
          fVar14 = pfVar20[6];
          fVar15 = pfVar20[7];
          uVar25 = *(uint *)(*pauVar23 + 4);
          uVar26 = *(uint *)(*pauVar23 + 8);
          uVar27 = *(uint *)(*pauVar23 + 0xc);
          fVar16 = *(float *)pauVar22[-1];
          fVar17 = *(float *)(pauVar22[-1] + 4);
          fVar44 = *(float *)(pauVar22[-1] + 8);
          fVar48 = *(float *)(pauVar22[-1] + 0xc);
          puVar1 = ((uint *)GEN_TOP((((int)param_2 - (int)param_4) + (int)pauVar23)));
          *puVar1 = ~uVar29 & (~uVar28 & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138af0) - fVar55) *
                                                           fVar5 + fVar4 * fVar55) |
                              (uint)gen_fl2bits(fVar4) & uVar28) | uVar29 & *(uint *)*pauVar23;
          puVar1[1] = ~uVar32 & (~uVar30 & (uint)gen_fl2bits(fVar50 * fVar49 + fVar6 * fVar57) |
                                (uint)gen_fl2bits(fVar6) & uVar30) | uVar32 & uVar25;
          puVar1[2] = ~uVar31 & (~uVar33 & (uint)gen_fl2bits(fVar53 * fVar52 + fVar7 * fVar43) |
                                (uint)gen_fl2bits(fVar7) & uVar33) | uVar31 & uVar26;
          puVar1[3] = ~uVar35 & (~uVar34 & (uint)gen_fl2bits(fVar58 * fVar9 + fVar8 * fVar47) |
                                (uint)gen_fl2bits(fVar8) & uVar34) | uVar35 & uVar27;
          pfVar3 = ((float *)GEN_TOP(((int)pauVar22 + ((int)param_5 - (int)param_3))));
          fVar8 = *pfVar3;
          fVar9 = pfVar3[1];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar19 + ((int)param_5 - param_1))));
          fVar49 = *pfVar2;
          fVar52 = pfVar2[1];
          fVar55 = pfVar2[2];
          fVar57 = pfVar2[3];
          memcpy(&(auVar46), &(*pauVar22), sizeof(*pauVar22) < sizeof(auVar46) ? sizeof(*pauVar22) : sizeof(auVar46));
          memcpy(&(auVar45), &(pauVar22[-2]), sizeof(pauVar22[-2]) < sizeof(auVar45) ? sizeof(pauVar22[-2]) : sizeof(auVar45));
          fVar4 = *(float *)pauVar22[1];
          fVar5 = *(float *)(pauVar22[1] + 4);
          fVar6 = *(float *)(pauVar22[1] + 8);
          fVar7 = *(float *)(pauVar22[1] + 0xc);
          fVar43 = *(float *)&REFG(undefined, 0x1138af0) - fVar51;
          fVar47 = *(float *)&REFG(undefined, 0x1138af4) - fVar54;
          fVar50 = *(float *)&REFG(undefined, 0x1138af8) - fVar60;
          fVar53 = *(float *)&REFG(undefined, 0x1138afc) - fVar63;
          local_80 = (*(float *)((char *)&auVar45 + 8));
          fStack_7c = (*(float *)((char *)&auVar45 + 12));
          local_d0 = (*(float *)((char *)&auVar46 + 8));
          fStack_cc = (*(float *)((char *)&auVar46 + 12));
          fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar3 + 2) >> 0x20));
          local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar3 + 2));
          (*(undefined4 *)((char *)&in_XMM4 + 4)) = (undefined4)gen_fl2bits(fVar41 * fVar51 + (*(float *)((char *)&auVar45 + 4)) * fVar43);
          (*(undefined4 *)((char *)&in_XMM4 + 0)) = (undefined4)gen_fl2bits(fVar40 * fVar51 + (*(float *)((char *)&auVar45 + 0)) * fVar43);
          (*(undefined4 *)((char *)&in_XMM4 + 8)) = (undefined4)gen_fl2bits(fVar42 * fVar51 + local_80 * fVar43);
          (*(undefined4 *)((char *)&in_XMM4 + 12)) = (undefined4)gen_fl2bits(fVar10 * fVar51 + fStack_7c * fVar43);
          memcpy(&(*(gen_v16 *)(pfVar19 + -0xc)), &(in_XMM4), sizeof(in_XMM4) < sizeof(*(gen_v16 *)(pfVar19 + -0xc)) ? sizeof(in_XMM4) : sizeof(*(gen_v16 *)(pfVar19 + -0xc)));
          pfVar19[-8] = fVar11 * fVar54 + fVar16 * fVar47;
          pfVar19[-7] = fVar13 * fVar54 + fVar17 * fVar47;
          pfVar19[-6] = fVar14 * fVar54 + fVar44 * fVar47;
          pfVar19[-5] = fVar15 * fVar54 + fVar48 * fVar47;
          pfVar3 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pauVar22)));
          *pfVar3 = fVar8 * fVar60 + (*(float *)((char *)&auVar46 + 0)) * fVar50;
          pfVar3[1] = fVar9 * fVar60 + (*(float *)((char *)&auVar46 + 4)) * fVar50;
          pfVar3[2] = local_40 * fVar60 + local_d0 * fVar50;
          pfVar3[3] = fStack_3c * fVar60 + fStack_cc * fVar50;
          *pfVar19 = fVar49 * fVar63 + fVar4 * fVar53;
          pfVar19[1] = fVar52 * fVar63 + fVar5 * fVar53;
          pfVar19[2] = fVar55 * fVar63 + fVar6 * fVar53;
          pfVar19[3] = fVar57 * fVar63 + fVar7 * fVar53;
          pfVar20 = pfVar20 + 0x10;
          pauVar22 = pauVar22 + 4;
          pfVar19 = pfVar19 + 0x10;
          pauVar23 = pauVar23 + 1;
          local_18 = local_18 + -1;
          fVar40 = local_30;
          fVar41 = fStack_2c;
          fVar42 = fStack_28;
        } while (local_18 != 0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      fVar40 = *(float *)*param_7;
      fVar41 = *(float *)(*param_7 + 4);
      fVar42 = *(float *)(*param_7 + 8);
      fVar12 = *(float *)param_7[1];
      local_18 = (int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2;
      if (0 < (int)local_18) {
        pauVar22 = param_4;
        puVar24 = param_2;
        for (iVar21 = (local_18 & 0xfffffff) * 4; iVar21 != 0; iVar21 = iVar21 + -1) {
          *puVar24 = *(undefined4 *)*pauVar22;
          pauVar22 = (gen_v16 *)(*pauVar22 + 4);
          puVar24 = puVar24 + 1;
        }
        local_14 = (gen_v16 *)param_5;
        local_1c = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar19 = (float *)(param_1 + 0x20);
        do {
          fVar36 = pfVar20[-8];
          fVar37 = pfVar20[-7];
          fVar38 = pfVar20[-6];
          fVar39 = pfVar20[-5];
          fVar53 = fVar40 * *(float *)*local_1c;
          fVar58 = fVar41 * *(float *)(*local_1c + 4);
          fVar59 = fVar42 * *(float *)(*local_1c + 8);
          fVar62 = fVar12 * *(float *)(*local_1c + 0xc);
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3) + -0x20)));
          fVar4 = *pfVar3;
          fVar5 = pfVar3[1];
          fVar6 = pfVar3[2];
          fVar7 = pfVar3[3];
          fVar8 = pfVar20[-0xb];
          fVar9 = pfVar20[-10];
          fVar10 = pfVar20[-9];
          fVar11 = *(float *)((int)local_14 + 4);
          fVar13 = *(float *)((int)local_14 + 8);
          fVar14 = *(float *)((int)local_14 + 0xc);
          memcpy(&(auVar46), &(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) < sizeof(auVar46) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar19)))) : sizeof(auVar46));
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar19)));
          fVar15 = *pfVar3;
          fVar16 = pfVar3[1];
          fVar17 = pfVar3[2];
          fVar44 = pfVar3[3];
          fVar48 = *pfVar20;
          fVar49 = pfVar20[1];
          fVar52 = pfVar20[2];
          fVar55 = pfVar20[3];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3))));
          fVar57 = *pfVar3;
          fVar51 = pfVar3[1];
          fVar54 = pfVar3[2];
          fVar60 = pfVar3[3];
          fVar63 = *pfVar20;
          fVar43 = pfVar20[1];
          fVar47 = pfVar20[2];
          fVar50 = pfVar20[3];
          fVar65 = *(float *)&REFG(undefined, 0x1138af0) - fVar53;
          fVar61 = *(float *)&REFG(undefined, 0x1138af4) - fVar58;
          fVar64 = *(float *)&REFG(undefined, 0x1138af8) - fVar59;
          fVar66 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-8] = pfVar20[-0xc] * fVar65 + (*(float *)local_14 + pfVar20[-0xc]) * fVar53;
          pfVar19[-7] = fVar8 * fVar65 + (fVar11 + fVar8) * fVar53;
          pfVar19[-6] = fVar9 * fVar65 + (fVar13 + fVar9) * fVar53;
          pfVar19[-5] = fVar10 * fVar65 + (fVar14 + fVar10) * fVar53;
          pfVar19[-4] = fVar36 * fVar61 + (fVar4 + fVar36) * fVar58;
          pfVar19[-3] = fVar37 * fVar61 + (fVar5 + fVar37) * fVar58;
          pfVar19[-2] = fVar38 * fVar61 + (fVar6 + fVar38) * fVar58;
          pfVar19[-1] = fVar39 * fVar61 + (fVar7 + fVar39) * fVar58;
          *pfVar19 = (*(float *)((char *)&auVar46 + 0)) * fVar64 + (fVar15 + (*(float *)((char *)&auVar46 + 0))) * fVar59;
          pfVar19[1] = (*(float *)((char *)&auVar46 + 4)) * fVar64 + (fVar16 + (*(float *)((char *)&auVar46 + 4))) * fVar59;
          pfVar19[2] = (*(float *)((char *)&auVar46 + 8)) * fVar64 + (fVar17 + (*(float *)((char *)&auVar46 + 8))) * fVar59;
          pfVar19[3] = (*(float *)((char *)&auVar46 + 12)) * fVar64 + (fVar44 + (*(float *)((char *)&auVar46 + 12))) * fVar59;
          local_14 = (gen_v16 *)((int)local_14 + 0x40);
          local_1c = local_1c + 1;
          pfVar19[4] = fVar63 * fVar66 + (fVar48 + fVar57) * fVar62;
          pfVar19[5] = fVar43 * fVar66 + (fVar49 + fVar51) * fVar62;
          pfVar19[6] = fVar47 * fVar66 + (fVar52 + fVar54) * fVar62;
          pfVar19[7] = fVar50 * fVar66 + (fVar55 + fVar60) * fVar62;
          pfVar20 = pfVar20 + 0x10;
          pfVar19 = pfVar19 + 0x10;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d5c7e0 */
unsigned int F_00d5c7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd5c7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  gen_v12 * pauVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  float * pfVar25;
  gen_v16 * pauVar26;
  float * pfVar27;
  float * pfVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar35 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar51 [16];
  float fVar94;
  float fVar95;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar118;
  float fVar127;
  float fVar128;
  float fVar132;
  float fVar136;
  float fVar137;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float local_840;
  float fStack_83c;
  float fStack_838;
  float fStack_834;
  float local_7b0;
  float fStack_7ac;
  float fStack_7a8;
  float fStack_7a4;
  float local_780;
  float fStack_77c;
  float fStack_778;
  float fStack_774;
  float local_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  float local_340;
  float fStack_33c;
  float local_310;
  float fStack_30c;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_290;
  float fStack_28c;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float local_1f0;
  float fStack_1ec;
  float local_1b0;
  float fStack_1ac;
  float local_1a0;
  float fStack_19c;
  float local_180;
  float fStack_17c;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float local_120;
  float fStack_11c;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_50;
  float fStack_4c;
  float fStack_48;
  int local_14;
  
  fVar21 = *(float *)&REFG(undefined, 0x1136edc);
  fVar20 = *(float *)&REFG(undefined, 0x1136ed8);
  fVar19 = *(float *)&REFG(undefined, 0x1136ed4);
  fVar18 = *(float *)&REFG(undefined, 0x1136ed0);
  fVar10 = *(float *)&REFG(undefined, 0x1136ecc);
  fVar9 = *(float *)&REFG(undefined, 0x1136ec8);
  fVar8 = *(float *)&REFG(undefined, 0x1136ec4);
  fVar7 = *(float *)&REFG(undefined, 0x1136ec0);
  fVar6 = *(float *)&REFG(undefined, 0x1136ebc);
  fVar5 = *(float *)&REFG(undefined, 0x1136eb8);
  fVar4 = *(float *)&REFG(undefined, 0x1136eb4);
  fVar3 = *(float *)&REFG(undefined, 0x1136eb0);
  if (param_7 == 0) {
    if (param_6 == -1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar25 = (float *)(param_1 + 0xa0);
        pfVar27 = (float *)(param_3 + 0x70);
        pauVar26 = (gen_v16 *)(param_2 + 0x50);
        do {
          fVar7 = *(float *)pauVar26[-4];
          fVar8 = *(float *)(pauVar26[-4] + 4);
          fVar9 = *(float *)(pauVar26[-4] + 8);
          fVar10 = *(float *)(pauVar26[-4] + 0xc);
          fVar11 = *(float *)pauVar26[-1];
          fVar12 = *(float *)(pauVar26[-1] + 4);
          fVar13 = *(float *)(pauVar26[-1] + 8);
          fVar14 = *(float *)(pauVar26[-1] + 0xc);
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar27)));
          fVar15 = *pfVar28;
          fVar16 = pfVar28[1];
          fVar17 = pfVar28[2];
          fVar49 = pfVar28[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar25)));
          fVar59 = *pfVar28;
          fVar73 = pfVar28[1];
          fVar89 = pfVar28[2];
          fVar50 = pfVar28[3];
          fVar61 = pfVar27[0xc];
          fVar62 = pfVar27[0xd];
          fVar63 = pfVar27[0xe];
          fVar77 = pfVar27[-0x18];
          fVar78 = pfVar27[-0x17];
          fVar80 = pfVar27[-0x16];
          fVar88 = *pfVar27;
          fVar90 = pfVar27[1];
          fVar91 = pfVar27[2];
          fVar47 = pfVar27[-0xc];
          fVar57 = pfVar27[-0xb];
          fVar81 = pfVar27[-10];
          fVar42 = gen_bits2f((uint)gen_fl2bits(pfVar27[-0x15]) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar43 = gen_bits2f((uint)gen_fl2bits(pfVar27[-9]) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar74 = gen_bits2f((uint)gen_fl2bits(pfVar27[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          fVar53 = gen_bits2f((uint)gen_fl2bits(pfVar27[0xf]) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          fVar67 = ((fVar42 * fVar10 - fVar77 * fVar7) - fVar78 * fVar8) - fVar80 * fVar9;
          fVar84 = ((fVar43 * fVar14 - fVar47 * fVar11) - fVar57 * fVar12) - fVar81 * fVar13;
          fVar75 = ((fVar74 * fVar49 - fVar88 * fVar15) - fVar90 * fVar16) - fVar91 * fVar17;
          fVar72 = ((fVar53 * fVar50 - fVar61 * fVar59) - fVar62 * fVar73) - fVar63 * fVar89;
          fVar68 = ((fVar80 * fVar8 - fVar78 * fVar9) + fVar77 * fVar10) + fVar42 * fVar7;
          fVar60 = ((fVar81 * fVar12 - fVar57 * fVar13) + fVar47 * fVar14) + fVar43 * fVar11;
          fVar76 = ((fVar91 * fVar16 - fVar90 * fVar17) + fVar88 * fVar49) + fVar74 * fVar15;
          fVar71 = ((fVar63 * fVar73 - fVar62 * fVar89) + fVar61 * fVar50) + fVar53 * fVar59;
          fVar117 = ((fVar77 * fVar9 - fVar80 * fVar7) + fVar78 * fVar10) + fVar42 * fVar8;
          fVar126 = ((fVar47 * fVar13 - fVar81 * fVar11) + fVar57 * fVar14) + fVar43 * fVar12;
          fVar131 = ((fVar88 * fVar17 - fVar91 * fVar15) + fVar90 * fVar49) + fVar74 * fVar16;
          fVar135 = ((fVar61 * fVar89 - fVar63 * fVar59) + fVar62 * fVar50) + fVar53 * fVar73;
          fVar42 = ((fVar78 * fVar7 - fVar77 * fVar8) + fVar80 * fVar10) + fVar42 * fVar9;
          fVar44 = ((fVar57 * fVar11 - fVar47 * fVar12) + fVar81 * fVar14) + fVar43 * fVar13;
          fVar52 = ((fVar90 * fVar15 - fVar88 * fVar16) + fVar91 * fVar49) + fVar74 * fVar17;
          fVar54 = ((fVar62 * fVar59 - fVar61 * fVar73) + fVar63 * fVar50) + fVar53 * fVar89;
          fVar15 = pfVar27[8];
          fVar16 = pfVar27[9];
          fVar17 = pfVar27[10];
          fVar80 = pfVar27[0xb];
          memcpy(&(auVar119), &(*(gen_v16 *)(pfVar27 + -0x1c)), sizeof(*(gen_v16 *)(pfVar27 + -0x1c)) < sizeof(auVar119) ? sizeof(*(gen_v16 *)(pfVar27 + -0x1c)) : sizeof(auVar119));
          fVar7 = pfVar27[-0x10];
          fVar8 = pfVar27[-0xf];
          fVar9 = pfVar27[-0xe];
          fVar10 = pfVar27[-0xd];
          fVar11 = pfVar27[-4];
          fVar12 = pfVar27[-3];
          fVar13 = pfVar27[-2];
          fVar14 = pfVar27[-1];
          fVar49 = (*(float *)((char *)&auVar119 + 0));
          fVar50 = (*(float *)((char *)&auVar119 + 4));
          local_1a0 = (*(float *)((char *)&auVar119 + 8));
          fStack_19c = (*(float *)((char *)&auVar119 + 12));
          fVar59 = fVar68 * fVar68 + fVar18;
          fVar61 = fVar60 * fVar60 + fVar19;
          fVar77 = fVar76 * fVar76 + fVar20;
          fVar90 = fVar71 * fVar71 + fVar21;
          fVar73 = fVar117 * fVar117 + fVar18;
          fVar62 = fVar126 * fVar126 + fVar19;
          fVar78 = fVar131 * fVar131 + fVar20;
          fVar91 = fVar135 * fVar135 + fVar21;
          fVar89 = fVar42 * fVar42 + fVar18;
          fVar63 = fVar44 * fVar44 + fVar19;
          fVar88 = fVar52 * fVar52 + fVar20;
          fVar47 = fVar54 * fVar54 + fVar21;
          fVar82 = ((local_1a0 * fVar117 - fVar50 * fVar42) * fVar67 +
                   (local_1a0 * fVar42 + fVar50 * fVar117) * fVar68) - (fVar89 + fVar73) * fVar49;
          fVar64 = ((fVar9 * fVar126 - fVar8 * fVar44) * fVar84 +
                   (fVar9 * fVar44 + fVar8 * fVar126) * fVar60) - (fVar63 + fVar62) * fVar7;
          fVar48 = ((fVar13 * fVar131 - fVar12 * fVar52) * fVar75 +
                   (fVar13 * fVar52 + fVar12 * fVar131) * fVar76) - (fVar88 + fVar78) * fVar11;
          fVar87 = ((fVar17 * fVar135 - fVar16 * fVar54) * fVar72 +
                   (fVar17 * fVar54 + fVar16 * fVar135) * fVar71) - (fVar47 + fVar91) * fVar15;
          fVar95 = ((fVar49 * fVar42 - local_1a0 * fVar68) * fVar67 +
                   (local_1a0 * fVar42 + fVar49 * fVar68) * fVar117) - (fVar89 + fVar59) * fVar50;
          fVar101 = ((fVar7 * fVar44 - fVar9 * fVar60) * fVar84 +
                    (fVar9 * fVar44 + fVar7 * fVar60) * fVar126) - (fVar63 + fVar61) * fVar8;
          fVar103 = ((fVar11 * fVar52 - fVar13 * fVar76) * fVar75 +
                    (fVar13 * fVar52 + fVar11 * fVar76) * fVar131) - (fVar88 + fVar77) * fVar12;
          fVar105 = ((fVar15 * fVar54 - fVar17 * fVar71) * fVar72 +
                    (fVar17 * fVar54 + fVar15 * fVar71) * fVar135) - (fVar47 + fVar90) * fVar16;
          fVar43 = ((fVar50 * fVar68 - fVar49 * fVar117) * fVar67 +
                   (fVar50 * fVar117 + fVar49 * fVar68) * fVar42) - (fVar73 + fVar59) * local_1a0;
          fVar74 = ((fVar8 * fVar60 - fVar7 * fVar126) * fVar84 +
                   (fVar8 * fVar126 + fVar7 * fVar60) * fVar44) - (fVar62 + fVar61) * fVar9;
          fVar53 = ((fVar12 * fVar76 - fVar11 * fVar131) * fVar75 +
                   (fVar12 * fVar131 + fVar11 * fVar76) * fVar52) - (fVar78 + fVar77) * fVar13;
          fVar66 = ((fVar16 * fVar71 - fVar15 * fVar135) * fVar72 +
                   (fVar16 * fVar135 + fVar15 * fVar71) * fVar54) - (fVar91 + fVar90) * fVar17;
          fVar7 = *(float *)(pauVar26[-5] + 4);
          fVar8 = *(float *)(pauVar26[-5] + 8);
          fVar9 = *(float *)(pauVar26[-5] + 0xc);
          fVar11 = *(float *)pauVar26[-2];
          fVar12 = *(float *)(pauVar26[-2] + 4);
          fVar13 = *(float *)(pauVar26[-2] + 8);
          fVar15 = *(float *)(pauVar26[-2] + 0xc);
          fVar16 = *(float *)pauVar26[1];
          fVar17 = *(float *)(pauVar26[1] + 4);
          fVar49 = *(float *)(pauVar26[1] + 8);
          fVar59 = *(float *)(pauVar26[1] + 0xc);
          fVar73 = *(float *)pauVar26[4];
          fVar89 = *(float *)(pauVar26[4] + 4);
          fVar50 = *(float *)(pauVar26[4] + 8);
          fVar61 = *(float *)(pauVar26[4] + 0xc);
          gen_divps(&(auVar35), &(pauVar26[-3]), (pfVar27 + -0x14));
          gen_divps(&(auVar119), &(*pauVar26), (pfVar27 + -8));
          gen_divps(&(auVar120), &(pauVar26[3]), (pfVar27 + 4));
          local_2d0 = (*(float *)((char *)&auVar119 + 0));
          fStack_2cc = (*(float *)((char *)&auVar119 + 4));
          fStack_2c8 = (*(float *)((char *)&auVar119 + 8));
          fStack_2c4 = (*(float *)((char *)&auVar119 + 12));
          gen_divps(&(auVar121), &(pauVar26[6]), (pfVar27 + 0x10));
          local_340 = (*(float *)((char *)&auVar120 + 0));
          fStack_33c = (*(float *)((char *)&auVar120 + 4));
          fVar88 = *(float *)(pauVar26[1] + 8);
          fVar90 = *(float *)(pauVar26[1] + 0xc);
          memcpy(&(auVar119), &(pauVar26[-5]), sizeof(pauVar26[-5]) < sizeof(auVar119) ? sizeof(pauVar26[-5]) : sizeof(auVar119));
          fVar62 = *(float *)pauVar26[-2];
          fVar63 = *(float *)(pauVar26[-2] + 4);
          fVar77 = *(float *)(pauVar26[-2] + 8);
          fVar78 = *(float *)(pauVar26[-2] + 0xc);
          fVar91 = *(float *)pauVar26[4];
          fVar47 = *(float *)(pauVar26[4] + 4);
          fVar57 = *(float *)(pauVar26[4] + 8);
          fVar81 = *(float *)(pauVar26[4] + 0xc);
          local_150 = gen_bits2f((uint)*(undefined8 *)pauVar26[1]);
          fStack_14c = gen_bits2f((uint)((ulonglong)*(undefined8 *)pauVar26[1] >> 0x20));
          local_90 = (*(float *)((char *)&auVar119 + 8));
          fStack_8c = (*(float *)((char *)&auVar119 + 12));
          fVar83 = *(float *)&REFG(undefined, 0x1138af0) - fVar3;
          fVar65 = *(float *)&REFG(undefined, 0x1138af4) - fVar4;
          fVar58 = *(float *)&REFG(undefined, 0x1138af8) - fVar5;
          fVar92 = *(float *)&REFG(undefined, 0x1138afc) - fVar6;
          pfVar25[-0x28] =
               (*(float *)pauVar26[-5] - (fVar82 + fVar82)) * fVar3 + fVar83 * (*(float *)((char *)&auVar119 + 0));
          pfVar25[-0x27] = (fVar7 - (fVar95 + fVar95)) * fVar3 + fVar83 * (*(float *)((char *)&auVar119 + 4));
          pfVar25[-0x26] = (fVar8 - (fVar43 + fVar43)) * fVar3 + fVar83 * local_90;
          pfVar25[-0x25] = (fVar9 - fStack_19c) * fVar3 + fVar83 * fStack_8c;
          pfVar25[-0x1c] = (fVar11 - (fVar64 + fVar64)) * fVar4 + fVar65 * fVar62;
          pfVar25[-0x1b] = (fVar12 - (fVar101 + fVar101)) * fVar4 + fVar65 * fVar63;
          pfVar25[-0x1a] = (fVar13 - (fVar74 + fVar74)) * fVar4 + fVar65 * fVar77;
          pfVar25[-0x19] = (fVar15 - fVar10) * fVar4 + fVar65 * fVar78;
          pfVar25[-0x10] = (fVar16 - (fVar48 + fVar48)) * fVar5 + fVar58 * local_150;
          pfVar25[-0xf] = (fVar17 - (fVar103 + fVar103)) * fVar5 + fVar58 * fStack_14c;
          pfVar25[-0xe] = (fVar49 - (fVar53 + fVar53)) * fVar5 + fVar58 * fVar88;
          pfVar25[-0xd] = (fVar59 - fVar14) * fVar5 + fVar58 * fVar90;
          pfVar25[-4] = (fVar73 - (fVar87 + fVar87)) * fVar6 + fVar92 * fVar91;
          pfVar25[-3] = (fVar89 - (fVar105 + fVar105)) * fVar6 + fVar92 * fVar47;
          pfVar25[-2] = (fVar50 - (fVar66 + fVar66)) * fVar6 + fVar92 * fVar57;
          pfVar25[-1] = (fVar61 - fVar80) * fVar6 + fVar92 * fVar81;
          fVar7 = *(float *)(pauVar26[-4] + 4);
          fVar8 = *(float *)(pauVar26[-4] + 8);
          fVar9 = *(float *)(pauVar26[-4] + 0xc);
          fVar10 = *(float *)pauVar26[-1];
          fVar11 = *(float *)(pauVar26[-1] + 4);
          fVar12 = *(float *)(pauVar26[-1] + 8);
          fVar13 = *(float *)(pauVar26[-1] + 0xc);
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar27)));
          fVar14 = *pfVar28;
          fVar15 = pfVar28[1];
          fVar16 = pfVar28[2];
          fVar17 = pfVar28[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar25)));
          fVar49 = *pfVar28;
          fVar59 = pfVar28[1];
          fVar73 = pfVar28[2];
          fVar89 = pfVar28[3];
          uVar29 = -(uint)(((fVar117 * fVar7 + fVar68 * *(float *)pauVar26[-4]) + fVar42 * fVar8) +
                           fVar67 * fVar9 < 0.0);
          uVar30 = -(uint)(((fVar126 * fVar11 + fVar60 * fVar10) + fVar44 * fVar12) +
                           fVar84 * fVar13 < 0.0);
          uVar31 = -(uint)(((fVar131 * fVar15 + fVar76 * fVar14) + fVar52 * fVar16) +
                           fVar75 * fVar17 < 0.0);
          uVar32 = -(uint)(((fVar135 * fVar59 + fVar71 * fVar49) + fVar54 * fVar73) +
                           fVar72 * fVar89 < 0.0);
          fVar50 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar3);
          fVar61 = gen_bits2f(~uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar30 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar4);
          fVar62 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar5);
          fVar63 = gen_bits2f(~uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar32 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar6);
          pfVar25[-0x24] = fVar68 * fVar3 + fVar50 * *(float *)pauVar26[-4];
          pfVar25[-0x23] = fVar117 * fVar3 + fVar50 * fVar7;
          pfVar25[-0x22] = fVar42 * fVar3 + fVar50 * fVar8;
          pfVar25[-0x21] = fVar67 * fVar3 + fVar50 * fVar9;
          pfVar25[-0x18] = fVar60 * fVar4 + fVar61 * fVar10;
          pfVar25[-0x17] = fVar126 * fVar4 + fVar61 * fVar11;
          pfVar25[-0x16] = fVar44 * fVar4 + fVar61 * fVar12;
          pfVar25[-0x15] = fVar84 * fVar4 + fVar61 * fVar13;
          pfVar28 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pfVar27)));
          *pfVar28 = fVar76 * fVar5 + fVar62 * fVar14;
          pfVar28[1] = fVar131 * fVar5 + fVar62 * fVar15;
          pfVar28[2] = fVar52 * fVar5 + fVar62 * fVar16;
          pfVar28[3] = fVar75 * fVar5 + fVar62 * fVar17;
          *pfVar25 = fVar71 * fVar6 + fVar63 * fVar49;
          pfVar25[1] = fVar135 * fVar6 + fVar63 * fVar59;
          pfVar25[2] = fVar54 * fVar6 + fVar63 * fVar73;
          pfVar25[3] = fVar72 * fVar6 + fVar63 * fVar89;
          fVar7 = *(float *)(pauVar26[-3] + 4);
          fVar8 = *(float *)(pauVar26[-3] + 8);
          fVar9 = *(float *)(pauVar26[-3] + 0xc);
          fVar10 = *(float *)*pauVar26;
          fVar11 = *(float *)(*pauVar26 + 4);
          fVar12 = *(float *)(*pauVar26 + 8);
          fVar13 = *(float *)(*pauVar26 + 0xc);
          fVar14 = *(float *)pauVar26[3];
          fVar15 = *(float *)(pauVar26[3] + 4);
          fVar16 = *(float *)(pauVar26[3] + 8);
          fVar17 = *(float *)(pauVar26[3] + 0xc);
          fVar49 = *(float *)pauVar26[6];
          fVar59 = *(float *)(pauVar26[6] + 4);
          fVar73 = *(float *)(pauVar26[6] + 8);
          fVar89 = *(float *)(pauVar26[6] + 0xc);
          local_780 = (*(float *)((char *)&auVar35 + 0));
          fStack_77c = (*(float *)((char *)&auVar35 + 4));
          fStack_778 = (*(float *)((char *)&auVar35 + 8));
          fStack_774 = (*(float *)((char *)&auVar35 + 12));
          local_6f0 = (*(float *)((char *)&auVar121 + 0));
          fStack_6ec = (*(float *)((char *)&auVar121 + 4));
          fStack_6e8 = (*(float *)((char *)&auVar121 + 8));
          fStack_6e4 = (*(float *)((char *)&auVar121 + 12));
          fVar50 = *(float *)&REFG(undefined, 0x1138af0) - fVar3;
          fVar61 = *(float *)&REFG(undefined, 0x1138af4) - fVar4;
          fVar62 = *(float *)&REFG(undefined, 0x1138af8) - fVar5;
          fVar63 = *(float *)&REFG(undefined, 0x1138afc) - fVar6;
          local_150 = (*(float *)((char *)&auVar120 + 8));
          fStack_14c = (*(float *)((char *)&auVar120 + 12));
          pfVar25[-0x20] = local_780 * fVar3 + *(float *)pauVar26[-3] * fVar50;
          pfVar25[-0x1f] = fStack_77c * fVar3 + fVar7 * fVar50;
          pfVar25[-0x1e] = fStack_778 * fVar3 + fVar8 * fVar50;
          pfVar25[-0x1d] = fStack_774 * fVar3 + fVar9 * fVar50;
          pfVar25[-0x14] = local_2d0 * fVar4 + fVar10 * fVar61;
          pfVar25[-0x13] = fStack_2cc * fVar4 + fVar11 * fVar61;
          pfVar25[-0x12] = fStack_2c8 * fVar4 + fVar12 * fVar61;
          pfVar25[-0x11] = fStack_2c4 * fVar4 + fVar13 * fVar61;
          pfVar25[-8] = local_340 * fVar5 + fVar14 * fVar62;
          pfVar25[-7] = fStack_33c * fVar5 + fVar15 * fVar62;
          pfVar25[-6] = local_150 * fVar5 + fVar16 * fVar62;
          pfVar25[-5] = fStack_14c * fVar5 + fVar17 * fVar62;
          pfVar25[4] = local_6f0 * fVar6 + fVar49 * fVar63;
          pfVar25[5] = fStack_6ec * fVar6 + fVar59 * fVar63;
          pfVar25[6] = fStack_6e8 * fVar6 + fVar73 * fVar63;
          pfVar25[7] = fStack_6e4 * fVar6 + fVar89 * fVar63;
          pfVar27 = pfVar27 + 0x30;
          pauVar26 = pauVar26 + 0xc;
          pfVar25 = pfVar25 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 0) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar27 = (float *)(param_1 + 0x70);
        pfVar25 = (float *)(param_3 + 0x50);
        pfVar28 = (float *)(param_2 + 0xa0);
        do {
          fVar7 = pfVar25[-0x13];
          fVar8 = pfVar25[-0x12];
          fVar9 = pfVar25[-0x11];
          fVar89 = pfVar25[-0x10];
          fVar50 = pfVar25[-0xf];
          fVar61 = pfVar25[-0xe];
          fVar62 = pfVar25[-0xd];
          fVar63 = pfVar25[-0xc];
          fVar77 = pfVar25[-0xb];
          fVar78 = pfVar25[-10];
          fVar80 = pfVar25[-9];
          fVar88 = pfVar25[-8];
          fVar90 = pfVar25[-7];
          fVar91 = pfVar25[-6];
          fVar47 = pfVar25[-5];
          fVar57 = pfVar25[-4];
          fVar81 = pfVar25[-3];
          fVar42 = pfVar25[-2];
          fVar43 = pfVar25[-1];
          fVar44 = *pfVar25;
          fVar74 = pfVar25[1];
          fVar52 = pfVar25[2];
          fVar53 = pfVar25[3];
          memcpy(&(auVar119), &(*(gen_v16 *)(pfVar25 + 4)), sizeof(*(gen_v16 *)(pfVar25 + 4)) < sizeof(auVar119) ? sizeof(*(gen_v16 *)(pfVar25 + 4)) : sizeof(auVar119));
          memcpy(&(auVar23), &(*(gen_v12 *)(pfVar25 + 8)), sizeof(*(gen_v12 *)(pfVar25 + 8)) < sizeof(auVar23) ? sizeof(*(gen_v12 *)(pfVar25 + 8)) : sizeof(auVar23));
          memcpy(&(auVar35), &(*(gen_v16 *)(pfVar25 + 8)), sizeof(*(gen_v16 *)(pfVar25 + 8)) < sizeof(auVar35) ? sizeof(*(gen_v16 *)(pfVar25 + 8)) : sizeof(auVar35));
          memcpy(&(auVar24), &(*(gen_v12 *)(pfVar25 + 0xc)), sizeof(*(gen_v12 *)(pfVar25 + 0xc)) < sizeof(auVar24) ? sizeof(*(gen_v12 *)(pfVar25 + 0xc)) : sizeof(auVar24));
          memcpy(&(auVar120), &(*(gen_v16 *)(pfVar25 + 0xc)), sizeof(*(gen_v16 *)(pfVar25 + 0xc)) < sizeof(auVar120) ? sizeof(*(gen_v16 *)(pfVar25 + 0xc)) : sizeof(auVar120));
          fVar54 = pfVar25[0x10];
          fVar66 = pfVar25[0x11];
          fVar67 = pfVar25[0x12];
          fVar68 = pfVar25[0x13];
          fVar82 = pfVar25[0x14];
          fVar83 = pfVar25[0x15];
          fVar84 = pfVar25[0x16];
          fVar60 = pfVar25[0x17];
          fVar64 = pfVar25[0x18];
          fVar65 = pfVar25[0x19];
          fVar75 = pfVar25[0x1a];
          fVar76 = pfVar25[0x1b];
          fVar10 = pfVar28[-0x27];
          fVar18 = pfVar28[-0x26];
          fVar19 = pfVar28[-0x25];
          fVar20 = pfVar28[-0x1c];
          fVar21 = pfVar28[-0x1b];
          fVar11 = pfVar28[-0x1a];
          fVar12 = pfVar28[-0x19];
          fVar13 = pfVar28[-0x10];
          fVar14 = pfVar28[-0xf];
          fVar15 = pfVar28[-0xe];
          fVar16 = pfVar28[-0xd];
          fVar17 = pfVar28[-4];
          fVar49 = pfVar28[-3];
          fVar59 = pfVar28[-2];
          fVar73 = pfVar28[-1];
          fVar48 = *(float *)&REFG(undefined, 0x1138af0) - fVar3;
          fVar58 = *(float *)&REFG(undefined, 0x1138af4) - fVar4;
          fVar72 = *(float *)&REFG(undefined, 0x1138af8) - fVar5;
          fVar71 = *(float *)&REFG(undefined, 0x1138afc) - fVar6;
          local_120 = (*(float *)((char *)&auVar119 + 8));
          fStack_11c = (*(float *)((char *)&auVar119 + 12));
          pfVar27[-0x1c] = pfVar25[-0x14] * fVar3 + fVar48 * pfVar28[-0x28];
          pfVar27[-0x1b] = fVar7 * fVar3 + fVar48 * fVar10;
          pfVar27[-0x1a] = fVar8 * fVar3 + fVar48 * fVar18;
          pfVar27[-0x19] = fVar9 * fVar3 + fVar48 * fVar19;
          pfVar27[-0x10] = fVar88 * fVar4 + fVar58 * fVar20;
          pfVar27[-0xf] = fVar90 * fVar4 + fVar58 * fVar21;
          pfVar27[-0xe] = fVar91 * fVar4 + fVar58 * fVar11;
          pfVar27[-0xd] = fVar47 * fVar4 + fVar58 * fVar12;
          pfVar27[-4] = (*(float *)((char *)&auVar119 + 0)) * fVar5 + fVar72 * fVar13;
          pfVar27[-3] = (*(float *)((char *)&auVar119 + 4)) * fVar5 + fVar72 * fVar14;
          pfVar27[-2] = local_120 * fVar5 + fVar72 * fVar15;
          pfVar27[-1] = fStack_11c * fVar5 + fVar72 * fVar16;
          pfVar27[8] = fVar54 * fVar6 + fVar71 * fVar17;
          pfVar27[9] = fVar66 * fVar6 + fVar71 * fVar49;
          pfVar27[10] = fVar67 * fVar6 + fVar71 * fVar59;
          pfVar27[0xb] = fVar68 * fVar6 + fVar71 * fVar73;
          fVar7 = pfVar28[-0x23];
          fVar8 = pfVar28[-0x22];
          fVar9 = pfVar28[-0x21];
          fVar10 = pfVar28[-0x18];
          fVar18 = pfVar28[-0x17];
          fVar19 = pfVar28[-0x16];
          fVar20 = pfVar28[-0x15];
          pfVar2 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar27)));
          fVar21 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          fVar14 = *pfVar28;
          fVar15 = pfVar28[1];
          fVar16 = pfVar28[2];
          fVar17 = pfVar28[3];
          fVar90 = (*(float *)((char *)&auVar23 + 0));
          fVar91 = (*(float *)((char *)&auVar23 + 4));
          local_120 = (*(float *)((char *)&auVar35 + 8));
          fStack_11c = (*(float *)((char *)&auVar35 + 12));
          uVar29 = -(uint)(((fVar50 * fVar7 + fVar89 * pfVar28[-0x24]) + fVar61 * fVar8) +
                           fVar62 * fVar9 < 0.0);
          uVar30 = -(uint)(((fVar81 * fVar18 + fVar57 * fVar10) + fVar42 * fVar19) + fVar43 * fVar20
                          < 0.0);
          uVar31 = -(uint)(((fVar91 * fVar11 + fVar90 * fVar21) + local_120 * fVar12) +
                           fStack_11c * fVar13 < 0.0);
          uVar32 = -(uint)(((fVar83 * fVar15 + fVar82 * fVar14) + fVar84 * fVar16) + fVar60 * fVar17
                          < 0.0);
          fVar49 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar3);
          fVar59 = gen_bits2f(~uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar30 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar4);
          fVar73 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar5);
          fVar88 = gen_bits2f(~uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar32 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar6);
          pfVar27[-0x18] = fVar89 * fVar3 + fVar49 * pfVar28[-0x24];
          pfVar27[-0x17] = fVar50 * fVar3 + fVar49 * fVar7;
          pfVar27[-0x16] = fVar61 * fVar3 + fVar49 * fVar8;
          pfVar27[-0x15] = fVar62 * fVar3 + fVar49 * fVar9;
          pfVar27[-0xc] = fVar57 * fVar4 + fVar59 * fVar10;
          pfVar27[-0xb] = fVar81 * fVar4 + fVar59 * fVar18;
          pfVar27[-10] = fVar42 * fVar4 + fVar59 * fVar19;
          pfVar27[-9] = fVar43 * fVar4 + fVar59 * fVar20;
          *pfVar27 = fVar90 * fVar5 + fVar73 * fVar21;
          pfVar27[1] = fVar91 * fVar5 + fVar73 * fVar11;
          pfVar27[2] = local_120 * fVar5 + fVar73 * fVar12;
          pfVar27[3] = fStack_11c * fVar5 + fVar73 * fVar13;
          pfVar27[0xc] = fVar82 * fVar6 + fVar88 * fVar14;
          pfVar27[0xd] = fVar83 * fVar6 + fVar88 * fVar15;
          pfVar27[0xe] = fVar84 * fVar6 + fVar88 * fVar16;
          pfVar27[0xf] = fVar60 * fVar6 + fVar88 * fVar17;
          fVar7 = pfVar28[-0x1f];
          fVar8 = pfVar28[-0x1e];
          fVar9 = pfVar28[-0x1d];
          pfVar2 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar25)));
          fVar10 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          fVar21 = pfVar28[-8];
          fVar11 = pfVar28[-7];
          fVar12 = pfVar28[-6];
          fVar13 = pfVar28[-5];
          fVar14 = pfVar28[4];
          fVar15 = pfVar28[5];
          fVar16 = pfVar28[6];
          fVar17 = pfVar28[7];
          fVar49 = *(float *)&REFG(undefined, 0x1138af0) - fVar3;
          fVar59 = *(float *)&REFG(undefined, 0x1138af4) - fVar4;
          fVar73 = *(float *)&REFG(undefined, 0x1138af8) - fVar5;
          fVar89 = *(float *)&REFG(undefined, 0x1138afc) - fVar6;
          local_120 = (*(float *)((char *)&auVar120 + 8));
          fStack_11c = (*(float *)((char *)&auVar120 + 12));
          pfVar27[-0x14] = fVar63 * fVar3 + fVar49 * pfVar28[-0x20];
          pfVar27[-0x13] = fVar77 * fVar3 + fVar49 * fVar7;
          pfVar27[-0x12] = fVar78 * fVar3 + fVar49 * fVar8;
          pfVar27[-0x11] = fVar80 * fVar3 + fVar49 * fVar9;
          pfVar2 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pfVar25)));
          *pfVar2 = fVar44 * fVar4 + fVar59 * fVar10;
          pfVar2[1] = fVar74 * fVar4 + fVar59 * fVar18;
          pfVar2[2] = fVar52 * fVar4 + fVar59 * fVar19;
          pfVar2[3] = fVar53 * fVar4 + fVar59 * fVar20;
          pfVar27[4] = (*(float *)((char *)&auVar24 + 0)) * fVar5 + fVar73 * fVar21;
          pfVar27[5] = (*(float *)((char *)&auVar24 + 4)) * fVar5 + fVar73 * fVar11;
          pfVar27[6] = local_120 * fVar5 + fVar73 * fVar12;
          pfVar27[7] = fStack_11c * fVar5 + fVar73 * fVar13;
          pfVar27[0x10] = fVar64 * fVar6 + fVar89 * fVar14;
          pfVar27[0x11] = fVar65 * fVar6 + fVar89 * fVar15;
          pfVar27[0x12] = fVar75 * fVar6 + fVar89 * fVar16;
          pfVar27[0x13] = fVar76 * fVar6 + fVar89 * fVar17;
          pfVar25 = pfVar25 + 0x30;
          pfVar28 = pfVar28 + 0x30;
          pfVar27 = pfVar27 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar3 = *param_4;
      fVar4 = param_4[1];
      fVar5 = param_4[2];
      fVar6 = param_4[3];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar27 = (float *)(param_1 + 0xa0);
        pauVar26 = (gen_v16 *)(param_3 + 0x70);
        pfVar25 = (float *)(param_2 + 0x40);
        do {
          fVar7 = *(float *)*(gen_v12 *)(pfVar25 + -0xc);
          fVar8 = pfVar25[-0xb];
          fVar9 = pfVar25[-10];
          memcpy(&(auVar23), &(*(gen_v12 *)(pfVar25 + -0xc)), sizeof(*(gen_v12 *)(pfVar25 + -0xc)) < sizeof(auVar23) ? sizeof(*(gen_v12 *)(pfVar25 + -0xc)) : sizeof(auVar23));
          fVar10 = pfVar25[-9];
          fVar11 = *pfVar25;
          fVar12 = pfVar25[1];
          fVar13 = pfVar25[2];
          fVar14 = pfVar25[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pauVar26)));
          fVar15 = *pfVar28;
          fVar16 = pfVar28[1];
          fVar17 = pfVar28[2];
          fVar49 = pfVar28[3];
          pauVar1 = ((gen_v12 *)GEN_TOP(((param_2 - param_1) + (int)pfVar27)));
          fVar59 = *(float *)*pauVar1;
          fVar73 = *(float *)(*pauVar1 + 4);
          fVar89 = *(float *)(*pauVar1 + 8);
          memcpy(&(auVar24), &(*pauVar1), sizeof(*pauVar1) < sizeof(auVar24) ? sizeof(*pauVar1) : sizeof(auVar24));
          fVar50 = *(float *)pauVar1[1];
          fVar61 = *(float *)pauVar26[-4];
          fVar62 = *(float *)(pauVar26[-4] + 4);
          fVar63 = *(float *)(pauVar26[-4] + 8);
          fVar77 = *(float *)(pauVar26[-4] + 0xc);
          memcpy(&(auVar119), &(pauVar26[-7]), sizeof(pauVar26[-7]) < sizeof(auVar119) ? sizeof(pauVar26[-7]) : sizeof(auVar119));
          fVar91 = *(float *)pauVar26[2];
          fVar47 = *(float *)(pauVar26[2] + 4);
          fVar57 = *(float *)(pauVar26[2] + 8);
          fVar79 = *(float *)(pauVar26[2] + 0xc);
          fVar78 = *(float *)pauVar26[-1];
          fVar80 = *(float *)(pauVar26[-1] + 4);
          fVar88 = *(float *)(pauVar26[-1] + 8);
          fVar90 = *(float *)(pauVar26[-1] + 0xc);
          fVar81 = (*(float *)((char *)&auVar119 + 0));
          fVar74 = (*(float *)((char *)&auVar119 + 4));
          local_1f0 = (*(float *)((char *)&auVar119 + 8));
          fStack_1ec = (*(float *)((char *)&auVar119 + 12));
          fVar42 = fVar7 * fVar7 + fVar18;
          fVar52 = fVar11 * fVar11 + fVar19;
          fVar66 = fVar15 * fVar15 + fVar20;
          fVar82 = fVar59 * fVar59 + fVar21;
          fVar43 = fVar8 * fVar8 + fVar18;
          fVar53 = fVar12 * fVar12 + fVar19;
          fVar67 = fVar16 * fVar16 + fVar20;
          fVar83 = fVar73 * fVar73 + fVar21;
          fVar44 = fVar9 * fVar9 + fVar18;
          fVar54 = fVar13 * fVar13 + fVar19;
          fVar68 = fVar17 * fVar17 + fVar20;
          fVar84 = fVar89 * fVar89 + fVar21;
          fVar45 = ((local_1f0 * fVar8 - fVar74 * fVar9) * fVar10 +
                   (local_1f0 * fVar9 + fVar74 * fVar8) * fVar7) - (fVar44 + fVar43) * fVar81;
          fVar55 = ((fVar63 * fVar12 - fVar62 * fVar13) * fVar14 +
                   (fVar63 * fVar13 + fVar62 * fVar12) * fVar11) - (fVar54 + fVar53) * fVar61;
          fVar69 = ((fVar88 * fVar16 - fVar80 * fVar17) * fVar49 +
                   (fVar88 * fVar17 + fVar80 * fVar16) * fVar15) - (fVar68 + fVar67) * fVar78;
          fVar85 = ((fVar57 * fVar73 - fVar47 * fVar89) * fVar50 +
                   (fVar57 * fVar89 + fVar47 * fVar73) * fVar59) - (fVar84 + fVar83) * fVar91;
          fVar94 = ((fVar81 * fVar9 - local_1f0 * fVar7) * fVar10 +
                   (local_1f0 * fVar9 + fVar81 * fVar7) * fVar8) - (fVar44 + fVar42) * fVar74;
          fVar100 = ((fVar61 * fVar13 - fVar63 * fVar11) * fVar14 +
                    (fVar63 * fVar13 + fVar61 * fVar11) * fVar12) - (fVar54 + fVar52) * fVar62;
          fVar102 = ((fVar78 * fVar17 - fVar88 * fVar15) * fVar49 +
                    (fVar88 * fVar17 + fVar78 * fVar15) * fVar16) - (fVar68 + fVar66) * fVar80;
          fVar104 = ((fVar91 * fVar89 - fVar57 * fVar59) * fVar50 +
                    (fVar57 * fVar89 + fVar91 * fVar59) * fVar73) - (fVar84 + fVar82) * fVar47;
          fVar33 = ((fVar74 * fVar7 - fVar81 * fVar8) * fVar10 +
                   (fVar74 * fVar8 + fVar81 * fVar7) * fVar9) - (fVar43 + fVar42) * local_1f0;
          fVar36 = ((fVar62 * fVar11 - fVar61 * fVar12) * fVar14 +
                   (fVar62 * fVar12 + fVar61 * fVar11) * fVar13) - (fVar53 + fVar52) * fVar63;
          fVar38 = ((fVar80 * fVar15 - fVar78 * fVar16) * fVar49 +
                   (fVar80 * fVar16 + fVar78 * fVar15) * fVar17) - (fVar67 + fVar66) * fVar88;
          fVar40 = ((fVar47 * fVar59 - fVar91 * fVar73) * fVar50 +
                   (fVar47 * fVar73 + fVar91 * fVar59) * fVar89) - (fVar83 + fVar82) * fVar57;
          fVar7 = pfVar25[-0xf];
          fVar8 = pfVar25[-0xe];
          fVar9 = pfVar25[-0xd];
          fVar59 = pfVar25[-4];
          fVar73 = pfVar25[-3];
          fVar89 = pfVar25[-2];
          fVar61 = pfVar25[-1];
          fVar62 = pfVar25[8];
          fVar63 = pfVar25[9];
          fVar78 = pfVar25[10];
          fVar80 = pfVar25[0xb];
          fVar88 = pfVar25[0x14];
          fVar91 = pfVar25[0x15];
          fVar47 = pfVar25[0x16];
          fVar57 = pfVar25[0x17];
          local_90 = (*(float *)((char *)&auVar24 + 0));
          fVar83 = local_90;
          fStack_8c = (*(float *)((char *)&auVar24 + 4));
          fVar84 = fStack_8c;
          fStack_88 = (*(float *)((char *)&auVar24 + 8));
          local_200 = (*(float *)((char *)&auVar23 + 0));
          fStack_1fc = (*(float *)((char *)&auVar23 + 4));
          fStack_1f8 = (*(float *)((char *)&auVar23 + 8));
          fVar81 = *(float *)pauVar26[-3];
          fVar42 = *(float *)(pauVar26[-3] + 4);
          fVar43 = *(float *)(pauVar26[-3] + 8);
          fVar44 = *(float *)(pauVar26[-3] + 0xc);
          memcpy(&(auVar119), &(*pauVar26), sizeof(*pauVar26) < sizeof(auVar119) ? sizeof(*pauVar26) : sizeof(auVar119));
          fVar66 = *(float *)pauVar26[3];
          fVar67 = *(float *)(pauVar26[3] + 4);
          fVar68 = *(float *)(pauVar26[3] + 8);
          fVar82 = *(float *)(pauVar26[3] + 0xc);
          fVar74 = *(float *)pauVar26[-6];
          fVar52 = *(float *)(pauVar26[-6] + 4);
          fVar53 = *(float *)(pauVar26[-6] + 8);
          fVar54 = *(float *)(pauVar26[-6] + 0xc);
          fVar60 = (*(float *)((char *)&auVar119 + 0));
          fVar64 = (*(float *)((char *)&auVar119 + 4));
          local_90 = (*(float *)((char *)&auVar119 + 8));
          fStack_8c = (*(float *)((char *)&auVar119 + 12));
          fVar115 = ((fVar54 * fVar10 - fVar74 * local_200) - fVar52 * fStack_1fc) -
                    fVar53 * fStack_1f8;
          fVar124 = ((fVar44 * fVar14 - fVar81 * fVar11) - fVar42 * fVar12) - fVar43 * fVar13;
          fVar129 = ((fStack_8c * fVar49 - fVar60 * fVar15) - fVar64 * fVar16) - local_90 * fVar17;
          fVar133 = ((fVar82 * fVar50 - fVar66 * fVar83) - fVar67 * fVar84) - fVar68 * fStack_88;
          fVar46 = ((fVar53 * fStack_1fc - fVar52 * fStack_1f8) + fVar74 * fVar10) +
                   fVar54 * local_200;
          fVar56 = ((fVar43 * fVar12 - fVar42 * fVar13) + fVar81 * fVar14) + fVar44 * fVar11;
          fVar70 = ((local_90 * fVar16 - fVar64 * fVar17) + fVar60 * fVar49) + fStack_8c * fVar15;
          fVar86 = ((fVar68 * fVar84 - fVar67 * fStack_88) + fVar66 * fVar50) + fVar82 * fVar83;
          fVar34 = ((fVar52 * local_200 - fVar74 * fStack_1fc) + fVar53 * fVar10) +
                   fVar54 * fStack_1f8;
          fVar37 = ((fVar42 * fVar11 - fVar81 * fVar12) + fVar43 * fVar14) + fVar44 * fVar13;
          fVar39 = ((fVar64 * fVar15 - fVar60 * fVar16) + local_90 * fVar49) + fStack_8c * fVar17;
          fVar41 = ((fVar67 * fVar83 - fVar66 * fVar84) + fVar68 * fVar50) + fVar82 * fStack_88;
          fVar138 = ((fVar74 * fStack_1f8 - fVar53 * local_200) + fVar52 * fVar10) +
                    fVar54 * fStack_1fc;
          fVar141 = ((fVar81 * fVar13 - fVar43 * fVar11) + fVar42 * fVar14) + fVar44 * fVar12;
          fVar143 = ((fVar60 * fVar17 - local_90 * fVar15) + fVar64 * fVar49) + fStack_8c * fVar16;
          fVar145 = ((fVar66 * fStack_88 - fVar68 * fVar83) + fVar67 * fVar50) + fVar82 * fVar84;
          fVar10 = *(float *)pauVar26[-5];
          fVar11 = *(float *)(pauVar26[-5] + 4);
          fVar12 = *(float *)(pauVar26[-5] + 8);
          fVar13 = *(float *)(pauVar26[-5] + 0xc);
          fVar14 = pfVar25[-8];
          fVar15 = pfVar25[-7];
          fVar16 = pfVar25[-6];
          fVar17 = pfVar25[-5];
          fVar49 = *(float *)pauVar26[-2];
          fVar50 = *(float *)(pauVar26[-2] + 4);
          fVar81 = *(float *)(pauVar26[-2] + 8);
          fVar42 = *(float *)(pauVar26[-2] + 0xc);
          fVar43 = pfVar25[4];
          fVar44 = pfVar25[5];
          fVar74 = pfVar25[6];
          fVar52 = pfVar25[7];
          fVar53 = *(float *)pauVar26[1];
          fVar54 = *(float *)(pauVar26[1] + 4);
          fVar66 = *(float *)(pauVar26[1] + 8);
          fVar67 = *(float *)(pauVar26[1] + 0xc);
          fVar68 = pfVar25[0x10];
          fVar82 = pfVar25[0x11];
          fVar83 = pfVar25[0x12];
          fVar84 = pfVar25[0x13];
          fVar60 = *(float *)pauVar26[4];
          fVar64 = *(float *)(pauVar26[4] + 4);
          fVar65 = *(float *)(pauVar26[4] + 8);
          fVar75 = *(float *)(pauVar26[4] + 0xc);
          fVar76 = pfVar25[0x1c];
          fVar48 = pfVar25[0x1d];
          fVar58 = pfVar25[0x1e];
          fVar72 = pfVar25[0x1f];
          fVar128 = pfVar25[0x14];
          fVar93 = pfVar25[0x15];
          fVar137 = pfVar25[0x16];
          fVar140 = pfVar25[0x17];
          fVar71 = pfVar25[-0xf];
          fVar87 = pfVar25[-0xe];
          fVar92 = pfVar25[-0xd];
          fVar95 = pfVar25[-4];
          fVar101 = pfVar25[-3];
          fVar103 = pfVar25[-2];
          fVar105 = pfVar25[-1];
          fVar117 = pfVar25[8];
          fVar126 = pfVar25[9];
          fVar131 = pfVar25[10];
          fVar135 = pfVar25[0xb];
          fVar116 = *(float *)&REFG(undefined, 0x1138af0) - fVar3;
          fVar125 = *(float *)&REFG(undefined, 0x1138af4) - fVar4;
          fVar130 = *(float *)&REFG(undefined, 0x1138af8) - fVar5;
          fVar134 = *(float *)&REFG(undefined, 0x1138afc) - fVar6;
          pfVar27[-0x28] = ((fVar45 + fVar45) + pfVar25[-0x10]) * fVar3 + pfVar25[-0x10] * fVar116;
          pfVar27[-0x27] = ((fVar94 + fVar94) + fVar7) * fVar3 + fVar71 * fVar116;
          pfVar27[-0x26] = ((fVar33 + fVar33) + fVar8) * fVar3 + fVar87 * fVar116;
          pfVar27[-0x25] = (fStack_1ec + fVar9) * fVar3 + fVar92 * fVar116;
          pfVar27[-0x1c] = ((fVar55 + fVar55) + fVar59) * fVar4 + fVar95 * fVar125;
          pfVar27[-0x1b] = ((fVar100 + fVar100) + fVar73) * fVar4 + fVar101 * fVar125;
          pfVar27[-0x1a] = ((fVar36 + fVar36) + fVar89) * fVar4 + fVar103 * fVar125;
          pfVar27[-0x19] = (fVar77 + fVar61) * fVar4 + fVar105 * fVar125;
          pfVar27[-0x10] = ((fVar69 + fVar69) + fVar62) * fVar5 + fVar117 * fVar130;
          pfVar27[-0xf] = ((fVar102 + fVar102) + fVar63) * fVar5 + fVar126 * fVar130;
          pfVar27[-0xe] = ((fVar38 + fVar38) + fVar78) * fVar5 + fVar131 * fVar130;
          pfVar27[-0xd] = (fVar90 + fVar80) * fVar5 + fVar135 * fVar130;
          pfVar27[-4] = ((fVar85 + fVar85) + fVar88) * fVar6 + fVar128 * fVar134;
          pfVar27[-3] = ((fVar104 + fVar104) + fVar91) * fVar6 + fVar93 * fVar134;
          pfVar27[-2] = ((fVar40 + fVar40) + fVar47) * fVar6 + fVar137 * fVar134;
          pfVar27[-1] = (fVar79 + fVar57) * fVar6 + fVar140 * fVar134;
          fVar7 = pfVar25[-0xb];
          fVar8 = pfVar25[-10];
          fVar9 = pfVar25[-9];
          fVar59 = *pfVar25;
          fVar73 = pfVar25[1];
          fVar89 = pfVar25[2];
          fVar61 = pfVar25[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pauVar26)));
          fVar62 = *pfVar28;
          fVar63 = pfVar28[1];
          fVar77 = pfVar28[2];
          fVar78 = pfVar28[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar27)));
          fVar80 = *pfVar28;
          fVar88 = pfVar28[1];
          fVar90 = pfVar28[2];
          fVar91 = pfVar28[3];
          uVar29 = -(uint)(((fVar138 * fVar7 + fVar46 * pfVar25[-0xc]) + fVar34 * fVar8) +
                           fVar115 * fVar9 < 0.0);
          uVar30 = -(uint)(((fVar141 * fVar73 + fVar56 * fVar59) + fVar37 * fVar89) +
                           fVar124 * fVar61 < 0.0);
          uVar31 = -(uint)(((fVar143 * fVar63 + fVar70 * fVar62) + fVar39 * fVar77) +
                           fVar129 * fVar78 < 0.0);
          uVar32 = -(uint)(((fVar145 * fVar88 + fVar86 * fVar80) + fVar41 * fVar90) +
                           fVar133 * fVar91 < 0.0);
          fVar47 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar3);
          fVar57 = gen_bits2f(~uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar30 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar4);
          fVar71 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar5);
          fVar87 = gen_bits2f(~uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar32 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar6);
          pfVar27[-0x24] = fVar3 * fVar46 + fVar47 * pfVar25[-0xc];
          pfVar27[-0x23] = fVar3 * fVar138 + fVar47 * fVar7;
          pfVar27[-0x22] = fVar3 * fVar34 + fVar47 * fVar8;
          pfVar27[-0x21] = fVar3 * fVar115 + fVar47 * fVar9;
          pfVar27[-0x18] = fVar4 * fVar56 + fVar57 * fVar59;
          pfVar27[-0x17] = fVar4 * fVar141 + fVar57 * fVar73;
          pfVar27[-0x16] = fVar4 * fVar37 + fVar57 * fVar89;
          pfVar27[-0x15] = fVar4 * fVar124 + fVar57 * fVar61;
          pfVar28 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pauVar26)));
          *pfVar28 = fVar5 * fVar70 + fVar71 * fVar62;
          pfVar28[1] = fVar5 * fVar143 + fVar71 * fVar63;
          pfVar28[2] = fVar5 * fVar39 + fVar71 * fVar77;
          pfVar28[3] = fVar5 * fVar129 + fVar71 * fVar78;
          *pfVar27 = fVar6 * fVar86 + fVar87 * fVar80;
          pfVar27[1] = fVar6 * fVar145 + fVar87 * fVar88;
          pfVar27[2] = fVar6 * fVar41 + fVar87 * fVar90;
          pfVar27[3] = fVar6 * fVar133 + fVar87 * fVar91;
          fVar7 = pfVar25[-7];
          fVar8 = pfVar25[-6];
          fVar9 = pfVar25[-5];
          fVar59 = pfVar25[4];
          fVar73 = pfVar25[5];
          fVar89 = pfVar25[6];
          fVar61 = pfVar25[7];
          fVar62 = pfVar25[0x10];
          fVar63 = pfVar25[0x11];
          fVar77 = pfVar25[0x12];
          fVar78 = pfVar25[0x13];
          fVar80 = pfVar25[0x1c];
          fVar88 = pfVar25[0x1d];
          fVar90 = pfVar25[0x1e];
          fVar91 = pfVar25[0x1f];
          fVar47 = *(float *)&REFG(undefined, 0x1138af0) - fVar3;
          fVar57 = *(float *)&REFG(undefined, 0x1138af4) - fVar4;
          fVar71 = *(float *)&REFG(undefined, 0x1138af8) - fVar5;
          fVar87 = *(float *)&REFG(undefined, 0x1138afc) - fVar6;
          pfVar27[-0x20] = (fVar10 * fVar14) * fVar3 + fVar47 * pfVar25[-8];
          pfVar27[-0x1f] = (fVar11 * fVar15) * fVar3 + fVar47 * fVar7;
          pfVar27[-0x1e] = (fVar12 * fVar16) * fVar3 + fVar47 * fVar8;
          pfVar27[-0x1d] = (fVar13 * fVar17) * fVar3 + fVar47 * fVar9;
          pfVar27[-0x14] = (fVar49 * fVar43) * fVar4 + fVar57 * fVar59;
          pfVar27[-0x13] = (fVar50 * fVar44) * fVar4 + fVar57 * fVar73;
          pfVar27[-0x12] = (fVar81 * fVar74) * fVar4 + fVar57 * fVar89;
          pfVar27[-0x11] = (fVar42 * fVar52) * fVar4 + fVar57 * fVar61;
          pfVar27[-8] = (fVar53 * fVar68) * fVar5 + fVar71 * fVar62;
          pfVar27[-7] = (fVar54 * fVar82) * fVar5 + fVar71 * fVar63;
          pfVar27[-6] = (fVar66 * fVar83) * fVar5 + fVar71 * fVar77;
          pfVar27[-5] = (fVar67 * fVar84) * fVar5 + fVar71 * fVar78;
          pfVar27[4] = (fVar60 * fVar76) * fVar6 + fVar87 * fVar80;
          pfVar27[5] = (fVar64 * fVar48) * fVar6 + fVar87 * fVar88;
          pfVar27[6] = (fVar65 * fVar58) * fVar6 + fVar87 * fVar90;
          pfVar27[7] = (fVar75 * fVar72) * fVar6 + fVar87 * fVar91;
          pauVar26 = pauVar26 + 0xc;
          pfVar25 = pfVar25 + 0x30;
          pfVar27 = pfVar27 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  else if (param_7 == 1) {
    if (param_6 == -1) {
      fVar11 = *param_4;
      fVar12 = param_4[1];
      fVar13 = param_4[2];
      fVar14 = param_4[3];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar25 = (float *)(param_1 + 0xa0);
        pfVar27 = (float *)(param_3 + 0x70);
        pauVar26 = (gen_v16 *)(param_2 + 0x50);
        do {
          fVar15 = *(float *)pauVar26[-4];
          fVar16 = *(float *)(pauVar26[-4] + 4);
          fVar17 = *(float *)(pauVar26[-4] + 8);
          fVar49 = *(float *)(pauVar26[-4] + 0xc);
          fVar59 = *(float *)pauVar26[-1];
          fVar73 = *(float *)(pauVar26[-1] + 4);
          fVar89 = *(float *)(pauVar26[-1] + 8);
          fVar50 = *(float *)(pauVar26[-1] + 0xc);
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar27)));
          fVar61 = *pfVar28;
          fVar62 = pfVar28[1];
          fVar63 = pfVar28[2];
          fVar77 = pfVar28[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar25)));
          fVar78 = *pfVar28;
          fVar80 = pfVar28[1];
          fVar88 = pfVar28[2];
          fVar90 = pfVar28[3];
          fVar91 = pfVar27[-0x18];
          fVar47 = pfVar27[-0x17];
          fVar57 = pfVar27[-0x16];
          fVar81 = *pfVar27;
          fVar42 = pfVar27[1];
          fVar43 = pfVar27[2];
          fVar44 = pfVar27[0xc];
          fVar74 = pfVar27[0xd];
          fVar52 = pfVar27[0xe];
          fVar53 = pfVar27[-0xc];
          fVar54 = pfVar27[-0xb];
          fVar66 = pfVar27[-10];
          fVar67 = gen_bits2f((uint)gen_fl2bits(pfVar27[-0x15]) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar68 = gen_bits2f((uint)gen_fl2bits(pfVar27[-9]) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar83 = gen_bits2f((uint)gen_fl2bits(pfVar27[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          fVar60 = gen_bits2f((uint)gen_fl2bits(pfVar27[0xf]) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          fVar79 = ((fVar67 * fVar49 - fVar91 * fVar15) - fVar47 * fVar16) - fVar57 * fVar17;
          fVar128 = ((fVar68 * fVar50 - fVar53 * fVar59) - fVar54 * fVar73) - fVar66 * fVar89;
          fVar93 = ((fVar83 * fVar77 - fVar81 * fVar61) - fVar42 * fVar62) - fVar43 * fVar63;
          fVar137 = ((fVar60 * fVar90 - fVar44 * fVar78) - fVar74 * fVar80) - fVar52 * fVar88;
          fVar75 = ((fVar57 * fVar16 - fVar47 * fVar17) + fVar91 * fVar49) + fVar67 * fVar15;
          fVar58 = ((fVar66 * fVar73 - fVar54 * fVar89) + fVar53 * fVar50) + fVar68 * fVar59;
          fVar87 = ((fVar43 * fVar62 - fVar42 * fVar63) + fVar81 * fVar77) + fVar83 * fVar61;
          fVar101 = ((fVar52 * fVar80 - fVar74 * fVar88) + fVar44 * fVar90) + fVar60 * fVar78;
          fVar140 = ((fVar91 * fVar17 - fVar57 * fVar15) + fVar47 * fVar49) + fVar67 * fVar16;
          fVar33 = ((fVar53 * fVar89 - fVar66 * fVar59) + fVar54 * fVar50) + fVar68 * fVar73;
          fVar34 = ((fVar81 * fVar63 - fVar43 * fVar61) + fVar42 * fVar77) + fVar83 * fVar62;
          fVar36 = ((fVar44 * fVar88 - fVar52 * fVar78) + fVar74 * fVar90) + fVar60 * fVar80;
          fVar67 = ((fVar47 * fVar15 - fVar91 * fVar16) + fVar57 * fVar49) + fVar67 * fVar17;
          fVar82 = ((fVar54 * fVar59 - fVar53 * fVar73) + fVar66 * fVar50) + fVar68 * fVar89;
          fVar84 = ((fVar42 * fVar61 - fVar81 * fVar62) + fVar43 * fVar77) + fVar83 * fVar63;
          fVar64 = ((fVar74 * fVar78 - fVar44 * fVar80) + fVar52 * fVar90) + fVar60 * fVar88;
          fVar61 = pfVar27[8];
          fVar62 = pfVar27[9];
          fVar63 = pfVar27[10];
          fVar43 = pfVar27[0xb];
          memcpy(&(auVar119), &(*(gen_v16 *)(pfVar27 + -0x1c)), sizeof(*(gen_v16 *)(pfVar27 + -0x1c)) < sizeof(auVar119) ? sizeof(*(gen_v16 *)(pfVar27 + -0x1c)) : sizeof(auVar119));
          fVar77 = (*(float *)((char *)&auVar119 + 0));
          fVar90 = (*(float *)((char *)&auVar119 + 4));
          fVar15 = pfVar27[-0x10];
          fVar16 = pfVar27[-0xf];
          fVar17 = pfVar27[-0xe];
          fVar49 = pfVar27[-0xd];
          fVar59 = pfVar27[-4];
          fVar73 = pfVar27[-3];
          fVar89 = pfVar27[-2];
          fVar50 = pfVar27[-1];
          local_200 = (*(float *)((char *)&auVar119 + 8));
          fStack_1fc = (*(float *)((char *)&auVar119 + 12));
          fVar78 = fVar75 * fVar75 + fVar18;
          fVar91 = fVar58 * fVar58 + fVar19;
          fVar81 = fVar87 * fVar87 + fVar20;
          fVar74 = fVar101 * fVar101 + fVar21;
          fVar80 = fVar140 * fVar140 + fVar18;
          fVar47 = fVar33 * fVar33 + fVar19;
          fVar42 = fVar34 * fVar34 + fVar20;
          fVar52 = fVar36 * fVar36 + fVar21;
          fVar88 = fVar67 * fVar67 + fVar18;
          fVar57 = fVar82 * fVar82 + fVar19;
          fVar44 = fVar84 * fVar84 + fVar20;
          fVar53 = fVar64 * fVar64 + fVar21;
          fVar76 = ((local_200 * fVar140 - fVar90 * fVar67) * fVar79 +
                   (local_200 * fVar67 + fVar90 * fVar140) * fVar75) - (fVar88 + fVar80) * fVar77;
          fVar72 = ((fVar17 * fVar33 - fVar16 * fVar82) * fVar128 +
                   (fVar17 * fVar82 + fVar16 * fVar33) * fVar58) - (fVar57 + fVar47) * fVar15;
          fVar92 = ((fVar89 * fVar34 - fVar73 * fVar84) * fVar93 +
                   (fVar89 * fVar84 + fVar73 * fVar34) * fVar87) - (fVar44 + fVar42) * fVar59;
          fVar103 = ((fVar63 * fVar36 - fVar62 * fVar64) * fVar137 +
                    (fVar63 * fVar64 + fVar62 * fVar36) * fVar101) - (fVar53 + fVar52) * fVar61;
          fVar117 = ((fVar77 * fVar67 - local_200 * fVar75) * fVar79 +
                    (local_200 * fVar67 + fVar77 * fVar75) * fVar140) - (fVar88 + fVar78) * fVar90;
          fVar126 = ((fVar15 * fVar82 - fVar17 * fVar58) * fVar128 +
                    (fVar17 * fVar82 + fVar15 * fVar58) * fVar33) - (fVar57 + fVar91) * fVar16;
          fVar131 = ((fVar59 * fVar84 - fVar89 * fVar87) * fVar93 +
                    (fVar89 * fVar84 + fVar59 * fVar87) * fVar34) - (fVar44 + fVar81) * fVar73;
          fVar135 = ((fVar61 * fVar64 - fVar63 * fVar101) * fVar137 +
                    (fVar63 * fVar64 + fVar61 * fVar101) * fVar36) - (fVar53 + fVar74) * fVar62;
          fVar68 = ((fVar90 * fVar75 - fVar77 * fVar140) * fVar79 +
                   (fVar90 * fVar140 + fVar77 * fVar75) * fVar67) - (fVar80 + fVar78) * local_200;
          fVar83 = ((fVar16 * fVar58 - fVar15 * fVar33) * fVar128 +
                   (fVar16 * fVar33 + fVar15 * fVar58) * fVar82) - (fVar47 + fVar91) * fVar17;
          fVar60 = ((fVar73 * fVar87 - fVar59 * fVar34) * fVar93 +
                   (fVar73 * fVar34 + fVar59 * fVar87) * fVar84) - (fVar42 + fVar81) * fVar89;
          fVar65 = ((fVar62 * fVar101 - fVar61 * fVar36) * fVar137 +
                   (fVar62 * fVar36 + fVar61 * fVar101) * fVar64) - (fVar52 + fVar74) * fVar63;
          fVar15 = *(float *)(pauVar26[-5] + 4);
          fVar16 = *(float *)(pauVar26[-5] + 8);
          fVar17 = *(float *)(pauVar26[-5] + 0xc);
          fVar59 = *(float *)pauVar26[-2];
          fVar73 = *(float *)(pauVar26[-2] + 4);
          fVar89 = *(float *)(pauVar26[-2] + 8);
          fVar61 = *(float *)(pauVar26[-2] + 0xc);
          fVar62 = *(float *)pauVar26[1];
          fVar63 = *(float *)(pauVar26[1] + 4);
          fVar77 = *(float *)(pauVar26[1] + 8);
          fVar78 = *(float *)(pauVar26[1] + 0xc);
          fVar80 = *(float *)pauVar26[4];
          fVar88 = *(float *)(pauVar26[4] + 4);
          fVar90 = *(float *)(pauVar26[4] + 8);
          fVar91 = *(float *)(pauVar26[4] + 0xc);
          gen_divps(&(auVar35), &(pauVar26[-3]), (pfVar27 + -0x14));
          gen_divps(&(auVar119), &(*pauVar26), (pfVar27 + -8));
          gen_divps(&(auVar122), &(pauVar26[3]), (pfVar27 + 4));
          local_2d0 = (*(float *)((char *)&auVar119 + 0));
          fStack_2cc = (*(float *)((char *)&auVar119 + 4));
          fStack_2c8 = (*(float *)((char *)&auVar119 + 8));
          fStack_2c4 = (*(float *)((char *)&auVar119 + 12));
          local_340 = (*(float *)((char *)&auVar122 + 0));
          fStack_33c = (*(float *)((char *)&auVar122 + 4));
          gen_divps(&(auVar123), &(pauVar26[6]), (pfVar27 + 0x10));
          fVar44 = *(float *)(pauVar26[1] + 8);
          fVar74 = *(float *)(pauVar26[1] + 0xc);
          memcpy(&(auVar119), &(pauVar26[-5]), sizeof(pauVar26[-5]) < sizeof(auVar119) ? sizeof(pauVar26[-5]) : sizeof(auVar119));
          fVar47 = *(float *)pauVar26[-2];
          fVar57 = *(float *)(pauVar26[-2] + 4);
          fVar81 = *(float *)(pauVar26[-2] + 8);
          fVar42 = *(float *)(pauVar26[-2] + 0xc);
          fVar52 = *(float *)pauVar26[4];
          fVar53 = *(float *)(pauVar26[4] + 4);
          fVar54 = *(float *)(pauVar26[4] + 8);
          fVar66 = *(float *)(pauVar26[4] + 0xc);
          local_1b0 = gen_bits2f((uint)*(undefined8 *)pauVar26[1]);
          fStack_1ac = gen_bits2f((uint)((ulonglong)*(undefined8 *)pauVar26[1] >> 0x20));
          local_310 = (*(float *)((char *)&auVar119 + 8));
          fStack_30c = (*(float *)((char *)&auVar119 + 12));
          fVar48 = *(float *)&REFG(undefined, 0x1138af0) - fVar11;
          fVar71 = *(float *)&REFG(undefined, 0x1138af4) - fVar12;
          fVar95 = *(float *)&REFG(undefined, 0x1138af8) - fVar13;
          fVar105 = *(float *)&REFG(undefined, 0x1138afc) - fVar14;
          pfVar25[-0x28] =
               (*(float *)pauVar26[-5] - (fVar76 + fVar76)) * fVar11 + fVar48 * (*(float *)((char *)&auVar119 + 0));
          pfVar25[-0x27] = (fVar15 - (fVar117 + fVar117)) * fVar11 + fVar48 * (*(float *)((char *)&auVar119 + 4));
          pfVar25[-0x26] = (fVar16 - (fVar68 + fVar68)) * fVar11 + fVar48 * local_310;
          pfVar25[-0x25] = (fVar17 - fStack_1fc) * fVar11 + fVar48 * fStack_30c;
          pfVar25[-0x1c] = (fVar59 - (fVar72 + fVar72)) * fVar12 + fVar71 * fVar47;
          pfVar25[-0x1b] = (fVar73 - (fVar126 + fVar126)) * fVar12 + fVar71 * fVar57;
          pfVar25[-0x1a] = (fVar89 - (fVar83 + fVar83)) * fVar12 + fVar71 * fVar81;
          pfVar25[-0x19] = (fVar61 - fVar49) * fVar12 + fVar71 * fVar42;
          pfVar25[-0x10] = (fVar62 - (fVar92 + fVar92)) * fVar13 + fVar95 * local_1b0;
          pfVar25[-0xf] = (fVar63 - (fVar131 + fVar131)) * fVar13 + fVar95 * fStack_1ac;
          pfVar25[-0xe] = (fVar77 - (fVar60 + fVar60)) * fVar13 + fVar95 * fVar44;
          pfVar25[-0xd] = (fVar78 - fVar50) * fVar13 + fVar95 * fVar74;
          pfVar25[-4] = (fVar80 - (fVar103 + fVar103)) * fVar14 + fVar105 * fVar52;
          pfVar25[-3] = (fVar88 - (fVar135 + fVar135)) * fVar14 + fVar105 * fVar53;
          pfVar25[-2] = (fVar90 - (fVar65 + fVar65)) * fVar14 + fVar105 * fVar54;
          pfVar25[-1] = (fVar91 - fVar43) * fVar14 + fVar105 * fVar66;
          fVar15 = *(float *)(pauVar26[-4] + 4);
          fVar16 = *(float *)(pauVar26[-4] + 8);
          fVar17 = *(float *)(pauVar26[-4] + 0xc);
          fVar49 = *(float *)pauVar26[-1];
          fVar59 = *(float *)(pauVar26[-1] + 4);
          fVar73 = *(float *)(pauVar26[-1] + 8);
          fVar89 = *(float *)(pauVar26[-1] + 0xc);
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar27)));
          fVar50 = *pfVar28;
          fVar61 = pfVar28[1];
          fVar62 = pfVar28[2];
          fVar63 = pfVar28[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar25)));
          fVar77 = *pfVar28;
          fVar78 = pfVar28[1];
          fVar80 = pfVar28[2];
          fVar88 = pfVar28[3];
          fVar91 = ((fVar140 * fVar15 + fVar75 * *(float *)pauVar26[-4]) + fVar67 * fVar16) +
                   fVar79 * fVar17;
          fVar57 = ((fVar33 * fVar59 + fVar58 * fVar49) + fVar82 * fVar73) + fVar128 * fVar89;
          fVar42 = ((fVar34 * fVar61 + fVar87 * fVar50) + fVar84 * fVar62) + fVar93 * fVar63;
          fVar44 = ((fVar36 * fVar78 + fVar101 * fVar77) + fVar64 * fVar80) + fVar137 * fVar88;
          uVar29 = -(uint)(fVar91 < 0.0);
          uVar30 = -(uint)(fVar57 < 0.0);
          uVar31 = -(uint)(fVar42 < 0.0);
          uVar32 = -(uint)(fVar44 < 0.0);
          fVar90 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar47 = gen_bits2f(~uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar30 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar81 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar43 = gen_bits2f(~uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar32 & *(uint *)&REFG(undefined, 0x1136f6c));
          (*(float *)((char *)&auVar121 + 0)) = fVar90 * fVar79;
          (*(float *)((char *)&auVar121 + 4)) = fVar47 * fVar128;
          (*(float *)((char *)&auVar121 + 8)) = fVar81 * fVar93;
          (*(float *)((char *)&auVar121 + 12)) = fVar43 * fVar137;
          fVar91 = fVar90 * fVar91;
          fVar57 = fVar47 * fVar57;
          fVar42 = fVar81 * fVar42;
          fVar44 = fVar43 * fVar44;
          (*(float *)((char *)&auVar120 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar91 + *(float *)&REFG(undefined, 0x1136f30)) * fVar91 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar91 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar120 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar57 + *(float *)&REFG(undefined, 0x1136f34)) * fVar57 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar57 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar120 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar42 + *(float *)&REFG(undefined, 0x1136f38)) * fVar42 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar42 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar120 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar44 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar44 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar44 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar112 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar91;
          (*(float *)((char *)&auVar112 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar57;
          (*(float *)((char *)&auVar112 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar42;
          (*(float *)((char *)&auVar112 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar44;
          gen_rsqrtps(&(auVar119), &(auVar121), &(auVar112));
          fVar74 = (*(float *)((char *)&auVar119 + 0));
          fVar52 = (*(float *)((char *)&auVar119 + 4));
          fVar53 = (*(float *)((char *)&auVar119 + 8));
          fVar54 = (*(float *)((char *)&auVar119 + 12));
          (*(float *)((char *)&auVar113 + 0)) = (fVar3 - (fVar74 * (*(float *)((char *)&auVar112 + 0))) * fVar74) * (fVar7 * fVar74);
          (*(float *)((char *)&auVar113 + 4)) = (fVar4 - (fVar52 * (*(float *)((char *)&auVar112 + 4))) * fVar52) * (fVar8 * fVar52);
          (*(float *)((char *)&auVar113 + 8)) = (fVar5 - (fVar53 * (*(float *)((char *)&auVar112 + 8))) * fVar53) * (fVar9 * fVar53);
          (*(float *)((char *)&auVar113 + 12)) = (fVar6 - (fVar54 * (*(float *)((char *)&auVar112 + 12))) * fVar54) * (fVar10 * fVar54);
          gen_divps(&(auVar119), &(auVar120), &(auVar113));
          fVar74 = (*(float *)((char *)&auVar119 + 0));
          fVar52 = (*(float *)((char *)&auVar119 + 12));
          fVar53 = (*(float *)((char *)&auVar119 + 4));
          fVar54 = (*(float *)((char *)&auVar119 + 8));
          fVar66 = fVar74 * fVar11;
          fVar68 = fVar53 * fVar12;
          fVar83 = fVar54 * fVar13;
          fVar60 = fVar52 * fVar14;
          fVar65 = (*(float *)&REFG(undefined, 0x1138af0) - fVar11) * fVar74;
          fVar76 = (*(float *)&REFG(undefined, 0x1138af4) - fVar12) * fVar53;
          fVar48 = (*(float *)&REFG(undefined, 0x1138af8) - fVar13) * fVar54;
          fVar72 = (*(float *)&REFG(undefined, 0x1138afc) - fVar14) * fVar52;
          (*(float *)((char *)&auVar99 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar66 * fVar66) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar66 * fVar66) + *(float *)&REFG(undefined, 0x1138af0)) * fVar66;
          (*(float *)((char *)&auVar99 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar68 * fVar68) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar68 * fVar68) + *(float *)&REFG(undefined, 0x1138af4)) * fVar68;
          (*(float *)((char *)&auVar99 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar83 * fVar83) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar83 * fVar83) + *(float *)&REFG(undefined, 0x1138af8)) * fVar83;
          (*(float *)((char *)&auVar99 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar60 * fVar60) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar60 * fVar60) + *(float *)&REFG(undefined, 0x1138afc)) * fVar60;
          (*(undefined4 *)((char *)&auVar119 + 4)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef4) * (fVar53 * fVar53) + *(float *)&REFG(undefined, 0x1136ee4))
                            * (fVar53 * fVar53) + *(float *)&REFG(undefined, 0x1138af4)) * fVar53);
          (*(undefined4 *)((char *)&auVar119 + 0)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef0) * (fVar74 * fVar74) + *(float *)&REFG(undefined, 0x1136ee0))
                            * (fVar74 * fVar74) + *(float *)&REFG(undefined, 0x1138af0)) * fVar74);
          (*(undefined4 *)((char *)&auVar119 + 8)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef8) * (fVar54 * fVar54) + *(float *)&REFG(undefined, 0x1136ee8))
                            * (fVar54 * fVar54) + *(float *)&REFG(undefined, 0x1138af8)) * fVar54);
          (*(undefined4 *)((char *)&auVar119 + 12)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136efc) * (fVar52 * fVar52) + *(float *)&REFG(undefined, 0x1136eec))
                            * (fVar52 * fVar52) + *(float *)&REFG(undefined, 0x1138afc)) * fVar52);
          gen_divps(&(auVar120), &(auVar99), &(auVar119));
          (*(float *)((char *)&auVar114 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar65 * fVar65) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar65 * fVar65) + *(float *)&REFG(undefined, 0x1138af0)) * fVar65;
          (*(float *)((char *)&auVar114 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar76 * fVar76) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar76 * fVar76) + *(float *)&REFG(undefined, 0x1138af4)) * fVar76;
          (*(float *)((char *)&auVar114 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar48 * fVar48) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar48 * fVar48) + *(float *)&REFG(undefined, 0x1138af8)) * fVar48;
          (*(float *)((char *)&auVar114 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar72 * fVar72) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar72 * fVar72) + *(float *)&REFG(undefined, 0x1138afc)) * fVar72;
          uVar29 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar91);
          uVar30 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar57);
          uVar31 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar42);
          uVar32 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar44);
          gen_divps(&(auVar119), &(auVar114), &(auVar119));
          fVar91 = gen_bits2f(uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              ~uVar29 & (*(undefined4 *)((char *)&auVar120 + 0)));
          fVar57 = gen_bits2f(uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              ~uVar30 & (*(undefined4 *)((char *)&auVar120 + 4)));
          fVar42 = gen_bits2f(uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              ~uVar31 & (*(undefined4 *)((char *)&auVar120 + 8)));
          fVar44 = gen_bits2f(uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              ~uVar32 & (*(undefined4 *)((char *)&auVar120 + 12)));
          fVar74 = gen_bits2f(uVar29 & (uint)REFG(undefined8, 0x1138ae0) | ~uVar29 & (*(undefined4 *)((char *)&auVar119 + 0)));
          fVar52 = gen_bits2f(uVar30 & (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae0) + 4)) | ~uVar30 & (*(undefined4 *)((char *)&auVar119 + 4)));
          fVar53 = gen_bits2f(uVar31 & (uint)REFG(undefined8, 0x1138ae8) | ~uVar31 & (*(undefined4 *)((char *)&auVar119 + 8)));
          fVar54 = gen_bits2f(uVar32 & (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae8) + 4)) | ~uVar32 & (*(undefined4 *)((char *)&auVar119 + 12)));
          pfVar25[-0x24] = fVar74 * *(float *)pauVar26[-4] + fVar91 * (fVar90 * fVar75);
          pfVar25[-0x23] = fVar74 * fVar15 + fVar91 * (fVar90 * fVar140);
          pfVar25[-0x22] = fVar91 * (fVar90 * fVar67) + fVar74 * fVar16;
          pfVar25[-0x21] = fVar91 * (*(float *)((char *)&auVar121 + 0)) + fVar74 * fVar17;
          pfVar25[-0x18] = fVar52 * fVar49 + fVar57 * (fVar47 * fVar58);
          pfVar25[-0x17] = fVar52 * fVar59 + fVar57 * (fVar47 * fVar33);
          pfVar25[-0x16] = fVar57 * (fVar47 * fVar82) + fVar52 * fVar73;
          pfVar25[-0x15] = fVar57 * (*(float *)((char *)&auVar121 + 4)) + fVar52 * fVar89;
          pfVar28 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pfVar27)));
          *pfVar28 = fVar53 * fVar50 + fVar42 * (fVar81 * fVar87);
          pfVar28[1] = fVar53 * fVar61 + fVar42 * (fVar81 * fVar34);
          pfVar28[2] = fVar42 * (fVar81 * fVar84) + fVar53 * fVar62;
          pfVar28[3] = fVar42 * (*(float *)((char *)&auVar121 + 8)) + fVar53 * fVar63;
          *pfVar25 = fVar54 * fVar77 + fVar44 * (fVar43 * fVar101);
          pfVar25[1] = fVar54 * fVar78 + fVar44 * (fVar43 * fVar36);
          pfVar25[2] = fVar44 * (fVar43 * fVar64) + fVar54 * fVar80;
          pfVar25[3] = fVar44 * (*(float *)((char *)&auVar121 + 12)) + fVar54 * fVar88;
          fVar15 = *(float *)(pauVar26[-3] + 4);
          fVar16 = *(float *)(pauVar26[-3] + 8);
          fVar17 = *(float *)(pauVar26[-3] + 0xc);
          fVar49 = *(float *)*pauVar26;
          fVar59 = *(float *)(*pauVar26 + 4);
          fVar73 = *(float *)(*pauVar26 + 8);
          fVar89 = *(float *)(*pauVar26 + 0xc);
          fVar50 = *(float *)pauVar26[3];
          fVar61 = *(float *)(pauVar26[3] + 4);
          fVar62 = *(float *)(pauVar26[3] + 8);
          fVar63 = *(float *)(pauVar26[3] + 0xc);
          fVar77 = *(float *)pauVar26[6];
          fVar78 = *(float *)(pauVar26[6] + 4);
          fVar80 = *(float *)(pauVar26[6] + 8);
          fVar88 = *(float *)(pauVar26[6] + 0xc);
          local_840 = (*(float *)((char *)&auVar35 + 0));
          fStack_83c = (*(float *)((char *)&auVar35 + 4));
          fStack_838 = (*(float *)((char *)&auVar35 + 8));
          fStack_834 = (*(float *)((char *)&auVar35 + 12));
          local_7b0 = (*(float *)((char *)&auVar123 + 0));
          fStack_7ac = (*(float *)((char *)&auVar123 + 4));
          fStack_7a8 = (*(float *)((char *)&auVar123 + 8));
          fStack_7a4 = (*(float *)((char *)&auVar123 + 12));
          fVar90 = *(float *)&REFG(undefined, 0x1138af0) - fVar11;
          fVar91 = *(float *)&REFG(undefined, 0x1138af4) - fVar12;
          fVar47 = *(float *)&REFG(undefined, 0x1138af8) - fVar13;
          fVar57 = *(float *)&REFG(undefined, 0x1138afc) - fVar14;
          local_1b0 = (*(float *)((char *)&auVar122 + 8));
          fStack_1ac = (*(float *)((char *)&auVar122 + 12));
          pfVar25[-0x20] = local_840 * fVar11 + fVar90 * *(float *)pauVar26[-3];
          pfVar25[-0x1f] = fStack_83c * fVar11 + fVar90 * fVar15;
          pfVar25[-0x1e] = fStack_838 * fVar11 + fVar90 * fVar16;
          pfVar25[-0x1d] = fStack_834 * fVar11 + fVar90 * fVar17;
          pfVar25[-0x14] = local_2d0 * fVar12 + fVar91 * fVar49;
          pfVar25[-0x13] = fStack_2cc * fVar12 + fVar91 * fVar59;
          pfVar25[-0x12] = fStack_2c8 * fVar12 + fVar91 * fVar73;
          pfVar25[-0x11] = fStack_2c4 * fVar12 + fVar91 * fVar89;
          pfVar25[-8] = local_340 * fVar13 + fVar47 * fVar50;
          pfVar25[-7] = fStack_33c * fVar13 + fVar47 * fVar61;
          pfVar25[-6] = local_1b0 * fVar13 + fVar47 * fVar62;
          pfVar25[-5] = fStack_1ac * fVar13 + fVar47 * fVar63;
          pfVar25[4] = local_7b0 * fVar14 + fVar57 * fVar77;
          pfVar25[5] = fStack_7ac * fVar14 + fVar57 * fVar78;
          pfVar25[6] = fStack_7a8 * fVar14 + fVar57 * fVar80;
          pfVar25[7] = fStack_7a4 * fVar14 + fVar57 * fVar88;
          pfVar27 = pfVar27 + 0x30;
          pauVar26 = pauVar26 + 0xc;
          pfVar25 = pfVar25 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else if (param_6 == 0) {
      fVar18 = *param_4;
      fVar19 = param_4[1];
      fVar20 = param_4[2];
      fVar21 = param_4[3];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar27 = (float *)(param_1 + 0x70);
        pfVar25 = (float *)(param_3 + 0x50);
        pfVar28 = (float *)(param_2 + 0xa0);
        do {
          fVar11 = pfVar25[-0x13];
          fVar12 = pfVar25[-0x12];
          fVar13 = pfVar25[-0x11];
          fVar88 = pfVar25[-0x10];
          fVar90 = pfVar25[-0xf];
          fVar91 = pfVar25[-0xe];
          fVar47 = pfVar25[-0xd];
          fVar57 = pfVar25[-0xc];
          fVar81 = pfVar25[-0xb];
          fVar42 = pfVar25[-10];
          fVar43 = pfVar25[-9];
          fVar44 = pfVar25[-8];
          fVar74 = pfVar25[-7];
          fVar52 = pfVar25[-6];
          fVar53 = pfVar25[-5];
          fVar54 = pfVar25[-4];
          fVar66 = pfVar25[-3];
          fVar67 = pfVar25[-2];
          fVar68 = pfVar25[-1];
          fVar82 = *pfVar25;
          fVar83 = pfVar25[1];
          fVar84 = pfVar25[2];
          fVar60 = pfVar25[3];
          memcpy(&(auVar119), &(*(gen_v16 *)(pfVar25 + 4)), sizeof(*(gen_v16 *)(pfVar25 + 4)) < sizeof(auVar119) ? sizeof(*(gen_v16 *)(pfVar25 + 4)) : sizeof(auVar119));
          memcpy(&(auVar23), &(*(gen_v12 *)(pfVar25 + 8)), sizeof(*(gen_v12 *)(pfVar25 + 8)) < sizeof(auVar23) ? sizeof(*(gen_v12 *)(pfVar25 + 8)) : sizeof(auVar23));
          memcpy(&(auVar35), &(*(gen_v16 *)(pfVar25 + 8)), sizeof(*(gen_v16 *)(pfVar25 + 8)) < sizeof(auVar35) ? sizeof(*(gen_v16 *)(pfVar25 + 8)) : sizeof(auVar35));
          memcpy(&(auVar24), &(*(gen_v12 *)(pfVar25 + 0xc)), sizeof(*(gen_v12 *)(pfVar25 + 0xc)) < sizeof(auVar24) ? sizeof(*(gen_v12 *)(pfVar25 + 0xc)) : sizeof(auVar24));
          memcpy(&(auVar120), &(*(gen_v16 *)(pfVar25 + 0xc)), sizeof(*(gen_v16 *)(pfVar25 + 0xc)) < sizeof(auVar120) ? sizeof(*(gen_v16 *)(pfVar25 + 0xc)) : sizeof(auVar120));
          fVar64 = pfVar25[0x10];
          fVar65 = pfVar25[0x11];
          fVar75 = pfVar25[0x12];
          fVar76 = pfVar25[0x13];
          fVar48 = pfVar25[0x14];
          fVar58 = pfVar25[0x15];
          fVar72 = pfVar25[0x16];
          fVar71 = pfVar25[0x17];
          fVar87 = pfVar25[0x18];
          fVar92 = pfVar25[0x19];
          fVar95 = pfVar25[0x1a];
          fVar101 = pfVar25[0x1b];
          fVar14 = pfVar28[-0x27];
          fVar15 = pfVar28[-0x26];
          fVar16 = pfVar28[-0x25];
          fVar17 = pfVar28[-0x1c];
          fVar49 = pfVar28[-0x1b];
          fVar59 = pfVar28[-0x1a];
          fVar73 = pfVar28[-0x19];
          fVar89 = pfVar28[-0x10];
          fVar50 = pfVar28[-0xf];
          fVar61 = pfVar28[-0xe];
          fVar62 = pfVar28[-0xd];
          fVar63 = pfVar28[-4];
          fVar77 = pfVar28[-3];
          fVar78 = pfVar28[-2];
          fVar80 = pfVar28[-1];
          fVar103 = *(float *)&REFG(undefined, 0x1138af0) - fVar18;
          fVar105 = *(float *)&REFG(undefined, 0x1138af4) - fVar19;
          fVar117 = *(float *)&REFG(undefined, 0x1138af8) - fVar20;
          fVar126 = *(float *)&REFG(undefined, 0x1138afc) - fVar21;
          local_290 = (*(float *)((char *)&auVar119 + 8));
          fStack_28c = (*(float *)((char *)&auVar119 + 12));
          pfVar27[-0x1c] = pfVar25[-0x14] * fVar18 + fVar103 * pfVar28[-0x28];
          pfVar27[-0x1b] = fVar11 * fVar18 + fVar103 * fVar14;
          pfVar27[-0x1a] = fVar12 * fVar18 + fVar103 * fVar15;
          pfVar27[-0x19] = fVar13 * fVar18 + fVar103 * fVar16;
          pfVar27[-0x10] = fVar44 * fVar19 + fVar105 * fVar17;
          pfVar27[-0xf] = fVar74 * fVar19 + fVar105 * fVar49;
          pfVar27[-0xe] = fVar52 * fVar19 + fVar105 * fVar59;
          pfVar27[-0xd] = fVar53 * fVar19 + fVar105 * fVar73;
          pfVar27[-4] = (*(float *)((char *)&auVar119 + 0)) * fVar20 + fVar117 * fVar89;
          pfVar27[-3] = (*(float *)((char *)&auVar119 + 4)) * fVar20 + fVar117 * fVar50;
          pfVar27[-2] = local_290 * fVar20 + fVar117 * fVar61;
          pfVar27[-1] = fStack_28c * fVar20 + fVar117 * fVar62;
          pfVar27[8] = fVar64 * fVar21 + fVar126 * fVar63;
          pfVar27[9] = fVar65 * fVar21 + fVar126 * fVar77;
          pfVar27[10] = fVar75 * fVar21 + fVar126 * fVar78;
          pfVar27[0xb] = fVar76 * fVar21 + fVar126 * fVar80;
          fVar11 = pfVar28[-0x23];
          fVar12 = pfVar28[-0x22];
          fVar13 = pfVar28[-0x21];
          fVar14 = pfVar28[-0x18];
          fVar15 = pfVar28[-0x17];
          fVar16 = pfVar28[-0x16];
          fVar17 = pfVar28[-0x15];
          pfVar2 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar27)));
          fVar49 = *pfVar2;
          fVar59 = pfVar2[1];
          fVar73 = pfVar2[2];
          fVar89 = pfVar2[3];
          fVar50 = *pfVar28;
          fVar61 = pfVar28[1];
          fVar62 = pfVar28[2];
          fVar63 = pfVar28[3];
          fVar76 = (*(float *)((char *)&auVar23 + 0));
          fVar103 = (*(float *)((char *)&auVar23 + 4));
          local_290 = (*(float *)((char *)&auVar35 + 8));
          fStack_28c = (*(float *)((char *)&auVar35 + 12));
          fVar78 = ((fVar90 * fVar11 + fVar88 * pfVar28[-0x24]) + fVar91 * fVar12) + fVar47 * fVar13
          ;
          fVar44 = ((fVar66 * fVar15 + fVar54 * fVar14) + fVar67 * fVar16) + fVar68 * fVar17;
          fVar52 = ((fVar103 * fVar59 + fVar76 * fVar49) + local_290 * fVar73) + fStack_28c * fVar89
          ;
          fVar64 = ((fVar58 * fVar61 + fVar48 * fVar50) + fVar72 * fVar62) + fVar71 * fVar63;
          uVar29 = -(uint)(fVar78 < 0.0);
          uVar30 = -(uint)(fVar44 < 0.0);
          uVar31 = -(uint)(fVar52 < 0.0);
          uVar32 = -(uint)(fVar64 < 0.0);
          fVar77 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar80 = gen_bits2f(~uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar30 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar74 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar53 = gen_bits2f(~uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar32 & *(uint *)&REFG(undefined, 0x1136f6c));
          (*(float *)((char *)&auVar98 + 0)) = fVar77 * fVar47;
          (*(float *)((char *)&auVar98 + 4)) = fVar80 * fVar68;
          (*(float *)((char *)&auVar98 + 8)) = fVar74 * fStack_28c;
          (*(float *)((char *)&auVar98 + 12)) = fVar53 * fVar71;
          fVar78 = fVar77 * fVar78;
          fVar44 = fVar80 * fVar44;
          fVar52 = fVar74 * fVar52;
          fVar64 = fVar53 * fVar64;
          (*(float *)((char *)&auVar122 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar78 + *(float *)&REFG(undefined, 0x1136f30)) * fVar78 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar78 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar122 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar44 + *(float *)&REFG(undefined, 0x1136f34)) * fVar44 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar44 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar122 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar52 + *(float *)&REFG(undefined, 0x1136f38)) * fVar52 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar52 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar122 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar64 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar64 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar64 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar109 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar78;
          (*(float *)((char *)&auVar109 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar44;
          (*(float *)((char *)&auVar109 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar52;
          (*(float *)((char *)&auVar109 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar64;
          gen_rsqrtps(&(auVar119), &(auVar98), &(auVar109));
          fVar47 = (*(float *)((char *)&auVar119 + 0));
          fVar68 = (*(float *)((char *)&auVar119 + 4));
          fVar65 = (*(float *)((char *)&auVar119 + 8));
          fVar75 = (*(float *)((char *)&auVar119 + 12));
          (*(float *)((char *)&auVar110 + 0)) = (fVar3 - (fVar47 * (*(float *)((char *)&auVar109 + 0))) * fVar47) * (fVar7 * fVar47);
          (*(float *)((char *)&auVar110 + 4)) = (fVar4 - (fVar68 * (*(float *)((char *)&auVar109 + 4))) * fVar68) * (fVar8 * fVar68);
          (*(float *)((char *)&auVar110 + 8)) = (fVar5 - (fVar65 * (*(float *)((char *)&auVar109 + 8))) * fVar65) * (fVar9 * fVar65);
          (*(float *)((char *)&auVar110 + 12)) = (fVar6 - (fVar75 * (*(float *)((char *)&auVar109 + 12))) * fVar75) * (fVar10 * fVar75);
          gen_divps(&(auVar119), &(auVar122), &(auVar110));
          fVar47 = (*(float *)((char *)&auVar119 + 12));
          fVar68 = (*(float *)((char *)&auVar119 + 0));
          fVar65 = (*(float *)((char *)&auVar119 + 4));
          fVar75 = (*(float *)((char *)&auVar119 + 8));
          fVar71 = fVar18 * fVar68;
          fVar105 = fVar19 * fVar65;
          fVar117 = fVar20 * fVar75;
          fVar126 = fVar21 * fVar47;
          (*(float *)((char *)&auVar123 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1138af0)) * fVar71;
          (*(float *)((char *)&auVar123 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar105 * fVar105) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar105 * fVar105) + *(float *)&REFG(undefined, 0x1138af4)) * fVar105;
          (*(float *)((char *)&auVar123 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar117 * fVar117) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar117 * fVar117) + *(float *)&REFG(undefined, 0x1138af8)) * fVar117;
          (*(float *)((char *)&auVar123 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar126 * fVar126) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar126 * fVar126) + *(float *)&REFG(undefined, 0x1138afc)) * fVar126;
          fVar71 = (*(float *)&REFG(undefined, 0x1138af0) - fVar18) * fVar68;
          fVar105 = (*(float *)&REFG(undefined, 0x1138af4) - fVar19) * fVar65;
          fVar117 = (*(float *)&REFG(undefined, 0x1138af8) - fVar20) * fVar75;
          fVar126 = (*(float *)&REFG(undefined, 0x1138afc) - fVar21) * fVar47;
          (*(float *)((char *)&auVar111 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1138af0)) * fVar71;
          (*(float *)((char *)&auVar111 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar105 * fVar105) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar105 * fVar105) + *(float *)&REFG(undefined, 0x1138af4)) * fVar105;
          (*(float *)((char *)&auVar111 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar117 * fVar117) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar117 * fVar117) + *(float *)&REFG(undefined, 0x1138af8)) * fVar117;
          (*(float *)((char *)&auVar111 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar126 * fVar126) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar126 * fVar126) + *(float *)&REFG(undefined, 0x1138afc)) * fVar126;
          (*(undefined4 *)((char *)&auVar35 + 4)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef4) * (fVar65 * fVar65) + *(float *)&REFG(undefined, 0x1136ee4))
                            * (fVar65 * fVar65) + *(float *)&REFG(undefined, 0x1138af4)) * fVar65);
          (*(undefined4 *)((char *)&auVar35 + 0)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef0) * (fVar68 * fVar68) + *(float *)&REFG(undefined, 0x1136ee0))
                            * (fVar68 * fVar68) + *(float *)&REFG(undefined, 0x1138af0)) * fVar68);
          (*(undefined4 *)((char *)&auVar35 + 8)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef8) * (fVar75 * fVar75) + *(float *)&REFG(undefined, 0x1136ee8))
                            * (fVar75 * fVar75) + *(float *)&REFG(undefined, 0x1138af8)) * fVar75);
          (*(undefined4 *)((char *)&auVar35 + 12)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136efc) * (fVar47 * fVar47) + *(float *)&REFG(undefined, 0x1136eec))
                            * (fVar47 * fVar47) + *(float *)&REFG(undefined, 0x1138afc)) * fVar47);
          uVar29 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar78);
          uVar30 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar44);
          uVar31 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar52);
          uVar32 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar64);
          gen_divps(&(auVar121), &(auVar111), &(auVar35));
          gen_divps(&(auVar119), &(auVar123), &(auVar35));
          fVar68 = gen_bits2f(uVar29 & (uint)REFG(undefined8, 0x1138ae0) | ~uVar29 & (*(undefined4 *)((char *)&auVar121 + 0)));
          fVar64 = gen_bits2f(uVar30 & (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae0) + 4)) | ~uVar30 & (*(undefined4 *)((char *)&auVar121 + 4)));
          fVar65 = gen_bits2f(uVar31 & (uint)REFG(undefined8, 0x1138ae8) | ~uVar31 & (*(undefined4 *)((char *)&auVar121 + 8)));
          fVar75 = gen_bits2f(uVar32 & (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae8) + 4)) | ~uVar32 & (*(undefined4 *)((char *)&auVar121 + 12)));
          fVar78 = gen_bits2f(uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              ~uVar29 & (*(undefined4 *)((char *)&auVar119 + 0)));
          fVar47 = gen_bits2f(uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              ~uVar30 & (*(undefined4 *)((char *)&auVar119 + 4)));
          fVar44 = gen_bits2f(uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              ~uVar31 & (*(undefined4 *)((char *)&auVar119 + 8)));
          fVar52 = gen_bits2f(uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              ~uVar32 & (*(undefined4 *)((char *)&auVar119 + 12)));
          pfVar27[-0x18] = fVar78 * (fVar77 * fVar88) + fVar68 * pfVar28[-0x24];
          pfVar27[-0x17] = fVar78 * (fVar77 * fVar90) + fVar68 * fVar11;
          pfVar27[-0x16] = fVar78 * (fVar77 * fVar91) + fVar68 * fVar12;
          pfVar27[-0x15] = fVar78 * (*(float *)((char *)&auVar98 + 0)) + fVar68 * fVar13;
          pfVar27[-0xc] = fVar47 * (fVar80 * fVar54) + fVar64 * fVar14;
          pfVar27[-0xb] = fVar47 * (fVar80 * fVar66) + fVar64 * fVar15;
          pfVar27[-10] = fVar47 * (fVar80 * fVar67) + fVar64 * fVar16;
          pfVar27[-9] = fVar47 * (*(float *)((char *)&auVar98 + 4)) + fVar64 * fVar17;
          *pfVar27 = fVar44 * (fVar74 * fVar76) + fVar65 * fVar49;
          pfVar27[1] = fVar44 * (fVar74 * fVar103) + fVar65 * fVar59;
          pfVar27[2] = fVar44 * (fVar74 * local_290) + fVar65 * fVar73;
          pfVar27[3] = fVar44 * (*(float *)((char *)&auVar98 + 8)) + fVar65 * fVar89;
          pfVar27[0xc] = fVar52 * (fVar53 * fVar48) + fVar75 * fVar50;
          pfVar27[0xd] = fVar52 * (fVar53 * fVar58) + fVar75 * fVar61;
          pfVar27[0xe] = fVar52 * (fVar53 * fVar72) + fVar75 * fVar62;
          pfVar27[0xf] = fVar52 * (*(float *)((char *)&auVar98 + 12)) + fVar75 * fVar63;
          fVar11 = pfVar28[-0x1f];
          fVar12 = pfVar28[-0x1e];
          fVar13 = pfVar28[-0x1d];
          pfVar2 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar25)));
          fVar14 = *pfVar2;
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          fVar49 = pfVar28[-8];
          fVar59 = pfVar28[-7];
          fVar73 = pfVar28[-6];
          fVar89 = pfVar28[-5];
          fVar50 = pfVar28[4];
          fVar61 = pfVar28[5];
          fVar62 = pfVar28[6];
          fVar63 = pfVar28[7];
          fVar77 = *(float *)&REFG(undefined, 0x1138af0) - fVar18;
          fVar78 = *(float *)&REFG(undefined, 0x1138af4) - fVar19;
          fVar80 = *(float *)&REFG(undefined, 0x1138af8) - fVar20;
          fVar88 = *(float *)&REFG(undefined, 0x1138afc) - fVar21;
          local_290 = (*(float *)((char *)&auVar120 + 8));
          fStack_28c = (*(float *)((char *)&auVar120 + 12));
          pfVar27[-0x14] = fVar57 * fVar18 + fVar77 * pfVar28[-0x20];
          pfVar27[-0x13] = fVar81 * fVar18 + fVar77 * fVar11;
          pfVar27[-0x12] = fVar42 * fVar18 + fVar77 * fVar12;
          pfVar27[-0x11] = fVar43 * fVar18 + fVar77 * fVar13;
          pfVar2 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pfVar25)));
          *pfVar2 = fVar82 * fVar19 + fVar78 * fVar14;
          pfVar2[1] = fVar83 * fVar19 + fVar78 * fVar15;
          pfVar2[2] = fVar84 * fVar19 + fVar78 * fVar16;
          pfVar2[3] = fVar60 * fVar19 + fVar78 * fVar17;
          pfVar27[4] = (*(float *)((char *)&auVar24 + 0)) * fVar20 + fVar80 * fVar49;
          pfVar27[5] = (*(float *)((char *)&auVar24 + 4)) * fVar20 + fVar80 * fVar59;
          pfVar27[6] = local_290 * fVar20 + fVar80 * fVar73;
          pfVar27[7] = fStack_28c * fVar20 + fVar80 * fVar89;
          pfVar27[0x10] = fVar87 * fVar21 + fVar88 * fVar50;
          pfVar27[0x11] = fVar92 * fVar21 + fVar88 * fVar61;
          pfVar27[0x12] = fVar95 * fVar21 + fVar88 * fVar62;
          pfVar27[0x13] = fVar101 * fVar21 + fVar88 * fVar63;
          pfVar25 = pfVar25 + 0x30;
          pfVar28 = pfVar28 + 0x30;
          pfVar27 = pfVar27 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_6 == 1) {
      fVar11 = *param_4;
      fVar12 = param_4[1];
      fVar13 = param_4[2];
      fVar14 = param_4[3];
      local_14 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar27 = (float *)(param_1 + 0xa0);
        pauVar26 = (gen_v16 *)(param_3 + 0x70);
        pfVar25 = (float *)(param_2 + 0x40);
        do {
          fVar15 = *(float *)*(gen_v12 *)(pfVar25 + -0xc);
          fVar16 = pfVar25[-0xb];
          fVar17 = pfVar25[-10];
          memcpy(&(auVar23), &(*(gen_v12 *)(pfVar25 + -0xc)), sizeof(*(gen_v12 *)(pfVar25 + -0xc)) < sizeof(auVar23) ? sizeof(*(gen_v12 *)(pfVar25 + -0xc)) : sizeof(auVar23));
          fVar49 = pfVar25[-9];
          fVar59 = *pfVar25;
          fVar73 = pfVar25[1];
          fVar89 = pfVar25[2];
          fVar50 = pfVar25[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pauVar26)));
          fVar61 = *pfVar28;
          fVar62 = pfVar28[1];
          fVar63 = pfVar28[2];
          fVar77 = pfVar28[3];
          pauVar1 = ((gen_v12 *)GEN_TOP(((param_2 - param_1) + (int)pfVar27)));
          fVar78 = *(float *)*pauVar1;
          fVar80 = *(float *)(*pauVar1 + 4);
          fVar88 = *(float *)(*pauVar1 + 8);
          memcpy(&(auVar24), &(*pauVar1), sizeof(*pauVar1) < sizeof(auVar24) ? sizeof(*pauVar1) : sizeof(auVar24));
          fVar90 = *(float *)pauVar1[1];
          fVar91 = *(float *)pauVar26[-4];
          fVar47 = *(float *)(pauVar26[-4] + 4);
          fVar57 = *(float *)(pauVar26[-4] + 8);
          fVar81 = *(float *)(pauVar26[-4] + 0xc);
          memcpy(&(auVar119), &(pauVar26[-7]), sizeof(pauVar26[-7]) < sizeof(auVar119) ? sizeof(pauVar26[-7]) : sizeof(auVar119));
          fVar52 = *(float *)pauVar26[2];
          fVar53 = *(float *)(pauVar26[2] + 4);
          fVar54 = *(float *)(pauVar26[2] + 8);
          fVar41 = *(float *)(pauVar26[2] + 0xc);
          fVar42 = *(float *)pauVar26[-1];
          fVar43 = *(float *)(pauVar26[-1] + 4);
          fVar44 = *(float *)(pauVar26[-1] + 8);
          fVar74 = *(float *)(pauVar26[-1] + 0xc);
          fVar66 = (*(float *)((char *)&auVar119 + 0));
          fVar83 = (*(float *)((char *)&auVar119 + 4));
          local_180 = (*(float *)((char *)&auVar119 + 8));
          fStack_17c = (*(float *)((char *)&auVar119 + 12));
          fVar67 = fVar15 * fVar15 + fVar18;
          fVar84 = fVar59 * fVar59 + fVar19;
          fVar65 = fVar61 * fVar61 + fVar20;
          fVar48 = fVar78 * fVar78 + fVar21;
          fVar68 = fVar16 * fVar16 + fVar18;
          fVar60 = fVar73 * fVar73 + fVar19;
          fVar75 = fVar62 * fVar62 + fVar20;
          fVar58 = fVar80 * fVar80 + fVar21;
          fVar82 = fVar17 * fVar17 + fVar18;
          fVar64 = fVar89 * fVar89 + fVar19;
          fVar76 = fVar63 * fVar63 + fVar20;
          fVar72 = fVar88 * fVar88 + fVar21;
          fVar94 = ((local_180 * fVar16 - fVar83 * fVar17) * fVar49 +
                   (local_180 * fVar17 + fVar83 * fVar16) * fVar15) - (fVar82 + fVar68) * fVar66;
          fVar104 = ((fVar57 * fVar73 - fVar47 * fVar89) * fVar50 +
                    (fVar57 * fVar89 + fVar47 * fVar73) * fVar59) - (fVar64 + fVar60) * fVar91;
          fVar124 = ((fVar44 * fVar62 - fVar43 * fVar63) * fVar77 +
                    (fVar44 * fVar63 + fVar43 * fVar62) * fVar61) - (fVar76 + fVar75) * fVar42;
          fVar130 = ((fVar54 * fVar80 - fVar53 * fVar88) * fVar90 +
                    (fVar54 * fVar88 + fVar53 * fVar80) * fVar78) - (fVar72 + fVar58) * fVar52;
          fVar138 = ((fVar66 * fVar17 - local_180 * fVar15) * fVar49 +
                    (local_180 * fVar17 + fVar66 * fVar15) * fVar16) - (fVar82 + fVar67) * fVar83;
          fVar141 = ((fVar91 * fVar89 - fVar57 * fVar59) * fVar50 +
                    (fVar57 * fVar89 + fVar91 * fVar59) * fVar73) - (fVar64 + fVar84) * fVar47;
          fVar143 = ((fVar42 * fVar63 - fVar44 * fVar61) * fVar77 +
                    (fVar44 * fVar63 + fVar42 * fVar61) * fVar62) - (fVar76 + fVar65) * fVar43;
          fVar145 = ((fVar52 * fVar88 - fVar54 * fVar78) * fVar90 +
                    (fVar54 * fVar88 + fVar52 * fVar78) * fVar80) - (fVar72 + fVar48) * fVar53;
          fVar45 = ((fVar83 * fVar15 - fVar66 * fVar16) * fVar49 +
                   (fVar83 * fVar16 + fVar66 * fVar15) * fVar17) - (fVar68 + fVar67) * local_180;
          fVar55 = ((fVar47 * fVar59 - fVar91 * fVar73) * fVar50 +
                   (fVar47 * fVar73 + fVar91 * fVar59) * fVar89) - (fVar60 + fVar84) * fVar57;
          fVar69 = ((fVar43 * fVar61 - fVar42 * fVar62) * fVar77 +
                   (fVar43 * fVar62 + fVar42 * fVar61) * fVar63) - (fVar75 + fVar65) * fVar44;
          fVar85 = ((fVar53 * fVar78 - fVar52 * fVar80) * fVar90 +
                   (fVar53 * fVar80 + fVar52 * fVar78) * fVar88) - (fVar58 + fVar48) * fVar54;
          fVar15 = pfVar25[-0xf];
          fVar16 = pfVar25[-0xe];
          fVar17 = pfVar25[-0xd];
          fVar78 = pfVar25[-4];
          fVar80 = pfVar25[-3];
          fVar88 = pfVar25[-2];
          fVar91 = pfVar25[-1];
          fVar47 = pfVar25[8];
          fVar57 = pfVar25[9];
          fVar42 = pfVar25[10];
          fVar43 = pfVar25[0xb];
          fVar44 = pfVar25[0x14];
          fVar52 = pfVar25[0x15];
          fVar53 = pfVar25[0x16];
          fVar54 = pfVar25[0x17];
          local_150 = (*(float *)((char *)&auVar24 + 0));
          fStack_14c = (*(float *)((char *)&auVar24 + 4));
          fStack_148 = (*(float *)((char *)&auVar24 + 8));
          local_50 = (*(float *)((char *)&auVar23 + 0));
          fVar58 = local_50;
          fStack_4c = (*(float *)((char *)&auVar23 + 4));
          fVar72 = fStack_4c;
          fStack_48 = (*(float *)((char *)&auVar23 + 8));
          fVar66 = *(float *)pauVar26[-3];
          fVar67 = *(float *)(pauVar26[-3] + 4);
          fVar68 = *(float *)(pauVar26[-3] + 8);
          fVar82 = *(float *)(pauVar26[-3] + 0xc);
          memcpy(&(auVar119), &(*pauVar26), sizeof(*pauVar26) < sizeof(auVar119) ? sizeof(*pauVar26) : sizeof(auVar119));
          fVar65 = *(float *)pauVar26[3];
          fVar75 = *(float *)(pauVar26[3] + 4);
          fVar76 = *(float *)(pauVar26[3] + 8);
          fVar48 = *(float *)(pauVar26[3] + 0xc);
          fVar83 = *(float *)pauVar26[-6];
          fVar84 = *(float *)(pauVar26[-6] + 4);
          fVar60 = *(float *)(pauVar26[-6] + 8);
          fVar64 = *(float *)(pauVar26[-6] + 0xc);
          fVar71 = (*(float *)((char *)&auVar119 + 0));
          fVar87 = (*(float *)((char *)&auVar119 + 4));
          local_50 = (*(float *)((char *)&auVar119 + 8));
          fStack_4c = (*(float *)((char *)&auVar119 + 12));
          fVar118 = ((fVar64 * fVar49 - fVar83 * fVar58) - fVar84 * fVar72) - fVar60 * fStack_48;
          fVar127 = ((fVar82 * fVar50 - fVar66 * fVar59) - fVar67 * fVar73) - fVar68 * fVar89;
          fVar132 = ((fStack_4c * fVar77 - fVar71 * fVar61) - fVar87 * fVar62) - local_50 * fVar63;
          fVar136 = ((fVar48 * fVar90 - fVar65 * local_150) - fVar75 * fStack_14c) -
                    fVar76 * fStack_148;
          fVar100 = ((fVar60 * fVar72 - fVar84 * fStack_48) + fVar83 * fVar49) + fVar64 * fVar58;
          fVar115 = ((fVar68 * fVar73 - fVar67 * fVar89) + fVar66 * fVar50) + fVar82 * fVar59;
          fVar125 = ((local_50 * fVar62 - fVar87 * fVar63) + fVar71 * fVar77) + fStack_4c * fVar61;
          fVar133 = ((fVar76 * fStack_14c - fVar75 * fStack_148) + fVar65 * fVar90) +
                    fVar48 * local_150;
          fVar46 = ((fVar84 * fVar58 - fVar83 * fVar72) + fVar60 * fVar49) + fVar64 * fStack_48;
          fVar56 = ((fVar67 * fVar59 - fVar66 * fVar73) + fVar68 * fVar50) + fVar82 * fVar89;
          fVar70 = ((fVar87 * fVar61 - fVar71 * fVar62) + local_50 * fVar77) + fStack_4c * fVar63;
          fVar86 = ((fVar75 * local_150 - fVar65 * fStack_14c) + fVar76 * fVar90) +
                   fVar48 * fStack_148;
          fVar139 = ((fVar83 * fStack_48 - fVar60 * fVar58) + fVar84 * fVar49) + fVar64 * fVar72;
          fVar142 = ((fVar66 * fVar89 - fVar68 * fVar59) + fVar67 * fVar50) + fVar82 * fVar73;
          fVar144 = ((fVar71 * fVar63 - local_50 * fVar61) + fVar87 * fVar77) + fStack_4c * fVar62;
          fVar146 = ((fVar65 * fStack_148 - fVar76 * local_150) + fVar75 * fVar90) +
                    fVar48 * fStack_14c;
          fVar49 = *(float *)pauVar26[-5];
          fVar59 = *(float *)(pauVar26[-5] + 4);
          fVar73 = *(float *)(pauVar26[-5] + 8);
          fVar89 = *(float *)(pauVar26[-5] + 0xc);
          fVar50 = pfVar25[-8];
          fVar61 = pfVar25[-7];
          fVar62 = pfVar25[-6];
          fVar63 = pfVar25[-5];
          fVar77 = *(float *)pauVar26[-2];
          fVar90 = *(float *)(pauVar26[-2] + 4);
          fVar66 = *(float *)(pauVar26[-2] + 8);
          fVar67 = *(float *)(pauVar26[-2] + 0xc);
          fVar68 = pfVar25[4];
          fVar82 = pfVar25[5];
          fVar83 = pfVar25[6];
          fVar84 = pfVar25[7];
          fVar60 = *(float *)pauVar26[1];
          fVar64 = *(float *)(pauVar26[1] + 4);
          fVar65 = *(float *)(pauVar26[1] + 8);
          fVar75 = *(float *)(pauVar26[1] + 0xc);
          fVar76 = pfVar25[0x10];
          fVar48 = pfVar25[0x11];
          fVar58 = pfVar25[0x12];
          fVar72 = pfVar25[0x13];
          fVar71 = *(float *)pauVar26[4];
          fVar87 = *(float *)(pauVar26[4] + 4);
          fVar92 = *(float *)(pauVar26[4] + 8);
          fVar95 = *(float *)(pauVar26[4] + 0xc);
          fVar101 = pfVar25[0x1c];
          fVar103 = pfVar25[0x1d];
          fVar105 = pfVar25[0x1e];
          fVar117 = pfVar25[0x1f];
          fVar126 = pfVar25[-0xf];
          fVar131 = pfVar25[-0xe];
          fVar135 = pfVar25[-0xd];
          fVar79 = pfVar25[-4];
          fVar128 = pfVar25[-3];
          fVar93 = pfVar25[-2];
          fVar137 = pfVar25[-1];
          fVar140 = pfVar25[8];
          fVar33 = pfVar25[9];
          fVar34 = pfVar25[10];
          fVar36 = pfVar25[0xb];
          fVar37 = pfVar25[0x14];
          fVar38 = pfVar25[0x15];
          fVar39 = pfVar25[0x16];
          fVar40 = pfVar25[0x17];
          fVar102 = *(float *)&REFG(undefined, 0x1138af0) - fVar11;
          fVar116 = *(float *)&REFG(undefined, 0x1138af4) - fVar12;
          fVar129 = *(float *)&REFG(undefined, 0x1138af8) - fVar13;
          fVar134 = *(float *)&REFG(undefined, 0x1138afc) - fVar14;
          pfVar27[-0x28] = ((fVar94 + fVar94) + pfVar25[-0x10]) * fVar11 + fVar102 * pfVar25[-0x10];
          pfVar27[-0x27] = ((fVar138 + fVar138) + fVar15) * fVar11 + fVar102 * fVar126;
          pfVar27[-0x26] = ((fVar45 + fVar45) + fVar16) * fVar11 + fVar102 * fVar131;
          pfVar27[-0x25] = (fStack_17c + fVar17) * fVar11 + fVar102 * fVar135;
          pfVar27[-0x1c] = ((fVar104 + fVar104) + fVar78) * fVar12 + fVar116 * fVar79;
          pfVar27[-0x1b] = ((fVar141 + fVar141) + fVar80) * fVar12 + fVar116 * fVar128;
          pfVar27[-0x1a] = ((fVar55 + fVar55) + fVar88) * fVar12 + fVar116 * fVar93;
          pfVar27[-0x19] = (fVar81 + fVar91) * fVar12 + fVar116 * fVar137;
          pfVar27[-0x10] = ((fVar124 + fVar124) + fVar47) * fVar13 + fVar129 * fVar140;
          pfVar27[-0xf] = ((fVar143 + fVar143) + fVar57) * fVar13 + fVar129 * fVar33;
          pfVar27[-0xe] = ((fVar69 + fVar69) + fVar42) * fVar13 + fVar129 * fVar34;
          pfVar27[-0xd] = (fVar74 + fVar43) * fVar13 + fVar129 * fVar36;
          pfVar27[-4] = ((fVar130 + fVar130) + fVar44) * fVar14 + fVar134 * fVar37;
          pfVar27[-3] = ((fVar145 + fVar145) + fVar52) * fVar14 + fVar134 * fVar38;
          pfVar27[-2] = ((fVar85 + fVar85) + fVar53) * fVar14 + fVar134 * fVar39;
          pfVar27[-1] = (fVar41 + fVar54) * fVar14 + fVar134 * fVar40;
          fVar15 = pfVar25[-0xb];
          fVar16 = pfVar25[-10];
          fVar17 = pfVar25[-9];
          fVar78 = *pfVar25;
          fVar80 = pfVar25[1];
          fVar88 = pfVar25[2];
          fVar91 = pfVar25[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_3) + (int)pauVar26)));
          fVar47 = *pfVar28;
          fVar57 = pfVar28[1];
          fVar81 = pfVar28[2];
          fVar42 = pfVar28[3];
          pfVar28 = ((float *)GEN_TOP(((param_2 - param_1) + (int)pfVar27)));
          fVar43 = *pfVar28;
          fVar44 = pfVar28[1];
          fVar74 = pfVar28[2];
          fVar52 = pfVar28[3];
          fVar54 = ((fVar139 * fVar15 + fVar100 * pfVar25[-0xc]) + fVar46 * fVar16) +
                   fVar118 * fVar17;
          fVar131 = ((fVar142 * fVar80 + fVar115 * fVar78) + fVar56 * fVar88) + fVar127 * fVar91;
          fVar79 = ((fVar144 * fVar57 + fVar125 * fVar47) + fVar70 * fVar81) + fVar132 * fVar42;
          fVar93 = ((fVar146 * fVar44 + fVar133 * fVar43) + fVar86 * fVar74) + fVar136 * fVar52;
          uVar29 = -(uint)(fVar54 < 0.0);
          uVar30 = -(uint)(fVar131 < 0.0);
          uVar31 = -(uint)(fVar79 < 0.0);
          uVar32 = -(uint)(fVar93 < 0.0);
          fVar53 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar126 = gen_bits2f(~uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                               uVar30 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar135 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                               uVar31 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar128 = gen_bits2f(~uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                               uVar32 & *(uint *)&REFG(undefined, 0x1136f6c));
          (*(float *)((char *)&auVar96 + 0)) = fVar53 * fVar118;
          (*(float *)((char *)&auVar96 + 4)) = fVar126 * fVar127;
          (*(float *)((char *)&auVar96 + 8)) = fVar135 * fVar132;
          (*(float *)((char *)&auVar96 + 12)) = fVar128 * fVar136;
          fVar54 = fVar53 * fVar54;
          fVar131 = fVar126 * fVar131;
          fVar79 = fVar135 * fVar79;
          fVar93 = fVar128 * fVar93;
          (*(float *)((char *)&auVar51 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar54 + *(float *)&REFG(undefined, 0x1136f30)) * fVar54 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar54 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar51 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar131 + *(float *)&REFG(undefined, 0x1136f34)) * fVar131 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar131 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar51 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar79 + *(float *)&REFG(undefined, 0x1136f38)) * fVar79 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar79 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar51 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar93 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar93 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar93 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar106 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar54;
          (*(float *)((char *)&auVar106 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar131;
          (*(float *)((char *)&auVar106 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar79;
          (*(float *)((char *)&auVar106 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar93;
          gen_rsqrtps(&(auVar119), &(auVar96), &(auVar106));
          fVar137 = (*(float *)((char *)&auVar119 + 0));
          fVar140 = (*(float *)((char *)&auVar119 + 4));
          fVar33 = (*(float *)((char *)&auVar119 + 8));
          fVar34 = (*(float *)((char *)&auVar119 + 12));
          (*(float *)((char *)&auVar107 + 0)) = (fVar3 - (fVar137 * (*(float *)((char *)&auVar106 + 0))) * fVar137) * (fVar7 * fVar137);
          (*(float *)((char *)&auVar107 + 4)) = (fVar4 - (fVar140 * (*(float *)((char *)&auVar106 + 4))) * fVar140) * (fVar8 * fVar140);
          (*(float *)((char *)&auVar107 + 8)) = (fVar5 - (fVar33 * (*(float *)((char *)&auVar106 + 8))) * fVar33) * (fVar9 * fVar33);
          (*(float *)((char *)&auVar107 + 12)) = (fVar6 - (fVar34 * (*(float *)((char *)&auVar106 + 12))) * fVar34) * (fVar10 * fVar34);
          gen_divps(&(auVar119), &(auVar51), &(auVar107));
          fVar137 = (*(float *)((char *)&auVar119 + 0));
          fVar140 = (*(float *)((char *)&auVar119 + 12));
          fVar33 = (*(float *)((char *)&auVar119 + 4));
          fVar34 = (*(float *)((char *)&auVar119 + 8));
          fVar36 = fVar137 * fVar11;
          fVar37 = fVar33 * fVar12;
          fVar38 = fVar34 * fVar13;
          fVar39 = fVar140 * fVar14;
          fVar40 = (*(float *)&REFG(undefined, 0x1138af0) - fVar11) * fVar137;
          fVar41 = (*(float *)&REFG(undefined, 0x1138af4) - fVar12) * fVar33;
          fVar45 = (*(float *)&REFG(undefined, 0x1138af8) - fVar13) * fVar34;
          fVar55 = (*(float *)&REFG(undefined, 0x1138afc) - fVar14) * fVar140;
          (*(float *)((char *)&auVar97 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar36 * fVar36) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar36 * fVar36) + *(float *)&REFG(undefined, 0x1138af0)) * fVar36;
          (*(float *)((char *)&auVar97 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar37 * fVar37) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar37 * fVar37) + *(float *)&REFG(undefined, 0x1138af4)) * fVar37;
          (*(float *)((char *)&auVar97 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar38 * fVar38) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar38 * fVar38) + *(float *)&REFG(undefined, 0x1138af8)) * fVar38;
          (*(float *)((char *)&auVar97 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar39 * fVar39) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar39 * fVar39) + *(float *)&REFG(undefined, 0x1138afc)) * fVar39;
          (*(float *)((char *)&auVar108 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar40 * fVar40) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar40 * fVar40) + *(float *)&REFG(undefined, 0x1138af0)) * fVar40;
          (*(float *)((char *)&auVar108 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar41 * fVar41) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar41 * fVar41) + *(float *)&REFG(undefined, 0x1138af4)) * fVar41;
          (*(float *)((char *)&auVar108 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar45 * fVar45) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar45 * fVar45) + *(float *)&REFG(undefined, 0x1138af8)) * fVar45;
          (*(float *)((char *)&auVar108 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar55 * fVar55) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar55 * fVar55) + *(float *)&REFG(undefined, 0x1138afc)) * fVar55;
          (*(undefined4 *)((char *)&auVar22 + 4)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef4) * (fVar33 * fVar33) + *(float *)&REFG(undefined, 0x1136ee4))
                            * (fVar33 * fVar33) + *(float *)&REFG(undefined, 0x1138af4)) * fVar33);
          (*(undefined4 *)((char *)&auVar22 + 0)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef0) * (fVar137 * fVar137) + *(float *)&REFG(undefined, 0x1136ee0)
                            ) * (fVar137 * fVar137) + *(float *)&REFG(undefined, 0x1138af0)) * fVar137);
          (*(undefined4 *)((char *)&auVar22 + 8)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef8) * (fVar34 * fVar34) + *(float *)&REFG(undefined, 0x1136ee8))
                            * (fVar34 * fVar34) + *(float *)&REFG(undefined, 0x1138af8)) * fVar34);
          (*(undefined4 *)((char *)&auVar22 + 12)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136efc) * (fVar140 * fVar140) + *(float *)&REFG(undefined, 0x1136eec)
                            ) * (fVar140 * fVar140) + *(float *)&REFG(undefined, 0x1138afc)) * fVar140);
          gen_divps(&(auVar119), &(auVar97), &(auVar22));
          gen_divps(&(auVar35), &(auVar108), &(auVar22));
          uVar29 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar54);
          uVar30 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar131);
          uVar31 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar79);
          uVar32 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar93);
          fVar54 = gen_bits2f(uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              ~uVar29 & (*(undefined4 *)((char *)&auVar119 + 0)));
          fVar131 = gen_bits2f(uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                               ~uVar30 & (*(undefined4 *)((char *)&auVar119 + 4)));
          fVar79 = gen_bits2f(uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              ~uVar31 & (*(undefined4 *)((char *)&auVar119 + 8)));
          fVar93 = gen_bits2f(uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              ~uVar32 & (*(undefined4 *)((char *)&auVar119 + 12)));
          fVar137 = gen_bits2f(uVar29 & (uint)REFG(undefined8, 0x1138ae0) | ~uVar29 & (*(undefined4 *)((char *)&auVar35 + 0)));
          fVar140 = gen_bits2f(uVar30 & (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae0) + 4)) | ~uVar30 & (*(undefined4 *)((char *)&auVar35 + 4)));
          fVar33 = gen_bits2f(uVar31 & (uint)REFG(undefined8, 0x1138ae8) | ~uVar31 & (*(undefined4 *)((char *)&auVar35 + 8)));
          fVar34 = gen_bits2f(uVar32 & (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae8) + 4)) | ~uVar32 & (*(undefined4 *)((char *)&auVar35 + 12)));
          pfVar27[-0x24] = fVar54 * (fVar53 * fVar100) + fVar137 * pfVar25[-0xc];
          pfVar27[-0x23] = fVar54 * (fVar53 * fVar139) + fVar137 * fVar15;
          pfVar27[-0x22] = fVar54 * (fVar53 * fVar46) + fVar137 * fVar16;
          pfVar27[-0x21] = fVar54 * (*(float *)((char *)&auVar96 + 0)) + fVar137 * fVar17;
          pfVar27[-0x18] = fVar131 * (fVar126 * fVar115) + fVar140 * fVar78;
          pfVar27[-0x17] = fVar131 * (fVar126 * fVar142) + fVar140 * fVar80;
          pfVar27[-0x16] = fVar131 * (fVar126 * fVar56) + fVar140 * fVar88;
          pfVar27[-0x15] = fVar131 * (*(float *)((char *)&auVar96 + 4)) + fVar140 * fVar91;
          pfVar28 = ((float *)GEN_TOP(((param_1 - param_3) + (int)pauVar26)));
          *pfVar28 = fVar79 * (fVar135 * fVar125) + fVar33 * fVar47;
          pfVar28[1] = fVar79 * (fVar135 * fVar144) + fVar33 * fVar57;
          pfVar28[2] = fVar79 * (fVar135 * fVar70) + fVar33 * fVar81;
          pfVar28[3] = fVar79 * (*(float *)((char *)&auVar96 + 8)) + fVar33 * fVar42;
          *pfVar27 = fVar93 * (fVar128 * fVar133) + fVar34 * fVar43;
          pfVar27[1] = fVar93 * (fVar128 * fVar146) + fVar34 * fVar44;
          pfVar27[2] = fVar93 * (fVar128 * fVar86) + fVar34 * fVar74;
          pfVar27[3] = fVar93 * (*(float *)((char *)&auVar96 + 12)) + fVar34 * fVar52;
          fVar15 = pfVar25[-7];
          fVar16 = pfVar25[-6];
          fVar17 = pfVar25[-5];
          fVar78 = pfVar25[4];
          fVar80 = pfVar25[5];
          fVar88 = pfVar25[6];
          fVar91 = pfVar25[7];
          fVar47 = pfVar25[0x10];
          fVar57 = pfVar25[0x11];
          fVar81 = pfVar25[0x12];
          fVar42 = pfVar25[0x13];
          fVar43 = pfVar25[0x1c];
          fVar44 = pfVar25[0x1d];
          fVar74 = pfVar25[0x1e];
          fVar52 = pfVar25[0x1f];
          fVar53 = *(float *)&REFG(undefined, 0x1138af0) - fVar11;
          fVar54 = *(float *)&REFG(undefined, 0x1138af4) - fVar12;
          fVar126 = *(float *)&REFG(undefined, 0x1138af8) - fVar13;
          fVar131 = *(float *)&REFG(undefined, 0x1138afc) - fVar14;
          pfVar27[-0x20] = (fVar49 * fVar50) * fVar11 + fVar53 * pfVar25[-8];
          pfVar27[-0x1f] = (fVar59 * fVar61) * fVar11 + fVar53 * fVar15;
          pfVar27[-0x1e] = (fVar73 * fVar62) * fVar11 + fVar53 * fVar16;
          pfVar27[-0x1d] = (fVar89 * fVar63) * fVar11 + fVar53 * fVar17;
          pfVar27[-0x14] = (fVar77 * fVar68) * fVar12 + fVar54 * fVar78;
          pfVar27[-0x13] = (fVar90 * fVar82) * fVar12 + fVar54 * fVar80;
          pfVar27[-0x12] = (fVar66 * fVar83) * fVar12 + fVar54 * fVar88;
          pfVar27[-0x11] = (fVar67 * fVar84) * fVar12 + fVar54 * fVar91;
          pfVar27[-8] = (fVar60 * fVar76) * fVar13 + fVar126 * fVar47;
          pfVar27[-7] = (fVar64 * fVar48) * fVar13 + fVar126 * fVar57;
          pfVar27[-6] = (fVar65 * fVar58) * fVar13 + fVar126 * fVar81;
          pfVar27[-5] = (fVar75 * fVar72) * fVar13 + fVar126 * fVar42;
          pfVar27[4] = (fVar71 * fVar101) * fVar14 + fVar131 * fVar43;
          pfVar27[5] = (fVar87 * fVar103) * fVar14 + fVar131 * fVar44;
          pfVar27[6] = (fVar92 * fVar105) * fVar14 + fVar131 * fVar74;
          pfVar27[7] = (fVar95 * fVar117) * fVar14 + fVar131 * fVar52;
          pauVar26 = pauVar26 + 0xc;
          pfVar25 = pfVar25 + 0x30;
          pfVar27 = pfVar27 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d5fab0 */
unsigned int F_00d5fab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd5fab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  gen_v16 * param_4 = (gen_v16 *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  gen_v16 * param_6 = (gen_v16 *)(uintptr_t)gen_a5;
  gen_v12 * param_7 = (gen_v12 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  uint * puVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  float * pfVar17;
  float * pfVar18;
  int iVar19;
  float * pfVar20;
  gen_v16 * pauVar21;
  undefined4 * puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar83;
  float fVar85;
  undefined1 in_XMM4 [16] = {0};
  float fVar84;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar89;
  uint uVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  uint uVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  uint uVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  uint uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float local_90;
  float fStack_8c;
  float * local_1c;
  gen_v16 * local_18;
  float * local_14;
  
  fVar48 = *(float *)&REFG(undefined, 0x1138afc);
  fVar44 = *(float *)&REFG(undefined, 0x1138af8);
  fVar40 = *(float *)&REFG(undefined, 0x1138af4);
  fVar36 = *(float *)&REFG(undefined, 0x1138af0);
  fVar15 = *(float *)&REFG(undefined, 0x1136efc);
  fVar14 = *(float *)&REFG(undefined, 0x1136ef8);
  fVar13 = *(float *)&REFG(undefined, 0x1136ef4);
  fVar12 = *(float *)&REFG(undefined, 0x1136ef0);
  if (param_2 == (undefined4 *)0x0) {
    F_00d5b1f0(param_1,param_3,param_5,param_7,param_8,param_9,param_10);
    return 0;
  }
  if (param_10 == 0) {
    if (param_9 == -1) {
      fVar12 = *(float *)*param_7;
      fVar13 = *(float *)(*param_7 + 4);
      fVar14 = *(float *)(*param_7 + 8);
      fVar15 = *(float *)param_7[1];
      local_1c = ((float *)GEN_TOP(((int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2)));
      if (0 < (int)local_1c) {
        pauVar21 = param_4;
        puVar22 = param_2;
        for (iVar19 = ((uint)local_1c & 0xfffffff) * 4; iVar19 != 0; iVar19 = iVar19 + -1) {
          *puVar22 = *(undefined4 *)*pauVar21;
          pauVar21 = (gen_v16 *)(*pauVar21 + 4);
          puVar22 = puVar22 + 1;
        }
        local_14 = param_5;
        local_18 = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar17 = (float *)(param_1 + 0x20);
        do {
          fVar52 = fVar12 * *(float *)*local_18;
          fVar55 = fVar13 * *(float *)(*local_18 + 4);
          fVar57 = fVar14 * *(float *)(*local_18 + 8);
          fVar59 = fVar15 * *(float *)(*local_18 + 0xc);
          fVar36 = pfVar20[-0xc];
          fVar40 = pfVar20[-0xb];
          fVar44 = pfVar20[-10];
          fVar48 = pfVar20[-9];
          fVar4 = pfVar20[-8];
          fVar5 = pfVar20[-7];
          fVar10 = pfVar20[-6];
          fVar11 = pfVar20[-5];
          pfVar18 = ((float *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar17)));
          fVar37 = *pfVar18;
          fVar41 = pfVar18[1];
          fVar45 = pfVar18[2];
          fVar50 = pfVar18[3];
          fVar6 = *pfVar20;
          fVar7 = pfVar20[1];
          fVar8 = pfVar20[2];
          fVar9 = pfVar20[3];
          fVar35 = *local_14;
          fVar39 = local_14[1];
          fVar43 = local_14[2];
          pfVar18 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar17)));
          fVar47 = *pfVar18;
          fVar106 = pfVar18[1];
          fVar108 = pfVar18[2];
          pfVar2 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + (int)pfVar20)));
          fVar109 = *pfVar2;
          fVar107 = pfVar2[1];
          fVar49 = pfVar2[2];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + -0x20 + (int)pfVar20)));
          fVar51 = *pfVar3;
          fVar60 = pfVar3[1];
          fVar80 = pfVar3[2];
          fVar85 = gen_bits2f((uint)gen_fl2bits(local_14[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar89 = gen_bits2f((uint)gen_fl2bits(pfVar3[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar97 = gen_bits2f((uint)gen_fl2bits(pfVar18[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          fVar105 = gen_bits2f((uint)gen_fl2bits(pfVar2[3]) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          fVar87 = ((fVar85 * fVar48 - fVar35 * fVar36) - fVar39 * fVar40) - fVar43 * fVar44;
          fVar93 = ((fVar89 * fVar11 - fVar51 * fVar4) - fVar60 * fVar5) - fVar80 * fVar10;
          fVar101 = ((fVar97 * fVar50 - fVar47 * fVar37) - fVar106 * fVar41) - fVar108 * fVar45;
          fVar110 = ((fVar105 * fVar9 - fVar109 * fVar6) - fVar107 * fVar7) - fVar49 * fVar8;
          fVar34 = ((fVar43 * fVar40 - fVar39 * fVar44) + fVar35 * fVar48) + fVar85 * fVar36;
          fVar38 = ((fVar80 * fVar5 - fVar60 * fVar10) + fVar51 * fVar11) + fVar89 * fVar4;
          fVar42 = ((fVar108 * fVar41 - fVar106 * fVar45) + fVar47 * fVar50) + fVar97 * fVar37;
          fVar46 = ((fVar49 * fVar7 - fVar107 * fVar8) + fVar109 * fVar9) + fVar105 * fVar6;
          fVar56 = ((fVar35 * fVar44 - fVar43 * fVar36) + fVar39 * fVar48) + fVar85 * fVar40;
          fVar58 = ((fVar51 * fVar10 - fVar80 * fVar4) + fVar60 * fVar11) + fVar89 * fVar5;
          fVar78 = ((fVar47 * fVar45 - fVar108 * fVar37) + fVar106 * fVar50) + fVar97 * fVar41;
          fVar83 = ((fVar109 * fVar8 - fVar49 * fVar6) + fVar107 * fVar9) + fVar105 * fVar7;
          fVar35 = ((fVar39 * fVar36 - fVar35 * fVar40) + fVar43 * fVar48) + fVar85 * fVar44;
          fVar43 = ((fVar60 * fVar4 - fVar51 * fVar5) + fVar80 * fVar11) + fVar89 * fVar10;
          fVar106 = ((fVar106 * fVar37 - fVar47 * fVar41) + fVar108 * fVar50) + fVar97 * fVar45;
          fVar109 = ((fVar107 * fVar6 - fVar109 * fVar7) + fVar49 * fVar9) + fVar105 * fVar8;
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          fVar10 = pfVar20[2];
          fVar11 = pfVar20[3];
          fVar6 = pfVar20[-8];
          fVar7 = pfVar20[-7];
          fVar8 = pfVar20[-6];
          fVar9 = pfVar20[-5];
          uVar23 = -(uint)(((fVar56 * fVar40 + fVar34 * fVar36) + fVar35 * fVar44) + fVar87 * fVar48
                          < 0.0);
          uVar25 = -(uint)(((fVar58 * fVar7 + fVar38 * fVar6) + fVar43 * fVar8) + fVar93 * fVar9 <
                          0.0);
          uVar28 = -(uint)(((fVar78 * fVar41 + fVar42 * fVar37) + fVar106 * fVar45) +
                           fVar101 * fVar50 < 0.0);
          uVar31 = -(uint)(((fVar83 * fVar5 + fVar46 * fVar4) + fVar109 * fVar10) + fVar110 * fVar11
                          < 0.0);
          fVar39 = gen_bits2f(~uVar23 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar23 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar52);
          fVar47 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar55);
          fVar108 = gen_bits2f(~uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                               uVar28 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar57)
          ;
          fVar107 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                               uVar31 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar59)
          ;
          local_18 = local_18 + 1;
          pfVar17[-8] = fVar39 * fVar36 + fVar34 * fVar52;
          pfVar17[-7] = fVar39 * fVar40 + fVar56 * fVar52;
          pfVar17[-6] = fVar39 * fVar44 + fVar35 * fVar52;
          pfVar17[-5] = fVar39 * fVar48 + fVar87 * fVar52;
          pfVar17[-4] = fVar47 * fVar6 + fVar38 * fVar55;
          pfVar17[-3] = fVar47 * fVar7 + fVar58 * fVar55;
          pfVar17[-2] = fVar47 * fVar8 + fVar43 * fVar55;
          pfVar17[-1] = fVar47 * fVar9 + fVar93 * fVar55;
          *pfVar17 = fVar108 * fVar37 + fVar42 * fVar57;
          pfVar17[1] = fVar108 * fVar41 + fVar78 * fVar57;
          pfVar17[2] = fVar108 * fVar45 + fVar106 * fVar57;
          pfVar17[3] = fVar108 * fVar50 + fVar101 * fVar57;
          pfVar17[4] = fVar107 * fVar4 + fVar46 * fVar59;
          pfVar17[5] = fVar107 * fVar5 + fVar83 * fVar59;
          pfVar17[6] = fVar107 * fVar10 + fVar109 * fVar59;
          pfVar17[7] = fVar107 * fVar11 + fVar110 * fVar59;
          local_14 = local_14 + 0x10;
          pfVar20 = pfVar20 + 0x10;
          pfVar17 = pfVar17 + 0x10;
          local_1c = (float *)((int)local_1c - 1);
        } while (local_1c != (float *)0x0);
        return 0;
      }
    }
    else if (param_9 == 0) {
      fVar12 = *(float *)*param_7;
      fVar13 = *(float *)(*param_7 + 4);
      fVar14 = *(float *)(*param_7 + 8);
      fVar15 = *(float *)param_7[1];
      local_14 = ((float *)GEN_TOP(((int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2)));
      if (0 < (int)local_14) {
        pfVar17 = (float *)(param_1 + 0x30);
        pfVar20 = param_5 + 8;
        fVar36 = *(float *)&REFG(undefined, 0x1138af0) - fVar12;
        fVar40 = *(float *)&REFG(undefined, 0x1138af4) - fVar13;
        fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar14;
        fVar48 = *(float *)&REFG(undefined, 0x1138afc) - fVar15;
        pfVar18 = param_3;
        pauVar21 = param_6;
        do {
          memcpy(&(auVar69), &(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar21)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar21)))) < sizeof(auVar69) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar21)))) : sizeof(auVar69));
          fVar4 = (*(float *)((char *)&auVar69 + 0));
          fVar10 = (*(float *)((char *)&auVar69 + 12));
          memcpy(&(auVar63), &(*pauVar21), sizeof(*pauVar21) < sizeof(auVar63) ? sizeof(*pauVar21) : sizeof(auVar63));
          fVar5 = (*(float *)((char *)&auVar63 + 0));
          fVar11 = (*(float *)((char *)&auVar63 + 12));
          gen_rcpps(&(auVar68), &(in_XMM3), &(auVar69));
          fVar108 = (*(float *)((char *)&auVar69 + 4));
          fVar109 = (*(float *)((char *)&auVar69 + 8));
          fVar37 = (*(float *)((char *)&auVar63 + 4));
          fVar41 = (*(float *)((char *)&auVar63 + 8));
          gen_rcpps(&(auVar69), &(auVar68), &(auVar63));
          fVar49 = gen_bits2f(~-(uint)(fVar5 < fVar4) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) -
                                                ((*(float *)&REFG(undefined, 0x1136ea0) - (*(float *)((char *)&auVar69 + 0)) * fVar5)
                                                * (*(float *)((char *)&auVar69 + 0))) * (fVar36 * fVar4)) |
                              -(uint)(fVar5 < fVar4) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - fVar4 * (*(float *)((char *)&auVar68 + 0)))
                                                * (*(float *)((char *)&auVar68 + 0))) * (fVar12 * fVar5)));
          fVar51 = gen_bits2f(~-(uint)(fVar37 < fVar108) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) -
                                                ((*(float *)&REFG(undefined, 0x1136ea4) - (*(float *)((char *)&auVar69 + 4)) * fVar37)
                                                * (*(float *)((char *)&auVar69 + 4))) * (fVar40 * fVar108)) |
                              -(uint)(fVar37 < fVar108) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - fVar108 * (*(float *)((char *)&auVar68 + 4))
                                                 ) * (*(float *)((char *)&auVar68 + 4))) * (fVar13 * fVar37)));
          fVar60 = gen_bits2f(~-(uint)(fVar41 < fVar109) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) -
                                                ((*(float *)&REFG(undefined, 0x1136ea8) - (*(float *)((char *)&auVar69 + 8)) * fVar41)
                                                * (*(float *)((char *)&auVar69 + 8))) * (fVar44 * fVar109)) |
                              -(uint)(fVar41 < fVar109) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - fVar109 * (*(float *)((char *)&auVar68 + 8))
                                                 ) * (*(float *)((char *)&auVar68 + 8))) * (fVar14 * fVar41)));
          fVar80 = gen_bits2f(~-(uint)(fVar11 < fVar10) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) -
                                                ((*(float *)&REFG(undefined, 0x1136eac) - (*(float *)((char *)&auVar69 + 12)) * fVar11
                                                 ) * (*(float *)((char *)&auVar69 + 12))) * (fVar48 * fVar10)) |
                              -(uint)(fVar11 < fVar10) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - fVar10 * (*(float *)((char *)&auVar68 + 12))
                                                 ) * (*(float *)((char *)&auVar68 + 12))) * (fVar15 * fVar11)));
          uVar31 = -(uint)(fVar4 <= (float)REFG(undefined8, 0x1138ae0));
          uVar26 = -(uint)(fVar108 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar29 = -(uint)(fVar109 <= (float)REFG(undefined8, 0x1138ae8));
          uVar32 = -(uint)(fVar10 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar24 = -(uint)(fVar5 <= (float)REFG(undefined8, 0x1138ae0));
          uVar27 = -(uint)(fVar37 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar30 = -(uint)(fVar41 <= (float)REFG(undefined8, 0x1138ae8));
          uVar33 = -(uint)(fVar11 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar111 = uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0));
          uVar112 = uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4));
          uVar113 = uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8));
          uVar114 = uVar32 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc));
          fVar107 = *(float *)&REFG(undefined, 0x1138af4) - fVar51;
          fVar34 = *(float *)&REFG(undefined, 0x1138af8) - fVar60;
          fVar38 = *(float *)&REFG(undefined, 0x1138afc) - fVar80;
          fVar5 = *(float *)(*pauVar21 + 4);
          fVar11 = *(float *)(*pauVar21 + 8);
          fVar37 = *(float *)(*pauVar21 + 0xc);
          fVar41 = *pfVar20;
          fVar45 = pfVar20[1];
          fVar50 = pfVar20[2];
          fVar6 = pfVar20[3];
          fVar7 = pfVar18[4];
          fVar8 = pfVar18[5];
          fVar9 = pfVar18[6];
          fVar35 = pfVar18[7];
          uVar23 = *(uint *)(*pauVar21 + 4);
          uVar25 = *(uint *)(*pauVar21 + 8);
          uVar28 = *(uint *)(*pauVar21 + 0xc);
          uVar90 = uVar24 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0));
          uVar94 = uVar27 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar98 = uVar30 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8));
          uVar102 = uVar33 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          fVar39 = pfVar20[-8];
          fVar43 = pfVar20[-7];
          fVar47 = pfVar20[-6];
          fVar106 = pfVar20[-5];
          puVar1 = ((uint *)GEN_TOP((((int)param_2 - (int)param_6) + (int)pauVar21)));
          *puVar1 = ~uVar24 & (~uVar31 & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138af0) - fVar49) *
                                                           fVar4 + fVar49 * *(float *)*pauVar21) |
                              uVar31 & *(uint *)*pauVar21) | uVar24 & (uint)gen_fl2bits(fVar4);
          puVar1[1] = ~uVar27 & (~uVar26 & (uint)gen_fl2bits(fVar107 * fVar108 + fVar51 * fVar5) |
                                uVar26 & uVar23) | uVar27 & (uint)gen_fl2bits(fVar108);
          puVar1[2] = ~uVar30 & (~uVar29 & (uint)gen_fl2bits(fVar34 * fVar109 + fVar60 * fVar11) |
                                uVar29 & uVar25) | uVar30 & (uint)gen_fl2bits(fVar109);
          puVar1[3] = ~uVar33 & (~uVar32 & (uint)gen_fl2bits(fVar38 * fVar10 + fVar80 * fVar37) |
                                uVar32 & uVar28) | uVar33 & (uint)gen_fl2bits(fVar10);
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - (int)param_5) + (int)pfVar20)));
          fVar4 = *pfVar2;
          fVar5 = pfVar2[1];
          fVar10 = pfVar2[2];
          fVar11 = pfVar2[3];
          pfVar2 = ((float *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar17)));
          fVar37 = *pfVar2;
          fVar108 = pfVar2[1];
          fVar109 = pfVar2[2];
          fVar107 = pfVar2[3];
          fVar83 = gen_bits2f(~(uVar24 & uVar31) &
                              (~uVar24 & (~uVar31 & (uint)gen_fl2bits(fVar49) | uVar111) | uVar90) |
                              uVar24 & uVar31 & (uint)gen_fl2bits(fVar12));
          fVar85 = gen_bits2f(~(uVar27 & uVar26) &
                              (~uVar27 & (~uVar26 & (uint)gen_fl2bits(fVar51) | uVar112) | uVar94) |
                              uVar27 & uVar26 & (uint)gen_fl2bits(fVar13));
          fVar87 = gen_bits2f(~(uVar30 & uVar29) &
                              (~uVar30 & (~uVar29 & (uint)gen_fl2bits(fVar60) | uVar113) | uVar98) |
                              uVar30 & uVar29 & (uint)gen_fl2bits(fVar14));
          fVar89 = gen_bits2f(~(uVar33 & uVar32) &
                              (~uVar33 & (~uVar32 & (uint)gen_fl2bits(fVar80) | uVar114) | uVar102)
                              | uVar33 & uVar32 & (uint)gen_fl2bits(fVar15));
          fVar49 = *pfVar18;
          fVar51 = pfVar18[1];
          fVar60 = pfVar18[2];
          fVar80 = pfVar18[3];
          fVar34 = pfVar20[4];
          fVar38 = pfVar20[5];
          fVar42 = pfVar20[6];
          fVar46 = pfVar20[7];
          fVar52 = pfVar20[-3];
          fVar55 = pfVar20[-2];
          fVar57 = pfVar20[-1];
          uVar23 = -(uint)(((fVar43 * fVar51 + fVar39 * fVar49) + fVar47 * fVar60) +
                           fVar106 * fVar80 < 0.0);
          uVar25 = -(uint)(((fVar52 * fVar8 + pfVar20[-4] * fVar7) + fVar55 * fVar9) +
                           fVar57 * fVar35 < 0.0);
          uVar28 = -(uint)(((fVar45 * fVar5 + fVar41 * fVar4) + fVar50 * fVar10) + fVar6 * fVar11 <
                          0.0);
          uVar31 = -(uint)(((fVar38 * fVar108 + fVar34 * fVar37) + fVar42 * fVar109) +
                           fVar46 * fVar107 < 0.0);
          fVar59 = gen_bits2f(~uVar23 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar23 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar83);
          fVar56 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar85);
          fVar58 = gen_bits2f(~uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar28 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar87);
          fVar78 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar89);
          pfVar17[-8] = pfVar20[-4] * fVar85 + fVar56 * fVar7;
          pfVar17[-7] = fVar52 * fVar85 + fVar56 * fVar8;
          pfVar17[-6] = fVar55 * fVar85 + fVar56 * fVar9;
          pfVar17[-5] = fVar57 * fVar85 + fVar56 * fVar35;
          (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar43 * fVar83 + fVar59 * fVar51);
          (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar39 * fVar83 + fVar59 * fVar49);
          (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar47 * fVar83 + fVar59 * fVar60);
          (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar106 * fVar83 + fVar59 * fVar80);
          memcpy(&(*(gen_v16 *)(pfVar17 + -0xc)), &(in_XMM3), sizeof(in_XMM3) < sizeof(*(gen_v16 *)(pfVar17 + -0xc)) ? sizeof(in_XMM3) : sizeof(*(gen_v16 *)(pfVar17 + -0xc)));
          pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_5) + (int)pfVar20)));
          *pfVar2 = fVar41 * fVar87 + fVar58 * fVar4;
          pfVar2[1] = fVar45 * fVar87 + fVar58 * fVar5;
          pfVar2[2] = fVar50 * fVar87 + fVar58 * fVar10;
          pfVar2[3] = fVar6 * fVar87 + fVar58 * fVar11;
          *pfVar17 = fVar34 * fVar89 + fVar78 * fVar37;
          pfVar17[1] = fVar38 * fVar89 + fVar78 * fVar108;
          pfVar17[2] = fVar42 * fVar89 + fVar78 * fVar109;
          pfVar17[3] = fVar46 * fVar89 + fVar78 * fVar107;
          pfVar18 = pfVar18 + 0x10;
          pfVar20 = pfVar20 + 0x10;
          pfVar17 = pfVar17 + 0x10;
          pauVar21 = pauVar21 + 1;
          local_14 = (float *)((int)local_14 + -1);
        } while (local_14 != (float *)0x0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      fVar12 = *(float *)*param_7;
      fVar13 = *(float *)(*param_7 + 4);
      fVar14 = *(float *)(*param_7 + 8);
      fVar15 = *(float *)param_7[1];
      local_14 = ((float *)GEN_TOP(((int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2)));
      if (0 < (int)local_14) {
        pauVar21 = param_4;
        puVar22 = param_2;
        for (iVar19 = ((uint)local_14 & 0xfffffff) * 4; iVar19 != 0; iVar19 = iVar19 + -1) {
          *puVar22 = *(undefined4 *)*pauVar21;
          pauVar21 = (gen_v16 *)(*pauVar21 + 4);
          puVar22 = puVar22 + 1;
        }
        local_1c = param_5;
        local_18 = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar17 = (float *)(param_1 + 0x20);
        do {
          fVar78 = fVar12 * *(float *)*local_18;
          fVar83 = fVar13 * *(float *)(*local_18 + 4);
          fVar85 = fVar14 * *(float *)(*local_18 + 8);
          fVar87 = fVar15 * *(float *)(*local_18 + 0xc);
          fVar36 = pfVar20[-0xc];
          fVar40 = pfVar20[-0xb];
          fVar44 = pfVar20[-10];
          fVar48 = pfVar20[-9];
          fVar4 = pfVar20[-8];
          fVar5 = pfVar20[-7];
          fVar10 = pfVar20[-6];
          fVar11 = pfVar20[-5];
          pfVar18 = ((float *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar17)));
          fVar37 = *pfVar18;
          fVar41 = pfVar18[1];
          fVar45 = pfVar18[2];
          fVar50 = pfVar18[3];
          fVar6 = *pfVar20;
          fVar7 = pfVar20[1];
          fVar8 = pfVar20[2];
          fVar9 = pfVar20[3];
          fVar35 = *local_1c;
          fVar39 = local_1c[1];
          fVar43 = local_1c[2];
          fVar47 = local_1c[3];
          pfVar18 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3) + -0x20)));
          fVar106 = *pfVar18;
          fVar108 = pfVar18[1];
          fVar109 = pfVar18[2];
          fVar107 = pfVar18[3];
          memcpy(&(auVar69), &(*((gen_v16 *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar17)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar17)))) < sizeof(auVar69) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar17)))) : sizeof(auVar69));
          pfVar18 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3))));
          fVar49 = *pfVar18;
          fVar51 = pfVar18[1];
          fVar60 = pfVar18[2];
          fVar80 = pfVar18[3];
          fVar56 = (*(float *)((char *)&auVar69 + 0));
          fVar58 = (*(float *)((char *)&auVar69 + 4));
          local_90 = (*(float *)((char *)&auVar69 + 8));
          fStack_8c = (*(float *)((char *)&auVar69 + 12));
          fVar89 = ((fVar47 * fVar48 - fVar35 * fVar36) - fVar39 * fVar40) - fVar43 * fVar44;
          fVar93 = ((fVar107 * fVar11 - fVar106 * fVar4) - fVar108 * fVar5) - fVar109 * fVar10;
          fVar97 = ((fStack_8c * fVar50 - fVar56 * fVar37) - fVar58 * fVar41) - local_90 * fVar45;
          fVar101 = ((fVar80 * fVar9 - fVar49 * fVar6) - fVar51 * fVar7) - fVar60 * fVar8;
          fVar52 = ((fVar43 * fVar40 - fVar39 * fVar44) + fVar35 * fVar48) + fVar47 * fVar36;
          fVar55 = ((fVar109 * fVar5 - fVar108 * fVar10) + fVar106 * fVar11) + fVar107 * fVar4;
          fVar57 = ((local_90 * fVar41 - fVar58 * fVar45) + fVar56 * fVar50) + fStack_8c * fVar37;
          fVar59 = ((fVar60 * fVar7 - fVar51 * fVar8) + fVar49 * fVar9) + fVar80 * fVar6;
          fVar34 = ((fVar39 * fVar36 - fVar35 * fVar40) + fVar43 * fVar48) + fVar47 * fVar44;
          fVar38 = ((fVar108 * fVar4 - fVar106 * fVar5) + fVar109 * fVar11) + fVar107 * fVar10;
          fVar42 = ((fVar58 * fVar37 - fVar56 * fVar41) + local_90 * fVar50) + fStack_8c * fVar45;
          fVar46 = ((fVar51 * fVar6 - fVar49 * fVar7) + fVar60 * fVar9) + fVar80 * fVar8;
          fVar105 = ((fVar35 * fVar44 - fVar43 * fVar36) + fVar39 * fVar48) + fVar47 * fVar40;
          fVar106 = ((fVar106 * fVar10 - fVar109 * fVar4) + fVar108 * fVar11) + fVar107 * fVar5;
          fVar108 = ((fVar56 * fVar45 - local_90 * fVar37) + fVar58 * fVar50) + fStack_8c * fVar41;
          fVar109 = ((fVar49 * fVar8 - fVar60 * fVar6) + fVar51 * fVar9) + fVar80 * fVar7;
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          fVar10 = pfVar20[2];
          fVar11 = pfVar20[3];
          fVar6 = pfVar20[-8];
          fVar7 = pfVar20[-7];
          fVar8 = pfVar20[-6];
          fVar9 = pfVar20[-5];
          uVar23 = -(uint)(((fVar105 * fVar40 + fVar52 * fVar36) + fVar34 * fVar44) +
                           fVar89 * fVar48 < 0.0);
          uVar25 = -(uint)(((fVar106 * fVar7 + fVar55 * fVar6) + fVar38 * fVar8) + fVar93 * fVar9 <
                          0.0);
          uVar28 = -(uint)(((fVar108 * fVar41 + fVar57 * fVar37) + fVar42 * fVar45) +
                           fVar97 * fVar50 < 0.0);
          uVar31 = -(uint)(((fVar109 * fVar5 + fVar59 * fVar4) + fVar46 * fVar10) + fVar101 * fVar11
                          < 0.0);
          local_18 = local_18 + 1;
          fVar35 = gen_bits2f(~uVar23 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar23 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar78);
          fVar39 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar83);
          fVar43 = gen_bits2f(~uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar28 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar85);
          fVar47 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar87);
          pfVar17[-8] = fVar35 * fVar36 + fVar52 * fVar78;
          pfVar17[-7] = fVar35 * fVar40 + fVar105 * fVar78;
          pfVar17[-6] = fVar35 * fVar44 + fVar34 * fVar78;
          pfVar17[-5] = fVar35 * fVar48 + fVar89 * fVar78;
          pfVar17[-4] = fVar39 * fVar6 + fVar55 * fVar83;
          pfVar17[-3] = fVar39 * fVar7 + fVar106 * fVar83;
          pfVar17[-2] = fVar39 * fVar8 + fVar38 * fVar83;
          pfVar17[-1] = fVar39 * fVar9 + fVar93 * fVar83;
          *pfVar17 = fVar43 * fVar37 + fVar57 * fVar85;
          pfVar17[1] = fVar43 * fVar41 + fVar108 * fVar85;
          pfVar17[2] = fVar43 * fVar45 + fVar42 * fVar85;
          pfVar17[3] = fVar43 * fVar50 + fVar97 * fVar85;
          pfVar17[4] = fVar47 * fVar4 + fVar59 * fVar87;
          pfVar17[5] = fVar47 * fVar5 + fVar109 * fVar87;
          pfVar17[6] = fVar47 * fVar10 + fVar46 * fVar87;
          pfVar17[7] = fVar47 * fVar11 + fVar101 * fVar87;
          local_1c = local_1c + 0x10;
          pfVar20 = pfVar20 + 0x10;
          pfVar17 = pfVar17 + 0x10;
          local_14 = (float *)((int)local_14 - 1);
        } while (local_14 != (float *)0x0);
        return 0;
      }
    }
  }
  else if (param_10 == 1) {
    if (param_9 == -1) {
      memcpy(&(auVar16), &(*param_7), sizeof(*param_7) < sizeof(auVar16) ? sizeof(*param_7) : sizeof(auVar16));
      fVar12 = *(float *)param_7[1];
      local_1c = ((float *)GEN_TOP(((int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2)));
      if (0 < (int)local_1c) {
        pauVar21 = param_4;
        puVar22 = param_2;
        for (iVar19 = ((uint)local_1c & 0xfffffff) * 4; fVar36 = *(float *)&REFG(undefined, 0x1136efc),
            fVar15 = *(float *)&REFG(undefined, 0x1136ef8), fVar14 = *(float *)&REFG(undefined, 0x1136ef4),
            fVar13 = *(float *)&REFG(undefined, 0x1136ef0), iVar19 != 0; iVar19 = iVar19 + -1) {
          *puVar22 = *(undefined4 *)*pauVar21;
          pauVar21 = (gen_v16 *)(*pauVar21 + 4);
          puVar22 = puVar22 + 1;
        }
        local_14 = param_5;
        local_18 = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar17 = (float *)(param_1 + 0x20);
        do {
          local_1b0 = (*(float *)((char *)&auVar16 + 0));
          fStack_1ac = (*(float *)((char *)&auVar16 + 4));
          fStack_1a8 = (*(float *)((char *)&auVar16 + 8));
          fVar38 = *(float *)*local_18 * local_1b0;
          fVar46 = *(float *)(*local_18 + 4) * fStack_1ac;
          fVar55 = *(float *)(*local_18 + 8) * fStack_1a8;
          fVar59 = *(float *)(*local_18 + 0xc) * fVar12;
          fVar40 = pfVar20[-0xc];
          fVar44 = pfVar20[-0xb];
          fVar48 = pfVar20[-10];
          fVar4 = pfVar20[-9];
          fVar5 = pfVar20[-8];
          fVar10 = pfVar20[-7];
          fVar11 = pfVar20[-6];
          fVar37 = pfVar20[-5];
          pfVar18 = ((float *)GEN_TOP(((int)pfVar17 + ((int)param_3 - param_1))));
          fVar41 = *pfVar18;
          fVar45 = pfVar18[1];
          fVar50 = pfVar18[2];
          fVar6 = pfVar18[3];
          fVar7 = *pfVar20;
          fVar8 = pfVar20[1];
          fVar9 = pfVar20[2];
          fVar35 = pfVar20[3];
          fVar39 = *local_14;
          fVar43 = local_14[1];
          fVar47 = local_14[2];
          pfVar18 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3))));
          fVar106 = *pfVar18;
          fVar108 = pfVar18[1];
          fVar109 = pfVar18[2];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar20 + ((int)param_5 - (int)param_3) + -0x20)));
          fVar107 = *pfVar3;
          fVar49 = pfVar3[1];
          fVar51 = pfVar3[2];
          pfVar2 = ((float *)GEN_TOP(((int)pfVar17 + ((int)param_5 - param_1))));
          fVar60 = *pfVar2;
          fVar80 = pfVar2[1];
          fVar34 = pfVar2[2];
          fVar87 = gen_bits2f((uint)gen_fl2bits(local_14[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar89 = gen_bits2f((uint)gen_fl2bits(pfVar3[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar93 = gen_bits2f((uint)gen_fl2bits(pfVar2[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          fVar97 = gen_bits2f((uint)gen_fl2bits(pfVar18[3]) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          fVar101 = ((fVar4 * fVar87 - fVar39 * fVar40) - fVar43 * fVar44) - fVar47 * fVar48;
          fVar105 = ((fVar37 * fVar89 - fVar107 * fVar5) - fVar49 * fVar10) - fVar51 * fVar11;
          fVar110 = ((fVar6 * fVar93 - fVar60 * fVar41) - fVar80 * fVar45) - fVar34 * fVar50;
          fVar79 = ((fVar35 * fVar97 - fVar106 * fVar7) - fVar108 * fVar8) - fVar109 * fVar9;
          fVar58 = ((fVar47 * fVar44 - fVar43 * fVar48) + fVar39 * fVar4) + fVar40 * fVar87;
          fVar78 = ((fVar51 * fVar10 - fVar49 * fVar11) + fVar107 * fVar37) + fVar5 * fVar89;
          fVar83 = ((fVar34 * fVar45 - fVar80 * fVar50) + fVar60 * fVar6) + fVar41 * fVar93;
          fVar85 = ((fVar109 * fVar8 - fVar108 * fVar9) + fVar106 * fVar35) + fVar7 * fVar97;
          fVar42 = ((fVar43 * fVar40 - fVar39 * fVar44) + fVar47 * fVar4) + fVar48 * fVar87;
          fVar52 = ((fVar49 * fVar5 - fVar107 * fVar10) + fVar51 * fVar37) + fVar11 * fVar89;
          fVar57 = ((fVar80 * fVar41 - fVar60 * fVar45) + fVar34 * fVar6) + fVar50 * fVar93;
          fVar56 = ((fVar108 * fVar7 - fVar106 * fVar8) + fVar109 * fVar35) + fVar9 * fVar97;
          fVar84 = ((fVar39 * fVar48 - fVar47 * fVar40) + fVar43 * fVar4) + fVar44 * fVar87;
          fVar86 = ((fVar107 * fVar11 - fVar51 * fVar5) + fVar49 * fVar37) + fVar10 * fVar89;
          fVar88 = ((fVar60 * fVar50 - fVar34 * fVar41) + fVar80 * fVar6) + fVar45 * fVar93;
          fVar91 = ((fVar106 * fVar9 - fVar109 * fVar7) + fVar108 * fVar35) + fVar8 * fVar97;
          fVar5 = *pfVar20;
          fVar10 = pfVar20[1];
          fVar11 = pfVar20[2];
          fVar37 = pfVar20[3];
          fVar7 = pfVar20[-8];
          fVar8 = pfVar20[-7];
          fVar9 = pfVar20[-6];
          fVar35 = pfVar20[-5];
          (*(undefined4 *)((char *)&auVar76 + 4)) = (undefined4)gen_fl2bits(fVar105);
          (*(undefined4 *)((char *)&auVar76 + 0)) = (undefined4)gen_fl2bits(fVar101);
          (*(undefined4 *)((char *)&auVar76 + 8)) = (undefined4)gen_fl2bits(fVar110);
          (*(undefined4 *)((char *)&auVar76 + 12)) = (undefined4)gen_fl2bits(fVar79);
          fVar43 = ((fVar84 * fVar44 + fVar58 * fVar40) + fVar42 * fVar48) + fVar101 * fVar4;
          fVar106 = ((fVar86 * fVar8 + fVar78 * fVar7) + fVar52 * fVar9) + fVar105 * fVar35;
          fVar109 = ((fVar88 * fVar45 + fVar83 * fVar41) + fVar57 * fVar50) + fVar110 * fVar6;
          fVar49 = ((fVar91 * fVar10 + fVar85 * fVar5) + fVar56 * fVar11) + fVar79 * fVar37;
          uVar23 = -(uint)(fVar43 < 0.0);
          uVar25 = -(uint)(fVar106 < 0.0);
          uVar28 = -(uint)(fVar109 < 0.0);
          uVar31 = -(uint)(fVar49 < 0.0);
          fVar39 = gen_bits2f(~uVar23 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar23 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar47 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar108 = gen_bits2f(~uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                               uVar28 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar107 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                               uVar31 & *(uint *)&REFG(undefined, 0x1136f6c));
          fVar43 = fVar39 * fVar43;
          fVar106 = fVar47 * fVar106;
          fVar109 = fVar108 * fVar109;
          fVar49 = fVar107 * fVar49;
          (*(float *)((char *)&auVar69 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar43 + *(float *)&REFG(undefined, 0x1136f30)) * fVar43 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar43 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar69 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar106 + *(float *)&REFG(undefined, 0x1136f34)) * fVar106 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar106 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar69 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar109 + *(float *)&REFG(undefined, 0x1136f38)) * fVar109 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar109 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar69 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar49 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar49 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar49 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar68 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar43;
          (*(float *)((char *)&auVar68 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar106;
          (*(float *)((char *)&auVar68 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar109;
          (*(float *)((char *)&auVar68 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar49;
          gen_rsqrtps(&(auVar63), &(auVar76), &(auVar68));
          fVar51 = (*(float *)((char *)&auVar63 + 0));
          fVar60 = (*(float *)((char *)&auVar63 + 4));
          fVar80 = (*(float *)((char *)&auVar63 + 8));
          fVar34 = (*(float *)((char *)&auVar63 + 12));
          (*(float *)((char *)&auVar66 + 0)) =
               (*(float *)&REFG(undefined, 0x1136eb0) - (fVar51 * (*(float *)((char *)&auVar68 + 0))) * fVar51) *
               (*(float *)&REFG(undefined, 0x1136ec0) * fVar51);
          (*(float *)((char *)&auVar66 + 4)) =
               (*(float *)&REFG(undefined, 0x1136eb4) - (fVar60 * (*(float *)((char *)&auVar68 + 4))) * fVar60) *
               (*(float *)&REFG(undefined, 0x1136ec4) * fVar60);
          (*(float *)((char *)&auVar66 + 8)) =
               (*(float *)&REFG(undefined, 0x1136eb8) - (fVar80 * (*(float *)((char *)&auVar68 + 8))) * fVar80) *
               (*(float *)&REFG(undefined, 0x1136ec8) * fVar80);
          (*(float *)((char *)&auVar66 + 12)) =
               (*(float *)&REFG(undefined, 0x1136ebc) - (fVar34 * (*(float *)((char *)&auVar68 + 12))) * fVar34) *
               (*(float *)&REFG(undefined, 0x1136ecc) * fVar34);
          gen_divps(&(auVar69), &(auVar69), &(auVar66));
          fVar51 = (*(float *)((char *)&auVar69 + 0));
          fVar60 = (*(float *)((char *)&auVar69 + 4));
          fVar80 = (*(float *)((char *)&auVar69 + 8));
          fVar34 = (*(float *)((char *)&auVar69 + 12));
          fVar87 = fVar38 * fVar51;
          fVar89 = fVar46 * fVar60;
          fVar93 = fVar55 * fVar80;
          fVar97 = fVar59 * fVar34;
          fVar38 = (*(float *)&REFG(undefined, 0x1138af0) - fVar38) * fVar51;
          fVar46 = (*(float *)&REFG(undefined, 0x1138af4) - fVar46) * fVar60;
          fVar55 = (*(float *)&REFG(undefined, 0x1138af8) - fVar55) * fVar80;
          fVar59 = (*(float *)&REFG(undefined, 0x1138afc) - fVar59) * fVar34;
          (*(float *)((char *)&auVar77 + 0)) =
               ((fVar13 * (fVar51 * fVar51) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar51 * fVar51) +
               *(float *)&REFG(undefined, 0x1138af0)) * fVar51;
          (*(float *)((char *)&auVar77 + 4)) =
               ((fVar14 * (fVar60 * fVar60) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar60 * fVar60) +
               *(float *)&REFG(undefined, 0x1138af4)) * fVar60;
          (*(float *)((char *)&auVar77 + 8)) =
               ((fVar15 * (fVar80 * fVar80) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar80 * fVar80) +
               *(float *)&REFG(undefined, 0x1138af8)) * fVar80;
          (*(float *)((char *)&auVar77 + 12)) =
               ((fVar36 * (fVar34 * fVar34) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar34 * fVar34) +
               *(float *)&REFG(undefined, 0x1138afc)) * fVar34;
          (*(float *)((char *)&auVar63 + 0)) =
               ((fVar13 * (fVar87 * fVar87) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar87 * fVar87) +
               *(float *)&REFG(undefined, 0x1138af0)) * fVar87;
          (*(float *)((char *)&auVar63 + 4)) =
               ((fVar14 * (fVar89 * fVar89) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar89 * fVar89) +
               *(float *)&REFG(undefined, 0x1138af4)) * fVar89;
          (*(float *)((char *)&auVar63 + 8)) =
               ((fVar15 * (fVar93 * fVar93) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar93 * fVar93) +
               *(float *)&REFG(undefined, 0x1138af8)) * fVar93;
          (*(float *)((char *)&auVar63 + 12)) =
               ((fVar36 * (fVar97 * fVar97) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar97 * fVar97) +
               *(float *)&REFG(undefined, 0x1138afc)) * fVar97;
          gen_divps(&(auVar69), &(auVar63), &(auVar77));
          (*(float *)((char *)&auVar67 + 0)) =
               ((fVar13 * (fVar38 * fVar38) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar38 * fVar38) +
               *(float *)&REFG(undefined, 0x1138af0)) * fVar38;
          (*(float *)((char *)&auVar67 + 4)) =
               ((fVar14 * (fVar46 * fVar46) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar46 * fVar46) +
               *(float *)&REFG(undefined, 0x1138af4)) * fVar46;
          (*(float *)((char *)&auVar67 + 8)) =
               ((fVar15 * (fVar55 * fVar55) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar55 * fVar55) +
               *(float *)&REFG(undefined, 0x1138af8)) * fVar55;
          (*(float *)((char *)&auVar67 + 12)) =
               ((fVar36 * (fVar59 * fVar59) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar59 * fVar59) +
               *(float *)&REFG(undefined, 0x1138afc)) * fVar59;
          gen_divps(&(auVar63), &(auVar67), &(auVar77));
          uVar23 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar43);
          uVar25 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar106);
          uVar28 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar109);
          uVar31 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar49);
          fVar43 = gen_bits2f(~uVar23 & (*(undefined4 *)((char *)&auVar69 + 0)) |
                              uVar23 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)));
          fVar106 = gen_bits2f(~uVar25 & (*(undefined4 *)((char *)&auVar69 + 4)) |
                               uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)));
          fVar109 = gen_bits2f(~uVar28 & (*(undefined4 *)((char *)&auVar69 + 8)) |
                               uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)));
          fVar49 = gen_bits2f(~uVar31 & (*(undefined4 *)((char *)&auVar69 + 12)) |
                              uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)));
          fVar51 = gen_bits2f(~uVar23 & (*(undefined4 *)((char *)&auVar63 + 0)) |
                              uVar23 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0)));
          fVar60 = gen_bits2f(~uVar25 & (*(undefined4 *)((char *)&auVar63 + 4)) |
                              uVar25 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4))));
          fVar80 = gen_bits2f(~uVar28 & (*(undefined4 *)((char *)&auVar63 + 8)) |
                              uVar28 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8)));
          fVar34 = gen_bits2f(~uVar31 & (*(undefined4 *)((char *)&auVar63 + 12)) |
                              uVar31 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4))));
          local_18 = local_18 + 1;
          pfVar17[-8] = fVar43 * (fVar39 * fVar58) + fVar51 * fVar40;
          pfVar17[-7] = fVar43 * (fVar39 * fVar84) + fVar51 * fVar44;
          pfVar17[-6] = fVar43 * (fVar39 * fVar42) + fVar51 * fVar48;
          pfVar17[-5] = fVar43 * (fVar39 * fVar101) + fVar51 * fVar4;
          pfVar17[-4] = fVar106 * (fVar47 * fVar78) + fVar60 * fVar7;
          pfVar17[-3] = fVar106 * (fVar47 * fVar86) + fVar60 * fVar8;
          pfVar17[-2] = fVar106 * (fVar47 * fVar52) + fVar60 * fVar9;
          pfVar17[-1] = fVar106 * (fVar47 * fVar105) + fVar60 * fVar35;
          *pfVar17 = fVar109 * (fVar108 * fVar83) + fVar80 * fVar41;
          pfVar17[1] = fVar109 * (fVar108 * fVar88) + fVar80 * fVar45;
          pfVar17[2] = fVar109 * (fVar108 * fVar57) + fVar80 * fVar50;
          pfVar17[3] = fVar109 * (fVar108 * fVar110) + fVar80 * fVar6;
          pfVar17[4] = fVar49 * (fVar107 * fVar85) + fVar34 * fVar5;
          pfVar17[5] = fVar49 * (fVar107 * fVar91) + fVar34 * fVar10;
          pfVar17[6] = fVar49 * (fVar107 * fVar56) + fVar34 * fVar11;
          pfVar17[7] = fVar49 * (fVar107 * fVar79) + fVar34 * fVar37;
          local_14 = local_14 + 0x10;
          pfVar20 = pfVar20 + 0x10;
          pfVar17 = pfVar17 + 0x10;
          local_1c = (float *)((int)local_1c - 1);
        } while (local_1c != (float *)0x0);
      }
    }
    else if (param_9 == 0) {
      fVar4 = *(float *)*param_7;
      fVar5 = *(float *)(*param_7 + 4);
      fVar10 = *(float *)(*param_7 + 8);
      fVar11 = *(float *)param_7[1];
      local_14 = ((float *)GEN_TOP(((int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2)));
      if (0 < (int)local_14) {
        pfVar17 = (float *)(param_1 + 0x30);
        pfVar20 = param_3 + 8;
        fVar37 = *(float *)&REFG(undefined, 0x1138af0) - fVar4;
        fVar41 = *(float *)&REFG(undefined, 0x1138af4) - fVar5;
        fVar45 = *(float *)&REFG(undefined, 0x1138af8) - fVar10;
        fVar50 = *(float *)&REFG(undefined, 0x1138afc) - fVar11;
        pfVar18 = param_5;
        pauVar21 = param_4;
        do {
          memcpy(&(auVar69), &(*pauVar21), sizeof(*pauVar21) < sizeof(auVar69) ? sizeof(*pauVar21) : sizeof(auVar69));
          fVar6 = (*(float *)((char *)&auVar69 + 0));
          fVar8 = (*(float *)((char *)&auVar69 + 4));
          fVar35 = (*(float *)((char *)&auVar69 + 12));
          memcpy(&(auVar63), &(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar21)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar21)))) < sizeof(auVar63) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_6 - (int)param_4) + (int)pauVar21)))) : sizeof(auVar63));
          fVar7 = (*(float *)((char *)&auVar63 + 0));
          fVar9 = (*(float *)((char *)&auVar63 + 4));
          fVar39 = (*(float *)((char *)&auVar63 + 12));
          fVar78 = (*(float *)((char *)&auVar63 + 8));
          gen_rcpps(&(auVar68), &(in_XMM4), &(auVar69));
          fVar83 = (*(float *)((char *)&auVar69 + 8));
          gen_rcpps(&(auVar69), &(auVar68), &(auVar63));
          fVar85 = gen_bits2f(~-(uint)(fVar7 < fVar6) &
                              (uint)gen_fl2bits(fVar36 - ((*(float *)&REFG(undefined, 0x1136ea0) -
                                                          fVar7 * (*(float *)((char *)&auVar69 + 0))) * (*(float *)((char *)&auVar69 + 0)))
                                                         * (fVar37 * fVar6)) |
                              -(uint)(fVar7 < fVar6) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea0) - fVar6 * (*(float *)((char *)&auVar68 + 0)))
                                                * (*(float *)((char *)&auVar68 + 0))) * (fVar4 * fVar7)));
          fVar87 = gen_bits2f(~-(uint)(fVar9 < fVar8) &
                              (uint)gen_fl2bits(fVar40 - ((*(float *)&REFG(undefined, 0x1136ea4) -
                                                          fVar9 * (*(float *)((char *)&auVar69 + 4))) * (*(float *)((char *)&auVar69 + 4)))
                                                         * (fVar41 * fVar8)) |
                              -(uint)(fVar9 < fVar8) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea4) - fVar8 * (*(float *)((char *)&auVar68 + 4)))
                                                * (*(float *)((char *)&auVar68 + 4))) * (fVar5 * fVar9)));
          fVar89 = gen_bits2f(~-(uint)(fVar78 < fVar83) &
                              (uint)gen_fl2bits(fVar44 - ((*(float *)&REFG(undefined, 0x1136ea8) -
                                                          fVar78 * (*(float *)((char *)&auVar69 + 8))) * (*(float *)((char *)&auVar69 + 8)))
                                                         * (fVar45 * fVar83)) |
                              -(uint)(fVar78 < fVar83) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ea8) - fVar83 * (*(float *)((char *)&auVar68 + 8)))
                                                * (*(float *)((char *)&auVar68 + 8))) * (fVar10 * fVar78)));
          fVar93 = gen_bits2f(~-(uint)(fVar39 < fVar35) &
                              (uint)gen_fl2bits(fVar48 - ((*(float *)&REFG(undefined, 0x1136eac) -
                                                          fVar39 * (*(float *)((char *)&auVar69 + 12))) *
                                                         (*(float *)((char *)&auVar69 + 12))) * (fVar50 * fVar35)) |
                              -(uint)(fVar39 < fVar35) &
                              (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136eac) - fVar35 * (*(float *)((char *)&auVar68 + 12))
                                                 ) * (*(float *)((char *)&auVar68 + 12))) * (fVar11 * fVar39)));
          uVar23 = -(uint)(fVar7 <= (float)REFG(undefined8, 0x1138ae0));
          uVar28 = -(uint)(fVar9 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar24 = -(uint)(fVar78 <= (float)REFG(undefined8, 0x1138ae8));
          uVar27 = -(uint)(fVar39 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar25 = -(uint)(fVar6 <= (float)REFG(undefined8, 0x1138ae0));
          uVar31 = -(uint)(fVar8 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar26 = -(uint)(fVar83 <= (float)REFG(undefined8, 0x1138ae8));
          uVar29 = -(uint)(fVar35 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          fVar92 = gen_bits2f(~(uVar23 & uVar25) &
                              (~uVar23 & (~uVar25 & (uint)gen_fl2bits(fVar85) |
                                         uVar25 & (uint)gen_fl2bits(fVar36)) |
                              uVar23 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                              uVar23 & uVar25 & (uint)gen_fl2bits(fVar4));
          fVar96 = gen_bits2f(~(uVar28 & uVar31) &
                              (~uVar28 & (~uVar31 & (uint)gen_fl2bits(fVar87) |
                                         uVar31 & (uint)gen_fl2bits(fVar40)) |
                              uVar28 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                              uVar28 & uVar31 & (uint)gen_fl2bits(fVar5));
          fVar100 = gen_bits2f(~(uVar24 & uVar26) &
                               (~uVar24 & (~uVar26 & (uint)gen_fl2bits(fVar89) |
                                          uVar26 & (uint)gen_fl2bits(fVar44)) |
                               uVar24 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                               uVar24 & uVar26 & (uint)gen_fl2bits(fVar10));
          fVar104 = gen_bits2f(~(uVar27 & uVar29) &
                               (~uVar27 & (~uVar29 & (uint)gen_fl2bits(fVar93) |
                                          uVar29 & (uint)gen_fl2bits(fVar48)) |
                               uVar27 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                               uVar27 & uVar29 & (uint)gen_fl2bits(fVar11));
          fVar43 = pfVar20[-8];
          fVar47 = pfVar20[-7];
          fVar106 = pfVar20[-6];
          fVar108 = pfVar20[-5];
          fVar109 = pfVar20[4];
          fVar107 = pfVar20[5];
          fVar49 = pfVar20[6];
          fVar51 = pfVar20[7];
          fVar60 = pfVar20[-4];
          fVar80 = pfVar20[-3];
          fVar34 = pfVar20[-2];
          fVar38 = pfVar20[-1];
          fVar42 = *pfVar20;
          fVar46 = pfVar20[1];
          fVar52 = pfVar20[2];
          fVar55 = pfVar20[3];
          fVar57 = *pfVar18;
          fVar59 = pfVar18[1];
          fVar56 = pfVar18[2];
          fVar58 = pfVar18[3];
          puVar1 = ((uint *)GEN_TOP((((int)param_2 - (int)param_4) + (int)pauVar21)));
          *puVar1 = ~uVar23 & (~uVar25 & (uint)gen_fl2bits((fVar36 - fVar85) * fVar6 +
                                                           fVar7 * fVar85) |
                              (uint)gen_fl2bits(fVar7) & uVar25) | (uint)gen_fl2bits(fVar6) & uVar23
          ;
          puVar1[1] = ~uVar28 & (~uVar31 & (uint)gen_fl2bits((fVar40 - fVar87) * fVar8 +
                                                             fVar9 * fVar87) |
                                (uint)gen_fl2bits(fVar9) & uVar31) |
                      (uint)gen_fl2bits(fVar8) & uVar28;
          puVar1[2] = ~uVar24 & (~uVar26 & (uint)gen_fl2bits((fVar44 - fVar89) * fVar83 +
                                                             fVar78 * fVar89) |
                                (uint)gen_fl2bits(fVar78) & uVar26) |
                      (uint)gen_fl2bits(fVar83) & uVar24;
          puVar1[3] = ~uVar27 & (~uVar29 & (uint)gen_fl2bits((fVar48 - fVar93) * fVar35 +
                                                             fVar39 * fVar93) |
                                (uint)gen_fl2bits(fVar39) & uVar29) |
                      (uint)gen_fl2bits(fVar35) & uVar27;
          pfVar2 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + (int)pfVar20)));
          fVar6 = *pfVar2;
          fVar7 = pfVar2[1];
          pfVar3 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar17)));
          fVar78 = *pfVar3;
          fVar83 = pfVar3[1];
          fVar8 = pfVar18[4];
          fVar9 = pfVar18[5];
          fVar35 = pfVar18[6];
          fVar39 = pfVar18[7];
          (*(undefined4 *)((char *)&auVar81 + 4)) = (undefined4)gen_fl2bits(fVar8);
          (*(undefined4 *)((char *)&auVar81 + 0)) = (undefined4)gen_fl2bits(fVar57);
          (*(undefined4 *)((char *)&auVar81 + 8)) = (undefined4)gen_fl2bits(fVar6);
          (*(undefined4 *)((char *)&auVar81 + 12)) = (undefined4)gen_fl2bits(fVar78);
          fVar87 = ((fVar59 * fVar47 + fVar57 * fVar43) + fVar56 * fVar106) + fVar58 * fVar108;
          fVar93 = ((fVar9 * fVar80 + fVar8 * fVar60) + fVar35 * fVar34) + fVar39 * fVar38;
          fVar101 = ((fVar7 * fVar46 + fVar6 * fVar42) + pfVar2[2] * fVar52) + pfVar2[3] * fVar55;
          fVar110 = ((fVar83 * fVar107 + fVar78 * fVar109) + pfVar3[2] * fVar49) +
                    pfVar3[3] * fVar51;
          uVar23 = -(uint)(fVar87 < 0.0);
          uVar25 = -(uint)(fVar93 < 0.0);
          uVar28 = -(uint)(fVar101 < 0.0);
          uVar31 = -(uint)(fVar110 < 0.0);
          fVar85 = gen_bits2f(~uVar23 & (uint)gen_fl2bits(fVar36) | uVar23 & *(uint *)&REFG(undefined, 0x1136f60))
          ;
          fVar89 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(fVar40) | uVar25 & *(uint *)&REFG(undefined, 0x1136f64))
          ;
          fVar97 = gen_bits2f(~uVar28 & (uint)gen_fl2bits(fVar44) | uVar28 & *(uint *)&REFG(undefined, 0x1136f68))
          ;
          fVar105 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(fVar48) | uVar31 & *(uint *)&REFG(undefined, 0x1136f6c)
                              );
          fVar87 = fVar85 * fVar87;
          fVar93 = fVar89 * fVar93;
          fVar101 = fVar97 * fVar101;
          fVar110 = fVar105 * fVar110;
          (*(float *)((char *)&auVar73 + 0)) = fVar36 - fVar87;
          (*(float *)((char *)&auVar73 + 4)) = fVar40 - fVar93;
          (*(float *)((char *)&auVar73 + 8)) = fVar44 - fVar101;
          (*(float *)((char *)&auVar73 + 12)) = fVar48 - fVar110;
          gen_rsqrtps(&(auVar69), &(auVar81), &(auVar73));
          fVar79 = (*(float *)((char *)&auVar69 + 0));
          fVar84 = (*(float *)((char *)&auVar69 + 4));
          fVar86 = (*(float *)((char *)&auVar69 + 8));
          fVar88 = (*(float *)((char *)&auVar69 + 12));
          (*(float *)((char *)&auVar74 + 0)) =
               (*(float *)&REFG(undefined, 0x1136eb0) - (fVar79 * (*(float *)((char *)&auVar73 + 0))) * fVar79) *
               (*(float *)&REFG(undefined, 0x1136ec0) * fVar79);
          (*(float *)((char *)&auVar74 + 4)) =
               (*(float *)&REFG(undefined, 0x1136eb4) - (fVar84 * (*(float *)((char *)&auVar73 + 4))) * fVar84) *
               (*(float *)&REFG(undefined, 0x1136ec4) * fVar84);
          (*(float *)((char *)&auVar74 + 8)) =
               (*(float *)&REFG(undefined, 0x1136eb8) - (fVar86 * (*(float *)((char *)&auVar73 + 8))) * fVar86) *
               (*(float *)&REFG(undefined, 0x1136ec8) * fVar86);
          (*(float *)((char *)&auVar74 + 12)) =
               (*(float *)&REFG(undefined, 0x1136ebc) - (fVar88 * (*(float *)((char *)&auVar73 + 12))) * fVar88) *
               (*(float *)&REFG(undefined, 0x1136ecc) * fVar88);
          (*(float *)((char *)&auVar64 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar87 + *(float *)&REFG(undefined, 0x1136f30)) * fVar87 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar87 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar64 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar93 + *(float *)&REFG(undefined, 0x1136f34)) * fVar93 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar93 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar64 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar101 + *(float *)&REFG(undefined, 0x1136f38)) * fVar101 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar101 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar64 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar110 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar110 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar110 + *(float *)&REFG(undefined, 0x1136f1c);
          gen_divps(&(auVar69), &(auVar64), &(auVar74));
          fVar79 = (*(float *)((char *)&auVar69 + 0));
          fVar84 = (*(float *)((char *)&auVar69 + 4));
          fVar86 = (*(float *)((char *)&auVar69 + 8));
          fVar88 = (*(float *)((char *)&auVar69 + 12));
          fVar91 = fVar79 * fVar92;
          fVar95 = fVar84 * fVar96;
          fVar99 = fVar86 * fVar100;
          fVar103 = fVar88 * fVar104;
          fVar92 = (fVar36 - fVar92) * fVar79;
          fVar96 = (fVar40 - fVar96) * fVar84;
          fVar100 = (fVar44 - fVar100) * fVar86;
          fVar104 = (fVar48 - fVar104) * fVar88;
          (*(float *)((char *)&auVar82 + 0)) =
               ((fVar12 * (fVar79 * fVar79) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar79 * fVar79) + fVar36)
               * fVar79;
          (*(float *)((char *)&auVar82 + 4)) =
               ((fVar13 * (fVar84 * fVar84) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar84 * fVar84) + fVar40)
               * fVar84;
          (*(float *)((char *)&auVar82 + 8)) =
               ((fVar14 * (fVar86 * fVar86) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar86 * fVar86) + fVar44)
               * fVar86;
          (*(float *)((char *)&auVar82 + 12)) =
               ((fVar15 * (fVar88 * fVar88) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar88 * fVar88) + fVar48)
               * fVar88;
          (*(float *)((char *)&auVar65 + 0)) =
               ((fVar12 * (fVar91 * fVar91) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar91 * fVar91) + fVar36)
               * fVar91;
          (*(float *)((char *)&auVar65 + 4)) =
               ((fVar13 * (fVar95 * fVar95) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar95 * fVar95) + fVar40)
               * fVar95;
          (*(float *)((char *)&auVar65 + 8)) =
               ((fVar14 * (fVar99 * fVar99) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar99 * fVar99) + fVar44)
               * fVar99;
          (*(float *)((char *)&auVar65 + 12)) =
               ((fVar15 * (fVar103 * fVar103) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar103 * fVar103) +
               fVar48) * fVar103;
          gen_divps(&(auVar69), &(auVar65), &(auVar82));
          (*(float *)((char *)&auVar75 + 0)) =
               ((fVar12 * (fVar92 * fVar92) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar92 * fVar92) + fVar36)
               * fVar92;
          (*(float *)((char *)&auVar75 + 4)) =
               ((fVar13 * (fVar96 * fVar96) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar96 * fVar96) + fVar40)
               * fVar96;
          (*(float *)((char *)&auVar75 + 8)) =
               ((fVar14 * (fVar100 * fVar100) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar100 * fVar100) +
               fVar44) * fVar100;
          (*(float *)((char *)&auVar75 + 12)) =
               ((fVar15 * (fVar104 * fVar104) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar104 * fVar104) +
               fVar48) * fVar104;
          gen_divps(&(auVar63), &(auVar75), &(auVar82));
          uVar23 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar87);
          uVar25 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar93);
          uVar28 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar101);
          uVar31 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar110);
          fVar79 = gen_bits2f(uVar23 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0)) |
                              ~uVar23 & (*(undefined4 *)((char *)&auVar63 + 0)));
          fVar84 = gen_bits2f(uVar25 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4))) |
                              ~uVar25 & (*(undefined4 *)((char *)&auVar63 + 4)));
          fVar86 = gen_bits2f(uVar28 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8)) |
                              ~uVar28 & (*(undefined4 *)((char *)&auVar63 + 8)));
          fVar88 = gen_bits2f(uVar31 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4))) |
                              ~uVar31 & (*(undefined4 *)((char *)&auVar63 + 12)));
          fVar87 = gen_bits2f(uVar23 & (uint)gen_fl2bits(fVar36) | ~uVar23 & (*(undefined4 *)((char *)&auVar69 + 0)));
          fVar93 = gen_bits2f(uVar25 & (uint)gen_fl2bits(fVar40) | ~uVar25 & (*(undefined4 *)((char *)&auVar69 + 4)));
          fVar101 = gen_bits2f(uVar28 & (uint)gen_fl2bits(fVar44) | ~uVar28 & (*(undefined4 *)((char *)&auVar69 + 8)));
          fVar110 = gen_bits2f(uVar31 & (uint)gen_fl2bits(fVar48) | ~uVar31 & (*(undefined4 *)((char *)&auVar69 + 12)));
          fVar55 = fVar101 * (fVar97 * pfVar2[3]) + fVar86 * fVar55;
          fVar51 = fVar110 * (fVar105 * pfVar3[3]) + fVar88 * fVar51;
          fVar52 = fVar101 * (fVar97 * pfVar2[2]) + fVar86 * fVar52;
          fVar49 = fVar110 * (fVar105 * pfVar3[2]) + fVar88 * fVar49;
          (*(undefined4 *)((char *)&in_XMM4 + 4)) = (undefined4)gen_fl2bits(fVar49);
          (*(undefined4 *)((char *)&in_XMM4 + 0)) = (undefined4)gen_fl2bits(fVar52);
          (*(undefined4 *)((char *)&in_XMM4 + 8)) = (undefined4)gen_fl2bits(fVar55);
          (*(undefined4 *)((char *)&in_XMM4 + 12)) = (undefined4)gen_fl2bits(fVar51);
          pfVar17[-0xc] = fVar87 * (fVar85 * fVar57) + fVar79 * fVar43;
          pfVar17[-0xb] = fVar87 * (fVar85 * fVar59) + fVar79 * fVar47;
          pfVar17[-10] = fVar87 * (fVar85 * fVar56) + fVar79 * fVar106;
          pfVar17[-9] = fVar87 * (fVar85 * fVar58) + fVar79 * fVar108;
          pfVar17[-8] = fVar93 * (fVar89 * fVar8) + fVar84 * fVar60;
          pfVar17[-7] = fVar93 * (fVar89 * fVar9) + fVar84 * fVar80;
          pfVar17[-6] = fVar93 * (fVar89 * fVar35) + fVar84 * fVar34;
          pfVar17[-5] = fVar93 * (fVar89 * fVar39) + fVar84 * fVar38;
          pfVar2 = ((float *)GEN_TOP(((param_1 - (int)param_3) + (int)pfVar20)));
          *pfVar2 = fVar101 * (fVar97 * fVar6) + fVar86 * fVar42;
          pfVar2[1] = fVar101 * (fVar97 * fVar7) + fVar86 * fVar46;
          pfVar2[2] = fVar52;
          pfVar2[3] = fVar55;
          *pfVar17 = fVar110 * (fVar105 * fVar78) + fVar88 * fVar109;
          pfVar17[1] = fVar110 * (fVar105 * fVar83) + fVar88 * fVar107;
          pfVar17[2] = fVar49;
          pfVar17[3] = fVar51;
          pfVar18 = pfVar18 + 0x10;
          pfVar20 = pfVar20 + 0x10;
          pfVar17 = pfVar17 + 0x10;
          pauVar21 = pauVar21 + 1;
          local_14 = (float *)((int)local_14 + -1);
        } while (local_14 != (float *)0x0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      fVar12 = *(float *)*param_7;
      fVar13 = *(float *)(*param_7 + 4);
      fVar14 = *(float *)(*param_7 + 8);
      fVar15 = *(float *)param_7[1];
      local_1c = ((float *)GEN_TOP(((int)((param_8 + 3 >> 0x1f & 3U) + param_8 + 3) >> 2)));
      if (0 < (int)local_1c) {
        pauVar21 = param_4;
        puVar22 = param_2;
        for (iVar19 = ((uint)local_1c & 0xfffffff) * 4; fVar48 = *(float *)&REFG(undefined, 0x1136efc),
            fVar44 = *(float *)&REFG(undefined, 0x1136ef8), fVar40 = *(float *)&REFG(undefined, 0x1136ef4),
            fVar36 = *(float *)&REFG(undefined, 0x1136ef0), iVar19 != 0; iVar19 = iVar19 + -1) {
          *puVar22 = *(undefined4 *)*pauVar21;
          pauVar21 = (gen_v16 *)(*pauVar21 + 4);
          puVar22 = puVar22 + 1;
        }
        local_14 = param_5;
        local_18 = param_6;
        pfVar20 = param_3 + 0xc;
        pfVar17 = (float *)(param_1 + 0x20);
        do {
          fVar85 = *(float *)*local_18 * fVar12;
          fVar87 = *(float *)(*local_18 + 4) * fVar13;
          fVar89 = *(float *)(*local_18 + 8) * fVar14;
          fVar93 = *(float *)(*local_18 + 0xc) * fVar15;
          fVar4 = pfVar20[-0xc];
          fVar5 = pfVar20[-0xb];
          fVar10 = pfVar20[-10];
          fVar11 = pfVar20[-9];
          fVar37 = pfVar20[-8];
          fVar41 = pfVar20[-7];
          fVar45 = pfVar20[-6];
          fVar50 = pfVar20[-5];
          pfVar18 = ((float *)GEN_TOP((((int)param_3 - param_1) + (int)pfVar17)));
          fVar6 = *pfVar18;
          fVar7 = pfVar18[1];
          fVar8 = pfVar18[2];
          fVar9 = pfVar18[3];
          fVar35 = *pfVar20;
          fVar39 = pfVar20[1];
          fVar43 = pfVar20[2];
          fVar47 = pfVar20[3];
          pfVar18 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + -0x20 + (int)pfVar20)));
          fVar106 = *pfVar18;
          fVar108 = pfVar18[1];
          fVar109 = pfVar18[2];
          fVar107 = pfVar18[3];
          pfVar18 = ((float *)GEN_TOP((((int)param_5 - (int)param_3) + (int)pfVar20)));
          fVar49 = *pfVar18;
          fVar51 = pfVar18[1];
          fVar60 = pfVar18[2];
          fVar80 = pfVar18[3];
          pfVar18 = ((float *)GEN_TOP((((int)param_5 - param_1) + (int)pfVar17)));
          fVar34 = *pfVar18;
          fVar38 = pfVar18[1];
          fVar42 = pfVar18[2];
          fVar46 = pfVar18[3];
          fVar52 = *local_14;
          fVar55 = local_14[1];
          fVar57 = local_14[2];
          fVar59 = local_14[3];
          fVar79 = ((fVar59 * fVar11 - fVar52 * fVar4) - fVar55 * fVar5) - fVar57 * fVar10;
          fVar84 = ((fVar107 * fVar50 - fVar106 * fVar37) - fVar108 * fVar41) - fVar109 * fVar45;
          fVar86 = ((fVar46 * fVar9 - fVar34 * fVar6) - fVar38 * fVar7) - fVar42 * fVar8;
          fVar88 = ((fVar80 * fVar47 - fVar49 * fVar35) - fVar51 * fVar39) - fVar60 * fVar43;
          fVar97 = ((fVar57 * fVar5 - fVar55 * fVar10) + fVar52 * fVar11) + fVar59 * fVar4;
          fVar101 = ((fVar109 * fVar41 - fVar108 * fVar45) + fVar106 * fVar50) + fVar107 * fVar37;
          fVar105 = ((fVar42 * fVar7 - fVar38 * fVar8) + fVar34 * fVar9) + fVar46 * fVar6;
          fVar110 = ((fVar60 * fVar39 - fVar51 * fVar43) + fVar49 * fVar47) + fVar80 * fVar35;
          fVar91 = ((fVar52 * fVar10 - fVar57 * fVar4) + fVar55 * fVar11) + fVar59 * fVar5;
          fVar95 = ((fVar106 * fVar45 - fVar109 * fVar37) + fVar108 * fVar50) + fVar107 * fVar41;
          fVar99 = ((fVar34 * fVar8 - fVar42 * fVar6) + fVar38 * fVar9) + fVar46 * fVar7;
          fVar103 = ((fVar49 * fVar43 - fVar60 * fVar35) + fVar51 * fVar47) + fVar80 * fVar39;
          fVar56 = *pfVar20;
          fVar58 = pfVar20[1];
          fVar78 = pfVar20[2];
          fVar83 = pfVar20[3];
          fVar52 = ((fVar55 * fVar4 - fVar52 * fVar5) + fVar57 * fVar11) + fVar59 * fVar10;
          fVar106 = ((fVar108 * fVar37 - fVar106 * fVar41) + fVar109 * fVar50) + fVar107 * fVar45;
          fVar108 = ((fVar38 * fVar6 - fVar34 * fVar7) + fVar42 * fVar9) + fVar46 * fVar8;
          fVar49 = ((fVar51 * fVar35 - fVar49 * fVar39) + fVar60 * fVar47) + fVar80 * fVar43;
          fVar37 = pfVar20[-8];
          fVar41 = pfVar20[-7];
          fVar45 = pfVar20[-6];
          fVar50 = pfVar20[-5];
          fVar39 = ((fVar91 * fVar5 + fVar97 * fVar4) + fVar52 * fVar10) + fVar79 * fVar11;
          fVar47 = ((fVar95 * fVar41 + fVar101 * fVar37) + fVar106 * fVar45) + fVar84 * fVar50;
          fVar107 = ((fVar99 * fVar7 + fVar105 * fVar6) + fVar108 * fVar8) + fVar86 * fVar9;
          fVar60 = ((fVar103 * fVar58 + fVar110 * fVar56) + fVar49 * fVar78) + fVar88 * fVar83;
          uVar23 = -(uint)(fVar39 < 0.0);
          uVar25 = -(uint)(fVar47 < 0.0);
          uVar28 = -(uint)(fVar107 < 0.0);
          uVar31 = -(uint)(fVar60 < 0.0);
          fVar35 = gen_bits2f(~uVar23 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar23 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar43 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar109 = gen_bits2f(~uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                               uVar28 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar51 = gen_bits2f(~uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar31 & *(uint *)&REFG(undefined, 0x1136f6c));
          (*(float *)((char *)&auVar61 + 0)) = fVar35 * fVar79;
          (*(float *)((char *)&auVar61 + 4)) = fVar43 * fVar84;
          (*(float *)((char *)&auVar61 + 8)) = fVar109 * fVar86;
          (*(float *)((char *)&auVar61 + 12)) = fVar51 * fVar88;
          fVar39 = fVar35 * fVar39;
          fVar47 = fVar43 * fVar47;
          fVar107 = fVar109 * fVar107;
          fVar60 = fVar51 * fVar60;
          (*(float *)((char *)&auVar53 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar39 + *(float *)&REFG(undefined, 0x1136f30)) * fVar39 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar39 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar53 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar47 + *(float *)&REFG(undefined, 0x1136f34)) * fVar47 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar47 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar53 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar107 + *(float *)&REFG(undefined, 0x1136f38)) * fVar107 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar107 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar53 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar60 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar60 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar60 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar70 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar39;
          (*(float *)((char *)&auVar70 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar47;
          (*(float *)((char *)&auVar70 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar107;
          (*(float *)((char *)&auVar70 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar60;
          gen_rsqrtps(&(auVar69), &(auVar61), &(auVar70));
          fVar80 = (*(float *)((char *)&auVar69 + 0));
          fVar34 = (*(float *)((char *)&auVar69 + 4));
          fVar38 = (*(float *)((char *)&auVar69 + 8));
          fVar42 = (*(float *)((char *)&auVar69 + 12));
          (*(float *)((char *)&auVar71 + 0)) =
               (*(float *)&REFG(undefined, 0x1136eb0) - (fVar80 * (*(float *)((char *)&auVar70 + 0))) * fVar80) *
               (fVar80 * *(float *)&REFG(undefined, 0x1136ec0));
          (*(float *)((char *)&auVar71 + 4)) =
               (*(float *)&REFG(undefined, 0x1136eb4) - (fVar34 * (*(float *)((char *)&auVar70 + 4))) * fVar34) *
               (fVar34 * *(float *)&REFG(undefined, 0x1136ec4));
          (*(float *)((char *)&auVar71 + 8)) =
               (*(float *)&REFG(undefined, 0x1136eb8) - (fVar38 * (*(float *)((char *)&auVar70 + 8))) * fVar38) *
               (fVar38 * *(float *)&REFG(undefined, 0x1136ec8));
          (*(float *)((char *)&auVar71 + 12)) =
               (*(float *)&REFG(undefined, 0x1136ebc) - (fVar42 * (*(float *)((char *)&auVar70 + 12))) * fVar42) *
               (fVar42 * *(float *)&REFG(undefined, 0x1136ecc));
          gen_divps(&(auVar69), &(auVar53), &(auVar71));
          fVar80 = (*(float *)((char *)&auVar69 + 0));
          fVar34 = (*(float *)((char *)&auVar69 + 4));
          fVar38 = (*(float *)((char *)&auVar69 + 8));
          fVar42 = (*(float *)((char *)&auVar69 + 12));
          fVar46 = fVar80 * fVar85;
          fVar55 = fVar34 * fVar87;
          fVar57 = fVar38 * fVar89;
          fVar59 = fVar42 * fVar93;
          (*(float *)((char *)&auVar72 + 0)) =
               ((fVar36 * (fVar80 * fVar80) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar80 * fVar80) +
               *(float *)&REFG(undefined, 0x1138af0)) * fVar80;
          (*(float *)((char *)&auVar72 + 4)) =
               ((fVar40 * (fVar34 * fVar34) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar34 * fVar34) +
               *(float *)&REFG(undefined, 0x1138af4)) * fVar34;
          (*(float *)((char *)&auVar72 + 8)) =
               ((fVar44 * (fVar38 * fVar38) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar38 * fVar38) +
               *(float *)&REFG(undefined, 0x1138af8)) * fVar38;
          (*(float *)((char *)&auVar72 + 12)) =
               ((fVar48 * (fVar42 * fVar42) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar42 * fVar42) +
               *(float *)&REFG(undefined, 0x1138afc)) * fVar42;
          fVar80 = (*(float *)&REFG(undefined, 0x1138af0) - fVar85) * fVar80;
          fVar34 = (*(float *)&REFG(undefined, 0x1138af4) - fVar87) * fVar34;
          fVar38 = (*(float *)&REFG(undefined, 0x1138af8) - fVar89) * fVar38;
          fVar42 = (*(float *)&REFG(undefined, 0x1138afc) - fVar93) * fVar42;
          (*(float *)((char *)&auVar54 + 0)) =
               ((fVar36 * (fVar46 * fVar46) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar46 * fVar46) +
               *(float *)&REFG(undefined, 0x1138af0)) * fVar46;
          (*(float *)((char *)&auVar54 + 4)) =
               ((fVar40 * (fVar55 * fVar55) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar55 * fVar55) +
               *(float *)&REFG(undefined, 0x1138af4)) * fVar55;
          (*(float *)((char *)&auVar54 + 8)) =
               ((fVar44 * (fVar57 * fVar57) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar57 * fVar57) +
               *(float *)&REFG(undefined, 0x1138af8)) * fVar57;
          (*(float *)((char *)&auVar54 + 12)) =
               ((fVar48 * (fVar59 * fVar59) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar59 * fVar59) +
               *(float *)&REFG(undefined, 0x1138afc)) * fVar59;
          gen_divps(&(auVar69), &(auVar54), &(auVar72));
          (*(float *)((char *)&auVar62 + 0)) =
               ((fVar36 * (fVar80 * fVar80) + *(float *)&REFG(undefined, 0x1136ee0)) * (fVar80 * fVar80) +
               *(float *)&REFG(undefined, 0x1138af0)) * fVar80;
          (*(float *)((char *)&auVar62 + 4)) =
               ((fVar40 * (fVar34 * fVar34) + *(float *)&REFG(undefined, 0x1136ee4)) * (fVar34 * fVar34) +
               *(float *)&REFG(undefined, 0x1138af4)) * fVar34;
          (*(float *)((char *)&auVar62 + 8)) =
               ((fVar44 * (fVar38 * fVar38) + *(float *)&REFG(undefined, 0x1136ee8)) * (fVar38 * fVar38) +
               *(float *)&REFG(undefined, 0x1138af8)) * fVar38;
          (*(float *)((char *)&auVar62 + 12)) =
               ((fVar48 * (fVar42 * fVar42) + *(float *)&REFG(undefined, 0x1136eec)) * (fVar42 * fVar42) +
               *(float *)&REFG(undefined, 0x1138afc)) * fVar42;
          gen_divps(&(auVar63), &(auVar62), &(auVar72));
          uVar23 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar39);
          uVar25 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar47);
          uVar28 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar107);
          uVar31 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar60);
          fVar80 = gen_bits2f(uVar23 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              ~uVar23 & (*(undefined4 *)((char *)&auVar69 + 0)));
          fVar34 = gen_bits2f(uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              ~uVar25 & (*(undefined4 *)((char *)&auVar69 + 4)));
          fVar38 = gen_bits2f(uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              ~uVar28 & (*(undefined4 *)((char *)&auVar69 + 8)));
          fVar42 = gen_bits2f(uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              ~uVar31 & (*(undefined4 *)((char *)&auVar69 + 12)));
          fVar39 = gen_bits2f(uVar23 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0)) |
                              ~uVar23 & (*(undefined4 *)((char *)&auVar63 + 0)));
          fVar47 = gen_bits2f(uVar25 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4))) |
                              ~uVar25 & (*(undefined4 *)((char *)&auVar63 + 4)));
          fVar107 = gen_bits2f(uVar28 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8)) |
                               ~uVar28 & (*(undefined4 *)((char *)&auVar63 + 8)));
          fVar60 = gen_bits2f(uVar31 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4))) |
                              ~uVar31 & (*(undefined4 *)((char *)&auVar63 + 12)));
          local_18 = local_18 + 1;
          pfVar17[-8] = fVar39 * fVar4 + fVar80 * (fVar35 * fVar97);
          pfVar17[-7] = fVar39 * fVar5 + fVar80 * (fVar35 * fVar91);
          pfVar17[-6] = fVar39 * fVar10 + fVar80 * (fVar35 * fVar52);
          pfVar17[-5] = fVar39 * fVar11 + fVar80 * (*(float *)((char *)&auVar61 + 0));
          pfVar17[-4] = fVar47 * fVar37 + fVar34 * (fVar43 * fVar101);
          pfVar17[-3] = fVar47 * fVar41 + fVar34 * (fVar43 * fVar95);
          pfVar17[-2] = fVar47 * fVar45 + fVar34 * (fVar43 * fVar106);
          pfVar17[-1] = fVar47 * fVar50 + fVar34 * (*(float *)((char *)&auVar61 + 4));
          *pfVar17 = fVar107 * fVar6 + fVar38 * (fVar109 * fVar105);
          pfVar17[1] = fVar107 * fVar7 + fVar38 * (fVar109 * fVar99);
          pfVar17[2] = fVar107 * fVar8 + fVar38 * (fVar109 * fVar108);
          pfVar17[3] = fVar107 * fVar9 + fVar38 * (*(float *)((char *)&auVar61 + 8));
          pfVar17[4] = fVar60 * fVar56 + fVar42 * (fVar51 * fVar110);
          pfVar17[5] = fVar60 * fVar58 + fVar42 * (fVar51 * fVar103);
          pfVar17[6] = fVar60 * fVar78 + fVar42 * (fVar51 * fVar49);
          pfVar17[7] = fVar60 * fVar83 + fVar42 * (*(float *)((char *)&auVar61 + 12));
          local_14 = local_14 + 0x10;
          pfVar20 = pfVar20 + 0x10;
          pfVar17 = pfVar17 + 0x10;
          local_1c = (float *)((int)local_1c - 1);
        } while (local_1c != (float *)0x0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d613d0 */
unsigned int F_00d613d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd613d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  gen_v16 * param_6 = (gen_v16 *)(uintptr_t)gen_a5;
  gen_v16 * param_7 = (gen_v16 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  uint * puVar2;
  float * pfVar3;
  gen_v12 * pauVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined4 * puVar18;
  float * pfVar19;
  gen_v16 * pauVar20;
  gen_v12 * pauVar21;
  float * pfVar22;
  float * pfVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar69 [16];
  float fVar111;
  float fVar112;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar124;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar134;
  float fVar135;
  float fVar140;
  float fVar141;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar142;
  float fVar147;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  undefined1 in_XMM6 [16] = {0};
  float fVar159;
  undefined1 auVar152 [16];
  float fVar160;
  float fVar161;
  undefined1 auVar162 [16];
  float local_880;
  float fStack_87c;
  float fStack_878;
  float fStack_874;
  float local_7f0;
  float fStack_7ec;
  float fStack_7e8;
  float fStack_7e4;
  float local_7c0;
  float fStack_7bc;
  float fStack_7b8;
  float fStack_7b4;
  float local_730;
  float fStack_72c;
  float fStack_728;
  float fStack_724;
  float local_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3a0;
  float fStack_39c;
  float local_380;
  float fStack_37c;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float local_2e0;
  float fStack_2dc;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float local_240;
  float fStack_23c;
  float local_220;
  float fStack_21c;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float local_200;
  float fStack_1fc;
  float local_1a0;
  float fStack_19c;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float local_50;
  float fStack_4c;
  int local_14;
  
  fVar124 = *(float *)&REFG(undefined, 0x1136edc);
  fVar88 = *(float *)&REFG(undefined, 0x1136ed8);
  fVar51 = *(float *)&REFG(undefined, 0x1136ed4);
  fVar41 = *(float *)&REFG(undefined, 0x1136ed0);
  fVar38 = *(float *)&REFG(undefined, 0x1136ecc);
  fVar35 = *(float *)&REFG(undefined, 0x1136ec8);
  fVar6 = *(float *)&REFG(undefined, 0x1136ec4);
  fVar5 = *(float *)&REFG(undefined, 0x1136ec0);
  fVar40 = *(float *)&REFG(undefined, 0x1136ebc);
  fVar37 = *(float *)&REFG(undefined, 0x1136eb8);
  fVar34 = *(float *)&REFG(undefined, 0x1136eb4);
  fVar32 = *(float *)&REFG(undefined, 0x1136eb0);
  fVar10 = *(float *)&REFG(undefined, 0x1136eac);
  fVar9 = *(float *)&REFG(undefined, 0x1136ea8);
  fVar8 = *(float *)&REFG(undefined, 0x1136ea4);
  fVar7 = *(float *)&REFG(undefined, 0x1136ea0);
  if (param_2 == (undefined4 *)0x0) {
    F_00d5c7e0(param_1,param_3,param_5,param_7,param_8,param_9,param_10);
    return 0;
  }
  if (param_10 == 0) {
    if (param_9 == -1) {
      fVar7 = *(float *)*param_7;
      fVar8 = *(float *)(*param_7 + 4);
      fVar9 = *(float *)(*param_7 + 8);
      fVar10 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar19 = (float *)(param_1 + 0xa0);
        pfVar22 = (float *)(param_5 + 0x70);
        pauVar20 = (gen_v16 *)(param_3 + 0x50);
        puVar18 = param_4;
        do {
          pfVar23 = ((float *)GEN_TOP((((int)param_6 - (int)param_4) + (int)puVar18)));
          fVar32 = *pfVar23;
          fVar34 = pfVar23[1];
          fVar37 = pfVar23[2];
          fVar40 = pfVar23[3];
          uVar11 = puVar18[1];
          uVar12 = puVar18[2];
          uVar13 = puVar18[3];
          puVar1 = ((undefined4 *)GEN_TOP((((int)param_2 - (int)param_4) + (int)puVar18)));
          *puVar1 = *puVar18;
          puVar1[1] = uVar11;
          puVar1[2] = uVar12;
          puVar1[3] = uVar13;
          fVar5 = *(float *)pauVar20[-4];
          fVar6 = *(float *)(pauVar20[-4] + 4);
          fVar35 = *(float *)(pauVar20[-4] + 8);
          fVar38 = *(float *)(pauVar20[-4] + 0xc);
          fVar33 = *(float *)pauVar20[-1];
          fVar36 = *(float *)(pauVar20[-1] + 4);
          fVar39 = *(float *)(pauVar20[-1] + 8);
          fVar62 = *(float *)(pauVar20[-1] + 0xc);
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pfVar22)));
          fVar77 = *pfVar23;
          fVar90 = pfVar23[1];
          fVar106 = pfVar23[2];
          fVar63 = pfVar23[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar19)));
          fVar64 = *pfVar23;
          fVar65 = pfVar23[1];
          fVar66 = pfVar23[2];
          fVar67 = pfVar23[3];
          fVar79 = pfVar22[0xc];
          fVar80 = pfVar22[0xd];
          fVar105 = pfVar22[0xe];
          fVar92 = pfVar22[-0x18];
          fVar93 = pfVar22[-0x17];
          fVar68 = pfVar22[-0x16];
          fVar94 = *pfVar22;
          fVar108 = pfVar22[1];
          fVar109 = pfVar22[2];
          fVar44 = pfVar22[-0xc];
          fVar47 = pfVar22[-0xb];
          fVar98 = pfVar22[-10];
          fVar56 = gen_bits2f((uint)gen_fl2bits(pfVar22[-0x15]) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar78 = gen_bits2f((uint)gen_fl2bits(pfVar22[-9]) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar71 = gen_bits2f((uint)gen_fl2bits(pfVar22[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          fVar82 = gen_bits2f((uint)gen_fl2bits(pfVar22[0xf]) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          fVar32 = fVar32 * fVar7;
          fVar34 = fVar34 * fVar8;
          fVar37 = fVar37 * fVar9;
          fVar40 = fVar40 * fVar10;
          fVar135 = ((fVar56 * fVar38 - fVar92 * fVar5) - fVar93 * fVar6) - fVar68 * fVar35;
          fVar141 = ((fVar78 * fVar62 - fVar44 * fVar33) - fVar47 * fVar36) - fVar98 * fVar39;
          fVar144 = ((fVar71 * fVar63 - fVar94 * fVar77) - fVar108 * fVar90) - fVar109 * fVar106;
          fVar146 = ((fVar82 * fVar67 - fVar79 * fVar64) - fVar80 * fVar65) - fVar105 * fVar66;
          fVar83 = ((fVar68 * fVar6 - fVar93 * fVar35) + fVar92 * fVar38) + fVar56 * fVar5;
          fVar100 = ((fVar98 * fVar36 - fVar47 * fVar39) + fVar44 * fVar62) + fVar78 * fVar33;
          fVar91 = ((fVar109 * fVar90 - fVar108 * fVar106) + fVar94 * fVar63) + fVar71 * fVar77;
          fVar107 = ((fVar105 * fVar65 - fVar80 * fVar66) + fVar79 * fVar67) + fVar82 * fVar64;
          fVar55 = ((fVar93 * fVar5 - fVar92 * fVar6) + fVar68 * fVar38) + fVar56 * fVar35;
          fVar57 = ((fVar47 * fVar33 - fVar44 * fVar36) + fVar98 * fVar62) + fVar78 * fVar39;
          fVar70 = ((fVar108 * fVar77 - fVar94 * fVar90) + fVar109 * fVar63) + fVar71 * fVar106;
          fVar72 = ((fVar80 * fVar64 - fVar79 * fVar65) + fVar105 * fVar67) + fVar82 * fVar66;
          fVar149 = ((fVar92 * fVar35 - fVar68 * fVar5) + fVar93 * fVar38) + fVar56 * fVar6;
          fVar154 = ((fVar44 * fVar39 - fVar98 * fVar33) + fVar47 * fVar62) + fVar78 * fVar36;
          fVar157 = ((fVar94 * fVar106 - fVar109 * fVar77) + fVar108 * fVar63) + fVar71 * fVar90;
          fVar160 = ((fVar79 * fVar66 - fVar105 * fVar64) + fVar80 * fVar67) + fVar82 * fVar65;
          memcpy(&(auVar136), &(*(gen_v16 *)(pfVar22 + -0x1c)), sizeof(*(gen_v16 *)(pfVar22 + -0x1c)) < sizeof(auVar136) ? sizeof(*(gen_v16 *)(pfVar22 + -0x1c)) : sizeof(auVar136));
          fVar77 = pfVar22[8];
          fVar90 = pfVar22[9];
          fVar106 = pfVar22[10];
          fVar68 = pfVar22[0xb];
          fVar63 = (*(float *)((char *)&auVar136 + 0));
          fVar67 = (*(float *)((char *)&auVar136 + 4));
          fVar5 = pfVar22[-0x10];
          fVar6 = pfVar22[-0xf];
          fVar35 = pfVar22[-0xe];
          fVar38 = pfVar22[-0xd];
          fVar33 = pfVar22[-4];
          fVar36 = pfVar22[-3];
          fVar39 = pfVar22[-2];
          fVar62 = pfVar22[-1];
          local_1a0 = (*(float *)((char *)&auVar136 + 8));
          fStack_19c = (*(float *)((char *)&auVar136 + 12));
          fVar64 = fVar83 * fVar83 + fVar41;
          fVar79 = fVar100 * fVar100 + fVar51;
          fVar92 = fVar91 * fVar91 + fVar88;
          fVar108 = fVar107 * fVar107 + fVar124;
          fVar65 = fVar149 * fVar149 + fVar41;
          fVar80 = fVar154 * fVar154 + fVar51;
          fVar93 = fVar157 * fVar157 + fVar88;
          fVar109 = fVar160 * fVar160 + fVar124;
          fVar66 = fVar55 * fVar55 + fVar41;
          fVar105 = fVar57 * fVar57 + fVar51;
          fVar94 = fVar70 * fVar70 + fVar88;
          fVar44 = fVar72 * fVar72 + fVar124;
          fVar84 = ((local_1a0 * fVar149 - fVar67 * fVar55) * fVar135 +
                   (local_1a0 * fVar55 + fVar67 * fVar149) * fVar83) - (fVar66 + fVar65) * fVar63;
          fVar101 = ((fVar35 * fVar154 - fVar6 * fVar57) * fVar141 +
                    (fVar35 * fVar57 + fVar6 * fVar154) * fVar100) - (fVar105 + fVar80) * fVar5;
          fVar95 = ((fVar39 * fVar157 - fVar36 * fVar70) * fVar144 +
                   (fVar39 * fVar70 + fVar36 * fVar157) * fVar91) - (fVar94 + fVar93) * fVar33;
          fVar61 = ((fVar106 * fVar160 - fVar90 * fVar72) * fVar146 +
                   (fVar106 * fVar72 + fVar90 * fVar160) * fVar107) - (fVar44 + fVar109) * fVar77;
          fVar89 = ((fVar63 * fVar55 - local_1a0 * fVar83) * fVar135 +
                   (local_1a0 * fVar55 + fVar63 * fVar83) * fVar149) - (fVar66 + fVar64) * fVar67;
          fVar50 = ((fVar5 * fVar57 - fVar35 * fVar100) * fVar141 +
                   (fVar35 * fVar57 + fVar5 * fVar100) * fVar154) - (fVar105 + fVar79) * fVar6;
          fVar54 = ((fVar33 * fVar70 - fVar39 * fVar91) * fVar144 +
                   (fVar39 * fVar70 + fVar33 * fVar91) * fVar157) - (fVar94 + fVar92) * fVar36;
          fVar122 = ((fVar77 * fVar72 - fVar106 * fVar107) * fVar146 +
                    (fVar106 * fVar72 + fVar77 * fVar107) * fVar160) - (fVar44 + fVar108) * fVar90;
          fVar56 = ((fVar67 * fVar83 - fVar63 * fVar149) * fVar135 +
                   (fVar67 * fVar149 + fVar63 * fVar83) * fVar55) - (fVar65 + fVar64) * local_1a0;
          fVar78 = ((fVar6 * fVar100 - fVar5 * fVar154) * fVar141 +
                   (fVar6 * fVar154 + fVar5 * fVar100) * fVar57) - (fVar80 + fVar79) * fVar35;
          fVar71 = ((fVar36 * fVar91 - fVar33 * fVar157) * fVar144 +
                   (fVar36 * fVar157 + fVar33 * fVar91) * fVar70) - (fVar93 + fVar92) * fVar39;
          fVar82 = ((fVar90 * fVar107 - fVar77 * fVar160) * fVar146 +
                   (fVar90 * fVar160 + fVar77 * fVar107) * fVar72) - (fVar109 + fVar108) * fVar106;
          fVar5 = *(float *)(pauVar20[-5] + 4);
          fVar6 = *(float *)(pauVar20[-5] + 8);
          fVar35 = *(float *)(pauVar20[-5] + 0xc);
          fVar33 = *(float *)pauVar20[1];
          fVar36 = *(float *)(pauVar20[1] + 4);
          fVar39 = *(float *)(pauVar20[1] + 8);
          fVar77 = *(float *)(pauVar20[1] + 0xc);
          fVar90 = *(float *)pauVar20[-2];
          fVar106 = *(float *)(pauVar20[-2] + 4);
          fVar63 = *(float *)(pauVar20[-2] + 8);
          fVar64 = *(float *)(pauVar20[-2] + 0xc);
          fVar65 = *(float *)pauVar20[4];
          fVar66 = *(float *)(pauVar20[4] + 4);
          fVar67 = *(float *)(pauVar20[4] + 8);
          fVar79 = *(float *)(pauVar20[4] + 0xc);
          gen_divps(&(auVar162), &(pauVar20[-3]), (pfVar22 + -0x14));
          gen_divps(&(auVar136), &(*pauVar20), (pfVar22 + -8));
          gen_divps(&(auVar137), &(pauVar20[3]), (pfVar22 + 4));
          local_300 = (*(float *)((char *)&auVar136 + 0));
          fStack_2fc = (*(float *)((char *)&auVar136 + 4));
          fStack_2f8 = (*(float *)((char *)&auVar136 + 8));
          fStack_2f4 = (*(float *)((char *)&auVar136 + 12));
          gen_divps(&(auVar152), &(pauVar20[6]), (pfVar22 + 0x10));
          local_3a0 = (*(float *)((char *)&auVar137 + 0));
          fStack_39c = (*(float *)((char *)&auVar137 + 4));
          fVar94 = *(float *)(pauVar20[1] + 8);
          fVar108 = *(float *)(pauVar20[1] + 0xc);
          memcpy(&(auVar136), &(pauVar20[-5]), sizeof(pauVar20[-5]) < sizeof(auVar136) ? sizeof(pauVar20[-5]) : sizeof(auVar136));
          fVar80 = *(float *)pauVar20[-2];
          fVar105 = *(float *)(pauVar20[-2] + 4);
          fVar92 = *(float *)(pauVar20[-2] + 8);
          fVar93 = *(float *)(pauVar20[-2] + 0xc);
          fVar109 = *(float *)pauVar20[4];
          fVar44 = *(float *)(pauVar20[4] + 4);
          fVar47 = *(float *)(pauVar20[4] + 8);
          fVar98 = *(float *)(pauVar20[4] + 0xc);
          local_50 = gen_bits2f((uint)*(undefined8 *)pauVar20[1]);
          fStack_4c = gen_bits2f((uint)((ulonglong)*(undefined8 *)pauVar20[1] >> 0x20));
          local_250 = (*(float *)((char *)&auVar136 + 8));
          fStack_24c = (*(float *)((char *)&auVar136 + 12));
          fVar99 = *(float *)&REFG(undefined, 0x1138af0) - fVar32;
          fVar81 = *(float *)&REFG(undefined, 0x1138af4) - fVar34;
          fVar96 = *(float *)&REFG(undefined, 0x1138af8) - fVar37;
          fVar76 = *(float *)&REFG(undefined, 0x1138afc) - fVar40;
          pfVar19[-0x28] =
               (*(float *)pauVar20[-5] - (fVar84 + fVar84)) * fVar32 + fVar99 * (*(float *)((char *)&auVar136 + 0));
          pfVar19[-0x27] = (fVar5 - (fVar89 + fVar89)) * fVar32 + fVar99 * (*(float *)((char *)&auVar136 + 4));
          pfVar19[-0x26] = (fVar6 - (fVar56 + fVar56)) * fVar32 + fVar99 * local_250;
          pfVar19[-0x25] = (fVar35 - fStack_19c) * fVar32 + fVar99 * fStack_24c;
          pfVar19[-0x1c] = (fVar90 - (fVar101 + fVar101)) * fVar34 + fVar81 * fVar80;
          pfVar19[-0x1b] = (fVar106 - (fVar50 + fVar50)) * fVar34 + fVar81 * fVar105;
          pfVar19[-0x1a] = (fVar63 - (fVar78 + fVar78)) * fVar34 + fVar81 * fVar92;
          pfVar19[-0x19] = (fVar64 - fVar38) * fVar34 + fVar81 * fVar93;
          pfVar19[-0x10] = (fVar33 - (fVar95 + fVar95)) * fVar37 + fVar96 * local_50;
          pfVar19[-0xf] = (fVar36 - (fVar54 + fVar54)) * fVar37 + fVar96 * fStack_4c;
          pfVar19[-0xe] = (fVar39 - (fVar71 + fVar71)) * fVar37 + fVar96 * fVar94;
          pfVar19[-0xd] = (fVar77 - fVar62) * fVar37 + fVar96 * fVar108;
          pfVar19[-4] = (fVar65 - (fVar61 + fVar61)) * fVar40 + fVar76 * fVar109;
          pfVar19[-3] = (fVar66 - (fVar122 + fVar122)) * fVar40 + fVar76 * fVar44;
          pfVar19[-2] = (fVar67 - (fVar82 + fVar82)) * fVar40 + fVar76 * fVar47;
          pfVar19[-1] = (fVar79 - fVar68) * fVar40 + fVar76 * fVar98;
          fVar5 = *(float *)(pauVar20[-4] + 4);
          fVar6 = *(float *)(pauVar20[-4] + 8);
          fVar35 = *(float *)(pauVar20[-4] + 0xc);
          fVar38 = *(float *)pauVar20[-1];
          fVar33 = *(float *)(pauVar20[-1] + 4);
          fVar36 = *(float *)(pauVar20[-1] + 8);
          fVar39 = *(float *)(pauVar20[-1] + 0xc);
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pfVar22)));
          fVar62 = *pfVar23;
          fVar77 = pfVar23[1];
          fVar90 = pfVar23[2];
          fVar106 = pfVar23[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar19)));
          fVar63 = *pfVar23;
          fVar64 = pfVar23[1];
          fVar65 = pfVar23[2];
          fVar66 = pfVar23[3];
          uVar24 = -(uint)(((fVar149 * fVar5 + fVar83 * *(float *)pauVar20[-4]) + fVar55 * fVar6) +
                           fVar135 * fVar35 < 0.0);
          uVar25 = -(uint)(((fVar154 * fVar33 + fVar100 * fVar38) + fVar57 * fVar36) +
                           fVar141 * fVar39 < 0.0);
          uVar26 = -(uint)(((fVar157 * fVar77 + fVar91 * fVar62) + fVar70 * fVar90) +
                           fVar144 * fVar106 < 0.0);
          uVar29 = -(uint)(((fVar160 * fVar64 + fVar107 * fVar63) + fVar72 * fVar65) +
                           fVar146 * fVar66 < 0.0);
          fVar67 = gen_bits2f(~uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar24 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar32);
          fVar79 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar34);
          fVar80 = gen_bits2f(~uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar26 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar37);
          fVar105 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                               uVar29 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar40)
          ;
          pfVar19[-0x24] = fVar32 * fVar83 + fVar67 * *(float *)pauVar20[-4];
          pfVar19[-0x23] = fVar32 * fVar149 + fVar67 * fVar5;
          pfVar19[-0x22] = fVar32 * fVar55 + fVar67 * fVar6;
          pfVar19[-0x21] = fVar32 * fVar135 + fVar67 * fVar35;
          pfVar19[-0x18] = fVar34 * fVar100 + fVar79 * fVar38;
          pfVar19[-0x17] = fVar34 * fVar154 + fVar79 * fVar33;
          pfVar19[-0x16] = fVar34 * fVar57 + fVar79 * fVar36;
          pfVar19[-0x15] = fVar34 * fVar141 + fVar79 * fVar39;
          pfVar23 = ((float *)GEN_TOP(((int)pfVar22 + (param_1 - param_5))));
          *pfVar23 = fVar37 * fVar91 + fVar80 * fVar62;
          pfVar23[1] = fVar37 * fVar157 + fVar80 * fVar77;
          pfVar23[2] = fVar37 * fVar70 + fVar80 * fVar90;
          pfVar23[3] = fVar37 * fVar144 + fVar80 * fVar106;
          *pfVar19 = fVar40 * fVar107 + fVar105 * fVar63;
          pfVar19[1] = fVar40 * fVar160 + fVar105 * fVar64;
          pfVar19[2] = fVar40 * fVar72 + fVar105 * fVar65;
          pfVar19[3] = fVar40 * fVar146 + fVar105 * fVar66;
          fVar5 = *(float *)(pauVar20[-3] + 4);
          fVar6 = *(float *)(pauVar20[-3] + 8);
          fVar35 = *(float *)(pauVar20[-3] + 0xc);
          fVar38 = *(float *)*pauVar20;
          fVar33 = *(float *)(*pauVar20 + 4);
          fVar36 = *(float *)(*pauVar20 + 8);
          fVar39 = *(float *)(*pauVar20 + 0xc);
          fVar62 = *(float *)pauVar20[3];
          fVar77 = *(float *)(pauVar20[3] + 4);
          fVar90 = *(float *)(pauVar20[3] + 8);
          fVar106 = *(float *)(pauVar20[3] + 0xc);
          fVar63 = *(float *)pauVar20[6];
          fVar64 = *(float *)(pauVar20[6] + 4);
          fVar65 = *(float *)(pauVar20[6] + 8);
          fVar66 = *(float *)(pauVar20[6] + 0xc);
          local_7c0 = (*(float *)((char *)&auVar162 + 0));
          fStack_7bc = (*(float *)((char *)&auVar162 + 4));
          fStack_7b8 = (*(float *)((char *)&auVar162 + 8));
          fStack_7b4 = (*(float *)((char *)&auVar162 + 12));
          local_730 = (*(float *)((char *)&auVar152 + 0));
          fStack_72c = (*(float *)((char *)&auVar152 + 4));
          fStack_728 = (*(float *)((char *)&auVar152 + 8));
          fStack_724 = (*(float *)((char *)&auVar152 + 12));
          fVar67 = *(float *)&REFG(undefined, 0x1138af0) - fVar32;
          fVar79 = *(float *)&REFG(undefined, 0x1138af4) - fVar34;
          fVar80 = *(float *)&REFG(undefined, 0x1138af8) - fVar37;
          fVar105 = *(float *)&REFG(undefined, 0x1138afc) - fVar40;
          local_50 = (*(float *)((char *)&auVar137 + 8));
          fStack_4c = (*(float *)((char *)&auVar137 + 12));
          pfVar19[-0x20] = local_7c0 * fVar32 + fVar67 * *(float *)pauVar20[-3];
          pfVar19[-0x1f] = fStack_7bc * fVar32 + fVar67 * fVar5;
          pfVar19[-0x1e] = fStack_7b8 * fVar32 + fVar67 * fVar6;
          pfVar19[-0x1d] = fStack_7b4 * fVar32 + fVar67 * fVar35;
          pfVar19[-0x14] = local_300 * fVar34 + fVar79 * fVar38;
          pfVar19[-0x13] = fStack_2fc * fVar34 + fVar79 * fVar33;
          pfVar19[-0x12] = fStack_2f8 * fVar34 + fVar79 * fVar36;
          pfVar19[-0x11] = fStack_2f4 * fVar34 + fVar79 * fVar39;
          pfVar19[-8] = local_3a0 * fVar37 + fVar80 * fVar62;
          pfVar19[-7] = fStack_39c * fVar37 + fVar80 * fVar77;
          pfVar19[-6] = local_50 * fVar37 + fVar80 * fVar90;
          pfVar19[-5] = fStack_4c * fVar37 + fVar80 * fVar106;
          pfVar19[4] = local_730 * fVar40 + fVar105 * fVar63;
          pfVar19[5] = fStack_72c * fVar40 + fVar105 * fVar64;
          pfVar19[6] = fStack_728 * fVar40 + fVar105 * fVar65;
          pfVar19[7] = fStack_724 * fVar40 + fVar105 * fVar66;
          puVar18 = puVar18 + 4;
          pfVar22 = pfVar22 + 0x30;
          pauVar20 = pauVar20 + 0xc;
          pfVar19 = pfVar19 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_9 == 0) {
      memcpy(&(auVar136), &(*param_7), sizeof(*param_7) < sizeof(auVar136) ? sizeof(*param_7) : sizeof(auVar136));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar22 = (float *)(param_1 + 0x70);
        pfVar19 = (float *)(param_5 + 0x50);
        pfVar23 = (float *)(param_3 + 0xa0);
        pauVar20 = param_6;
        do {
          memcpy(&(auVar162), &(*((gen_v16 *)GEN_TOP(((int)pauVar20 + ((int)param_4 - (int)param_6))))), sizeof(*((gen_v16 *)GEN_TOP(((int)pauVar20 + ((int)param_4 - (int)param_6))))) < sizeof(auVar162) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pauVar20 + ((int)param_4 - (int)param_6))))) : sizeof(auVar162));
          fVar32 = (*(float *)((char *)&auVar162 + 0));
          fVar37 = (*(float *)((char *)&auVar162 + 4));
          fVar5 = (*(float *)((char *)&auVar162 + 12));
          memcpy(&(auVar137), &(*pauVar20), sizeof(*pauVar20) < sizeof(auVar137) ? sizeof(*pauVar20) : sizeof(auVar137));
          fVar34 = (*(float *)((char *)&auVar137 + 0));
          fVar40 = (*(float *)((char *)&auVar137 + 4));
          fVar6 = (*(float *)((char *)&auVar137 + 12));
          fVar51 = (*(float *)((char *)&auVar137 + 8));
          fVar62 = (*(float *)((char *)&auVar136 + 0));
          fVar77 = (*(float *)((char *)&auVar136 + 4));
          fVar90 = (*(float *)((char *)&auVar136 + 8));
          fVar106 = (*(float *)((char *)&auVar136 + 12));
          gen_rcpps(&(auVar152), &(in_XMM6), &(auVar162));
          fVar88 = (*(float *)((char *)&auVar162 + 8));
          gen_rcpps(&(auVar162), &(auVar136), &(auVar137));
          fVar124 = gen_bits2f(~-(uint)(fVar34 < fVar32) &
                               (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) -
                                                 ((fVar7 - fVar34 * (*(float *)((char *)&auVar162 + 0))) *
                                                 (*(float *)((char *)&auVar162 + 0))) *
                                                 (fVar32 * (*(float *)&REFG(undefined, 0x1138af0) - fVar62))) |
                               -(uint)(fVar34 < fVar32) &
                               (uint)gen_fl2bits(((fVar7 - fVar32 * (*(float *)((char *)&auVar152 + 0))) *
                                                 (*(float *)((char *)&auVar152 + 0))) * (fVar34 * fVar62)));
          fVar33 = gen_bits2f(~-(uint)(fVar40 < fVar37) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) -
                                                ((fVar8 - fVar40 * (*(float *)((char *)&auVar162 + 4))) *
                                                (*(float *)((char *)&auVar162 + 4))) *
                                                (fVar37 * (*(float *)&REFG(undefined, 0x1138af4) - fVar77))) |
                              -(uint)(fVar40 < fVar37) &
                              (uint)gen_fl2bits(((fVar8 - fVar37 * (*(float *)((char *)&auVar152 + 4))) *
                                                (*(float *)((char *)&auVar152 + 4))) * (fVar40 * fVar77)));
          fVar36 = gen_bits2f(~-(uint)(fVar51 < fVar88) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) -
                                                ((fVar9 - fVar51 * (*(float *)((char *)&auVar162 + 8))) *
                                                (*(float *)((char *)&auVar162 + 8))) *
                                                (fVar88 * (*(float *)&REFG(undefined, 0x1138af8) - fVar90))) |
                              -(uint)(fVar51 < fVar88) &
                              (uint)gen_fl2bits(((fVar9 - fVar88 * (*(float *)((char *)&auVar152 + 8))) *
                                                (*(float *)((char *)&auVar152 + 8))) * (fVar51 * fVar90)));
          fVar39 = gen_bits2f(~-(uint)(fVar6 < fVar5) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) -
                                                ((fVar10 - fVar6 * (*(float *)((char *)&auVar162 + 12))) *
                                                (*(float *)((char *)&auVar162 + 12))) *
                                                (fVar5 * (*(float *)&REFG(undefined, 0x1138afc) - fVar106))) |
                              -(uint)(fVar6 < fVar5) &
                              (uint)gen_fl2bits(((fVar10 - fVar5 * (*(float *)((char *)&auVar152 + 12))) *
                                                (*(float *)((char *)&auVar152 + 12))) * (fVar6 * fVar106)));
          fVar35 = *(float *)&REFG(undefined, 0x1138af4) - fVar33;
          fVar38 = *(float *)&REFG(undefined, 0x1138af8) - fVar36;
          fVar41 = *(float *)&REFG(undefined, 0x1138afc) - fVar39;
          uVar24 = -(uint)(fVar34 <= (float)REFG(undefined8, 0x1138ae0));
          uVar26 = -(uint)(fVar40 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar27 = -(uint)(fVar51 <= (float)REFG(undefined8, 0x1138ae8));
          uVar30 = -(uint)(fVar6 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar25 = -(uint)(fVar32 <= (float)REFG(undefined8, 0x1138ae0));
          uVar29 = -(uint)(fVar37 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar28 = -(uint)(fVar88 <= (float)REFG(undefined8, 0x1138ae8));
          uVar31 = -(uint)(fVar5 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          fVar91 = gen_bits2f(~(uVar24 & uVar25) &
                              (~uVar24 & (~uVar25 & (uint)gen_fl2bits(fVar124) |
                                         uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0))) |
                              uVar24 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                              uVar24 & uVar25 & (uint)gen_fl2bits(fVar62));
          fVar95 = gen_bits2f(~(uVar26 & uVar29) &
                              (~uVar26 & (~uVar29 & (uint)gen_fl2bits(fVar33) |
                                         uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4))) |
                              uVar26 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                              uVar26 & uVar29 & (uint)gen_fl2bits(fVar77));
          fVar96 = gen_bits2f(~(uVar27 & uVar28) &
                              (~uVar27 & (~uVar28 & (uint)gen_fl2bits(fVar36) |
                                         uVar28 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8))) |
                              uVar27 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                              uVar27 & uVar28 & (uint)gen_fl2bits(fVar90));
          fVar107 = gen_bits2f(~(uVar30 & uVar31) &
                               (~uVar30 & (~uVar31 & (uint)gen_fl2bits(fVar39) |
                                          uVar31 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc))) |
                               uVar30 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                               uVar30 & uVar31 & (uint)gen_fl2bits(fVar106));
          puVar2 = ((uint *)GEN_TOP(((int)pauVar20 + ((int)param_2 - (int)param_6))));
          *puVar2 = (uint)gen_fl2bits(fVar32) & uVar24 |
                    ~uVar24 & ((uint)gen_fl2bits(fVar34) & uVar25 |
                              ~uVar25 & (uint)gen_fl2bits(fVar34 * fVar124 +
                                                          fVar32 * (*(float *)&REFG(undefined, 0x1138af0) -
                                                                   fVar124)));
          puVar2[1] = (uint)gen_fl2bits(fVar37) & uVar26 |
                      ~uVar26 & ((uint)gen_fl2bits(fVar40) & uVar29 |
                                ~uVar29 & (uint)gen_fl2bits(fVar40 * fVar33 + fVar37 * fVar35));
          puVar2[2] = (uint)gen_fl2bits(fVar88) & uVar27 |
                      ~uVar27 & ((uint)gen_fl2bits(fVar51) & uVar28 |
                                ~uVar28 & (uint)gen_fl2bits(fVar51 * fVar36 + fVar88 * fVar38));
          puVar2[3] = (uint)gen_fl2bits(fVar5) & uVar30 |
                      ~uVar30 & ((uint)gen_fl2bits(fVar6) & uVar31 |
                                ~uVar31 & (uint)gen_fl2bits(fVar6 * fVar39 + fVar5 * fVar41));
          fVar32 = pfVar19[-0x13];
          fVar34 = pfVar19[-0x12];
          fVar37 = pfVar19[-0x11];
          fVar106 = pfVar19[-0x10];
          fVar63 = pfVar19[-0xf];
          fVar64 = pfVar19[-0xe];
          fVar65 = pfVar19[-0xd];
          fVar66 = pfVar19[-0xc];
          fVar67 = pfVar19[-0xb];
          fVar79 = pfVar19[-10];
          fVar80 = pfVar19[-9];
          fVar105 = pfVar19[-8];
          fVar92 = pfVar19[-7];
          fVar93 = pfVar19[-6];
          fVar68 = pfVar19[-5];
          fVar94 = pfVar19[-4];
          fVar108 = pfVar19[-3];
          fVar109 = pfVar19[-2];
          fVar44 = pfVar19[-1];
          fVar47 = *pfVar19;
          fVar98 = pfVar19[1];
          fVar55 = pfVar19[2];
          fVar56 = pfVar19[3];
          memcpy(&(auVar162), &(*(gen_v16 *)(pfVar19 + 4)), sizeof(*(gen_v16 *)(pfVar19 + 4)) < sizeof(auVar162) ? sizeof(*(gen_v16 *)(pfVar19 + 4)) : sizeof(auVar162));
          memcpy(&(auVar15), &(*(gen_v12 *)(pfVar19 + 8)), sizeof(*(gen_v12 *)(pfVar19 + 8)) < sizeof(auVar15) ? sizeof(*(gen_v12 *)(pfVar19 + 8)) : sizeof(auVar15));
          memcpy(&(auVar137), &(*(gen_v16 *)(pfVar19 + 8)), sizeof(*(gen_v16 *)(pfVar19 + 8)) < sizeof(auVar137) ? sizeof(*(gen_v16 *)(pfVar19 + 8)) : sizeof(auVar137));
          memcpy(&(auVar16), &(*(gen_v12 *)(pfVar19 + 0xc)), sizeof(*(gen_v12 *)(pfVar19 + 0xc)) < sizeof(auVar16) ? sizeof(*(gen_v12 *)(pfVar19 + 0xc)) : sizeof(auVar16));
          memcpy(&(auVar152), &(*(gen_v16 *)(pfVar19 + 0xc)), sizeof(*(gen_v16 *)(pfVar19 + 0xc)) < sizeof(auVar152) ? sizeof(*(gen_v16 *)(pfVar19 + 0xc)) : sizeof(auVar152));
          fVar57 = pfVar19[0x10];
          fVar78 = pfVar19[0x11];
          fVar70 = pfVar19[0x12];
          fVar71 = pfVar19[0x13];
          fVar72 = pfVar19[0x14];
          fVar82 = pfVar19[0x15];
          fVar83 = pfVar19[0x16];
          fVar84 = pfVar19[0x17];
          fVar99 = pfVar19[0x18];
          fVar100 = pfVar19[0x19];
          fVar101 = pfVar19[0x1a];
          fVar81 = pfVar19[0x1b];
          fVar40 = pfVar23[-0x27];
          fVar5 = pfVar23[-0x26];
          fVar6 = pfVar23[-0x25];
          fVar35 = pfVar23[-0x1c];
          fVar38 = pfVar23[-0x1b];
          fVar41 = pfVar23[-0x1a];
          fVar51 = pfVar23[-0x19];
          fVar88 = pfVar23[-0x10];
          fVar124 = pfVar23[-0xf];
          fVar33 = pfVar23[-0xe];
          fVar36 = pfVar23[-0xd];
          fVar39 = pfVar23[-4];
          fVar62 = pfVar23[-3];
          fVar77 = pfVar23[-2];
          fVar90 = pfVar23[-1];
          fVar61 = *(float *)&REFG(undefined, 0x1138af0) - fVar91;
          fVar76 = *(float *)&REFG(undefined, 0x1138af4) - fVar95;
          fVar89 = *(float *)&REFG(undefined, 0x1138af8) - fVar96;
          fVar50 = *(float *)&REFG(undefined, 0x1138afc) - fVar107;
          local_180 = (*(float *)((char *)&auVar162 + 8));
          fStack_17c = (*(float *)((char *)&auVar162 + 12));
          pfVar22[-0x1c] = pfVar19[-0x14] * fVar91 + fVar61 * pfVar23[-0x28];
          pfVar22[-0x1b] = fVar32 * fVar91 + fVar61 * fVar40;
          pfVar22[-0x1a] = fVar34 * fVar91 + fVar61 * fVar5;
          pfVar22[-0x19] = fVar37 * fVar91 + fVar61 * fVar6;
          pfVar22[-0x10] = fVar105 * fVar95 + fVar76 * fVar35;
          pfVar22[-0xf] = fVar92 * fVar95 + fVar76 * fVar38;
          pfVar22[-0xe] = fVar93 * fVar95 + fVar76 * fVar41;
          pfVar22[-0xd] = fVar68 * fVar95 + fVar76 * fVar51;
          pfVar22[-4] = (*(float *)((char *)&auVar162 + 0)) * fVar96 + fVar89 * fVar88;
          pfVar22[-3] = (*(float *)((char *)&auVar162 + 4)) * fVar96 + fVar89 * fVar124;
          pfVar22[-2] = local_180 * fVar96 + fVar89 * fVar33;
          pfVar22[-1] = fStack_17c * fVar96 + fVar89 * fVar36;
          pfVar22[8] = fVar57 * fVar107 + fVar50 * fVar39;
          pfVar22[9] = fVar78 * fVar107 + fVar50 * fVar62;
          pfVar22[10] = fVar70 * fVar107 + fVar50 * fVar77;
          pfVar22[0xb] = fVar71 * fVar107 + fVar50 * fVar90;
          fVar32 = pfVar23[-0x23];
          fVar34 = pfVar23[-0x22];
          fVar37 = pfVar23[-0x21];
          fVar40 = pfVar23[-0x18];
          fVar5 = pfVar23[-0x17];
          fVar6 = pfVar23[-0x16];
          fVar35 = pfVar23[-0x15];
          pfVar3 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar22)));
          fVar38 = *pfVar3;
          fVar41 = pfVar3[1];
          fVar51 = pfVar3[2];
          fVar88 = pfVar3[3];
          fVar124 = *pfVar23;
          fVar33 = pfVar23[1];
          fVar36 = pfVar23[2];
          fVar39 = pfVar23[3];
          fVar92 = (*(float *)((char *)&auVar15 + 0));
          fVar93 = (*(float *)((char *)&auVar15 + 4));
          local_180 = (*(float *)((char *)&auVar137 + 8));
          fStack_17c = (*(float *)((char *)&auVar137 + 12));
          uVar24 = -(uint)(((fVar63 * fVar32 + fVar106 * pfVar23[-0x24]) + fVar64 * fVar34) +
                           fVar65 * fVar37 < 0.0);
          uVar25 = -(uint)(((fVar108 * fVar5 + fVar94 * fVar40) + fVar109 * fVar6) + fVar44 * fVar35
                          < 0.0);
          uVar26 = -(uint)(((fVar93 * fVar41 + fVar92 * fVar38) + local_180 * fVar51) +
                           fStack_17c * fVar88 < 0.0);
          uVar29 = -(uint)(((fVar82 * fVar33 + fVar72 * fVar124) + fVar83 * fVar36) +
                           fVar84 * fVar39 < 0.0);
          fVar62 = gen_bits2f(~uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar24 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar91);
          fVar77 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar95);
          fVar90 = gen_bits2f(~uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar26 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar96);
          fVar105 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                               uVar29 & *(uint *)&REFG(undefined, 0x1136f0c)) *
                    (*(float *)&REFG(undefined, 0x1138afc) - fVar107);
          pfVar22[-0x18] = fVar106 * fVar91 + fVar62 * pfVar23[-0x24];
          pfVar22[-0x17] = fVar63 * fVar91 + fVar62 * fVar32;
          pfVar22[-0x16] = fVar64 * fVar91 + fVar62 * fVar34;
          pfVar22[-0x15] = fVar65 * fVar91 + fVar62 * fVar37;
          pfVar22[-0xc] = fVar94 * fVar95 + fVar77 * fVar40;
          pfVar22[-0xb] = fVar108 * fVar95 + fVar77 * fVar5;
          pfVar22[-10] = fVar109 * fVar95 + fVar77 * fVar6;
          pfVar22[-9] = fVar44 * fVar95 + fVar77 * fVar35;
          *pfVar22 = fVar92 * fVar96 + fVar90 * fVar38;
          pfVar22[1] = fVar93 * fVar96 + fVar90 * fVar41;
          pfVar22[2] = local_180 * fVar96 + fVar90 * fVar51;
          pfVar22[3] = fStack_17c * fVar96 + fVar90 * fVar88;
          pfVar22[0xc] = fVar72 * fVar107 + fVar105 * fVar124;
          pfVar22[0xd] = fVar82 * fVar107 + fVar105 * fVar33;
          pfVar22[0xe] = fVar83 * fVar107 + fVar105 * fVar36;
          pfVar22[0xf] = fVar84 * fVar107 + fVar105 * fVar39;
          pfVar3 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pfVar19)));
          fVar32 = *pfVar3;
          fVar34 = pfVar3[1];
          fVar37 = pfVar3[2];
          fVar40 = pfVar3[3];
          fVar5 = pfVar23[-0x1f];
          fVar6 = pfVar23[-0x1e];
          fVar35 = pfVar23[-0x1d];
          fVar38 = pfVar23[-8];
          fVar41 = pfVar23[-7];
          fVar51 = pfVar23[-6];
          fVar88 = pfVar23[-5];
          fVar124 = pfVar23[4];
          fVar33 = pfVar23[5];
          fVar36 = pfVar23[6];
          fVar39 = pfVar23[7];
          (*(undefined8 *)((char *)&in_XMM6 + 0)) = (*(undefined8 *)((char *)&auVar152 + 8));
          (*(undefined4 *)((char *)&in_XMM6 + 8)) = (undefined4)gen_fl2bits(fVar101);
          (*(undefined4 *)((char *)&in_XMM6 + 12)) = (undefined4)gen_fl2bits(fVar81);
          fVar62 = *(float *)&REFG(undefined, 0x1138af0) - fVar91;
          fVar77 = *(float *)&REFG(undefined, 0x1138af4) - fVar95;
          fVar90 = *(float *)&REFG(undefined, 0x1138af8) - fVar96;
          fVar106 = *(float *)&REFG(undefined, 0x1138afc) - fVar107;
          pfVar22[-0x14] = fVar66 * fVar91 + fVar62 * pfVar23[-0x20];
          pfVar22[-0x13] = fVar67 * fVar91 + fVar62 * fVar5;
          pfVar22[-0x12] = fVar79 * fVar91 + fVar62 * fVar6;
          pfVar22[-0x11] = fVar80 * fVar91 + fVar62 * fVar35;
          pfVar3 = ((float *)GEN_TOP(((param_1 - param_5) + (int)pfVar19)));
          *pfVar3 = fVar47 * fVar95 + fVar77 * fVar32;
          pfVar3[1] = fVar98 * fVar95 + fVar77 * fVar34;
          pfVar3[2] = fVar55 * fVar95 + fVar77 * fVar37;
          pfVar3[3] = fVar56 * fVar95 + fVar77 * fVar40;
          pfVar22[4] = (*(float *)((char *)&auVar16 + 0)) * fVar96 + fVar90 * fVar38;
          pfVar22[5] = (*(float *)((char *)&auVar16 + 4)) * fVar96 + fVar90 * fVar41;
          pfVar22[6] = (*(float *)((char *)&auVar152 + 8)) * fVar96 + fVar90 * fVar51;
          pfVar22[7] = (*(float *)((char *)&auVar152 + 12)) * fVar96 + fVar90 * fVar88;
          pfVar22[0x10] = fVar99 * fVar107 + fVar106 * fVar124;
          pfVar22[0x11] = fVar100 * fVar107 + fVar106 * fVar33;
          pfVar22[0x12] = fVar101 * fVar107 + fVar106 * fVar36;
          pfVar22[0x13] = fVar81 * fVar107 + fVar106 * fVar39;
          pfVar19 = pfVar19 + 0x30;
          pfVar23 = pfVar23 + 0x30;
          pfVar22 = pfVar22 + 0x30;
          pauVar20 = pauVar20 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      fVar7 = *(float *)*param_7;
      fVar8 = *(float *)(*param_7 + 4);
      fVar9 = *(float *)(*param_7 + 8);
      fVar10 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar22 = (float *)(param_1 + 0xa0);
        pauVar20 = (gen_v16 *)(param_5 + 0x70);
        pfVar19 = (float *)(param_3 + 0x40);
        puVar18 = param_2;
        do {
          pfVar23 = ((float *)GEN_TOP((((int)param_6 - (int)param_2) + (int)puVar18)));
          fVar32 = *pfVar23;
          fVar34 = pfVar23[1];
          fVar37 = pfVar23[2];
          fVar40 = pfVar23[3];
          puVar1 = ((undefined4 *)GEN_TOP((((int)param_4 - (int)param_2) + (int)puVar18)));
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          *puVar18 = *puVar1;
          puVar18[1] = uVar11;
          puVar18[2] = uVar12;
          puVar18[3] = uVar13;
          fVar5 = *(float *)*(gen_v12 *)(pfVar19 + -0xc);
          fVar6 = pfVar19[-0xb];
          fVar35 = pfVar19[-10];
          memcpy(&(auVar15), &(*(gen_v12 *)(pfVar19 + -0xc)), sizeof(*(gen_v12 *)(pfVar19 + -0xc)) < sizeof(auVar15) ? sizeof(*(gen_v12 *)(pfVar19 + -0xc)) : sizeof(auVar15));
          fVar38 = pfVar19[-9];
          fVar33 = *pfVar19;
          fVar36 = pfVar19[1];
          fVar39 = pfVar19[2];
          fVar62 = pfVar19[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pauVar20)));
          fVar77 = *pfVar23;
          fVar90 = pfVar23[1];
          fVar106 = pfVar23[2];
          fVar63 = pfVar23[3];
          pauVar21 = ((gen_v12 *)GEN_TOP(((param_3 - param_1) + (int)pfVar22)));
          fVar64 = *(float *)*pauVar21;
          fVar65 = *(float *)(*pauVar21 + 4);
          fVar66 = *(float *)(*pauVar21 + 8);
          memcpy(&(auVar16), &(*pauVar21), sizeof(*pauVar21) < sizeof(auVar16) ? sizeof(*pauVar21) : sizeof(auVar16));
          fVar67 = *(float *)pauVar21[1];
          fVar79 = *(float *)pauVar20[-4];
          fVar80 = *(float *)(pauVar20[-4] + 4);
          fVar105 = *(float *)(pauVar20[-4] + 8);
          fVar92 = *(float *)(pauVar20[-4] + 0xc);
          memcpy(&(auVar136), &(pauVar20[-7]), sizeof(pauVar20[-7]) < sizeof(auVar136) ? sizeof(pauVar20[-7]) : sizeof(auVar136));
          fVar109 = *(float *)pauVar20[2];
          fVar44 = *(float *)(pauVar20[2] + 4);
          fVar47 = *(float *)(pauVar20[2] + 8);
          fVar151 = *(float *)(pauVar20[2] + 0xc);
          fVar93 = *(float *)pauVar20[-1];
          fVar68 = *(float *)(pauVar20[-1] + 4);
          fVar94 = *(float *)(pauVar20[-1] + 8);
          fVar108 = *(float *)(pauVar20[-1] + 0xc);
          fVar98 = (*(float *)((char *)&auVar136 + 0));
          fVar78 = (*(float *)((char *)&auVar136 + 4));
          fVar32 = fVar32 * fVar7;
          fVar34 = fVar34 * fVar8;
          fVar37 = fVar37 * fVar9;
          fVar40 = fVar40 * fVar10;
          local_240 = (*(float *)((char *)&auVar136 + 8));
          fStack_23c = (*(float *)((char *)&auVar136 + 12));
          fVar55 = fVar5 * fVar5 + fVar41;
          fVar70 = fVar33 * fVar33 + fVar51;
          fVar82 = fVar77 * fVar77 + fVar88;
          fVar99 = fVar64 * fVar64 + fVar124;
          fVar56 = fVar6 * fVar6 + fVar41;
          fVar71 = fVar36 * fVar36 + fVar51;
          fVar83 = fVar90 * fVar90 + fVar88;
          fVar100 = fVar65 * fVar65 + fVar124;
          fVar57 = fVar35 * fVar35 + fVar41;
          fVar72 = fVar39 * fVar39 + fVar51;
          fVar84 = fVar106 * fVar106 + fVar88;
          fVar101 = fVar66 * fVar66 + fVar124;
          fVar58 = ((local_240 * fVar6 - fVar78 * fVar35) * fVar38 +
                   (local_240 * fVar35 + fVar78 * fVar6) * fVar5) - (fVar57 + fVar56) * fVar98;
          fVar73 = ((fVar105 * fVar36 - fVar80 * fVar39) * fVar62 +
                   (fVar105 * fVar39 + fVar80 * fVar36) * fVar33) - (fVar72 + fVar71) * fVar79;
          fVar85 = ((fVar94 * fVar90 - fVar68 * fVar106) * fVar63 +
                   (fVar94 * fVar106 + fVar68 * fVar90) * fVar77) - (fVar84 + fVar83) * fVar93;
          fVar102 = ((fVar47 * fVar65 - fVar44 * fVar66) * fVar67 +
                    (fVar47 * fVar66 + fVar44 * fVar65) * fVar64) - (fVar101 + fVar100) * fVar109;
          fVar111 = ((fVar98 * fVar35 - local_240 * fVar5) * fVar38 +
                    (local_240 * fVar35 + fVar98 * fVar5) * fVar6) - (fVar57 + fVar55) * fVar78;
          fVar117 = ((fVar79 * fVar39 - fVar105 * fVar33) * fVar62 +
                    (fVar105 * fVar39 + fVar79 * fVar33) * fVar36) - (fVar72 + fVar70) * fVar80;
          fVar119 = ((fVar93 * fVar106 - fVar94 * fVar77) * fVar63 +
                    (fVar94 * fVar106 + fVar93 * fVar77) * fVar90) - (fVar84 + fVar82) * fVar68;
          fVar121 = ((fVar109 * fVar66 - fVar47 * fVar64) * fVar67 +
                    (fVar47 * fVar66 + fVar109 * fVar64) * fVar65) - (fVar101 + fVar99) * fVar44;
          fVar42 = ((fVar78 * fVar5 - fVar98 * fVar6) * fVar38 +
                   (fVar78 * fVar6 + fVar98 * fVar5) * fVar35) - (fVar56 + fVar55) * local_240;
          fVar45 = ((fVar80 * fVar33 - fVar79 * fVar36) * fVar62 +
                   (fVar80 * fVar36 + fVar79 * fVar33) * fVar39) - (fVar71 + fVar70) * fVar105;
          fVar48 = ((fVar68 * fVar77 - fVar93 * fVar90) * fVar63 +
                   (fVar68 * fVar90 + fVar93 * fVar77) * fVar106) - (fVar83 + fVar82) * fVar94;
          fVar52 = ((fVar44 * fVar64 - fVar109 * fVar65) * fVar67 +
                   (fVar44 * fVar65 + fVar109 * fVar64) * fVar66) - (fVar100 + fVar99) * fVar47;
          fVar5 = pfVar19[-0xf];
          fVar6 = pfVar19[-0xe];
          fVar35 = pfVar19[-0xd];
          fVar64 = pfVar19[-4];
          fVar65 = pfVar19[-3];
          fVar66 = pfVar19[-2];
          fVar79 = pfVar19[-1];
          fVar80 = pfVar19[8];
          fVar105 = pfVar19[9];
          fVar93 = pfVar19[10];
          fVar68 = pfVar19[0xb];
          fVar94 = pfVar19[0x14];
          fVar109 = pfVar19[0x15];
          fVar44 = pfVar19[0x16];
          fVar47 = pfVar19[0x17];
          local_160 = (*(float *)((char *)&auVar16 + 0));
          fVar100 = local_160;
          fStack_15c = (*(float *)((char *)&auVar16 + 4));
          fVar101 = fStack_15c;
          fStack_158 = (*(float *)((char *)&auVar16 + 8));
          local_210 = (*(float *)((char *)&auVar15 + 0));
          fStack_20c = (*(float *)((char *)&auVar15 + 4));
          fStack_208 = (*(float *)((char *)&auVar15 + 8));
          fVar82 = *(float *)pauVar20[3];
          fVar83 = *(float *)(pauVar20[3] + 4);
          fVar84 = *(float *)(pauVar20[3] + 8);
          fVar99 = *(float *)(pauVar20[3] + 0xc);
          fVar98 = *(float *)pauVar20[-3];
          fVar55 = *(float *)(pauVar20[-3] + 4);
          fVar56 = *(float *)(pauVar20[-3] + 8);
          fVar57 = *(float *)(pauVar20[-3] + 0xc);
          memcpy(&(auVar136), &(*pauVar20), sizeof(*pauVar20) < sizeof(auVar136) ? sizeof(*pauVar20) : sizeof(auVar136));
          fVar78 = *(float *)pauVar20[-6];
          fVar70 = *(float *)(pauVar20[-6] + 4);
          fVar71 = *(float *)(pauVar20[-6] + 8);
          fVar72 = *(float *)(pauVar20[-6] + 0xc);
          fVar81 = (*(float *)((char *)&auVar136 + 4));
          fVar91 = (*(float *)((char *)&auVar136 + 0));
          local_160 = (*(float *)((char *)&auVar136 + 8));
          fStack_15c = (*(float *)((char *)&auVar136 + 12));
          fVar134 = ((fVar72 * fVar38 - fVar78 * local_210) - fVar70 * fStack_20c) -
                    fVar71 * fStack_208;
          fVar140 = ((fVar57 * fVar62 - fVar98 * fVar33) - fVar55 * fVar36) - fVar56 * fVar39;
          fVar143 = ((fStack_15c * fVar63 - fVar91 * fVar77) - fVar81 * fVar90) -
                    local_160 * fVar106;
          fVar145 = ((fVar99 * fVar67 - fVar82 * fVar100) - fVar83 * fVar101) - fVar84 * fStack_158;
          fVar59 = ((fVar71 * fStack_20c - fVar70 * fStack_208) + fVar78 * fVar38) +
                   fVar72 * local_210;
          fVar74 = ((fVar56 * fVar36 - fVar55 * fVar39) + fVar98 * fVar62) + fVar57 * fVar33;
          fVar86 = ((local_160 * fVar90 - fVar81 * fVar106) + fVar91 * fVar63) + fStack_15c * fVar77
          ;
          fVar103 = ((fVar84 * fVar101 - fVar83 * fStack_158) + fVar82 * fVar67) + fVar99 * fVar100;
          fVar43 = ((fVar70 * local_210 - fVar78 * fStack_20c) + fVar71 * fVar38) +
                   fVar72 * fStack_208;
          fVar46 = ((fVar55 * fVar33 - fVar98 * fVar36) + fVar56 * fVar62) + fVar57 * fVar39;
          fVar49 = ((fVar81 * fVar77 - fVar91 * fVar90) + local_160 * fVar63) + fStack_15c * fVar106
          ;
          fVar53 = ((fVar83 * fVar100 - fVar82 * fVar101) + fVar84 * fVar67) + fVar99 * fStack_158;
          fVar148 = ((fVar78 * fStack_208 - fVar71 * local_210) + fVar70 * fVar38) +
                    fVar72 * fStack_20c;
          fVar153 = ((fVar98 * fVar39 - fVar56 * fVar33) + fVar55 * fVar62) + fVar57 * fVar36;
          fVar156 = ((fVar91 * fVar106 - local_160 * fVar77) + fVar81 * fVar63) +
                    fStack_15c * fVar90;
          fVar159 = ((fVar82 * fStack_158 - fVar84 * fVar100) + fVar83 * fVar67) + fVar99 * fVar101;
          fVar38 = *(float *)pauVar20[1];
          fVar33 = *(float *)(pauVar20[1] + 4);
          fVar36 = *(float *)(pauVar20[1] + 8);
          fVar39 = *(float *)(pauVar20[1] + 0xc);
          fVar62 = pfVar19[0x10];
          fVar77 = pfVar19[0x11];
          fVar90 = pfVar19[0x12];
          fVar106 = pfVar19[0x13];
          fVar63 = *(float *)pauVar20[4];
          fVar67 = *(float *)(pauVar20[4] + 4);
          fVar98 = *(float *)(pauVar20[4] + 8);
          fVar55 = *(float *)(pauVar20[4] + 0xc);
          fVar56 = pfVar19[0x1c];
          fVar57 = pfVar19[0x1d];
          fVar78 = pfVar19[0x1e];
          fVar70 = pfVar19[0x1f];
          fVar71 = *(float *)pauVar20[-5];
          fVar72 = *(float *)(pauVar20[-5] + 4);
          fVar82 = *(float *)(pauVar20[-5] + 8);
          fVar83 = *(float *)(pauVar20[-5] + 0xc);
          fVar84 = pfVar19[-8];
          fVar99 = pfVar19[-7];
          fVar100 = pfVar19[-6];
          fVar101 = pfVar19[-5];
          fVar81 = *(float *)pauVar20[-2];
          fVar91 = *(float *)(pauVar20[-2] + 4);
          fVar95 = *(float *)(pauVar20[-2] + 8);
          fVar96 = *(float *)(pauVar20[-2] + 0xc);
          fVar107 = pfVar19[4];
          fVar61 = pfVar19[5];
          fVar76 = pfVar19[6];
          fVar89 = pfVar19[7];
          fVar50 = pfVar19[-0xf];
          fVar54 = pfVar19[-0xe];
          fVar122 = pfVar19[-0xd];
          fVar135 = pfVar19[-4];
          fVar141 = pfVar19[-3];
          fVar144 = pfVar19[-2];
          fVar146 = pfVar19[-1];
          fVar149 = pfVar19[8];
          fVar154 = pfVar19[9];
          fVar157 = pfVar19[10];
          fVar160 = pfVar19[0xb];
          fVar97 = pfVar19[0x14];
          fVar142 = pfVar19[0x15];
          fVar110 = pfVar19[0x16];
          fVar147 = pfVar19[0x17];
          fVar60 = *(float *)&REFG(undefined, 0x1138af0) - fVar32;
          fVar75 = *(float *)&REFG(undefined, 0x1138af4) - fVar34;
          fVar87 = *(float *)&REFG(undefined, 0x1138af8) - fVar37;
          fVar104 = *(float *)&REFG(undefined, 0x1138afc) - fVar40;
          pfVar22[-0x28] = ((fVar58 + fVar58) + pfVar19[-0x10]) * fVar32 + fVar60 * pfVar19[-0x10];
          pfVar22[-0x27] = ((fVar111 + fVar111) + fVar5) * fVar32 + fVar60 * fVar50;
          pfVar22[-0x26] = ((fVar42 + fVar42) + fVar6) * fVar32 + fVar60 * fVar54;
          pfVar22[-0x25] = (fStack_23c + fVar35) * fVar32 + fVar60 * fVar122;
          pfVar22[-0x1c] = ((fVar73 + fVar73) + fVar64) * fVar34 + fVar75 * fVar135;
          pfVar22[-0x1b] = ((fVar117 + fVar117) + fVar65) * fVar34 + fVar75 * fVar141;
          pfVar22[-0x1a] = ((fVar45 + fVar45) + fVar66) * fVar34 + fVar75 * fVar144;
          pfVar22[-0x19] = (fVar92 + fVar79) * fVar34 + fVar75 * fVar146;
          pfVar22[-0x10] = ((fVar85 + fVar85) + fVar80) * fVar37 + fVar87 * fVar149;
          pfVar22[-0xf] = ((fVar119 + fVar119) + fVar105) * fVar37 + fVar87 * fVar154;
          pfVar22[-0xe] = ((fVar48 + fVar48) + fVar93) * fVar37 + fVar87 * fVar157;
          pfVar22[-0xd] = (fVar108 + fVar68) * fVar37 + fVar87 * fVar160;
          pfVar22[-4] = ((fVar102 + fVar102) + fVar94) * fVar40 + fVar104 * fVar97;
          pfVar22[-3] = ((fVar121 + fVar121) + fVar109) * fVar40 + fVar104 * fVar142;
          pfVar22[-2] = ((fVar52 + fVar52) + fVar44) * fVar40 + fVar104 * fVar110;
          pfVar22[-1] = (fVar151 + fVar47) * fVar40 + fVar104 * fVar147;
          fVar5 = pfVar19[-0xb];
          fVar6 = pfVar19[-10];
          fVar35 = pfVar19[-9];
          fVar64 = *pfVar19;
          fVar65 = pfVar19[1];
          fVar66 = pfVar19[2];
          fVar79 = pfVar19[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pauVar20)));
          fVar80 = *pfVar23;
          fVar105 = pfVar23[1];
          fVar92 = pfVar23[2];
          fVar93 = pfVar23[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar22)));
          fVar68 = *pfVar23;
          fVar94 = pfVar23[1];
          fVar108 = pfVar23[2];
          fVar109 = pfVar23[3];
          uVar24 = -(uint)(((fVar148 * fVar5 + fVar59 * pfVar19[-0xc]) + fVar43 * fVar6) +
                           fVar134 * fVar35 < 0.0);
          uVar25 = -(uint)(((fVar153 * fVar65 + fVar74 * fVar64) + fVar46 * fVar66) +
                           fVar140 * fVar79 < 0.0);
          uVar26 = -(uint)(((fVar156 * fVar105 + fVar86 * fVar80) + fVar49 * fVar92) +
                           fVar143 * fVar93 < 0.0);
          uVar29 = -(uint)(((fVar159 * fVar94 + fVar103 * fVar68) + fVar53 * fVar108) +
                           fVar145 * fVar109 < 0.0);
          fVar44 = gen_bits2f(~uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar24 & *(uint *)&REFG(undefined, 0x1136f00)) * (*(float *)&REFG(undefined, 0x1138af0) - fVar32);
          fVar47 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f04)) * (*(float *)&REFG(undefined, 0x1138af4) - fVar34);
          fVar50 = gen_bits2f(~uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar26 & *(uint *)&REFG(undefined, 0x1136f08)) * (*(float *)&REFG(undefined, 0x1138af8) - fVar37);
          fVar54 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f0c)) * (*(float *)&REFG(undefined, 0x1138afc) - fVar40);
          pfVar22[-0x24] = fVar44 * pfVar19[-0xc] + fVar32 * fVar59;
          pfVar22[-0x23] = fVar44 * fVar5 + fVar32 * fVar148;
          pfVar22[-0x22] = fVar44 * fVar6 + fVar32 * fVar43;
          pfVar22[-0x21] = fVar44 * fVar35 + fVar32 * fVar134;
          pfVar22[-0x18] = fVar47 * fVar64 + fVar34 * fVar74;
          pfVar22[-0x17] = fVar47 * fVar65 + fVar34 * fVar153;
          pfVar22[-0x16] = fVar47 * fVar66 + fVar34 * fVar46;
          pfVar22[-0x15] = fVar47 * fVar79 + fVar34 * fVar140;
          pfVar23 = ((float *)GEN_TOP(((param_1 - param_5) + (int)pauVar20)));
          *pfVar23 = fVar50 * fVar80 + fVar37 * fVar86;
          pfVar23[1] = fVar50 * fVar105 + fVar37 * fVar156;
          pfVar23[2] = fVar50 * fVar92 + fVar37 * fVar49;
          pfVar23[3] = fVar50 * fVar93 + fVar37 * fVar143;
          *pfVar22 = fVar54 * fVar68 + fVar40 * fVar103;
          pfVar22[1] = fVar54 * fVar94 + fVar40 * fVar159;
          pfVar22[2] = fVar54 * fVar108 + fVar40 * fVar53;
          pfVar22[3] = fVar54 * fVar109 + fVar40 * fVar145;
          fVar5 = pfVar19[-7];
          fVar6 = pfVar19[-6];
          fVar35 = pfVar19[-5];
          fVar64 = pfVar19[4];
          fVar65 = pfVar19[5];
          fVar66 = pfVar19[6];
          fVar79 = pfVar19[7];
          fVar80 = pfVar19[0x10];
          fVar105 = pfVar19[0x11];
          fVar92 = pfVar19[0x12];
          fVar93 = pfVar19[0x13];
          fVar68 = pfVar19[0x1c];
          fVar94 = pfVar19[0x1d];
          fVar108 = pfVar19[0x1e];
          fVar109 = pfVar19[0x1f];
          fVar44 = *(float *)&REFG(undefined, 0x1138af0) - fVar32;
          fVar47 = *(float *)&REFG(undefined, 0x1138af4) - fVar34;
          fVar50 = *(float *)&REFG(undefined, 0x1138af8) - fVar37;
          fVar54 = *(float *)&REFG(undefined, 0x1138afc) - fVar40;
          pfVar22[-0x20] = (fVar71 * fVar84) * fVar32 + fVar44 * pfVar19[-8];
          pfVar22[-0x1f] = (fVar72 * fVar99) * fVar32 + fVar44 * fVar5;
          pfVar22[-0x1e] = (fVar82 * fVar100) * fVar32 + fVar44 * fVar6;
          pfVar22[-0x1d] = (fVar83 * fVar101) * fVar32 + fVar44 * fVar35;
          pfVar22[-0x14] = (fVar81 * fVar107) * fVar34 + fVar47 * fVar64;
          pfVar22[-0x13] = (fVar91 * fVar61) * fVar34 + fVar47 * fVar65;
          pfVar22[-0x12] = (fVar95 * fVar76) * fVar34 + fVar47 * fVar66;
          pfVar22[-0x11] = (fVar96 * fVar89) * fVar34 + fVar47 * fVar79;
          pfVar22[-8] = (fVar38 * fVar62) * fVar37 + fVar50 * fVar80;
          pfVar22[-7] = (fVar33 * fVar77) * fVar37 + fVar50 * fVar105;
          pfVar22[-6] = (fVar36 * fVar90) * fVar37 + fVar50 * fVar92;
          pfVar22[-5] = (fVar39 * fVar106) * fVar37 + fVar50 * fVar93;
          pfVar22[4] = (fVar63 * fVar56) * fVar40 + fVar54 * fVar68;
          pfVar22[5] = (fVar67 * fVar57) * fVar40 + fVar54 * fVar94;
          pfVar22[6] = (fVar98 * fVar78) * fVar40 + fVar54 * fVar108;
          pfVar22[7] = (fVar55 * fVar70) * fVar40 + fVar54 * fVar109;
          puVar18 = puVar18 + 4;
          pauVar20 = pauVar20 + 0xc;
          pfVar19 = pfVar19 + 0x30;
          pfVar22 = pfVar22 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  else if (param_10 == 1) {
    if (param_9 == -1) {
      fVar7 = *(float *)*param_7;
      fVar8 = *(float *)(*param_7 + 4);
      fVar9 = *(float *)(*param_7 + 8);
      fVar10 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar19 = (float *)(param_1 + 0xa0);
        pfVar22 = (float *)(param_5 + 0x70);
        pauVar20 = (gen_v16 *)(param_3 + 0x50);
        puVar18 = param_4;
        do {
          pfVar23 = ((float *)GEN_TOP((((int)param_6 - (int)param_4) + (int)puVar18)));
          fVar33 = *pfVar23;
          fVar36 = pfVar23[1];
          fVar39 = pfVar23[2];
          fVar62 = pfVar23[3];
          uVar11 = puVar18[1];
          uVar12 = puVar18[2];
          uVar13 = puVar18[3];
          puVar1 = ((undefined4 *)GEN_TOP((((int)param_2 - (int)param_4) + (int)puVar18)));
          *puVar1 = *puVar18;
          puVar1[1] = uVar11;
          puVar1[2] = uVar12;
          puVar1[3] = uVar13;
          fVar77 = *(float *)pauVar20[-4];
          fVar90 = *(float *)(pauVar20[-4] + 4);
          fVar106 = *(float *)(pauVar20[-4] + 8);
          fVar63 = *(float *)(pauVar20[-4] + 0xc);
          fVar64 = *(float *)pauVar20[-1];
          fVar65 = *(float *)(pauVar20[-1] + 4);
          fVar66 = *(float *)(pauVar20[-1] + 8);
          fVar67 = *(float *)(pauVar20[-1] + 0xc);
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pfVar22)));
          fVar79 = *pfVar23;
          fVar80 = pfVar23[1];
          fVar105 = pfVar23[2];
          fVar92 = pfVar23[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar19)));
          fVar93 = *pfVar23;
          fVar68 = pfVar23[1];
          fVar94 = pfVar23[2];
          fVar108 = pfVar23[3];
          fVar109 = pfVar22[0xc];
          fVar44 = pfVar22[0xd];
          fVar47 = pfVar22[0xe];
          fVar98 = pfVar22[-0x18];
          fVar55 = pfVar22[-0x17];
          fVar56 = pfVar22[-0x16];
          fVar57 = *pfVar22;
          fVar78 = pfVar22[1];
          fVar70 = pfVar22[2];
          fVar71 = pfVar22[-0xc];
          fVar72 = pfVar22[-0xb];
          fVar82 = pfVar22[-10];
          fVar84 = gen_bits2f((uint)gen_fl2bits(pfVar22[-0x15]) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar100 = gen_bits2f((uint)gen_fl2bits(pfVar22[-9]) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar81 = gen_bits2f((uint)gen_fl2bits(pfVar22[3]) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          fVar95 = gen_bits2f((uint)gen_fl2bits(pfVar22[0xf]) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          fVar33 = fVar33 * fVar7;
          fVar36 = fVar36 * fVar8;
          fVar39 = fVar39 * fVar9;
          fVar62 = fVar62 * fVar10;
          fVar97 = ((fVar84 * fVar63 - fVar98 * fVar77) - fVar55 * fVar90) - fVar56 * fVar106;
          fVar142 = ((fVar100 * fVar67 - fVar71 * fVar64) - fVar72 * fVar65) - fVar82 * fVar66;
          fVar110 = ((fVar81 * fVar92 - fVar57 * fVar79) - fVar78 * fVar80) - fVar70 * fVar105;
          fVar147 = ((fVar95 * fVar108 - fVar109 * fVar93) - fVar44 * fVar68) - fVar47 * fVar94;
          fVar96 = ((fVar56 * fVar90 - fVar55 * fVar106) + fVar98 * fVar63) + fVar84 * fVar77;
          fVar76 = ((fVar82 * fVar65 - fVar72 * fVar66) + fVar71 * fVar67) + fVar100 * fVar64;
          fVar54 = ((fVar70 * fVar80 - fVar78 * fVar105) + fVar57 * fVar92) + fVar81 * fVar79;
          fVar141 = ((fVar47 * fVar68 - fVar44 * fVar94) + fVar109 * fVar108) + fVar95 * fVar93;
          fVar83 = ((fVar55 * fVar77 - fVar98 * fVar90) + fVar56 * fVar63) + fVar84 * fVar106;
          fVar99 = ((fVar72 * fVar64 - fVar71 * fVar65) + fVar82 * fVar67) + fVar100 * fVar66;
          fVar101 = ((fVar78 * fVar79 - fVar57 * fVar80) + fVar70 * fVar92) + fVar81 * fVar105;
          fVar91 = ((fVar44 * fVar93 - fVar109 * fVar68) + fVar47 * fVar108) + fVar95 * fVar94;
          fVar151 = ((fVar98 * fVar106 - fVar56 * fVar77) + fVar55 * fVar63) + fVar84 * fVar90;
          fVar42 = ((fVar71 * fVar66 - fVar82 * fVar64) + fVar72 * fVar67) + fVar100 * fVar65;
          fVar43 = ((fVar57 * fVar105 - fVar70 * fVar79) + fVar78 * fVar92) + fVar81 * fVar80;
          fVar45 = ((fVar109 * fVar94 - fVar47 * fVar93) + fVar44 * fVar108) + fVar95 * fVar68;
          memcpy(&(auVar136), &(*(gen_v16 *)(pfVar22 + -0x1c)), sizeof(*(gen_v16 *)(pfVar22 + -0x1c)) < sizeof(auVar136) ? sizeof(*(gen_v16 *)(pfVar22 + -0x1c)) : sizeof(auVar136));
          fVar79 = pfVar22[8];
          fVar80 = pfVar22[9];
          fVar105 = pfVar22[10];
          fVar56 = pfVar22[0xb];
          fVar92 = (*(float *)((char *)&auVar136 + 0));
          fVar108 = (*(float *)((char *)&auVar136 + 4));
          fVar77 = pfVar22[-0x10];
          fVar90 = pfVar22[-0xf];
          fVar106 = pfVar22[-0xe];
          fVar63 = pfVar22[-0xd];
          fVar64 = pfVar22[-4];
          fVar65 = pfVar22[-3];
          fVar66 = pfVar22[-2];
          fVar67 = pfVar22[-1];
          local_220 = (*(float *)((char *)&auVar136 + 8));
          fStack_21c = (*(float *)((char *)&auVar136 + 12));
          fVar93 = fVar96 * fVar96 + fVar41;
          fVar109 = fVar76 * fVar76 + fVar51;
          fVar98 = fVar54 * fVar54 + fVar88;
          fVar78 = fVar141 * fVar141 + fVar124;
          fVar68 = fVar151 * fVar151 + fVar41;
          fVar44 = fVar42 * fVar42 + fVar51;
          fVar55 = fVar43 * fVar43 + fVar88;
          fVar70 = fVar45 * fVar45 + fVar124;
          fVar94 = fVar83 * fVar83 + fVar41;
          fVar47 = fVar99 * fVar99 + fVar51;
          fVar57 = fVar101 * fVar101 + fVar88;
          fVar71 = fVar91 * fVar91 + fVar124;
          fVar107 = ((local_220 * fVar151 - fVar108 * fVar83) * fVar97 +
                    (local_220 * fVar83 + fVar108 * fVar151) * fVar96) - (fVar94 + fVar68) * fVar92;
          fVar89 = ((fVar106 * fVar42 - fVar90 * fVar99) * fVar142 +
                   (fVar106 * fVar99 + fVar90 * fVar42) * fVar76) - (fVar47 + fVar44) * fVar77;
          fVar122 = ((fVar66 * fVar43 - fVar65 * fVar101) * fVar110 +
                    (fVar66 * fVar101 + fVar65 * fVar43) * fVar54) - (fVar57 + fVar55) * fVar64;
          fVar144 = ((fVar105 * fVar45 - fVar80 * fVar91) * fVar147 +
                    (fVar105 * fVar91 + fVar80 * fVar45) * fVar141) - (fVar71 + fVar70) * fVar79;
          fVar149 = ((fVar92 * fVar83 - local_220 * fVar96) * fVar97 +
                    (local_220 * fVar83 + fVar92 * fVar96) * fVar151) - (fVar94 + fVar93) * fVar108;
          fVar154 = ((fVar77 * fVar99 - fVar106 * fVar76) * fVar142 +
                    (fVar106 * fVar99 + fVar77 * fVar76) * fVar42) - (fVar47 + fVar109) * fVar90;
          fVar157 = ((fVar64 * fVar101 - fVar66 * fVar54) * fVar110 +
                    (fVar66 * fVar101 + fVar64 * fVar54) * fVar43) - (fVar57 + fVar98) * fVar65;
          fVar160 = ((fVar79 * fVar91 - fVar105 * fVar141) * fVar147 +
                    (fVar105 * fVar91 + fVar79 * fVar141) * fVar45) - (fVar71 + fVar78) * fVar80;
          fVar84 = ((fVar108 * fVar96 - fVar92 * fVar151) * fVar97 +
                   (fVar108 * fVar151 + fVar92 * fVar96) * fVar83) - (fVar68 + fVar93) * local_220;
          fVar100 = ((fVar90 * fVar76 - fVar77 * fVar42) * fVar142 +
                    (fVar90 * fVar42 + fVar77 * fVar76) * fVar99) - (fVar44 + fVar109) * fVar106;
          fVar81 = ((fVar65 * fVar54 - fVar64 * fVar43) * fVar110 +
                   (fVar65 * fVar43 + fVar64 * fVar54) * fVar101) - (fVar55 + fVar98) * fVar66;
          fVar95 = ((fVar80 * fVar141 - fVar79 * fVar45) * fVar147 +
                   (fVar80 * fVar45 + fVar79 * fVar141) * fVar91) - (fVar70 + fVar78) * fVar105;
          fVar77 = *(float *)(pauVar20[-5] + 4);
          fVar90 = *(float *)(pauVar20[-5] + 8);
          fVar106 = *(float *)(pauVar20[-5] + 0xc);
          fVar64 = *(float *)pauVar20[1];
          fVar65 = *(float *)(pauVar20[1] + 4);
          fVar66 = *(float *)(pauVar20[1] + 8);
          fVar79 = *(float *)(pauVar20[1] + 0xc);
          fVar80 = *(float *)pauVar20[-2];
          fVar105 = *(float *)(pauVar20[-2] + 4);
          fVar92 = *(float *)(pauVar20[-2] + 8);
          fVar93 = *(float *)(pauVar20[-2] + 0xc);
          fVar68 = *(float *)pauVar20[4];
          fVar94 = *(float *)(pauVar20[4] + 4);
          fVar108 = *(float *)(pauVar20[4] + 8);
          fVar109 = *(float *)(pauVar20[4] + 0xc);
          gen_divps(&(auVar162), &(pauVar20[-3]), (pfVar22 + -0x14));
          gen_divps(&(auVar136), &(*pauVar20), (pfVar22 + -8));
          gen_divps(&(auVar138), &(pauVar20[3]), (pfVar22 + 4));
          local_3d0 = (*(float *)((char *)&auVar136 + 0));
          fStack_3cc = (*(float *)((char *)&auVar136 + 4));
          fStack_3c8 = (*(float *)((char *)&auVar136 + 8));
          fStack_3c4 = (*(float *)((char *)&auVar136 + 12));
          gen_divps(&(auVar139), &(pauVar20[6]), (pfVar22 + 0x10));
          local_300 = (*(float *)((char *)&auVar138 + 0));
          fStack_2fc = (*(float *)((char *)&auVar138 + 4));
          fVar57 = *(float *)(pauVar20[1] + 8);
          fVar78 = *(float *)(pauVar20[1] + 0xc);
          memcpy(&(auVar136), &(pauVar20[-5]), sizeof(pauVar20[-5]) < sizeof(auVar136) ? sizeof(pauVar20[-5]) : sizeof(auVar136));
          fVar44 = *(float *)pauVar20[-2];
          fVar47 = *(float *)(pauVar20[-2] + 4);
          fVar98 = *(float *)(pauVar20[-2] + 8);
          fVar55 = *(float *)(pauVar20[-2] + 0xc);
          fVar70 = *(float *)pauVar20[4];
          fVar71 = *(float *)(pauVar20[4] + 4);
          fVar72 = *(float *)(pauVar20[4] + 8);
          fVar82 = *(float *)(pauVar20[4] + 0xc);
          local_200 = gen_bits2f((uint)*(undefined8 *)pauVar20[1]);
          fStack_1fc = gen_bits2f((uint)((ulonglong)*(undefined8 *)pauVar20[1] >> 0x20));
          local_380 = (*(float *)((char *)&auVar136 + 8));
          fStack_37c = (*(float *)((char *)&auVar136 + 12));
          fVar61 = *(float *)&REFG(undefined, 0x1138af0) - fVar33;
          fVar50 = *(float *)&REFG(undefined, 0x1138af4) - fVar36;
          fVar135 = *(float *)&REFG(undefined, 0x1138af8) - fVar39;
          fVar146 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-0x28] =
               (*(float *)pauVar20[-5] - (fVar107 + fVar107)) * fVar33 + fVar61 * (*(float *)((char *)&auVar136 + 0));
          pfVar19[-0x27] = (fVar77 - (fVar149 + fVar149)) * fVar33 + fVar61 * (*(float *)((char *)&auVar136 + 4));
          pfVar19[-0x26] = (fVar90 - (fVar84 + fVar84)) * fVar33 + fVar61 * local_380;
          pfVar19[-0x25] = (fVar106 - fStack_21c) * fVar33 + fVar61 * fStack_37c;
          pfVar19[-0x1c] = (fVar80 - (fVar89 + fVar89)) * fVar36 + fVar50 * fVar44;
          pfVar19[-0x1b] = (fVar105 - (fVar154 + fVar154)) * fVar36 + fVar50 * fVar47;
          pfVar19[-0x1a] = (fVar92 - (fVar100 + fVar100)) * fVar36 + fVar50 * fVar98;
          pfVar19[-0x19] = (fVar93 - fVar63) * fVar36 + fVar50 * fVar55;
          pfVar19[-0x10] = (fVar64 - (fVar122 + fVar122)) * fVar39 + fVar135 * local_200;
          pfVar19[-0xf] = (fVar65 - (fVar157 + fVar157)) * fVar39 + fVar135 * fStack_1fc;
          pfVar19[-0xe] = (fVar66 - (fVar81 + fVar81)) * fVar39 + fVar135 * fVar57;
          pfVar19[-0xd] = (fVar79 - fVar67) * fVar39 + fVar135 * fVar78;
          pfVar19[-4] = (fVar68 - (fVar144 + fVar144)) * fVar62 + fVar146 * fVar70;
          pfVar19[-3] = (fVar94 - (fVar160 + fVar160)) * fVar62 + fVar146 * fVar71;
          pfVar19[-2] = (fVar108 - (fVar95 + fVar95)) * fVar62 + fVar146 * fVar72;
          pfVar19[-1] = (fVar109 - fVar56) * fVar62 + fVar146 * fVar82;
          fVar77 = *(float *)(pauVar20[-4] + 4);
          fVar90 = *(float *)(pauVar20[-4] + 8);
          fVar106 = *(float *)(pauVar20[-4] + 0xc);
          fVar63 = *(float *)pauVar20[-1];
          fVar64 = *(float *)(pauVar20[-1] + 4);
          fVar65 = *(float *)(pauVar20[-1] + 8);
          fVar66 = *(float *)(pauVar20[-1] + 0xc);
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pfVar22)));
          fVar67 = *pfVar23;
          fVar79 = pfVar23[1];
          fVar80 = pfVar23[2];
          fVar105 = pfVar23[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar19)));
          fVar92 = *pfVar23;
          fVar93 = pfVar23[1];
          fVar68 = pfVar23[2];
          fVar94 = pfVar23[3];
          fVar109 = ((fVar151 * fVar77 + fVar96 * *(float *)pauVar20[-4]) + fVar83 * fVar90) +
                    fVar97 * fVar106;
          fVar47 = ((fVar42 * fVar64 + fVar76 * fVar63) + fVar99 * fVar65) + fVar142 * fVar66;
          fVar55 = ((fVar43 * fVar79 + fVar54 * fVar67) + fVar101 * fVar80) + fVar110 * fVar105;
          fVar57 = ((fVar45 * fVar93 + fVar141 * fVar92) + fVar91 * fVar68) + fVar147 * fVar94;
          uVar24 = -(uint)(fVar109 < 0.0);
          uVar25 = -(uint)(fVar47 < 0.0);
          uVar26 = -(uint)(fVar55 < 0.0);
          uVar29 = -(uint)(fVar57 < 0.0);
          fVar108 = gen_bits2f(~uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                               uVar24 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar44 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar98 = gen_bits2f(~uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar26 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar56 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f6c));
          (*(float *)((char *)&auVar152 + 0)) = fVar108 * fVar97;
          (*(float *)((char *)&auVar152 + 4)) = fVar44 * fVar142;
          (*(float *)((char *)&auVar152 + 8)) = fVar98 * fVar110;
          (*(float *)((char *)&auVar152 + 12)) = fVar56 * fVar147;
          fVar109 = fVar108 * fVar109;
          fVar47 = fVar44 * fVar47;
          fVar55 = fVar98 * fVar55;
          fVar57 = fVar56 * fVar57;
          (*(float *)((char *)&auVar137 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar109 + *(float *)&REFG(undefined, 0x1136f30)) * fVar109 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar109 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar137 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar47 + *(float *)&REFG(undefined, 0x1136f34)) * fVar47 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar47 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar137 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar55 + *(float *)&REFG(undefined, 0x1136f38)) * fVar55 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar55 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar137 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar57 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar57 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar57 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar131 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar109;
          (*(float *)((char *)&auVar131 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar47;
          (*(float *)((char *)&auVar131 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar55;
          (*(float *)((char *)&auVar131 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar57;
          gen_rsqrtps(&(auVar136), &(auVar152), &(auVar131));
          fVar78 = (*(float *)((char *)&auVar136 + 0));
          fVar70 = (*(float *)((char *)&auVar136 + 4));
          fVar71 = (*(float *)((char *)&auVar136 + 8));
          fVar72 = (*(float *)((char *)&auVar136 + 12));
          (*(float *)((char *)&auVar132 + 0)) = (fVar32 - (fVar78 * (*(float *)((char *)&auVar131 + 0))) * fVar78) * (fVar78 * fVar5);
          (*(float *)((char *)&auVar132 + 4)) = (fVar34 - (fVar70 * (*(float *)((char *)&auVar131 + 4))) * fVar70) * (fVar70 * fVar6);
          (*(float *)((char *)&auVar132 + 8)) = (fVar37 - (fVar71 * (*(float *)((char *)&auVar131 + 8))) * fVar71) * (fVar71 * fVar35);
          (*(float *)((char *)&auVar132 + 12)) = (fVar40 - (fVar72 * (*(float *)((char *)&auVar131 + 12))) * fVar72) * (fVar72 * fVar38);
          gen_divps(&(auVar136), &(auVar137), &(auVar132));
          fVar78 = (*(float *)((char *)&auVar136 + 0));
          fVar70 = (*(float *)((char *)&auVar136 + 12));
          fVar71 = (*(float *)((char *)&auVar136 + 4));
          fVar72 = (*(float *)((char *)&auVar136 + 8));
          fVar82 = fVar33 * fVar78;
          fVar84 = fVar36 * fVar71;
          fVar100 = fVar39 * fVar72;
          fVar81 = fVar62 * fVar70;
          fVar95 = (*(float *)&REFG(undefined, 0x1138af0) - fVar33) * fVar78;
          fVar107 = (*(float *)&REFG(undefined, 0x1138af4) - fVar36) * fVar71;
          fVar61 = (*(float *)&REFG(undefined, 0x1138af8) - fVar39) * fVar72;
          fVar89 = (*(float *)&REFG(undefined, 0x1138afc) - fVar62) * fVar70;
          (*(float *)((char *)&auVar116 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar82 * fVar82) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar82 * fVar82) + *(float *)&REFG(undefined, 0x1138af0)) * fVar82;
          (*(float *)((char *)&auVar116 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar84 * fVar84) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar84 * fVar84) + *(float *)&REFG(undefined, 0x1138af4)) * fVar84;
          (*(float *)((char *)&auVar116 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar100 * fVar100) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar100 * fVar100) + *(float *)&REFG(undefined, 0x1138af8)) * fVar100;
          (*(float *)((char *)&auVar116 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar81 * fVar81) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar81 * fVar81) + *(float *)&REFG(undefined, 0x1138afc)) * fVar81;
          (*(undefined4 *)((char *)&auVar136 + 4)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef4) * (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1136ee4))
                            * (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1138af4)) * fVar71);
          (*(undefined4 *)((char *)&auVar136 + 0)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef0) * (fVar78 * fVar78) + *(float *)&REFG(undefined, 0x1136ee0))
                            * (fVar78 * fVar78) + *(float *)&REFG(undefined, 0x1138af0)) * fVar78);
          (*(undefined4 *)((char *)&auVar136 + 8)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef8) * (fVar72 * fVar72) + *(float *)&REFG(undefined, 0x1136ee8))
                            * (fVar72 * fVar72) + *(float *)&REFG(undefined, 0x1138af8)) * fVar72);
          (*(undefined4 *)((char *)&auVar136 + 12)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136efc) * (fVar70 * fVar70) + *(float *)&REFG(undefined, 0x1136eec))
                            * (fVar70 * fVar70) + *(float *)&REFG(undefined, 0x1138afc)) * fVar70);
          gen_divps(&(auVar137), &(auVar116), &(auVar136));
          (*(float *)((char *)&auVar133 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar95 * fVar95) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar95 * fVar95) + *(float *)&REFG(undefined, 0x1138af0)) * fVar95;
          (*(float *)((char *)&auVar133 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar107 * fVar107) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar107 * fVar107) + *(float *)&REFG(undefined, 0x1138af4)) * fVar107;
          (*(float *)((char *)&auVar133 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar61 * fVar61) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar61 * fVar61) + *(float *)&REFG(undefined, 0x1138af8)) * fVar61;
          (*(float *)((char *)&auVar133 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar89 * fVar89) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar89 * fVar89) + *(float *)&REFG(undefined, 0x1138afc)) * fVar89;
          uVar24 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar109);
          uVar25 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar47);
          uVar26 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar55);
          uVar29 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar57);
          gen_divps(&(auVar136), &(auVar133), &(auVar136));
          fVar109 = gen_bits2f(~uVar24 & (*(undefined4 *)((char *)&auVar137 + 0)) |
                               uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)));
          fVar47 = gen_bits2f(~uVar25 & (*(undefined4 *)((char *)&auVar137 + 4)) |
                              uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)));
          fVar55 = gen_bits2f(~uVar26 & (*(undefined4 *)((char *)&auVar137 + 8)) |
                              uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)));
          fVar57 = gen_bits2f(~uVar29 & (*(undefined4 *)((char *)&auVar137 + 12)) |
                              uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)));
          fVar78 = gen_bits2f(~uVar24 & (*(undefined4 *)((char *)&auVar136 + 0)) |
                              uVar24 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0)));
          fVar70 = gen_bits2f(~uVar25 & (*(undefined4 *)((char *)&auVar136 + 4)) |
                              uVar25 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4))));
          fVar71 = gen_bits2f(~uVar26 & (*(undefined4 *)((char *)&auVar136 + 8)) |
                              uVar26 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8)));
          fVar72 = gen_bits2f(~uVar29 & (*(undefined4 *)((char *)&auVar136 + 12)) |
                              uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4))));
          pfVar19[-0x24] = fVar109 * (fVar108 * fVar96) + fVar78 * *(float *)pauVar20[-4];
          pfVar19[-0x23] = fVar109 * (fVar108 * fVar151) + fVar78 * fVar77;
          pfVar19[-0x22] = fVar109 * (fVar108 * fVar83) + fVar78 * fVar90;
          pfVar19[-0x21] = fVar109 * (*(float *)((char *)&auVar152 + 0)) + fVar78 * fVar106;
          pfVar19[-0x18] = fVar47 * (fVar44 * fVar76) + fVar70 * fVar63;
          pfVar19[-0x17] = fVar47 * (fVar44 * fVar42) + fVar70 * fVar64;
          pfVar19[-0x16] = fVar47 * (fVar44 * fVar99) + fVar70 * fVar65;
          pfVar19[-0x15] = fVar47 * (*(float *)((char *)&auVar152 + 4)) + fVar70 * fVar66;
          pfVar23 = ((float *)GEN_TOP(((param_1 - param_5) + (int)pfVar22)));
          *pfVar23 = fVar55 * (fVar98 * fVar54) + fVar71 * fVar67;
          pfVar23[1] = fVar55 * (fVar98 * fVar43) + fVar71 * fVar79;
          pfVar23[2] = fVar55 * (fVar98 * fVar101) + fVar71 * fVar80;
          pfVar23[3] = fVar55 * (*(float *)((char *)&auVar152 + 8)) + fVar71 * fVar105;
          *pfVar19 = fVar57 * (fVar56 * fVar141) + fVar72 * fVar92;
          pfVar19[1] = fVar57 * (fVar56 * fVar45) + fVar72 * fVar93;
          pfVar19[2] = fVar57 * (fVar56 * fVar91) + fVar72 * fVar68;
          pfVar19[3] = fVar57 * (*(float *)((char *)&auVar152 + 12)) + fVar72 * fVar94;
          fVar77 = *(float *)(pauVar20[-3] + 4);
          fVar90 = *(float *)(pauVar20[-3] + 8);
          fVar106 = *(float *)(pauVar20[-3] + 0xc);
          fVar63 = *(float *)*pauVar20;
          fVar64 = *(float *)(*pauVar20 + 4);
          fVar65 = *(float *)(*pauVar20 + 8);
          fVar66 = *(float *)(*pauVar20 + 0xc);
          fVar67 = *(float *)pauVar20[3];
          fVar79 = *(float *)(pauVar20[3] + 4);
          fVar80 = *(float *)(pauVar20[3] + 8);
          fVar105 = *(float *)(pauVar20[3] + 0xc);
          fVar92 = *(float *)pauVar20[6];
          fVar93 = *(float *)(pauVar20[6] + 4);
          fVar68 = *(float *)(pauVar20[6] + 8);
          fVar94 = *(float *)(pauVar20[6] + 0xc);
          local_880 = (*(float *)((char *)&auVar162 + 0));
          fStack_87c = (*(float *)((char *)&auVar162 + 4));
          fStack_878 = (*(float *)((char *)&auVar162 + 8));
          fStack_874 = (*(float *)((char *)&auVar162 + 12));
          local_7f0 = (*(float *)((char *)&auVar139 + 0));
          fStack_7ec = (*(float *)((char *)&auVar139 + 4));
          fStack_7e8 = (*(float *)((char *)&auVar139 + 8));
          fStack_7e4 = (*(float *)((char *)&auVar139 + 12));
          fVar108 = *(float *)&REFG(undefined, 0x1138af0) - fVar33;
          fVar109 = *(float *)&REFG(undefined, 0x1138af4) - fVar36;
          fVar44 = *(float *)&REFG(undefined, 0x1138af8) - fVar39;
          fVar47 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          local_200 = (*(float *)((char *)&auVar138 + 8));
          fStack_1fc = (*(float *)((char *)&auVar138 + 12));
          pfVar19[-0x20] = local_880 * fVar33 + fVar108 * *(float *)pauVar20[-3];
          pfVar19[-0x1f] = fStack_87c * fVar33 + fVar108 * fVar77;
          pfVar19[-0x1e] = fStack_878 * fVar33 + fVar108 * fVar90;
          pfVar19[-0x1d] = fStack_874 * fVar33 + fVar108 * fVar106;
          pfVar19[-0x14] = local_3d0 * fVar36 + fVar109 * fVar63;
          pfVar19[-0x13] = fStack_3cc * fVar36 + fVar109 * fVar64;
          pfVar19[-0x12] = fStack_3c8 * fVar36 + fVar109 * fVar65;
          pfVar19[-0x11] = fStack_3c4 * fVar36 + fVar109 * fVar66;
          pfVar19[-8] = local_300 * fVar39 + fVar44 * fVar67;
          pfVar19[-7] = fStack_2fc * fVar39 + fVar44 * fVar79;
          pfVar19[-6] = local_200 * fVar39 + fVar44 * fVar80;
          pfVar19[-5] = fStack_1fc * fVar39 + fVar44 * fVar105;
          pfVar19[4] = local_7f0 * fVar62 + fVar47 * fVar92;
          pfVar19[5] = fStack_7ec * fVar62 + fVar47 * fVar93;
          pfVar19[6] = fStack_7e8 * fVar62 + fVar47 * fVar68;
          pfVar19[7] = fStack_7e4 * fVar62 + fVar47 * fVar94;
          puVar18 = puVar18 + 4;
          pfVar22 = pfVar22 + 0x30;
          pauVar20 = pauVar20 + 0xc;
          pfVar19 = pfVar19 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
    }
    else if (param_9 == 0) {
      memcpy(&(auVar136), &(*param_7), sizeof(*param_7) < sizeof(auVar136) ? sizeof(*param_7) : sizeof(auVar136));
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar22 = (float *)(param_1 + 0x70);
        pfVar19 = (float *)(param_5 + 0x50);
        pfVar23 = (float *)(param_3 + 0xa0);
        pauVar20 = param_6;
        do {
          memcpy(&(auVar162), &(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar20)))), sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar20)))) < sizeof(auVar162) ? sizeof(*((gen_v16 *)GEN_TOP((((int)param_4 - (int)param_6) + (int)pauVar20)))) : sizeof(auVar162));
          fVar41 = (*(float *)((char *)&auVar162 + 0));
          fVar88 = (*(float *)((char *)&auVar162 + 4));
          fVar124 = (*(float *)((char *)&auVar162 + 12));
          memcpy(&(auVar137), &(*pauVar20), sizeof(*pauVar20) < sizeof(auVar137) ? sizeof(*pauVar20) : sizeof(auVar137));
          fVar51 = (*(float *)((char *)&auVar137 + 0));
          fVar33 = (*(float *)((char *)&auVar137 + 12));
          gen_rcpps(&(auVar152), &(in_XMM6), &(auVar162));
          fVar67 = (*(float *)((char *)&auVar136 + 0));
          fVar79 = (*(float *)((char *)&auVar136 + 4));
          fVar80 = (*(float *)((char *)&auVar136 + 8));
          fVar105 = (*(float *)((char *)&auVar136 + 12));
          fVar90 = (*(float *)((char *)&auVar137 + 4));
          fVar106 = (*(float *)((char *)&auVar137 + 8));
          fVar77 = (*(float *)((char *)&auVar162 + 8));
          gen_rcpps(&(auVar162), &(auVar136), &(auVar137));
          fVar63 = gen_bits2f(~-(uint)(fVar51 < fVar41) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0) -
                                                ((fVar7 - (*(float *)((char *)&auVar162 + 0)) * fVar51) *
                                                (*(float *)((char *)&auVar162 + 0))) *
                                                (fVar41 * (*(float *)&REFG(undefined, 0x1138af0) - fVar67))) |
                              -(uint)(fVar51 < fVar41) &
                              (uint)gen_fl2bits(((fVar7 - fVar41 * (*(float *)((char *)&auVar152 + 0))) *
                                                (*(float *)((char *)&auVar152 + 0))) * (fVar67 * fVar51)));
          fVar64 = gen_bits2f(~-(uint)(fVar90 < fVar88) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4) -
                                                ((fVar8 - (*(float *)((char *)&auVar162 + 4)) * fVar90) *
                                                (*(float *)((char *)&auVar162 + 4))) *
                                                (fVar88 * (*(float *)&REFG(undefined, 0x1138af4) - fVar79))) |
                              -(uint)(fVar90 < fVar88) &
                              (uint)gen_fl2bits(((fVar8 - fVar88 * (*(float *)((char *)&auVar152 + 4))) *
                                                (*(float *)((char *)&auVar152 + 4))) * (fVar79 * fVar90)));
          fVar65 = gen_bits2f(~-(uint)(fVar106 < fVar77) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8) -
                                                ((fVar9 - (*(float *)((char *)&auVar162 + 8)) * fVar106) *
                                                (*(float *)((char *)&auVar162 + 8))) *
                                                (fVar77 * (*(float *)&REFG(undefined, 0x1138af8) - fVar80))) |
                              -(uint)(fVar106 < fVar77) &
                              (uint)gen_fl2bits(((fVar9 - fVar77 * (*(float *)((char *)&auVar152 + 8))) *
                                                (*(float *)((char *)&auVar152 + 8))) * (fVar80 * fVar106)));
          fVar66 = gen_bits2f(~-(uint)(fVar33 < fVar124) &
                              (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc) -
                                                ((fVar10 - (*(float *)((char *)&auVar162 + 12)) * fVar33) *
                                                (*(float *)((char *)&auVar162 + 12))) *
                                                (fVar124 * (*(float *)&REFG(undefined, 0x1138afc) - fVar105))) |
                              -(uint)(fVar33 < fVar124) &
                              (uint)gen_fl2bits(((fVar10 - fVar124 * (*(float *)((char *)&auVar152 + 12))) *
                                                (*(float *)((char *)&auVar152 + 12))) * (fVar105 * fVar33)));
          fVar36 = *(float *)&REFG(undefined, 0x1138af4) - fVar64;
          fVar39 = *(float *)&REFG(undefined, 0x1138af8) - fVar65;
          fVar62 = *(float *)&REFG(undefined, 0x1138afc) - fVar66;
          uVar24 = -(uint)(fVar41 <= (float)REFG(undefined8, 0x1138ae0));
          uVar26 = -(uint)(fVar88 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar27 = -(uint)(fVar77 <= (float)REFG(undefined8, 0x1138ae8));
          uVar30 = -(uint)(fVar124 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          uVar25 = -(uint)(fVar51 <= (float)REFG(undefined8, 0x1138ae0));
          uVar29 = -(uint)(fVar90 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)));
          uVar28 = -(uint)(fVar106 <= (float)REFG(undefined8, 0x1138ae8));
          uVar31 = -(uint)(fVar33 <= (*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)));
          fVar54 = gen_bits2f(~(uVar25 & uVar24) &
                              (~uVar25 & (~uVar24 & (uint)gen_fl2bits(fVar63) |
                                         uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0))) |
                              uVar25 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0))) |
                              (uint)gen_fl2bits(fVar67) & uVar25 & uVar24);
          fVar122 = gen_bits2f(~(uVar29 & uVar26) &
                               (~uVar29 & (~uVar26 & (uint)gen_fl2bits(fVar64) |
                                          uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4))) |
                               uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4)))) |
                               (uint)gen_fl2bits(fVar79) & uVar29 & uVar26);
          fVar135 = gen_bits2f(~(uVar28 & uVar27) &
                               (~uVar28 & (~uVar27 & (uint)gen_fl2bits(fVar65) |
                                          uVar27 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8))) |
                               uVar28 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8))) |
                               (uint)gen_fl2bits(fVar80) & uVar28 & uVar27);
          fVar141 = gen_bits2f(~(uVar31 & uVar30) &
                               (~uVar31 & (~uVar30 & (uint)gen_fl2bits(fVar66) |
                                          uVar30 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc))) |
                               uVar31 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4)))) |
                               (uint)gen_fl2bits(fVar105) & uVar31 & uVar30);
          puVar2 = ((uint *)GEN_TOP((((int)param_2 - (int)param_6) + (int)pauVar20)));
          *puVar2 = (uint)gen_fl2bits(fVar41) & uVar25 |
                    ~uVar25 & (uVar24 & (uint)gen_fl2bits(fVar51) |
                              ~uVar24 & (uint)gen_fl2bits(fVar63 * fVar51 +
                                                          fVar41 * (*(float *)&REFG(undefined, 0x1138af0) - fVar63
                                                                   )));
          puVar2[1] = (uint)gen_fl2bits(fVar88) & uVar29 |
                      ~uVar29 & (uVar26 & (uint)gen_fl2bits(fVar90) |
                                ~uVar26 & (uint)gen_fl2bits(fVar64 * fVar90 + fVar88 * fVar36));
          puVar2[2] = (uint)gen_fl2bits(fVar77) & uVar28 |
                      ~uVar28 & (uVar27 & (uint)gen_fl2bits(fVar106) |
                                ~uVar27 & (uint)gen_fl2bits(fVar65 * fVar106 + fVar77 * fVar39));
          puVar2[3] = (uint)gen_fl2bits(fVar124) & uVar31 |
                      ~uVar31 & (uVar30 & (uint)gen_fl2bits(fVar33) |
                                ~uVar30 & (uint)gen_fl2bits(fVar66 * fVar33 + fVar124 * fVar62));
          fVar41 = pfVar19[-0x13];
          fVar51 = pfVar19[-0x12];
          fVar88 = pfVar19[-0x11];
          fVar105 = pfVar19[-0x10];
          fVar92 = pfVar19[-0xf];
          fVar93 = pfVar19[-0xe];
          fVar68 = pfVar19[-0xd];
          fVar94 = pfVar19[-0xc];
          fVar108 = pfVar19[-0xb];
          fVar109 = pfVar19[-10];
          fVar44 = pfVar19[-9];
          fVar47 = pfVar19[-8];
          fVar98 = pfVar19[-7];
          fVar55 = pfVar19[-6];
          fVar56 = pfVar19[-5];
          fVar57 = pfVar19[-4];
          fVar78 = pfVar19[-3];
          fVar70 = pfVar19[-2];
          fVar71 = pfVar19[-1];
          fVar72 = *pfVar19;
          fVar82 = pfVar19[1];
          fVar83 = pfVar19[2];
          fVar84 = pfVar19[3];
          memcpy(&(auVar162), &(*(gen_v16 *)(pfVar19 + 4)), sizeof(*(gen_v16 *)(pfVar19 + 4)) < sizeof(auVar162) ? sizeof(*(gen_v16 *)(pfVar19 + 4)) : sizeof(auVar162));
          memcpy(&(auVar15), &(*(gen_v12 *)(pfVar19 + 8)), sizeof(*(gen_v12 *)(pfVar19 + 8)) < sizeof(auVar15) ? sizeof(*(gen_v12 *)(pfVar19 + 8)) : sizeof(auVar15));
          memcpy(&(auVar137), &(*(gen_v16 *)(pfVar19 + 8)), sizeof(*(gen_v16 *)(pfVar19 + 8)) < sizeof(auVar137) ? sizeof(*(gen_v16 *)(pfVar19 + 8)) : sizeof(auVar137));
          memcpy(&(auVar16), &(*(gen_v12 *)(pfVar19 + 0xc)), sizeof(*(gen_v12 *)(pfVar19 + 0xc)) < sizeof(auVar16) ? sizeof(*(gen_v12 *)(pfVar19 + 0xc)) : sizeof(auVar16));
          memcpy(&(auVar152), &(*(gen_v16 *)(pfVar19 + 0xc)), sizeof(*(gen_v16 *)(pfVar19 + 0xc)) < sizeof(auVar152) ? sizeof(*(gen_v16 *)(pfVar19 + 0xc)) : sizeof(auVar152));
          fVar99 = pfVar19[0x10];
          fVar100 = pfVar19[0x11];
          fVar101 = pfVar19[0x12];
          fVar81 = pfVar19[0x13];
          fVar91 = pfVar19[0x14];
          fVar95 = pfVar19[0x15];
          fVar96 = pfVar19[0x16];
          fVar107 = pfVar19[0x17];
          fVar61 = pfVar19[0x18];
          fVar76 = pfVar19[0x19];
          fVar89 = pfVar19[0x1a];
          fVar50 = pfVar19[0x1b];
          fVar124 = pfVar23[-0x27];
          fVar33 = pfVar23[-0x26];
          fVar36 = pfVar23[-0x25];
          fVar39 = pfVar23[-0x1c];
          fVar62 = pfVar23[-0x1b];
          fVar77 = pfVar23[-0x1a];
          fVar90 = pfVar23[-0x19];
          fVar106 = pfVar23[-0x10];
          fVar63 = pfVar23[-0xf];
          fVar64 = pfVar23[-0xe];
          fVar65 = pfVar23[-0xd];
          fVar66 = pfVar23[-4];
          fVar67 = pfVar23[-3];
          fVar79 = pfVar23[-2];
          fVar80 = pfVar23[-1];
          fVar144 = *(float *)&REFG(undefined, 0x1138af0) - fVar54;
          fVar146 = *(float *)&REFG(undefined, 0x1138af4) - fVar122;
          fVar149 = *(float *)&REFG(undefined, 0x1138af8) - fVar135;
          fVar154 = *(float *)&REFG(undefined, 0x1138afc) - fVar141;
          local_2e0 = (*(float *)((char *)&auVar162 + 8));
          fStack_2dc = (*(float *)((char *)&auVar162 + 12));
          pfVar22[-0x1c] = pfVar19[-0x14] * fVar54 + fVar144 * pfVar23[-0x28];
          pfVar22[-0x1b] = fVar41 * fVar54 + fVar144 * fVar124;
          pfVar22[-0x1a] = fVar51 * fVar54 + fVar144 * fVar33;
          pfVar22[-0x19] = fVar88 * fVar54 + fVar144 * fVar36;
          pfVar22[-0x10] = fVar47 * fVar122 + fVar146 * fVar39;
          pfVar22[-0xf] = fVar98 * fVar122 + fVar146 * fVar62;
          pfVar22[-0xe] = fVar55 * fVar122 + fVar146 * fVar77;
          pfVar22[-0xd] = fVar56 * fVar122 + fVar146 * fVar90;
          pfVar22[-4] = (*(float *)((char *)&auVar162 + 0)) * fVar135 + fVar149 * fVar106;
          pfVar22[-3] = (*(float *)((char *)&auVar162 + 4)) * fVar135 + fVar149 * fVar63;
          pfVar22[-2] = local_2e0 * fVar135 + fVar149 * fVar64;
          pfVar22[-1] = fStack_2dc * fVar135 + fVar149 * fVar65;
          pfVar22[8] = fVar99 * fVar141 + fVar154 * fVar66;
          pfVar22[9] = fVar100 * fVar141 + fVar154 * fVar67;
          pfVar22[10] = fVar101 * fVar141 + fVar154 * fVar79;
          pfVar22[0xb] = fVar81 * fVar141 + fVar154 * fVar80;
          fVar41 = pfVar23[-0x23];
          fVar51 = pfVar23[-0x22];
          fVar88 = pfVar23[-0x21];
          fVar124 = pfVar23[-0x18];
          fVar33 = pfVar23[-0x17];
          fVar36 = pfVar23[-0x16];
          fVar39 = pfVar23[-0x15];
          pfVar3 = ((float *)GEN_TOP(((int)pfVar22 + (param_3 - param_1))));
          fVar62 = *pfVar3;
          fVar77 = pfVar3[1];
          fVar90 = pfVar3[2];
          fVar106 = pfVar3[3];
          fVar63 = *pfVar23;
          fVar64 = pfVar23[1];
          fVar65 = pfVar23[2];
          fVar66 = pfVar23[3];
          fVar81 = (*(float *)((char *)&auVar15 + 0));
          fVar144 = (*(float *)((char *)&auVar15 + 4));
          local_2e0 = (*(float *)((char *)&auVar137 + 8));
          fStack_2dc = (*(float *)((char *)&auVar137 + 12));
          fVar79 = ((fVar92 * fVar41 + fVar105 * pfVar23[-0x24]) + fVar93 * fVar51) +
                   fVar68 * fVar88;
          fVar47 = ((fVar78 * fVar33 + fVar57 * fVar124) + fVar70 * fVar36) + fVar71 * fVar39;
          fVar55 = ((fVar144 * fVar77 + fVar81 * fVar62) + local_2e0 * fVar90) +
                   fStack_2dc * fVar106;
          fVar99 = ((fVar95 * fVar64 + fVar91 * fVar63) + fVar96 * fVar65) + fVar107 * fVar66;
          uVar24 = -(uint)(fVar79 < 0.0);
          uVar25 = -(uint)(fVar47 < 0.0);
          uVar26 = -(uint)(fVar55 < 0.0);
          uVar29 = -(uint)(fVar99 < 0.0);
          fVar67 = gen_bits2f(~uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar24 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar80 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              uVar25 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar98 = gen_bits2f(~uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              uVar26 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar56 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              uVar29 & *(uint *)&REFG(undefined, 0x1136f6c));
          (*(float *)((char *)&auVar115 + 0)) = fVar67 * fVar68;
          (*(float *)((char *)&auVar115 + 4)) = fVar80 * fVar71;
          (*(float *)((char *)&auVar115 + 8)) = fVar98 * fStack_2dc;
          (*(float *)((char *)&auVar115 + 12)) = fVar56 * fVar107;
          fVar79 = fVar67 * fVar79;
          fVar47 = fVar80 * fVar47;
          fVar55 = fVar98 * fVar55;
          fVar99 = fVar56 * fVar99;
          (*(float *)((char *)&auVar138 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar79 + *(float *)&REFG(undefined, 0x1136f30)) * fVar79 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar79 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar138 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar47 + *(float *)&REFG(undefined, 0x1136f34)) * fVar47 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar47 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar138 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar55 + *(float *)&REFG(undefined, 0x1136f38)) * fVar55 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar55 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar138 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar99 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar99 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar99 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar128 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar79;
          (*(float *)((char *)&auVar128 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar47;
          (*(float *)((char *)&auVar128 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar55;
          (*(float *)((char *)&auVar128 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar99;
          gen_rsqrtps(&(auVar162), &(auVar115), &(auVar128));
          fVar68 = (*(float *)((char *)&auVar162 + 0));
          fVar71 = (*(float *)((char *)&auVar162 + 4));
          fVar100 = (*(float *)((char *)&auVar162 + 8));
          fVar101 = (*(float *)((char *)&auVar162 + 12));
          (*(float *)((char *)&auVar129 + 0)) = (fVar32 - (fVar68 * (*(float *)((char *)&auVar128 + 0))) * fVar68) * (fVar68 * fVar5);
          (*(float *)((char *)&auVar129 + 4)) = (fVar34 - (fVar71 * (*(float *)((char *)&auVar128 + 4))) * fVar71) * (fVar71 * fVar6);
          (*(float *)((char *)&auVar129 + 8)) = (fVar37 - (fVar100 * (*(float *)((char *)&auVar128 + 8))) * fVar100) * (fVar100 * fVar35);
          (*(float *)((char *)&auVar129 + 12)) = (fVar40 - (fVar101 * (*(float *)((char *)&auVar128 + 12))) * fVar101) * (fVar101 * fVar38);
          gen_divps(&(auVar162), &(auVar138), &(auVar129));
          fVar68 = (*(float *)((char *)&auVar162 + 0));
          fVar71 = (*(float *)((char *)&auVar162 + 12));
          fVar100 = (*(float *)((char *)&auVar162 + 4));
          fVar101 = (*(float *)((char *)&auVar162 + 8));
          fVar107 = fVar68 * fVar54;
          fVar146 = fVar100 * fVar122;
          fVar149 = fVar101 * fVar135;
          fVar154 = fVar71 * fVar141;
          (*(float *)((char *)&auVar139 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar107 * fVar107) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar107 * fVar107) + *(float *)&REFG(undefined, 0x1138af0)) * fVar107;
          (*(float *)((char *)&auVar139 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar146 * fVar146) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar146 * fVar146) + *(float *)&REFG(undefined, 0x1138af4)) * fVar146;
          (*(float *)((char *)&auVar139 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar149 * fVar149) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar149 * fVar149) + *(float *)&REFG(undefined, 0x1138af8)) * fVar149;
          (*(float *)((char *)&auVar139 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar154 * fVar154) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar154 * fVar154) + *(float *)&REFG(undefined, 0x1138afc)) * fVar154;
          fVar107 = (*(float *)&REFG(undefined, 0x1138af0) - fVar54) * fVar68;
          fVar146 = (*(float *)&REFG(undefined, 0x1138af4) - fVar122) * fVar100;
          fVar149 = (*(float *)&REFG(undefined, 0x1138af8) - fVar135) * fVar101;
          fVar154 = (*(float *)&REFG(undefined, 0x1138afc) - fVar141) * fVar71;
          uVar24 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar79);
          uVar25 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar47);
          uVar26 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar55);
          uVar29 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar99);
          (*(float *)((char *)&auVar130 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar107 * fVar107) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar107 * fVar107) + *(float *)&REFG(undefined, 0x1138af0)) * fVar107;
          (*(float *)((char *)&auVar130 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar146 * fVar146) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar146 * fVar146) + *(float *)&REFG(undefined, 0x1138af4)) * fVar146;
          (*(float *)((char *)&auVar130 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar149 * fVar149) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar149 * fVar149) + *(float *)&REFG(undefined, 0x1138af8)) * fVar149;
          (*(float *)((char *)&auVar130 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar154 * fVar154) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar154 * fVar154) + *(float *)&REFG(undefined, 0x1138afc)) * fVar154;
          (*(undefined4 *)((char *)&auVar162 + 4)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef4) * (fVar100 * fVar100) + *(float *)&REFG(undefined, 0x1136ee4)
                            ) * (fVar100 * fVar100) + *(float *)&REFG(undefined, 0x1138af4)) * fVar100);
          (*(undefined4 *)((char *)&auVar162 + 0)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef0) * (fVar68 * fVar68) + *(float *)&REFG(undefined, 0x1136ee0))
                            * (fVar68 * fVar68) + *(float *)&REFG(undefined, 0x1138af0)) * fVar68);
          (*(undefined4 *)((char *)&auVar162 + 8)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef8) * (fVar101 * fVar101) + *(float *)&REFG(undefined, 0x1136ee8)
                            ) * (fVar101 * fVar101) + *(float *)&REFG(undefined, 0x1138af8)) * fVar101);
          (*(undefined4 *)((char *)&auVar162 + 12)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136efc) * (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1136eec))
                            * (fVar71 * fVar71) + *(float *)&REFG(undefined, 0x1138afc)) * fVar71);
          gen_divps(&(auVar137), &(auVar139), &(auVar162));
          gen_divps(&(auVar162), &(auVar130), &(auVar162));
          fVar79 = gen_bits2f(uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              ~uVar24 & (*(undefined4 *)((char *)&auVar137 + 0)));
          fVar68 = gen_bits2f(uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                              ~uVar25 & (*(undefined4 *)((char *)&auVar137 + 4)));
          fVar47 = gen_bits2f(uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                              ~uVar26 & (*(undefined4 *)((char *)&auVar137 + 8)));
          fVar55 = gen_bits2f(uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                              ~uVar29 & (*(undefined4 *)((char *)&auVar137 + 12)));
          fVar71 = gen_bits2f(uVar24 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0)) |
                              ~uVar24 & (*(undefined4 *)((char *)&auVar162 + 0)));
          fVar99 = gen_bits2f(uVar25 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4))) |
                              ~uVar25 & (*(undefined4 *)((char *)&auVar162 + 4)));
          fVar100 = gen_bits2f(uVar26 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8)) |
                               ~uVar26 & (*(undefined4 *)((char *)&auVar162 + 8)));
          fVar101 = gen_bits2f(uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4))) |
                               ~uVar29 & (*(undefined4 *)((char *)&auVar162 + 12)));
          pfVar22[-0x18] = fVar79 * (fVar67 * fVar105) + fVar71 * pfVar23[-0x24];
          pfVar22[-0x17] = fVar79 * (fVar67 * fVar92) + fVar71 * fVar41;
          pfVar22[-0x16] = fVar79 * (fVar67 * fVar93) + fVar71 * fVar51;
          pfVar22[-0x15] = fVar79 * (*(float *)((char *)&auVar115 + 0)) + fVar71 * fVar88;
          pfVar22[-0xc] = fVar68 * (fVar80 * fVar57) + fVar99 * fVar124;
          pfVar22[-0xb] = fVar68 * (fVar80 * fVar78) + fVar99 * fVar33;
          pfVar22[-10] = fVar68 * (fVar80 * fVar70) + fVar99 * fVar36;
          pfVar22[-9] = fVar68 * (*(float *)((char *)&auVar115 + 4)) + fVar99 * fVar39;
          *pfVar22 = fVar47 * (fVar98 * fVar81) + fVar100 * fVar62;
          pfVar22[1] = fVar47 * (fVar98 * fVar144) + fVar100 * fVar77;
          pfVar22[2] = fVar47 * (fVar98 * local_2e0) + fVar100 * fVar90;
          pfVar22[3] = fVar47 * (*(float *)((char *)&auVar115 + 8)) + fVar100 * fVar106;
          pfVar22[0xc] = fVar55 * (fVar56 * fVar91) + fVar101 * fVar63;
          pfVar22[0xd] = fVar55 * (fVar56 * fVar95) + fVar101 * fVar64;
          pfVar22[0xe] = fVar55 * (fVar56 * fVar96) + fVar101 * fVar65;
          pfVar22[0xf] = fVar55 * (*(float *)((char *)&auVar115 + 12)) + fVar101 * fVar66;
          pfVar3 = ((float *)GEN_TOP(((int)pfVar19 + (param_3 - param_5))));
          fVar41 = *pfVar3;
          fVar51 = pfVar3[1];
          fVar88 = pfVar3[2];
          fVar124 = pfVar3[3];
          fVar33 = pfVar23[-0x1f];
          fVar36 = pfVar23[-0x1e];
          fVar39 = pfVar23[-0x1d];
          fVar62 = pfVar23[-8];
          fVar77 = pfVar23[-7];
          fVar90 = pfVar23[-6];
          fVar106 = pfVar23[-5];
          fVar63 = pfVar23[4];
          fVar64 = pfVar23[5];
          fVar65 = pfVar23[6];
          fVar66 = pfVar23[7];
          (*(undefined8 *)((char *)&in_XMM6 + 0)) = (*(undefined8 *)((char *)&auVar152 + 8));
          (*(undefined4 *)((char *)&in_XMM6 + 8)) = (undefined4)gen_fl2bits(fVar89);
          (*(undefined4 *)((char *)&in_XMM6 + 12)) = (undefined4)gen_fl2bits(fVar50);
          fVar67 = *(float *)&REFG(undefined, 0x1138af0) - fVar54;
          fVar79 = *(float *)&REFG(undefined, 0x1138af4) - fVar122;
          fVar80 = *(float *)&REFG(undefined, 0x1138af8) - fVar135;
          fVar105 = *(float *)&REFG(undefined, 0x1138afc) - fVar141;
          pfVar22[-0x14] = fVar94 * fVar54 + fVar67 * pfVar23[-0x20];
          pfVar22[-0x13] = fVar108 * fVar54 + fVar67 * fVar33;
          pfVar22[-0x12] = fVar109 * fVar54 + fVar67 * fVar36;
          pfVar22[-0x11] = fVar44 * fVar54 + fVar67 * fVar39;
          pfVar3 = ((float *)GEN_TOP(((int)pfVar19 + (param_1 - param_5))));
          *pfVar3 = fVar72 * fVar122 + fVar79 * fVar41;
          pfVar3[1] = fVar82 * fVar122 + fVar79 * fVar51;
          pfVar3[2] = fVar83 * fVar122 + fVar79 * fVar88;
          pfVar3[3] = fVar84 * fVar122 + fVar79 * fVar124;
          pfVar22[4] = (*(float *)((char *)&auVar16 + 0)) * fVar135 + fVar80 * fVar62;
          pfVar22[5] = (*(float *)((char *)&auVar16 + 4)) * fVar135 + fVar80 * fVar77;
          pfVar22[6] = (*(float *)((char *)&auVar152 + 8)) * fVar135 + fVar80 * fVar90;
          pfVar22[7] = (*(float *)((char *)&auVar152 + 12)) * fVar135 + fVar80 * fVar106;
          pfVar22[0x10] = fVar61 * fVar141 + fVar105 * fVar63;
          pfVar22[0x11] = fVar76 * fVar141 + fVar105 * fVar64;
          pfVar22[0x12] = fVar89 * fVar141 + fVar105 * fVar65;
          pfVar22[0x13] = fVar50 * fVar141 + fVar105 * fVar66;
          pfVar19 = pfVar19 + 0x30;
          pfVar23 = pfVar23 + 0x30;
          pfVar22 = pfVar22 + 0x30;
          pauVar20 = pauVar20 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
    else if (param_9 == 1) {
      fVar7 = *(float *)*param_7;
      fVar8 = *(float *)(*param_7 + 4);
      fVar9 = *(float *)(*param_7 + 8);
      fVar10 = *(float *)(*param_7 + 0xc);
      local_14 = (int)(param_8 + 3 + (param_8 + 3 >> 0x1f & 3U)) >> 2;
      if (0 < local_14) {
        pfVar19 = (float *)(param_1 + 0xa0);
        pfVar22 = (float *)(param_5 + 0x70);
        pauVar21 = (gen_v12 *)(param_3 + 0x40);
        puVar18 = param_2;
        do {
          pfVar23 = ((float *)GEN_TOP((((int)param_6 - (int)param_2) + (int)puVar18)));
          fVar33 = *pfVar23;
          fVar36 = pfVar23[1];
          fVar39 = pfVar23[2];
          fVar62 = pfVar23[3];
          puVar1 = ((undefined4 *)GEN_TOP((((int)param_4 - (int)param_2) + (int)puVar18)));
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          *puVar18 = *puVar1;
          puVar18[1] = uVar11;
          puVar18[2] = uVar12;
          puVar18[3] = uVar13;
          fVar77 = *(float *)pauVar21[-4];
          fVar90 = *(float *)(pauVar21[-4] + 4);
          fVar106 = *(float *)(pauVar21[-4] + 8);
          memcpy(&(auVar15), &(pauVar21[-4]), sizeof(pauVar21[-4]) < sizeof(auVar15) ? sizeof(pauVar21[-4]) : sizeof(auVar15));
          fVar63 = *(float *)pauVar21[-3];
          fVar64 = *(float *)*pauVar21;
          fVar65 = *(float *)(*pauVar21 + 4);
          fVar66 = *(float *)(*pauVar21 + 8);
          memcpy(&(auVar17), &(*pauVar21), sizeof(*pauVar21) < sizeof(auVar17) ? sizeof(*pauVar21) : sizeof(auVar17));
          fVar67 = *(float *)pauVar21[1];
          pauVar4 = ((gen_v12 *)GEN_TOP(((param_3 - param_5) + (int)pfVar22)));
          fVar79 = *(float *)*pauVar4;
          fVar80 = *(float *)(*pauVar4 + 4);
          fVar105 = *(float *)(*pauVar4 + 8);
          memcpy(&(auVar16), &(*pauVar4), sizeof(*pauVar4) < sizeof(auVar16) ? sizeof(*pauVar4) : sizeof(auVar16));
          fVar92 = *(float *)pauVar4[1];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar19)));
          fVar93 = *pfVar23;
          fVar68 = pfVar23[1];
          fVar94 = pfVar23[2];
          fVar108 = pfVar23[3];
          fVar109 = pfVar22[-0x10];
          fVar44 = pfVar22[-0xf];
          fVar47 = pfVar22[-0xe];
          fVar98 = pfVar22[-0xd];
          memcpy(&(auVar136), &(*(gen_v16 *)(pfVar22 + -0x1c)), sizeof(*(gen_v16 *)(pfVar22 + -0x1c)) < sizeof(auVar136) ? sizeof(*(gen_v16 *)(pfVar22 + -0x1c)) : sizeof(auVar136));
          fVar70 = pfVar22[8];
          fVar71 = pfVar22[9];
          fVar72 = pfVar22[10];
          fVar53 = pfVar22[0xb];
          fVar55 = pfVar22[-4];
          fVar56 = pfVar22[-3];
          fVar57 = pfVar22[-2];
          fVar78 = pfVar22[-1];
          fVar82 = (*(float *)((char *)&auVar136 + 0));
          fVar100 = (*(float *)((char *)&auVar136 + 4));
          fVar33 = fVar33 * fVar7;
          fVar36 = fVar36 * fVar8;
          fVar39 = fVar39 * fVar9;
          fVar62 = fVar62 * fVar10;
          local_210 = (*(float *)((char *)&auVar136 + 8));
          fStack_20c = (*(float *)((char *)&auVar136 + 12));
          fVar83 = fVar77 * fVar77 + fVar41;
          fVar101 = fVar64 * fVar64 + fVar51;
          fVar95 = fVar79 * fVar79 + fVar88;
          fVar61 = fVar93 * fVar93 + fVar124;
          fVar84 = fVar90 * fVar90 + fVar41;
          fVar81 = fVar65 * fVar65 + fVar51;
          fVar96 = fVar80 * fVar80 + fVar88;
          fVar76 = fVar68 * fVar68 + fVar124;
          fVar99 = fVar106 * fVar106 + fVar41;
          fVar91 = fVar66 * fVar66 + fVar51;
          fVar107 = fVar105 * fVar105 + fVar88;
          fVar89 = fVar94 * fVar94 + fVar124;
          fVar87 = ((local_210 * fVar90 - fVar100 * fVar106) * fVar63 +
                   (local_210 * fVar106 + fVar100 * fVar90) * fVar77) - (fVar99 + fVar84) * fVar82;
          fVar111 = ((fVar47 * fVar65 - fVar44 * fVar66) * fVar67 +
                    (fVar47 * fVar66 + fVar44 * fVar65) * fVar64) - (fVar91 + fVar81) * fVar109;
          fVar134 = ((fVar57 * fVar80 - fVar56 * fVar105) * fVar92 +
                    (fVar57 * fVar105 + fVar56 * fVar80) * fVar79) - (fVar107 + fVar96) * fVar55;
          fVar148 = ((fVar72 * fVar68 - fVar71 * fVar94) * fVar108 +
                    (fVar72 * fVar94 + fVar71 * fVar68) * fVar93) - (fVar89 + fVar76) * fVar70;
          fVar112 = ((fVar82 * fVar106 - local_210 * fVar77) * fVar63 +
                    (local_210 * fVar106 + fVar82 * fVar77) * fVar90) - (fVar99 + fVar83) * fVar100;
          fVar118 = ((fVar109 * fVar66 - fVar47 * fVar64) * fVar67 +
                    (fVar47 * fVar66 + fVar109 * fVar64) * fVar65) - (fVar91 + fVar101) * fVar44;
          fVar120 = ((fVar55 * fVar105 - fVar57 * fVar79) * fVar92 +
                    (fVar57 * fVar105 + fVar55 * fVar79) * fVar80) - (fVar107 + fVar95) * fVar56;
          fVar123 = ((fVar70 * fVar94 - fVar72 * fVar93) * fVar108 +
                    (fVar72 * fVar94 + fVar70 * fVar93) * fVar68) - (fVar89 + fVar61) * fVar71;
          fVar58 = ((fVar100 * fVar77 - fVar82 * fVar90) * fVar63 +
                   (fVar100 * fVar90 + fVar82 * fVar77) * fVar106) - (fVar84 + fVar83) * local_210;
          fVar60 = ((fVar44 * fVar64 - fVar109 * fVar65) * fVar67 +
                   (fVar44 * fVar65 + fVar109 * fVar64) * fVar66) - (fVar81 + fVar101) * fVar47;
          fVar74 = ((fVar56 * fVar79 - fVar55 * fVar80) * fVar92 +
                   (fVar56 * fVar80 + fVar55 * fVar79) * fVar105) - (fVar96 + fVar95) * fVar57;
          fVar85 = ((fVar71 * fVar93 - fVar70 * fVar68) * fVar108 +
                   (fVar71 * fVar68 + fVar70 * fVar93) * fVar94) - (fVar76 + fVar61) * fVar72;
          fVar77 = *(float *)pauVar21[-5];
          fVar90 = *(float *)(pauVar21[-5] + 4);
          fVar106 = *(float *)(pauVar21[-5] + 8);
          fVar64 = *(float *)(pauVar21[-2] + 8);
          fVar65 = *(float *)pauVar21[-1];
          fVar66 = *(float *)(pauVar21[-1] + 4);
          fVar79 = *(float *)(pauVar21[-1] + 8);
          fVar80 = *(float *)(pauVar21[2] + 8);
          fVar105 = *(float *)pauVar21[3];
          fVar109 = *(float *)(pauVar21[3] + 4);
          fVar44 = *(float *)(pauVar21[3] + 8);
          local_250 = (*(float *)((char *)&auVar16 + 0));
          fStack_24c = (*(float *)((char *)&auVar16 + 4));
          fStack_248 = (*(float *)((char *)&auVar16 + 8));
          fVar47 = *(float *)(pauVar21[6] + 8);
          fVar55 = *(float *)pauVar21[7];
          fVar56 = *(float *)(pauVar21[7] + 4);
          fVar57 = *(float *)(pauVar21[7] + 8);
          local_180 = (*(float *)((char *)&auVar17 + 0));
          fStack_17c = (*(float *)((char *)&auVar17 + 4));
          fStack_178 = (*(float *)((char *)&auVar17 + 8));
          local_90 = (*(float *)((char *)&auVar15 + 0));
          fStack_8c = (*(float *)((char *)&auVar15 + 4));
          fStack_88 = (*(float *)((char *)&auVar15 + 8));
          fVar70 = *pfVar22;
          fVar71 = pfVar22[1];
          fVar72 = pfVar22[2];
          fVar82 = pfVar22[3];
          fVar83 = pfVar22[0xc];
          fVar84 = pfVar22[0xd];
          fVar99 = pfVar22[0xe];
          fVar100 = pfVar22[0xf];
          fVar101 = pfVar22[-0xc];
          fVar81 = pfVar22[-0xb];
          fVar91 = pfVar22[-10];
          fVar95 = pfVar22[-9];
          fVar96 = pfVar22[-0x18];
          fVar107 = pfVar22[-0x17];
          fVar61 = pfVar22[-0x16];
          fVar76 = pfVar22[-0x15];
          fVar102 = ((fVar76 * fVar63 - fVar96 * local_90) - fVar107 * fStack_8c) -
                    fVar61 * fStack_88;
          fVar117 = ((fVar95 * fVar67 - fVar101 * local_180) - fVar81 * fStack_17c) -
                    fVar91 * fStack_178;
          fVar140 = ((fVar82 * fVar92 - fVar70 * local_250) - fVar71 * fStack_24c) -
                    fVar72 * fStack_248;
          fVar153 = ((fVar100 * fVar108 - fVar83 * fVar93) - fVar84 * fVar68) - fVar99 * fVar94;
          fVar103 = ((fVar61 * fStack_8c - fVar107 * fStack_88) + fVar96 * fVar63) +
                    fVar76 * local_90;
          fVar119 = ((fVar91 * fStack_17c - fVar81 * fStack_178) + fVar101 * fVar67) +
                    fVar95 * local_180;
          fVar143 = ((fVar72 * fStack_24c - fVar71 * fStack_248) + fVar70 * fVar92) +
                    fVar82 * local_250;
          fVar156 = ((fVar99 * fVar68 - fVar84 * fVar94) + fVar83 * fVar108) + fVar100 * fVar93;
          fVar59 = ((fVar107 * local_90 - fVar96 * fStack_8c) + fVar61 * fVar63) +
                   fVar76 * fStack_88;
          fVar73 = ((fVar81 * local_180 - fVar101 * fStack_17c) + fVar91 * fVar67) +
                   fVar95 * fStack_178;
          fVar75 = ((fVar71 * local_250 - fVar70 * fStack_24c) + fVar72 * fVar92) +
                   fVar82 * fStack_248;
          fVar86 = ((fVar84 * fVar93 - fVar83 * fVar68) + fVar99 * fVar108) + fVar100 * fVar94;
          fVar150 = ((fVar96 * fStack_88 - fVar61 * local_90) + fVar107 * fVar63) +
                    fVar76 * fStack_8c;
          fVar155 = ((fVar101 * fStack_178 - fVar91 * local_180) + fVar81 * fVar67) +
                    fVar95 * fStack_17c;
          fVar158 = ((fVar70 * fStack_248 - fVar72 * local_250) + fVar71 * fVar92) +
                    fVar82 * fStack_24c;
          fVar161 = ((fVar83 * fVar94 - fVar99 * fVar93) + fVar84 * fVar108) + fVar100 * fVar68;
          fVar63 = pfVar22[4];
          fVar67 = pfVar22[5];
          fVar92 = pfVar22[6];
          fVar93 = pfVar22[7];
          fVar68 = *(float *)(pauVar21[5] + 4);
          fVar94 = *(float *)(pauVar21[5] + 8);
          fVar108 = *(float *)pauVar21[6];
          fVar70 = *(float *)(pauVar21[6] + 4);
          fVar71 = pfVar22[0x10];
          fVar72 = pfVar22[0x11];
          fVar82 = pfVar22[0x12];
          fVar83 = pfVar22[0x13];
          fVar84 = *(float *)(pauVar21[9] + 4);
          fVar99 = *(float *)(pauVar21[9] + 8);
          fVar100 = *(float *)pauVar21[10];
          fVar101 = *(float *)(pauVar21[10] + 4);
          fVar81 = pfVar22[-0x14];
          fVar91 = pfVar22[-0x13];
          fVar95 = pfVar22[-0x12];
          fVar96 = pfVar22[-0x11];
          fVar107 = *(float *)(pauVar21[-3] + 4);
          fVar61 = *(float *)(pauVar21[-3] + 8);
          fVar76 = *(float *)pauVar21[-2];
          fVar89 = *(float *)(pauVar21[-2] + 4);
          fVar50 = pfVar22[-8];
          fVar54 = pfVar22[-7];
          fVar122 = pfVar22[-6];
          fVar135 = pfVar22[-5];
          fVar141 = *(float *)(pauVar21[1] + 4);
          fVar144 = *(float *)(pauVar21[1] + 8);
          fVar146 = *(float *)pauVar21[2];
          fVar149 = *(float *)(pauVar21[2] + 4);
          fVar154 = *(float *)pauVar21[-5];
          fVar157 = *(float *)(pauVar21[-5] + 4);
          fVar160 = *(float *)(pauVar21[-5] + 8);
          fVar97 = *(float *)(pauVar21[-2] + 8);
          fVar142 = *(float *)pauVar21[-1];
          fVar110 = *(float *)(pauVar21[-1] + 4);
          fVar147 = *(float *)(pauVar21[-1] + 8);
          fVar151 = *(float *)(pauVar21[2] + 8);
          fVar42 = *(float *)pauVar21[3];
          fVar43 = *(float *)(pauVar21[3] + 4);
          fVar45 = *(float *)(pauVar21[3] + 8);
          fVar46 = *(float *)(pauVar21[6] + 8);
          fVar48 = *(float *)pauVar21[7];
          fVar49 = *(float *)(pauVar21[7] + 4);
          fVar52 = *(float *)(pauVar21[7] + 8);
          fVar104 = *(float *)&REFG(undefined, 0x1138af0) - fVar33;
          fVar121 = *(float *)&REFG(undefined, 0x1138af4) - fVar36;
          fVar145 = *(float *)&REFG(undefined, 0x1138af8) - fVar39;
          fVar159 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-0x28] =
               (*(float *)(pauVar21[-6] + 8) + (fVar87 + fVar87)) * fVar33 +
               fVar104 * *(float *)(pauVar21[-6] + 8);
          pfVar19[-0x27] = (fVar77 + (fVar112 + fVar112)) * fVar33 + fVar104 * fVar154;
          pfVar19[-0x26] = (fVar90 + (fVar58 + fVar58)) * fVar33 + fVar104 * fVar157;
          pfVar19[-0x25] = (fVar106 + fStack_20c) * fVar33 + fVar104 * fVar160;
          pfVar19[-0x1c] = (fVar64 + (fVar111 + fVar111)) * fVar36 + fVar121 * fVar97;
          pfVar19[-0x1b] = (fVar65 + (fVar118 + fVar118)) * fVar36 + fVar121 * fVar142;
          pfVar19[-0x1a] = (fVar66 + (fVar60 + fVar60)) * fVar36 + fVar121 * fVar110;
          pfVar19[-0x19] = (fVar79 + fVar98) * fVar36 + fVar121 * fVar147;
          pfVar19[-0x10] = (fVar80 + (fVar134 + fVar134)) * fVar39 + fVar145 * fVar151;
          pfVar19[-0xf] = (fVar105 + (fVar120 + fVar120)) * fVar39 + fVar145 * fVar42;
          pfVar19[-0xe] = (fVar109 + (fVar74 + fVar74)) * fVar39 + fVar145 * fVar43;
          pfVar19[-0xd] = (fVar44 + fVar78) * fVar39 + fVar145 * fVar45;
          pfVar19[-4] = (fVar47 + (fVar148 + fVar148)) * fVar62 + fVar159 * fVar46;
          pfVar19[-3] = (fVar55 + (fVar123 + fVar123)) * fVar62 + fVar159 * fVar48;
          pfVar19[-2] = (fVar56 + (fVar85 + fVar85)) * fVar62 + fVar159 * fVar49;
          pfVar19[-1] = (fVar57 + fVar53) * fVar62 + fVar159 * fVar52;
          fVar77 = *(float *)(pauVar21[-4] + 4);
          fVar90 = *(float *)(pauVar21[-4] + 8);
          fVar106 = *(float *)pauVar21[-3];
          fVar64 = *(float *)*pauVar21;
          fVar65 = *(float *)(*pauVar21 + 4);
          fVar66 = *(float *)(*pauVar21 + 8);
          fVar79 = *(float *)pauVar21[1];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_5) + (int)pfVar22)));
          fVar80 = *pfVar23;
          fVar105 = pfVar23[1];
          fVar109 = pfVar23[2];
          fVar44 = pfVar23[3];
          pfVar23 = ((float *)GEN_TOP(((param_3 - param_1) + (int)pfVar19)));
          fVar47 = *pfVar23;
          fVar98 = pfVar23[1];
          fVar55 = pfVar23[2];
          fVar56 = pfVar23[3];
          fVar78 = ((fVar150 * fVar77 + fVar103 * *(float *)pauVar21[-4]) + fVar59 * fVar90) +
                   fVar102 * fVar106;
          fVar157 = ((fVar155 * fVar65 + fVar119 * fVar64) + fVar73 * fVar66) + fVar117 * fVar79;
          fVar97 = ((fVar158 * fVar105 + fVar143 * fVar80) + fVar75 * fVar109) + fVar140 * fVar44;
          fVar110 = ((fVar161 * fVar98 + fVar156 * fVar47) + fVar86 * fVar55) + fVar153 * fVar56;
          uVar24 = -(uint)(fVar78 < 0.0);
          uVar25 = -(uint)(fVar157 < 0.0);
          uVar26 = -(uint)(fVar97 < 0.0);
          uVar29 = -(uint)(fVar110 < 0.0);
          fVar57 = gen_bits2f(~uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                              uVar24 & *(uint *)&REFG(undefined, 0x1136f60));
          fVar154 = gen_bits2f(~uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)) |
                               uVar25 & *(uint *)&REFG(undefined, 0x1136f64));
          fVar160 = gen_bits2f(~uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)) |
                               uVar26 & *(uint *)&REFG(undefined, 0x1136f68));
          fVar142 = gen_bits2f(~uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)) |
                               uVar29 & *(uint *)&REFG(undefined, 0x1136f6c));
          (*(float *)((char *)&auVar113 + 0)) = fVar57 * fVar102;
          (*(float *)((char *)&auVar113 + 4)) = fVar154 * fVar117;
          (*(float *)((char *)&auVar113 + 8)) = fVar160 * fVar140;
          (*(float *)((char *)&auVar113 + 12)) = fVar142 * fVar153;
          fVar78 = fVar57 * fVar78;
          fVar157 = fVar154 * fVar157;
          fVar97 = fVar160 * fVar97;
          fVar110 = fVar142 * fVar110;
          (*(float *)((char *)&auVar69 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136f40) * fVar78 + *(float *)&REFG(undefined, 0x1136f30)) * fVar78 +
               *(float *)&REFG(undefined, 0x1136f20)) * fVar78 + *(float *)&REFG(undefined, 0x1136f10);
          (*(float *)((char *)&auVar69 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136f44) * fVar157 + *(float *)&REFG(undefined, 0x1136f34)) * fVar157 +
               *(float *)&REFG(undefined, 0x1136f24)) * fVar157 + *(float *)&REFG(undefined, 0x1136f14);
          (*(float *)((char *)&auVar69 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136f48) * fVar97 + *(float *)&REFG(undefined, 0x1136f38)) * fVar97 +
               *(float *)&REFG(undefined, 0x1136f28)) * fVar97 + *(float *)&REFG(undefined, 0x1136f18);
          (*(float *)((char *)&auVar69 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136f4c) * fVar110 + *(float *)&REFG(undefined, 0x1136f3c)) * fVar110 +
               *(float *)&REFG(undefined, 0x1136f2c)) * fVar110 + *(float *)&REFG(undefined, 0x1136f1c);
          (*(float *)((char *)&auVar125 + 0)) = *(float *)&REFG(undefined, 0x1138af0) - fVar78;
          (*(float *)((char *)&auVar125 + 4)) = *(float *)&REFG(undefined, 0x1138af4) - fVar157;
          (*(float *)((char *)&auVar125 + 8)) = *(float *)&REFG(undefined, 0x1138af8) - fVar97;
          (*(float *)((char *)&auVar125 + 12)) = *(float *)&REFG(undefined, 0x1138afc) - fVar110;
          gen_rsqrtps(&(auVar136), &(auVar113), &(auVar125));
          fVar147 = (*(float *)((char *)&auVar136 + 0));
          fVar151 = (*(float *)((char *)&auVar136 + 4));
          fVar42 = (*(float *)((char *)&auVar136 + 8));
          fVar43 = (*(float *)((char *)&auVar136 + 12));
          (*(float *)((char *)&auVar126 + 0)) = (fVar32 - (fVar147 * (*(float *)((char *)&auVar125 + 0))) * fVar147) * (fVar147 * fVar5);
          (*(float *)((char *)&auVar126 + 4)) = (fVar34 - (fVar151 * (*(float *)((char *)&auVar125 + 4))) * fVar151) * (fVar151 * fVar6);
          (*(float *)((char *)&auVar126 + 8)) = (fVar37 - (fVar42 * (*(float *)((char *)&auVar125 + 8))) * fVar42) * (fVar42 * fVar35);
          (*(float *)((char *)&auVar126 + 12)) = (fVar40 - (fVar43 * (*(float *)((char *)&auVar125 + 12))) * fVar43) * (fVar43 * fVar38);
          gen_divps(&(auVar136), &(auVar69), &(auVar126));
          fVar147 = (*(float *)((char *)&auVar136 + 0));
          fVar151 = (*(float *)((char *)&auVar136 + 12));
          fVar42 = (*(float *)((char *)&auVar136 + 4));
          fVar43 = (*(float *)((char *)&auVar136 + 8));
          fVar45 = fVar33 * fVar147;
          fVar46 = fVar36 * fVar42;
          fVar48 = fVar39 * fVar43;
          fVar49 = fVar62 * fVar151;
          fVar52 = (*(float *)&REFG(undefined, 0x1138af0) - fVar33) * fVar147;
          fVar53 = (*(float *)&REFG(undefined, 0x1138af4) - fVar36) * fVar42;
          fVar58 = (*(float *)&REFG(undefined, 0x1138af8) - fVar39) * fVar43;
          fVar60 = (*(float *)&REFG(undefined, 0x1138afc) - fVar62) * fVar151;
          (*(float *)((char *)&auVar114 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar45 * fVar45) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar45 * fVar45) + *(float *)&REFG(undefined, 0x1138af0)) * fVar45;
          (*(float *)((char *)&auVar114 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar46 * fVar46) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar46 * fVar46) + *(float *)&REFG(undefined, 0x1138af4)) * fVar46;
          (*(float *)((char *)&auVar114 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar48 * fVar48) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar48 * fVar48) + *(float *)&REFG(undefined, 0x1138af8)) * fVar48;
          (*(float *)((char *)&auVar114 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar49 * fVar49) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar49 * fVar49) + *(float *)&REFG(undefined, 0x1138afc)) * fVar49;
          (*(undefined4 *)((char *)&auVar14 + 4)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef4) * (fVar42 * fVar42) + *(float *)&REFG(undefined, 0x1136ee4))
                            * (fVar42 * fVar42) + *(float *)&REFG(undefined, 0x1138af4)) * fVar42);
          (*(undefined4 *)((char *)&auVar14 + 0)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef0) * (fVar147 * fVar147) + *(float *)&REFG(undefined, 0x1136ee0)
                            ) * (fVar147 * fVar147) + *(float *)&REFG(undefined, 0x1138af0)) * fVar147);
          (*(undefined4 *)((char *)&auVar14 + 8)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136ef8) * (fVar43 * fVar43) + *(float *)&REFG(undefined, 0x1136ee8))
                            * (fVar43 * fVar43) + *(float *)&REFG(undefined, 0x1138af8)) * fVar43);
          (*(undefined4 *)((char *)&auVar14 + 12)) =
               (undefined4)
               gen_fl2bits(((*(float *)&REFG(undefined, 0x1136efc) * (fVar151 * fVar151) + *(float *)&REFG(undefined, 0x1136eec)
                            ) * (fVar151 * fVar151) + *(float *)&REFG(undefined, 0x1138afc)) * fVar151);
          gen_divps(&(auVar136), &(auVar114), &(auVar14));
          (*(float *)((char *)&auVar127 + 0)) =
               ((*(float *)&REFG(undefined, 0x1136ef0) * (fVar52 * fVar52) + *(float *)&REFG(undefined, 0x1136ee0)) *
                (fVar52 * fVar52) + *(float *)&REFG(undefined, 0x1138af0)) * fVar52;
          (*(float *)((char *)&auVar127 + 4)) =
               ((*(float *)&REFG(undefined, 0x1136ef4) * (fVar53 * fVar53) + *(float *)&REFG(undefined, 0x1136ee4)) *
                (fVar53 * fVar53) + *(float *)&REFG(undefined, 0x1138af4)) * fVar53;
          (*(float *)((char *)&auVar127 + 8)) =
               ((*(float *)&REFG(undefined, 0x1136ef8) * (fVar58 * fVar58) + *(float *)&REFG(undefined, 0x1136ee8)) *
                (fVar58 * fVar58) + *(float *)&REFG(undefined, 0x1138af8)) * fVar58;
          (*(float *)((char *)&auVar127 + 12)) =
               ((*(float *)&REFG(undefined, 0x1136efc) * (fVar60 * fVar60) + *(float *)&REFG(undefined, 0x1136eec)) *
                (fVar60 * fVar60) + *(float *)&REFG(undefined, 0x1138afc)) * fVar60;
          uVar24 = -(uint)(*(float *)&REFG(undefined, 0x1136f50) < fVar78);
          uVar25 = -(uint)(*(float *)&REFG(undefined, 0x1136f54) < fVar157);
          uVar26 = -(uint)(*(float *)&REFG(undefined, 0x1136f58) < fVar97);
          uVar29 = -(uint)(*(float *)&REFG(undefined, 0x1136f5c) < fVar110);
          gen_divps(&(auVar162), &(auVar127), &(auVar14));
          fVar78 = gen_bits2f(~uVar24 & (*(undefined4 *)((char *)&auVar136 + 0)) |
                              uVar24 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)));
          fVar157 = gen_bits2f(~uVar25 & (*(undefined4 *)((char *)&auVar136 + 4)) |
                               uVar25 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4)));
          fVar97 = gen_bits2f(~uVar26 & (*(undefined4 *)((char *)&auVar136 + 8)) |
                              uVar26 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8)));
          fVar110 = gen_bits2f(~uVar29 & (*(undefined4 *)((char *)&auVar136 + 12)) |
                               uVar29 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc)));
          fVar147 = gen_bits2f(~uVar24 & (*(undefined4 *)((char *)&auVar162 + 0)) |
                               uVar24 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae0)));
          fVar151 = gen_bits2f(~uVar25 & (*(undefined4 *)((char *)&auVar162 + 4)) |
                               uVar25 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae0) + 4))));
          fVar42 = gen_bits2f(~uVar26 & (*(undefined4 *)((char *)&auVar162 + 8)) |
                              uVar26 & (uint)gen_fl2bits((float)REFG(undefined8, 0x1138ae8)));
          fVar43 = gen_bits2f(~uVar29 & (*(undefined4 *)((char *)&auVar162 + 12)) |
                              uVar29 & (uint)gen_fl2bits((*(float *)((char *)&REFG(undefined8, 0x1138ae8) + 4))));
          pfVar19[-0x24] = fVar78 * (fVar57 * fVar103) + fVar147 * *(float *)pauVar21[-4];
          pfVar19[-0x23] = fVar78 * (fVar57 * fVar150) + fVar147 * fVar77;
          pfVar19[-0x22] = fVar78 * (fVar57 * fVar59) + fVar147 * fVar90;
          pfVar19[-0x21] = fVar78 * (*(float *)((char *)&auVar113 + 0)) + fVar147 * fVar106;
          pfVar19[-0x18] = fVar157 * (fVar154 * fVar119) + fVar151 * fVar64;
          pfVar19[-0x17] = fVar157 * (fVar154 * fVar155) + fVar151 * fVar65;
          pfVar19[-0x16] = fVar157 * (fVar154 * fVar73) + fVar151 * fVar66;
          pfVar19[-0x15] = fVar157 * (*(float *)((char *)&auVar113 + 4)) + fVar151 * fVar79;
          pfVar23 = ((float *)GEN_TOP(((int)pfVar22 + (param_1 - param_5))));
          *pfVar23 = fVar97 * (fVar160 * fVar143) + fVar42 * fVar80;
          pfVar23[1] = fVar97 * (fVar160 * fVar158) + fVar42 * fVar105;
          pfVar23[2] = fVar97 * (fVar160 * fVar75) + fVar42 * fVar109;
          pfVar23[3] = fVar97 * (*(float *)((char *)&auVar113 + 8)) + fVar42 * fVar44;
          *pfVar19 = fVar110 * (fVar142 * fVar156) + fVar43 * fVar47;
          pfVar19[1] = fVar110 * (fVar142 * fVar161) + fVar43 * fVar98;
          pfVar19[2] = fVar110 * (fVar142 * fVar86) + fVar43 * fVar55;
          pfVar19[3] = fVar110 * (*(float *)((char *)&auVar113 + 12)) + fVar43 * fVar56;
          fVar77 = *(float *)(pauVar21[-3] + 8);
          fVar90 = *(float *)pauVar21[-2];
          fVar106 = *(float *)(pauVar21[-2] + 4);
          fVar64 = *(float *)(pauVar21[1] + 4);
          fVar65 = *(float *)(pauVar21[1] + 8);
          fVar66 = *(float *)pauVar21[2];
          fVar79 = *(float *)(pauVar21[2] + 4);
          fVar80 = *(float *)(pauVar21[5] + 4);
          fVar105 = *(float *)(pauVar21[5] + 8);
          fVar109 = *(float *)pauVar21[6];
          fVar44 = *(float *)(pauVar21[6] + 4);
          fVar47 = *(float *)(pauVar21[9] + 4);
          fVar98 = *(float *)(pauVar21[9] + 8);
          fVar55 = *(float *)pauVar21[10];
          fVar56 = *(float *)(pauVar21[10] + 4);
          fVar57 = *(float *)&REFG(undefined, 0x1138af0) - fVar33;
          fVar78 = *(float *)&REFG(undefined, 0x1138af4) - fVar36;
          fVar154 = *(float *)&REFG(undefined, 0x1138af8) - fVar39;
          fVar157 = *(float *)&REFG(undefined, 0x1138afc) - fVar62;
          pfVar19[-0x20] = (fVar81 * fVar107) * fVar33 + fVar57 * *(float *)(pauVar21[-3] + 4);
          pfVar19[-0x1f] = (fVar91 * fVar61) * fVar33 + fVar57 * fVar77;
          pfVar19[-0x1e] = (fVar95 * fVar76) * fVar33 + fVar57 * fVar90;
          pfVar19[-0x1d] = (fVar96 * fVar89) * fVar33 + fVar57 * fVar106;
          pfVar19[-0x14] = (fVar50 * fVar141) * fVar36 + fVar78 * fVar64;
          pfVar19[-0x13] = (fVar54 * fVar144) * fVar36 + fVar78 * fVar65;
          pfVar19[-0x12] = (fVar122 * fVar146) * fVar36 + fVar78 * fVar66;
          pfVar19[-0x11] = (fVar135 * fVar149) * fVar36 + fVar78 * fVar79;
          pfVar19[-8] = (fVar63 * fVar68) * fVar39 + fVar154 * fVar80;
          pfVar19[-7] = (fVar67 * fVar94) * fVar39 + fVar154 * fVar105;
          pfVar19[-6] = (fVar92 * fVar108) * fVar39 + fVar154 * fVar109;
          pfVar19[-5] = (fVar93 * fVar70) * fVar39 + fVar154 * fVar44;
          pfVar19[4] = (fVar71 * fVar84) * fVar62 + fVar157 * fVar47;
          pfVar19[5] = (fVar72 * fVar99) * fVar62 + fVar157 * fVar98;
          pfVar19[6] = (fVar82 * fVar100) * fVar62 + fVar157 * fVar55;
          pfVar19[7] = (fVar83 * fVar101) * fVar62 + fVar157 * fVar56;
          puVar18 = puVar18 + 4;
          pfVar22 = pfVar22 + 0x30;
          pauVar21 = pauVar21 + 0x10;
          pfVar19 = pfVar19 + 0x30;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d64af0 */
uint F_00d64af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd64af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00d64b10 */
uint F_00d64b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd64b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*(int *)this + (uint)(byte)param_1 * 4) = param_2;
  return (uint)(byte)param_1;
}

/* ref: FUN_00d64b30 */
unsigned int F_00d64b30(unsigned int gen_a0)
{
  GEN_ENTER(0xd64b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != 0) {
    F_00da36f0(*(int *)this,1);
  }
  if (*(int *)((int)this + 4) != 0) {
    **(int * PTR32 *)((int)this + 4) = **(int * PTR32 *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_00d64b60 */
uint F_00d64b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd64b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_3;
  puVar3 = param_4;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00d64b80 */
uint F_00d64b80(void)
{
  GEN_ENTER(0xd64b80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00d64b90 */
uint F_00d64b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd64b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  F_00d38d80(param_2);
  if (*(int *)(param_2 + 0x30) != 0) {
    F_00da36f0(*(int *)(param_2 + 0x30),1);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    **(int * PTR32 *)(param_2 + 0x34) = **(int * PTR32 *)(param_2 + 0x34) + 1;
  }
  uVar1 = F_00d96630(param_1,param_2,param_2,0);
  return uVar1;
}

/* ref: FUN_00d64bd0 */
uint F_00d64bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd64bd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  *(gen_code32 *)&REFG(undefined, 0x15d9a44) = ((code *)REFP(0xd64b90));
  uVar1 = F_00d95950(param_1,5,&REFG(undefined, 0x15d9a44),1,((code *)REFP(0xd64b60)),((code *)REFP(0xd64b80)));
  return uVar1;
}

/* ref: FUN_00d64c80 */
unsigned int F_00d64c80(unsigned int gen_a0)
{
  GEN_ENTER(0xd64c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d64d10 */
uint F_00d64d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd64d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 6);
  return uVar1;
}

/* ref: FUN_00d64d40 */
uint F_00d64d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd64d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x70);
  return uVar1;
}

/* ref: FUN_00d64e00 */
uint F_00d64e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd64e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d64e40 */
uint F_00d64e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd64e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d64e80 */
uint F_00d64e80(unsigned int gen_a0)
{
  GEN_ENTER(0xd64e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d64ec0 */
uint F_00d64ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xd64ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d64f00 */
uint F_00d64f00(unsigned int gen_a0)
{
  GEN_ENTER(0xd64f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d64f40 */
uint F_00d64f40(unsigned int gen_a0)
{
  GEN_ENTER(0xd64f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d64f80 */
uint F_00d64f80(unsigned int gen_a0)
{
  GEN_ENTER(0xd64f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined1 *)((int)this + 0x60) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)&REFG(undefined, 0x1138ca0);
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar2;
  *(undefined4 *)((int)this + 0x4c) = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)&REFG(undefined, 0x1138af0);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  return (uint)this;
}

/* ref: FUN_00d64fd0 */
uint F_00d64fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd64fd0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: FUN_00d64fe0 */
uint F_00d64fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xd64fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x28)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),
               (*(uint *)((int)this + 0x28) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               (*(uint *)((int)this + 0x1c) & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d65100 */
uint F_00d65100(unsigned int gen_a0)
{
  GEN_ENTER(0xd65100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1134c04));
  uVar1 = F_00d64fe0((undefined *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d65130 */
byte F_00d65130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd65130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined4 extraout_ECX = 0;
  
  uVar3 = F_00d98fb0(param_2 + 4);
  if ((uVar3 != 0) &&
     ((*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)GEN_ISNAN(param_2[1]), (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)GEN_ISNAN(*param_2),
     (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)GEN_ISNAN(param_2[2]), (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)GEN_ISNAN(param_2[3]),
     uVar3 = gen_movmskps(&(auVar1)), (uVar3 & 7) == 0)) {
    (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)GEN_ISNAN(param_2[9]);
    (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)GEN_ISNAN(param_2[8]);
    (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)GEN_ISNAN(param_2[10]);
    (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)GEN_ISNAN(param_2[0xb]);
    uVar3 = gen_movmskps(&(auVar2));
    return (uVar3 & 7) == 0;
  }
  return 0;
}

/* ref: FUN_00d65170 */
uint F_00d65170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd65170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = param_3[9];
  fVar2 = param_3[10];
  fVar3 = param_3[0xb];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *param_2 = param_3[8] * *param_4 + *param_3;
  param_2[1] = fVar1 * fVar4 + fVar7;
  param_2[2] = fVar2 * fVar5 + fVar8;
  param_2[3] = fVar3 * fVar6 + fVar9;
  fVar1 = param_4[7];
  local_20 = gen_bits2f((uint)*(undefined8 *)(param_3 + 4));
  fStack_1c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20));
  fStack_18 = gen_bits2f((uint)*(undefined8 *)(param_3 + 6));
  local_30 = gen_bits2f((uint)*(undefined8 *)(param_4 + 4));
  fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20));
  fStack_28 = gen_bits2f((uint)*(undefined8 *)(param_4 + 6));
  fVar2 = param_3[7];
  param_2[4] = ((fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar2) +
               local_20 * fVar1;
  param_2[5] = ((fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar2) +
               fStack_1c * fVar1;
  param_2[6] = ((local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar2) +
               fStack_18 * fVar1;
  param_2[7] = fVar1 * fVar2 -
               ((fStack_1c * fStack_2c + local_20 * local_30) + fStack_18 * fStack_28);
  fVar1 = param_4[9];
  fVar2 = param_4[10];
  fVar3 = param_4[0xb];
  param_2[8] = param_4[8];
  param_2[9] = fVar1;
  param_2[10] = fVar2;
  param_2[0xb] = fVar3;
  return (uint)param_3;
}

/* ref: FUN_00d65260 */
unsigned int F_00d65260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd65260u, gen_a0, gen_a1, 0u, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  uint uVar16;
  uint uVar18;
  uint uVar19;
  undefined1 auVar17 [16];
  uint uVar20;
  float fVar21;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = fVar1 * fVar1;
  fVar7 = fVar2 * fVar2;
  fVar10 = fVar3 * fVar3;
  fVar12 = (fVar7 + fVar4) + fVar10;
  fVar14 = (fVar7 + fVar4) + fVar10;
  fVar15 = (fVar7 + fVar4) + fVar10;
  fVar5 = *in_eax * *in_eax;
  fVar8 = in_eax[1] * in_eax[1];
  fVar11 = in_eax[2] * in_eax[2];
  fVar21 = (fVar8 + fVar5) + fVar11;
  (*(undefined4 *)((char *)&auVar13 + 4)) = (undefined4)gen_fl2bits((fVar8 + fVar5) + fVar11);
  (*(undefined4 *)((char *)&auVar13 + 0)) = (undefined4)gen_fl2bits(fVar15);
  (*(undefined4 *)((char *)&auVar13 + 8)) = (undefined4)gen_fl2bits((fVar7 + fVar4) + fVar10);
  (*(undefined4 *)((char *)&auVar13 + 12)) = (undefined4)gen_fl2bits(fVar21);
  (*(undefined4 *)((char *)&auVar17 + 4)) = (undefined4)gen_fl2bits(fVar14);
  (*(undefined4 *)((char *)&auVar17 + 0)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar17 + 8)) = (undefined4)gen_fl2bits(fVar15);
  (*(undefined4 *)((char *)&auVar17 + 12)) = (undefined4)gen_fl2bits(fVar21);
  gen_rsqrtps(&(auVar13), &(auVar13), &(auVar17));
  fVar4 = (*(float *)((char *)&auVar13 + 0));
  fVar5 = (*(float *)((char *)&auVar13 + 4));
  fVar7 = (*(float *)((char *)&auVar13 + 8));
  fVar8 = (*(float *)((char *)&auVar13 + 12));
  fVar4 = (*(float *)&REFG(undefined, 0x1136f80) - (fVar4 * fVar12) * fVar4) * (*(float *)&REFG(undefined, 0x1136f90) * fVar4);
  fVar5 = (*(float *)&REFG(undefined, 0x1136f84) - (fVar5 * fVar14) * fVar5) * (*(float *)&REFG(undefined, 0x1136f94) * fVar5);
  fVar7 = (*(float *)&REFG(undefined, 0x1136f88) - (fVar7 * fVar15) * fVar7) * (*(float *)&REFG(undefined, 0x1136f98) * fVar7);
  fVar8 = (*(float *)&REFG(undefined, 0x1136f8c) - (fVar8 * fVar21) * fVar8) * (*(float *)&REFG(undefined, 0x1136f9c) * fVar8);
  uVar16 = (uint)gen_fl2bits(fVar4) & *(uint *)&REFG(undefined, 0x1134d20);
  uVar18 = (uint)gen_fl2bits(fVar5) & *(uint *)&REFG(undefined, 0x1134d24);
  uVar19 = (uint)gen_fl2bits(fVar7) & *(uint *)&REFG(undefined, 0x1134d28);
  uVar20 = (uint)gen_fl2bits(fVar8) & *(uint *)&REFG(undefined, 0x1134d2c);
  uVar6 = uVar19 | uVar16;
  uVar9 = uVar20 | uVar18;
  uVar16 = uVar16 | uVar19;
  uVar18 = uVar18 | uVar20;
  *in_ecx = gen_bits2f(uVar9 | uVar6) * fVar1;
  in_ecx[1] = gen_bits2f(uVar6 | uVar9) * fVar2;
  in_ecx[2] = gen_bits2f(uVar18 | uVar16) * fVar3;
  in_ecx[3] = gen_bits2f(uVar16 | uVar18) * in_ecx[3];
  uVar6 = (uint)gen_fl2bits(fVar4) & *(uint *)&REFG(undefined, 0x1134d50);
  uVar9 = (uint)gen_fl2bits(fVar5) & *(uint *)&REFG(undefined, 0x1134d54);
  uVar16 = (uint)gen_fl2bits(fVar7) & *(uint *)&REFG(undefined, 0x1134d58);
  uVar18 = (uint)gen_fl2bits(fVar8) & *(uint *)&REFG(undefined, 0x1134d5c);
  uVar19 = uVar16 | uVar6;
  uVar20 = uVar18 | uVar9;
  uVar6 = uVar6 | uVar16;
  uVar9 = uVar9 | uVar18;
  *in_eax = gen_bits2f(uVar20 | uVar19) * *in_eax;
  in_eax[1] = gen_bits2f(uVar19 | uVar20) * in_eax[1];
  in_eax[2] = gen_bits2f(uVar9 | uVar6) * in_eax[2];
  in_eax[3] = gen_bits2f(uVar6 | uVar9) * in_eax[3];
  return 0;
}

/* ref: FUN_00d65320 */
uint F_00d65320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd65320u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d65170(*(undefined4 *)(param_1 + 0x74),param_3,param_1 + 0x40,param_2);
  return uVar1;
}

/* ref: FUN_00d65340 */
unsigned int F_00d65340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd65340u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short sVar6;
  float fVar7;
  float * pfVar8;
  int iVar9;
  float * pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_18;
  float * local_14;
  
  if (param_3 == 0) {
    if (0 < param_4) {
      pfVar10 = (float *)(param_5 + 0x20);
      local_14 = param_2;
      pfVar8 = (float *)(param_1 + 0x10);
      iVar11 = (int)param_2 - param_1;
      local_18 = param_4;
      do {
        fVar22 = *pfVar8;
        fVar23 = pfVar8[1];
        fVar7 = pfVar8[2];
        fVar20 = pfVar8[3];
        fVar19 = *local_14;
        fVar14 = local_14[1];
        fVar16 = local_14[2];
        fVar21 = local_14[3];
        fVar12 = fVar22 * fVar19;
        fVar13 = fVar23 * fVar14;
        fVar15 = fVar7 * fVar16;
        fVar17 = (((fVar13 + fVar12) + fVar15) * fVar22 +
                 (fVar20 * fVar20 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 fVar19) + (fVar23 * fVar16 - fVar7 * fVar14) * fVar20;
        fVar18 = (((fVar13 + fVar12) + fVar15) * fVar23 +
                 (fVar20 * fVar20 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 fVar14) + (fVar7 * fVar19 - fVar22 * fVar16) * fVar20;
        fVar19 = (((fVar13 + fVar12) + fVar15) * fVar7 +
                 (fVar20 * fVar20 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 fVar16) + (fVar22 * fVar14 - fVar23 * fVar19) * fVar20;
        fVar20 = (((fVar13 + fVar12) + fVar15) * fVar20 +
                 (fVar20 * fVar20 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 fVar21) + (fVar20 * fVar21 - fVar20 * fVar21) * fVar20;
        fVar22 = pfVar8[-3];
        fVar23 = pfVar8[-2];
        fVar7 = pfVar8[-1];
        pfVar10[-8] = (fVar17 + fVar17) + pfVar8[-4];
        pfVar10[-7] = (fVar18 + fVar18) + fVar22;
        pfVar10[-6] = (fVar19 + fVar19) + fVar23;
        pfVar10[-5] = (fVar20 + fVar20) + fVar7;
        fVar22 = *(float *)((int)pfVar8 + iVar11 + 0xc);
        local_30 = gen_bits2f((uint)*(undefined8 *)pfVar8);
        fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)pfVar8) >> 0x20));
        fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar8 + 2));
        local_40 = gen_bits2f((uint)*(undefined8 *)(iVar11 + (int)pfVar8));
        fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar11 + (int)pfVar8) >> 0x20));
        fStack_38 = gen_bits2f((uint)*(undefined8 *)(iVar11 + 8 + (int)pfVar8));
        fVar23 = pfVar8[3];
        local_14 = local_14 + 0xc;
        pfVar1 = ((float *)GEN_TOP(((param_5 - param_1) + (int)pfVar8)));
        *pfVar1 = ((fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar23) +
                  local_30 * fVar22;
        pfVar1[1] = ((fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar23) +
                    fStack_2c * fVar22;
        pfVar1[2] = ((local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar23) +
                    fStack_28 * fVar22;
        pfVar1[3] = fVar22 * fVar23 -
                    ((fStack_2c * fStack_3c + local_30 * local_40) + fStack_28 * fStack_38);
        pfVar1 = ((float *)GEN_TOP((((int)param_2 - param_5) + (int)pfVar10)));
        fVar22 = pfVar1[1];
        fVar23 = pfVar1[2];
        fVar7 = pfVar1[3];
        fVar20 = pfVar8[5];
        fVar19 = pfVar8[6];
        fVar14 = pfVar8[7];
        *pfVar10 = *pfVar1 * pfVar8[4];
        pfVar10[1] = fVar22 * fVar20;
        pfVar10[2] = fVar23 * fVar19;
        pfVar10[3] = fVar7 * fVar14;
        pfVar8 = pfVar8 + 0xc;
        pfVar10 = pfVar10 + 0xc;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      return 0;
    }
  }
  else {
    iVar11 = 0;
    pfVar10 = param_2;
    if (0 < param_4) {
      do {
        sVar6 = *(short *)(param_3 + iVar11 * 2);
        if (-1 < sVar6) {
          fVar22 = *pfVar10;
          fVar23 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar20 = pfVar10[3];
          iVar9 = (int)sVar6;
          uVar2 = *(undefined8 *)(param_1 + iVar9 * 0x30);
          uVar3 = *(undefined8 *)(param_1 + 8 + iVar9 * 0x30);
          uVar4 = *(undefined8 *)(param_1 + 0x10 + iVar9 * 0x30);
          uVar5 = *(undefined8 *)(param_1 + 0x18 + iVar9 * 0x30);
          local_60 = gen_bits2f((uint)uVar4);
          fStack_5c = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
          fStack_58 = gen_bits2f((uint)uVar5);
          fStack_54 = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
          uVar4 = *(undefined8 *)(param_1 + 0x20 + iVar9 * 0x30);
          uVar5 = *(undefined8 *)(param_1 + 0x28 + iVar9 * 0x30);
          fVar19 = fVar22 * local_60;
          fVar14 = fVar23 * fStack_5c;
          fVar16 = fVar7 * fStack_58;
          fVar21 = (((fVar14 + fVar19) + fVar16) * local_60 +
                   (fStack_54 * fStack_54 +
                   gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar22) +
                   (fVar7 * fStack_5c - fVar23 * fStack_58) * fStack_54;
          fVar12 = (((fVar14 + fVar19) + fVar16) * fStack_5c +
                   (fStack_54 * fStack_54 +
                   gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar23) +
                   (fVar22 * fStack_58 - fVar7 * local_60) * fStack_54;
          fVar22 = (((fVar14 + fVar19) + fVar16) * fStack_58 +
                   (fStack_54 * fStack_54 +
                   gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar7) +
                   (fVar23 * local_60 - fVar22 * fStack_5c) * fStack_54;
          fVar23 = (((fVar14 + fVar19) + fVar16) * fStack_54 +
                   (fStack_54 * fStack_54 +
                   gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar20) +
                   (fVar20 * fStack_54 - fVar20 * fStack_54) * fStack_54;
          local_70 = gen_bits2f((uint)uVar2);
          fStack_6c = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
          fStack_68 = gen_bits2f((uint)uVar3);
          fStack_64 = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
          pfVar8 = (float *)(param_5 + iVar9 * 0x30);
          *pfVar8 = (fVar21 + fVar21) + local_70;
          pfVar8[1] = (fVar12 + fVar12) + fStack_6c;
          pfVar8[2] = (fVar22 + fVar22) + fStack_68;
          pfVar8[3] = (fVar23 + fVar23) + fStack_64;
          fVar22 = pfVar10[7];
          local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar10 + 4));
          fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar10 + 4) >> 0x20));
          fStack_38 = gen_bits2f((uint)*(undefined8 *)(pfVar10 + 6));
          pfVar8 = (float *)(param_5 + 0x10 + iVar9 * 0x30);
          *pfVar8 = ((fStack_38 * fStack_5c - fStack_3c * fStack_58) + local_40 * fStack_54) +
                    fVar22 * local_60;
          pfVar8[1] = ((local_40 * fStack_58 - fStack_38 * local_60) + fStack_3c * fStack_54) +
                      fVar22 * fStack_5c;
          pfVar8[2] = ((fStack_3c * local_60 - local_40 * fStack_5c) + fStack_38 * fStack_54) +
                      fVar22 * fStack_58;
          pfVar8[3] = fVar22 * fStack_54 -
                      ((fStack_5c * fStack_3c + local_60 * local_40) + fStack_58 * fStack_38);
          fVar22 = pfVar10[9];
          fVar23 = pfVar10[10];
          fVar7 = pfVar10[0xb];
          local_50 = gen_bits2f((uint)uVar4);
          fStack_4c = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
          fStack_48 = gen_bits2f((uint)uVar5);
          fStack_44 = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
          pfVar8 = (float *)(param_5 + 0x20 + iVar9 * 0x30);
          *pfVar8 = pfVar10[8] * local_50;
          pfVar8[1] = fVar22 * fStack_4c;
          pfVar8[2] = fVar23 * fStack_48;
          pfVar8[3] = fVar7 * fStack_44;
        }
        iVar11 = iVar11 + 1;
        pfVar10 = pfVar10 + 0xc;
      } while (iVar11 < param_4);
    }
  }
  return 0;
}

/* ref: FUN_00d65670 */
unsigned int F_00d65670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd65670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_00d65340(param_1,param_2,param_3,param_4,param_5);
  return 0;
}

/* ref: FUN_00d65680 */
uint F_00d65680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd65680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint * puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  LPVOID pvVar7;
  uint * puVar8;
  uint * this;
  uint uVar9;
  uint * puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 in_XMM1 [16] = {0};
  int local_18;
  
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar8 = *(uint * PTR32 *)((int)pvVar7 + 0xc);
  uVar9 = param_4 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar7 + 8) < (int)uVar9) ||
     (*(uint *)((int)pvVar7 + 0x10) < (int)puVar8 + uVar9)) {
    puVar8 = (uint *)F_00d94390(pvVar7,uVar9);
  }
  else {
    *(uint *)((int)pvVar7 + 0xc) = (int)puVar8 + uVar9;
  }
  fVar6 = *(float *)&REFG(undefined, 0x1136f7c);
  fVar5 = *(float *)&REFG(undefined, 0x1136f78);
  fVar4 = *(float *)&REFG(undefined, 0x1136f74);
  fVar3 = *(float *)&REFG(undefined, 0x1136f70);
  if (0 < param_4) {
    puVar10 = (uint *)(param_2 + 0x10);
    local_18 = param_4;
    this = puVar8;
    do {
      F_00d95160(this,puVar10,puVar10 + -4);
      uVar11 = this[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar12 = this[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar13 = this[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      *this = *this ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      this[1] = uVar11;
      this[2] = uVar12;
      this[3] = uVar13;
      uVar11 = puVar10[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4);
      uVar12 = puVar10[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8);
      uVar13 = puVar10[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc);
      puVar1 = ((uint *)GEN_TOP((((int)puVar8 - param_2) + (int)puVar10)));
      *puVar1 = *puVar10 ^ *(uint *)&REFG(undefined, 0x10ab9b0);
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      memcpy(&(auVar2), &(*(gen_v16 *)(puVar10 + 4)), sizeof(*(gen_v16 *)(puVar10 + 4)) < sizeof(auVar2) ? sizeof(*(gen_v16 *)(puVar10 + 4)) : sizeof(auVar2));
      gen_rcpps(&(in_XMM1), &(in_XMM1), &(auVar2));
      this[8] = (uint)gen_fl2bits((fVar3 - (*(float *)((char *)&auVar2 + 0)) * (*(float *)((char *)&in_XMM1 + 0))) * (*(float *)((char *)&in_XMM1 + 0)));
      this[9] = (uint)gen_fl2bits((fVar4 - (*(float *)((char *)&auVar2 + 4)) * (*(float *)((char *)&in_XMM1 + 4))) * (*(float *)((char *)&in_XMM1 + 4)));
      this[10] = (uint)gen_fl2bits((fVar5 - (*(float *)((char *)&auVar2 + 8)) * (*(float *)((char *)&in_XMM1 + 8))) * (*(float *)((char *)&in_XMM1 + 8)));
      this[0xb] = (uint)gen_fl2bits((fVar6 - (*(float *)((char *)&auVar2 + 12)) * (*(float *)((char *)&in_XMM1 + 12))) * (*(float *)((char *)&in_XMM1 + 12)));
      uVar11 = this[9] & *(uint *)&REFG(undefined, 0x10abc24);
      uVar12 = this[10] & *(uint *)&REFG(undefined, 0x10abc28);
      uVar13 = this[0xb] & *(uint *)&REFG(undefined, 0x10abc2c);
      this[8] = this[8] & *(uint *)&REFG(undefined, 0x10abc20);
      this[9] = uVar11;
      this[10] = uVar12;
      this[0xb] = uVar13;
      puVar10 = puVar10 + 0xc;
      this = this + 0xc;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  F_00d65340(param_1,puVar8,param_3,param_4,param_5);
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar9 <= *(int *)((int)pvVar7 + 8)) &&
      (uVar9 + (int)puVar8 == *(int *)((int)pvVar7 + 0xc))) &&
     (*(uint * PTR32 *)((int)pvVar7 + 0x14) != puVar8)) {
    *(uint * PTR32 *)((int)pvVar7 + 0xc) = puVar8;
    return (uint)pvVar7;
  }
  uVar9 = F_00d945c0(pvVar7,puVar8,uVar9);
  return uVar9;
}

/* ref: FUN_00d657d0 */
uint F_00d657d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd657d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  uint param_8 = (uint)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined8 * puVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined4 * puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  short sVar16;
  LPVOID pvVar17;
  int iVar18;
  short sVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  float * pfVar25;
  int iVar26;
  short * psVar27;
  bool bVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [12];
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar40 [16];
  float fVar42;
  undefined1 auVar41 [16];
  float fVar43;
  float fVar45;
  float fVar46;
  undefined1 auVar44 [16];
  
  pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar4 = *(undefined4 * PTR32 *)((int)pvVar17 + 4);
  if (puVar4 < *(undefined4 * PTR32 *)((int)pvVar17 + 0xc)) {
    *puVar4 = "LtMapPoseLocalSpace";
    puVar4[3] = "Stinit";
    uVar5 = rdtsc();
    (*(uint *)(gen_frame + 0xcc)) = (int)uVar5;
    puVar4[1] = (int)uVar5;
    *(undefined4 * PTR32 *)((int)pvVar17 + 4) = puVar4 + 4;
  }
  pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar4 = *(undefined4 * PTR32 *)((int)pvVar17 + 4);
  if (puVar4 < *(undefined4 * PTR32 *)((int)pvVar17 + 0xc)) {
    *puVar4 = "StsimpleMappings";
    uVar5 = rdtsc();
    (*(uint *)(gen_frame + 0xcc)) = (int)uVar5;
    puVar4[1] = (int)uVar5;
    *(undefined4 * PTR32 *)((int)pvVar17 + 4) = puVar4 + 3;
  }
  iVar18 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x1c)));
  pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar23 = *(uint *)((int)pvVar17 + 0xc);
  uVar21 = iVar18 * 0x30 + 0x7fU & 0xffffff80;
  (*(uint *)(gen_frame + 0x9c)) = uVar21;
  if ((*(int *)((int)pvVar17 + 8) < (int)uVar21) ||
     (*(uint *)((int)pvVar17 + 0x10) < uVar23 + uVar21)) {
    uVar23 = F_00d94390(pvVar17,uVar21);
    (*(uint *)(gen_frame + 0xcc)) = uVar23;
  }
  else {
    *(uint *)((int)pvVar17 + 0xc) = uVar23 + uVar21;
    (*(uint *)(gen_frame + 0xcc)) = uVar23;
  }
  (*(int *)(gen_frame + 0xc0)) = 0;
  (*(uint *)(gen_frame + 0xcc)) = uVar23;
  if (param_8 == 0) {
    iVar18 = *((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x1c)));
    iVar24 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x1c)));
    if (iVar18 < iVar24) {
      (*(int *)(gen_frame + 0xc0)) = iVar24;
      iVar18 = iVar24;
    }
    else {
      (*(int *)(gen_frame + 0xc0)) = iVar18;
    }
    (*(int *)(gen_frame + 0xc0)) = iVar18;
    pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    param_7 = *(uint *)((int)pvVar17 + 0xc);
    uVar21 = iVar18 * 4 + 0x7fU & 0xffffff80;
    if ((*(int *)((int)pvVar17 + 8) < (int)uVar21) ||
       (*(uint *)((int)pvVar17 + 0x10) < param_7 + uVar21)) {
      param_7 = F_00d94390(pvVar17,uVar21);
      param_8 = param_7;
    }
    else {
      *(uint *)((int)pvVar17 + 0xc) = param_7 + uVar21;
      param_8 = param_7;
    }
  }
  if ((param_4 == 0) || ((*(char *)(gen_frame + 0xdf)) = '\x01', param_5 == 0)) {
    (*(char *)(gen_frame + 0xdf)) = '\0';
  }
  if ((char)param_6 == '\0') {
    (*(uint *)(gen_frame + 0xbc)) = param_2;
  }
  else {
    F_00d65670(param_2,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x24))),param_4,
                 *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x1c))),uVar23);
    (*(uint *)(gen_frame + 0xbc)) = uVar23;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    (*(uint *)(gen_frame + 0xd8)) = 0;
    (*(int *)(gen_frame + 0xc4)) = *(int *)(param_1 + 0x1c);
    do {
      iVar18 = *(int *)(param_1 + 0x18);
      iVar24 = (int)*(short *)(iVar18 + (*(uint *)(gen_frame + 0xd8)));
      iVar26 = (int)*(short *)(iVar18 + 2 + (*(uint *)(gen_frame + 0xd8)));
      if ((*(char *)(gen_frame + 0xdf)) == '\0') {
LAB_00d6598f: ;
        iVar22 = iVar24 * 0x30 + (*(uint *)(gen_frame + 0xbc));
        (*(int *)(gen_frame + 0xd0)) = iVar22;
        iVar20 = param_3 + iVar26 * 0x30;
        (*(int *)(gen_frame + 0xc8)) = iVar20;
        F_00d65170(*(undefined4 *)(param_1 + 0x74),iVar20,iVar18 + 0x10 + (*(uint *)(gen_frame + 0xd8)),iVar22);
        *(undefined4 *)(param_8 + iVar26 * 4) = *(undefined4 *)(param_7 + iVar24 * 4);
        uVar23 = (*(uint *)(gen_frame + 0xd8));
      }
      else {
        iVar24 = (int)*(short *)(param_4 + iVar24 * 2);
        uVar23 = (*(uint *)(gen_frame + 0xd8));
        if (-1 < iVar24) {
          iVar26 = (int)*(short *)(param_5 + iVar26 * 2);
          goto LAB_00d6598f;
        }
      }
      iVar18 = (*(int *)(gen_frame + 0xc4)) + -1;
      (*(int *)(gen_frame + 0xc4)) = iVar18;
      (*(uint *)(gen_frame + 0xd8)) = uVar23 + 0x40;
    } while (iVar18 != 0);
  }
  pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar4 = *(undefined4 * PTR32 *)((int)pvVar17 + 4);
  if (puVar4 < *(undefined4 * PTR32 *)((int)pvVar17 + 0xc)) {
    *puVar4 = "StchainMappings";
    uVar5 = rdtsc();
    (*(int *)(gen_frame + 0xd0)) = (int)uVar5;
    puVar4[1] = (int)uVar5;
    *(undefined4 * PTR32 *)((int)pvVar17 + 4) = puVar4 + 3;
  }
  fVar11 = *(float *)&REFG(undefined, 0x1136fcc);
  fVar10 = *(float *)&REFG(undefined, 0x1136fc8);
  fVar9 = *(float *)&REFG(undefined, 0x1136fc4);
  fVar8 = *(float *)&REFG(undefined, 0x1136fc0);
  if (0 < *(int *)(param_1 + 0x28)) {
    (*(float *)(gen_frame + 0x70)) = 0.0;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    (*(float *)(gen_frame + 0x78)) = 0.0;
    (*(float *)(gen_frame + 0x7c)) = 0.0;
    (*(int *)(gen_frame + 0xd0)) = 0;
    (*(int *)(gen_frame + 0xc8)) = *(int *)(param_1 + 0x28);
    do {
      psVar27 = ((short *)GEN_TOP((*(int *)(param_1 + 0x24) + (*(int *)(gen_frame + 0xd0)))));
      (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x74));
      (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x78));
      (*(float *)(gen_frame + 0x8c)) = (*(float *)(gen_frame + 0x7c));
      (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0x74));
      (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0x78));
      (*(float *)(gen_frame + 0xac)) = (*(float *)(gen_frame + 0x7c));
      (*(float *)(gen_frame + 0x20)) = fVar8;
      (*(float *)(gen_frame + 0x24)) = fVar9;
      (*(float *)(gen_frame + 0x28)) = fVar10;
      (*(float *)(gen_frame + 0x2c)) = fVar11;
      (*(char *)(gen_frame + 0xd7)) = '\x01';
      (*(uint *)(gen_frame + 0xd8)) = (uint)(ushort)psVar27[1];
      if (*psVar27 < psVar27[1]) {
        do {
          sVar16 = (short)(*(uint *)(gen_frame + 0xd8));
          sVar19 = sVar16;
          if ((*(char *)(gen_frame + 0xdf)) != '\0') {
            sVar19 = *(short *)(param_4 + sVar16 * 2);
          }
          if ((sVar19 < 0) ||
             (((*(int *)(gen_frame + 0xc0)) == 0 &&
              (fVar29 = *(float *)(param_7 + sVar16 * 4),
              bVar28 = GEN_ISNAN(fVar29) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
              bVar28 != (bVar28 || fVar29 == *(float *)&REFG(undefined, 0x1088114)))))) {
            (*(char *)(gen_frame + 0xd7)) = '\0';
            break;
          }
          pfVar25 = (float *)(sVar19 * 0x30 + (*(uint *)(gen_frame + 0xbc)));
          (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x80));
          (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x84));
          (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x88));
          (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x8c));
          F_00d950d0(&(*(float *)(gen_frame + 0x80)),pfVar25 + 4,&(*(float *)(gen_frame + 0x10)));
          (*(float *)(gen_frame + 0x80)) = *pfVar25 + (*(float *)(gen_frame + 0x80));
          (*(float *)(gen_frame + 0x84)) = pfVar25[1] + (*(float *)(gen_frame + 0x84));
          (*(float *)(gen_frame + 0x88)) = pfVar25[2] + (*(float *)(gen_frame + 0x88));
          (*(float *)(gen_frame + 0x8c)) = pfVar25[3] + (*(float *)(gen_frame + 0x8c));
          uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xc))) + (short)(*(uint *)(gen_frame + 0xd8)) * 2)));
          fVar29 = *pfVar25 * *pfVar25;
          fVar31 = pfVar25[1] * pfVar25[1];
          fVar32 = pfVar25[2] * pfVar25[2];
          (*(float *)((char *)&auVar40 + 0)) = (fVar31 + fVar29) + fVar32;
          (*(float *)((char *)&auVar40 + 4)) = (fVar31 + fVar29) + fVar32;
          (*(float *)((char *)&auVar40 + 8)) = (fVar31 + fVar29) + fVar32;
          (*(float *)((char *)&auVar40 + 12)) = (fVar31 + fVar29) + fVar32;
          gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar40));
          fVar29 = (*(float *)((char *)&in_XMM3 + 0));
          fVar31 = (*(float *)((char *)&in_XMM3 + 4));
          fVar32 = (*(float *)((char *)&in_XMM3 + 8));
          fVar36 = (*(float *)((char *)&in_XMM3 + 12));
          (*(float *)(gen_frame + 0x20)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar40 + 0)) <= (*(float *)(gen_frame + 0x70))) &
                                (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136f80) -
                                                   (fVar29 * (*(float *)((char *)&auVar40 + 0))) * fVar29) *
                                                  (*(float *)&REFG(undefined, 0x1136f90) * fVar29)) *
                                                  (*(float *)((char *)&auVar40 + 0)))) + (*(float *)(gen_frame + 0x20));
          (*(float *)(gen_frame + 0x24)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar40 + 4)) <= (*(float *)(gen_frame + 0x74))) &
                                 (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136f84) -
                                                    (fVar31 * (*(float *)((char *)&auVar40 + 4))) * fVar31) *
                                                   (*(float *)&REFG(undefined, 0x1136f94) * fVar31)) *
                                                   (*(float *)((char *)&auVar40 + 4)))) + (*(float *)(gen_frame + 0x24));
          (*(float *)(gen_frame + 0x28)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar40 + 8)) <= (*(float *)(gen_frame + 0x78))) &
                                 (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136f88) -
                                                    (fVar32 * (*(float *)((char *)&auVar40 + 8))) * fVar32) *
                                                   (*(float *)&REFG(undefined, 0x1136f98) * fVar32)) *
                                                   (*(float *)((char *)&auVar40 + 8)))) + (*(float *)(gen_frame + 0x28));
          (*(float *)(gen_frame + 0x2c)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar40 + 12)) <= (*(float *)(gen_frame + 0x7c))) &
                                 (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136f8c) -
                                                    (fVar36 * (*(float *)((char *)&auVar40 + 12))) * fVar36) *
                                                   (*(float *)&REFG(undefined, 0x1136f9c) * fVar36)) *
                                                   (*(float *)((char *)&auVar40 + 12)))) + (*(float *)(gen_frame + 0x2c));
          (*(uint *)(gen_frame + 0xd8)) = (uint)uVar3;
        } while (*psVar27 < (short)uVar3);
      }
      if ((*(char *)(gen_frame + 0xdf)) == '\0') {
        if ((*(char *)(gen_frame + 0xd7)) != '\0') goto LAB_00d65bc5;
      }
      else if ((((*(char *)(gen_frame + 0xd7)) != '\0') && (-1 < *(short *)(param_4 + *psVar27 * 2))) &&
              ((0 < (*(int *)(gen_frame + 0xc0)) ||
               (pfVar25 = (float *)(param_7 + *psVar27 * 4), bVar28 = GEN_ISNAN(*pfVar25),
               bVar28 == (bVar28 || *pfVar25 == 0.0))))) {
LAB_00d65bc5: ;
        fVar29 = *(float *)(psVar27 + 0x30) * (*(float *)(gen_frame + 0x20));
        fVar31 = *(float *)(psVar27 + 0x32) * (*(float *)(gen_frame + 0x24));
        fVar32 = *(float *)(psVar27 + 0x34) * (*(float *)(gen_frame + 0x28));
        fVar36 = *(float *)(psVar27 + 0x36) * (*(float *)(gen_frame + 0x2c));
        (*(int *)(gen_frame + 0xc4)) = 1;
        (*(uint *)(gen_frame + 0xd8)) = (uint)(ushort)psVar27[3];
        if (psVar27[2] < psVar27[3]) {
          do {
            sVar19 = (short)(*(uint *)(gen_frame + 0xd8));
            if ((*(char *)(gen_frame + 0xdf)) != '\0') {
              sVar19 = *(short *)(param_5 + (short)(*(uint *)(gen_frame + 0xd8)) * 2);
            }
            pfVar25 = (float *)(sVar19 * 0x30 + param_3);
            *pfVar25 = *pfVar25 * fVar29;
            pfVar25[1] = pfVar25[1] * fVar31;
            pfVar25[2] = pfVar25[2] * fVar32;
            pfVar25[3] = pfVar25[3] * fVar36;
            (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0xa0));
            (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0xa4));
            (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0xa8));
            (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0xac));
            F_00d950d0(&(*(float *)(gen_frame + 0xa0)),pfVar25 + 4,&(*(float *)(gen_frame + 0x0)));
            (*(int *)(gen_frame + 0xc4)) = (*(int *)(gen_frame + 0xc4)) + 1;
            (*(float *)(gen_frame + 0xa0)) = *pfVar25 + (*(float *)(gen_frame + 0xa0));
            (*(float *)(gen_frame + 0xa4)) = pfVar25[1] + (*(float *)(gen_frame + 0xa4));
            (*(float *)(gen_frame + 0xa8)) = pfVar25[2] + (*(float *)(gen_frame + 0xa8));
            (*(float *)(gen_frame + 0xac)) = pfVar25[3] + (*(float *)(gen_frame + 0xac));
            uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 0xc))) + (short)(*(uint *)(gen_frame + 0xd8)) * 2)));
            (*(uint *)(gen_frame + 0xd8)) = (uint)uVar3;
          } while (psVar27[2] < (short)uVar3);
        }
        iVar18 = (int)*psVar27;
        iVar24 = (int)psVar27[2];
        (*(int *)(gen_frame + 0xb8)) = (int)psVar27[1];
        (*(uint *)(gen_frame + 0xd8)) = (int)psVar27[3];
        if ((*(char *)(gen_frame + 0xdf)) != '\0') {
          iVar18 = (int)*(short *)(param_4 + iVar18 * 2);
          iVar24 = (int)*(short *)(param_5 + iVar24 * 2);
          (*(int *)(gen_frame + 0xb8)) = (int)*(short *)(param_4 + psVar27[1] * 2);
          (*(uint *)(gen_frame + 0xd8)) = (int)*(short *)(param_5 + psVar27[3] * 2);
        }
        iVar24 = iVar24 * 0x30 + param_3;
        F_00d65170(*(undefined4 *)(param_1 + 0x74),iVar24,psVar27 + 8,iVar18 * 0x30 + (*(uint *)(gen_frame + 0xbc)));
        F_00d65260(&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x80)));
        fVar29 = (*(float *)(gen_frame + 0xa0)) * (*(float *)(gen_frame + 0x80));
        fVar31 = (*(float *)(gen_frame + 0xa4)) * (*(float *)(gen_frame + 0x84));
        fVar35 = (*(float *)(gen_frame + 0xa8)) * (*(float *)(gen_frame + 0x88));
        fVar43 = (fVar31 + fVar29) + fVar35;
        fVar45 = (fVar31 + fVar29) + fVar35;
        fVar46 = (fVar31 + fVar29) + fVar35;
        fVar35 = (fVar31 + fVar29) + fVar35;
        fVar29 = *(float *)&REFG(undefined, 0x1138ca0);
        fVar31 = *(float *)&REFG(undefined, 0x1138ca4);
        fVar32 = *(float *)&REFG(undefined, 0x1138ca8);
        fVar36 = *(float *)&REFG(undefined, 0x1138cac);
        if (*(float *)&REFG(undefined, 0x1136fa0) < fVar43) {
LAB_00d65e54: ;
          (*(float *)(gen_frame + 0x60)) = fVar29;
          (*(float *)(gen_frame + 0x64)) = fVar31;
          (*(float *)(gen_frame + 0x68)) = fVar32;
          (*(float *)(gen_frame + 0x6c)) = fVar36;
        }
        else {
          (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x74)));
          (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x70)));
          (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x78)));
          (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x7c)));
          if ((!GEN_ISNAN(fVar43) && !GEN_ISNAN((*(float *)(gen_frame + 0x70)) - *(float *)&REFG(undefined, 0x1136fa0))) &&
              !(fVar43 < (*(float *)(gen_frame + 0x70)) - *(float *)&REFG(undefined, 0x1136fa0))) {
            fVar37 = *(float *)&REFG(undefined, 0x1138bd0) * fVar43 + *(float *)&REFG(undefined, 0x1138bd0);
            fVar38 = *(float *)&REFG(undefined, 0x1138bd4) * fVar45 + *(float *)&REFG(undefined, 0x1138bd4);
            fVar39 = *(float *)&REFG(undefined, 0x1138bd8) * fVar46 + *(float *)&REFG(undefined, 0x1138bd8);
            fVar36 = *(float *)&REFG(undefined, 0x1138bdc) * fVar35 + *(float *)&REFG(undefined, 0x1138bdc);
            (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(fVar38);
            (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(fVar37);
            (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(fVar39);
            (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(fVar36);
            gen_rsqrtps(&(auVar40), &(auVar7), &(auVar6));
            fVar29 = (*(float *)((char *)&auVar40 + 0));
            fVar31 = (*(float *)((char *)&auVar40 + 4));
            fVar32 = (*(float *)((char *)&auVar40 + 8));
            fVar42 = (*(float *)((char *)&auVar40 + 12));
            (*(float *)((char *)&auVar30 + 0)) =
                 gen_bits2f(~-(uint)(fVar37 <= (*(float *)(gen_frame + 0x70))) &
                            (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f80) - (fVar29 * fVar37) * fVar29)
                                              * (fVar29 * *(float *)&REFG(undefined, 0x1136f90)))) *
                 *(float *)&REFG(undefined, 0x1138bd0);
            (*(float *)((char *)&auVar30 + 4)) =
                 gen_bits2f(~-(uint)(fVar38 <= (*(float *)(gen_frame + 0x74))) &
                            (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f84) - (fVar31 * fVar38) * fVar31)
                                              * (fVar31 * *(float *)&REFG(undefined, 0x1136f94)))) *
                 *(float *)&REFG(undefined, 0x1138bd4);
            (*(float *)((char *)&auVar30 + 8)) =
                 gen_bits2f(~-(uint)(fVar39 <= (*(float *)(gen_frame + 0x78))) &
                            (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f88) - (fVar32 * fVar39) * fVar32)
                                              * (fVar32 * *(float *)&REFG(undefined, 0x1136f98)))) *
                 *(float *)&REFG(undefined, 0x1138bd8);
            fVar29 = (*(float *)(gen_frame + 0xa4)) * (*(float *)(gen_frame + 0x88)) - (*(float *)(gen_frame + 0xa8)) * (*(float *)(gen_frame + 0x84));
            fVar31 = (*(float *)(gen_frame + 0xa8)) * (*(float *)(gen_frame + 0x80)) - (*(float *)(gen_frame + 0xa0)) * (*(float *)(gen_frame + 0x88));
            fVar32 = (*(float *)(gen_frame + 0xa0)) * (*(float *)(gen_frame + 0x84)) - (*(float *)(gen_frame + 0xa4)) * (*(float *)(gen_frame + 0x80));
            if (!(*(float *)&REFG(undefined, 0x1136fb0) <= fVar43)) {
              (*(float *)((char *)&auVar41 + 0)) = fVar37 - fVar43;
              (*(float *)((char *)&auVar41 + 4)) = fVar38 - fVar45;
              (*(float *)((char *)&auVar41 + 8)) = fVar39 - fVar46;
              (*(float *)((char *)&auVar41 + 12)) = fVar36 - fVar35;
              fVar35 = fVar29 * fVar29;
              fVar43 = fVar31 * fVar31;
              fVar45 = fVar32 * fVar32;
              (*(undefined4 *)((char *)&auVar44 + 4)) = (undefined4)gen_fl2bits(fVar35);
              (*(undefined4 *)((char *)&auVar44 + 0)) = (undefined4)gen_fl2bits(fVar35);
              (*(undefined4 *)((char *)&auVar44 + 8)) = (undefined4)gen_fl2bits(fVar35);
              (*(undefined4 *)((char *)&auVar44 + 12)) = (undefined4)gen_fl2bits(fVar35);
              (*(float *)((char *)&auVar33 + 0)) = (fVar43 + fVar35) + fVar45;
              (*(float *)((char *)&auVar33 + 4)) = (fVar43 + fVar35) + fVar45;
              (*(float *)((char *)&auVar33 + 8)) = (fVar43 + fVar35) + fVar45;
              (*(float *)((char *)&auVar33 + 12)) = (fVar43 + fVar35) + fVar45;
              gen_rsqrtps(&(auVar40), &(auVar44), &(auVar33));
              fVar35 = (*(float *)((char *)&auVar40 + 0));
              fVar43 = (*(float *)((char *)&auVar40 + 4));
              fVar45 = (*(float *)((char *)&auVar40 + 8));
              fVar46 = (*(float *)((char *)&auVar40 + 12));
              (*(float *)((char *)&auVar34 + 0)) =
                   (*(float *)&REFG(undefined, 0x1136f80) - (fVar35 * (*(float *)((char *)&auVar33 + 0))) * fVar35) *
                   (fVar35 * *(float *)&REFG(undefined, 0x1136f90));
              (*(float *)((char *)&auVar34 + 4)) =
                   (*(float *)&REFG(undefined, 0x1136f84) - (fVar43 * (*(float *)((char *)&auVar33 + 4))) * fVar43) *
                   (fVar43 * *(float *)&REFG(undefined, 0x1136f94));
              (*(float *)((char *)&auVar34 + 8)) =
                   (*(float *)&REFG(undefined, 0x1136f88) - (fVar45 * (*(float *)((char *)&auVar33 + 8))) * fVar45) *
                   (fVar45 * *(float *)&REFG(undefined, 0x1136f98));
              (*(float *)((char *)&auVar34 + 12)) =
                   (*(float *)&REFG(undefined, 0x1136f8c) - (fVar46 * (*(float *)((char *)&auVar33 + 12))) * fVar46) *
                   (fVar46 * *(float *)&REFG(undefined, 0x1136f9c));
              gen_rsqrtps(&(auVar40), &(auVar34), &(auVar41));
              fVar35 = (*(float *)((char *)&auVar40 + 0));
              fVar43 = (*(float *)((char *)&auVar40 + 4));
              fVar45 = (*(float *)((char *)&auVar40 + 8));
              (*(float *)((char *)&auVar30 + 0)) =
                   (gen_bits2f(~-(uint)((*(float *)((char *)&auVar41 + 0)) <= (*(float *)(gen_frame + 0x70))) &
                               (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f80) -
                                                 (fVar35 * (*(float *)((char *)&auVar41 + 0))) * fVar35) *
                                                 (fVar35 * *(float *)&REFG(undefined, 0x1136f90)))) *
                   (*(float *)((char *)&auVar41 + 0))) *
                   gen_bits2f(~-(uint)((*(float *)((char *)&auVar33 + 0)) <= (*(float *)(gen_frame + 0x70))) &
                              (uint)gen_fl2bits((*(float *)((char *)&auVar34 + 0))));
              (*(float *)((char *)&auVar30 + 4)) =
                   (gen_bits2f(~-(uint)((*(float *)((char *)&auVar41 + 4)) <= (*(float *)(gen_frame + 0x74))) &
                               (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f84) -
                                                 (fVar43 * (*(float *)((char *)&auVar41 + 4))) * fVar43) *
                                                 (fVar43 * *(float *)&REFG(undefined, 0x1136f94)))) *
                   (*(float *)((char *)&auVar41 + 4))) *
                   gen_bits2f(~-(uint)((*(float *)((char *)&auVar33 + 4)) <= (*(float *)(gen_frame + 0x74))) &
                              (uint)gen_fl2bits((*(float *)((char *)&auVar34 + 4))));
              (*(float *)((char *)&auVar30 + 8)) =
                   (gen_bits2f(~-(uint)((*(float *)((char *)&auVar41 + 8)) <= (*(float *)(gen_frame + 0x78))) &
                               (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f88) -
                                                 (fVar45 * (*(float *)((char *)&auVar41 + 8))) * fVar45) *
                                                 (fVar45 * *(float *)&REFG(undefined, 0x1136f98)))) *
                   (*(float *)((char *)&auVar41 + 8))) *
                   gen_bits2f(~-(uint)((*(float *)((char *)&auVar33 + 8)) <= (*(float *)(gen_frame + 0x78))) &
                              (uint)gen_fl2bits((*(float *)((char *)&auVar34 + 8))));
            }
            fVar29 = (*(float *)((char *)&auVar30 + 0)) * fVar29;
            fVar31 = (*(float *)((char *)&auVar30 + 4)) * fVar31;
            fVar32 = (*(float *)((char *)&auVar30 + 8)) * fVar32;
            fVar36 = gen_bits2f(~-(uint)(fVar36 <= (*(float *)(gen_frame + 0x7c))) &
                                (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f8c) -
                                                  (fVar42 * fVar36) * fVar42) *
                                                  (fVar42 * *(float *)&REFG(undefined, 0x1136f9c)))) * fVar36;
            goto LAB_00d65e54;
          }
          F_00d99360(&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0xa0)));
        }
        fVar29 = *(float *)(psVar27 + 0x20);
        fVar31 = *(float *)(psVar27 + 0x22);
        fVar32 = *(float *)(psVar27 + 0x24);
        fVar36 = *(float *)(psVar27 + 0x26);
        fVar35 = (((*(float *)(gen_frame + 0x68)) * fVar31 - (*(float *)(gen_frame + 0x64)) * fVar32) - (*(float *)(gen_frame + 0x6c)) * fVar29) +
                 fVar36 * (*(float *)(gen_frame + 0x60));
        fVar43 = (((*(float *)(gen_frame + 0x60)) * fVar32 - (*(float *)(gen_frame + 0x68)) * fVar29) - (*(float *)(gen_frame + 0x6c)) * fVar31) +
                 fVar36 * (*(float *)(gen_frame + 0x64));
        fVar45 = (((*(float *)(gen_frame + 0x64)) * fVar29 - (*(float *)(gen_frame + 0x60)) * fVar31) - (*(float *)(gen_frame + 0x6c)) * fVar32) +
                 fVar36 * (*(float *)(gen_frame + 0x68));
        fVar31 = ((*(float *)(gen_frame + 0x60)) * fVar29 + (*(float *)(gen_frame + 0x68)) * fVar32) +
                 ((*(float *)(gen_frame + 0x64)) * fVar31 + (*(float *)(gen_frame + 0x6c)) * fVar36);
        uVar5 = *(undefined8 *)(iVar24 + 0x10);
        (*(undefined8 *)(gen_frame + 0x30)) = uVar5;
        uVar12 = (*(undefined8 *)(gen_frame + 0x30));
        (*(undefined8 *)(gen_frame + 0x38)) = *(undefined8 *)(iVar24 + 0x18);
        uVar13 = (*(undefined8 *)(gen_frame + 0x38));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)uVar5);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) = gen_bits2f((uint)*(undefined8 *)(iVar24 + 0x18));
        fVar29 = *(float *)(iVar24 + 0x1c);
        *(float *)(iVar24 + 0x10) =
             (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * fVar45 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * fVar43) + fVar29 * fVar35) +
             (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * fVar31;
        *(float *)(iVar24 + 0x14) =
             (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * fVar35 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * fVar45) + fVar29 * fVar43) +
             (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * fVar31;
        *(float *)(iVar24 + 0x18) =
             (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * fVar43 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * fVar35) + fVar29 * fVar45) +
             (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * fVar31;
        *(float *)(iVar24 + 0x1c) =
             fVar31 * fVar29 -
             ((fVar43 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) + fVar35 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0))) + fVar45 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)));
        uVar5 = *(undefined8 *)(psVar27 + 0x28);
        (*(undefined8 *)(gen_frame + 0x40)) = uVar5;
        uVar5 = (*(undefined8 *)(gen_frame + 0x40));
        puVar1 = (undefined8 *)((*(uint *)(gen_frame + 0xbc)) + 0x10 + (*(int *)(gen_frame + 0xb8)) * 0x30);
        (*(undefined8 *)(gen_frame + 0x48)) = *(undefined8 *)(psVar27 + 0x2c);
        uVar14 = (*(undefined8 *)(gen_frame + 0x48));
        uVar2 = *puVar1;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) = gen_bits2f((uint)uVar5);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) = gen_bits2f((uint)*(undefined8 *)(psVar27 + 0x2c));
        fVar29 = *(float *)((int)puVar1 + 0xc);
        (*(undefined8 *)(gen_frame + 0x50)) = uVar2;
        uVar2 = (*(undefined8 *)(gen_frame + 0x50));
        (*(undefined8 *)(gen_frame + 0x58)) = puVar1[1];
        uVar15 = (*(undefined8 *)(gen_frame + 0x58));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) = gen_bits2f((uint)uVar2);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) = gen_bits2f((uint)puVar1[1]);
        fVar31 = *(float *)(psVar27 + 0x2e);
        (*(undefined4 *)((char *)&in_XMM3 + 4)) =
             (undefined4)
             gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)))
                         + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar31) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * fVar29);
        (*(undefined4 *)((char *)&in_XMM3 + 0)) =
             (undefined4)
             gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)))
                         + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar31) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * fVar29);
        (*(undefined4 *)((char *)&in_XMM3 + 8)) =
             (undefined4)
             gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0))) +
                         (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * fVar31) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * fVar29);
        (*(undefined4 *)((char *)&in_XMM3 + 12)) =
             (undefined4)
             gen_fl2bits(fVar29 * fVar31 -
                         (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0))) +
                         (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0))));
        memcpy(&(*(gen_v16 *)(param_3 + 0x10 + (*(uint *)(gen_frame + 0xd8)) * 0x30)), &(in_XMM3), sizeof(in_XMM3) < sizeof(*(gen_v16 *)(param_3 + 0x10 + (*(uint *)(gen_frame + 0xd8)) * 0x30)) ? sizeof(in_XMM3) : sizeof(*(gen_v16 *)(param_3 + 0x10 + (*(uint *)(gen_frame + 0xd8)) * 0x30)));
        (*(undefined8 *)(gen_frame + 0x30)) = uVar12;
        (*(undefined8 *)(gen_frame + 0x38)) = uVar13;
        (*(undefined8 *)(gen_frame + 0x40)) = uVar5;
        (*(undefined8 *)(gen_frame + 0x48)) = uVar14;
        (*(undefined8 *)(gen_frame + 0x50)) = uVar2;
        (*(undefined8 *)(gen_frame + 0x58)) = uVar15;
        if ((*(int *)(gen_frame + 0xc0)) == 0) {
          fVar29 = *(float *)(param_7 + psVar27[1] * 4);
          sVar19 = psVar27[3];
          fVar31 = *(float *)(param_7 + *psVar27 * 4) - fVar29;
          if (psVar27[2] <= sVar19) {
            do {
              sVar16 = sVar19;
              if ((*(char *)(gen_frame + 0xdf)) != '\0') {
                sVar16 = *(short *)(param_5 + sVar19 * 2);
              }
              *(float *)(param_8 + sVar16 * 4) = fVar29;
              sVar19 = *((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 0xc))) + sVar19 * 2)));
              fVar29 = fVar29 + fVar31 / (float)((*(int *)(gen_frame + 0xc4)) + -1);
            } while (psVar27[2] <= sVar19);
          }
        }
      }
      (*(int *)(gen_frame + 0xd0)) = (*(int *)(gen_frame + 0xd0)) + 0x70;
      iVar18 = (*(int *)(gen_frame + 0xc8)) + -1;
      (*(int *)(gen_frame + 0xc8)) = iVar18;
    } while (iVar18 != 0);
  }
  if ((char)param_6 != '\0') {
    F_00d65680(param_3,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x24))),param_5,
                 *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x1c))),param_3);
  }
  iVar18 = (*(int *)(gen_frame + 0xc0));
  if (0 < (*(int *)(gen_frame + 0xc0))) {
    pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar23 = iVar18 * 4 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar17 + 8) < (int)uVar23) ||
        (uVar23 + param_8 != *(int *)((int)pvVar17 + 0xc))) ||
       (*(uint *)((int)pvVar17 + 0x14) == param_8)) {
      F_00d945c0(pvVar17,param_8,uVar23);
    }
    else {
      *(uint *)((int)pvVar17 + 0xc) = param_8;
    }
  }
  pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar4 = *(undefined4 * PTR32 *)((int)pvVar17 + 4);
  if (puVar4 < *(undefined4 * PTR32 *)((int)pvVar17 + 0xc)) {
    *puVar4 = &REFG(undefined, 0x1134dd0);
    uVar5 = rdtsc();
    (*(int *)(gen_frame + 0xc8)) = (int)uVar5;
    puVar4[1] = (int)uVar5;
    *(undefined4 * PTR32 *)((int)pvVar17 + 4) = puVar4 + 3;
  }
  pvVar17 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar23 = (*(uint *)(gen_frame + 0x9c)) + 0xf & 0xfffffff0;
  if ((((int)(*(uint *)(gen_frame + 0x9c)) <= *(int *)((int)pvVar17 + 8)) &&
      (uVar23 + (*(uint *)(gen_frame + 0xcc)) == *(int *)((int)pvVar17 + 0xc))) &&
     (*(uint *)((int)pvVar17 + 0x14) != (*(uint *)(gen_frame + 0xcc)))) {
    *(uint *)((int)pvVar17 + 0xc) = (*(uint *)(gen_frame + 0xcc));
    return (uint)pvVar17;
  }
  uVar23 = F_00d945c0(pvVar17,(*(uint *)(gen_frame + 0xcc)),uVar23);
  return uVar23;
}

/* ref: FUN_00d66180 */
uint F_00d66180(unsigned int gen_a0)
{
  GEN_ENTER(0xd66180u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined1 auVar1 [16];
  int * piVar2;
  uint uVar3;
  short * psVar4;
  undefined * pvVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM3 [16] = {0};
  int iVar10;
  char * pcVar11;
  int iVar12;
  char * pcVar13;
  undefined * puVar14;
  
  piVar2 = param_1;
  uVar3 = 0;
  if ((param_1[0x19] == 0) && ((*(uint *)(gen_frame + 0x218)) = 0, 0 < param_1[3])) {
    param_1 = (int *)0x0;
    do {
      psVar4 = (short *)(piVar2[2] + (int)param_1);
      (*(int *)(gen_frame + 0x214)) = *(int *)(*piVar2 + 0x18) + *psVar4 * 8;
      iVar12 = *(int *)(piVar2[1] + 0x18) + psVar4[1] * 8;
      if (*((char *)GEN_TOP((*(int *)(piVar2[1] + 0x18) + 4 + psVar4[1] * 8))) != '\0') {
        fVar6 = *(float *)(psVar4 + 8) * *(float *)(psVar4 + 8);
        fVar7 = *(float *)(psVar4 + 10) * *(float *)(psVar4 + 10);
        fVar8 = *(float *)(psVar4 + 0xc) * *(float *)(psVar4 + 0xc);
        fVar9 = (fVar7 + fVar6) + fVar8;
        (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits((fVar7 + fVar6) + fVar8);
        (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar9);
        (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits((fVar7 + fVar6) + fVar8);
        (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits((fVar7 + fVar6) + fVar8);
        gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar1));
        fVar6 = (*(float *)((char *)&in_XMM3 + 0));
        fVar6 = gen_bits2f(~-(uint)(fVar9 <= 0.0) &
                           (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136f80) - (fVar6 * fVar9) * fVar6) *
                                             (*(float *)&REFG(undefined, 0x1136f90) * fVar6)) * fVar9));
        (*(float *)(gen_frame + 0x204)) = fVar6;
        if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(REFG(float, 0x10920a4))) && !(fVar6 <= REFG(float, 0x10920a4))) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
          puVar14 = &REFG(undefined, 0x11370c4);
          pcVar13 = " are not fully aligned (error :";
          pcVar11 = " and B:";
          iVar10 = (*(int *)(gen_frame + 0x214));
          fVar6 = (*(float *)(gen_frame + 0x204));
          pvVar5 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"Bones A:");
          pvVar5 = (undefined *)F_00da0420(pvVar5,iVar10);
          pvVar5 = (undefined *)F_00d9fe80(pvVar5,pcVar11);
          pvVar5 = (undefined *)F_00da0420(pvVar5,iVar12);
          uVar3 = F_00d9fe80(pvVar5,pcVar13);
          pvVar5 = (undefined *)F_00d9ffe0(uVar3,fVar6);
          F_00d9fe80(pvVar5,puVar14);
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),1,0xabbaefbf,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x23f);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
        }
      }
      param_1 = (int *)((int)param_1 + 0x40);
      uVar3 = (*(uint *)(gen_frame + 0x218)) + 1;
      (*(uint *)(gen_frame + 0x218)) = uVar3;
    } while ((int)uVar3 < piVar2[3]);
  }
  if (piVar2[0x19] == 0) {
    iVar12 = *(int *)(piVar2[1] + 0x1c);
    uVar3 = 0;
    if (0 < iVar12) {
      pcVar11 = ((char *)GEN_TOP((*(int *)(piVar2[1] + 0x18) + 4)));
      do {
        if (*pcVar11 != '\0') {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
        pcVar11 = pcVar11 + 8;
      } while ((int)uVar3 < iVar12);
    }
    F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),
                 "None of the bones in skeleton have translations locked - did you forget to lock translations ?."
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78),1,0xabba77a5,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x255);
    uVar3 = F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
  }
  return uVar3;
}

/* ref: FUN_00d66360 */
unsigned int F_00d66360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd66360u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined2 uVar1;
  int * piVar2;
  int * piVar3;
  short sVar4;
  short * psVar5;
  char * pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  int * piVar12;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  iVar10 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  (*(int *)(gen_frame + 0x1c)) = iVar10;
  (*(int * PTR32 *)&gen_args[2])[1] = 0;
  iVar10 = *(int *)(iVar10 + 0x1c);
  (*(int *)(gen_frame + 0x24)) = iVar7;
  if ((int)((*(int * PTR32 *)&gen_args[2])[2] & 0x3fffffffU) < iVar10) {
    iVar7 = ((*(int * PTR32 *)&gen_args[2])[2] & 0x3fffffffU) * 2;
    if (iVar7 <= iVar10) {
      iVar7 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[2]),iVar7,2);
  }
  piVar3 = (*(int * PTR32 *)&gen_args[4]);
  piVar12 = (*(int * PTR32 *)&gen_args[3]);
  uVar8 = iVar10 - piVar2[1];
  if (0 < (int)uVar8) {
    puVar11 = (undefined4 *)(*piVar2 + piVar2[1] * 2);
    for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined2 *)puVar11 = 0xffff;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
    }
  }
  sVar4 = 0;
  piVar2[1] = iVar10;
  if (0 < *(int *)((*(int *)&gen_args[1]) + 0x14)) {
    iVar10 = 0;
    do {
      *((short *)GEN_TOP((*piVar2 + *((short *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x10) + iVar10 * 2))) * 2))) = sVar4;
      sVar4 = sVar4 + 1;
      iVar10 = (int)sVar4;
    } while (iVar10 < *(int *)((*(int *)&gen_args[1]) + 0x14));
  }
  (*(int * PTR32 *)&gen_args[4])[1] = 0;
  (*(int * PTR32 *)&gen_args[3])[1] = 0;
  iVar10 = *(int *)((*(int *)(gen_frame + 0x24)) + 0x1c);
  if ((int)((*(int * PTR32 *)&gen_args[3])[2] & 0x3fffffffU) < iVar10) {
    iVar7 = ((*(int * PTR32 *)&gen_args[3])[2] & 0x3fffffffU) * 2;
    if (iVar7 <= iVar10) {
      iVar7 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[3]),iVar7,2);
  }
  uVar8 = iVar10 - piVar12[1];
  if (0 < (int)uVar8) {
    puVar11 = (undefined4 *)(*piVar12 + piVar12[1] * 2);
    for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = (uint)((uVar8 & 1) != 0); piVar12 = (*(int * PTR32 *)&gen_args[3]), uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined2 *)puVar11 = 0xffff;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
    }
  }
  piVar12[1] = iVar10;
  (*(int *)&gen_args[1]) = 0;
  if (0 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c)) {
    iVar10 = 0;
    do {
      psVar5 = ((short *)GEN_TOP((iVar10 * 0x40 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18))));
      if (-1 < *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + *psVar5 * 2)))) {
        sVar4 = psVar5[1];
        if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar3,2);
        }
        *(short *)(*piVar3 + piVar3[1] * 2) = sVar4;
        piVar3[1] = piVar3[1] + 1;
      }
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 1;
      iVar10 = (int)(short)(*(int *)&gen_args[1]);
    } while (iVar10 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c));
  }
  (*(int *)(gen_frame + 0x20)) = 0;
  if (0 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x28)) {
    iVar10 = 0;
    do {
      iVar10 = iVar10 * 0x70;
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0x80000000;
      (*(uint *)(gen_frame + 0x18)) = 0x80000000;
      pcVar6 = (char *)F_00d341d0((int)&(*(int *)&gen_args[1]) + 3,(*(int *)(gen_frame + 0x1c)),
                                    (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x24) + iVar10))),
                                    (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x24) + 2 + iVar10))),
                                    &(*(int *)(gen_frame + 0x4)));
      if (*pcVar6 == '\0') {
        (*(int *)(gen_frame + 0x14)) = 0;
        if (((*(uint *)(gen_frame + 0x18)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x10)),((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) * 2);
        }
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0x80000000;
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      else {
        pcVar6 = (char *)F_00d341d0((int)&(*(int * PTR32 *)&gen_args[4]) + 3,(*(int *)(gen_frame + 0x24)),
                                      (uint)*((ushort *)GEN_TOP((iVar10 + 4 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x24)))),
                                      (uint)*((ushort *)GEN_TOP((iVar10 + 6 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x24)))),
                                      &(*(int *)(gen_frame + 0x10)));
        if (*pcVar6 != '\0') {
          iVar10 = 0;
          if (0 < (*(int *)(gen_frame + 0x8))) {
            do {
              if (*((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + *(short *)((*(int *)(gen_frame + 0x4)) + iVar10 * 2) * 2))) < 0)
              goto LAB_00d66620;
              iVar10 = iVar10 + 1;
            } while (iVar10 < (*(int *)(gen_frame + 0x8)));
          }
          iVar10 = 0;
          if (0 < (*(int *)(gen_frame + 0x14))) {
            do {
              uVar1 = *(undefined2 *)((*(int *)(gen_frame + 0x10)) + iVar10 * 2);
              if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar3,2);
              }
              *(undefined2 *)(*piVar3 + piVar3[1] * 2) = uVar1;
              piVar3[1] = piVar3[1] + 1;
              iVar10 = iVar10 + 1;
            } while (iVar10 < (*(int *)(gen_frame + 0x14)));
          }
        }
LAB_00d66620: ;
        (*(int *)(gen_frame + 0x14)) = 0;
        if (((*(uint *)(gen_frame + 0x18)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x10)),((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) * 2);
        }
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0x80000000;
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      (*(int *)(gen_frame + 0x8)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0x80000000;
      (*(int *)(gen_frame + 0x10)) = 0;
      if (((*(uint *)(gen_frame + 0xc)) & 0x80000000) == 0) {
        (*(uint *)(gen_frame + 0x18)) = 0x80000000;
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(int *)(gen_frame + 0x8)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x4)),((*(uint *)(gen_frame + 0xc)) & 0x3fffffff) * 2);
      }
      (*(int *)(gen_frame + 0x4)) = 0;
      iVar10 = (int)(short)((*(int *)(gen_frame + 0x20)) + 1);
      (*(uint *)(gen_frame + 0xc)) = 0x80000000;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      piVar12 = (*(int * PTR32 *)&gen_args[3]);
    } while (iVar10 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x28));
  }
  iVar10 = *(int *)((*(int *)(gen_frame + 0x24)) + 0x1c);
  if ((int)(piVar12[2] & 0x3fffffffU) < iVar10) {
    iVar7 = (piVar12[2] & 0x3fffffffU) * 2;
    if (iVar7 <= iVar10) {
      iVar7 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar12,iVar7,2);
  }
  uVar8 = iVar10 - piVar12[1];
  if (0 < (int)uVar8) {
    puVar11 = (undefined4 *)(*piVar12 + piVar12[1] * 2);
    for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = (uint)((uVar8 & 1) != 0); piVar12 = (*(int * PTR32 *)&gen_args[3]), uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined2 *)puVar11 = 0xffff;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
    }
  }
  sVar4 = 0;
  piVar12[1] = iVar10;
  if (0 < piVar3[1]) {
    iVar10 = 0;
    do {
      *((short *)GEN_TOP((*piVar12 + *(short *)(*piVar3 + iVar10 * 2) * 2))) = sVar4;
      sVar4 = sVar4 + 1;
      iVar10 = (int)sVar4;
    } while (iVar10 < piVar3[1]);
  }
  return 0;
}

/* ref: FUN_00d66710 */
uint F_00d66710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd66710u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined4 * puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  LPVOID pvVar16;
  float * pfVar17;
  uint uVar18;
  int iVar19;
  float * pfVar20;
  LPVOID pvVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  float * pfVar25;
  short * psVar26;
  float fVar27;
  undefined1 auVar28 [12];
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  pvVar16 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar16 + 4);
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar16 + 0xc)) {
    *puVar6 = "LtMapPoseModelSpace";
    puVar6[3] = "Stinit";
    uVar7 = rdtsc();
    (*(int *)(gen_frame + 0xf8)) = (int)uVar7;
    puVar6[1] = (int)uVar7;
    *(undefined4 * PTR32 *)((int)pvVar16 + 4) = puVar6 + 4;
  }
  pvVar16 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar16 + 4);
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar16 + 0xc)) {
    *puVar6 = "StsimpleMappings";
    uVar7 = rdtsc();
    (*(int *)(gen_frame + 0xf8)) = (int)uVar7;
    puVar6[1] = (int)uVar7;
    *(undefined4 * PTR32 *)((int)pvVar16 + 4) = puVar6 + 3;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar24 = 0;
    (*(int *)(gen_frame + 0xf8)) = *(int *)(param_1 + 0x1c);
    do {
      iVar22 = *(int *)(param_1 + 0x18);
      pfVar25 = (float *)(iVar24 + 0x10 + iVar22);
      fVar27 = *pfVar25;
      fVar47 = pfVar25[1];
      fVar48 = pfVar25[2];
      fVar46 = pfVar25[3];
      iVar19 = iVar24 + 0x10 + iVar22;
      pfVar17 = ((float *)GEN_TOP((*(short *)(iVar24 + iVar22) * 0x30 + param_2)));
      fVar43 = pfVar17[4];
      fVar44 = pfVar17[5];
      fVar34 = pfVar17[6];
      fVar37 = pfVar17[7];
      fVar29 = fVar27 * fVar43;
      fVar32 = fVar47 * fVar44;
      fVar35 = fVar48 * fVar34;
      (*(LPVOID *)(gen_frame + 0xfc)) = (LPVOID)iVar22;
      pfVar25 = (float *)(iVar24 + 2 + iVar22);
      (*(float * PTR32 *)(gen_frame + 0xf0)) = pfVar25;
      iVar22 = (int)*(short *)pfVar25;
      fVar38 = (((fVar32 + fVar29) + fVar35) * fVar43 +
               (fVar37 * fVar37 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd0)) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar27) + (fVar48 * fVar44 - fVar47 * fVar34) * fVar37;
      fVar40 = (((fVar32 + fVar29) + fVar35) * fVar44 +
               (fVar37 * fVar37 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar47) + (fVar27 * fVar34 - fVar48 * fVar43) * fVar37;
      fVar43 = (((fVar32 + fVar29) + fVar35) * fVar34 +
               (fVar37 * fVar37 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar48) + (fVar47 * fVar43 - fVar27 * fVar44) * fVar37;
      fVar46 = (((fVar32 + fVar29) + fVar35) * fVar37 +
               (fVar37 * fVar37 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bdc)) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar46) + (fVar46 * fVar37 - fVar46 * fVar37) * fVar37;
      fVar27 = pfVar17[1];
      fVar47 = pfVar17[2];
      fVar48 = pfVar17[3];
      pfVar25 = (float *)(param_4 + iVar22 * 0x30);
      *pfVar25 = (fVar38 + fVar38) + *pfVar17;
      pfVar25[1] = (fVar40 + fVar40) + fVar27;
      pfVar25[2] = (fVar43 + fVar43) + fVar47;
      pfVar25[3] = (fVar46 + fVar46) + fVar48;
      uVar7 = *(undefined8 *)(pfVar17 + 4);
      fVar27 = *(float *)(iVar19 + 0x1c);
      (*(undefined8 *)(gen_frame + 0xb0)) = uVar7;
      uVar14 = (*(undefined8 *)(gen_frame + 0xb0));
      (*(undefined8 *)(gen_frame + 0xb8)) = *(undefined8 *)(pfVar17 + 6);
      uVar15 = (*(undefined8 *)(gen_frame + 0xb8));
      uVar2 = *(undefined8 *)(iVar19 + 0x10);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 0)) = gen_bits2f((uint)uVar7);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar7 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 0)) = gen_bits2f((uint)*(undefined8 *)(pfVar17 + 6));
      (*(undefined8 *)(gen_frame + 0xa0)) = uVar2;
      uVar7 = (*(undefined8 *)(gen_frame + 0xa0));
      (*(undefined8 *)(gen_frame + 0xa8)) = *(undefined8 *)(iVar19 + 0x18);
      uVar13 = (*(undefined8 *)(gen_frame + 0xa8));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)) = gen_bits2f((uint)*(undefined8 *)(iVar19 + 0x18));
      fVar47 = pfVar17[7];
      pfVar25 = (float *)(param_4 + 0x10 + iVar22 * 0x30);
      *pfVar25 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4))) +
                 (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0)) * fVar47) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 0)) * fVar27;
      pfVar25[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0))) +
                   (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) * fVar47) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 4)) * fVar27;
      pfVar25[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0))) +
                   (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)) * fVar47) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 0)) * fVar27;
      pfVar25[3] = fVar27 * fVar47 -
                   (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0))) +
                   (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)));
      fVar27 = pfVar17[9];
      fVar47 = pfVar17[10];
      fVar48 = pfVar17[0xb];
      fVar46 = *(float *)(iVar19 + 0x24);
      fVar43 = *(float *)(iVar19 + 0x28);
      fVar44 = *(float *)(iVar19 + 0x2c);
      pfVar25 = (float *)(param_4 + 0x20 + iVar22 * 0x30);
      *pfVar25 = pfVar17[8] * *(float *)(iVar19 + 0x20);
      pfVar25[1] = fVar27 * fVar46;
      pfVar25[2] = fVar47 * fVar43;
      pfVar25[3] = fVar48 * fVar44;
      iVar24 = iVar24 + 0x40;
      iVar19 = (*(int *)(gen_frame + 0xf8)) + -1;
      (*(int *)(gen_frame + 0xf8)) = iVar19;
      (*(undefined8 *)(gen_frame + 0xa0)) = uVar7;
      (*(undefined8 *)(gen_frame + 0xa8)) = uVar13;
      (*(undefined8 *)(gen_frame + 0xb0)) = uVar14;
      (*(undefined8 *)(gen_frame + 0xb8)) = uVar15;
    } while (iVar19 != 0);
  }
  pvVar16 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar16 + 4);
  (*(LPVOID *)(gen_frame + 0xfc)) = pvVar16;
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar16 + 0xc)) {
    *puVar6 = "StchainMappings";
    uVar7 = rdtsc();
    (*(int *)(gen_frame + 0xf8)) = (int)uVar7;
    puVar6[1] = (int)uVar7;
    *(undefined4 * PTR32 *)((int)pvVar16 + 4) = puVar6 + 3;
  }
  fVar27 = *(float *)&REFG(undefined, 0x1136fa0);
  if (0 < (int)*(LPVOID *)(param_1 + 0x28)) {
    (*(int *)(gen_frame + 0xf8)) = 0;
    (*(LPVOID *)(gen_frame + 0xfc)) = *(LPVOID *)(param_1 + 0x28);
    do {
      psVar26 = ((short *)GEN_TOP((*(int *)(param_1 + 0x24) + (*(int *)(gen_frame + 0xf8)))));
      fVar47 = *(float *)(psVar26 + 8);
      fVar48 = *(float *)(psVar26 + 10);
      fVar46 = *(float *)(psVar26 + 0xc);
      fVar43 = *(float *)(psVar26 + 0xe);
      uVar3 = psVar26[3];
      pfVar17 = (float *)(*psVar26 * 0x30 + param_2);
      (*(LPVOID *)(gen_frame + 0xf4)) = (LPVOID)(uint)(ushort)psVar26[1];
      fVar44 = pfVar17[4];
      fVar34 = pfVar17[5];
      fVar37 = pfVar17[6];
      fVar29 = pfVar17[7];
      uVar4 = psVar26[2];
      fVar32 = fVar47 * fVar44;
      fVar35 = fVar48 * fVar34;
      fVar38 = fVar46 * fVar37;
      (*(uint *)(gen_frame + 0xcc)) = (uint)uVar4;
      (*(uint *)(gen_frame + 0xd4)) = (uint)uVar3;
      fVar40 = (((fVar35 + fVar32) + fVar38) * fVar44 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd0)) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar47) + (fVar46 * fVar34 - fVar48 * fVar37) * fVar29;
      fVar41 = (((fVar35 + fVar32) + fVar38) * fVar34 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar48) + (fVar47 * fVar37 - fVar46 * fVar44) * fVar29;
      fVar44 = (((fVar35 + fVar32) + fVar38) * fVar37 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar46) + (fVar48 * fVar44 - fVar47 * fVar34) * fVar29;
      fVar43 = (((fVar35 + fVar32) + fVar38) * fVar29 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bdc)) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar43) + (fVar43 * fVar29 - fVar43 * fVar29) * fVar29;
      iVar24 = (short)uVar4 * 0x30;
      fVar47 = pfVar17[1];
      fVar48 = pfVar17[2];
      fVar46 = pfVar17[3];
      pfVar25 = (float *)(iVar24 + param_4);
      *pfVar25 = (fVar40 + fVar40) + *pfVar17;
      pfVar25[1] = (fVar41 + fVar41) + fVar47;
      pfVar25[2] = (fVar44 + fVar44) + fVar48;
      pfVar25[3] = (fVar43 + fVar43) + fVar46;
      fVar47 = *(float *)(psVar26 + 0x16);
      (*(float *)(gen_frame + 0x30)) = gen_bits2f((uint)*(undefined8 *)(pfVar17 + 4));
      (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar17 + 4) >> 0x20));
      (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)*(undefined8 *)(pfVar17 + 6));
      pfVar25 = (float *)(iVar24 + param_4);
      (*(float *)(gen_frame + 0x20)) = gen_bits2f((uint)*(undefined8 *)(psVar26 + 0x10));
      (*(float *)(gen_frame + 0x24)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)(psVar26 + 0x10) >> 0x20));
      (*(float *)(gen_frame + 0x28)) = gen_bits2f((uint)*(undefined8 *)(psVar26 + 0x14));
      fVar48 = pfVar17[7];
      (*(float * PTR32 *)(gen_frame + 0xf0)) = pfVar25;
      pfVar25[4] = (((*(float *)(gen_frame + 0x34)) * (*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x38)) * (*(float *)(gen_frame + 0x24))) + (*(float *)(gen_frame + 0x20)) * fVar48) +
                   (*(float *)(gen_frame + 0x30)) * fVar47;
      pfVar25[5] = (((*(float *)(gen_frame + 0x38)) * (*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x30)) * (*(float *)(gen_frame + 0x28))) + (*(float *)(gen_frame + 0x24)) * fVar48) +
                   (*(float *)(gen_frame + 0x34)) * fVar47;
      pfVar25[6] = (((*(float *)(gen_frame + 0x30)) * (*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x34)) * (*(float *)(gen_frame + 0x20))) + (*(float *)(gen_frame + 0x28)) * fVar48) +
                   (*(float *)(gen_frame + 0x38)) * fVar47;
      pfVar25[7] = fVar47 * fVar48 -
                   (((*(float *)(gen_frame + 0x34)) * (*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x30)) * (*(float *)(gen_frame + 0x20))) + (*(float *)(gen_frame + 0x38)) * (*(float *)(gen_frame + 0x28)));
      fVar47 = pfVar17[9];
      fVar48 = pfVar17[10];
      fVar46 = pfVar17[0xb];
      fVar43 = *(float *)(psVar26 + 0x1a);
      fVar44 = *(float *)(psVar26 + 0x1c);
      fVar34 = *(float *)(psVar26 + 0x1e);
      (*(int *)(gen_frame + 0xc4)) = (int)(short)uVar3;
      pfVar25[8] = pfVar17[8] * *(float *)(psVar26 + 0x18);
      pfVar25[9] = fVar47 * fVar43;
      pfVar25[10] = fVar48 * fVar44;
      pfVar25[0xb] = fVar46 * fVar34;
      uVar18 = ((int)(short)uVar3 - (int)(short)uVar4) + 1;
      uVar23 = 0;
      (*(uint *)(gen_frame + 0xd0)) = uVar18;
      (*(uint *)(gen_frame + 0xdc)) = 0;
      (*(int *)(gen_frame + 0xe0)) = 0;
      (*(uint *)(gen_frame + 0xe4)) = 0x80000000;
      (*(uint *)(gen_frame + 0xec)) = uVar18;
      if (uVar18 != 0) {
        pvVar16 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar23 = *(uint *)((int)pvVar16 + 0xc);
        uVar18 = (*(uint *)(gen_frame + 0xd0)) * 2 + 0x7f & 0xffffff80;
        (*(uint *)(gen_frame + 0xc8)) = uVar23;
        if ((*(int *)((int)pvVar16 + 8) < (int)uVar18) ||
           (*(uint *)((int)pvVar16 + 0x10) < uVar23 + uVar18)) {
          uVar23 = F_00d94390(pvVar16,uVar18);
        }
        else {
          *(uint *)((int)pvVar16 + 0xc) = uVar23 + uVar18;
        }
      }
      (*(uint *)(gen_frame + 0xdc)) = uVar23;
      (*(uint *)(gen_frame + 0xe8)) = uVar23;
      (*(uint *)(gen_frame + 0xe4)) = (*(uint *)(gen_frame + 0xd0)) | 0x80000000;
      F_00d341d0(&(*(undefined1 *)(gen_frame + 0xdb)),*(undefined4 *)(param_1 + 0x14),(*(uint *)(gen_frame + 0xcc)),(*(uint *)(gen_frame + 0xd4)),&(*(uint *)(gen_frame + 0xdc)));
      pfVar25 = (float *)(param_3 + (*(int *)(gen_frame + 0xc4)) * 0x30);
      fVar47 = *pfVar25;
      fVar48 = pfVar25[1];
      fVar46 = pfVar25[2];
      fVar43 = pfVar25[3];
      iVar24 = (*(int *)(gen_frame + 0xe0)) + -2;
      if (0 < iVar24) {
        do {
          iVar19 = (int)*(short *)((*(uint *)(gen_frame + 0xdc)) + iVar24 * 2);
          pfVar25 = (float *)(param_3 + 0x10 + iVar19 * 0x30);
          fVar44 = *pfVar25;
          fVar34 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar29 = pfVar25[3];
          pfVar25 = (float *)(param_3 + 0x20 + iVar19 * 0x30);
          fVar47 = *pfVar25 * fVar47;
          fVar48 = pfVar25[1] * fVar48;
          fVar46 = pfVar25[2] * fVar46;
          fVar43 = pfVar25[3] * fVar43;
          fVar32 = fVar47 * fVar44;
          fVar35 = fVar48 * fVar34;
          fVar38 = fVar46 * fVar37;
          pfVar25 = (float *)(param_3 + iVar19 * 0x30);
          iVar24 = iVar24 + -1;
          fVar40 = (((fVar35 + fVar32) + fVar38) * fVar44 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd0)) ^ *(uint *)&REFG(undefined, 0x10ab9c0)))
                   * fVar47) + (fVar46 * fVar34 - fVar48 * fVar37) * fVar29;
          fVar41 = (((fVar35 + fVar32) + fVar38) * fVar34 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4)))
                   * fVar48) + (fVar47 * fVar37 - fVar46 * fVar44) * fVar29;
          fVar46 = (((fVar35 + fVar32) + fVar38) * fVar37 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8)))
                   * fVar46) + (fVar48 * fVar44 - fVar47 * fVar34) * fVar29;
          fVar43 = (((fVar35 + fVar32) + fVar38) * fVar29 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bdc)) ^ *(uint *)&REFG(undefined, 0x10ab9cc)))
                   * fVar43) + (fVar43 * fVar29 - fVar43 * fVar29) * fVar29;
          fVar47 = *pfVar25 + (fVar40 + fVar40);
          fVar48 = pfVar25[1] + (fVar41 + fVar41);
          fVar46 = pfVar25[2] + (fVar46 + fVar46);
          fVar43 = pfVar25[3] + (fVar43 + fVar43);
        } while (0 < iVar24);
      }
      fVar44 = (*(float * PTR32 *)(gen_frame + 0xf0))[4];
      fVar34 = (*(float * PTR32 *)(gen_frame + 0xf0))[5];
      fVar37 = (*(float * PTR32 *)(gen_frame + 0xf0))[6];
      fVar29 = (*(float * PTR32 *)(gen_frame + 0xf0))[7];
      fVar47 = (*(float * PTR32 *)(gen_frame + 0xf0))[8] * fVar47;
      fVar48 = (*(float * PTR32 *)(gen_frame + 0xf0))[9] * fVar48;
      fVar46 = (*(float * PTR32 *)(gen_frame + 0xf0))[10] * fVar46;
      fVar43 = (*(float * PTR32 *)(gen_frame + 0xf0))[0xb] * fVar43;
      fVar41 = fVar47 * fVar44;
      fVar33 = fVar48 * fVar34;
      fVar36 = fVar46 * fVar37;
      fVar32 = *(float *)(psVar26 + 0x20);
      fVar35 = *(float *)(psVar26 + 0x22);
      fVar38 = *(float *)(psVar26 + 0x24);
      fVar40 = *(float *)(psVar26 + 0x26);
      fVar39 = (((fVar33 + fVar41) + fVar36) * fVar44 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd0)) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar47) + (fVar34 * fVar46 - fVar37 * fVar48) * fVar29;
      fVar42 = (((fVar33 + fVar41) + fVar36) * fVar34 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar48) + (fVar37 * fVar47 - fVar44 * fVar46) * fVar29;
      fVar45 = (((fVar33 + fVar41) + fVar36) * fVar37 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar46) + (fVar44 * fVar48 - fVar34 * fVar47) * fVar29;
      fVar29 = (((fVar33 + fVar41) + fVar36) * fVar29 +
               (fVar29 * fVar29 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bdc)) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar43) + (fVar29 * fVar43 - fVar29 * fVar43) * fVar29;
      pfVar25 = (float *)((short)(*(LPVOID *)(gen_frame + 0xf4)) * 0x30 + param_2);
      fVar47 = pfVar25[4];
      fVar48 = pfVar25[5];
      fVar46 = pfVar25[6];
      fVar43 = pfVar25[7];
      fVar44 = fVar32 * fVar47;
      fVar34 = fVar35 * fVar48;
      fVar37 = fVar38 * fVar46;
      (*(undefined4 *)((char *)&auVar49 + 4)) = (undefined4)gen_fl2bits(fVar43);
      (*(undefined4 *)((char *)&auVar49 + 0)) = (undefined4)gen_fl2bits(fVar43);
      (*(undefined4 *)((char *)&auVar49 + 8)) = (undefined4)gen_fl2bits(fVar43);
      (*(undefined4 *)((char *)&auVar49 + 12)) = (undefined4)gen_fl2bits(fVar43);
      fVar41 = (((fVar34 + fVar44) + fVar37) * fVar47 +
               (fVar43 * fVar43 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd0)) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar32) + (fVar38 * fVar48 - fVar35 * fVar46) * fVar43;
      fVar33 = (((fVar34 + fVar44) + fVar37) * fVar48 +
               (fVar43 * fVar43 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar35) + (fVar32 * fVar46 - fVar38 * fVar47) * fVar43;
      fVar46 = (((fVar34 + fVar44) + fVar37) * fVar46 +
               (fVar43 * fVar43 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar38) + (fVar35 * fVar47 - fVar32 * fVar48) * fVar43;
      fVar43 = (((fVar34 + fVar44) + fVar37) * fVar43 +
               (fVar43 * fVar43 +
               gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bdc)) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar40) + (fVar40 * fVar43 - fVar40 * fVar43) * fVar43;
      fVar47 = ((fVar41 + fVar41) + *pfVar25) - *(*(float * PTR32 *)(gen_frame + 0xf0));
      fVar48 = ((fVar33 + fVar33) + pfVar25[1]) - (*(float * PTR32 *)(gen_frame + 0xf0))[1];
      fVar46 = ((fVar46 + fVar46) + pfVar25[2]) - (*(float * PTR32 *)(gen_frame + 0xf0))[2];
      fVar43 = ((fVar43 + fVar43) + pfVar25[3]) - (*(float * PTR32 *)(gen_frame + 0xf0))[3];
      (*(float *)(gen_frame + 0x60)) = ((fVar39 + fVar39) + *(*(float * PTR32 *)(gen_frame + 0xf0))) - *(*(float * PTR32 *)(gen_frame + 0xf0));
      (*(float *)(gen_frame + 0x64)) = ((fVar42 + fVar42) + (*(float * PTR32 *)(gen_frame + 0xf0))[1]) - (*(float * PTR32 *)(gen_frame + 0xf0))[1];
      (*(float *)(gen_frame + 0x68)) = ((fVar45 + fVar45) + (*(float * PTR32 *)(gen_frame + 0xf0))[2]) - (*(float * PTR32 *)(gen_frame + 0xf0))[2];
      (*(float *)(gen_frame + 0x6c)) = ((fVar29 + fVar29) + (*(float * PTR32 *)(gen_frame + 0xf0))[3]) - (*(float * PTR32 *)(gen_frame + 0xf0))[3];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0)) = fVar47;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) = fVar48;
      (*(undefined8 *)(gen_frame + 0xa0)) = CONCAT44((uint)gen_fl2bits(fVar48),(uint)gen_fl2bits(fVar47));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)) = fVar46;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 4)) = fVar43;
      (*(undefined8 *)(gen_frame + 0xa8)) = CONCAT44((uint)gen_fl2bits(fVar43),(uint)gen_fl2bits(fVar46));
      F_00d65260(&(*(undefined8 *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x60)));
      fVar47 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0)) * (*(float *)(gen_frame + 0x60));
      fVar48 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) * (*(float *)(gen_frame + 0x64));
      fVar44 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)) * (*(float *)(gen_frame + 0x68));
      fVar34 = (fVar48 + fVar47) + fVar44;
      fVar37 = (fVar48 + fVar47) + fVar44;
      fVar29 = (fVar48 + fVar47) + fVar44;
      fVar44 = (fVar48 + fVar47) + fVar44;
      fVar47 = *(float *)&REFG(undefined, 0x1138ca0);
      fVar48 = *(float *)&REFG(undefined, 0x1138ca4);
      fVar46 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar43 = *(float *)&REFG(undefined, 0x1138cac);
      if (fVar27 < fVar34) {
LAB_00d66f1f: ;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 0)) = fVar47;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 4)) = fVar48;
        (*(undefined8 *)(gen_frame + 0xb0)) = CONCAT44((uint)gen_fl2bits(fVar48),(uint)gen_fl2bits(fVar47));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 0)) = fVar46;
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 4)) = fVar43;
        (*(undefined8 *)(gen_frame + 0xb8)) = CONCAT44((uint)gen_fl2bits(fVar43),(uint)gen_fl2bits(fVar46));
      }
      else {
        fVar47 = 0.0 - fVar27;
        if ((!GEN_ISNAN(fVar34) && !GEN_ISNAN(fVar47)) && !(fVar34 < fVar47)) {
          fVar32 = *(float *)&REFG(undefined, 0x1138bd0) * fVar34 + *(float *)&REFG(undefined, 0x1138bd0);
          fVar35 = *(float *)&REFG(undefined, 0x1138bd4) * fVar37 + *(float *)&REFG(undefined, 0x1138bd4);
          fVar38 = *(float *)&REFG(undefined, 0x1138bd8) * fVar29 + *(float *)&REFG(undefined, 0x1138bd8);
          fVar43 = *(float *)&REFG(undefined, 0x1138bdc) * fVar44 + *(float *)&REFG(undefined, 0x1138bdc);
          (*(undefined4 *)((char *)&auVar8 + 4)) = (undefined4)gen_fl2bits(fVar35);
          (*(undefined4 *)((char *)&auVar8 + 0)) = (undefined4)gen_fl2bits(fVar32);
          (*(undefined4 *)((char *)&auVar8 + 8)) = (undefined4)gen_fl2bits(fVar38);
          (*(undefined4 *)((char *)&auVar8 + 12)) = (undefined4)gen_fl2bits(fVar43);
          gen_rsqrtps(&(auVar49), &(auVar49), &(auVar8));
          fVar40 = (*(float *)((char *)&auVar49 + 0));
          fVar41 = (*(float *)((char *)&auVar49 + 4));
          fVar33 = (*(float *)((char *)&auVar49 + 8));
          fVar36 = (*(float *)((char *)&auVar49 + 12));
          memcpy(((undefined1 *)(gen_frame + 0x70)), &(auVar49), sizeof(auVar49) < sizeof(((undefined1 *)(gen_frame + 0x70))) ? sizeof(auVar49) : sizeof(((undefined1 *)(gen_frame + 0x70))));
          fVar47 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)) * (*(float *)(gen_frame + 0x64)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) * (*(float *)(gen_frame + 0x68));
          fVar48 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0)) * (*(float *)(gen_frame + 0x68)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa8)) + 0)) * (*(float *)(gen_frame + 0x60));
          fVar46 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 4)) * (*(float *)(gen_frame + 0x60)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xa0)) + 0)) * (*(float *)(gen_frame + 0x64));
          (*(float *)((char *)&auVar28 + 0)) =
               *(float *)&REFG(undefined, 0x1138bd0) *
               gen_bits2f(~-(uint)(fVar32 <= 0.0) &
                          (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f80) - (fVar40 * fVar32) * fVar40) *
                                            (fVar40 * *(float *)&REFG(undefined, 0x1136f90))));
          (*(float *)((char *)&auVar28 + 4)) =
               *(float *)&REFG(undefined, 0x1138bd4) *
               gen_bits2f(~-(uint)(fVar35 <= 0.0) &
                          (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f84) - (fVar41 * fVar35) * fVar41) *
                                            (fVar41 * *(float *)&REFG(undefined, 0x1136f94))));
          (*(float *)((char *)&auVar28 + 8)) =
               *(float *)&REFG(undefined, 0x1138bd8) *
               gen_bits2f(~-(uint)(fVar38 <= 0.0) &
                          (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f88) - (fVar33 * fVar38) * fVar33) *
                                            (fVar33 * *(float *)&REFG(undefined, 0x1136f98))));
          if (!(*(float *)&REFG(undefined, 0x1136fb0) <= fVar34)) {
            fVar32 = fVar32 - fVar34;
            fVar35 = fVar35 - fVar37;
            fVar38 = fVar38 - fVar29;
            fVar34 = fVar47 * fVar47;
            fVar37 = fVar48 * fVar48;
            fVar29 = fVar46 * fVar46;
            (*(undefined4 *)((char *)&auVar50 + 4)) = (undefined4)gen_fl2bits(fVar34);
            (*(undefined4 *)((char *)&auVar50 + 0)) = (undefined4)gen_fl2bits(fVar34);
            (*(undefined4 *)((char *)&auVar50 + 8)) = (undefined4)gen_fl2bits(fVar34);
            (*(undefined4 *)((char *)&auVar50 + 12)) = (undefined4)gen_fl2bits(fVar34);
            (*(float *)((char *)&auVar30 + 0)) = (fVar37 + fVar34) + fVar29;
            (*(float *)((char *)&auVar30 + 4)) = (fVar37 + fVar34) + fVar29;
            (*(float *)((char *)&auVar30 + 8)) = (fVar37 + fVar34) + fVar29;
            (*(float *)((char *)&auVar30 + 12)) = (fVar37 + fVar34) + fVar29;
            gen_rsqrtps(&(auVar49), &(auVar50), &(auVar30));
            memcpy(((undefined1 *)(gen_frame + 0x70)), &(auVar49), sizeof(auVar49) < sizeof(((undefined1 *)(gen_frame + 0x70))) ? sizeof(auVar49) : sizeof(((undefined1 *)(gen_frame + 0x70))));
            fVar34 = (*(float *)((char *)&auVar49 + 0));
            fVar37 = (*(float *)((char *)&auVar49 + 4));
            fVar29 = (*(float *)((char *)&auVar49 + 8));
            fVar40 = (*(float *)((char *)&auVar49 + 12));
            (*(float *)((char *)&auVar31 + 0)) =
                 (*(float *)&REFG(undefined, 0x1136f80) - (fVar34 * (*(float *)((char *)&auVar30 + 0))) * fVar34) *
                 (*(float *)&REFG(undefined, 0x1136f90) * fVar34);
            (*(float *)((char *)&auVar31 + 4)) =
                 (*(float *)&REFG(undefined, 0x1136f84) - (fVar37 * (*(float *)((char *)&auVar30 + 4))) * fVar37) *
                 (*(float *)&REFG(undefined, 0x1136f94) * fVar37);
            (*(float *)((char *)&auVar31 + 8)) =
                 (*(float *)&REFG(undefined, 0x1136f88) - (fVar29 * (*(float *)((char *)&auVar30 + 8))) * fVar29) *
                 (*(float *)&REFG(undefined, 0x1136f98) * fVar29);
            (*(float *)((char *)&auVar31 + 12)) =
                 (*(float *)&REFG(undefined, 0x1136f8c) - (fVar40 * (*(float *)((char *)&auVar30 + 12))) * fVar40) *
                 (*(float *)&REFG(undefined, 0x1136f9c) * fVar40);
            (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar35);
            (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar32);
            (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar38);
            (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar43 - fVar44);
            gen_rsqrtps(&(auVar49), &(auVar31), &(auVar9));
            fVar44 = (*(float *)((char *)&auVar49 + 0));
            fVar34 = (*(float *)((char *)&auVar49 + 4));
            fVar37 = (*(float *)((char *)&auVar49 + 8));
            (*(float *)((char *)&auVar28 + 0)) =
                 (gen_bits2f(~-(uint)(fVar32 <= 0.0) &
                             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f80) - (fVar44 * fVar32) * fVar44
                                               ) * (*(float *)&REFG(undefined, 0x1136f90) * fVar44))) * fVar32) *
                 gen_bits2f(~-(uint)((*(float *)((char *)&auVar30 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)((char *)&auVar31 + 0))));
            (*(float *)((char *)&auVar28 + 4)) =
                 (gen_bits2f(~-(uint)(fVar35 <= 0.0) &
                             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f84) - (fVar34 * fVar35) * fVar34
                                               ) * (*(float *)&REFG(undefined, 0x1136f94) * fVar34))) * fVar35) *
                 gen_bits2f(~-(uint)((*(float *)((char *)&auVar30 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)((char *)&auVar31 + 4))));
            (*(float *)((char *)&auVar28 + 8)) =
                 (gen_bits2f(~-(uint)(fVar38 <= 0.0) &
                             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f88) - (fVar37 * fVar38) * fVar37
                                               ) * (*(float *)&REFG(undefined, 0x1136f98) * fVar37))) * fVar38) *
                 gen_bits2f(~-(uint)((*(float *)((char *)&auVar30 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)((char *)&auVar31 + 8))));
          }
          fVar43 = fVar43 * gen_bits2f(~-(uint)(fVar43 <= 0.0) &
                                       (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136f8c) -
                                                         (fVar36 * fVar43) * fVar36) *
                                                         (fVar36 * *(float *)&REFG(undefined, 0x1136f9c))));
          fVar47 = (*(float *)((char *)&auVar28 + 0)) * fVar47;
          fVar48 = (*(float *)((char *)&auVar28 + 4)) * fVar48;
          fVar46 = (*(float *)((char *)&auVar28 + 8)) * fVar46;
          goto LAB_00d66f1f;
        }
        F_00d99360(&(*(undefined8 *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0x60)));
        fVar47 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 0));
        fVar48 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb0)) + 4));
        fVar46 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 0));
        fVar43 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0xb8)) + 4));
      }
      uVar23 = (*(uint *)(gen_frame + 0xe8));
      (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)((*(float * PTR32 *)(gen_frame + 0xf0)) + 6) >> 0x20));
      (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)*(undefined8 *)((*(float * PTR32 *)(gen_frame + 0xf0)) + 4));
      (*(float *)(gen_frame + 0x4)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)((*(float * PTR32 *)(gen_frame + 0xf0)) + 4) >> 0x20));
      (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)*(undefined8 *)((*(float * PTR32 *)(gen_frame + 0xf0)) + 6));
      (*(float * PTR32 *)(gen_frame + 0xf0))[4] = ((fVar48 * (*(float *)(gen_frame + 0x8)) - fVar46 * (*(float *)(gen_frame + 0x4))) + (*(float *)(gen_frame + 0x0)) * fVar43) +
                    fVar47 * (*(float *)(gen_frame + 0x5c));
      (*(float * PTR32 *)(gen_frame + 0xf0))[5] = ((fVar46 * (*(float *)(gen_frame + 0x0)) - fVar47 * (*(float *)(gen_frame + 0x8))) + (*(float *)(gen_frame + 0x4)) * fVar43) +
                    fVar48 * (*(float *)(gen_frame + 0x5c));
      (*(float * PTR32 *)(gen_frame + 0xf0))[6] = ((fVar47 * (*(float *)(gen_frame + 0x4)) - fVar48 * (*(float *)(gen_frame + 0x0))) + (*(float *)(gen_frame + 0x8)) * fVar43) +
                    fVar46 * (*(float *)(gen_frame + 0x5c));
      (*(float * PTR32 *)(gen_frame + 0xf0))[7] = (*(float *)(gen_frame + 0x5c)) * fVar43 -
                    ((fVar48 * (*(float *)(gen_frame + 0x4)) + fVar47 * (*(float *)(gen_frame + 0x0))) + fVar46 * (*(float *)(gen_frame + 0x8)));
      iVar24 = 1;
      if (1 < (*(int *)(gen_frame + 0xe0)) + -1) {
        do {
          iVar22 = (int)*(short *)((*(uint *)(gen_frame + 0xdc)) + iVar24 * 2);
          pfVar25 = (float *)(param_3 + iVar22 * 0x30);
          fVar47 = *pfVar25;
          fVar48 = pfVar25[1];
          fVar46 = pfVar25[2];
          fVar43 = pfVar25[3];
          iVar19 = *((short *)GEN_TOP((((*(uint *)(gen_frame + 0xdc)) - 2) + iVar24 * 2))) * 0x30;
          pfVar25 = (float *)(iVar19 + 0x10 + param_4);
          fVar44 = *pfVar25;
          fVar34 = pfVar25[1];
          fVar37 = pfVar25[2];
          fVar29 = pfVar25[3];
          pfVar20 = (float *)(iVar19 + param_4);
          fVar32 = fVar47 * fVar44;
          fVar35 = fVar48 * fVar34;
          fVar38 = fVar46 * fVar37;
          fVar40 = (((fVar35 + fVar32) + fVar38) * fVar44 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd0)) ^ *(uint *)&REFG(undefined, 0x10ab9c0)))
                   * fVar47) + (fVar34 * fVar46 - fVar37 * fVar48) * fVar29;
          fVar41 = (((fVar35 + fVar32) + fVar38) * fVar34 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4)))
                   * fVar48) + (fVar37 * fVar47 - fVar44 * fVar46) * fVar29;
          fVar44 = (((fVar35 + fVar32) + fVar38) * fVar37 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8)))
                   * fVar46) + (fVar44 * fVar48 - fVar34 * fVar47) * fVar29;
          fVar43 = (((fVar35 + fVar32) + fVar38) * fVar29 +
                   (fVar29 * fVar29 +
                   gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bdc)) ^ *(uint *)&REFG(undefined, 0x10ab9cc)))
                   * fVar43) + (fVar29 * fVar43 - fVar29 * fVar43) * fVar29;
          fVar47 = pfVar20[1];
          fVar48 = pfVar20[2];
          fVar46 = pfVar20[3];
          pfVar25 = (float *)(param_4 + iVar22 * 0x30);
          *pfVar25 = (fVar40 + fVar40) + *pfVar20;
          pfVar25[1] = (fVar41 + fVar41) + fVar47;
          pfVar25[2] = (fVar44 + fVar44) + fVar48;
          pfVar25[3] = (fVar43 + fVar43) + fVar46;
          uVar7 = *(undefined8 *)(pfVar20 + 4);
          fVar47 = *(float *)(param_3 + iVar22 * 0x30 + 0x1c);
          (*(undefined8 *)(gen_frame + 0x80)) = uVar7;
          uVar13 = (*(undefined8 *)(gen_frame + 0x80));
          (*(undefined8 *)(gen_frame + 0x88)) = *(undefined8 *)(pfVar20 + 6);
          uVar14 = (*(undefined8 *)(gen_frame + 0x88));
          uVar2 = *(undefined8 *)(param_3 + 0x10 + iVar22 * 0x30);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) = gen_bits2f((uint)uVar7);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) = gen_bits2f((uint)((ulonglong)uVar7 >> 0x20));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) = gen_bits2f((uint)*(undefined8 *)(pfVar20 + 6));
          (*(undefined8 *)(gen_frame + 0x90)) = uVar2;
          uVar2 = (*(undefined8 *)(gen_frame + 0x90));
          uVar7 = *(undefined8 *)(param_3 + 0x18 + iVar22 * 0x30);
          (*(undefined8 *)(gen_frame + 0x98)) = uVar7;
          uVar7 = (*(undefined8 *)(gen_frame + 0x98));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) = gen_bits2f((uint)uVar2);
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) = gen_bits2f((uint)uVar7);
          fVar48 = pfVar20[7];
          pfVar25 = (float *)(param_4 + 0x10 + iVar22 * 0x30);
          *pfVar25 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4))) +
                     (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) * fVar48) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) * fVar47;
          pfVar25[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0))) +
                       (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) * fVar48) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) * fVar47;
          pfVar25[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0))) +
                       (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) * fVar48) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) * fVar47;
          pfVar25[3] = fVar47 * fVar48 -
                       (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0))) +
                       (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)));
          fVar47 = pfVar20[9];
          fVar48 = pfVar20[10];
          fVar46 = pfVar20[0xb];
          pfVar25 = (float *)(param_3 + 0x20 + iVar22 * 0x30);
          fVar43 = pfVar25[1];
          fVar44 = pfVar25[2];
          fVar34 = pfVar25[3];
          pfVar17 = (float *)(param_4 + 0x20 + iVar22 * 0x30);
          *pfVar17 = pfVar20[8] * *pfVar25;
          pfVar17[1] = fVar47 * fVar43;
          pfVar17[2] = fVar48 * fVar44;
          pfVar17[3] = fVar46 * fVar34;
          iVar24 = iVar24 + 1;
          (*(undefined8 *)(gen_frame + 0x80)) = uVar13;
          (*(undefined8 *)(gen_frame + 0x88)) = uVar14;
          (*(undefined8 *)(gen_frame + 0x90)) = uVar2;
          (*(undefined8 *)(gen_frame + 0x98)) = uVar7;
        } while (iVar24 < (*(int *)(gen_frame + 0xe0)) + -1);
      }
      if ((*(uint *)(gen_frame + 0xe8)) == (*(uint *)(gen_frame + 0xdc))) {
        (*(int *)(gen_frame + 0xe0)) = 0;
      }
      (*(LPVOID *)(gen_frame + 0xf4)) = (LPVOID)(*(uint *)(gen_frame + 0xec));
      pvVar16 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar18 = (int)(*(LPVOID *)(gen_frame + 0xf4)) * 2 + 0x7fU & 0xffffff80;
      if (((*(int *)((int)pvVar16 + 8) < (int)uVar18) ||
          (uVar18 + uVar23 != *(int *)((int)pvVar16 + 0xc))) ||
         (*(uint *)((int)pvVar16 + 0x14) == uVar23)) {
        F_00d945c0(pvVar16,uVar23,uVar18);
      }
      else {
        *(uint *)((int)pvVar16 + 0xc) = uVar23;
      }
      (*(int *)(gen_frame + 0xe0)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0xe4))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xdc)),((*(uint *)(gen_frame + 0xe4)) & 0x3fffffff) * 2);
      }
      (*(int *)(gen_frame + 0xf8)) = (*(int *)(gen_frame + 0xf8)) + 0x70;
      pvVar16 = (LPVOID)((int)(*(LPVOID *)(gen_frame + 0xfc)) + -1);
      (*(LPVOID *)(gen_frame + 0xfc)) = pvVar16;
    } while (pvVar16 != (LPVOID)0x0);
  }
  pvVar16 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar16 + 4);
  (*(LPVOID *)(gen_frame + 0xf4)) = pvVar16;
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar16 + 0xc)) {
    *puVar6 = "StunmappedBones";
    uVar7 = rdtsc();
    (*(LPVOID *)(gen_frame + 0xfc)) = (LPVOID)uVar7;
    puVar6[1] = (LPVOID)uVar7;
    *(undefined4 * PTR32 *)((int)pvVar16 + 4) = puVar6 + 3;
  }
  iVar24 = *(int *)(param_1 + 0x34);
  (*(LPVOID *)(gen_frame + 0xf4)) = (LPVOID)iVar24;
  if ((*(char *)(param_1 + 0x70) != '\0') && ((*(LPVOID *)(gen_frame + 0xfc)) = (LPVOID)0x0, 0 < iVar24)) {
    do {
      iVar19 = (int)*((short *)GEN_TOP((*(int *)(param_1 + 0x30) + (int)(*(LPVOID *)(gen_frame + 0xfc)) * 2)));
      sVar5 = *((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 0xc))) + iVar19 * 2)));
      if (sVar5 == -1) {
        puVar6 = (undefined4 *)(param_3 + iVar19 * 0x30);
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        uVar12 = puVar6[3];
        puVar1 = (undefined4 *)(param_4 + iVar19 * 0x30);
        *puVar1 = *puVar6;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        puVar6 = (undefined4 *)(param_3 + 0x10 + iVar19 * 0x30);
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        uVar12 = puVar6[3];
        puVar1 = (undefined4 *)(param_4 + 0x10 + iVar19 * 0x30);
        *puVar1 = *puVar6;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        pfVar25 = (float *)(param_3 + 0x20 + iVar19 * 0x30);
        fVar27 = *pfVar25;
        fVar47 = pfVar25[1];
        fVar48 = pfVar25[2];
        fVar46 = pfVar25[3];
      }
      else {
        pfVar25 = (float *)(param_3 + iVar19 * 0x30);
        fVar27 = *pfVar25;
        fVar47 = pfVar25[1];
        fVar48 = pfVar25[2];
        fVar46 = pfVar25[3];
        iVar22 = sVar5 * 0x30;
        pfVar25 = (float *)(iVar22 + 0x10 + param_4);
        fVar43 = *pfVar25;
        fVar44 = pfVar25[1];
        fVar34 = pfVar25[2];
        fVar37 = pfVar25[3];
        fVar29 = fVar27 * fVar43;
        fVar32 = fVar47 * fVar44;
        fVar35 = fVar48 * fVar34;
        pfVar17 = (float *)(iVar22 + param_4);
        fVar38 = (((fVar32 + fVar29) + fVar35) * fVar43 +
                 (fVar37 * fVar37 +
                 gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd0)) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 fVar27) + (fVar48 * fVar44 - fVar47 * fVar34) * fVar37;
        fVar40 = (((fVar32 + fVar29) + fVar35) * fVar44 +
                 (fVar37 * fVar37 +
                 gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 fVar47) + (fVar27 * fVar34 - fVar48 * fVar43) * fVar37;
        fVar43 = (((fVar32 + fVar29) + fVar35) * fVar34 +
                 (fVar37 * fVar37 +
                 gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bd8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 fVar48) + (fVar47 * fVar43 - fVar27 * fVar44) * fVar37;
        fVar46 = (((fVar32 + fVar29) + fVar35) * fVar37 +
                 (fVar37 * fVar37 +
                 gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138bdc)) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 fVar46) + (fVar46 * fVar37 - fVar46 * fVar37) * fVar37;
        fVar27 = pfVar17[1];
        fVar47 = pfVar17[2];
        fVar48 = pfVar17[3];
        pfVar25 = (float *)(param_4 + iVar19 * 0x30);
        *pfVar25 = (fVar38 + fVar38) + *pfVar17;
        pfVar25[1] = (fVar40 + fVar40) + fVar27;
        pfVar25[2] = (fVar43 + fVar43) + fVar47;
        pfVar25[3] = (fVar46 + fVar46) + fVar48;
        uVar7 = *(undefined8 *)(pfVar17 + 4);
        fVar27 = *(float *)(param_3 + iVar19 * 0x30 + 0x1c);
        (*(undefined8 *)(gen_frame + 0x90)) = uVar7;
        uVar13 = (*(undefined8 *)(gen_frame + 0x90));
        (*(undefined8 *)(gen_frame + 0x98)) = *(undefined8 *)(pfVar17 + 6);
        uVar14 = (*(undefined8 *)(gen_frame + 0x98));
        uVar2 = *(undefined8 *)(param_3 + 0x10 + iVar19 * 0x30);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) = gen_bits2f((uint)uVar7);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) = gen_bits2f((uint)((ulonglong)uVar7 >> 0x20));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) = gen_bits2f((uint)*(undefined8 *)(pfVar17 + 6));
        (*(undefined8 *)(gen_frame + 0x80)) = uVar2;
        uVar2 = (*(undefined8 *)(gen_frame + 0x80));
        uVar7 = *(undefined8 *)(param_3 + 0x18 + iVar19 * 0x30);
        (*(undefined8 *)(gen_frame + 0x88)) = uVar7;
        uVar7 = (*(undefined8 *)(gen_frame + 0x88));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) = gen_bits2f((uint)uVar2);
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) = gen_bits2f((uint)uVar7);
        fVar47 = pfVar17[7];
        pfVar25 = (float *)(param_4 + 0x10 + iVar19 * 0x30);
        *pfVar25 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4))) +
                   (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) * fVar47) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) * fVar27;
        pfVar25[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0))) +
                     (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) * fVar47) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) * fVar27;
        pfVar25[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0))) +
                     (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)) * fVar47) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) * fVar27;
        pfVar25[3] = fVar27 * fVar47 -
                     (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x90)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x80)) + 0))) +
                     (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x98)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x88)) + 0)));
        pfVar25 = (float *)(param_3 + 0x20 + iVar19 * 0x30);
        fVar27 = pfVar17[8] * *pfVar25;
        fVar47 = pfVar17[9] * pfVar25[1];
        fVar48 = pfVar17[10] * pfVar25[2];
        fVar46 = pfVar17[0xb] * pfVar25[3];
        (*(undefined8 *)(gen_frame + 0x80)) = uVar2;
        (*(undefined8 *)(gen_frame + 0x88)) = uVar7;
        (*(undefined8 *)(gen_frame + 0x90)) = uVar13;
        (*(undefined8 *)(gen_frame + 0x98)) = uVar14;
      }
      pvVar16 = (LPVOID)((int)(*(LPVOID *)(gen_frame + 0xfc)) + 1);
      pfVar25 = (float *)(param_4 + 0x20 + iVar19 * 0x30);
      *pfVar25 = fVar27;
      pfVar25[1] = fVar47;
      pfVar25[2] = fVar48;
      pfVar25[3] = fVar46;
      (*(LPVOID *)(gen_frame + 0xfc)) = pvVar16;
    } while ((int)pvVar16 < iVar24);
  }
  pvVar16 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar16 + 4);
  (*(LPVOID *)(gen_frame + 0xf4)) = pvVar16;
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar16 + 0xc)) {
    *puVar6 = "StenforceConstraints";
    uVar7 = rdtsc();
    (*(LPVOID *)(gen_frame + 0xfc)) = (LPVOID)uVar7;
    puVar6[1] = (LPVOID)uVar7;
    *(undefined4 * PTR32 *)((int)pvVar16 + 4) = puVar6 + 3;
  }
  if (param_5 == 1) {
    F_00d32d20(*(undefined4 *)(param_1 + 0x14),param_4);
  }
  else if (param_5 == 2) {
    F_00d32da0(*(undefined4 *)(param_1 + 0x14),param_3,param_4);
  }
  pvVar21 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar21 + 4);
  pvVar16 = pvVar21;
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar21 + 0xc)) {
    *puVar6 = &REFG(undefined, 0x1134dd0);
    uVar7 = rdtsc();
    pvVar16 = (LPVOID)uVar7;
    (*(LPVOID *)(gen_frame + 0xfc)) = pvVar16;
    puVar6[1] = pvVar16;
    *(undefined4 * PTR32 *)((int)pvVar21 + 4) = puVar6 + 3;
  }
  return (uint)pvVar16;
}

/* ref: FUN_00d67460 */
uint F_00d67460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd67460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00d657d0(param_1,param_2,param_3,0,0,param_4,0,0);
  return uVar1;
}

/* ref: FUN_00d67490 */
uint F_00d67490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd67490u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x74);
  if (uVar4 == 0) {
    puVar3 = (undefined4 *)F_00d321b0(param_2);
    uVar1 = *puVar3;
    puVar3 = (undefined4 *)F_00d32a50(param_3);
    uVar2 = *puVar3;
    puVar3 = (undefined4 *)F_00d31d60(param_3);
    uVar4 = F_00d66710(param_1,uVar1,uVar2,*puVar3,param_4);
    return uVar4;
  }
  if (uVar4 == 1) {
    puVar3 = (undefined4 *)F_00d32a50(param_2);
    uVar1 = *puVar3;
    puVar3 = (undefined4 *)F_00d329a0(param_3);
    uVar4 = F_00d67460(param_1,uVar1,*puVar3,0);
  }
  return uVar4;
}

/* ref: FUN_00d67510 */
uint F_00d67510(unsigned int gen_a0)
{
  GEN_ENTER(0xd67510u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  uint uVar1;
  int * piVar2;
  byte bVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  undefined * pvVar6;
  uint uVar7;
  uint uVar8;
  short * psVar9;
  int iVar10;
  int iVar11;
  char * pcVar12;
  
  piVar2 = param_1;
  uVar7 = *(uint *)(param_1[1] + 0x1c);
  (*(uint *)(gen_frame + 0x254)) = uVar7;
  if (uVar7 == 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = (undefined4 *)0x0;
  }
  else {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar5 = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
    uVar8 = uVar7 * 4 + 0x7f & 0xffffff80;
    uVar1 = (int)puVar5 + uVar8;
    if ((*(int *)((int)pvVar4 + 8) < (int)uVar8) || (*(uint *)((int)pvVar4 + 0x10) < uVar1)) {
      puVar5 = (undefined4 *)F_00d94390(pvVar4,uVar8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = puVar5;
    }
    else {
      *(uint *)((int)pvVar4 + 0xc) = uVar1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = puVar5;
    }
  }
  (*(uint *)(gen_frame + 0x248)) = uVar7 | 0x80000000;
  puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x240));
  if (0 < (int)uVar7) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  iVar10 = 0;
  if (0 < param_1[3]) {
    param_1 = (int *)0x0;
    do {
      psVar9 = (short *)(piVar2[2] + (int)param_1);
      bVar3 = F_00d65130(piVar2[0x19],psVar9 + 8);
      if (bVar3 == 0) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x264)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x264)),"Improper mapping transform found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabbabac1,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x273);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x264)));
      }
      if ((*psVar9 < 0) || (*(int *)(*piVar2 + 0x1c) <= (int)*psVar9)) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x27c)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x27c)),"Invalid mapped bone found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabba3f01,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x278);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x27c)));
      }
      if ((psVar9[1] < 0) || (*(int *)(piVar2[1] + 0x1c) <= (int)psVar9[1])) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x270)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x270)),"Invalid mapped bone found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabbaeab2,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x27d);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x270)));
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x240))[psVar9[1]] = (*(undefined4 * PTR32 *)(gen_frame + 0x240))[psVar9[1]] + 1;
      if (1 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x240))[psVar9[1]]) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x258)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x258)),"Improperly mapped bone found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabba819f,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x285);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x258)));
      }
      param_1 = (int *)((int)param_1 + 0x40);
      iVar10 = iVar10 + 1;
    } while (iVar10 < piVar2[3]);
  }
  (*(int *)(gen_frame + 0x288)) = 0;
  if (0 < piVar2[6]) {
    param_1 = (int *)0x0;
    do {
      psVar9 = (short *)(piVar2[5] + (int)param_1);
      bVar3 = F_00d65130(piVar2[0x19],psVar9 + 8);
      if (bVar3 == 0) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x258)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x258)),"Improper mapping transform found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabbabac1,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x292);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x258)));
      }
      bVar3 = F_00d65130(piVar2[0x19],psVar9 + 0x20);
      if (bVar3 == 0) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x270)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x270)),"Improper mapping transform found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabbabac1,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x297);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x270)));
      }
      if (psVar9[1] <= *psVar9) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x27c)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x27c)),"Invalid chain found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabba819f,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x29c);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x27c)));
      }
      if (psVar9[3] <= psVar9[2]) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x264)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x264)),"Invalid chain found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xabba819f,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x2a1);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x264)));
      }
      if ((psVar9[1] < 0) || (*(int *)(*piVar2 + 0x1c) <= (int)psVar9[1])) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x234)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x234)),"Invalid bone found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0x17626ee1,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x2a6);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x234)));
      }
      if ((*psVar9 < 0) || (*(int *)(*piVar2 + 0x1c) <= (int)*psVar9)) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x210)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x210)),"Invalid bone found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0x6073fdc,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x2ab);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x210)));
      }
      if ((psVar9[3] < 0) || (*(int *)(piVar2[1] + 0x1c) <= (int)psVar9[3])) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x21c)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x21c)),"Invalid bone found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0x19a18bfd,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x2b0);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x21c)));
      }
      if ((psVar9[2] < 0) || (*(int *)(piVar2[1] + 0x1c) <= (int)psVar9[2])) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x204)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x204)),"Invalid bone found");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xfb695b1,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x2b5);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x204)));
      }
      iVar10 = (int)psVar9[3];
      if (psVar9[2] <= iVar10) {
        do {
          (*(undefined4 * PTR32 *)(gen_frame + 0x240))[iVar10] = (*(undefined4 * PTR32 *)(gen_frame + 0x240))[iVar10] + 1;
          if (1 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x240))[iVar10]) {
            F_00da0a80(((undefined1 *)(gen_frame + 0x228)),((undefined1 *)(gen_frame + 0x4)),0x200);
            pcVar12 = "\" has been mapped more than once.";
            iVar11 = *(int *)(piVar2[1] + 0x18) + iVar10 * 8;
            pvVar6 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x228)),"Improperly mapped bone found. Bone \"");
            pvVar6 = (undefined *)F_00da0420(pvVar6,iVar11);
            F_00d9fe80(pvVar6,pcVar12);
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78),1,0xabba819f,((undefined1 *)(gen_frame + 0x4)),"Mapper\\hkaSkeletonMapper.cpp",0x2c1);
            F_00d9fda0(((undefined1 *)(gen_frame + 0x228)));
          }
          iVar10 = (int)*((short *)GEN_TOP((*(int *)(piVar2[1] + 0xc) + iVar10 * 2)));
        } while (psVar9[2] <= iVar10);
      }
      param_1 = (int *)((int)param_1 + 0x70);
      iVar10 = (*(int *)(gen_frame + 0x288)) + 1;
      (*(int *)(gen_frame + 0x288)) = iVar10;
    } while (iVar10 < piVar2[6]);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x240));
  uVar7 = (*(uint *)(gen_frame + 0x254)) * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar7) ||
      (uVar7 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x240)) != *(int *)((int)pvVar4 + 0xc))) ||
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x240)))) {
    F_00d945c0(pvVar4,(*(undefined4 * PTR32 *)(gen_frame + 0x240)),uVar7);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x240));
  }
  uVar7 = (*(uint *)(gen_frame + 0x248));
  if (-1 < (int)(*(uint *)(gen_frame + 0x248))) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar5,(*(uint *)(gen_frame + 0x248)) * 4);
  }
  return uVar7;
}

/* ref: FUN_00d67b80 */
uint F_00d67b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1134c04));
  F_00d64f80((undefined *)((int)this + 0x10));
  F_00d68810((undefined *)((int)this + 0x10),param_1);
  return (uint)this;
}

/* ref: FUN_00d67bd0 */
uint F_00d67bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67bd0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00d67bf0 */
uint F_00d67bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67bf0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d67c10 */
unsigned int F_00d67c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00d67c50 */
uint F_00d67c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_00d67c60 */
uint F_00d67c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00d67c70 */
uint F_00d67c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d67c90 */
uint F_00d67c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d67ca0 */
uint F_00d67ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67ca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d67cf0 */
uint F_00d67cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67cf0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d67d10 */
uint F_00d67d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67d10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 6)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0x3fU)) >> 6;
  return uVar2;
}

/* ref: FUN_00d67d50 */
uint F_00d67d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67d50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x70)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x70;
  return uVar2;
}

/* ref: FUN_00d67d90 */
unsigned int F_00d67d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d67dc0 */
uint F_00d67dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67dc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 2)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 2;
  return uVar2;
}

/* ref: FUN_00d67df0 */
uint F_00d67df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d67e10 */
uint F_00d67e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2;
  *(float *)((int)this + 4) = fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d67e30 */
uint F_00d67e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d67e50 */
uint F_00d67e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67e50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 auVar1 [16];
  undefined4 in_EAX = 0;
  uint uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)GEN_ISNAN(in_ecx[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)GEN_ISNAN(*in_ecx);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)GEN_ISNAN(in_ecx[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)GEN_ISNAN(in_ecx[3]);
  uVar2 = gen_movmskps(&(auVar1));
  *(bool *)param_2 = (uVar2 & 7) == 0;
  return param_2;
}

/* ref: FUN_00d67e90 */
unsigned int F_00d67e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd67e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,2);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined2 *)(iVar1 + iVar3 * 2 + iVar5 * 2) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d67ef0 */
uint F_00d67ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00d67f00 */
uint F_00d67f00(unsigned int gen_a0)
{
  GEN_ENTER(0xd67f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

