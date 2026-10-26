#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a145c0 */
uint F_00a145c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa145c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54),param_1 + 0x54);
  F_0042ccf0((undefined *)((int)this + 0xa8),param_1 + 0xa8);
  F_0042ccf0((undefined *)((int)this + 0xfc),param_1 + 0xfc);
  F_0042ccf0((undefined *)((int)this + 0x150),param_1 + 0x150);
  F_0042ccf0((undefined *)((int)this + 0x1a4),param_1 + 0x1a4);
  return (uint)this;
}

/* ref: FUN_00a14630 */
uint F_00a14630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54),param_1 + 0x54);
  F_0042ccf0((undefined *)((int)this + 0xa8),param_1 + 0xa8);
  return (uint)this;
}

/* ref: FUN_00a14670 */
uint F_00a14670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54),param_1 + 0x54);
  F_0042ccf0((undefined *)((int)this + 0xa8),param_1 + 0xa8);
  F_0042ccf0((undefined *)((int)this + 0xfc),param_1 + 0xfc);
  return (uint)this;
}

/* ref: FUN_00a146f0 */
uint F_00a146f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa146f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14700 */
uint F_00a14700(unsigned int gen_a0)
{
  GEN_ENTER(0xa14700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14710 */
uint F_00a14710(unsigned int gen_a0)
{
  GEN_ENTER(0xa14710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14720 */
uint F_00a14720(unsigned int gen_a0)
{
  GEN_ENTER(0xa14720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14730 */
uint F_00a14730(unsigned int gen_a0)
{
  GEN_ENTER(0xa14730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14780 */
uint F_00a14780(unsigned int gen_a0)
{
  GEN_ENTER(0xa14780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14790 */
uint F_00a14790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a147b0 */
uint F_00a147b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa147b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return (uint)param_1;
}

/* ref: FUN_00a14800 */
uint F_00a14800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a135d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a14830 */
uint F_00a14830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x1a4));
  F_0042c880((undefined *)((int)this + 0x150));
  F_0042c880((undefined *)((int)this + 0xfc));
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a14890 */
uint F_00a14890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a148d0 */
uint F_00a148d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa148d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a148e0 */
uint F_00a148e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa148e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a148f0 */
uint F_00a148f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa148f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14900 */
uint F_00a14900(unsigned int gen_a0)
{
  GEN_ENTER(0xa14900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14910 */
uint F_00a14910(unsigned int gen_a0)
{
  GEN_ENTER(0xa14910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14990 */
uint F_00a14990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  *(*(int * PTR32 *)&gen_args[1]) = iVar1;
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[1]),0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[1]));
  return (uint)piVar2;
}

/* ref: FUN_00a14a00 */
uint F_00a14a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00a14a30 */
uint F_00a14a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00a14a80 */
uint F_00a14a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa14a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  if (param_2 == 1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(undefined * PTR32 *)this;
    }
    *(byte *)((int)this + param_1) = (byte)param_3;
    return (uint)(byte)param_3;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  pvVar1 = F_00c48350((undefined *)((int)this + param_1),(int)(char)(byte)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_00a14ad0 */
uint F_00a14ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14af0 */
uint F_00a14af0(unsigned int gen_a0)
{
  GEN_ENTER(0xa14af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = F_004069f0(param_1), uVar1 == 0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00a14bf0 */
byte F_00a14bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a14c80 */
uint F_00a14c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14c90 */
byte F_00a14c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14cb0 */
uint F_00a14cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14cc0 */
byte F_00a14cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14ce0 */
uint F_00a14ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14cf0 */
byte F_00a14cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14d10 */
uint F_00a14d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14d20 */
byte F_00a14d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14d60 */
uint F_00a14d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14d70 */
byte F_00a14d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14da0 */
uint F_00a14da0(unsigned int gen_a0)
{
  GEN_ENTER(0xa14da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a14dc0 */
uint F_00a14dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  *(int *)((int)this + 0x10) = (int)this + 8;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(bool *)((int)this + 0x50) = param_2 == 1;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(undefined1 *)((int)this + 0x49) = 0;
  *(undefined4 * PTR32 *)((int)this + 0x14) = (undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(undefined4 *)((int)this + 0xc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  if (param_1 != 0) {
    *(uint *)((int)this + 0x10) = param_1 + 8;
    *(uint *)((int)this + 0x14) = param_1 + 8;
    *(uint *)((int)this + 0x20) = param_1;
    *(uint *)((int)this + 0x24) = param_1;
    *(uint *)((int)this + 0x30) = param_1 + 4;
    *(uint *)((int)this + 0x34) = param_1 + 4;
  }
  *(uint *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x14a266c);
  *(undefined4 *)((int)this + 0x44) = 0;
  return param_1;
}

/* ref: FUN_00a14e60 */
uint F_00a14e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((char)uVar1 != '\0') {
    *(undefined4 *)((int)this + 0x44) = 0;
    return uVar1;
  }
  *(int * PTR32 *)((int)this + 0x44) = param_1;
  uVar1 = F_00479210(this);
  return uVar1;
}

/* ref: std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back */
unsigned int F_00a14ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xa14ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  if (((undefined *)GEN_TOP(**(int * PTR32 *)(this + 0x10))) == this + 0x48) {
    uVar1 = *(undefined4 *)(this + 0x40);
    **(int * PTR32 *)(this + 0x10) = *(int *)(this + 0x3c);
    **(undefined4 * PTR32 *)(this + 0x20) = uVar1;
    **(undefined4 * PTR32 *)(this + 0x30) = 0;
  }
  return 0;
}

/* ref: FUN_00a14ee0 */
uint F_00a14ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a14f00 */
uint F_00a14f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x594;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a14f40 */
uint F_00a14f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a14f60 */
uint F_00a14f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1f8;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a14fa0 */
uint F_00a14fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a14fc0 */
uint F_00a14fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xfc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a15000 */
uint F_00a15000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a15020 */
uint F_00a15020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x150;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a15060 */
uint F_00a15060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a15080 */
uint F_00a15080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a150c0 */
uint F_00a150c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa150c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00a150e0 */
uint F_00a150e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa150e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a150f0 */
unsigned int F_00a150f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa150f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x65) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x65);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x65);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x65);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a15140 */
uint F_00a15140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a15180 */
uint F_00a15180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x65) == '\0') {
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

/* ref: FUN_00a151e0 */
uint F_00a151e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa151e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x65))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00a15240 */
unsigned int F_00a15240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a15260 */
unsigned int F_00a15260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15260u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a140b0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00a15280 */
unsigned int F_00a15280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15280u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a141f0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00a152a0 */
unsigned int F_00a152a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa152a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_0042cbc0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    F_0042cbc0((undefined *)((int)param_1 + 0xa8),param_2 + 0xa8);
  }
  return 0;
}

/* ref: FUN_00a152e0 */
unsigned int F_00a152e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa152e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_0042cbc0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
    F_0042cbc0((undefined *)((int)param_1 + 0xa8),param_2 + 0xa8);
    F_0042cbc0((undefined *)((int)param_1 + 0xfc),param_2 + 0xfc);
  }
  return 0;
}

/* ref: FUN_00a15340 */
uint F_00a15340(unsigned int gen_a0)
{
  GEN_ENTER(0xa15340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a14310(this);
  return (uint)this;
}

/* ref: FUN_00a15350 */
uint F_00a15350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  in_ecx[1] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10e36f0));
  return (uint)in_ecx;
}

/* ref: codecvt_DDH_std::vf4 */
uint F_00a15380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa15380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}

/* ref: codecvt_DDH_std::vf5 */
uint F_00a153a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa153a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}

/* ref: codecvt_DDH_std::vf6 */
uint F_00a153c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa153c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *param_4 = param_2;
  return 3;
}

/* ref: codecvt_DDH_std::vf7 */
uint F_00a153e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa153e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  
  uVar1 = param_3 - param_2;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  return uVar1;
}

/* ref: codecvt_DDH_std::vf0 */
uint F_00a15400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a15440 */
uint F_00a15440(unsigned int gen_a0)
{
  GEN_ENTER(0xa15440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a14310(this);
  return (uint)this;
}

/* ref: FUN_00a15450 */
uint F_00a15450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a15470 */
uint F_00a15470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa15470u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      F_0042ccf0(this,iVar2 + -0xa8);
      F_0042ccf0((undefined *)((int)this + 0x54),iVar2 + -0x54);
      F_0042ccf0((undefined *)((int)this + 0xa8),iVar2);
      F_0042ccf0((undefined *)((int)this + 0xfc),iVar2 + 0x54);
      F_0042ccf0((undefined *)((int)this + 0x150),iVar2 + 0xa8);
      F_0042ccf0((undefined *)((int)this + 0x1a4),iVar2 + 0xfc);
      F_0042ccf0((undefined *)((int)this + 0x1f8),iVar2 + 0x150);
      F_0042ccf0((undefined *)((int)this + 0x24c),iVar2 + 0x1a4);
      F_0042ccf0((undefined *)((int)this + 0x2a0),iVar2 + 0x1f8);
      F_0042ccf0((undefined *)((int)this + 0x2f4),iVar2 + 0x24c);
      F_0042ccf0((undefined *)((int)this + 0x348),iVar2 + 0x2a0);
      F_0042ccf0((undefined *)((int)this + 0x39c),iVar2 + 0x2f4);
      F_0042ccf0((undefined *)((int)this + 0x3f0),iVar2 + 0x348);
      F_0042ccf0((undefined *)((int)this + 0x444),iVar2 + 0x39c);
      F_0042ccf0((undefined *)((int)this + 0x498),iVar2 + 0x3f0);
      F_0042ccf0((undefined *)((int)this + 0x4ec),iVar2 + 0x444);
      F_0042ccf0((undefined *)((int)this + 0x540),iVar2 + 0x498);
      iVar1 = iVar2 + 0x4ec;
      this = (undefined *)((int)this + 0x594);
      iVar2 = iVar2 + 0x594;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a155e0 */
uint F_00a155e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa155e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      F_0042ccf0(this,iVar2 + -0xa8);
      F_0042ccf0((undefined *)((int)this + 0x54),iVar2 + -0x54);
      F_0042ccf0((undefined *)((int)this + 0xa8),iVar2);
      F_0042ccf0((undefined *)((int)this + 0xfc),iVar2 + 0x54);
      F_0042ccf0((undefined *)((int)this + 0x150),iVar2 + 0xa8);
      F_0042ccf0((undefined *)((int)this + 0x1a4),iVar2 + 0xfc);
      iVar1 = iVar2 + 0x150;
      this = (undefined *)((int)this + 0x1f8);
      iVar2 = iVar2 + 0x1f8;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a15680 */
uint F_00a15680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa15680u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    F_0042ccf0((undefined *)((int)this + 0x54),iVar1 + 0x54);
    F_0042ccf0((undefined *)((int)this + 0xa8),iVar1 + 0xa8);
    iVar1 = iVar1 + 0xfc;
    this = (undefined *)((int)this + 0xfc);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a156e0 */
uint F_00a156e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa156e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      F_0042ccf0(this,iVar2 + -0xa8);
      F_0042ccf0((undefined *)((int)this + 0x54),iVar2 + -0x54);
      F_0042ccf0((undefined *)((int)this + 0xa8),iVar2);
      F_0042ccf0((undefined *)((int)this + 0xfc),iVar2 + 0x54);
      iVar1 = iVar2 + 0xa8;
      this = (undefined *)((int)this + 0x150);
      iVar2 = iVar2 + 0x150;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a15760 */
uint F_00a15760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa15760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1 = puVar1 + 6;
  }
  return (uint)puVar1;
}

/* ref: FUN_00a157a0 */
uint F_00a157a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa157a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a157c0 */
uint F_00a157c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa157c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return (uint)param_2;
}

/* ref: FUN_00a15810 */
unsigned int F_00a15810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa15810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00a15860 */
uint F_00a15860(unsigned int gen_a0)
{
  GEN_ENTER(0xa15860u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a135d0(param_1);
  return uVar1;
}

/* ref: FUN_00a15870 */
uint F_00a15870(unsigned int gen_a0)
{
  GEN_ENTER(0xa15870u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_1 + 0x1a4));
  F_0042c880((undefined *)((int)param_1 + 0x150));
  F_0042c880((undefined *)((int)param_1 + 0xfc));
  F_0042c880((undefined *)((int)param_1 + 0xa8));
  F_0042c880((undefined *)((int)param_1 + 0x54));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a158c0 */
uint F_00a158c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa158c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_1 + 0xa8));
  F_0042c880((undefined *)((int)param_1 + 0x54));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a158f0 */
unsigned int F_00a158f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa158f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a140b0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a15910 */
unsigned int F_00a15910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a141f0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a15930 */
unsigned int F_00a15930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8),param_3 + 0xa8);
  }
  return 0;
}

/* ref: FUN_00a15970 */
unsigned int F_00a15970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8),param_3 + 0xa8);
    F_0042cbc0((undefined *)((int)param_2 + 0xfc),param_3 + 0xfc);
  }
  return 0;
}

/* ref: FUN_00a159d0 */
uint F_00a159d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa159d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  
  if ((**(int * PTR32 *)((int)this + 0x24) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 0x34), 0 < *piVar1)) {
    *piVar1 = *piVar1 + -1;
    pbVar2 = ((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
    **(int * PTR32 *)((int)this + 0x24) = (int)(pbVar2 + 1);
    *pbVar2 = (byte)param_1;
    return (uint)(byte)param_1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,(uint)(byte)param_1);
  return uVar3;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00a15a10 */
uint F_00a15a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15a10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_00a15a30 */
uint F_00a15a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a15a50 */
uint F_00a15a50(unsigned int gen_a0)
{
  GEN_ENTER(0xa15a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = F_004069f0(param_1), uVar1 == 0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00a15aa0 */
uint F_00a15aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15ab0 */
uint F_00a15ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15ad0 */
uint F_00a15ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15ae0 */
uint F_00a15ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15b00 */
uint F_00a15b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15b10 */
uint F_00a15b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15b20 */
uint F_00a15b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15b30 */
uint F_00a15b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15b40 */
byte F_00a15b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15b60 */
byte F_00a15b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15b80 */
byte F_00a15b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15ba0 */
byte F_00a15ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15bd0 */
uint F_00a15bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15be0 */
uint F_00a15be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15bf0 */
byte F_00a15bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15c20 */
uint F_00a15c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: FUN_00a15c60 */
uint F_00a15c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a15c70 */
uint F_00a15c70(unsigned int gen_a0)
{
  GEN_ENTER(0xa15c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a150f0(this);
  return (uint)this;
}

/* ref: FUN_00a15c80 */
uint F_00a15c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a15ca0 */
uint F_00a15ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00479880(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  F_00a14dc0(this,param_1,0);
  return (uint)this;
}

/* ref: FUN_00a15cd0 */
byte F_00a15cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c48aef(param_2);
  if (iVar1 == -1) {
    return 0;
  }
  *param_1 = (char)iVar1;
  return 1;
}

/* ref: FUN_00a15d00 */
byte F_00a15d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c50a15((int)(char)param_1,param_2);
  return iVar1 != -1;
}

/* ref: FUN_00a15d20 */
byte F_00a15d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15d20u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c50cf0((uint)*param_1,param_2);
  return iVar1 != -1;
}

/* ref: Lock */
unsigned int F_00a15d40(unsigned int gen_a0)
{
  GEN_ENTER(0xa15d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_00c50937(*(undefined * PTR32 *)((int)this + 0x54));
  }
  return 0;
}

/* ref: Unlock */
uint F_00a15d50(unsigned int gen_a0)
{
  GEN_ENTER(0xa15d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_00c509aa(*(undefined * PTR32 *)((int)this + 0x54));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf13 */
uint F_00a15d60(unsigned int gen_a0)
{
  GEN_ENTER(0xa15d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x54) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,0xffffffff);
    if (uVar1 != 0xffffffff) {
      iVar2 = F_00c50ee3(*(undefined * PTR32 *)((int)this + 0x54));
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a15da0 */
uint F_00a15da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa15da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: FUN_00a15df0 */
uint F_00a15df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa15df0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a15e00 */
uint F_00a15e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa15e00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf6 */
uint F_00a15e50(unsigned int gen_a0)
{
  GEN_ENTER(0xa15e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  pbVar1 = ((byte *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x20)));
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + **(int * PTR32 *)((int)this + 0x30))) {
    return (uint)*pbVar1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,uVar2);
  return uVar2;
}

/* ref: std::basic_filebuf<char,std::char_traits<char>_>::_Set_back */
uint F_00a15ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xa15ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pbVar1;
  undefined * pbVar2;
  undefined4 * puVar3;
  
  pbVar2 = ((undefined *)GEN_TOP(**(int * PTR32 *)(this + 0x10)));
  pbVar1 = this + 0x48;
  if (pbVar2 != pbVar1) {
    *(undefined * PTR32 *)(this + 0x3c) = pbVar2;
    *(int *)(this + 0x40) = **(int * PTR32 *)(this + 0x30) + **(int * PTR32 *)(this + 0x20);
  }
  **(int * PTR32 *)(this + 0x10) = (int)pbVar1;
  **(int * PTR32 *)(this + 0x20) = (int)pbVar1;
  puVar3 = *(undefined4 * PTR32 *)(this + 0x30);
  *puVar3 = this + (0x49 - (int)pbVar1);
  return (uint)puVar3;
}

/* ref: FUN_00a15ee0 */
uint F_00a15ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + uVar5 + param_1,uVar2 - uVar5)
    ;
    iVar3 = *(int *)((int)this + 0x10) - uVar5;
    *(int *)((int)this + 0x10) = iVar3;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + iVar3) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + iVar3) = 0;
  }
  return (uint)this;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf4 */
uint F_00a15f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15f70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if (((uVar1 != 0) && (**((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < uVar1)) &&
     (((*(uint *)&gen_args[1]) == 0xffffffff || (*(byte *)(uVar1 - 1) == (*(uint *)&gen_args[1]))))) {
    **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + 1;
    **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + -1;
    return -(uint)((*(uint *)&gen_args[1]) != 0xffffffff) & (*(uint *)&gen_args[1]);
  }
  if ((*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != (undefined *)0x0) && ((*(uint *)&gen_args[1]) != 0xffffffff)) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == 0) &&
       (iVar2 = F_00c50cf0((*(uint *)&gen_args[1]) & 0xff,*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)))), iVar2 != -1)) {
      return (*(uint *)&gen_args[1]);
    }
    if (((undefined1 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))))) != ((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)))) {
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = (char)(*(uint *)&gen_args[1]);
      F_00a15ea0((*(undefined * PTR32 *)&gen_args[0]));
      return (*(uint *)&gen_args[1]);
    }
  }
  return 0xffffffff;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf12 */
