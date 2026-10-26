#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00de00d0 */
uint F_00de00d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde00d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a860));
  }
  return (uint)param_1;
}

/* ref: FUN_00de00f0 */
uint F_00de00f0(void)
{
  GEN_ENTER(0xde00f0u, 0u, 0u, 0u, 0u);
  return 0x114a860;
}

/* ref: FUN_00de0130 */
uint F_00de0130(unsigned int gen_a0)
{
  GEN_ENTER(0xde0130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de0160 */
uint F_00de0160(unsigned int gen_a0)
{
  GEN_ENTER(0xde0160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               *(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSparselyAnimatedBool::vf0 */
uint F_00de01d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde01d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de0160(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0210 */
uint F_00de0210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de0230 */
uint F_00de0230(unsigned int gen_a0)
{
  GEN_ENTER(0xde0230u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de0240 */
uint F_00de0240(unsigned int gen_a0)
{
  GEN_ENTER(0xde0240u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a90c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0260 */
uint F_00de0260(void)
{
  GEN_ENTER(0xde0260u, 0u, 0u, 0u, 0u);
  return 0x114a90c;
}

/* ref: FUN_00de0280 */
uint F_00de0280(unsigned int gen_a0)
{
  GEN_ENTER(0xde0280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de02b0 */
uint F_00de02b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde02b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < *(int *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(int *)((int)this + 0x20) << 6);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x10) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4)));
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSkinBinding::vf0 */
uint F_00de0350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de02b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0390 */
uint F_00de0390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de03b0 */
uint F_00de03b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde03b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de03c0 */
unsigned int F_00de03c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde03c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
    F_00d91350(param_1 + 2,param_2);
    F_00d91350(param_1 + 3,param_2);
  }
  return 0;
}

/* ref: FUN_00de03f0 */
uint F_00de03f0(void)
{
  GEN_ENTER(0xde03f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)),0);
  return 0x114ab70;
}

/* ref: FUN_00de0540 */
uint F_00de0540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0570 */
uint F_00de0570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05a0 */
uint F_00de05a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde05a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05d0 */
uint F_00de05d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde05d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0600 */
uint F_00de0600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0630 */
uint F_00de0630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0660 */
uint F_00de0660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0680 */
unsigned int F_00de0680(unsigned int gen_a0)
{
  GEN_ENTER(0xde0680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de06a0 */
unsigned int F_00de06a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de06c0 */
unsigned int F_00de06c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde06c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de06e0 */
unsigned int F_00de06e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde06e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de0700 */
unsigned int F_00de0700(unsigned int gen_a0)
{
  GEN_ENTER(0xde0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de0720 */
unsigned int F_00de0720(unsigned int gen_a0)
{
  GEN_ENTER(0xde0720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de07b0 */
unsigned int F_00de07b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde07b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de07e0 */
unsigned int F_00de07e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde07e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de0810 */
unsigned int F_00de0810(unsigned int gen_a0)
{
  GEN_ENTER(0xde0810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de0840 */
unsigned int F_00de0840(unsigned int gen_a0)
{
  GEN_ENTER(0xde0840u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de0870 */
unsigned int F_00de0870(unsigned int gen_a0)
{
  GEN_ENTER(0xde0870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de08a0 */
unsigned int F_00de08a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde08a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de08d0 */
unsigned int F_00de08d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde08d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de0900 */
uint F_00de0900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0900u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0940 */
uint F_00de0940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0940u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0980 */
uint F_00de0980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0980u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de09c0 */
uint F_00de09c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde09c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0a00 */
uint F_00de0a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0a40 */
uint F_00de0a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0a80 */
uint F_00de0a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0ac0 */
unsigned int F_00de0ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0ac0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0af0 */
unsigned int F_00de0af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0af0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0b20 */
unsigned int F_00de0b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0b50 */
unsigned int F_00de0b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0b80 */
unsigned int F_00de0b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0bb0 */
unsigned int F_00de0bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0bb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0be0 */
unsigned int F_00de0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0be0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0dd0 */
uint F_00de0dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0dd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0e40 */
uint F_00de0e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0e40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0eb0 */
uint F_00de0eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0eb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0f20 */
uint F_00de0f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0f20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de0f90 */
uint F_00de0f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0f90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1000 */
uint F_00de1000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1070 */
uint F_00de1070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de10e0 */
uint F_00de10e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde10e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1150 */
uint F_00de1150(unsigned int gen_a0)
{
  GEN_ENTER(0xde1150u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de11c0 */
uint F_00de11c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde11c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1230 */
uint F_00de1230(unsigned int gen_a0)
{
  GEN_ENTER(0xde1230u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de12a0 */
uint F_00de12a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde12a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1310 */
uint F_00de1310(unsigned int gen_a0)
{
  GEN_ENTER(0xde1310u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1380 */
uint F_00de1380(unsigned int gen_a0)
{
  GEN_ENTER(0xde1380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de13f0 */
uint F_00de13f0(unsigned int gen_a0)
{
  GEN_ENTER(0xde13f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1460 */
uint F_00de1460(unsigned int gen_a0)
{
  GEN_ENTER(0xde1460u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de14d0 */
uint F_00de14d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde14d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1540 */
uint F_00de1540(unsigned int gen_a0)
{
  GEN_ENTER(0xde1540u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de15b0 */
uint F_00de15b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde15b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1620 */
uint F_00de1620(unsigned int gen_a0)
{
  GEN_ENTER(0xde1620u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1690 */
uint F_00de1690(unsigned int gen_a0)
{
  GEN_ENTER(0xde1690u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1700 */
uint F_00de1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91350(in_ecx + 2,param_2);
  F_00d91350(in_ecx + 3,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1730 */
uint F_00de1730(unsigned int gen_a0)
{
  GEN_ENTER(0xde1730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxScene::vf0 */
uint F_00de1760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de6840(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de17a0 */
uint F_00de17a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde17a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de17c0 */
uint F_00de17c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde17c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de17d0 */
uint F_00de17d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde17d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
    uVar1 = F_00d91350(param_1 + 8,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de17f0 */
uint F_00de17f0(void)
{
  GEN_ENTER(0xde17f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)),0);
  return 0x114abcc;
}

/* ref: FUN_00de1830 */
uint F_00de1830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
  F_00d91350(in_ecx + 8,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1850 */
uint F_00de1850(unsigned int gen_a0)
{
  GEN_ENTER(0xde1850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de1880 */
uint F_00de1880(unsigned int gen_a0)
{
  GEN_ENTER(0xde1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  F_00d91510((undefined *)((int)this + 0x20));
  iVar3 = *(int *)((int)this + 0x18) + -1;
  iVar1 = *(int *)((int)this + 0x14);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               *(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = F_00de47a0(this);
  return uVar2;
}

/* ref: hkxNodeSelectionSet::vf0 */
uint F_00de1900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de1880(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de1940 */
uint F_00de1940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1950 */
uint F_00de1950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1970 */
uint F_00de1970(unsigned int gen_a0)
{
  GEN_ENTER(0xde1970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de1990 */
unsigned int F_00de1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de74e0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00de19b0 */
uint F_00de19b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde19b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de19c0 */
uint F_00de19c0(void)
{
  GEN_ENTER(0xde19c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de74e0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de19f0 */
unsigned int F_00de19f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde19f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
    F_00d91350(param_1 + 5,param_2);
    F_00d91350(param_1 + 6,param_2);
  }
  return 0;
}

/* ref: FUN_00de1a20 */
uint F_00de1a20(void)
{
  GEN_ENTER(0xde1a20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x114ac88;
}

/* ref: FUN_00de1a60 */
uint F_00de1a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
  F_00d91350(in_ecx + 5,param_2);
  F_00d91350(in_ecx + 6,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1a90 */
uint F_00de1a90(unsigned int gen_a0)
{
  GEN_ENTER(0xde1a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x18));
  F_00d91510((undefined *)((int)this + 0x14));
  uVar1 = F_00de47a0(this);
  return uVar1;
}

/* ref: FUN_00de1ab0 */
uint F_00de1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xde1ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMesh::UserChannelInfo::vf0 */
uint F_00de1ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x18);
  F_00d91510(this + 0x14);
  F_00de47a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de1b30 */
uint F_00de1b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1b50 */
uint F_00de1b50(unsigned int gen_a0)
{
  GEN_ENTER(0xde1b50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de1b60 */
uint F_00de1b60(unsigned int gen_a0)
{
  GEN_ENTER(0xde1b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ad4c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de1b80 */
uint F_00de1b80(void)
{
  GEN_ENTER(0xde1b80u, 0u, 0u, 0u, 0u);
  return 0x114ad4c;
}

/* ref: FUN_00de1bc0 */
unsigned int F_00de1bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde1bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de1c20 */
uint F_00de1c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde1c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c50 */
uint F_00de1c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde1c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c70 */
unsigned int F_00de1c70(unsigned int gen_a0)
{
  GEN_ENTER(0xde1c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de1c90 */
unsigned int F_00de1c90(unsigned int gen_a0)
{
  GEN_ENTER(0xde1c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de1ce0 */
uint F_00de1ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1ce0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1d20 */
unsigned int F_00de1d20(unsigned int gen_a0)
{
  GEN_ENTER(0xde1d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de1d50 */
unsigned int F_00de1d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1d50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1d80 */
uint F_00de1d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1d80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1e00 */
unsigned int F_00de1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1e00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1e30 */
uint F_00de1e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1e30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1ee0 */
uint F_00de1ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xde1ee0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de1f50 */
uint F_00de1f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1f50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de1fc0 */
uint F_00de1fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde1fc0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de2030 */
uint F_00de2030(unsigned int gen_a0)
{
  GEN_ENTER(0xde2030u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de20a0 */
uint F_00de20a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde20a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de2120 */
uint F_00de2120(unsigned int gen_a0)
{
  GEN_ENTER(0xde2120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2150 */
uint F_00de2150(unsigned int gen_a0)
{
  GEN_ENTER(0xde2150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  iVar4 = *(int *)((int)this + 0x20) + -1;
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < *(int *)((int)this + 0x24)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),
               *(int *)((int)this + 0x24) * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar4 = *(int *)((int)this + 0x10) + -1;
  iVar1 = *(int *)((int)this + 0xc);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4
              );
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar3 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkxMeshSection::vf0 */
uint F_00de2250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de2150(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2290 */
uint F_00de2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de22b0 */
unsigned int F_00de22b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde22b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de7f70(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00de22d0 */
uint F_00de22d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde22d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de22e0 */
uint F_00de22e0(void)
{
  GEN_ENTER(0xde22e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de7f70(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de2310 */
uint F_00de2310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2330 */
uint F_00de2330(unsigned int gen_a0)
{
  GEN_ENTER(0xde2330u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2340 */
unsigned int F_00de2340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ae9c));
    F_00d91350(param_1 + 2,param_2);
    F_00d91350(param_1 + 4,param_2);
    F_00d91350(param_1 + 5,param_2);
    F_00d91350(param_1 + 6,param_2);
  }
  return 0;
}

/* ref: FUN_00de2380 */
uint F_00de2380(void)
{
  GEN_ENTER(0xde2380u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x10)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x14)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x18)),0);
  return 0x114ae9c;
}

/* ref: FUN_00de23f0 */
uint F_00de23f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde23f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ae9c));
  F_00d91350((int)this + 8,param_1);
  F_00d91350((int)this + 0x10,param_1);
  F_00d91350((int)this + 0x14,param_1);
  F_00d91350((int)this + 0x18,param_1);
  return (uint)this;
}

/* ref: FUN_00de2440 */
uint F_00de2440(unsigned int gen_a0)
{
  GEN_ENTER(0xde2440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2470 */
uint F_00de2470(unsigned int gen_a0)
{
  GEN_ENTER(0xde2470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x24)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),
               *(uint *)((int)this + 0x24) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  F_00d91510((undefined *)((int)this + 0x18));
  F_00d91510((undefined *)((int)this + 0x14));
  F_00d91510((undefined *)((int)this + 0x10));
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxMaterialShader::vf0 */
uint F_00de24e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde24e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de2470(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2520 */
uint F_00de2520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2540 */
uint F_00de2540(unsigned int gen_a0)
{
  GEN_ENTER(0xde2540u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2550 */
uint F_00de2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114afbc));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de2570 */
uint F_00de2570(void)
{
  GEN_ENTER(0xde2570u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x114afbc;
}

/* ref: FUN_00de25c0 */
uint F_00de25c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde25c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114afbc));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de25e0 */
uint F_00de25e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde25e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2610 */
uint F_00de2610(unsigned int gen_a0)
{
  GEN_ENTER(0xde2610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x18)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),
               *(uint *)((int)this + 0x18) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxMaterialEffect::vf0 */
uint F_00de2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0x14) = 0;
  if (-1 < (int)*(uint *)(this + 0x18)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x10),
               *(uint *)(this + 0x18) & 0x3fffffff);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x80000000;
  F_00d91510(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de26e0 */
uint F_00de26e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde26e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2700 */
uint F_00de2700(unsigned int gen_a0)
{
  GEN_ENTER(0xde2700u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2710 */
uint F_00de2710(unsigned int gen_a0)
{
  GEN_ENTER(0xde2710u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b044));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2730 */
uint F_00de2730(void)
{
  GEN_ENTER(0xde2730u, 0u, 0u, 0u, 0u);
  return 0x114b044;
}

/* ref: FUN_00de2770 */
uint F_00de2770(unsigned int gen_a0)
{
  GEN_ENTER(0xde2770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxLight::vf0 */
uint F_00de27a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde27a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de27e0 */
uint F_00de27e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde27e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2800 */
uint F_00de2800(unsigned int gen_a0)
{
  GEN_ENTER(0xde2800u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2810 */
uint F_00de2810(unsigned int gen_a0)
{
  GEN_ENTER(0xde2810u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b124));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2830 */
uint F_00de2830(void)
{
  GEN_ENTER(0xde2830u, 0u, 0u, 0u, 0u);
  return 0x114b124;
}

/* ref: FUN_00de2860 */
uint F_00de2860(unsigned int gen_a0)
{
  GEN_ENTER(0xde2860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2890 */
uint F_00de2890(unsigned int gen_a0)
{
  GEN_ENTER(0xde2890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < *(int *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(int *)((int)this + 0x20) * 4);
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

/* ref: hkxIndexBuffer::vf0 */
uint F_00de2910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de2890(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2950 */
uint F_00de2950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2970 */
uint F_00de2970(unsigned int gen_a0)
{
  GEN_ENTER(0xde2970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2980 */
uint F_00de2980(unsigned int gen_a0)
{
  GEN_ENTER(0xde2980u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b188));
  }
  return (uint)param_1;
}

/* ref: FUN_00de29a0 */
uint F_00de29a0(void)
{
  GEN_ENTER(0xde29a0u, 0u, 0u, 0u, 0u);
  return 0x114b188;
}

/* ref: FUN_00de29c0 */
uint F_00de29c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde29c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de29f0 */
uint F_00de29f0(unsigned int gen_a0)
{
  GEN_ENTER(0xde29f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxEdgeSelectionChannel::vf0 */
uint F_00de2a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ab0 */
uint F_00de2ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2af0 */
uint F_00de2af0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2af0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b284));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2b10 */
uint F_00de2b10(unsigned int gen_a0)
{
  GEN_ENTER(0xde2b10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2b20 */
uint F_00de2b20(void)
{
  GEN_ENTER(0xde2b20u, 0u, 0u, 0u, 0u);
  return 0x114b284;
}

/* ref: FUN_00de2b30 */
uint F_00de2b30(unsigned int gen_a0)
{
  GEN_ENTER(0xde2b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxCamera::vf0 */
uint F_00de2b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2b60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de2ba0 */
uint F_00de2ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2bc0 */
uint F_00de2bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2bd0 */
uint F_00de2bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
    param_1[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
    uVar1 = F_00d91350(param_1 + 7,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de2c00 */
uint F_00de2c00(void)
{
  GEN_ENTER(0xde2c00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0xc)),0);
  return 0x114b2e0;
}

/* ref: FUN_00de2c50 */
uint F_00de2c50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2c80 */
uint F_00de2c80(unsigned int gen_a0)
{
  GEN_ENTER(0xde2c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de2cd0 */
uint F_00de2cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
  in_ecx[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  F_00d91350(in_ecx + 7,param_2);
  return (uint)in_ecx;
}

/* ref: hkxBlobMeshShape::vf3 */
uint F_00de2d00(void)
{
  GEN_ENTER(0xde2d00u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkxBlobMeshShape::vf4 */
unsigned int F_00de2d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde2d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: hkxBlobMeshShape::vf5 */
unsigned int F_00de2d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkxBlobMeshShape::vf7 */
uint F_00de2d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x1c,param_1);
  return uVar1;
}

/* ref: hkxBlobMeshShape::vf2 */
uint F_00de2d40(void)
{
  GEN_ENTER(0xde2d40u, 0u, 0u, 0u, 0u);
  return 0x15e32e4;
}

/* ref: FUN_00de2d50 */
uint F_00de2d50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxBlobMeshShape::vf6 */
uint F_00de2d80(unsigned int gen_a0)
{
  GEN_ENTER(0xde2d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c) & 0xfffffffe;
}

/* ref: FUN_00de2d90 */
uint F_00de2d90(unsigned int gen_a0)
{
  GEN_ENTER(0xde2d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x1c));
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxBlob::vf0 */
uint F_00de2de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < (int)*(uint *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(uint *)(this + 0x10) & 0x3fffffff);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkxBlobMeshShape::vf0 */
uint F_00de2e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x1c);
  *(undefined4 *)(this + 0x14) = 0;
  if (-1 < (int)*(uint *)(this + 0x18)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x10),
               *(uint *)(this + 0x18) & 0x3fffffff);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ed0 */
uint F_00de2ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2ef0 */
uint F_00de2ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2f00 */
uint F_00de2f00(unsigned int gen_a0)
{
  GEN_ENTER(0xde2f00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2f20 */
uint F_00de2f20(void)
{
  GEN_ENTER(0xde2f20u, 0u, 0u, 0u, 0u);
  return 0x114b2d0;
}

/* ref: FUN_00de2f30 */
uint F_00de2f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2f50 */
uint F_00de2f50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2f50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2f60 */
uint F_00de2f60(unsigned int gen_a0)
{
  GEN_ENTER(0xde2f60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2f80 */
uint F_00de2f80(void)
{
  GEN_ENTER(0xde2f80u, 0u, 0u, 0u, 0u);
  return 0x1149bf4;
}

/* ref: FUN_00de2f90 */
uint F_00de2f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2fb0 */
uint F_00de2fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2fb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2fc0 */
uint F_00de2fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b378));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2fe0 */
uint F_00de2fe0(void)
{
  GEN_ENTER(0xde2fe0u, 0u, 0u, 0u, 0u);
  return 0x114b378;
}

/* ref: FUN_00de3010 */
uint F_00de3010(unsigned int gen_a0)
{
  GEN_ENTER(0xde3010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de3040 */
uint F_00de3040(unsigned int gen_a0)
{
  GEN_ENTER(0xde3040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedVector::vf0 */
uint F_00de3090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) << 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de3100 */
uint F_00de3100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de3120 */
uint F_00de3120(unsigned int gen_a0)
{
  GEN_ENTER(0xde3120u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de3130 */
uint F_00de3130(unsigned int gen_a0)
{
  GEN_ENTER(0xde3130u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b3c0));
  }
  return (uint)param_1;
}

/* ref: FUN_00de3150 */
uint F_00de3150(void)
{
  GEN_ENTER(0xde3150u, 0u, 0u, 0u, 0u);
  return 0x114b3c0;
}

/* ref: FUN_00de3190 */
uint F_00de3190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00de31e0 */
uint F_00de31e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde31e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de3220 */
uint F_00de3220(unsigned int gen_a0)
{
  GEN_ENTER(0xde3220u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de3260 */
uint F_00de3260(unsigned int gen_a0)
{
  GEN_ENTER(0xde3260u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de32b0 */
uint F_00de32b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde32b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de32e0 */
uint F_00de32e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde32e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedQuaternion::vf0 */
uint F_00de3330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) << 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de33a0 */
uint F_00de33a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde33a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de33c0 */
uint F_00de33c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde33c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de33d0 */
uint F_00de33d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde33d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b3e8));
  }
  return (uint)param_1;
}

/* ref: FUN_00de33f0 */
uint F_00de33f0(void)
{
  GEN_ENTER(0xde33f0u, 0u, 0u, 0u, 0u);
  return 0x114b3e8;
}

/* ref: FUN_00de3410 */
uint F_00de3410(unsigned int gen_a0)
{
  GEN_ENTER(0xde3410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de3440 */
uint F_00de3440(unsigned int gen_a0)
{
  GEN_ENTER(0xde3440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedMatrix::vf0 */
uint F_00de3490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) << 6);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de3500 */
uint F_00de3500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de3520 */
uint F_00de3520(unsigned int gen_a0)
{
  GEN_ENTER(0xde3520u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de3530 */
uint F_00de3530(unsigned int gen_a0)
{
  GEN_ENTER(0xde3530u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b40c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de3550 */
uint F_00de3550(void)
{
  GEN_ENTER(0xde3550u, 0u, 0u, 0u, 0u);
  return 0x114b40c;
}

/* ref: FUN_00de3570 */
uint F_00de3570(unsigned int gen_a0)
{
  GEN_ENTER(0xde3570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de35a0 */
uint F_00de35a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde35a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedFloat::vf0 */
uint F_00de35f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde35f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de3660 */
uint F_00de3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de3680 */
unsigned int F_00de3680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de80b0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00de36a0 */
uint F_00de36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde36a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de36b0 */
uint F_00de36b0(void)
{
  GEN_ENTER(0xde36b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de80b0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de3700 */
uint F_00de3700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3700u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (short)param_3;
  return param_2;
}

/* ref: FUN_00de3730 */
uint F_00de3730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de3750 */
uint F_00de3750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3750u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (short)param_3;
  return param_2;
}

/* ref: FUN_00de3780 */
byte F_00de3780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  short * psVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != param_1[1]) {
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    piVar2 = *(int * PTR32 *)this;
    psVar3 = (short *)(*param_1 + 6);
    iVar4 = *param_1 - (int)piVar2;
    do {
      if (((((short)piVar2[1] != psVar3[-1]) || (*(short *)((int)piVar2 + 6) != *psVar3)) ||
          (*piVar2 != *(int *)(iVar4 + (int)piVar2))) ||
         ((piVar2[2] != *(int *)(psVar3 + 1) || ((char)piVar2[3] != (char)psVar3[3])))) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      psVar3 = psVar3 + 8;
      piVar2 = piVar2 + 4;
    } while (iVar5 < iVar1);
  }
  return 1;
}

/* ref: FUN_00de37f0 */
uint F_00de37f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde37f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: FUN_00de3800 */
uint F_00de3800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3800u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de3810 */
uint F_00de3810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3810u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (short)param_3;
  return param_2;
}

/* ref: FUN_00de3830 */
uint F_00de3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3830u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de3840 */
uint F_00de3840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3840u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (short)param_3;
  return param_2;
}

/* ref: FUN_00de3860 */
uint F_00de3860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3860u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de3890 */
uint F_00de3890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  switch((unsigned int)(uintptr_t)((short)param_1[1])) {
  case 1: ;
    return *param_1 + *(int *)((int)this + 0x38);
  case 2: ;
    return *param_1 + *(int *)((int)this + 0x2c);
  case 3: ;
    return *param_1 + *(int *)((int)this + 0x20);
  case 4: ;
    bVar1 = *(byte *)(param_1 + 3);
    if ((bVar1 == 3) || (bVar1 == 4)) {
      return *param_1 + *(int *)((int)this + 8);
    }
    if (bVar1 < 3) {
      return *param_1 + *(int *)((int)this + 0x14);
    }
  }
  return 0;
}

/* ref: FUN_00de3910 */
uint F_00de3910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de3890(this,param_1);
  return uVar1;
}

/* ref: FUN_00de3920 */
uint F_00de3920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde3920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x430];
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = F_00de3780((undefined *)((int)this + 0x5c),(int)param_1 + 0x5c);
  (*(byte *)(gen_frame + 0x42b)) = bVar1;
  uVar2 = F_00da1030(((int *)(gen_frame + 0xc)),0,0x404);
  if ((param_3 < *(int *)((int)this + 0x44)) && (param_2 < *(int *)((int)param_1 + 0x44))) {
    if ((*(byte *)(gen_frame + 0x42b)) == 0) {
      uVar2 = 0;
      (*(uint *)(gen_frame + 0x414)) = 0;
      if (0 < *(int *)((int)this + 0x60)) {
        (*(int *)(gen_frame + 0x424)) = 0;
        do {
          iVar6 = *(int *)((int)this + 0x5c) + (*(int *)(gen_frame + 0x424));
          (*(int *)(gen_frame + 0x410)) = ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))];
          iVar3 = 0;
          (*(int *)(gen_frame + 0x420)) = 0;
          if (0 < *(int *)((int)param_1 + 0x60)) {
            iVar4 = *(int *)((int)param_1 + 0x5c);
            (*(uint *)(gen_frame + 0x41c)) = iVar4;
            (*(short * PTR32 *)(gen_frame + 0x418)) = (short *)(iVar4 + 6);
            do {
              if (*(*(short * PTR32 *)(gen_frame + 0x418)) == *(short *)(iVar6 + 6)) {
                if ((*(int *)(gen_frame + 0x420)) == ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))]) {
                  iVar4 = iVar3 * 0x10 + iVar4;
                  if ((iVar4 != 0) && (*(short *)(iVar6 + 4) == *(short *)(iVar4 + 4))) {
                    ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))] = ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))] + 1;
                    uVar2 = F_00de3890(this,iVar6);
                    (*(uint *)(gen_frame + 0x41c)) = uVar2;
                    uVar5 = F_00de3910(param_1,iVar4);
                    uVar2 = 0;
                    switch((unsigned int)(uintptr_t)(*(undefined2 *)(iVar6 + 4))) {
                    case 1: ;
                      uVar2 = (uint)*(byte *)(iVar4 + 0xc);
                      break;
                    case 2: ;
                      uVar2 = (uint)*(byte *)(iVar4 + 0xc) * 2;
                      break;
                    case 3: ;
                      uVar2 = (uint)*(byte *)(iVar4 + 0xc) * 4;
                      break;
                    case 4: ;
                      bVar1 = *(byte *)(iVar4 + 0xc);
                      if ((bVar1 == 3) || (bVar1 == 4)) {
                        uVar2 = 0x10;
                      }
                      else if (bVar1 < 3) {
                        uVar2 = (uint)bVar1 * 4;
                      }
                    }
                    F_00da1010(*(int *)(iVar6 + 8) * param_3 + (*(uint *)(gen_frame + 0x41c)),
                                 *(int *)(iVar4 + 8) * param_2 + uVar5,uVar2);
                  }
                  break;
                }
                (*(int *)(gen_frame + 0x420)) = (*(int *)(gen_frame + 0x420)) + 1;
              }
              (*(short * PTR32 *)(gen_frame + 0x418)) = (*(short * PTR32 *)(gen_frame + 0x418)) + 8;
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)((int)param_1 + 0x60));
          }
          (*(int *)(gen_frame + 0x424)) = (*(int *)(gen_frame + 0x424)) + 0x10;
          uVar2 = (*(uint *)(gen_frame + 0x414)) + 1;
          (*(uint *)(gen_frame + 0x414)) = uVar2;
        } while ((int)uVar2 < *(int *)((int)this + 0x60));
      }
    }
    else {
      iVar3 = *(int *)((int)this + 0x58);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x38),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x38),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x54);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x2c),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x2c),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x50);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x20),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x20),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x4c);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x14),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x14),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x48);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 8),
                             iVar3 * param_2 + *(int *)((int)param_1 + 8),iVar3);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00de3b80 */
uint F_00de3b80(unsigned int gen_a0)
{
  GEN_ENTER(0xde3b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0;
  *(undefined4 *)(in_ecx + 0x3c) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x44) = 0;
  *(undefined4 *)(in_ecx + 0x48) = 0;
  *(undefined4 *)(in_ecx + 0x4c) = 0;
  *(undefined4 *)(in_ecx + 0x50) = 0;
  return 0;
}

/* ref: FUN_00de3bb0 */
uint F_00de3bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)((int)this + 0x50) * param_1;
  *(int *)((int)this + 0x3c) = param_1;
  uVar2 = *(uint *)((int)this + 0x38) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x30,iVar3,1);
  }
  *(int *)((int)this + 0x34) = iVar5;
  uVar6 = (uint)(*(int *)((int)this + 0x4c) * param_1) >> 1;
  uVar2 = *(uint *)((int)this + 0x2c) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x24,uVar2,2);
  }
  *(uint *)((int)this + 0x28) = uVar6;
  uVar6 = (uint)(*(int *)((int)this + 0x48) * param_1) >> 2;
  uVar2 = *(uint *)((int)this + 0x20) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x18,uVar2,4);
  }
  *(uint *)((int)this + 0x1c) = uVar6;
  uVar6 = (uint)(*(int *)((int)this + 0x44) * param_1) >> 2;
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0xc,uVar2,4);
  }
  *(uint *)((int)this + 0x10) = uVar6;
  uVar6 = (uint)(*(int *)((int)this + 0x40) * param_1) >> 4;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar4 = uVar2 * 2;
    if (uVar2 * 2 <= uVar6) {
      uVar4 = uVar6;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar4,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(uint *)((int)this + 4) = uVar6;
  return uVar2;
}

/* ref: FUN_00de3cd0 */
uint F_00de3cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b528));
  F_00de37f0(in_ecx + 0x17,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de3cf0 */
uint F_00de3cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  if (param_1 == *(int *)((int)this + 0x44)) {
    bVar2 = F_00de3780(param_2,(int)this + 0x5c);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  piVar1 = (int *)((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x60) = 0;
  F_00de3b80((int)this + 8);
  local_c = 0;
  if (0 < param_2[1]) {
    local_8 = 0;
    do {
      iVar9 = *param_2 + local_8;
      if (*(uint *)((int)this + 0x60) == (*(uint *)((int)this + 100) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,0x10);
      }
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x60) * 0x10 + *piVar1)));
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        *(undefined2 *)(puVar3 + 1) = 0;
        *(undefined2 *)((int)puVar3 + 6) = 0;
        puVar3[2] = 0;
      }
      iVar5 = *(int *)((int)this + 0x60);
      *(int *)((int)this + 0x60) = iVar5 + 1;
      puVar3 = (undefined4 *)(iVar5 * 0x10 + *piVar1);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(iVar9 + 4);
      *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)(iVar9 + 6);
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(iVar9 + 0xc);
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(iVar9 + 4))) {
      case 1: ;
        *puVar3 = *(undefined4 *)((int)this + 0x58);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + (uint)*(byte *)(iVar9 + 0xc);
        break;
      case 2: ;
        *puVar3 = *(undefined4 *)((int)this + 0x54);
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + (uint)*(byte *)(iVar9 + 0xc) * 2;
        break;
      case 3: ;
        *puVar3 = *(undefined4 *)((int)this + 0x50);
        *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + (uint)*(byte *)(iVar9 + 0xc) * 4;
        break;
      case 4: ;
        bVar2 = *(byte *)(iVar9 + 0xc);
        if ((bVar2 == 3) || (bVar2 == 4)) {
          *puVar3 = *(undefined4 *)((int)this + 0x48);
          *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 0x10;
        }
        else if (bVar2 < 3) {
          *puVar3 = *(undefined4 *)((int)this + 0x4c);
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (uint)*(byte *)(iVar9 + 0xc) * 4
          ;
        }
      }
      local_8 = local_8 + 0x10;
      local_c = local_c + 1;
    } while (local_c < param_2[1]);
  }
  iVar9 = 0;
  local_c = 0;
  if (0 < *(int *)((int)this + 0x60)) {
    do {
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(*piVar1 + 4 + iVar9))) {
      case 1: ;
        uVar7 = *(undefined4 *)((int)this + 0x58);
        break;
      case 2: ;
        uVar7 = *(undefined4 *)((int)this + 0x54);
        break;
      case 3: ;
        uVar7 = *(undefined4 *)((int)this + 0x50);
        break;
      case 4: ;
        bVar2 = *(byte *)(*param_2 + 0xc + iVar9);
        if ((bVar2 == 3) || (bVar2 == 4)) {
          uVar7 = *(undefined4 *)((int)this + 0x48);
        }
        else {
          if (2 < bVar2) goto switchD_00de3e46_default;
          uVar7 = *(undefined4 *)((int)this + 0x4c);
        }
        break;
      default: ;
        goto switchD_00de3e46_default;
      }
      *(undefined4 *)(*piVar1 + iVar9 + 8) = uVar7;
switchD_00de3e46_default: ;
      local_c = local_c + 1;
      iVar9 = iVar9 + 0x10;
    } while (local_c < *(int *)((int)this + 0x60));
  }
  iVar9 = *(int *)((int)this + 0x58) * param_1;
  *(int *)((int)this + 0x44) = param_1;
  uVar4 = *(uint *)((int)this + 0x40) & 0x3fffffff;
  if ((int)uVar4 < iVar9) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x38,iVar5,1);
  }
  *(int *)((int)this + 0x3c) = iVar9;
  uVar8 = (uint)(*(int *)((int)this + 0x54) * param_1) >> 1;
  uVar4 = *(uint *)((int)this + 0x34) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x2c,uVar4,2);
  }
  *(uint *)((int)this + 0x30) = uVar8;
  uVar8 = (uint)(*(int *)((int)this + 0x50) * param_1) >> 2;
  uVar4 = *(uint *)((int)this + 0x28) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,uVar4,4);
  }
  *(uint *)((int)this + 0x24) = uVar8;
  uVar8 = (uint)(*(int *)((int)this + 0x4c) * param_1) >> 2;
  uVar4 = *(uint *)((int)this + 0x1c) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x14,uVar4,4);
  }
  *(uint *)((int)this + 0x18) = uVar8;
  uVar8 = (uint)(*(int *)((int)this + 0x48) * param_1) >> 4;
  uVar4 = *(uint *)((int)this + 0x10) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar6 = uVar4 * 2;
    if (uVar4 * 2 <= uVar8) {
      uVar6 = uVar8;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 8,uVar6,0x10);
    uVar4 = CONCAT31(extraout_var_00,bVar2);
  }
  *(uint *)((int)this + 0xc) = uVar8;
  return uVar4;
}

/* ref: FUN_00de3fc0 */
uint F_00de3fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00de3780((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((char)param_2 != '\0') {
    uVar2 = F_00de3cf0(this,*(undefined4 *)(param_1 + 0x44),(undefined *)((int)this + 0x5c));
  }
  if (bVar1 == 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      do {
        uVar2 = F_00de3920(this,param_1,uVar3,uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x44));
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x44);
    if (*(uint *)((int)this + 0x44) <= *(uint *)(param_1 + 0x44)) {
      uVar3 = *(uint *)((int)this + 0x44);
    }
    if (*(int *)((int)this + 0x58) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x38),*(undefined4 *)(param_1 + 0x38),
                   *(int *)((int)this + 0x58) * uVar3);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x2c),*(undefined4 *)(param_1 + 0x2c),
                   *(int *)((int)this + 0x54) * uVar3);
    }
    if (*(int *)((int)this + 0x50) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x20),*(undefined4 *)(param_1 + 0x20),
                   *(int *)((int)this + 0x50) * uVar3);
    }
    if (*(int *)((int)this + 0x4c) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x14),*(undefined4 *)(param_1 + 0x14),
                   *(int *)((int)this + 0x4c) * uVar3);
    }
    uVar2 = 0;
    if (*(int *)((int)this + 0x48) != 0) {
      uVar2 = F_00da1010(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_1 + 8),
                           *(int *)((int)this + 0x48) * uVar3);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00de40e0 */
uint F_00de40e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde40e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    psVar2 = (short *)(*(int *)this + 6);
    do {
      if (*psVar2 == (short)param_1) {
        if (iVar3 == param_2) {
          return iVar1 * 0x10 + *(int *)this;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00de4130 */
uint F_00de4130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    psVar2 = (short *)(*(int *)this + 6);
    do {
      if (*psVar2 == (short)param_1) {
        if (iVar3 == param_2) {
          return iVar1 * 0x10 + *(int *)this;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00de4180 */
unsigned int F_00de4180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined2 *)(param_1 + 6);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined2 *)&REFG(undefined, 0x6)) {
        *(undefined4 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
      }
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00de41c0 */
uint F_00de41c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde41c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00de4210 */
uint F_00de4210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4210u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00de4250 */
uint F_00de4250(unsigned int gen_a0)
{
  GEN_ENTER(0xde4250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00de42a0 */
uint F_00de42a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde42a0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00de42e0 */
uint F_00de42e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde42e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de4310 */
uint F_00de4310(unsigned int gen_a0)
{
  GEN_ENTER(0xde4310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x60) = 0;
  if (-1 < *(int *)((int)this + 100)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x5c),
               *(int *)((int)this + 100) << 4);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  uVar1 = F_00ddd4c0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxVertexBuffer::vf0 */
uint F_00de4360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0x60) = 0;
  if (-1 < *(int *)(this + 100)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x5c),*(int *)(this + 100) << 4);
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0x80000000;
  F_00ddd4c0(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de4420 */
uint F_00de4420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4420u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de4440 */
uint F_00de4440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4440u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00de4480 */
unsigned int F_00de4480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined * this;
  
  if (0 < param_3) {
    iVar1 = param_3;
    this = param_1;
    do {
      F_00de8a20(this,(param_2 - (int)param_1) + (int)this);
      this = (undefined *)((int)this + 0x10);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de44b0 */
uint F_00de44b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde44b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de44e0 */
uint F_00de44e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde44e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de4510 */
uint F_00de4510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      iVar1 = *(int *)((int)this + 8);
      uVar2 = *(uint *)(iVar1 + iVar3);
      if ((uVar2 & 0xfffffffe) != 0) {
        uVar2 = F_00da0d70(uVar2 & 0xfffffffe,param_1);
        if (uVar2 == 0) {
          return iVar1 + iVar3;
        }
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_8 < *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00de4580 */
uint F_00de4580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (0 < *(int *)((int)this + 0xc))) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      F_00de8230(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
        F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x8)));
        *param_1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
          return (uint)param_1;
        }
        F_00d91a80((*(undefined * PTR32 *)(gen_frame + 0x8)));
        return (uint)param_1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < *(int *)((int)this + 0xc));
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_01059650(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: FUN_00de4610 */
uint F_00de4610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4610u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pvVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return 0;
  }
  F_00de4580((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[1]));
  in_ecx = (*(int *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return 0;
  }
  if ((*(int *)&gen_args[2]) != 0) {
    uVar2 = F_010596b0(&(*(undefined * PTR32 *)&gen_args[1]));
    uVar2 = F_00d92610(uVar2);
    uVar3 = F_00d92610(in_ecx);
    uVar2 = F_00da0d70(uVar3,uVar2);
    if (uVar2 != 0) {
      if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
        return 0;
      }
      F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
      return 0;
    }
  }
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
  }
  return (uint)pvVar1;
}

/* ref: FUN_00de4680 */
uint F_00de4680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pvVar7;
  int local_10;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  *(undefined2 *)((int)this + 6) = 1;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  iVar6 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(param_1 + 0xc);
  local_8 = iVar6;
  if (iVar3 <= iVar6) {
    local_8 = iVar3;
  }
  uVar4 = *(uint *)((int)this + 0x10) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar5,0x10);
  }
  iVar6 = (iVar6 - iVar3) + -1;
  if (-1 < iVar6) {
    pvVar7 = (undefined *)(iVar6 * 0x10 + iVar3 * 0x10 + *piVar1);
    do {
      F_00dddf50(pvVar7);
      pvVar7 = (undefined *)((int)pvVar7 + -0x10);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  pvVar7 = (undefined *)*piVar1;
  if (0 < local_8) {
    iVar6 = *(int *)(param_1 + 8) - (int)pvVar7;
    local_10 = local_8;
    do {
      F_00de8a20(pvVar7,iVar6 + (int)pvVar7);
      pvVar7 = (undefined *)((int)pvVar7 + 0x10);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  piVar2 = (int *)(param_1 + 8);
  pvVar7 = (undefined *)(*piVar1 + local_8 * 0x10);
  param_1 = iVar3 - local_8;
  if (0 < param_1) {
    iVar6 = (*piVar2 + local_8 * 0x10) - (int)pvVar7;
    do {
      if (pvVar7 != (undefined *)0x0) {
        F_00d91340(pvVar7);
        *(undefined4 *)((int)pvVar7 + 4) = 0;
        *(undefined4 *)((int)pvVar7 + 8) = 0;
        *(undefined4 *)((int)pvVar7 + 0xc) = 0x80000000;
        F_00de8a20(pvVar7,iVar6 + (int)pvVar7);
      }
      pvVar7 = (undefined *)((int)pvVar7 + 0x10);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *(int *)((int)this + 0xc) = iVar3;
  return (uint)this;
}

/* ref: FUN_00de47a0 */
uint F_00de47a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde47a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x10 + *(int *)((int)this + 8))));
    do {
      F_00dddf50(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de4850 */
uint F_00de4850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d91340(this);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  F_00de8a20(this,param_1);
  return (uint)this;
}

/* ref: FUN_00de4880 */
uint F_00de4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * this;
  
  uVar1 = param_2;
  if (0 < (int)param_2) {
    uVar2 = param_2;
    this = param_1;
    do {
      if (this != (undefined *)0x0) {
        F_00d91340(this);
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0x80000000;
        uVar1 = F_00de8a20(this,(param_3 - (int)param_1) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}

/* ref: FUN_00de48d0 */
uint F_00de48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde48d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar5 = *(int *)((int)this + 4);
  iVar3 = iVar1;
  if (iVar5 < iVar1) {
    iVar3 = iVar5;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(param_1,this,iVar6,0x10);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    pvVar4 = (undefined *)(iVar5 * 0x10 + iVar1 * 0x10 + *(int *)this);
    do {
      F_00dddf50(pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + -0x10);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  pvVar4 = *(undefined * PTR32 *)this;
  if (0 < iVar3) {
    iVar6 = *param_2 - (int)pvVar4;
    iVar5 = iVar3;
    do {
      F_00de8a20(pvVar4,iVar6 + (int)pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar4 = (undefined *)(*(int *)this + iVar3 * 0x10);
  iVar5 = iVar1 - iVar3;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar3 = (*param_2 + iVar3 * 0x10) - (int)pvVar4;
  do {
    if (pvVar4 != (undefined *)0x0) {
      F_00d91340(pvVar4);
      *(undefined4 *)((int)pvVar4 + 4) = 0;
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc) = 0x80000000;
      F_00de8a20(pvVar4,iVar3 + (int)pvVar4);
    }
    pvVar4 = (undefined *)((int)pvVar4 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00de49e0 */
uint F_00de49e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde49e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar5 = *(int *)((int)this + 4);
  iVar3 = iVar1;
  if (iVar5 < iVar1) {
    iVar3 = iVar5;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x10);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    pvVar4 = (undefined *)(iVar5 * 0x10 + iVar1 * 0x10 + *(int *)this);
    do {
      F_00dddf50(pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + -0x10);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  pvVar4 = *(undefined * PTR32 *)this;
  if (0 < iVar3) {
    iVar6 = *param_1 - (int)pvVar4;
    iVar5 = iVar3;
    do {
      F_00de8a20(pvVar4,iVar6 + (int)pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar4 = (undefined *)(*(int *)this + iVar3 * 0x10);
  iVar5 = iVar1 - iVar3;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar3 = (*param_1 + iVar3 * 0x10) - (int)pvVar4;
  do {
    if (pvVar4 != (undefined *)0x0) {
      F_00d91340(pvVar4);
      *(undefined4 *)((int)pvVar4 + 4) = 0;
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc) = 0x80000000;
      F_00de8a20(pvVar4,iVar3 + (int)pvVar4);
    }
    pvVar4 = (undefined *)((int)pvVar4 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00de4af0 */
uint F_00de4af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4af0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de4b00 */
uint F_00de4b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4b00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de4b60 */
unsigned int F_00de4b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4b60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de4b90 */
uint F_00de4b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00de4bb0 */
unsigned int F_00de4bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (*(undefined * PTR32 *)this != param_1) {
    if (param_1 != (undefined *)0x0) {
      F_00d919e0(param_1);
    }
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)this);
    }
    *(undefined * PTR32 *)this = param_1;
  }
  return 0;
}

/* ref: FUN_00de4be0 */
uint F_00de4be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4be0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[2]);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if (this_00 == (*(undefined * PTR32 *)&gen_args[2])) {
    if (this_00 != (undefined *)0x0) {
      F_00d919e0(this_00);
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)))) {
    do {
      F_00de4be0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + iVar2 * 4))),&(*(undefined * PTR32 *)&gen_args[2]),pvVar1);
      if ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) {
        F_00d919e0((*(undefined * PTR32 *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 *)&gen_args[2]);
        if ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) {
          F_00d91a80((*(undefined * PTR32 *)&gen_args[2]));
        }
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00de4c60 */
uint F_00de4c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x18);
  if ((pvVar1 == param_1) && (pvVar1 != param_2)) {
    if (param_2 != (undefined *)0x0) {
      pvVar1 = (undefined *)F_00d919e0(param_2);
    }
    if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
      pvVar1 = (undefined *)F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
    }
    *(undefined * PTR32 *)((int)this + 0x18) = param_2;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    do {
      pvVar1 = (undefined *)F_00de4c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))),param_1,
                                    param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x2c));
  }
  return (uint)pvVar1;
}

/* ref: FUN_00de4cc0 */
uint F_00de4cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde4cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(in_ecx + 0x2c);
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar1 = F_00de4cc0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x28) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 + uVar1;
    } while (iVar3 < *(int *)(in_ecx + 0x2c));
  }
  return uVar2;
}

/* ref: FUN_00de4cf0 */
uint F_00de4cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    do {
      uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + iVar3 * 4)));
      uVar2 = *(uint *)(uVar1 + 0x14);
      if (((uVar2 & 0xfffffffe) != 0) &&
         (uVar2 = F_00da0d70(uVar2 & 0xfffffffe,param_1), uVar2 == 0)) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x2c));
  }
  return 0;
}

/* ref: FUN_00de4d50 */
uint F_00de4d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4)));
      if (((*(uint *)((int)this_00 + 0x14) & 0xfffffffe) != 0) &&
         (uVar1 = F_00da0d70(*(uint *)((int)this_00 + 0x14) & 0xfffffffe,param_1), uVar1 == 0)) {
        return (uint)this_00;
      }
      uVar1 = F_00de4d50(this_00,param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x2c));
  }
  return 0;
}

/* ref: FUN_00de4dc0 */
uint F_00de4dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
  }
  *(undefined * PTR32 *)(*param_2 + param_2[1] * 4) = this;
  uVar1 = 1;
  param_2[1] = param_2[1] + 1;
  if (this != param_1) {
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0x2c)) {
      do {
        uVar1 = F_00de4dc0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))),param_1,param_2);
        if (uVar1 == 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0x2c));
    }
    param_2[1] = param_2[1] + -1;
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00de4e40 */
uint F_00de4e40(unsigned int gen_a0)
{
  GEN_ENTER(0xde4e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
  F_00d91510((undefined *)((int)this + 0x40));
  iVar3 = *(int *)((int)this + 0x38) + -1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x34) + 4 + iVar3 * 8)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -8);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < *(int *)((int)this + 0x3c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),
               *(int *)((int)this + 0x3c) * 8);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x2c) + -1;
  iVar3 = *(int *)((int)this + 0x28);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar3 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  if ((*(uint *)((int)this + 0x30) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),
               *(uint *)((int)this + 0x30) * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((*(uint *)((int)this + 0x24) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),
               *(uint *)((int)this + 0x24) << 6);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00d91510((undefined *)((int)this + 0x14));
  uVar1 = F_00de47a0(this);
  return uVar1;
}