uint F_00a16000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa16000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    if ((param_1 == (char *)0x0) && (param_2 == 0 && param_3 == 0)) {
      iVar1 = 4;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = F_00c50f3f(*(undefined * PTR32 *)((int)this + 0x54),param_1,iVar1,param_2);
    if (iVar1 == 0) {
      F_00a14dc0(this,*(undefined4 *)((int)this + 0x54),1);
      return (uint)this;
    }
  }
  return 0;
}

/* ref: FUN_00a16060 */
uint F_00a16060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_1);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  return (uint)puVar2;
}

/* ref: FUN_00a160e0 */
uint F_00a160e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa160e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00a150f0(this);
  return (uint)param_1;
}

/* ref: FUN_00a16100 */
unsigned int F_00a16100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a140b0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a16120 */
unsigned int F_00a16120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a140b0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a16140 */
unsigned int F_00a16140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a141f0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a16160 */
unsigned int F_00a16160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a141f0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00a16180 */
unsigned int F_00a16180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8),param_3 + 0xa8);
  }
  return 0;
}

/* ref: FUN_00a161c0 */
unsigned int F_00a161c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa161c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8),param_3 + 0xa8);
  }
  return 0;
}

/* ref: FUN_00a16200 */
unsigned int F_00a16200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8),param_3 + 0xa8);
    F_0042cbc0((undefined *)((int)param_2 + 0xfc),param_3 + 0xfc);
  }
  return 0;
}

/* ref: FUN_00a16250 */
unsigned int F_00a16250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8),param_3 + 0xa8);
    F_0042cbc0((undefined *)((int)param_2 + 0xfc),param_3 + 0xfc);
  }
  return 0;
}

/* ref: FUN_00a162a0 */
uint F_00a162a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa162a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a15470(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a162c0 */
uint F_00a162c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa162c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a155e0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a162e0 */
uint F_00a162e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa162e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a15680(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a16300 */
uint F_00a16300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a156e0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a16320 */
uint F_00a16320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a15760(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00a16340 */
uint F_00a16340(unsigned int gen_a0)
{
  GEN_ENTER(0xa16340u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00a16350 */
uint F_00a16350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16350u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)F_004069f0(8);
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
      *puVar1 = (*(undefined * PTR32 (*)[8])REFP(0x10e36f0));
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 2;
}

/* ref: FUN_00a163d0 */
uint F_00a163d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa163d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a163f0 */
unsigned int F_00a163f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa163f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00a16420 */
unsigned int F_00a16420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa16420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_00a15810(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_00a16460 */
uint F_00a16460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a135d0(param_2);
  return uVar1;
}

/* ref: FUN_00a16470 */
uint F_00a16470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_2 + 0x1a4));
  F_0042c880((undefined *)((int)param_2 + 0x150));
  F_0042c880((undefined *)((int)param_2 + 0xfc));
  F_0042c880((undefined *)((int)param_2 + 0xa8));
  F_0042c880((undefined *)((int)param_2 + 0x54));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a164c0 */
uint F_00a164c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa164c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_2 + 0xa8));
  F_0042c880((undefined *)((int)param_2 + 0x54));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a164f0 */
unsigned int F_00a164f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa164f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00a16520 */
unsigned int F_00a16520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00406ad0(uVar1);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return 0;
}

/* ref: FUN_00a16570 */
uint F_00a16570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a16590 */
uint F_00a16590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar5 = param_1 | 0xf;
  uVar6 = param_1;
  if (uVar5 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar3 = uVar1 >> 1;
    uVar6 = uVar5;
    if ((uVar5 / 3 < uVar3) && (uVar6 = uVar3 + uVar1, -uVar3 - 2 < uVar1)) {
      uVar6 = 0xfffffffe;
    }
  }
  pvVar4 = (undefined *)0x0;
  if ((uVar6 + 1 != 0) && (pvVar4 = (undefined *)F_004069f0(uVar6 + 1), pvVar4 == (undefined *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  pvVar2 = pvVar4;
  if (param_2 != 0) {
    pvVar2 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    uVar7 = F_00c46aa0(pvVar4,pvVar2,param_2);
    pvVar2 = (undefined *)uVar7;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = (undefined *)F_00406ad0(*(undefined4 *)this);
  }
  *(undefined1 *)this = 0;
  *(undefined * PTR32 *)this = pvVar4;
  *(uint *)((int)this + 0x14) = uVar6;
  *(int *)((int)this + 0x10) = param_2;
  if (0xf < uVar6) {
    this = pvVar4;
  }
  *(undefined1 *)((int)this + param_2) = 0;
  return (uint)pvVar2;
}

/* ref: FUN_00a16660 */
uint F_00a16660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a16680 */
uint F_00a16680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a16690 */
uint F_00a16690(unsigned int gen_a0)
{
  GEN_ENTER(0xa16690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a150f0(this);
  return (uint)this;
}

/* ref: FUN_00a166e0 */
uint F_00a166e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa166e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x65);
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
    cVar1 = *(char *)((int)puVar4 + 0x65);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00a16720 */
unsigned int F_00a16720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa16720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00a16750 */
uint F_00a16750(unsigned int gen_a0)
{
  GEN_ENTER(0xa16750u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x14a2670);
  if (REFG(undefined4, 0x14a2674) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x14a2674) == 0) {
      REFG(undefined4, 0x14a2674) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x14a2674);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x14a2674);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x14a2674) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x14a2674) * 4)));
    if (uVar3 != 0) goto LAB_00a16851;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00a167d3: ;
    if (uVar3 != 0) goto LAB_00a16851;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00a167d3;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00a16350(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x14a2670) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00a16851: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00a16870 */
unsigned int F_00a16870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa16870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00a15810(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: FUN_00a168b0 */
uint F_00a168b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa168b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00a168c0 */
uint F_00a168c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa168c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_0042c880(param_4 + 3);
    F_00429760(param_4,0x68,400);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00a16936;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00a16936;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00a16936: ;
  cVar1 = *(char *)(param_4[1] + 100);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 100) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 100) == '\0') {
        *(undefined1 *)(piVar5 + 0x19) = 1;
        *(undefined1 *)(iVar4 + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x65) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x65) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00a16ac1: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 100) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x65))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 100) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x65) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00a16ac1;
      }
      *(undefined1 *)(piVar5 + 0x19) = 1;
      *(undefined1 *)(iVar4 + 100) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 100))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 100);
  } while( true );
}

/* ref: FUN_00a16af0 */
unsigned int F_00a16af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x594)) {
    F_00a135d0(this);
  }
  return 0;
}

/* ref: FUN_00a16b20 */
unsigned int F_00a16b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa16b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0x150);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      F_0042c880((undefined *)((int)this + -0x54));
      F_0042c880((undefined *)((int)this + -0xa8));
      F_0042c880((undefined *)((int)this + -0xfc));
      F_0042c880((undefined *)((int)this + -0x150));
      iVar1 = (int)this + 0xa8;
      this = (undefined *)((int)this + 0x1f8);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a16b90 */
unsigned int F_00a16b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xfc)) {
    F_0042c880((undefined *)((int)this + 0xa8));
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00a16bd0 */
unsigned int F_00a16bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00a16c00 */
uint F_00a16c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16c00u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_00a140b0(this,iVar1);
    }
    iVar1 = iVar1 + 0x594;
    this = (undefined *)((int)this + 0x594);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a16c40 */
uint F_00a16c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa16c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar2 + -0xa8);
        F_0042cbc0((undefined *)((int)this + 0x54),iVar2 + -0x54);
        F_0042cbc0((undefined *)((int)this + 0xa8),iVar2);
        F_0042cbc0((undefined *)((int)this + 0xfc),iVar2 + 0x54);
        F_0042cbc0((undefined *)((int)this + 0x150),iVar2 + 0xa8);
        F_0042cbc0((undefined *)((int)this + 0x1a4),iVar2 + 0xfc);
      }
      iVar1 = iVar2 + 0x150;
      this = (undefined *)((int)this + 0x1f8);
      iVar2 = iVar2 + 0x1f8;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a16ce0 */
uint F_00a16ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa16ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
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
      F_0042cbc0((undefined *)((int)this + 0x54),iVar1 + 0x54);
      F_0042cbc0((undefined *)((int)this + 0xa8),iVar1 + 0xa8);
    }
    iVar1 = iVar1 + 0xfc;
    this = (undefined *)((int)this + 0xfc);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a16d40 */
uint F_00a16d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa16d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar2 + -0xa8);
        F_0042cbc0((undefined *)((int)this + 0x54),iVar2 + -0x54);
        F_0042cbc0((undefined *)((int)this + 0xa8),iVar2);
        F_0042cbc0((undefined *)((int)this + 0xfc),iVar2 + 0x54);
      }
      iVar1 = iVar2 + 0xa8;
      this = (undefined *)((int)this + 0x150);
      iVar2 = iVar2 + 0x150;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a16de0 */
unsigned int F_00a16de0(unsigned int gen_a0)
{
  GEN_ENTER(0xa16de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00406ad0(*(undefined4 *)this);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return 0;
}

/* ref: FUN_00a16e10 */
uint F_00a16e10(unsigned int gen_a0)
{
  GEN_ENTER(0xa16e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) & 6) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
    if (uVar3 == 0xffffffff) {
      uVar4 = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)this + iVar2 + 0xc) | uVar4;
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar4 = uVar4 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar4 & 0x17;
    uVar4 = *(uint *)((int)this + iVar2 + 0x10) & uVar4 & 0x17;
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 2) == 0) {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar4 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  return (uint)this;
}

/* ref: FUN_00a16ec0 */
uint F_00a16ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this_00;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x3c + (int)param_1))), this_00 != (undefined *)0x0)) {
    F_00a16e10(this_00);
  }
  *(bool *)((int)this + 4) = *((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0;
  return (uint)this;
}

/* ref: FUN_00a16f40 */
uint F_00a16f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa16f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    F_00a16590(this,param_1,*(undefined4 *)((int)this + 0x10));
    return (uint)(param_1 != 0);
  }
  if (((char)param_2 != '\0') && (param_1 < 0x10)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if (param_1 < uVar3) {
      uVar3 = param_1;
    }
    if (0xf < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3);
      }
      F_00406ad0(uVar2);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(uVar3 + (int)this) = 0;
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined1 *)this = 0;
  }
  return (uint)(param_1 != 0);
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf14 */
uint F_00a16ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa16ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00a16750(param_1);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if ((char)uVar2 != '\0') {
    *(undefined4 *)((int)this + 0x44) = 0;
    return uVar2;
  }
  *(int * PTR32 *)((int)this + 0x44) = piVar1;
  uVar2 = F_00479210(this);
  return uVar2;
}

/* ref: FUN_00a17030 */
uint F_00a17030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (-iVar2 - 1U <= param_1) {
                    
    F_00c4579a("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_00a16590(this,uVar1,iVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    F_00a14a80(this,*(undefined4 *)((int)this + 0x10),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a170e0 */
uint F_00a170e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa170e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 0) {
    uVar2 = F_00c467e5((*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[3]));
    if (uVar2 != 0) {
      F_00a14dc0((*(undefined * PTR32 *)&gen_args[0]),uVar2,1);
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
      (*(int *)&gen_args[3]) = iVar1;
      F_00c45bc0((undefined *)&(*(undefined4 *)&gen_args[2]),0);
      if (*(int *)(iVar1 + 4) != -1) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
      F_00c45be8(&(*(undefined4 *)&gen_args[2]));
      piVar3 = (int *)F_00a16750(&(*(int *)&gen_args[3]));
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      if ((char)uVar2 != '\0') {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
        F_00478ec0(&(*(int *)&gen_args[3]));
        return (uint)(*(undefined * PTR32 *)&gen_args[0]);
      }
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = piVar3;
      F_00479210((*(undefined * PTR32 *)&gen_args[0]));
      F_00478ec0(&(*(int *)&gen_args[3]));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
  }
  return 0;
}

/* ref: FUN_00a17190 */
uint F_00a17190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * _Dst;
  
  if (param_1 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (param_1 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_1) {
    F_00a16590(this,param_1,*(undefined4 *)((int)this + 0x10));
    if (param_1 == 0) {
      return (uint)this;
    }
  }
  else if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  if (param_1 == 1) {
    if (*(uint *)((int)this + 0x14) < 0x10) {
      *(char *)this = (char)param_2;
    }
    else {
      **(char * PTR32 *)this = (char)param_2;
    }
  }
  else {
    _Dst = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      _Dst = *(undefined * PTR32 *)this;
    }
    F_00c48350(_Dst,(int)(char)param_2,param_1);
  }
  *(uint *)((int)this + 0x10) = param_1;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_1) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return (uint)this;
}

/* ref: FUN_00a17260 */
uint F_00a17260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17260u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x65))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00a150f0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x65) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x65) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x65) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x19];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x19))) = (char)piVar3[0x19];
      *(char *)(piVar3 + 0x19) = (char)iVar1;
      goto LAB_00a1737a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x65) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x65) == '\0') {
      piVar4 = (int *)F_00a13f70(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x65) == '\0') {
      uVar5 = F_00a13fd0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00a1737a: ;
  if ((char)piVar3[0x19] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x19] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00a15180((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x65) == '\0') {
            if ((*(char *)(*piVar6 + 100) != '\x01') || (*(char *)(piVar6[2] + 100) != '\x01')) {
              if (*(char *)(piVar6[2] + 100) == '\x01') {
                *(undefined1 *)(*piVar6 + 100) = 1;
                *(undefined1 *)(piVar6 + 0x19) = 0;
                F_00a151e0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
              *(undefined1 *)(piVar4 + 0x19) = 1;
              *(undefined1 *)(piVar6[2] + 100) = 1;
              F_00a15180((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00a17438: ;
            *(undefined1 *)(piVar6 + 0x19) = 0;
          }
        }
        else {
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00a151e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x65) == '\0') {
            if ((*(char *)(piVar6[2] + 100) == '\x01') && (*(char *)(*piVar6 + 100) == '\x01'))
            goto LAB_00a17438;
            if (*(char *)(*piVar6 + 100) == '\x01') {
              *(undefined1 *)(piVar6[2] + 100) = 1;
              *(undefined1 *)(piVar6 + 0x19) = 0;
              F_00a15180((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
            *(undefined1 *)(piVar4 + 0x19) = 1;
            *(undefined1 *)(*piVar6 + 100) = 1;
            F_00a151e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x19) = 1;
  }
  F_0042c880(piVar3 + 3);
  F_00429760(piVar3,0x68,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a174c0 */
unsigned int F_00a174c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa174c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x65);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00a174c0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 3);
    F_00429760(piVar3,0x68,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x65);
  }
  return 0;
}

/* ref: FUN_00a17510 */
unsigned int F_00a17510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17510u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x594)) {
    F_00a135d0(this);
  }
  return 0;
}

/* ref: FUN_00a17540 */
unsigned int F_00a17540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00a16b20(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00a17560 */
unsigned int F_00a17560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17560u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xfc)) {
    F_0042c880((undefined *)((int)this + 0xa8));
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00a175a0 */
uint F_00a175a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa175a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar5 + 0x65);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00,puVar5 + 3);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 3,this_00);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0x65);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00a14310(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880(this_00);
  F_00429760((*(int *)&gen_args[2]),0x68,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a176a0 */
uint F_00a176a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa176a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_1);
    puVar1[0x18] = *(undefined4 *)(param_1 + 0x54);
  }
  return (uint)puVar1;
}

/* ref: FUN_00a17700 */
uint F_00a17700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17700u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a140b0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x594);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a17740 */
uint F_00a17740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa17740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a16c40(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a17770 */
uint F_00a17770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa17770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a16ce0(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a177a0 */
uint F_00a177a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa177a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00a16d40(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00a177d0 */
uint F_00a177d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa177d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((*((byte *)GEN_TOP((*(int *)(*piVar1 + 4) + 0x14 + (int)piVar1))) & 2) != 0) {
    F_00a16e10(piVar1);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)this + 4))) + 0x38 + (int)*(int * PTR32 *)this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf7 */
uint F_00a17800(unsigned int gen_a0)
{
  GEN_ENTER(0xa17800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  undefined4 uVar4;
  undefined4 * PTR32 * ppuVar5;
  uint uVar6;
  int iVar7;
  undefined4 * PTR32 * PTR32 * pppuVar8;
  
  ppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar6;
  if ((**(uint * PTR32 *)((int)this + 0x20) != 0) &&
     (uVar2 = **(uint * PTR32 *)((int)this + 0x20), uVar2 < **(int * PTR32 *)((int)this + 0x30) + uVar2)) {
    **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) + -1;
    pbVar3 = ((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
    **(int * PTR32 *)((int)this + 0x20) = (int)(pbVar3 + 1);
    bVar1 = *pbVar3;
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x2c));
    return (uint)bVar1;
  }
  if (*(int *)((int)this + 0x54) == 0) {
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x2c));
    return 0xffffffff;
  }
  if (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48) {
    uVar4 = *(undefined4 *)((int)this + 0x40);
    **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
    **(undefined4 * PTR32 *)((int)this + 0x20) = uVar4;
    **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  }
  if (*(int *)((int)this + 0x44) == 0) {
    uVar6 = F_00c48aef(*(undefined * PTR32 *)((int)this + 0x54));
    if (uVar6 == 0xffffffff) {
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 0xffffffff;
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar6 & 0xff;
  }
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar5 & 0xffffff00);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  iVar7 = F_00c48aef(*(undefined * PTR32 *)((int)this + 0x54));
  while (iVar7 != -1) {
    F_00a17030(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)),1,iVar7);
    pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x10))))
                      (*(int * PTR32 *)((int)this + 0x44),(int)this + 0x4c,pppuVar8,
                       (int)pppuVar8 + (*(int *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x4)),&(*(byte *)(gen_frame + 0xb)),((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)),&(*(byte * PTR32 *)(gen_frame + 0x0)));
    if ((int)uVar6 < 0) break;
    if ((int)uVar6 < 2) {
      if ((*(byte * PTR32 *)(gen_frame + 0x0)) != &(*(byte *)(gen_frame + 0xb))) {
        pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        for (iVar7 = (int)pppuVar8 + ((*(int *)(gen_frame + 0x1c)) - (*(int *)(gen_frame + 0x4))); 0 < iVar7; iVar7 = iVar7 + -1) {
          F_00c50cf0((int)*(char *)(iVar7 + -1 + (*(int *)(gen_frame + 0x4))),*(undefined * PTR32 *)((int)this + 0x54));
        }
        F_00a16de0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return (uint)(*(byte *)(gen_frame + 0xb));
      }
      pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
      if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
        pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
      }
      F_00a15ee0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,(*(int *)(gen_frame + 0x4)) - (int)pppuVar8);
    }
    else {
      if (uVar6 != 3) break;
      if ((*(int *)(gen_frame + 0x1c)) != 0) {
        pppuVar8 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          pppuVar8 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        F_00c4d027(&(*(byte *)(gen_frame + 0xb)),1,pppuVar8,1);
        F_00a16de0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return (uint)(*(byte *)(gen_frame + 0xb));
      }
    }
    iVar7 = F_00c48aef(*(undefined * PTR32 *)((int)this + 0x54));
  }
  F_00a16de0(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0xffffffff;
}

/* ref: FUN_00a17a20 */
uint F_00a17a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00a17190(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00a17a50 */
uint F_00a17a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa17a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a15760(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a17a90 */
unsigned int F_00a17a90(unsigned int gen_a0)
{
  GEN_ENTER(0xa17a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a17ae0 */
byte F_00a17ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xa17ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar2;
  gen_size32 sVar3;
  gen_size32 _Count;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*(int *)((int)this + 0x44) == 0) || (*(char *)((int)this + 0x49) == '\0')) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,0xffffffff);
  if (uVar1 == 0xffffffff) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  (*(undefined1 *)((char *)&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) = (undefined4 * PTR32 * PTR32 * PTR32 *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 8;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  do {
    ppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar2 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x18))))
                      (*(int * PTR32 *)((int)this + 0x44),(int)this + 0x4c,ppppuVar2,
                       (int)ppppuVar2 + (*(int *)(gen_frame + 0x1c)),&(*(int *)(gen_frame + 0x8)));
    if (uVar1 == 0) {
      *(undefined1 *)((int)this + 0x49) = 0;
    }
    else if (uVar1 != 1) {
      if (uVar1 != 3) goto LAB_00a17b87;
LAB_00a17c02: ;
      F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
    ppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar2 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    _Count = (*(int *)(gen_frame + 0x8)) - (int)ppppuVar2;
    if (_Count != 0) {
      ppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
      if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
        ppppuVar2 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
      }
      sVar3 = F_00c4922b(ppppuVar2,1,_Count,*(undefined * PTR32 *)((int)this + 0x54));
      if (_Count != sVar3) {
LAB_00a17b87: ;
        F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return 0;
      }
    }
    if (*(char *)((int)this + 0x49) == '\0') goto LAB_00a17c02;
    if (_Count == 0) {
      F_00a17030(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),8,0);
    }
  } while( true );
}

/* ref: FUN_00a17c30 */
unsigned int F_00a17c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x594)) {
    F_00a135d0(this);
  }
  return 0;
}

/* ref: FUN_00a17c60 */
unsigned int F_00a17c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa17c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a16b20(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_00a17c80 */
unsigned int F_00a17c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xfc)) {
    F_0042c880((undefined *)((int)this + 0xa8));
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00a17cc0 */
uint F_00a17cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa17cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_00a15810(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a17d90 */
uint F_00a17d90(unsigned int gen_a0)
{
  GEN_ENTER(0xa17d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a174c0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a18020 */
uint F_00a18020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa18020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00a140b0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x594);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00a18060 */
uint F_00a18060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a16c40(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a18090 */
uint F_00a18090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a16ce0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a180c0 */
uint F_00a180c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa180c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a16d40(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00a180f0 */
uint F_00a180f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa180f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[3]) + 3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    bVar3 = F_0042c7c0((undefined *)(piVar1[2] + 0xc),this_00);
    if (bVar3 != 0) {
      F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar2);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a14310(&(*(int * PTR32 *)&gen_args[3]));
      bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[3]) + 3,this_00);
      if (bVar3 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x65))) == '\0') {
          F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar3 = F_0042c7c0((*(int * PTR32 *)&gen_args[2]) + 3,this_00);
    if (bVar3 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00a150f0(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar3 = F_0042c7c0(this_00,(*(int * PTR32 *)&gen_args[3]) + 3), bVar3 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x65))) == '\0') {
          F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00a168c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar4 = (undefined4 *)F_00a175a0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00a18290 */
unsigned int F_00a18290(unsigned int gen_a0)
{
  GEN_ENTER(0xa18290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf3 */
uint F_00a182e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa182e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  char * pcVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar8;
  gen_size32 sVar9;
  char cVar10;
  gen_size32 _Count;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar5;
  uVar6 = 0;
  if (param_1 != 0xffffffff) {
    cVar10 = (char)param_1;
    if ((**(uint * PTR32 *)((int)this + 0x24) != 0) &&
       (piVar1 = *(int * PTR32 *)((int)this + 0x34), uVar6 = **(uint * PTR32 *)((int)this + 0x24),
       uVar6 < *piVar1 + uVar6)) {
      *piVar1 = *piVar1 + -1;
      pcVar2 = ((char *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
      **(int * PTR32 *)((int)this + 0x24) = (int)(pcVar2 + 1);
      *pcVar2 = cVar10;
      F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x2c));
      return param_1;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      if (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48) {
        uVar3 = *(undefined4 *)((int)this + 0x40);
        **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
        **(undefined4 * PTR32 *)((int)this + 0x20) = uVar3;
        **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
      }
      if (*(int *)((int)this + 0x44) == 0) {
        iVar7 = F_00c50a15((int)cVar10,*(undefined * PTR32 *)((int)this + 0x54));
        if (iVar7 != -1) {
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return param_1;
        }
      }
      else {
        (*(undefined1 *)((char *)&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) + 0)) = 0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = cVar10;
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),cVar10);
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) = (undefined4 * PTR32 * PTR32 * PTR32 *)0x0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 8;
        (*(undefined1 *)(gen_frame + 0x14)) = 0;
        while( true ) {
          do {
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar8 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x14))))
                              (*(int * PTR32 *)((int)this + 0x44),(int)this + 0x4c,&(*(undefined4 *)(gen_frame + 0x8)),
                               (int)&(*(undefined4 *)(gen_frame + 0x8)) + 1,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),ppppuVar8,(int)ppppuVar8 + (*(uint *)(gen_frame + 0x1c)),
                               &(*(int *)(gen_frame + 0x4)));
            if ((int)uVar5 < 0) goto LAB_00a184e3;
            if (1 < (int)uVar5) {
              if (uVar5 == 3) {
                bVar4 = F_00a15d00((*(undefined4 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0x54));
                if (bVar4 != 0) {
                  F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
                  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
                  return param_1;
                }
                F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
                F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
                return 0xffffffff;
              }
              goto LAB_00a184e3;
            }
            ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar8 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            _Count = (*(int *)(gen_frame + 0x4)) - (int)ppppuVar8;
            if (_Count != 0) {
              ppppuVar8 = (undefined4 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
              if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
                ppppuVar8 = &(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
              }
              sVar9 = F_00c4922b(ppppuVar8,1,_Count,*(undefined * PTR32 *)((int)this + 0x54));
              if (_Count != sVar9) goto LAB_00a184e3;
            }
            *(undefined1 *)((int)this + 0x49) = 1;
            if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != &(*(undefined4 *)(gen_frame + 0x8))) {
              F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
              F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
              return param_1;
            }
          } while (_Count != 0);
          if (0x1f < (*(uint *)(gen_frame + 0x1c))) break;
          F_00a17030(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),8,0);
        }
LAB_00a184e3: ;
        F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)));
      }
    }
    uVar6 = 0xffffffff;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar6;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf10 */
uint F_00a18500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa18500u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(int *)&gen_args[2]);
  iVar4 = (*(int *)&gen_args[3]);
  if (((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48) && ((*(int *)&gen_args[4]) == 1)) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == 0)) {
    iVar3 = (*(int *)&gen_args[2]) + -1;
    iVar4 = (*(int *)&gen_args[3]) + -1 + (uint)((*(int *)&gen_args[2]) != 0);
  }
  if ((((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) != 0) && (bVar2 = F_00a17ae0((*(undefined * PTR32 *)&gen_args[0])), bVar2 != 0)) &&
      (((iVar3 == 0 && iVar4 == 0 && ((*(int *)&gen_args[4]) == 1)) ||
       (iVar3 = F_00c5112c(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),iVar3,iVar4,(*(int *)&gen_args[4])), iVar3 == 0)))) &&
     (iVar3 = F_00c51035(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))),(longlong *)&(*(int *)&gen_args[2])), iVar3 == 0)) {
    if (**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48) {
      uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
      **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = uVar1;
      **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
    }
    (*(undefined4 * PTR32 *)&gen_args[1])[2] = (*(int *)&gen_args[2]);
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
    (*(undefined4 * PTR32 *)&gen_args[1])[3] = (*(int *)&gen_args[3]);
    (*(undefined4 * PTR32 *)&gen_args[1])[4] = uVar1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  uVar1 = REFG(undefined4, 0x1118760);
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = REFG(undefined4, 0x1118764);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
  (*(undefined4 * PTR32 *)&gen_args[1])[2] = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[3] = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[4] = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf11 */
uint F_00a185f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa185f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x8)) = param_5;
  (*(undefined4 *)(gen_frame + 0x4)) = param_4;
  if ((((*(int *)((int)this + 0x54) != 0) && (bVar2 = F_00a17ae0(this), bVar2 != 0)) &&
      (iVar3 = F_00c511ab(*(undefined * PTR32 *)((int)this + 0x54),(longlong *)&(*(undefined4 *)(gen_frame + 0x4))), iVar3 == 0)) &&
     (((param_2 == 0 && param_3 == 0 ||
       (iVar3 = F_00c5112c(*(undefined4 *)((int)this + 0x54),param_2,param_3,1), iVar3 == 0)) &&
      (iVar3 = F_00c51035(*(undefined * PTR32 *)((int)this + 0x54),(longlong *)&(*(undefined4 *)(gen_frame + 0x4))), iVar3 == 0)))) {
    *(undefined4 *)((int)this + 0x4c) = param_6;
    F_00a14ea0(this);
    param_1[2] = (*(undefined4 *)(gen_frame + 0x4));
    uVar1 = *(undefined4 *)((int)this + 0x4c);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[4] = uVar1;
    return (uint)param_1;
  }
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = REFG(undefined4, 0x1118764);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a186d0 */
uint F_00a186d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa186d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar2 = (undefined *)F_00a15470(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_00 = pvVar2; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x594)) {
      F_00a135d0(this_00);
    }
    *(undefined * PTR32 *)((int)this + 4) = pvVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a18740 */
uint F_00a18740(unsigned int gen_a0)
{
  GEN_ENTER(0xa18740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x594)) {
      F_00a135d0(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x594) * 0x594,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00a187a0 */
uint F_00a187a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa187a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a155e0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a16b20(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a187f0 */
uint F_00a187f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa187f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a16b20(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1f8) * 0x1f8,400
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a18860 */
uint F_00a18860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a15680(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00a17c80(uVar1,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a188b0 */
uint F_00a188b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa188b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00a17c80(*(int *)this,*(undefined4 *)((int)this + 4));
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xfc) * 0xfc,400);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00a18910 */
uint F_00a18910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00a156e0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_00485e30(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a18960 */
uint F_00a18960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa18960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a17cc0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a17cc0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a189f0 */
uint F_00a189f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa189f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined * pvVar4;
  
  if (*(int *)((int)this + 0x54) != 0) {
    bVar2 = F_00a17ae0(this);
    pvVar4 = this;
    if (bVar2 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    iVar3 = F_00c49312(*(undefined * PTR32 *)((int)this + 0x54));
    if (iVar3 == 0) goto LAB_00a18a1a;
  }
  pvVar4 = (undefined *)0x0;
LAB_00a18a1a: ;
  *(int *)((int)this + 0x10) = (int)this + 8;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x49) = 0;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(undefined4 * PTR32 *)((int)this + 0x14) = (undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(undefined4 *)((int)this + 0xc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = REFG(undefined4, 0x14a266c);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  return (uint)pvVar4;
}

/* ref: FUN_00a18a80 */
uint F_00a18a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa18a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x594;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x594,0,400);
    F_00a18020(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x594)) {
        F_00a135d0(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x594) * 0x594,400);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x594) * 0x594 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x594 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18b80 */
uint F_00a18b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa18b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1f8;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1f8,0,400);
    F_00a16c40(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a16b20(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1f8) * 0x1f8,
                   400);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x1f8) * 0x1f8 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x1f8 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18c70 */
uint F_00a18c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa18c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xfc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xfc,0,400);
    F_00a16ce0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00a17c80(*(int *)this,*(undefined4 *)((int)this + 4));
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xfc) * 0xfc,400)
      ;
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0xfc) * 0xfc + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0xfc + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18d50 */
uint F_00a18d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa18d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x150;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x150,0,400);
    F_00a16d40(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00485e30(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x150) * 0x150,400);
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x150) * 0x150 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x150 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a18e30 */
uint F_00a18e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00a174c0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x65) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x65);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x65);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x65);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00a17260(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00a18ef0 */
uint F_00a18ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa18ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_3);
    puVar1[0x18] = *(undefined4 *)(param_3 + 0x54);
  }
  F_00a180f0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00a18f70 */
uint F_00a18f70(unsigned int gen_a0)
{
  GEN_ENTER(0xa18f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a186d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a18fa0 */
unsigned int F_00a18fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xa18fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a155e0(iVar1,iVar1,*(int *)this,this);
    F_00a16b20(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a18ff0 */
unsigned int F_00a18ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa18ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a15680(iVar1,iVar1,*(int *)this,this);
    F_00a17c80(uVar2,*(undefined4 *)((int)this + 4));
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a19030 */
unsigned int F_00a19030(unsigned int gen_a0)
{
  GEN_ENTER(0xa19030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_00a156e0(iVar1,iVar1,*(int *)this,this);
    F_00485e30(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00a19070 */
uint F_00a19070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar2 = (int)(uVar1 - *(int *)this) / 0x18;
  if (param_1 < uVar2) {
    uVar2 = *(int *)this + param_1 * 0x18;
    if (uVar2 != uVar1) {
      uVar2 = F_00a15760(uVar1,uVar1,uVar2,param_1);
      *(uint *)((int)this + 4) = uVar2;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00a18960(this,param_1 - uVar2);
    F_00a16720(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x18,0
                 ,(int)this + 0xc);
    uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
    *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 - uVar2) * 0x18;
  }
  return uVar2;
}

/* ref: FUN_00a19120 */
unsigned int F_00a19120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00a191a0 */
unsigned int F_00a191a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa191a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0096ef20(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_00a19220 */
uint F_00a19220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  byte bVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  puVar3 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar3 + 0x65);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar2 = F_0042c7c0(puVar3 + 3,param_1);
    if (bVar2 == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar3;
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
    cVar1 = *(char *)((int)puVar3 + 0x65);
  }
  if (((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar2 = F_0042c7c0(param_1,(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 3), bVar2 == 0)) {
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x18;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)puVar3;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x10)),param_1);
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  puVar3 = (undefined4 *)F_004296a0(0x68,0,400);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 0x19) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar3 + 3,((undefined1 *)(gen_frame + 0x10)));
    puVar3[0x18] = (*(undefined4 *)(gen_frame + 0x64));
  }
  F_00a180f0(this,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)),puVar3);
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)(puVar3 + 0x18);
}

/* ref: FUN_00a19320 */
uint F_00a19320(unsigned int gen_a0)
{
  GEN_ENTER(0xa19320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  if ((*(int *)((int)this + 0x54) != 0) && (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48)) {
    uVar1 = *(undefined4 *)((int)this + 0x40);
    **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
    **(undefined4 * PTR32 *)((int)this + 0x20) = uVar1;
    **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  }
  if (*(char *)((int)this + 0x50) != '\0') {
    F_00a189f0(this);
  }
  uVar2 = F_00479ae0(this);
  return uVar2;
}

/* ref: basic_filebuf_DU_char_traits_D_std_std::vf0 */
uint F_00a19370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  if ((*(int *)((int)this + 0x54) != 0) && (**(int * PTR32 *)((int)this + 0x10) == (int)this + 0x48)) {
    uVar1 = *(undefined4 *)((int)this + 0x40);
    **(int * PTR32 *)((int)this + 0x10) = *(int *)((int)this + 0x3c);
    **(undefined4 * PTR32 *)((int)this + 0x20) = uVar1;
    **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  }
  if (*(char *)((int)this + 0x50) != '\0') {
    F_00a189f0(this);
  }
  F_00479ae0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a193d0 */
uint F_00a193d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa193d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x594;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x594;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18a80(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18a80(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a19460 */
uint F_00a19460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1f8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1f8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18b80(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18b80(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a194f0 */
uint F_00a194f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa194f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xfc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xfc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18c70(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18c70(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a19580 */
uint F_00a19580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x150;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x150;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00a18d50(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00a18d50(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a19610 */
uint F_00a19610(unsigned int gen_a0)
{
  GEN_ENTER(0xa19610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00a18e30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a19630 */
unsigned int F_00a19630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a193d0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a140b0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x594) * 0x594 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x594;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a193d0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a140b0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x594;
  return 0;
}

/* ref: FUN_00a196c0 */
unsigned int F_00a196c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa196c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a19460(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a141f0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x1f8) * 0x1f8 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1f8;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00a19460(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00a141f0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1f8;
  return 0;
}

/* ref: FUN_00a19750 */
unsigned int F_00a19750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a194f0(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    uVar2 = ((int)(param_1 - uVar1) / 0xfc) * 0xfc + *(int *)this;
    if (this_00 == (undefined *)0x0) goto LAB_00a197e3;
    F_0042cbc0(this_00,uVar2);
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a194f0(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 == (undefined *)0x0) goto LAB_00a197e3;
    F_0042cbc0(this_00,param_1);
    uVar2 = param_1;
  }
  F_0042cbc0((undefined *)((int)this_00 + 0x54),uVar2 + 0x54);
  F_0042cbc0((undefined *)((int)this_00 + 0xa8),uVar2 + 0xa8);
LAB_00a197e3: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xfc;
  return 0;
}

/* ref: FUN_00a19800 */
unsigned int F_00a19800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a19580(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    uVar2 = ((int)(param_1 - uVar1) / 0x150) * 0x150 + *(int *)this;
    if (this_00 == (undefined *)0x0) goto LAB_00a198b2;
    F_0042cbc0(this_00,uVar2);
    F_0042cbc0((undefined *)((int)this_00 + 0x54),uVar2 + 0x54);
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00a19580(this,1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 == (undefined *)0x0) goto LAB_00a198b2;
    F_0042cbc0(this_00,param_1);
    F_0042cbc0((undefined *)((int)this_00 + 0x54),param_1 + 0x54);
    uVar2 = param_1;
  }
  F_0042cbc0((undefined *)((int)this_00 + 0xa8),uVar2 + 0xa8);
  F_0042cbc0((undefined *)((int)this_00 + 0xfc),uVar2 + 0xfc);
LAB_00a198b2: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x150;
  return 0;
}

/* ref: FUN_00a198c0 */
uint F_00a198c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa198c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a18e30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00a19900 */
uint F_00a19900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa19900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (param_4 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x10e3768);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  this_00 = (undefined4 *)((int)this + 4);
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))),this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e3764));
  F_00479880(this_00);
  *(int *)((int)this + 0x14) = (int)this + 0xc;
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x4d) = 0;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(int *)((int)this + 0x28) = (int)this + 0x20;
  *(undefined4 * PTR32 *)((int)this + 0x18) = (undefined4 *)((int)this + 0x10);
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(int *)((int)this + 0x38) = (int)this + 0x30;
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x28) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x38) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x14) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x14a266c);
  *(undefined4 *)((int)this + 0x48) = 0;
  uVar2 = F_00a170e0(this_00,param_1,param_2 | 2,param_3);
  if (uVar2 == 0) {
    iVar1 = *(int *)(*(int *)this + 4);
    uVar2 = *(uint *)(iVar1 + 0xc + (int)this);
    uVar3 = uVar2 | 2;
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar3 = uVar2 | 6;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar3 & 0x17;
    uVar2 = *(uint *)((int)this + iVar1 + 0x10) & uVar3 & 0x17;
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 2) == 0) {
          uVar2 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar2 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar2 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return (uint)this;
}