/* ref: FUN_00de4f70 */
uint F_00de4f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00de4f80 */
uint F_00de4f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4f80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de4fc0 */
uint F_00de4fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4fc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de5020 */
uint F_00de5020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5020u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00de5060 */
uint F_00de5060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5060u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5090 */
uint F_00de5090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (this != param_1) {
    this_00 = (undefined *)*param_1;
    if (this_00 != (undefined *)0x0) {
      puVar1 = (undefined4 *)F_00d919e0(this_00);
    }
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      puVar1 = (undefined4 *)F_00d91a80(*(undefined * PTR32 *)this);
    }
    *(undefined * PTR32 *)this = this_00;
  }
  return (uint)puVar1;
}

/* ref: FUN_00de50c0 */
uint F_00de50c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde50c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((*(int *)(param_3 + 4) <= *(int *)(param_2 + 4)) &&
     ((*(int *)(param_2 + 4) != *(int *)(param_3 + 4) ||
      (*(int *)(param_3 + 8) <= *(int *)(param_2 + 8))))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00de5100 */
uint F_00de5100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x84) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x80) + iVar1 * 8)));
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar2 = piVar2 + -2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00de5130 */
uint F_00de5130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x84) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x80) + iVar1 * 8)));
    do {
      if (*piVar2 == param_2) {
        *param_1 = 1;
        return (uint)param_1;
      }
      piVar2 = piVar2 + -2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00de5170 */
uint F_00de5170(unsigned int gen_a0)
{
  GEN_ENTER(0xde5170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00de5560(*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),this);
  return uVar1;
}

/* ref: FUN_00de5190 */
uint F_00de5190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5190u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = (*(undefined4 *)&gen_args[1]);
  pcVar4 = (char *)F_00de5130((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,(*(undefined4 *)&gen_args[1]));
  if (*pcVar4 == '\0') {
    iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
    iVar1 = iVar2 + 1;
    uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) & 0x3fffffff;
    if ((int)uVar5 < iVar1) {
      iVar6 = uVar5 * 2;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))),iVar6,8);
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 1;
    pcVar4 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + iVar2 * 8)));
    *(undefined4 *)pcVar4 = uVar3;
    *(undefined4 *)(pcVar4 + 4) = (*(undefined4 *)&gen_args[2]);
  }
  return (uint)pcVar4;
}