/* ref: FUN_00a19a40 */
uint F_00a19a40(unsigned int gen_a0)
{
  GEN_ENTER(0xa19a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + -0x60) + 4))) + -0x60 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e3764));
  *(undefined * PTR32 * PTR32 *)((int)this + -0x5c) = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  if ((*(int *)((int)this + -8) != 0) && (**(int * PTR32 *)((int)this + -0x4c) == (int)this + -0x14)) {
    uVar1 = *(undefined4 *)((int)this + -0x1c);
    **(int * PTR32 *)((int)this + -0x4c) = *(int *)((int)this + -0x20);
    **(undefined4 * PTR32 *)((int)this + -0x3c) = uVar1;
    **(undefined4 * PTR32 *)((int)this + -0x2c) = 0;
  }
  if (*(char *)((int)this + -0xc) != '\0') {
    F_00a189f0((undefined *)((int)this + -0x5c));
  }
  F_00479ae0((undefined *)((int)this + -0x5c));
  uVar2 = *(uint *)((int)this + -0x60);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(uVar2 + 4) + -0x60 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  return uVar2;
}

/* ref: FUN_00a19ab0 */
uint F_00a19ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xa19ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a18e30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00a19b50 */
uint F_00a19b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a19a40(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0((int)this - 0x60U);
  }
  return (int)this - 0x60U;
}

/* ref: Client::System::Task::SpursJobEntity::vf5 */
unsigned int F_00a19ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00a19bb0 */
byte F_00a19bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa19bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return 1;
}

/* ref: FUN_00a19bd0 */
byte F_00a19bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa19bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return 1;
}

/* ref: FUN_00a19c00 */
uint F_00a19c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cefe0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e378c));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  LOCK();
  *(undefined4 *)((int)this + 0x1c) = 0;
  UNLOCK();
  REFG(undefined4, 0x14a2918) = 1;
  return (uint)this;
}

/* ref: FUN_00a19c40 */
unsigned int F_00a19c40(unsigned int gen_a0)
{
  GEN_ENTER(0xa19c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = REFG(int, 0x14a2918);
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e378c));
  if (0 < iVar2) {
    do {
      ((code *)*(gen_code32 *)(*((int *)GEN_TOP((&REFG(undefined4, 0x14a2920))[iVar4])) + 4))(((int *)GEN_TOP((&REFG(undefined4, 0x14a2920))[iVar4])));
      iVar4 = iVar4 + 1;
      iVar2 = REFG(int, 0x14a2918);
    } while (iVar4 < REFG(int, 0x14a2918));
  }
  iVar5 = 0;
  iVar4 = 0;
  if (iVar2 != 0) {
    do {
      if ((&REFG(undefined4, 0x14a2920))[iVar4] != 0) {
        gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((&REFG(undefined4, 0x14a2920))[iVar4] + 0x38))));
        uVar3 = F_004cf030(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a2920))[iVar4])));
        if ((char)uVar3 != '\0') {
          puVar1 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x14a2920))[iVar4]));
          if (puVar1 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
          }
          (&REFG(undefined4, 0x14a2920))[iVar4] = 0;
          iVar5 = iVar5 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      if (iVar4 == REFG(int, 0x14a2918)) {
        iVar4 = 0;
      }
      gen_imp_Sleep(1);
    } while (iVar5 != REFG(int, 0x14a2918));
  }
  F_004cf880(this);
  return 0;
}

/* ref: FUN_00a19cf0 */
unsigned int F_00a19cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa19cf0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar4 = (*(uint *)&gen_args[2]);
  (*(uint *)&gen_args[2]) = F_00406bb0((*(uint *)&gen_args[2]),0,0);
  F_00c46aa0((*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),uVar4);
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (0x10000000 < iVar2) {
    LOCK();
    *piVar1 = *piVar1 + -0x10000000;
    UNLOCK();
  }
  iVar2 = (&REFG(undefined4, 0x14a2920))[iVar2 % REFG(int, 0x14a2918)];
  this_00 = *(undefined * PTR32 *)(iVar2 + 0x40);
  do {
    piVar1 = (int *)(iVar2 + 0x44);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    while (iVar3 != 0) {
      LOCK();
      *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
      UNLOCK();
      gen_imp_Sleep(1);
      piVar1 = (int *)(iVar2 + 0x44);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar5 = F_004cf180(this_00,&(*(uint *)&gen_args[2]));
    gen_imp_SetEvent(*(HANDLE *)(iVar2 + 0x38));
    LOCK();
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
    UNLOCK();
  } while ((char)uVar5 == '\0');
  return 0;
}

/* ref: Client::System::Task::SpursJobEntity::vf1 */
unsigned int F_00a19db0(unsigned int gen_a0)
{
  GEN_ENTER(0xa19db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x14) = 1;
  return 0;
}

/* ref: Client::System::Task::SpursJobEntityWokerThread::vf5 */
uint F_00a19dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x14010];
  int * piVar1;
  int iVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x14008)) = 0xa19dcd;
  (*(uint *)(gen_frame + 0x14008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  this_00 = *(undefined * PTR32 *)(param_1 + 0x40);
  piVar1 = (int *)(param_1 + 0x44);
  while( true ) {
    while( true ) {
      (*(undefined4 *)(gen_frame + 0x10004)) = 0;
      piVar4 = (int *)F_004cf3c0(this_00,&(*(undefined4 *)(gen_frame + 0x10004)));
      if (piVar4 == (int *)0x0) break;
      puVar3 = (undefined4 *)*piVar4;
      puVar3[0x12] = ((undefined1 *)(gen_frame + 0x10008));
      (*(code *)*puVar3)(puVar3 + 0x10,puVar3);
      LOCK();
      *(int *)(puVar3[0x13] + 8) = *(int *)(puVar3[0x13] + 8) + 1;
      UNLOCK();
      F_004cf410(this_00,(*(undefined4 *)(gen_frame + 0x10004)));
      F_00406b30(puVar3);
      gen_imp_SwitchToThread();
    }
    if (this[0x14] != (undefined1)0x0) break;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    while (iVar2 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      gen_imp_Sleep(1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar5 = F_004cf460(this_00);
    if (uVar5 == 0) {
      gen_imp_ResetEvent(*(HANDLE *)(this + 0x38));
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      gen_imp_WaitForSingleObject(*(HANDLE *)(this + 0x38),0xffffffff);
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x14008)) ^ (uint)(uint)(gen_frame + 0x0));
  return 0;
}

/* ref: Client::System::Task::SpursJobEntityWokerThread::vf1 */
unsigned int F_00a19ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xa19ee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x14) = 1;
  return 0;
}

/* ref: FUN_00a19ef0 */
uint F_00a19ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa19ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x3c) = param_1;
  F_00a1a180((int)this + 0x18,"FFXIV_WinSpursSub%02x",param_1);
  uVar1 = F_004cf9e0(this,0,0,0,(int)this + 0x18);
  return uVar1;
}

/* ref: FUN_00a19f90 */
uint F_00a19f90(unsigned int gen_a0)
{
  GEN_ENTER(0xa19f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  undefined * this_00;
  uint uVar2;
  
  F_004cefe0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x38) = pvVar1;
  *(undefined4 *)((int)this + 0x44) = 0;
  this_00 = (undefined *)F_00406b90(0x24,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_004cf0c0(this_00,4,0x1000,0);
    *(uint *)((int)this + 0x40) = uVar2;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_00a19ff0 */
unsigned int F_00a19ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa19ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x40);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x38));
  F_004cf880(this);
  return 0;
}

/* ref: FUN_00a1a020 */
uint F_00a1a020(void)
{
  GEN_ENTER(0xa1a020u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00406b90(0x48,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00a19f90(pvVar1);
  }
  REFG(void * PTR32, 0x14a2920) = pvVar1;
  *(undefined4 *)((int)pvVar1 + 0x3c) = 0;
  F_00a1a180((int)pvVar1 + 0x18,"FFXIV_WinSpursSub%02x",0);
  uVar2 = F_004cf9e0(pvVar1,0,0,0,(int)pvVar1 + 0x18);
  return uVar2;
}

/* ref: FUN_00a1a080 */
uint F_00a1a080(unsigned int gen_a0)
{
  GEN_ENTER(0xa1a080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * this;
  HANDLE pvVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    gen_imp_GetSystemInfo((GEN_LPANY)((byte *)(gen_frame + 0x8)));
    param_1 = (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) / 2;
    if ((int)param_1 < 3) {
      param_1 = 2;
    }
  }
  iVar3 = 1;
  if ((int)param_1 < 2) {
    REFG(undefined4, 0x14a2918) = param_1;
    return param_1;
  }
  do {
    this = (undefined4 *)F_00406b90(0x48,0,0);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      F_004cefe0(this);
      *this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
      pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
      this[0xe] = pvVar1;
      this[0x11] = 0;
      this_00 = (undefined *)F_00406b90(0x24,0,0);
      if (this_00 == (undefined *)0x0) {
        this[0x10] = 0;
      }
      else {
        uVar2 = F_004cf0c0(this_00,4,0x1000,0);
        this[0x10] = uVar2;
      }
    }
    (&REFG(undefined4, 0x14a2920))[iVar3] = this;
    this[0xf] = iVar3;
    F_00a1a180(this + 6,"FFXIV_WinSpursSub%02x",iVar3);
    uVar2 = F_004cf9e0(this,0,0,0,this + 6);
    iVar3 = iVar3 + 1;
  } while (iVar3 < (int)param_1);
  REFG(undefined4, 0x14a2918) = param_1;
  return uVar2;
}

/* ref: FUN_00a1a180 */
uint F_00a1a180(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xa1a180u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c475c9(param_1,0x20,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00a1a1a0 */
uint F_00a1a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)this;
  *(int *)this = *(int *)this - param_1;
  UNLOCK();
  return iVar1 - param_1;
}

/* ref: FUN_00a1a1e0 */
unsigned int F_00a1a1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1a1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)this;
  *(int *)this = *(int *)this + 1;
  UNLOCK();
  while (iVar1 != 0) {
    LOCK();
    *(int *)this = *(int *)this + -1;
    UNLOCK();
    gen_imp_Sleep(1);
    LOCK();
    iVar1 = *(int *)this;
    *(int *)this = *(int *)this + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: Client::System::Task::SpursJobEntity::vf0 */
uint F_00a1a250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a19c40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Task::SpursJobEntityWokerThread::vf0 */
uint F_00a1a280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x40);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e37a8));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x38));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a1a310 */
uint F_00a1a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b1aec0();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a1a340 */
uint F_00a1a340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1a340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  int * piVar5;
  undefined4 * puVar6;
  
  puVar1 = *(undefined4 * PTR32 *)(*param_2 + 4);
  ppuVar4 = &REFG(undefined * PTR32, 0x133dcb0);
  puVar6 = puVar1;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0x14] = param_3;
  puVar1[0x15] = 0;
  if (param_3 != 0) {
    piVar5 = puVar1 + 0x16;
    do {
      iVar2 = param_2[uVar3];
      *piVar5 = iVar2;
      piVar5[1] = iVar2 >> 0x1f;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 < param_3);
  }
  uVar3 = F_00b1af30(param_1,puVar1,0xa0,param_4,1);
  return uVar3;
}

/* ref: FUN_00a1a3d0 */
uint F_00a1a3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e37d4));
  F_00a19c00((undefined *)((int)this + 8),param_1);
  *(undefined4 *)((int)this + 0x28) = param_1;
  LOCK();
  *(undefined4 *)((int)this + 0x2c) = 0;
  UNLOCK();
  pvVar2 = (undefined *)((int)this + 0xa8);
  iVar3 = 2;
  do {
    F_00bc59e0(pvVar2);
    pvVar2 = (undefined *)((int)pvVar2 + 0x78);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 0;
  puVar4 = (uint *)((int)this + 0x30);
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s%02x",*param_2,iVar3);
    pvVar2 = (undefined *)F_00406b90(0xc,0,0);
    if (pvVar2 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00b1ae90(pvVar2,(int)this + 8,((undefined1 *)(gen_frame + 0x8)));
    }
    puVar4[0xf] = uVar1;
    *puVar4 = uVar1;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 0xf);
  F_00a1a020();
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)this;
}

/* ref: FUN_00a1a4b0 */
unsigned int F_00a1a4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1a4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e37d4));
  piVar2 = (int *)((int)this + 0x6c);
  iVar1 = 0xf;
  do {
    iVar3 = iVar1;
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      F_00b1aec0();
      F_00406ad0(iVar1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar3 + -1;
  } while (iVar1 != 0);
  this_00 = (undefined *)((int)this + 0x210);
  iVar3 = iVar3 + 1;
  do {
    this_00 = (undefined *)((int)this_00 + -0x78);
    F_00bc5760(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00a19c40((undefined *)((int)this + 8));
  return 0;
}

/* ref: FUN_00a1a510 */
uint F_00a1a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1a510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  puVar3 = ((undefined4 *)GEN_TOP((&REFG(undefined * PTR32, 0x1333ac0))[param_2]));
  puVar4 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x20)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
  F_00a19bb0(((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x58)),param_4,param_3);
  (*(undefined4 *)(gen_frame + 0x60)) = param_4;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = param_5;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = param_6;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  bVar1 = F_00b1aef0(param_1,((undefined4 *)(gen_frame + 0x8)),0xa0,0,1);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a1a5d0 */
uint F_00a1a5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1a5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined * PTR32 * ppuVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  if (param_4 < 0x30001) {
    ppuVar4 = &REFG(undefined * PTR32, 0x133da80);
    puVar5 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x58)) = param_4;
    (*(int *)(gen_frame + 0x5c)) = param_4 >> 0x1f;
    (*(int *)(gen_frame + 0x60)) = param_3;
    (*(int *)(gen_frame + 0x64)) = param_3 >> 0x1f;
    (*(int *)(gen_frame + 0x6c)) = param_2 >> 0x1f;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x68)) = param_2;
    bVar1 = F_00b1aef0(param_1,((undefined4 *)(gen_frame + 0x8)),0xa0,0,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) goto LAB_00a1a67f;
  }
  uVar6 = F_00c46aa0(param_2,param_3,param_4);
  uVar2 = (uint)uVar6;
LAB_00a1a67f: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar2;
}

/* ref: FUN_00a1a690 */
uint F_00a1a690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * PTR32 * ppuVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar1 = *param_2;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  ppuVar5 = &REFG(undefined * PTR32, 0x133dbc0);
  puVar4 = ((undefined4 *)(gen_frame + 0x18));
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *ppuVar5;
    ppuVar5 = ppuVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar6 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68)) = param_2;
  (*(int *)(gen_frame + 0x6c)) = (int)((int)(uintptr_t)param_2) >> 0x1f;
  if (uVar1 == 0) {
    (*(int *)(gen_frame + 0x14)) = 0;
  }
  else {
    do {
      (*(uint *)(gen_frame + 0x70)) = uVar6;
      uVar6 = uVar6 + 1 + uVar1 / 6;
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0x84)) = (*(int *)(gen_frame + 0x14)) >> 0x1f;
      (*(undefined4 *)(gen_frame + 0x74)) = 0;
      (*(uint *)(gen_frame + 0x78)) = uVar6;
      (*(undefined4 *)(gen_frame + 0x7c)) = 0;
      (*(int *)(gen_frame + 0x88)) = param_3;
      (*(int *)(gen_frame + 0x8c)) = param_3 >> 0x1f;
      uVar2 = uVar6;
      if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
        F_00b1aef0(param_1,((undefined4 *)(gen_frame + 0x18)),0xa0,(*(int *)(gen_frame + 0x4)),1);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        uVar2 = (*(uint *)(gen_frame + 0x10));
      }
      (*(uint *)(gen_frame + 0x10)) = uVar2;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    } while (uVar6 < uVar1);
    if (5 < (*(int *)(gen_frame + 0x14))) goto LAB_00a1a7ff;
  }
  puVar4 = (undefined4 *)((*(int *)(gen_frame + 0x14)) * 0x10100 + 4 + param_3);
  iVar3 = 6 - (*(int *)(gen_frame + 0x14));
  do {
    *puVar4 = 1;
    puVar4 = puVar4 + 0x4040;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
LAB_00a1a7ff: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00a1a820 */
uint F_00a1a820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return *param_2;
}