/* ref: FUN_00de5200 */
uint F_00de5200(unsigned int gen_a0)
{
  GEN_ENTER(0xde5200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
  *(undefined4 *)((int)this + 0x84) = 0;
  if (-1 < *(int *)((int)this + 0x88)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x80),
               *(int *)((int)this + 0x88) * 8);
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x7c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x7c));
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  iVar3 = *(int *)((int)this + 0x74) + -1;
  iVar4 = *(int *)((int)this + 0x70);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar4 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 4 + iVar3 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  if (-1 < *(int *)((int)this + 0x78)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x70),
               *(int *)((int)this + 0x78) * 4);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x1c) + -1;
  if (-1 < iVar4) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4 * 0xc)));
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               (*(uint *)((int)this + 0x20) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  F_00d91510((undefined *)((int)this + 0x14));
  uVar1 = F_00de47a0(this);
  return uVar1;
}

/* ref: FUN_00de5330 */
uint F_00de5330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00de5360 */
uint F_00de5360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  if (this != param_1) {
    this_00 = (undefined *)*param_1;
    if (this_00 != (undefined *)0x0) {
      F_00d919e0(this_00);
    }
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)this);
    }
    *(undefined * PTR32 *)this = this_00;
  }
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00de53a0 */
uint F_00de53a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde53a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00de53e0 */
uint F_00de53e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * PTR32 * ppvVar4;
  int iVar5;
  undefined * pvVar6;
  int iVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  
  puVar2 = (undefined4 *)(param_1 + -0xc + param_2 * 0xc);
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_00d919e0((undefined *)*puVar2);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)puVar2[2];
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)puVar2[1];
  iVar7 = param_3 / 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)*puVar2;
  (*(int *)(gen_frame + 0x18)) = iVar7;
  iVar9 = param_2;
  if (param_2 <= iVar7) {
    do {
      iVar10 = iVar9 * 2;
      if (iVar10 < param_3) {
        iVar5 = *(int *)(param_1 + -8 + iVar9 * 0x18);
        iVar1 = param_1 + iVar9 * 0x18;
        if ((iVar5 < *(int *)(iVar1 + 4)) ||
           ((iVar5 == *(int *)(iVar1 + 4) && (*(int *)(iVar1 + -4) < *(int *)(iVar1 + 8))))) {
          iVar10 = iVar10 + 1;
        }
      }
      puVar2 = (undefined4 *)(param_1 + -0xc + iVar10 * 0xc);
      if (((int)puVar2[1] <= (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) &&
         (((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)puVar2[1] || ((int)puVar2[2] <= (int)(*(undefined * PTR32 *)(gen_frame + 0x14)))))) break;
      puVar3 = (undefined4 *)(param_1 + -0xc + iVar9 * 0xc);
      if (puVar3 != puVar2) {
        pvVar6 = (undefined *)*puVar2;
        if (pvVar6 != (undefined *)0x0) {
          F_00d919e0(pvVar6);
          iVar7 = (*(int *)(gen_frame + 0x18));
        }
        if ((undefined *)*puVar3 != (undefined *)0x0) {
          F_00d91a80((undefined *)*puVar3);
          iVar7 = (*(int *)(gen_frame + 0x18));
        }
        *puVar3 = pvVar6;
      }
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      iVar9 = iVar10;
    } while (iVar10 <= iVar7);
  }
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  ppvVar4 = (undefined * PTR32 *)(param_1 + -0xc + iVar9 * 0xc);
  if (ppvVar4 != &(*(undefined * PTR32 *)(gen_frame + 0xc))) {
    if ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0x0) {
      F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0xc)));
    }
    if (*ppvVar4 != (undefined *)0x0) {
      F_00d91a80(*ppvVar4);
    }
    *ppvVar4 = pvVar6;
  }
  ppvVar4[1] = (*(undefined * PTR32 *)(gen_frame + 0x10));
  ppvVar4[2] = (*(undefined * PTR32 *)(gen_frame + 0x14));
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  if (pvVar6 != (undefined *)0x0) {
    pvVar8 = (undefined *)F_00d91a80(pvVar6);
  }
  return (uint)pvVar8;
}

/* ref: FUN_00de5510 */
uint F_00de5510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00de5560 */
uint F_00de5560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 - (param_2 >> 0x1f);
  (*(int *)(gen_frame + 0x14)) = param_2;
  for (iVar3 = param_2 / 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    uVar2 = F_00de53e0(param_1,iVar3,param_2,param_3);
  }
  if (0 < param_2) {
    param_2 = param_2 * 0xc;
    do {
      if ((undefined *)*param_1 != (undefined *)0x0) {
        F_00d919e0((undefined *)*param_1);
      }
      this = (undefined *)*param_1;
      puVar1 = (undefined4 *)(param_2 + -0xc + (int)param_1);
      (*(undefined4 *)(gen_frame + 0xc)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x10)) = param_1[2];
      if (param_1 != puVar1) {
        this_00 = (undefined *)*puVar1;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = this_00;
        if (this_00 != (undefined *)0x0) {
          F_00d919e0(this_00);
        }
        if ((undefined *)*param_1 != (undefined *)0x0) {
          F_00d91a80((undefined *)*param_1);
        }
        *param_1 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      }
      param_1[1] = puVar1[1];
      param_1[2] = puVar1[2];
      if (puVar1 != &(*(undefined4 *)(gen_frame + 0x8))) {
        if (this != (undefined *)0x0) {
          F_00d919e0(this);
        }
        if ((undefined *)*puVar1 != (undefined *)0x0) {
          F_00d91a80((undefined *)*puVar1);
        }
        *puVar1 = this;
      }
      param_2 = param_2 + -0xc;
      puVar1[1] = (*(undefined4 *)(gen_frame + 0xc));
      puVar1[2] = (*(undefined4 *)(gen_frame + 0x10));
      iVar3 = (*(int *)(gen_frame + 0x14)) + -1;
      (*(int *)(gen_frame + 0x14)) = iVar3;
      uVar2 = F_00de53e0(param_1,1,iVar3,param_3);
      if (this != (undefined *)0x0) {
        uVar2 = F_00d91a80(this);
      }
    } while (0 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_00de5670 */
uint F_00de5670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00de56c0 */
uint F_00de56c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde56c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx);
  F_00d91340(in_ecx + 4);
  return in_ecx;
}