/* ref: FUN_00a1a830 */
uint F_00a1a830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  uint * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint * puVar8;
  
  ((uint *)(gen_frame + 0x58))[0x14] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = (uint)*(ushort *)(param_2 + 0x40);
  ppuVar4 = &REFG(undefined * PTR32, 0x133dc60);
  puVar6 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  ((uint *)(gen_frame + 0x58))[0] = uVar1;
  ((uint *)(gen_frame + 0x58))[1] = 0;
  uVar7 = 1;
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_2 + 0x4c);
    do {
      ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2)] = uVar3;
      ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2 + 1)] = (int)uVar3 >> 0x1f;
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 + 0x120;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    if (9 < uVar7) goto LAB_00a1a8cd;
  }
  ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2)] = 0;
  ((uint *)(gen_frame + 0x58))[(int)(uVar7 * 2 + 1)] = 0;
  puVar5 = ((uint *)(gen_frame + 0x58)) + uVar7 * 2;
  puVar8 = ((uint *)(gen_frame + 0x58)) + uVar7 * 2 + 2;
  for (iVar2 = (9 - uVar7 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
LAB_00a1a8cd: ;
  F_00b1aef0(param_1,((undefined4 *)(gen_frame + 0x8)),0xa0,param_3,1);
  F_00c47745(((uint *)(gen_frame + 0x58))[0x14] ^ (uint)(uint)(gen_frame + 0xac));
  return param_2;
}

/* ref: FUN_00a1a900 */
uint F_00a1a900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1a900u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined * PTR32 * ppuVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  ppuVar6 = &REFG(undefined * PTR32, 0x133dad0);
  puVar7 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *ppuVar6;
    ppuVar6 = ppuVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar2 = *(uint *)(param_2 + 0x40);
  (*(int *)(gen_frame + 0x58)) = param_2;
  (*(int *)(gen_frame + 0x5c)) = param_2 >> 0x1f;
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar5 = 1;
    do {
      uVar1 = uVar3 + 1 + uVar2 / 0x1e;
      (*(uint *)(gen_frame + 0x60)) = uVar3;
      uVar3 = uVar1;
      if (uVar2 <= uVar1) {
        uVar3 = uVar2;
      }
      (*(undefined4 *)(gen_frame + 0x64)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(uint *)(gen_frame + 0x68)) = uVar3;
      F_00b1aef0(param_1,((undefined4 *)(gen_frame + 0x8)),0xa0,uVar5 & 0xf,1);
      uVar5 = uVar5 + 1;
    } while (uVar3 < uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar3;
}

/* ref: FUN_00a1a9d0 */
uint F_00a1a9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined * PTR32 * ppuVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  ppuVar3 = &REFG(undefined * PTR32, 0x133da30);
  puVar4 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x60)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x64)) = param_2[3];
  (*(undefined4 *)(gen_frame + 0x68)) = param_2[4];
  (*(undefined4 *)(gen_frame + 0x6c)) = param_2[5];
  (*(undefined4 *)(gen_frame + 0x70)) = param_2[6];
  (*(undefined4 *)(gen_frame + 0x74)) = param_2[7];
  bVar1 = F_00b1aef0(param_1,((undefined4 *)(gen_frame + 0x8)),0xa0,param_3,1);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a1aa70 */
unsigned int F_00a1aa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1aa70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00a1aa80 */
uint F_00a1aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1aa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  undefined * PTR32 * ppuVar5;
  undefined4 * puVar6;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar1 = param_2 + *param_2 * 0x820 + 0x20;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  piVar3 = param_2;
  if (0 < *piVar1) {
    ppuVar5 = &REFG(undefined * PTR32, 0x133d9e0);
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    (*(undefined2 *)(gen_frame + 0x20)) = 8;
    (*(undefined4 *)(gen_frame + 0x28)) = 1;
    (*(uint *)(gen_frame + 0x2c)) = *piVar1 * 0x20 + 0xffU & 0xffffff80;
    F_00a19bb0(((undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x58)),(uint)((short)*piVar1 * 0x20 + 0xffU & 0xff80),piVar1);
    (*(int *)(gen_frame + 0x64)) = (int)((int)(uintptr_t)piVar1) >> 0x1f;
    (*(int * PTR32 *)(gen_frame + 0x60)) = piVar1;
    piVar1[1] = 1;
    bVar2 = F_00b1aef0(param_1,((undefined4 *)(gen_frame + 0x8)),0xa0,piVar1[2],1);
    piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)piVar3;
}

/* ref: FUN_00a1ab70 */
byte F_00a1ab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1ab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if (*(char *)((int)this + param_1 * 0x78 + 0xc0) != '\0') {
    return 0;
  }
  F_00bc57a0((undefined *)((int)this + param_1 * 0x78 + 0xa8),this,(&REFG(undefined * PTR32, 0x1333b2c))[param_1],param_1
               ,param_2 + 0xfU & 0xfffffff0,param_3,param_4 + 0xfU & 0xfffffff0,param_5);
  return 1;
}

/* ref: FUN_00a1abd0 */
uint F_00a1abd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1abd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  uVar3 = 0;
  piVar1 = (int *)((int)this + 0x2c);
  do {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 1;
    UNLOCK();
  } while (iVar2 != 0);
  piVar5 = (int *)((int)this + 0x30);
  uVar4 = 0;
  do {
    if (*piVar5 != 0) {
      uVar3 = *(uint *)((int)this + uVar4 * 4 + 0x30);
      *(undefined4 *)((int)this + uVar4 * 4 + 0x30) = 0;
      break;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (uVar4 < 0xf);
  LOCK();
  *piVar1 = 0;
  UNLOCK();
  return uVar3;
}

/* ref: FUN_00a1ac10 */
uint F_00a1ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  
  puVar1 = (uint *)((int)this + 0x2c);
  do {
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = 1;
    UNLOCK();
  } while (uVar2 != 0);
  piVar3 = (int *)((int)this + 0x30);
  uVar2 = 0;
  do {
    if (*piVar3 == 0) {
      *(undefined4 *)((int)this + uVar2 * 4 + 0x30) = param_1;
      break;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar2 < 0xf);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  return uVar2;
}

/* ref: FUN_00a1ac50 */
uint F_00a1ac50(unsigned int gen_a0)
{
  GEN_ENTER(0xa1ac50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  undefined4 * _Dst;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  undefined * PTR32 * ppuVar8;
  undefined4 * puVar9;
  
  _Dst = (undefined4 *)F_00406bb0(0xa0,0,0x10);
  puVar3 = (undefined4 *)F_00406bb0(0x100,0,0x10);
  puVar4 = (undefined4 *)F_00406bb0(0x100,0,0x10);
  F_00c48350(_Dst,0,0xa0);
  *puVar3 = 0;
  *puVar4 = 0;
  F_00c49908(puVar3,0x100,"aiueo");
  ppuVar8 = &REFG(undefined * PTR32, 0x133d490);
  puVar9 = _Dst;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *ppuVar8;
    ppuVar8 = ppuVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)(_Dst + 6) = 8;
  _Dst[8] = 0;
  _Dst[9] = 0x100;
  F_00a19bb0(_Dst,_Dst + 0x14,0x100,puVar3);
  _Dst[0x18] = puVar4;
  _Dst[0x16] = 0x100;
  _Dst[0x17] = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0x100;
  _Dst[0x1b] = 0;
  this_00 = (undefined *)F_004fe750(this);
  bVar2 = F_00b1aef0(this_00,_Dst,0xa0,0,1);
  if (bVar2 != 0) {
    F_00b1af80(this_00);
  }
  piVar1 = (int *)((int)this + 0x2c);
  do {
    LOCK();
    iVar6 = *piVar1;
    *piVar1 = 1;
    UNLOCK();
  } while (iVar6 != 0);
  piVar7 = (int *)((int)this + 0x30);
  uVar5 = 0;
  do {
    if (*piVar7 == 0) {
      *(undefined * PTR32 *)((int)this + uVar5 * 4 + 0x30) = this_00;
      break;
    }
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar5 < 0xf);
  LOCK();
  *piVar1 = 0;
  UNLOCK();
  F_00406b30(puVar3);
  F_00406b30(puVar4);
  F_00406b30(_Dst);
  return 0xffffffff;
}

/* ref: FUN_00a1ade0 */
uint F_00a1ade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  uVar1 = param_1[7];
  *(uint *)((int)this + 0x1c) = uVar1;
  return uVar1;
}

/* ref: Client::System::Task::SpursManager::vf0 */
uint F_00a1ae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ae40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a1a4b0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a1ae70 */
uint F_00a1ae70(void)
{
  GEN_ENTER(0xa1ae70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  gen_imp_GetTimeZoneInformation(((undefined *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (*(LONG *)((char *)((undefined *)(gen_frame + 0xc)))) * 0x3c;
}

/* ref: FUN_00a1aeb0 */
uint F_00a1aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  gen_imp_GetLocalTime((GEN_LPANY)((byte *)(gen_frame + 0x8)));
  uVar1 = F_00c472af(param_1,param_2,"%04d/%02d/%02d %02d:%02d:%02d.%03d",(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 0))
                     ,(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 2)),(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 6)),
                     (uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 10)),
                     (uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),(uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 14)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00a1af40 */
uint F_00a1af40(unsigned int gen_a0)
{
  GEN_ENTER(0xa1af40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar3;
  if (REFG(undefined4, 0x14a2af8) == 0 && *(int *)&REFG(undefined, 0x14a2afc) == 0) {
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
    if (BVar1 != 0) {
      REFG(undefined4, 0x14a2af8) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
      *(int *)&REFG(undefined, 0x14a2afc) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
      uVar3 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar3;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a1afb0 */
uint F_00a1afb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1afb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  __time64_t _Var3;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    iVar1 = (int)_Var3;
  }
  ((int *)(gen_frame + 0x4))[0] = iVar1;
  ((int *)(gen_frame + 0x4))[1] = 0;
  uVar2 = F_00c4f4ca(&REFG(undefined4, 0x14a2ad4),((int *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_00a1b070 */
uint F_00a1b070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1b070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x48c);
  if (iVar1 == *(int *)((int)this + 0x490)) {
    *(undefined2 *)param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  uVar2 = *(undefined4 *)((int)this + iVar1 * 8 + 0x284);
  uVar3 = *(undefined4 *)((int)this + iVar1 * 8 + 0x288);
  if (((char)param_2 != '\0') && (iVar1 != *(int *)((int)this + 0x490))) {
    *(uint *)((int)this + 0x48c) = iVar1 + 1U & 0x3f;
  }
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00a1b0d0 */
uint F_00a1b0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined1 *)this = 0;
  iVar2 = 0x3f;
  puVar1 = (undefined4 *)((int)this + 0x288);
  do {
    *(undefined2 *)(puVar1 + -1) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined2 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  puVar1 = this;
  for (iVar2 = 0xa0; puVar1 = puVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
  }
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  return (uint)this;
}

/* ref: FUN_00a1b170 */
uint F_00a1b170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b8a2f0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a1b180 */
unsigned int F_00a1b180(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00b8a310(param_1);
  return 0;
}

/* ref: FUN_00a1b190 */
uint F_00a1b190(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b190u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  *in_ecx = 0;
  in_ecx[8] = 0;
  in_ecx[1] = 0;
  in_ecx[9] = 0;
  in_ecx[2] = 0;
  in_ecx[10] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a1b1c0 */
uint F_00a1b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = ~param_2;
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & uVar1;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & uVar1;
    *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) & uVar1;
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & uVar1;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a1b200 */
byte F_00a1b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)this;
  do {
    if (*(int *)this != *(int *)(iVar2 + (int)this)) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    this = (undefined *)((int)this + 4);
  } while (iVar1 < 3);
  return 0;
}

/* ref: FUN_00a1b230 */
byte F_00a1b230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((((*(int *)((int)this + 0xc) == *(int *)(param_1 + 0xc)) &&
       (*(int *)((int)this + 0x10) == *(int *)(param_1 + 0x10))) &&
      (*(int *)((int)this + 0x18) == *(int *)(param_1 + 0x18))) &&
     (*(int *)((int)this + 0x1c) == *(int *)(param_1 + 0x1c))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a1b270 */
uint F_00a1b270(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b270u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x4)),param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x4)));
  F_004087f0(((undefined1 *)(gen_frame + 0x4)));
  return uVar3;
}

/* ref: FUN_00a1b2b0 */
uint F_00a1b2b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1b2b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  param_1[3] = param_2[3];
  return (uint)param_1;
}

/* ref: FUN_00a1b2e0 */
uint F_00a1b2e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1b2e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1088100);
  fVar2 = (float10)(*(float *)&gen_args[2]);
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC((fVar2 * (((float10)GEN_TOD(*(*(byte * PTR32 *)&gen_args[1]))) / fVar1)) * fVar1);
  *(*(undefined1 * PTR32 *)&gen_args[0]) = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC(((((float10)GEN_TOD((*(byte * PTR32 *)&gen_args[1])[1])) / fVar1) * fVar2) * fVar1);
  (*(undefined1 * PTR32 *)&gen_args[0])[1] = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) = (undefined1)(int)TRUNC(fVar1 * ((((float10)GEN_TOD((*(byte * PTR32 *)&gen_args[1])[2])) / fVar1) * fVar2));
  (*(undefined1 * PTR32 *)&gen_args[0])[2] = (*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0));
  (*(undefined1 * PTR32 *)&gen_args[0])[3] = (*(byte * PTR32 *)&gen_args[1])[3];
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00a1b390 */
uint F_00a1b390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_004eeed0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a1b3b0 */
uint F_00a1b3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_004ef0c0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a1b3d0 */
float10 F_00a1b3d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1b3d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 extraout_ST1;
  
  fVar1 = (float)((float10)1 / (float10)param_2);
  fVar3 = (float10)REFG(double, 0x1088108) / (float10)fVar1;
  dVar2 = (double)((float)GEN_TOF(((fVar3 + (float10)*(float *)param_1) * (float10)fVar1)));
  fVar4 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  *(float *)param_1 = (float)((float10)(float)fVar4 / (float10)fVar1);
  dVar2 = (double)((float)GEN_TOF((((float10)*(float *)(param_1 + 8) + (float10)(double)fVar3) *
                         (float10)fVar1)));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  *(float *)(param_1 + 8) = (float)((float10)(float)fVar3 / (float10)fVar1);
  return extraout_ST1;
}

/* ref: FUN_00a1b450 */
uint F_00a1b450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a1b470 */
uint F_00a1b470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a1b490 */
uint F_00a1b490(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b490u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  if ((*param_1 & 2) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = *param_1 >> 2;
    uVar2 = uVar1 & 0x3f;
    if ((uVar1 & 0x20) != 0) {
      return uVar2 - 0x40;
    }
  }
  return uVar2;
}

/* ref: FUN_00a1b4c0 */
unsigned int F_00a1b4c0(float gen_a0)
{
  GEN_ENTER(0xa1b4c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a1b4e0 */
unsigned int F_00a1b4e0(float gen_a0)
{
  GEN_ENTER(0xa1b4e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a1b530 */
uint F_00a1b530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  *(undefined4 *)(in_ecx + 8) = 3;
  return param_2;
}

/* ref: FUN_00a1b550 */
uint F_00a1b550(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00a1b570 */
uint F_00a1b570(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00a1b580 */
byte F_00a1b580(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) == 4;
}

/* ref: FUN_00a1b590 */
uint F_00a1b590(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00a1b5a0 */
uint F_00a1b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b5a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  this = (undefined *)piVar1[2];
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 8) == 0xffff)) {
    F_005f0fd0(this,piVar1);
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *param_1 = 0;
  }
  return uVar3;
}

/* ref: FUN_00a1b5f0 */
uint F_00a1b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 4))((int *)*param_1);
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  REFG(int, 0x1379cb4) = REFG(int, 0x1379cb4) + -1;
  return uVar2;
}

/* ref: FUN_00a1b620 */
uint F_00a1b620(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b620u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 4))((int *)*param_1);
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  REFG(int, 0x1379cb8) = REFG(int, 0x1379cb8) + -1;
  return uVar2;
}

/* ref: FUN_00a1b650 */
unsigned int F_00a1b650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b650u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = REFG(float, 0x1087f04);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1088100);
  fVar4 = (float10)*(float *)(param_2 + 4);
  *param_1 = ((float)GEN_TOF((fVar4 * ((float10)*param_2 / fVar3))));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[1] / fVar3) * fVar4)));
  bVar1 = param_2[2];
  param_1[3] = fVar2;
  param_1[2] = ((float)GEN_TOF((((float10)bVar1 / fVar3) * fVar4)));
  return 0;
}

/* ref: FUN_00a1b6b0 */
uint F_00a1b6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b6b0u, gen_a0, 0u, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}

/* ref: FUN_00a1b6e0 */
uint F_00a1b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = (char)(param_2 >> 0x18);
  param_1[1] = (char)(param_2 >> 0x10);
  param_1[2] = (char)(param_2 >> 8);
  param_1[3] = (char)param_2;
  return param_2;
}

/* ref: FUN_00a1b710 */
uint F_00a1b710(void)
{
  GEN_ENTER(0xa1b710u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1379694);
}

/* ref: FUN_00a1b740 */
uint F_00a1b740(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b740u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x14a9a1c))[uVar1] == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 100);
  return 0xffffffff;
}

/* ref: FUN_00a1b770 */
uint F_00a1b770(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a9a1c))[uVar2])) != (undefined *)0x0) {
      uVar1 = F_00a5f500(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a9a1c))[uVar2])));
      if (uVar1 == param_1) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 100);
  return 0xffffffff;
}

/* ref: FUN_00a1b7b0 */
uint F_00a1b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = 0;
  while ((pvVar1 = (undefined *)F_00b79f30(&REFG(undefined, 0x14c5798),iVar3), pvVar1 == (undefined *)0x0 ||
         (uVar2 = F_00a5f500(pvVar1), uVar2 != param_1))) {
    iVar3 = iVar3 + 1;
    if (0x3b < iVar3) {
      puVar4 = &REFG(undefined4, 0x14a9a1c);
      while ((pvVar1 = (undefined *)*puVar4, pvVar1 == (undefined *)0x0 ||
             (uVar2 = F_00a5f500(pvVar1), uVar2 != param_1))) {
        puVar4 = puVar4 + 1;
        if (0x14a9bab < (int)puVar4) {
          return 0;
        }
      }
      return (uint)pvVar1;
    }
  }
  return (uint)pvVar1;
}