/* ref: FUN_00de56e0 */
byte F_00de56e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde56e0u, gen_a0, 0u, 0u, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  char cVar1;
  
  cVar1 = *in_ecx;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (((cVar1 < '!') || (cVar1 == '=')) || (cVar1 == ';')) break;
    cVar1 = in_ecx[1];
    in_ecx = in_ecx + 1;
  }
  return 1;
}

/* ref: FUN_00de5700 */
uint F_00de5700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)((int)this + 0xc));
  }
  return 0xffffffff;
}

/* ref: FUN_00de5760 */
uint F_00de5760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + param_2 * 8))) & 0xfffffffe;
}

/* ref: FUN_00de5780 */
uint F_00de5780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 4 + param_2 * 8))) & 0xfffffffe;
}

/* ref: FUN_00de57a0 */
uint F_00de57a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde57a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  uint in_ecx;
  undefined1 * puVar5;
  
  uVar2 = F_00da4850(param_1);
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar4 * 8))) & 0xfffffffe;
      in_ecx = *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar4 * 8))) & 0xfffffffe;
      bVar1 = F_00de56e0(uVar2);
      puVar5 = &REFG(undefined, 0x114b548);
      if (bVar1 == 0) {
        puVar5 = &REFG(undefined1, 0x107fc63);
      }
      bVar1 = F_00de56e0(in_ecx);
      puVar3 = &REFG(undefined, 0x114b548);
      if (bVar1 == 0) {
        puVar3 = &REFG(undefined1, 0x107fc63);
      }
      uVar2 = F_00da53f0(param_1,"%s%s%s=%s%s%s",puVar5,uVar2,puVar5,puVar3,in_ecx,puVar3);
      if (iVar4 < *(int *)((int)this + 0xc) + -1) {
        uVar2 = F_00da4d70(param_1,&REFG(undefined, 0x114b534));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0xc));
  }
  return uVar2;
}