/* ref: FUN_00a1b820 */
uint F_00a1b820(unsigned int gen_a0)
{
  GEN_ENTER(0xa1b820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = 0;
  while ((uVar1 = F_00b79f30(&REFG(undefined, 0x14c5798),iVar3), uVar1 == 0 ||
         (*(int *)(uVar1 + 0x78) != param_1))) {
    iVar3 = iVar3 + 1;
    if (0x3b < iVar3) {
      puVar2 = &REFG(undefined4, 0x14a9a1c);
      while ((uVar1 = *puVar2, uVar1 == 0 || (*(int *)(uVar1 + 0x78) != param_1))) {
        puVar2 = puVar2 + 1;
        if (0x14a9bab < (int)puVar2) {
          return 0;
        }
      }
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00a1b870 */
uint F_00a1b870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0xc: ;
  case 0x2d: ;
    uVar1 = F_00b79f30(&REFG(undefined, 0x14c5798),param_2);
    return uVar1;
  default: ;
    return 0;
  case 0xe: ;
    uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878),param_2);
    return uVar1;
  case 0x10: ;
    uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878),param_2);
    return uVar1;
  }
}

/* ref: FUN_00a1b920 */
byte F_00a1b920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b920u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *param_1 = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 1) = *param_2;
  bVar1 = param_2[8];
  *(byte *)((int)param_1 + 3) = bVar1;
  return bVar1;
}

/* ref: FUN_00a1b940 */
uint F_00a1b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1b940u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  pcVar4 = param_2;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (char)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[4] = (char)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[1] = (char)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  for (; ((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (cVar1 != '/'));
      pcVar4 = pcVar4 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[2] = (char)uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00a1ba50 */
uint F_00a1ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar4 = 0;
  for (pcVar3 = param_2; ((cVar1 = *pcVar3, cVar1 != '\0' || (uVar4 < 0x100)) && (cVar1 != '/'));
      pcVar3 = pcVar3 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar4 = uVar4 + 1;
  }
  *pcVar2 = '\0';
  uVar4 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (short)uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar4;
}

/* ref: FUN_00a1bac0 */
uint F_00a1bac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bac0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  pcVar4 = param_2;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[1] = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  for (; ((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (cVar1 != '/'));
      pcVar4 = pcVar4 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[2] = (short)uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00a1bba0 */
ushort F_00a1bba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)(param_2 + 0x54);
  param_1[1] = *(undefined2 *)(param_2 + 0x56);
  uVar1 = *(ushort *)(param_2 + 0x58);
  param_1[2] = uVar1;
  return uVar1;
}

/* ref: FUN_00a1bbd0 */
uint F_00a1bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  pcVar4 = param_2;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  *param_1 = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[1] = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  while (((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (pcVar4 = pcVar4 + 1, cVar1 != '/')
         )) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[2] = (short)uVar3;
  pcVar2 = ((char *)(gen_frame + 0x8));
  uVar3 = 0;
  for (; ((cVar1 = *pcVar4, cVar1 != '\0' || (uVar3 < 0x100)) && (cVar1 != '/'));
      pcVar4 = pcVar4 + 1) {
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  *pcVar2 = '\0';
  uVar3 = F_00c4c74c(((char *)(gen_frame + 0x8)));
  param_1[3] = (short)uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00a1bce0 */
ushort F_00a1bce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bce0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)(param_2 + 0x54);
  param_1[1] = *(undefined2 *)(param_2 + 0x56);
  param_1[2] = *(undefined2 *)(param_2 + 0x58);
  uVar1 = *(ushort *)(param_2 + 0x5a);
  param_1[3] = uVar1;
  return uVar1;
}

/* ref: FUN_00a1bd10 */
ushort F_00a1bd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1bd10u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  return uVar1;
}

/* ref: FUN_00a1bd40 */
uint F_00a1bd40(unsigned int gen_a0)
{
  GEN_ENTER(0xa1bd40u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  char * pcVar4;
  byte * pbVar5;
  bool bVar6;
  
  pbVar2 = &REFG(undefined1, 0x10e387c);
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a1bd70: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a1bd75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a1bd70;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a1bd75: ;
  if (iVar3 == 0) {
    return 1;
  }
  pcVar4 = "ProxyActor";
  pbVar5 = param_1;
  while( true ) {
    bVar1 = *pcVar4;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pcVar4[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pcVar4 = pcVar4 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (uint)(1 - bVar6 != (uint)(bVar6 != 0));
}

/* ref: FUN_00a1be10 */
byte F_00a1be10(void)
{
  GEN_ENTER(0xa1be10u, 0u, 0u, 0u, 0u);
  DWORD DVar1;
  DWORD DVar2;
  
  if (REFG(int, 0x1375a1c) != 0) {
    DVar1 = *(DWORD *)(REFG(int, 0x1375a1c) + 4);
    DVar2 = gen_imp_GetCurrentThreadId();
    return DVar1 == DVar2;
  }
  return 0;
}

/* ref: FUN_00a1be30 */
byte F_00a1be30(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xa1be30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  double dVar1;
  
  dVar1 = (double)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    dVar1 = (double)param_2;
    if (!(REFG(double, 0x10909a8) <= dVar1)) {
      return 0;
    }
    if ((dVar1 <= REFG(double, 0x10909a0)) && (!GEN_ISNAN(dVar1))) {
      dVar1 = (double)param_3;
      if ((REFG(double, 0x10909a8) <= dVar1) && ((dVar1 <= REFG(double, 0x10909a0) && (!GEN_ISNAN(dVar1))))) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a1beb0 */
byte F_00a1beb0(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa1beb0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  double dVar1;
  byte bVar2;
  
  dVar1 = (double)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    dVar1 = (double)param_2;
    if (!(REFG(double, 0x10909a8) <= dVar1)) {
      return 0;
    }
    if ((dVar1 <= REFG(double, 0x10909a0)) && (!GEN_ISNAN(dVar1))) {
      dVar1 = (double)param_3;
      if (((REFG(double, 0x10909a8) <= dVar1) && ((dVar1 <= REFG(double, 0x10909a0) && (!GEN_ISNAN(dVar1))))) &&
         (bVar2 = F_00a200d0(param_4), bVar2 != 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a1bf40 */
uint F_00a1bf40(unsigned int gen_a0)
{
  GEN_ENTER(0xa1bf40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  double dVar1;
  
  dVar1 = (double)*(float *)param_1;
  if (((REFG(double, 0x10909a8) <= dVar1) && (dVar1 <= REFG(double, 0x10909a0))) && (!GEN_ISNAN(dVar1))) {
    dVar1 = (double)*(float *)(param_1 + 4);
    if (!(REFG(double, 0x10909a8) <= dVar1)) {
      return 0;
    }
    if ((dVar1 <= REFG(double, 0x10909a0)) && (!GEN_ISNAN(dVar1))) {
      dVar1 = (double)*(float *)(param_1 + 8);
      if ((REFG(double, 0x10909a8) <= dVar1) && ((dVar1 <= REFG(double, 0x10909a0) && (!GEN_ISNAN(dVar1))))) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a1bfd0 */
uint F_00a1bfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1bfd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a1bf40(param_1);
  if ((char)uVar2 != '\0') {
    uVar2 = F_00a1bf40(param_1 + 0x20);
    if ((char)uVar2 != '\0') {
      bVar1 = F_00a1beb0(*(float *)(param_1 + 0x10),*(float *)(param_1 + 0x14),
                           *(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a1c030 */
uint F_00a1c030(unsigned int gen_a0)
{
  GEN_ENTER(0xa1c030u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00a1be30(*param_1,param_1[1],param_1[2]);
  if (bVar1 != 0) {
    bVar1 = F_00a1be30(param_1[3],param_1[4],param_1[5]);
    if (bVar1 != 0) {
      bVar1 = F_00a1be30(param_1[6],param_1[7],param_1[8]);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a1c3a0 */
uint F_00a1c3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1c3a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  uint uVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)*(float *)(param_1 + 8) +
                 ((float10)*(float *)param_1 * (float10)*(float *)param_1 +
                 (float10)*(float *)(param_1 + 4) * (float10)*(float *)(param_1 + 4)))));
  uVar2 = (uint)CONCAT21((short)(param_1 >> 0x10),GEN_ISNAN((float10)fVar1) << 2) << 8 | 0x4200;
  if (!GEN_ISNAN((float10)fVar1)) {
    uVar2 = (uint)gen_fl2bits(fVar1) & 0x7e000000;
    if (uVar2 != 0x7e000000) {
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0])))) && !(fVar1 <= ((float)GEN_TOF((*(float (*)[1])REFP(0x10de524))[0]))))
      {
        return 1;
      }
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a1c450 */
uint F_00a1c450(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1c450u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *param_1 = 0;
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  param_1[2] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a1c470 */
uint F_00a1c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1c470u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080220);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *param_1 = ((float)GEN_TOF((((float10)*param_2 * fVar1) / fVar2)));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[1] * fVar1) / fVar2)));
  param_1[2] = ((float)GEN_TOF(((fVar1 * (float10)param_2[2]) / fVar2)));
  return (uint)param_2;
}

/* ref: FUN_00a1c4b0 */
uint F_00a1c4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1c4b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1080220);
  *param_1 = ((float)GEN_TOF((((float10)*param_2 * fVar1) / fVar2)));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[1] * fVar1) / fVar2)));
  param_1[2] = ((float)GEN_TOF(((fVar1 * (float10)param_2[2]) / fVar2)));
  return (uint)param_2;
}

/* ref: FUN_00a1c4f0 */
uint F_00a1c4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1c4f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar1 = param_2[0xc];
  (*(float *)(gen_frame + 0x0)) = *param_2;
  fVar2 = param_2[0xd];
  (*(float *)(gen_frame + 0x4)) = param_2[1];
  fVar3 = param_2[0xe];
  (*(float *)(gen_frame + 0x8)) = param_2[2];
  fVar8 = (float10)param_2[1];
  fVar9 = (float10)*param_2;
  fVar10 = (float10)param_2[2];
  fVar4 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  (*(float *)(gen_frame + 0x0)) = param_2[4];
  (*(float *)(gen_frame + 0x4)) = param_2[5];
  (*(float *)(gen_frame + 0x8)) = param_2[6];
  fVar8 = (float10)param_2[5];
  fVar9 = (float10)param_2[4];
  fVar10 = (float10)param_2[6];
  fVar5 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar5 = ((float)GEN_TOF(SQRT((float10)fVar5)));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  (*(float *)(gen_frame + 0x0)) = param_2[8];
  (*(float *)(gen_frame + 0x4)) = param_2[9];
  (*(float *)(gen_frame + 0x8)) = param_2[10];
  fVar8 = (float10)param_2[9];
  fVar9 = (float10)param_2[8];
  fVar10 = (float10)param_2[10];
  fVar6 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
  (*(float *)(gen_frame + 0x1c)) = fVar6;
  fVar6 = ((float)GEN_TOF(SQRT((float10)fVar6)));
  (*(float *)(gen_frame + 0x1c)) = fVar6;
  F_00a1fde0((uint)((undefined1 *)(gen_frame + 0x20)),(uint)param_2);
  F_004eeed0(&(*(float *)(gen_frame + 0x0)),(uint)((undefined1 *)(gen_frame + 0x20)));
  fVar7 = (*(float *)(gen_frame + 0x4));
  *param_1 = fVar1;
  param_1[4] = (*(float *)(gen_frame + 0x0));
  param_1[1] = fVar2;
  param_1[5] = (*(float *)(gen_frame + 0x4));
  param_1[6] = (*(float *)(gen_frame + 0x8));
  param_1[2] = fVar3;
  param_1[7] = (*(float *)(gen_frame + 0xc));
  param_1[10] = fVar6;
  param_1[8] = fVar4;
  param_1[9] = fVar5;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)gen_fl2bits(fVar7);
}

/* ref: FUN_00a1c690 */
byte F_00a1c690(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1c690u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  byte bVar2;
  
  (*(undefined4 *)(gen_frame + 0x54)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x58)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x5c)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x60)) = param_1[4];
  (*(undefined4 *)(gen_frame + 0x64)) = param_1[5];
  (*(undefined4 *)(gen_frame + 0x68)) = param_1[6];
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
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  bVar2 = F_00551500(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x60)),param_2,
                       1);
  if (bVar2 != 0) {
    *param_3 = (*(undefined4 *)(gen_frame + 0x8));
    param_3[1] = (*(undefined4 *)(gen_frame + 0xc));
    param_3[2] = (*(undefined4 *)(gen_frame + 0x10));
    if (param_4 != (undefined4 *)0x0) {
      F_00c9f380(&(*(undefined4 *)(gen_frame + 0x8)),param_4,param_4 + 1,param_4 + 2);
    }
    return 1;
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  uVar1 = REFG(float, 0x1087f04);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    param_4[1] = uVar1;
    param_4[2] = 0;
  }
  return 0;
}

/* ref: FUN_00a1c7d0 */
uint F_00a1c7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1c7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 uVar3;
  uint uVar4;
  float10 fVar5;
  
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x58)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(REFG(int, 0x137104c) + 0x25e0);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = param_1[2];
  uVar4 = 0;
  while( true ) {
    (*(float *)(gen_frame + 0x68)) = *(float *)((int)&REFG(float, 0x10e38a8) + uVar4);
    fVar5 = (float10)*(float *)((int)&REFG(float, 0x10e38a8) + uVar4);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(float *)(gen_frame + 0x5c)) = (float)(fVar5 + ((float10)GEN_TOD(gen_bits2f(param_1[1]))));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x68)) = (float)(fVar5 + fVar5);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    bVar2 = F_00551500((*(undefined4 *)(gen_frame + 0x64)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x58)),&(*(undefined4 *)(gen_frame + 0x4c)),(float)(fVar5 + fVar5),1);
    if (bVar2 != 0) break;
    uVar4 = uVar4 + 4;
    if (0x13 < uVar4) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        param_3[1] = param_1[1];
        param_3[2] = param_1[2];
      }
      uVar1 = REFG(float, 0x1087f04);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
        param_4[1] = uVar1;
        param_4[2] = 0;
      }
      return (uint)param_4 & 0xffffff00;
    }
  }
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  uVar3 = extraout_var;
  if (param_4 != (undefined4 *)0x0) {
    F_00c9f380(&(*(undefined4 *)(gen_frame + 0x0)),param_4,param_4 + 1,param_4 + 2);
    uVar3 = extraout_var_00;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (*(undefined4 *)(gen_frame + 0x58));
    param_2[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c)));
    param_2[2] = (*(undefined4 *)(gen_frame + 0x60));
  }
  if (param_3 == (undefined4 *)0x0) {
    return CONCAT31(uVar3,1);
  }
  *param_3 = (*(undefined4 *)(gen_frame + 0x0));
  param_3[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_3[2] = (*(undefined4 *)(gen_frame + 0x8));
  return CONCAT31(uVar3,1);
}

/* ref: FUN_00a1cb90 */
uint F_00a1cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1cb90u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(param_2 + 0x40);
  (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(param_2 + 0x44);
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(param_2 + 0x48);
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  F_004ef9d0(&(*(undefined4 *)(gen_frame + 0x40)),param_2);
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  pfVar4 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x10)) = *pfVar4;
  (*(float *)(gen_frame + 0x80)) = *pfVar4;
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x14)) = pfVar4[1];
  (*(float *)(gen_frame + 0x18)) = pfVar4[2];
  (*(float *)(gen_frame + 0x84)) = pfVar4[1];
  (*(float *)(gen_frame + 0x88)) = pfVar4[2];
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  pfVar4 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  ((float *)(gen_frame + 0x90))[0] = *pfVar4;
  ((float *)(gen_frame + 0x90))[1] = pfVar4[1];
  ((float *)(gen_frame + 0x90))[2] = pfVar4[2];
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  ((float *)(gen_frame + 0x90))[4] = gen_bits2f(*puVar5);
  ((float *)(gen_frame + 0x90))[5] = gen_bits2f(puVar5[1]);
  (*(undefined4 *)(gen_frame + 0xa8)) = puVar5[2];
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
  puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xb0)) = *puVar5;
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xb4)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0xb8)) = puVar5[2];
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xc0)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0xc4)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0xc8)) = puVar5[2];
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xd0)) = *puVar5;
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xd4)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0xd8)) = puVar5[2];
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xe0)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0xe4)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0xe8)) = puVar5[2];
  (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  puVar5 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  fVar9 = (*(float *)(gen_frame + 0x18));
  fVar8 = (*(float *)(gen_frame + 0x14));
  fVar7 = (*(float *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0xf0)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0xf4)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0xf8)) = puVar5[2];
  (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x18));
  pfVar4 = ((float *)(gen_frame + 0x90)) + 2;
  iVar6 = 7;
  fVar10 = fVar9;
  fVar11 = fVar8;
  fVar12 = fVar7;
  do {
    fVar1 = pfVar4[-2];
    (*(float *)(gen_frame + 0x28)) = fVar1;
    if ((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x10))) {
      (*(float *)(gen_frame + 0x10)) = fVar1;
      fVar7 = fVar1;
    }
    fVar2 = pfVar4[-1];
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x14))) {
      (*(float *)(gen_frame + 0x14)) = fVar2;
      fVar8 = fVar2;
    }
    fVar3 = *pfVar4;
    (*(float *)(gen_frame + 0x2c)) = fVar3;
    if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x18))) {
      (*(float *)(gen_frame + 0x18)) = fVar3;
      fVar9 = fVar3;
    }
    if ((float10)(*(float *)(gen_frame + 0x30)) < (float10)fVar1) {
      (*(float *)(gen_frame + 0x30)) = fVar1;
      fVar12 = fVar1;
    }
    if ((float10)(*(float *)(gen_frame + 0x34)) < (float10)fVar2) {
      (*(float *)(gen_frame + 0x34)) = fVar2;
      fVar11 = fVar2;
    }
    if ((float10)(*(float *)(gen_frame + 0x38)) < (float10)fVar3) {
      (*(float *)(gen_frame + 0x38)) = fVar3;
      fVar10 = fVar3;
    }
    pfVar4 = pfVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *param_1 = fVar7;
  param_1[1] = fVar8;
  param_1[2] = fVar9;
  param_1[4] = fVar12;
  param_1[5] = fVar11;
  param_1[6] = fVar10;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)puVar5;
}

/* ref: FUN_00a1d0c0 */
uint F_00a1d0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1d0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 8))) {
  case 1: ;
    return *(uint *)((int)this + 0x10);
  case 2: ;
    uVar1 = F_00a1b870((uint)*(byte *)this,*(undefined4 *)((int)this + 0x10));
    return *(uint *)(uVar1 + 0xec);
  default: ;
    return 0;
  }
}