/* ref: FUN_00de5840 */
uint F_00de5840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de5700(this,param_1);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4 + uVar1 * 8))) & 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_00de5870 */
uint F_00de5870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  
  uVar1 = F_00de5700(this,param_1);
  if (param_2 == 0) {
    if (uVar1 == 0xffffffff) {
      return 1;
    }
    pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + uVar1 * 8)));
    F_00d91510((undefined *)((int)pvVar6 + 4));
    F_00d91510(pvVar6);
    uVar2 = *(int *)((int)this + 0xc) - 1;
    *(uint *)((int)this + 0xc) = uVar2;
    if (uVar2 != uVar1) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar1 * 8)));
      iVar4 = (*(int *)((int)this + 8) + uVar2 * 8) - (int)puVar3;
      iVar5 = 2;
      do {
        *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xffffffff) {
      F_00d91520(((undefined *)GEN_TOP((*(int *)((int)this + 8) + 4 + uVar1 * 8))),param_2);
      return 0;
    }
    F_00d91340(((undefined1 *)(gen_frame + 0x4)));
    F_00d91340(((undefined1 *)(gen_frame + 0x8)));
    F_00d91520(((undefined1 *)(gen_frame + 0x4)),param_1);
    F_00d91520(((undefined1 *)(gen_frame + 0x8)),param_2);
    if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 8),8);
    }
    pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 8)));
    if (pvVar6 != (undefined *)0x0) {
      F_00d914e0(pvVar6,((undefined1 *)(gen_frame + 0x4)));
      F_00d914e0((undefined *)((int)pvVar6 + 4),((undefined1 *)(gen_frame + 0x8)));
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    F_00d91510(((undefined1 *)(gen_frame + 0x8)));
    F_00d91510(((undefined1 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00de59a0 */
uint F_00de59a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde59a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00de5db0 */
uint F_00de5db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7d4));
  return (uint)in_ecx;
}

/* ref: FUN_00de5e00 */
uint F_00de5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5e10 */
uint F_00de5e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5e40 */
uint F_00de5e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00d914e0(this,param_1);
  F_00d914e0((undefined *)((int)this + 4),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00de5e70 */
uint F_00de5e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00de5e90 */
uint F_00de5e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00de5ed0 */
unsigned int F_00de5ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00d914e0(this,param_3);
        F_00d914e0((undefined *)((int)this + 4),param_3 + 4);
      }
      this = (undefined *)((int)this + 8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de5f10 */
uint F_00de5f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    F_00d914e0(this_00,param_2);
    uVar1 = F_00d914e0((undefined *)((int)this_00 + 4),param_2 + 4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00de5f70 */
uint F_00de5f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    F_00d914e0(this_00,param_1);
    uVar1 = F_00d914e0((undefined *)((int)this_00 + 4),param_1 + 4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00de5fd0 */
unsigned int F_00de5fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5fd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 8);
    do {
      F_00d91510((undefined *)((int)this + 4));
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00de6000 */
uint F_00de6000(unsigned int gen_a0)
{
  GEN_ENTER(0xde6000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00de6030 */
unsigned int F_00de6030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = (undefined *)(*(int *)this + param_1 * 8);
  F_00d91510((undefined *)((int)this_00 + 4));
  F_00d91510(this_00);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(*(int *)this + param_1 * 8);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00de6090 */
uint F_00de6090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
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

/* ref: FUN_00de6100 */
uint F_00de6100(unsigned int gen_a0)
{
  GEN_ENTER(0xde6100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
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

/* ref: FUN_00de6170 */
uint F_00de6170(unsigned int gen_a0)
{
  GEN_ENTER(0xde6170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
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

/* ref: FUN_00de61e0 */
uint F_00de61e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde61e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de6210 */
uint F_00de6210(unsigned int gen_a0)
{
  GEN_ENTER(0xde6210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 8)));
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxEnvironment::vf0 */
uint F_00de6280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de6210(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de62c0 */
unsigned int F_00de62c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde62c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_01059680((undefined *)((int)this + 4),param_1,param_2);
  return 0;
}

/* ref: FUN_00de62d0 */
uint F_00de62d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde62d0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx);
  *(undefined4 *)(in_ecx + 4) = 0;
  return in_ecx;
}

/* ref: FUN_00de62f0 */
uint F_00de62f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde62f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00de6330 */
uint F_00de6330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6330u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_00de6450 */
uint F_00de6450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6450u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6470 */
uint F_00de6470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde6470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00de64a0 */
uint F_00de64a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde64a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de64d0 */
uint F_00de64d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde64d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00de4dc0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00de64e0 */
uint F_00de64e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde64e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0x14) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14)));
    if ((uVar1 & 0xfffffffe) != 0) {
      uVar1 = F_00da0d70(uVar1 & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return *(uint *)((int)this + 0x14);
      }
    }
    uVar1 = F_00de4d50(*(undefined * PTR32 *)((int)this + 0x14),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00de6760 */
uint F_00de6760(unsigned int gen_a0)
{
  GEN_ENTER(0xde6760u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91340(in_ecx + 2);
  F_00d91340(in_ecx + 3);
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0x80000000;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0x80000000;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0x80000000;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0x80000000;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0x80000000;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0x80000000;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0x80000000;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0x80000000;
  *(undefined8 *)(in_ecx + 0x20) = REFG(float, 0x1138c70);
  *(undefined8 *)(in_ecx + 0x22) = REFG(undefined8, 0x1138c78);
  *(undefined8 *)(in_ecx + 0x24) = REFG(float, 0x1138c80);
  *(undefined8 *)(in_ecx + 0x26) = REFG(undefined8, 0x1138c88);
  *(undefined8 *)(in_ecx + 0x28) = REFG(float, 0x1138c90);
  *(undefined8 *)(in_ecx + 0x2a) = REFG(undefined8, 0x1138c98);
  return (uint)in_ecx;
}

/* ref: FUN_00de6840 */
uint F_00de6840(unsigned int gen_a0)
{
  GEN_ENTER(0xde6840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  iVar4 = *(int *)((int)this + 0x70) + -1;
  iVar1 = *(int *)((int)this + 0x6c);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  if (-1 < *(int *)((int)this + 0x74)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x6c),
               *(int *)((int)this + 0x74) * 4);
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0x80000000;
  iVar4 = *(int *)((int)this + 100) + -1;
  iVar1 = *(int *)((int)this + 0x60);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 100) = 0;
  if (-1 < *(int *)((int)this + 0x68)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x60),
               *(int *)((int)this + 0x68) * 4);
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x58) + -1;
  iVar1 = *(int *)((int)this + 0x54);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  if (-1 < *(int *)((int)this + 0x5c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x54),
               *(int *)((int)this + 0x5c) * 4);
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x4c) + -1;
  iVar1 = *(int *)((int)this + 0x48);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (-1 < *(int *)((int)this + 0x50)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x48),
               *(int *)((int)this + 0x50) * 4);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x40) + -1;
  iVar1 = *(int *)((int)this + 0x3c);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  if (-1 < *(int *)((int)this + 0x44)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x3c),
               *(int *)((int)this + 0x44) * 4);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x34) + -1;
  iVar1 = *(int *)((int)this + 0x30);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  if (-1 < *(int *)((int)this + 0x38)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),
               *(int *)((int)this + 0x38) * 4);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x28) + -1;
  iVar1 = *(int *)((int)this + 0x24);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < *(int *)((int)this + 0x2c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               *(int *)((int)this + 0x2c) * 4);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x1c) + -1;
  iVar1 = *(int *)((int)this + 0x18);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < *(int *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(int *)((int)this + 0x20) * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00d91510((undefined *)((int)this + 0xc));
  uVar3 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00de6c70 */
uint F_00de6c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde6c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00de6dc0 */
uint F_00de6dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6dc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de6e00 */
uint F_00de6e00(unsigned int gen_a0)
{
  GEN_ENTER(0xde6e00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de6e40 */
uint F_00de6e40(unsigned int gen_a0)
{
  GEN_ENTER(0xde6e40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de6e80 */
uint F_00de6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000020;
  return (uint)this;
}

/* ref: FUN_00de6ea0 */
uint F_00de6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xde6ea0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de6f10 */
uint F_00de6f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6f10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6f20 */
uint F_00de6f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6f20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6f90 */
uint F_00de6f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde6f90u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00de7000 */
unsigned int F_00de7000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7000u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de7040 */
uint F_00de7040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7070 */
uint F_00de7070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7090 */
unsigned int F_00de7090(unsigned int gen_a0)
{
  GEN_ENTER(0xde7090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de70b0 */
unsigned int F_00de70b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde70b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de7110 */
uint F_00de7110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7110u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de7150 */
uint F_00de7150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xde7150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 * puVar5;
  int iVar6;
  
  iVar4 = *(int *)((int)this + 4);
  iVar6 = (iVar4 - param_3) + param_5;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  puVar1 = (undefined8 *)
           F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,
                        (param_3 + param_2) * 0x10 + *(int *)this,
                        ((iVar4 - param_2) - param_3) * 0x10);
  puVar5 = (undefined8 *)(param_2 * 0x10 + *(int *)this);
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar5;
    puVar1 = puVar5;
    iVar4 = param_5;
    do {
      *puVar1 = *(undefined8 *)(iVar3 + (int)puVar1);
      puVar1[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar6;
  return (uint)puVar1;
}

/* ref: FUN_00de7200 */
unsigned int F_00de7200(unsigned int gen_a0)
{
  GEN_ENTER(0xde7200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de7230 */
unsigned int F_00de7230(unsigned int gen_a0)
{
  GEN_ENTER(0xde7230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de7260 */
unsigned int F_00de7260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      F_00de9210(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + iVar1 * 4))),param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00de7290 */
unsigned int F_00de7290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x18))) {
    iVar2 = *(int *)((int)this + 0x14);
    iVar1 = param_1 * 4;
    pvVar3 = *(undefined * PTR32 *)(iVar2 + iVar1);
    if (pvVar3 != (undefined *)0x0) {
      F_00d91a80(pvVar3);
    }
    *(undefined4 *)(iVar2 + iVar1) = 0;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    if (*(int *)((int)this + 0x18) != param_1) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar1))) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + *(int *)((int)this + 0x18) * 4)));
    }
    iVar1 = *(int *)((int)this + 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + iVar1 * 4)));
      iVar4 = *(int *)(iVar2 + 0x1c);
      pvVar3 = *(undefined * PTR32 *)(iVar4 + param_1 * 4);
      if (pvVar3 != (undefined *)0x0) {
        F_00d91a80(pvVar3);
      }
      *(undefined4 *)(iVar4 + param_1 * 4) = 0;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + -1;
      if (*(int *)(iVar2 + 0x20) != param_1) {
        *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1c) + param_1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x20) * 4)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00de7350 */
unsigned int F_00de7350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(int *)(gen_frame + 0x28)) = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      iVar4 = *(int *)((int)param_1 + 4);
      if (param_2 != (int *)0x0) {
        iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8) + (*(int *)(gen_frame + 0x28)) * 4))) + 0x18)));
        uVar1 = param_2[1];
        uVar2 = 0;
        if (0 < (int)uVar1) {
          piVar6 = (int *)*param_2;
          do {
            if (*piVar6 == iVar5) {
              (*(uint *)(gen_frame + 0x24)) = uVar2;
              if (uVar2 != 0xffffffff) goto LAB_00de73e3;
              break;
            }
            uVar2 = uVar2 + 1;
            piVar6 = piVar6 + 1;
          } while ((int)uVar2 < (int)uVar1);
        }
        (*(uint *)(gen_frame + 0x24)) = uVar1;
        if (uVar1 == (param_2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
        }
        *(int *)(*param_2 + param_2[1] * 4) = iVar5;
        param_2[1] = param_2[1] + 1;
      }
LAB_00de73e3: ;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(uint *)(gen_frame + 0x10)) = 0x80000000;
      (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
      F_00de92f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8) + (*(int *)(gen_frame + 0x28)) * 4))),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x24)));
      iVar5 = 0;
      if (0 < (*(int *)(gen_frame + 0x18))) {
        iVar3 = 0;
        do {
          *(int *)(iVar3 + (*(int *)(gen_frame + 0x14))) = *(int *)(iVar3 + (*(int *)(gen_frame + 0x14))) + iVar4;
          piVar6 = (int *)(iVar3 + 4 + (*(int *)(gen_frame + 0x14)));
          *piVar6 = *piVar6 + iVar4;
          piVar6 = (int *)(iVar3 + 8 + (*(int *)(gen_frame + 0x14)));
          *piVar6 = *piVar6 + iVar4;
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar5 < (*(int *)(gen_frame + 0x18)));
      }
      F_00de7780(param_1,&REFG(undefined * PTR32, 0x13516ac),iVar4,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)));
      F_00de7600((undefined *)((int)param_1 + 0xc),&REFG(undefined * PTR32, 0x13516ac),
                   *(undefined4 *)((int)param_1 + 0x10),(*(int *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
      if (((*(uint *)(gen_frame + 0x1c)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x1c)) << 4);
      }
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      if (((*(uint *)(gen_frame + 0x10)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) << 4);
      }
      iVar4 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar4;
    } while (iVar4 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0xc));
  }
  return 0;
}