/* ref: FUN_00a1d100 */
uint F_00a1d100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa1d100u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int param_8 = (int)gen_a7;
  undefined * param_9 = (undefined *)(uintptr_t)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined * this;
  undefined * pvVar2;
  uint uVar3;
  
  if ((REFG(char, 0x1379c96) != '\0') &&
     ((((param_8 == 4 || (param_8 == 5)) || (param_8 == 6)) ||
      (((param_8 == 7 || (param_8 == 9)) || (param_8 == 8)))))) {
    return 0;
  }
  sVar1 = (short)param_1;
  if ((param_2 == 0) && (sVar1 != 0)) {
    if (sVar1 != -1) {
      return 0;
    }
  }
  else if ((sVar1 != -1) && ((sVar1 != 0 && (param_2 != 0)))) {
    (*(uint *)(gen_frame + 0x38)) = param_1 & 0xffff;
    this = param_9;
    if (param_9 == (undefined *)0x0) {
      this = (undefined *)F_005eee70(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),param_1);
    }
    goto LAB_00a1d1a7;
  }
  (*(uint *)(gen_frame + 0x38)) = 0xffff;
  this = (undefined *)F_005f2f30(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10));
LAB_00a1d1a7: ;
  uVar3 = param_2;
  if (param_2 == 0) {
    uVar3 = param_7 | 0xfffffc00;
  }
  (*(undefined2 *)(gen_frame + 0x32)) = *(undefined2 *)((int)this + 8);
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  (*(undefined2 *)(gen_frame + 0x30)) = 0x6fe;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined2 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined2 *)(gen_frame + 0x30));
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  (*(int *)(gen_frame + 0x24)) = param_8;
  (*(undefined2 *)(gen_frame + 0x28)) = 0x100;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  pvVar2 = (undefined *)F_00406b90(0xf0,0,0);
  if (pvVar2 == (undefined *)0x0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_005f3790(pvVar2);
  }
  F_005fcda0(pvVar2,&(*(undefined * PTR32 *)(gen_frame + 0xc)),param_4,param_6);
  if ((((short)(*(uint *)(gen_frame + 0x38)) == -1) && (param_8 != 9)) && (param_8 != 8)) {
    F_005f8840(this,pvVar2);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00a1d250 */
unsigned int F_00a1d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d250u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    *(undefined1 *)(param_1 + uVar3) = *((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x5c) + uVar3 + param_2)));
    *(undefined1 *)(param_1 + 1 + uVar3) =
         *((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x5c) + uVar3 + 1 + param_2)));
    uVar3 = uVar3 + 2;
  } while (uVar3 < 0x1a);
  iVar2 = *(int *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(iVar2 + 4 + param_2);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(iVar2 + param_2);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(iVar2 + 8 + param_2);
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x20 + param_2)));
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x22) = *puVar1;
  *(undefined1 *)(param_1 + 0x23) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x40 + param_2)));
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x26) = *puVar1;
  *(undefined1 *)(param_1 + 0x27) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x60 + param_2)));
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *puVar1;
  *(undefined1 *)(param_1 + 0x2b) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x80 + param_2)));
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x2e) = *puVar1;
  *(undefined1 *)(param_1 + 0x2f) = puVar1[8];
  iVar2 = *(int *)(param_2 + 100);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar2 + 4 + param_2);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(iVar2 + param_2);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(iVar2 + 8 + param_2);
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x20 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x36) = *puVar1;
  *(undefined1 *)(param_1 + 0x37) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x40 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x3a) = *puVar1;
  *(undefined1 *)(param_1 + 0x3b) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x80 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x42) = *puVar1;
  *(undefined1 *)(param_1 + 0x43) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x60 + *(int *)(param_2 + 100))));
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0x3e) = *puVar1;
  *(undefined1 *)(param_1 + 0x3f) = puVar1[8];
  return 0;
}

/* ref: FUN_00a1d3a0 */
unsigned int F_00a1d3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  *param_1 = *(undefined2 *)(param_2 + 0x5c);
  iVar2 = *(int *)(param_2 + 0x54);
  param_1[2] = *(undefined2 *)(iVar2 + 4 + param_2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(iVar2 + param_2);
  *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)(iVar2 + 8 + param_2);
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x20 + *(int *)(param_2 + 0x54))));
  param_1[4] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 5) = *puVar1;
  *(undefined1 *)((int)param_1 + 0xb) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x40 + *(int *)(param_2 + 0x54))));
  param_1[6] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 7) = *puVar1;
  *(undefined1 *)((int)param_1 + 0xf) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x60 + *(int *)(param_2 + 0x54))));
  param_1[8] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 9) = *puVar1;
  *(undefined1 *)((int)param_1 + 0x13) = puVar1[8];
  puVar1 = ((undefined1 *)GEN_TOP((param_2 + 0x80 + *(int *)(param_2 + 0x54))));
  param_1[10] = *(undefined2 *)(puVar1 + 4);
  *(undefined1 *)(param_1 + 0xb) = *puVar1;
  *(undefined1 *)((int)param_1 + 0x17) = puVar1[8];
  return 0;
}

/* ref: FUN_00a1d470 */
float10 F_00a1d470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float10 fVar2;
  float10 extraout_ST1;
  
  F_004ee9d0(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),in_eax);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = F_00c4d1fa((float10)fVar1);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
  *param_2 = (float)fVar2;
  return extraout_ST1;
}

/* ref: FUN_00a1d570 */
float10 F_00a1d570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float10 fVar2;
  float10 extraout_ST1;
  
  F_004f4130(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),in_eax);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = F_00c4d1fa((float10)fVar1);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
  *param_2 = (float)fVar2;
  return extraout_ST1;
}

/* ref: FUN_00a1d660 */
uint F_00a1d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1d660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1370b90);
  *param_1 = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
  uVar1 = *(uint *)(iVar2 + 0x94);
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_00a1d980 */
uint F_00a1d980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1d980u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  float10 fVar1;
  
  if ((char)param_6 == '\0') {
    fVar1 = F_00a1d780(param_5,param_4,REFG(float, 0x1087ef8));
  }
  else {
    fVar1 = F_00a1d840(param_5,param_4,REFG(float, 0x1087ef8));
  }
  fVar1 = (float10)(float)fVar1;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)) * fVar1)));
  return (uint)param_1;
}

/* ref: FUN_00a1da10 */
uint F_00a1da10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1da10u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint param_7 = (uint)gen_a6;
  F_00a1d980(param_1,param_2,param_3,(float)((float10)param_4 / (float10)param_5),param_6,param_7)
  ;
  return param_1;
}

/* ref: FUN_00a1da50 */
uint F_00a1da50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1da50u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  float10 fVar1;
  
  if ((char)param_6 == '\0') {
    fVar1 = F_00a1d780(param_5,param_4,REFG(float, 0x1087ef8));
  }
  else {
    fVar1 = F_00a1d840(param_5,param_4,REFG(float, 0x1087ef8));
  }
  F_009fac00(param_1,param_2,param_3,(float)fVar1);
  return param_1;
}

/* ref: FUN_00a1dab0 */
uint F_00a1dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1dab0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint param_7 = (uint)gen_a6;
  float10 fVar1;
  
  if ((char)param_7 == '\0') {
    fVar1 = F_00a1d780(param_6,(float)((float10)param_4 / (float10)param_5),REFG(float, 0x1087ef8));
  }
  else {
    fVar1 = F_00a1d840(param_6,(float)((float10)param_4 / (float10)param_5),REFG(float, 0x1087ef8));
  }
  F_009fac00(param_1,param_2,param_3,(float)fVar1);
  return param_1;
}

/* ref: FUN_00a1db10 */
uint F_00a1db10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa1db10u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  float10 fVar2;
  
  puVar1 = (undefined4 *)F_00a1d980(&(*(undefined4 *)(gen_frame + 0x0)),param_2,param_3,param_4,param_5,param_6);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  if ((char)param_6 == '\0') {
    fVar2 = F_00a1d780(param_5,param_4,REFG(float, 0x1087ef8));
  }
  else {
    fVar2 = F_00a1d840(param_5,param_4,REFG(float, 0x1087ef8));
  }
  (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
  F_009fac00(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0x10,param_3 + 0x10,(float)fVar2);
  param_1[4] = (*(undefined4 *)(gen_frame + 0x0));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[7] = (*(undefined4 *)(gen_frame + 0xc));
  puVar1 = (undefined4 *)
           F_00a1d980(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0x20,param_3 + 0x20,param_4,param_5,param_6);
  param_1[8] = *puVar1;
  param_1[9] = puVar1[1];
  param_1[10] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00a1dc20 */
uint F_00a1dc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa1dc20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_00a1db10(param_1,param_2,param_3,(float)((float10)param_4 / (float10)param_5),param_6,param_7)
  ;
  return param_1;
}

/* ref: FUN_00a1e0b0 */
uint F_00a1e0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a20110(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a1e0d0 */
uint F_00a1e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b1f20(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a1e0f0 */
uint F_00a1e0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_004ef0c0(((undefined1 *)(gen_frame + 0x10)),param_2);
  uVar1 = F_009fad70(((undefined1 *)(gen_frame + 0x10)),in_XMM3_Da,in_XMM4_Da,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar1;
}

/* ref: FUN_00a1e160 */
float F_00a1e160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00a1d570(param_2,param_1);
  return (float)fVar1;
}

/* ref: FUN_00a1e1d0 */
float F_00a1e1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00a1d470(param_2,param_1);
  return (float)fVar1;
}

/* ref: FUN_00a1e1f0 */
uint F_00a1e1f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1e1f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = (float)fVar3;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = fVar1;
  param_1[6] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[9] = 0.0;
  param_1[0xc] = 0.0;
  param_1[8] = (float)fVar2;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = (float)fVar3;
  return (uint)param_1;
}

/* ref: FUN_00a1e2e0 */
uint F_00a1e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa1e2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined4 * this_00;
  
  if (0xff < REFG(int, 0x1379cb4)) {
    return 0;
  }
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0xa0,0x10)));
  if (this == (undefined *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = (undefined4 *)F_006973f0(this);
  }
  bVar2 = F_00697440(this_00);
  uVar1 = REFG(float, 0x10916ec);
  if (bVar2 == 0) {
    if (this_00 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*this_00)(this_00,1);
    }
    return 0;
  }
  REFG(int, 0x1379cb4) = REFG(int, 0x1379cb4) + 1;
  *(undefined2 *)(this_00 + 0x25) = 0x6402;
  *(undefined1 *)((int)this_00 + 0x96) = 1;
  this_00[0x21] = uVar1;
  F_0068f8f0(this_00);
  this_00[0x22] = GEN_FLT_TO(this_00[0x22], REFG(float, 0x10928e4));
  return (uint)this_00;
}

/* ref: FUN_00a1e380 */
uint F_00a1e380(unsigned int gen_a0)
{
  GEN_ENTER(0xa1e380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  undefined4 * in_ecx;
  
  if (0x1f < REFG(int, 0x1379cb8)) {
    return 0;
  }
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x80,0x10)));
  if (this == (undefined *)0x0) {
    in_ecx = (undefined4 *)0x0;
  }
  else {
    in_ecx = (undefined4 *)F_00697180(this);
  }
  bVar1 = F_006971c0(in_ecx);
  if (bVar1 == 0) {
    if (in_ecx != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*in_ecx)(in_ecx,1);
    }
    return 0;
  }
  REFG(int, 0x1379cb8) = REFG(int, 0x1379cb8) + 1;
  return (uint)in_ecx;
}

/* ref: FUN_00a1e3e0 */
uint F_00a1e3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1e3e0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined * this;
  int * this_00;
  
  this_00 = param_3;
  if (param_3 == (int *)0x0) {
    this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x80,0x10)));
    if (this == (undefined *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = (int *)F_00696b10(this);
    }
  }
  F_00696b50(this_00);
  F_0068bd00(REFG(void * PTR32, 0x1371294),this_00);
  F_00690620(this_00);
  uVar2 = REFG(float, 0x10947a4);
  if ((*(uint *)&REFG(undefined, 0x14a2b10) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a2b10) = *(uint *)&REFG(undefined, 0x14a2b10) | 1;
    REFG(float, 0x14a2b00) = REFG(float, 0x1087f04);
    REFG(float, 0x14a2b04) = REFG(float, 0x1087f04);
    REFG(float, 0x14a2b08) = REFG(float, 0x1087f04);
    REFG(float, 0x14a2b0c) = REFG(float, 0x1087f04);
  }
  *(uint *)(this_00[0x1c] + 0xc) = param_1 & 0xff;
  iVar1 = this_00[0x1c];
  *(undefined4 *)(iVar1 + 0x14) = REFG(float, 0x14a2b00);
  *(undefined4 *)(iVar1 + 0x18) = REFG(float, 0x14a2b04);
  *(undefined4 *)(iVar1 + 0x1c) = REFG(float, 0x14a2b08);
  *(undefined4 *)(iVar1 + 0x20) = REFG(float, 0x14a2b0c);
  *(undefined4 *)(this_00[0x1c] + 0x74) = uVar2;
  ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
  ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
  return (uint)this_00;
}

/* ref: FUN_00a1e4c0 */
uint F_00a1e4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x2d0,0x10)));
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_00698e40(pvVar1);
  }
  F_00699000(pvVar1);
  F_0068bd00(REFG(void * PTR32, 0x1371294),pvVar1);
  F_00690620(pvVar1);
  F_0068fce0(pvVar1,param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00a1e520 */
uint F_00a1e520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1e520u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0xa0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_006955c0(pvVar1);
    }
  }
  F_00695660(pvVar1);
  F_0068bd00(REFG(void * PTR32, 0x1371294),pvVar1);
  F_00690620(pvVar1);
  F_004ff2f0(&(*(undefined * PTR32 *)&gen_args[2]));
  uVar2 = F_00503ef0(&(*(undefined * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[0]));
  F_00695b00(pvVar1,uVar2,(*(undefined4 *)&gen_args[0]));
  return (uint)pvVar1;
}

/* ref: FUN_00a1e5a0 */
uint F_00a1e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ebx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x750,0x10)));
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_006ae690(pvVar1);
  }
  F_006ac620(pvVar1,in_ebx,param_2);
  F_0068bd00(REFG(void * PTR32, 0x1371294),pvVar1);
  F_00690620(pvVar1);
  return (uint)pvVar1;
}

/* ref: FUN_00a1e5f0 */
unsigned int F_00a1e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar3 = REFG(float, 0x1087f04);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar1 = param_2[2];
  fVar5 = (float10)*(float *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 0x70);
  fVar6 = (float10)((float)GEN_TOF((fVar5 * ((float10)*param_2 / fVar4))));
  fVar7 = (float10)((float)GEN_TOF((((float10)param_2[1] / fVar4) * fVar5)));
  *(float *)(iVar2 + 0x14) = (float)(fVar6 * fVar6);
  fVar4 = (float10)((float)GEN_TOF((((float10)bVar1 / fVar4) * fVar5)));
  *(float *)(iVar2 + 0x18) = (float)(fVar7 * fVar7);
  *(float *)(iVar2 + 0x1c) = (float)(fVar4 * fVar4);
  *(undefined4 *)(iVar2 + 0x20) = uVar3;
  return 0;
}

/* ref: FUN_00a1e7d0 */
unsigned int F_00a1e7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1e7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float10 fVar9;
  
  uVar1 = *param_2;
  uVar2 = param_2[6];
  uVar3 = param_2[1];
  fVar8 = (float)(((float10)GEN_TOD(gen_bits2f(param_2[3]))) * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x1c)) = fVar8;
  uVar4 = param_2[7];
  uVar5 = param_2[2];
  fVar6 = gen_bits2f(param_2[5]);
  uVar7 = param_2[8];
  fVar9 = ((float10)GEN_TOD(fsin((float10)fVar8)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar9;
  (*(float *)(gen_frame + 0x0)) = (float)fVar9;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar9 = ((float10)GEN_TOD(fcos((float10)fVar8)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar9;
  (*(float *)(gen_frame + 0xc)) = (float)fVar9;
  F_0054d030(&(*(float *)(gen_frame + 0x0)),GEN_TOF(gen_bits2f(param_2[4])));
  F_0054d0f0(&(*(float *)(gen_frame + 0x0)),fVar6);
  *param_1 = uVar1;
  param_1[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0)));
  param_1[1] = uVar3;
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = uVar5;
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
  param_1[8] = uVar2;
  param_1[9] = uVar4;
  param_1[10] = uVar7;
  return 0;
}

/* ref: FUN_00a1ea10 */
uint F_00a1ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  uint uVar2;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_004ef0c0(((undefined1 *)(gen_frame + 0x10)),(uint)(param_2 + 4));
  uVar2 = F_009fad70(((undefined1 *)(gen_frame + 0x10)),in_XMM3_Da,in_XMM4_Da,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  *param_1 = *param_2;
  param_1[3] = (*(undefined4 *)(gen_frame + 0x0));
  param_1[6] = param_2[8];
  uVar1 = param_2[1];
  param_1[4] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[1] = uVar1;
  param_1[7] = param_2[9];
  uVar1 = param_2[2];
  param_1[5] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[2] = uVar1;
  param_1[8] = param_2[10];
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar2;
}

/* ref: FUN_00a1eb70 */
float10 F_00a1eb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1eb70u, gen_a0, gen_a1, 0u, 0u);
  float * in_esi = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float10 fVar2;
  float10 extraout_ST1;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  F_00a201b0(((undefined1 *)(gen_frame + 0x30)),param_2);
  F_004ee9d0(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),((undefined1 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = F_00c4d1fa((float10)fVar1);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
  *in_esi = (float)fVar2;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return extraout_ST1;
}

/* ref: FUN_00a1ec20 */
float F_00a1ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ec20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00a1eb70(param_1,param_2);
  return (float)fVar1;
}