/* ref: FUN_00de74e0 */
uint F_00de74e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde74e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  return (uint)in_ecx;
}

/* ref: FUN_00de74f0 */
uint F_00de74f0(unsigned int gen_a0)
{
  GEN_ENTER(0xde74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  iVar4 = *(int *)((int)this + 0x18) + -1;
  iVar1 = *(int *)((int)this + 0x14);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               *(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  uVar3 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00de75c0 */
uint F_00de75c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde75c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7600 */
uint F_00de7600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xde7600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00de7150(this,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00de7620 */
unsigned int F_00de7620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xde7620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)((int)this + 4);
  iVar9 = (iVar8 - param_3) + param_5;
  uVar6 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar6 < iVar9) {
    iVar5 = uVar6 * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(param_1,this,iVar5,0x10);
  }
  F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,(param_2 + param_3) * 0x10 + *(int *)this,
               ((iVar8 - param_2) - param_3) * 0x10);
  puVar7 = (undefined4 *)(param_2 * 0x10 + *(int *)this);
  if (0 < param_5) {
    iVar5 = param_4 - (int)puVar7;
    iVar8 = param_5;
    do {
      puVar1 = (undefined4 *)(iVar5 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(int *)((int)this + 4) = iVar9;
    return 0;
  }
  *(int *)((int)this + 4) = iVar9;
  return 0;
}

/* ref: FUN_00de76e0 */
uint F_00de76e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde76e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7720 */
uint F_00de7720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7720u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7760 */
uint F_00de7760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde7760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00de7600(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00de7780 */
unsigned int F_00de7780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xde7780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00de7620(this,param_1,param_2,0,param_3,param_4);
  return 0;
}

/* ref: FUN_00de77a0 */
uint F_00de77a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde77a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar1 + iVar2);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 != param_1) {
    uVar3 = *(uint *)(*(int *)this + uVar3 * 4);
    *(uint *)(*(int *)this + iVar2) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00de77e0 */
unsigned int F_00de77e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde77e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7850 */
unsigned int F_00de7850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7850u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7880 */
unsigned int F_00de7880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde7880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00de7780(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00de78a0 */
uint F_00de78a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde78a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar1 + iVar2);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 != param_1) {
    uVar3 = *(uint *)(*(int *)this + uVar3 * 4);
    *(uint *)(*(int *)this + iVar2) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00de78e0 */
uint F_00de78e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde78e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de79b0 */
uint F_00de79b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde79b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de7a20 */
uint F_00de7a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7a20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7a90 */
uint F_00de7a90(unsigned int gen_a0)
{
  GEN_ENTER(0xde7a90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de7b00 */
uint F_00de7b00(unsigned int gen_a0)
{
  GEN_ENTER(0xde7b00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de7b70 */
uint F_00de7b70(unsigned int gen_a0)
{
  GEN_ENTER(0xde7b70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de7be0 */
uint F_00de7be0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMesh::vf0 */
uint F_00de7c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de74f0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de7ca0 */
uint F_00de7ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7cc0 */
unsigned int F_00de7cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de7d10 */
unsigned int F_00de7d10(unsigned int gen_a0)
{
  GEN_ENTER(0xde7d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de7d40 */
uint F_00de7d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7d40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7d80 */
unsigned int F_00de7d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7d80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7df0 */
uint F_00de7df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7e60 */
uint F_00de7e60(unsigned int gen_a0)
{
  GEN_ENTER(0xde7e60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de7ed0 */
uint F_00de7ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7ed0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de7f70 */
uint F_00de7f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7f4));
  return (uint)in_ecx;
}

/* ref: FUN_00de7f80 */
uint F_00de7f80(unsigned int gen_a0)
{
  GEN_ENTER(0xde7f80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de7fc0 */
uint F_00de7fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxMaterialShaderSet::vf0 */
uint F_00de8030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de7fc0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de8080 */
uint F_00de8080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520((undefined *)((int)this + 0x14),param_1);
  return uVar1;
}

/* ref: FUN_00de8090 */
uint F_00de8090(unsigned int gen_a0)
{
  GEN_ENTER(0xde8090u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b804));
  F_00d91340(in_ecx + 5);
  return (uint)in_ecx;
}

/* ref: FUN_00de80b0 */
uint F_00de80b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde80b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b804));
  F_00d91350(in_ecx + 5,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de80d0 */
uint F_00de80d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde80d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de80f0 */
uint F_00de80f0(unsigned int gen_a0)
{
  GEN_ENTER(0xde80f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkAlignSceneToNodeOptions::vf0 */
uint F_00de8120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de8170 */
uint F_00de8170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8170u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de8180 */
uint F_00de8180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8180u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de81b0 */
unsigned int F_00de81b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde81b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00de62d0(in_ecx);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de81e0 */
uint F_00de81e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde81e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)((int)this + 8));
  }
  return 0xffffffff;
}