/* ref: FUN_00a1ec40 */
uint F_00a1ec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1ec40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  fVar5 = (float10)0;
  (*(float *)(gen_frame + 0x70)) = (float)fVar5;
  (*(float *)(gen_frame + 0x74)) = (float)fVar5;
  (*(float *)(gen_frame + 0x78)) = (float)fVar5;
  ((float *)(gen_frame + 0x40))[0] = param_2[8];
  ((float *)(gen_frame + 0x40))[1] = 0.0;
  ((float *)(gen_frame + 0x40))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(float *)(gen_frame + 0x54)) = param_2[9];
  (*(float *)(gen_frame + 0x68)) = param_2[10];
  F_004efe70(((float *)(gen_frame + 0x40)),(uint)(param_2 + 4));
  ((float *)(gen_frame + 0x0))[0] = param_3[8];
  (*(float *)(gen_frame + 0x70)) = (float)((float10)*param_2 + (float10)(*(float *)(gen_frame + 0x70)));
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  ((float *)(gen_frame + 0x0))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x74)) = (float)((float10)param_2[1] + (float10)(*(float *)(gen_frame + 0x74)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x78)) = (float)((float10)param_2[2] + (float10)(*(float *)(gen_frame + 0x78)));
  fVar5 = (float10)0;
  (*(float *)(gen_frame + 0x14)) = param_3[9];
  (*(float *)(gen_frame + 0x30)) = (float)fVar5;
  (*(float *)(gen_frame + 0x28)) = param_3[10];
  (*(float *)(gen_frame + 0x34)) = (float)fVar5;
  (*(float *)(gen_frame + 0x38)) = (float)fVar5;
  F_004efe70(((float *)(gen_frame + 0x0)),(uint)(param_3 + 4));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_3 + (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_3[1] + (float10)(*(float *)(gen_frame + 0x34)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)param_3[2] + (float10)(*(float *)(gen_frame + 0x38)));
  F_004ef9d0(((float *)(gen_frame + 0x40)),(uint)((float *)(gen_frame + 0x0)));
  F_0046f390(((float *)(gen_frame + 0x40)));
  F_0046f390(&(*(undefined4 *)(gen_frame + 0x50)));
  F_0046f390(&(*(undefined4 *)(gen_frame + 0x60)));
  F_005fe8d0(param_1,((float *)(gen_frame + 0x40)));
  fVar1 = param_2[9];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = param_2[10];
  *(float *)((int)param_1 + 0x20) = (float)((float10)param_3[8] * (float10)param_2[8]);
  *(float *)((int)param_1 + 0x24) = (float)((float10)fVar1 * (float10)fVar2);
  *(float *)((int)param_1 + 0x28) = (float)((float10)fVar3 * (float10)fVar4);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)param_1;
}

/* ref: FUN_00a1f090 */
uint F_00a1f090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa1f090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_3;
  param_1[2] = param_4[2];
  F_004ef0c0(((undefined1 *)(gen_frame + 0x20)),(uint)(param_4 + 4));
  F_009fad70(((undefined1 *)(gen_frame + 0x20)),in_XMM3_Da,in_XMM4_Da,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  *param_2 = (*(undefined4 *)(gen_frame + 0x0));
  param_2[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_2[2] = (*(undefined4 *)(gen_frame + 0x8));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_4[8];
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1] = param_4[9];
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2] = param_4[10];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)puVar1;
}

/* ref: FUN_00a1f1d0 */
uint F_00a1f1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f1d0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)(param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)(param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)(param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)(param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)(param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)(param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)(param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)(param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)(param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return param_1;
}

/* ref: FUN_00a1f260 */
uint F_00a1f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f260u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)(param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)(param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)(param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)(param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)(param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)(param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)(param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)(param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)(param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return param_1;
}

/* ref: FUN_00a1f2f0 */
uint F_00a1f2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f2f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  byte bVar2;
  ushort * puVar3;
  ushort * PTR32 * ppuVar4;
  ushort * puVar5;
  uint uVar6;
  uint3 uVar7;
  int iVar8;
  
  F_00a1e7d0(&(*(int *)(gen_frame + 0x0)),param_2 + 0xc);
  param_1[0xc] = (*(int *)(gen_frame + 0x0));
  param_1[0xd] = (*(int *)(gen_frame + 0x4));
  param_1[0xe] = (*(int *)(gen_frame + 0x8));
  param_1[0x10] = (*(int *)(gen_frame + 0x10));
  param_1[0x11] = (*(int *)(gen_frame + 0x14));
  param_1[0x12] = (*(int *)(gen_frame + 0x18));
  param_1[9] = param_1[9] | 2;
  param_1[0x13] = (*(int *)(gen_frame + 0x1c));
  if (*(int *)(param_2 + 0x30) == 5) {
    param_1[0x14] = (*(int *)(gen_frame + 0x20));
    param_1[0x15] = (*(int *)(gen_frame + 0x24));
    param_1[0x16] = (*(int *)(gen_frame + 0x28));
    param_1[9] = param_1[9] | 2;
  }
  F_00a1e5f0(param_1,param_2 + 0x4c);
  puVar5 = (ushort *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (*(float *)(param_2 + 0x34) <= REFG(float, 0x10ac108)) {
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x3c)) = 1;
    if (!(*(float *)(param_2 + 0x34) <= REFG(float, 0x10e38bc))) {
      (*(undefined4 *)(gen_frame + 0x3c)) = 2;
    }
  }
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = *(ushort * PTR32 *)(param_2 + 0x5c);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = (ushort *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094884)));
  ppuVar4 = &(*(ushort * PTR32 *)(gen_frame + 0x38));
  if (!(REFG(double, 0x1094800) < (double)((float)gen_bits2f((unsigned int)(uintptr_t)(*(ushort * PTR32 *)(param_2 + 0x5c)))))) {
    ppuVar4 = &(*(ushort * PTR32 *)(gen_frame + 0x34));
  }
  *(ushort * PTR32 *)(param_1[0x1c] + 0x50) = *ppuVar4;
  puVar3 = (ushort *)(param_1[0x1c] + 8);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar3;
  *puVar3 = (ushort)(*(char *)(param_2 + 0x5a) != '\0') * 4 |
            *(ushort *)(param_1[0x1c] + 8) & 0xfffb;
  puVar3 = (ushort *)(param_1[0x1c] + 8);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar3;
  *puVar3 = (ushort)(*(char *)(param_2 + 0x59) != '\0') << 3 |
            *(ushort *)(param_1[0x1c] + 8) & 0xfff7;
  puVar3 = (ushort *)(param_1[0x1c] + 8);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar3;
  *puVar3 = (ushort)(*(char *)(param_2 + 0x58) != '\0') | *(ushort *)(param_1[0x1c] + 8) & 0xfffe;
  *(uint *)(param_1[0x1c] + 0xc) = (uint)*(byte *)(param_2 + 0x30);
  *(undefined4 *)(param_1[0x1c] + 0x58) = (*(undefined4 *)(gen_frame + 0x3c));
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar5;
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = *(ushort * PTR32 *)(param_2 + 0x38);
  ppuVar4 = &(*(ushort * PTR32 *)(gen_frame + 0x38));
  if (!((float10)1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(ushort * PTR32 *)(param_2 + 0x38)))))) {
    ppuVar4 = &(*(ushort * PTR32 *)(gen_frame + 0x34));
  }
  *(ushort * PTR32 *)(param_1[0x1c] + 0x70) = *ppuVar4;
  *(undefined4 *)(param_1[0x1c] + 0x78) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1[0x1c] + 0x74) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1[0x1c] + 0x74) = *(undefined4 *)(param_2 + 0x44);
  puVar5 = (ushort *)(param_1[0x1c] + 8);
  (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar5;
  *puVar5 = (ushort)(*(char *)(param_2 + 0x54) != '\0') << 4 |
            *(ushort *)(param_1[0x1c] + 8) & 0xffef;
  iVar8 = param_1[0x1c];
  uVar1 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(iVar8 + 100) = uVar1;
  *(undefined2 *)(param_1[0x1c] + 10) = *(undefined2 *)(param_2 + 0x68);
  bVar2 = (byte)*(ushort *)(param_1[0x1c] + 8);
  if (((bVar2 >> 3 & 1) == 0) && ((bVar2 >> 2 & 1) == 0)) {
    uVar6 = (uint)(*(ushort *)(param_1[0x1c] + 8) & 0xff00);
  }
  else {
    uVar6 = 1;
  }
  F_0068b3c0(param_1,uVar6);
  puVar5 = ((ushort *)GEN_TOP((*(int *)(param_2 + 0x48) + param_2)));
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = puVar5;
  if ((puVar5 != (ushort *)0x0) && ((char)*puVar5 != '\0')) {
    F_004ff2f0(&(*(undefined4 *)(gen_frame + 0x3c)));
    F_00503ef0(&(*(undefined4 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
    F_0068f510(param_1,&(*(undefined4 *)(gen_frame + 0x3c)),(*(ushort * PTR32 *)(gen_frame + 0x38)));
  }
  ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  uVar7 = (uint3)(uVar6 >> 8);
  if ((*(int *)(param_2 + 0x30) == 1) &&
     ((*(char *)(param_2 + 0x5a) != '\0' || (*(char *)(param_2 + 0x59) != '\0')))) {
    uVar6 = CONCAT31(uVar7,1);
  }
  else {
    uVar6 = (uint)uVar7 << 8;
  }
  if ((char)uVar6 != '\0') {
    iVar8 = param_1[0x1c];
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0xc) != 1)) {
      iVar8 = 0;
    }
    *(int *)(REFG(int, 0x1371284) + 0x14) = iVar8;
    return uVar6;
  }
  uVar6 = *(uint *)(REFG(int, 0x1371284) + 0x14);
  if (uVar6 == param_1[0x1c]) {
    *(undefined4 *)(REFG(int, 0x1371284) + 0x14) = 0;
  }
  return uVar6;
}

/* ref: FUN_00a1f5f0 */
uint F_00a1f5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f5f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  uVar1 = F_0068b710(param_1);
  (*(char *)(gen_frame + 0x3f)) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*param_1 + 200))(param_1);
  }
  F_00a1e7d0(&(*(int *)(gen_frame + 0x0)),param_2 + 0xc);
  param_1[0xc] = (*(int *)(gen_frame + 0x0));
  param_1[0xd] = (*(int *)(gen_frame + 0x4));
  param_1[0x10] = (*(int *)(gen_frame + 0x10));
  param_1[0xe] = (*(int *)(gen_frame + 0x8));
  param_1[0x11] = (*(uint *)(gen_frame + 0x14));
  param_1[0x12] = (*(int *)(gen_frame + 0x18));
  param_1[0x13] = (*(int *)(gen_frame + 0x1c));
  param_1[0x14] = (*(int *)(gen_frame + 0x20));
  param_1[0x15] = (*(int *)(gen_frame + 0x24));
  param_1[0x16] = (*(int *)(gen_frame + 0x28));
  param_1[9] = param_1[9] | 2;
  uVar1 = (*(uint *)(gen_frame + 0x14));
  if ((*(char *)(gen_frame + 0x3f)) != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xcc))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a1f6b0 */
uint F_00a1f6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 uVar1;
  uint uVar2;
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)((int)param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)((int)param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)((int)param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)((int)param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)((int)param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)((int)param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | 2;
  if (*(int *)(param_2 + 0x38) == 1) {
    uVar1 = 1;
  }
  else if (*(int *)(param_2 + 0x38) == 3) {
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  *(undefined1 *)((int)param_1 + 0x96) = 1;
  *(undefined1 *)((int)param_1 + 0x94) = uVar1;
  uVar1 = *(undefined1 *)(param_2 + 0x3d);
  *(undefined1 *)((int)param_1 + 0x96) = 1;
  *(undefined1 *)((int)param_1 + 0x95) = uVar1;
  *(undefined4 *)((int)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x40);
  F_0068f8f0(param_1);
  *(float *)((int)param_1 + 0x88) =
       ((float)GEN_TOF(((float10)*(int *)(param_2 + 0x44) / (float10)*(double *)&REFG(undefined, 0x10912a8))));
  *(undefined4 *)((int)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((int)param_1 + 0x90) = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = F_006a7630(param_1,*(int *)(param_2 + 0x30) + param_2,*(int *)(param_2 + 0x50) + param_2
                       ,0);
  return uVar2;
}

/* ref: FUN_00a1f7d0 */
uint F_00a1f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)param_1 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
  *(undefined4 *)((int)param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)param_1 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
  *(undefined4 *)((int)param_1 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
  *(undefined4 *)((int)param_1 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
  *(undefined4 *)((int)param_1 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
  *(undefined4 *)((int)param_1 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
  *(undefined4 *)((int)param_1 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
  *(uint *)((int)param_1 + 0x24) = *(uint *)((int)param_1 + 0x24) | 2;
  bVar1 = F_006a7520(param_1,*(int *)(param_2 + 0x30) + param_2,*(int *)(param_2 + 0x34) + param_2
                       ,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a1fa60 */
uint F_00a1fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa1fa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = param_3;
  switch((unsigned int)(uintptr_t)(*param_3)) {
  case 1: ;
    uVar1 = F_00a1f260(param_2,param_3);
    return uVar1;
  case 3: ;
    uVar1 = F_00a1f2f0(param_2,param_3);
    return uVar1;
  case 4: ;
    uVar1 = F_00a1f5f0(param_2,param_3);
    return uVar1;
  case 8: ;
  case 9: ;
    F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_3 + 3);
    *(undefined4 *)((int)param_2 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)((int)param_2 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)((int)param_2 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((int)param_2 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
    *(undefined4 *)((int)param_2 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
    *(uint *)((int)param_2 + 0x24) = *(uint *)((int)param_2 + 0x24) | 2;
    *(undefined4 *)((int)param_2 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
    *(undefined4 *)((int)param_2 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
    return (uint)param_2;
  case 0xc: ;
  case 0xe: ;
  case 0x10: ;
  case 0x2d: ;
    uVar1 = F_00a1f1d0(param_2,param_3);
    return uVar1;
  case 0xd: ;
    uVar1 = F_00a1f6b0(param_2,param_3);
    return uVar1;
  case 0x14: ;
    uVar1 = F_00a1f2f0(param_2,param_3);
    return uVar1;
  case 0x25: ;
  case 0x26: ;
  case 0x27: ;
  case 0x2e: ;
  case 0x49: ;
    F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_3 + 3);
    *(undefined4 *)((int)param_2 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)((int)param_2 + 0x40) = (*(undefined4 *)(gen_frame + 0x10));
    *(undefined4 *)((int)param_2 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
    *(undefined4 *)((int)param_2 + 0x44) = (*(undefined4 *)(gen_frame + 0x14));
    *(undefined4 *)((int)param_2 + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((int)param_2 + 0x48) = (*(undefined4 *)(gen_frame + 0x18));
    *(undefined4 *)((int)param_2 + 0x4c) = (*(undefined4 *)(gen_frame + 0x1c));
    *(undefined4 *)((int)param_2 + 0x50) = (*(undefined4 *)(gen_frame + 0x20));
    *(undefined4 *)((int)param_2 + 0x54) = (*(undefined4 *)(gen_frame + 0x24));
    *(undefined4 *)((int)param_2 + 0x58) = (*(undefined4 *)(gen_frame + 0x28));
    *(uint *)((int)param_2 + 0x24) = *(uint *)((int)param_2 + 0x24) | 2;
    return (uint)param_2;
  case 0x2f: ;
    uVar1 = F_00a1f7d0(param_2,param_3);
    return uVar1;
  case 0x45: ;
    F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_3 + 3);
    puVar2 = (undefined4 *)F_0060aad0(param_2,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)puVar2;
}

/* ref: FUN_00a1fd90 */
uint F_00a1fd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1fd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00a1fdb0 */
uint F_00a1fdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xa1fdb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  F_009fac00(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_00a1fde0 */
uint F_00a1fde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1fde0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) *
                                                                (float10)*(float *)(param_2 + 8) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 4) *
                                                               (float10)*(float *)(param_2 + 4)))))))))));
  *(float *)param_1 = (float)(fVar1 * (float10)*(float *)param_2);
  *(float *)(param_1 + 4) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4))));
  *(float *)(param_1 + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  fVar1 = (float10)*(float *)(param_2 + 0x10);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 0x18)
                                                                * (float10)*(float *)(param_2 + 0x18
                                                                                     ) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 0x14) *
                                                               (float10)*(float *)(param_2 + 0x14)))))
                                              ))))));
  *(float *)(param_1 + 0x10) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x10))));
  *(float *)(param_1 + 0x14) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0x14) * fVar1)));
  *(float *)(param_1 + 0x18) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x18))));
  fVar1 = (float10)*(float *)(param_2 + 0x20);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 0x28)
                                                                * (float10)*(float *)(param_2 + 0x28
                                                                                     ) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 0x24) *
                                                               (float10)*(float *)(param_2 + 0x24)))))
                                              ))))));
  *(float *)(param_1 + 0x20) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x20))));
  *(float *)(param_1 + 0x24) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0x24) * fVar1)));
  *(float *)(param_1 + 0x28) = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 0x28))));
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_00a1ff00 */
unsigned int F_00a1ff00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1ff00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x74) = param_2;
  return 0;
}

/* ref: FUN_00a1ff20 */
unsigned int F_00a1ff20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1ff20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x78) = param_2;
  return 0;
}

/* ref: FUN_00a1ff40 */
uint F_00a1ff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ff40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00a1ff60 */
uint F_00a1ff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ff60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(undefined4 *)(uVar1 + 0x60) = *param_2;
  *(undefined4 *)(uVar1 + 100) = param_2[1];
  return uVar1;
}

/* ref: FUN_00a1ff80 */
uint F_00a1ff80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ff80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *((uint *)GEN_TOP((*(int *)(in_ecx + 0x70) + 0xc))) = (uint)(byte)param_2;
  return (uint)(byte)param_2;
}

/* ref: FUN_00a1ffb0 */
uint F_00a1ffb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa1ffb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(undefined4 *)(uVar1 + 0x58) = param_2;
  return uVar1;
}

/* ref: FUN_00a1ffc0 */
uint F_00a1ffc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1ffc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(float *)(uVar1 + 0x78) = param_2;
  return uVar1;
}

/* ref: FUN_00a1ffe0 */
uint F_00a1ffe0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa1ffe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(float *)(uVar1 + 0x74) = param_2;
  return uVar1;
}

/* ref: FUN_00a20000 */
uint F_00a20000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x54) + param_1 * 0x20 + (int)this;
}

/* ref: FUN_00a20020 */
byte F_00a20020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x5c) + param_2 + in_ecx)));
}

/* ref: FUN_00a20030 */
uint F_00a20030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa20030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 100) + param_1 * 0x20 + (int)this;
}

/* ref: FUN_00a20090 */
byte F_00a20090(unsigned int gen_a0)
{
  GEN_ENTER(0xa20090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0x7e000000) == 0x7e000000;
}

