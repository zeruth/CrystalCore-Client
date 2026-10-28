#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00eabdf0 */
GEN_FRAME uint GEN_THISCALL F_00eabdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = (*param_1)(this);
  return uVar1;
}

/* ref: FUN_00eabe00 */
GEN_FRAME uint GEN_THISCALL F_00eabe00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  if (this == (undefined *)0x0) {
    (*param_1)(0);
    return 0;
  }
  (*param_1)(*(int *)(*(int *)this + 4) + (int)this);
  return (uint)this;
}

/* ref: FUN_00eabe40 */
GEN_FRAME byte GEN_THISCALL F_00eabe40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00eabe60 */
GEN_FRAME byte GEN_THISCALL F_00eabe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00eabeb0 */
GEN_FRAME byte GEN_THISCALL F_00eabeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00eabed0 */
GEN_FRAME byte GEN_THISCALL F_00eabed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00eabf40 */
GEN_FRAME uint GEN_THISCALL F_00eabf40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabf40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x10c) + param_2 * 0x14;
}

/* ref: FUN_00eabf90 */
GEN_FRAME uint GEN_THISCALL F_00eabf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabf90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xac) + param_2 * 0x14;
}

/* ref: FUN_00eabfe0 */
GEN_FRAME uint GEN_THISCALL F_00eabfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeabfe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x19c) + param_2 * 0x14;
}

/* ref: FUN_00eac030 */
GEN_FRAME uint GEN_THISCALL F_00eac030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xdc) + param_2 * 0x14;
}

/* ref: FUN_00eac080 */
GEN_FRAME uint GEN_THISCALL F_00eac080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x1fc) + param_2 * 0x14;
}

/* ref: FUN_00eac0d0 */
GEN_FRAME uint GEN_THISCALL F_00eac0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac0d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x22c) + param_2 * 0x14;
}

/* ref: FUN_00eac120 */
GEN_FRAME uint GEN_THISCALL F_00eac120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x1cc) + param_2 * 0x14;
}

/* ref: FUN_00eac170 */
GEN_FRAME uint GEN_THISCALL F_00eac170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x16c) + param_2 * 0x14;
}

/* ref: FUN_00eac1c0 */
GEN_FRAME uint GEN_THISCALL F_00eac1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x97c) + param_2 * 0x14;
}

/* ref: FUN_00eac210 */
GEN_FRAME uint GEN_THISCALL F_00eac210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x34c) + param_2 * 0x14;
}

/* ref: FUN_00eac260 */
GEN_FRAME uint GEN_THISCALL F_00eac260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x5bc) + param_2 * 0x14;
}

/* ref: FUN_00eac2b0 */
GEN_FRAME uint GEN_THISCALL F_00eac2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac2b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x250c) + param_2 * 0x14;
}

/* ref: FUN_00eac300 */
GEN_FRAME uint GEN_THISCALL F_00eac300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x28c) + param_2 * 0x14;
}

/* ref: FUN_00eac350 */
GEN_FRAME uint GEN_THISCALL F_00eac350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x40c) + param_2 * 0x14;
}

/* ref: FUN_00eac3a0 */
GEN_FRAME uint GEN_THISCALL F_00eac3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x3ac) + param_2 * 0x14;
}

/* ref: FUN_00eac3f0 */
GEN_FRAME uint GEN_THISCALL F_00eac3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac3f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x2ec) + param_2 * 0x14;
}

/* ref: FUN_00eac440 */
GEN_FRAME uint GEN_THISCALL F_00eac440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x46c) + param_2 * 0x14;
}

/* ref: FUN_00eac490 */
GEN_FRAME uint GEN_THISCALL F_00eac490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x79c) + param_2 * 0x14;
}

/* ref: FUN_00eac4e0 */
GEN_FRAME uint GEN_THISCALL F_00eac4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x49c) + param_2 * 0x14;
}

/* ref: FUN_00eac530 */
GEN_FRAME uint GEN_THISCALL F_00eac530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xa9c) + param_2 * 0x14;
}

/* ref: FUN_00eac580 */
GEN_FRAME uint GEN_THISCALL F_00eac580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x88c) + param_2 * 0x14;
}

/* ref: FUN_00eac5d0 */
GEN_FRAME uint GEN_THISCALL F_00eac5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac5d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xbbc) + param_2 * 0x14;
}

/* ref: FUN_00eac620 */
GEN_FRAME uint GEN_THISCALL F_00eac620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x31c) + param_2 * 0x14;
}

/* ref: FUN_00eac670 */
GEN_FRAME uint GEN_THISCALL F_00eac670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x9ac) + param_2 * 0x14;
}

/* ref: FUN_00eac6c0 */
GEN_FRAME uint GEN_THISCALL F_00eac6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x196c) + param_2 * 0x14;
}

/* ref: FUN_00eac730 */
GEN_NOFRAME uint GEN_THISCALL F_00eac730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeac730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00eac750 */
GEN_NOFRAME uint GEN_THISCALL F_00eac750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeac750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)this + 0x58) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: basic_ios_GU_char_traits_G_std_std::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eac780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: setg_00eac7e0 */
GEN_FRAME uint GEN_THISCALL F_00eac7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeac7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  
  **(undefined4 * PTR32 *)((int)this + 0x10) = param_1;
  **(int * PTR32 *)((int)this + 0x20) = param_2;
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  *piVar1 = param_3 - param_2 >> 1;
  return (uint)piVar1;
}

/* ref: setp */
GEN_FRAME uint GEN_THISCALL F_00eac820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeac820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  **(int * PTR32 *)((int)this + 0x14) = param_1;
  **(int * PTR32 *)((int)this + 0x24) = param_1;
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *piVar1 = param_2 - param_1 >> 1;
  return (uint)piVar1;
}

/* ref: setg_00eac840 */
GEN_FRAME uint GEN_THISCALL F_00eac840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeac840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  
  **(undefined4 * PTR32 *)((int)this + 0x14) = param_1;
  **(int * PTR32 *)((int)this + 0x24) = param_2;
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *piVar1 = param_3 - param_2 >> 1;
  return (uint)piVar1;
}

/* ref: FUN_00eac870 */
GEN_FRAME uint GEN_THISCALL F_00eac870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeac870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

/* ref: FUN_00eac8a0 */
GEN_FRAME uint GEN_THISCALL F_00eac8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeac8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00eac8c0 */
GEN_FRAME uint GEN_THISCALL F_00eac8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeac8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *(uint *)((int)this + 8);
  if ((uVar2 + *(int *)this == uVar1 + *param_1) &&
     (((int)uVar2 >> 0x1f) + *(int *)((int)this + 4) + (uint)CARRY4(uVar2,*(uint *)this) ==
      ((int)uVar1 >> 0x1f) + param_1[1] + (uint)CARRY4(uVar1,*param_1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00eac900 */
GEN_FRAME uint GEN_THISCALL F_00eac900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xeac900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_00eac930 */
GEN_FRAME uint GEN_THISCALL F_00eac930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xeac930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_00eac960 */
GEN_FRAME uint GEN_THISCALL F_00eac960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xeac960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_00eac9a0 */
GEN_FRAME byte GEN_STDCALL F_00eac9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeac9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0042c7c0(param_1 GEN_EDX_ARG,param_2);
  return bVar1;
}

/* ref: FUN_00eac9d0 */
GEN_FRAME uint F_00eac9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeac9d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x80;
}

/* ref: FUN_00eac9e0 */
GEN_FRAME uint F_00eac9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeac9e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x81;
}

/* ref: FUN_00eac9f0 */
GEN_FRAME uint F_00eac9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeac9f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaca00 */
GEN_FRAME uint F_00eaca00(unsigned int gen_a0)
{
  GEN_ENTER(0xeaca00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00eaca10 */
GEN_FRAME uint F_00eaca10(unsigned int gen_a0)
{
  GEN_ENTER(0xeaca10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00eaca20 */
GEN_FRAME uint F_00eaca20(unsigned int gen_a0)
{
  GEN_ENTER(0xeaca20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00eaca30 */
GEN_FRAME uint F_00eaca30(unsigned int gen_a0)
{
  GEN_ENTER(0xeaca30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x81)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x81);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00eaca60 */
GEN_FRAME uint F_00eaca60(unsigned int gen_a0)
{
  GEN_ENTER(0xeaca60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x81);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x81);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00eaca90 */
GEN_FRAME uint GEN_STDCALL F_00eaca90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaca90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00eacad0 */
GEN_FRAME uint GEN_THISCALL F_00eacad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeacad0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00eacb30 */
GEN_FRAME uint GEN_STDCALL F_00eacb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeacb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00eacb60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eacb60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x81) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x81) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x81);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x81);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x81);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x81);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00eacbd0 */
GEN_NOFRAME uint GEN_THISCALL F_00eacbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    F_00406ad0(**(undefined4 * PTR32 *)((int)this + 0x10));
  }
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x14) = 0;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *puVar1 = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eacc30 */
GEN_FRAME uint GEN_THISCALL F_00eacc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xeacc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_00eacc60 */
GEN_FRAME uint GEN_THISCALL F_00eacc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeacc60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eacc90 */
GEN_FRAME uint GEN_THISCALL F_00eacc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeacc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eaccd0 */
GEN_FRAME uint GEN_THISCALL F_00eaccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeaccd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eacd10 */
GEN_FRAME uint GEN_THISCALL F_00eacd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeacd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eacd50 */
GEN_FRAME uint GEN_THISCALL F_00eacd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeacd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))
            (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_00eacd90 */
GEN_FRAME uint GEN_THISCALL F_00eacd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeacd90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = param_2;
  *(bool *)(in_ecx + 1) = param_2 == 0;
  return (uint)in_ecx;
}

/* ref: FUN_00eacdb0 */
GEN_FRAME uint F_00eacdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xeacdb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xb5;
}

/* ref: FUN_00eacdc0 */
GEN_FRAME uint F_00eacdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeacdc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eacdd0 */
GEN_FRAME uint F_00eacdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeacdd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00eacde0 */
GEN_FRAME uint F_00eacde0(unsigned int gen_a0)
{
  GEN_ENTER(0xeacde0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00eacdf0 */
GEN_FRAME uint F_00eacdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xeacdf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00eace00 */
GEN_FRAME uint F_00eace00(unsigned int gen_a0)
{
  GEN_ENTER(0xeace00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0xb5);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xb5);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00eace30 */
GEN_FRAME uint GEN_STDCALL F_00eace30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeace30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00eace60 */
GEN_FRAME uint GEN_THISCALL F_00eace60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeace60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaceb0 */
GEN_FRAME uint GEN_THISCALL F_00eaceb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaceb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaced0 */
GEN_FRAME uint GEN_STDCALL F_00eaced0(unsigned int gen_a0)
{
  GEN_ENTER(0xeaced0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (((byte)param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if (((byte)param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if (((byte)param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if (((byte)param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

/* ref: FUN_00eacf10 */
GEN_NOFRAME uint GEN_THISCALL F_00eacf10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacf10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 1) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00eacf40 */
GEN_FRAME uint GEN_STDCALL F_00eacf40(unsigned int gen_a0)
{
  GEN_ENTER(0xeacf40u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00eacf60 */
GEN_NOFRAME uint GEN_THISCALL F_00eacf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 4) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00eacf90 */
GEN_FRAME uint GEN_STDCALL F_00eacf90(unsigned int gen_a0)
{
  GEN_ENTER(0xeacf90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00eacfb0 */
GEN_NOFRAME uint GEN_THISCALL F_00eacfb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeacfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 2) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00eacfe0 */
GEN_FRAME uint GEN_STDCALL F_00eacfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xeacfe0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead000 */
GEN_NOFRAME uint GEN_THISCALL F_00ead000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 7) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead030 */
GEN_FRAME uint GEN_STDCALL F_00ead030(unsigned int gen_a0)
{
  GEN_ENTER(0xead030u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead050 */
GEN_NOFRAME uint GEN_THISCALL F_00ead050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 3) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead080 */
GEN_FRAME uint GEN_STDCALL F_00ead080(unsigned int gen_a0)
{
  GEN_ENTER(0xead080u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead0a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 9) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead0d0 */
GEN_FRAME uint GEN_STDCALL F_00ead0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xead0d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead0f0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead0f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 10) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead130 */
GEN_NOFRAME uint GEN_THISCALL F_00ead130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 3) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead160 */
GEN_FRAME uint GEN_STDCALL F_00ead160(unsigned int gen_a0)
{
  GEN_ENTER(0xead160u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead180 */
GEN_NOFRAME uint GEN_THISCALL F_00ead180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 8) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead1b0 */
GEN_FRAME uint GEN_STDCALL F_00ead1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xead1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead1d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 6) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead210 */
GEN_NOFRAME uint GEN_THISCALL F_00ead210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 4) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead240 */
GEN_FRAME uint GEN_STDCALL F_00ead240(unsigned int gen_a0)
{
  GEN_ENTER(0xead240u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead260 */
GEN_NOFRAME uint GEN_THISCALL F_00ead260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x31) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead2a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 2) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead2d0 */
GEN_FRAME uint GEN_STDCALL F_00ead2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xead2d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead2f0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead2f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x10) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead320 */
GEN_FRAME uint GEN_STDCALL F_00ead320(unsigned int gen_a0)
{
  GEN_ENTER(0xead320u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead340 */
GEN_NOFRAME uint GEN_THISCALL F_00ead340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x1d) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead370 */
GEN_FRAME uint GEN_STDCALL F_00ead370(unsigned int gen_a0)
{
  GEN_ENTER(0xead370u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead390 */
GEN_NOFRAME uint GEN_THISCALL F_00ead390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xc4) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead3c0 */
GEN_FRAME uint GEN_STDCALL F_00ead3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xead3c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead3e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xc) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead410 */
GEN_FRAME uint GEN_STDCALL F_00ead410(unsigned int gen_a0)
{
  GEN_ENTER(0xead410u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead430 */
GEN_NOFRAME uint GEN_THISCALL F_00ead430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x14) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead460 */
GEN_FRAME uint GEN_STDCALL F_00ead460(unsigned int gen_a0)
{
  GEN_ENTER(0xead460u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead480 */
GEN_NOFRAME uint GEN_THISCALL F_00ead480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x12) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead4b0 */
GEN_FRAME uint GEN_STDCALL F_00ead4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xead4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead4d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xe) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead500 */
GEN_FRAME uint GEN_STDCALL F_00ead500(unsigned int gen_a0)
{
  GEN_ENTER(0xead500u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead520 */
GEN_NOFRAME uint GEN_THISCALL F_00ead520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x16) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead550 */
GEN_FRAME uint GEN_STDCALL F_00ead550(unsigned int gen_a0)
{
  GEN_ENTER(0xead550u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead570 */
GEN_NOFRAME uint GEN_THISCALL F_00ead570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x27) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead5a0 */
GEN_FRAME uint GEN_STDCALL F_00ead5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xead5a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead5c0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead5c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x17) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead5f0 */
GEN_FRAME uint GEN_STDCALL F_00ead5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xead5f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead610 */
GEN_NOFRAME uint GEN_THISCALL F_00ead610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x37) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead640 */
GEN_FRAME uint GEN_STDCALL F_00ead640(unsigned int gen_a0)
{
  GEN_ENTER(0xead640u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead660 */
GEN_NOFRAME uint GEN_THISCALL F_00ead660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x2c) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead690 */
GEN_FRAME uint GEN_STDCALL F_00ead690(unsigned int gen_a0)
{
  GEN_ENTER(0xead690u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead6b0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead6b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x3d) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead6e0 */
GEN_FRAME uint GEN_STDCALL F_00ead6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xead6e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead700 */
GEN_NOFRAME uint GEN_THISCALL F_00ead700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0xf) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead740 */
GEN_NOFRAME uint GEN_THISCALL F_00ead740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x12) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead770 */
GEN_FRAME uint GEN_STDCALL F_00ead770(unsigned int gen_a0)
{
  GEN_ENTER(0xead770u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead790 */
GEN_NOFRAME uint GEN_THISCALL F_00ead790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x32) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead7d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ead7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x25) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead800 */
GEN_FRAME uint GEN_STDCALL F_00ead800(unsigned int gen_a0)
{
  GEN_ENTER(0xead800u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ead820 */
GEN_NOFRAME uint GEN_THISCALL F_00ead820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xead820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0x86) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)this);
    *(undefined4 *)this = 0;
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ead850 */
GEN_FRAME uint GEN_STDCALL F_00ead850(unsigned int gen_a0)
{
  GEN_ENTER(0xead850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ead8c0 */
GEN_FRAME uint F_00ead8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xead8c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xb4;
}

/* ref: FUN_00ead8e0 */
GEN_FRAME uint GEN_THISCALL F_00ead8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xead8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ead8f0 */
GEN_FRAME uint GEN_THISCALL F_00ead8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xead8f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00ead920 */
GEN_FRAME uint F_00ead920(unsigned int gen_a0)
{
  GEN_ENTER(0xead920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0xb5)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0xb5);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00eadb60 */
GEN_FRAME uint GEN_THISCALL F_00eadb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eadbc0 */
GEN_FRAME uint GEN_THISCALL F_00eadbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadc30 */
GEN_FRAME uint GEN_THISCALL F_00eadc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadca0 */
GEN_FRAME uint GEN_THISCALL F_00eadca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadd10 */
GEN_FRAME uint GEN_THISCALL F_00eadd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadd80 */
GEN_FRAME uint GEN_THISCALL F_00eadd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eaddf0 */
GEN_FRAME uint GEN_THISCALL F_00eaddf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eade60 */
GEN_FRAME uint GEN_THISCALL F_00eade60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeade60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eadec0 */
GEN_FRAME uint GEN_THISCALL F_00eadec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadf30 */
GEN_FRAME uint GEN_THISCALL F_00eadf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eadfa0 */
GEN_FRAME uint GEN_THISCALL F_00eadfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeadfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae000 */
GEN_FRAME uint GEN_THISCALL F_00eae000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae070 */
GEN_FRAME uint GEN_THISCALL F_00eae070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae0d0 */
GEN_FRAME uint GEN_THISCALL F_00eae0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae140 */
GEN_FRAME uint GEN_THISCALL F_00eae140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae1b0 */
GEN_FRAME uint GEN_THISCALL F_00eae1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae220 */
GEN_FRAME uint GEN_THISCALL F_00eae220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae290 */
GEN_FRAME uint GEN_THISCALL F_00eae290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae300 */
GEN_FRAME uint GEN_THISCALL F_00eae300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae370 */
GEN_FRAME uint GEN_THISCALL F_00eae370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae3e0 */
GEN_FRAME uint GEN_THISCALL F_00eae3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae450 */
GEN_FRAME uint GEN_THISCALL F_00eae450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae4c0 */
GEN_FRAME uint GEN_THISCALL F_00eae4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae530 */
GEN_FRAME uint GEN_THISCALL F_00eae530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae5a0 */
GEN_FRAME uint GEN_THISCALL F_00eae5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae610 */
GEN_FRAME uint GEN_THISCALL F_00eae610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae680 */
GEN_FRAME uint GEN_THISCALL F_00eae680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae6f0 */
GEN_FRAME uint GEN_THISCALL F_00eae6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae750 */
GEN_FRAME uint GEN_THISCALL F_00eae750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae7c0 */
GEN_FRAME uint GEN_THISCALL F_00eae7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x20);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00eae820 */
GEN_FRAME uint GEN_THISCALL F_00eae820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeae820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  *(int *)((int)this + 8) = param_1;
  if (param_2 == 0) {
    pvVar2 = F_00c51787(param_1 * 0x30);
    *(undefined * PTR32 *)this = pvVar2;
    *(uint *)((int)this + 4) = (int)pvVar2 + 0xfU & 0xfffffff0;
  }
  else {
    *(undefined4 *)this = 0;
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *puVar1 = this;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00eae890 */
GEN_FRAME uint F_00eae890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeae890u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  }
  (*(code *)*param_2)(iVar1,param_2[2],param_2[3]);
  return (uint)param_1;
}

/* ref: FUN_00eae8c0 */
GEN_FRAME uint F_00eae8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeae8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae8d0 */
GEN_FRAME uint F_00eae8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeae8d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae8e0 */
GEN_FRAME uint F_00eae8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeae8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae8f0 */
GEN_FRAME uint F_00eae8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeae8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae900 */
GEN_FRAME uint F_00eae900(unsigned int gen_a0)
{
  GEN_ENTER(0xeae900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae910 */
GEN_FRAME uint F_00eae910(unsigned int gen_a0)
{
  GEN_ENTER(0xeae910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae920 */
GEN_FRAME uint F_00eae920(unsigned int gen_a0)
{
  GEN_ENTER(0xeae920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae930 */
GEN_FRAME uint F_00eae930(unsigned int gen_a0)
{
  GEN_ENTER(0xeae930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae940 */
GEN_FRAME uint F_00eae940(unsigned int gen_a0)
{
  GEN_ENTER(0xeae940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eae950 */
GEN_FRAME uint F_00eae950(unsigned int gen_a0)
{
  GEN_ENTER(0xeae950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00eae9b0 */
GEN_FRAME uint F_00eae9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeae9b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x1642c86) && (uVar1 = F_004069f0(param_1 * 0xb8), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00eaea10 */
GEN_FRAME uint F_00eaea10(unsigned int gen_a0)
{
  GEN_ENTER(0xeaea10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x1e1e1e2) && (uVar1 = F_004069f0(param_1 * 0x88), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00eaea60 */
GEN_FRAME uint GEN_THISCALL F_00eaea60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x40);
  *(undefined2 *)((int)this + 0x40) = (undefined2)param_1;
  return (uint)uVar1;
}

/* ref: FUN_00eaea80 */
GEN_FRAME uint GEN_THISCALL F_00eaea80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaea80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00eaeaa0 */
GEN_FRAME uint GEN_THISCALL F_00eaeaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaeaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaeac0 */
GEN_NOFRAME uint GEN_THISCALL F_00eaeac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaeac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0xb5) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xb5) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xb5) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xb5) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xb5);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xb5);
    }
    if (*(char *)(*(int *)this + 0xb5) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00eaeb50 */
GEN_NOFRAME uint GEN_THISCALL F_00eaeb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaeb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x81) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x81) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x81) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x81) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x81);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x81);
    }
    if (*(char *)(*(int *)this + 0x81) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00eaebd0 */
GEN_NOFRAME uint GEN_THISCALL F_00eaebd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (*(uint *)((char *)&(_Var1)));
}

/* ref: FUN_00eaebf0 */
GEN_NOFRAME uint GEN_THISCALL F_00eaebf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (*(uint *)((char *)&(_Var1)));
}

/* ref: FUN_00eaec30 */
GEN_FRAME byte F_00eaec30(void)
{
  GEN_ENTER(0xeaec30u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00eaec40 */
GEN_FRAME uint F_00eaec40(unsigned int gen_a0)
{
  GEN_ENTER(0xeaec40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaec50 */
GEN_FRAME uint F_00eaec50(unsigned int gen_a0)
{
  GEN_ENTER(0xeaec50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaec60 */
GEN_FRAME uint F_00eaec60(unsigned int gen_a0)
{
  GEN_ENTER(0xeaec60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaec70 */
GEN_FRAME byte F_00eaec70(void)
{
  GEN_ENTER(0xeaec70u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00eaec80 */
GEN_FRAME uint F_00eaec80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaec80u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00ea7d20(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 0x18;
    this = (undefined *)((int)this + 0x18);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00eaecd0 */
GEN_FRAME uint F_00eaecd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeaecd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaece0 */
GEN_FRAME uint GEN_STDCALL F_00eaece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaece0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    param_1[4] = 0;
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    uVar1 = F_00ea7d20(param_1 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00eaed10 */
GEN_FRAME uint F_00eaed10(unsigned int gen_a0)
{
  GEN_ENTER(0xeaed10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaed20 */
GEN_FRAME uint F_00eaed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaed20u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00ea7d20(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 0x18;
    this = (undefined *)((int)this + 0x18);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00eaed70 */
GEN_FRAME uint F_00eaed70(unsigned int gen_a0)
{
  GEN_ENTER(0xeaed70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaed80 */
GEN_FRAME uint F_00eaed80(unsigned int gen_a0)
{
  GEN_ENTER(0xeaed80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaed90 */
GEN_FRAME uint F_00eaed90(unsigned int gen_a0)
{
  GEN_ENTER(0xeaed90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaeda0 */
GEN_FRAME uint F_00eaeda0(unsigned int gen_a0)
{
  GEN_ENTER(0xeaeda0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaedb0 */
GEN_FRAME uint GEN_THISCALL F_00eaedb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaedb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eaedd0 */
GEN_FRAME uint F_00eaedd0(unsigned int gen_a0)
{
  GEN_ENTER(0xeaedd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaede0 */
GEN_FRAME uint GEN_THISCALL F_00eaede0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaede0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00eaee00 */
GEN_FRAME uint F_00eaee00(unsigned int gen_a0)
{
  GEN_ENTER(0xeaee00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaee10 */
GEN_FRAME uint GEN_THISCALL F_00eaee10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaee10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00ea7d20((undefined4 *)((int)this + 0x58) GEN_EDX_ARG,param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00eaee50 */
GEN_FRAME uint F_00eaee50(unsigned int gen_a0)
{
  GEN_ENTER(0xeaee50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00eaee60 */
GEN_FRAME uint F_00eaee60(unsigned int gen_a0)
{
  GEN_ENTER(0xeaee60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaee70 */
GEN_FRAME uint F_00eaee70(unsigned int gen_a0)
{
  GEN_ENTER(0xeaee70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaee80 */
GEN_FRAME uint F_00eaee80(unsigned int gen_a0)
{
  GEN_ENTER(0xeaee80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00eaee90 */
GEN_FRAME uint F_00eaee90(unsigned int gen_a0)
{
  GEN_ENTER(0xeaee90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Component::ServerFramework::JsonObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaeeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaeeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaeee0 */
GEN_FRAME uint GEN_THISCALL F_00eaeee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaeee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaef10 */
GEN_FRAME uint GEN_THISCALL F_00eaef10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaef10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  undefined8 _Var2;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x115cab8));
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0xc)));
  *(undefined8 *)((int)this + 8) = *(undefined8 *)p_Var1;
  *(undefined8 *)((int)this + 0x10) = *(undefined8 *)&(*(int *)(((char *)(p_Var1) + 8)));
  _Var2 = F_01051073();
  *(undefined *)((int)this + 0x18) = _Var2;
  return (uint)this;
}

/* ref: FUN_00eaef60 */
GEN_FRAME uint GEN_THISCALL F_00eaef60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeaef60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00eaef70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eaef70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x115cab8));
  if (*(int *)((int)this + 0x14) != 0) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return;
}

/* ref: ctype_G_std::vf2 */
GEN_FRAME byte GEN_THISCALL F_00eaefa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaefa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  
  uVar1 = F_01051094((wchar_t)param_2,(undefined *)((int)this + 8));
  return ((ushort)param_1 & uVar1) != 0;
}

/* ref: ctype_G_std::vf1 */
GEN_FRAME uint GEN_THISCALL F_00eaefd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaefd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  short * param_3 = (short *)(uintptr_t)gen_a3;
  wchar_t * pwVar1;
  
  pwVar1 = F_010510b8(param_1,param_2,param_3,(undefined *)((int)this + 8));
  return (uint)pwVar1;
}

/* ref: ctype_G_std::vf3 */
GEN_FRAME uint GEN_THISCALL F_00eaeff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaeff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  uint uVar1;
  ushort * puVar2;
  
  puVar2 = param_2;
  while ((puVar2 != param_3 &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD,param_1,(uint)*puVar2), (char)uVar1 == '\0'))
        ) {
    puVar2 = puVar2 + 1;
  }
  return (uint)puVar2;
}

/* ref: ctype_G_std::vf4 */
GEN_FRAME uint GEN_THISCALL F_00eaf030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaf030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  uint uVar1;
  ushort * puVar2;
  
  puVar2 = param_2;
  while ((puVar2 != param_3 &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD,param_1,(uint)*puVar2), (char)uVar1 != '\0'))
        ) {
    puVar2 = puVar2 + 1;
  }
  return (uint)puVar2;
}

/* ref: ctype_G_std::vf6 */
GEN_FRAME ushort GEN_THISCALL F_00eaf070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  wchar_t wVar1;
  
  wVar1 = F_010510d9((wchar_t)param_1,(undefined *)((int)this + 8));
  return wVar1;
}

/* ref: ctype_G_std::vf5 */
GEN_FRAME uint GEN_THISCALL F_00eaf090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaf090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = param_1;
  if (param_1 != param_2) {
    do {
      wVar1 = F_010510d9(*pwVar2,(undefined *)((int)this + 8));
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
    } while (pwVar2 != param_2);
  }
  return (uint)pwVar2;
}

/* ref: ctype_G_std::vf8 */
GEN_FRAME ushort GEN_THISCALL F_00eaf0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  wchar_t wVar1;
  
  wVar1 = F_0105113f((wchar_t)param_1,(undefined *)((int)this + 8));
  return wVar1;
}

/* ref: ctype_G_std::vf7 */
GEN_FRAME uint GEN_THISCALL F_00eaf0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  wchar_t wVar1;
  wchar_t * pwVar2;
  
  pwVar2 = param_1;
  if (param_1 != param_2) {
    do {
      wVar1 = F_0105113f(*pwVar2,(undefined *)((int)this + 8));
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
    } while (pwVar2 != param_2);
  }
  return (uint)pwVar2;
}

/* ref: FUN_00eaf130 */
GEN_FRAME uint GEN_THISCALL F_00eaf130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(int *)(gen_frame + 0x4)) = 0;
  iVar1 = F_010512d7(((wchar_t *)(gen_frame + 0x8)),(char *)&(*(undefined4 *)&gen_args[1]),1,&(*(int *)(gen_frame + 0x4)),((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  uVar2 = 0xffff;
  if (-1 < iVar1) {
    uVar2 = (uint)(ushort)((wchar_t *)(gen_frame + 0x8))[0];
  }
  return uVar2;
}

/* ref: ctype_G_std::vf10 */
GEN_FRAME uint GEN_THISCALL F_00eaf170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf170u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  (*(int *)(gen_frame + 0x4)) = 0;
  iVar1 = F_010512d7(((wchar_t *)(gen_frame + 0x8)),(char *)&(*(undefined4 *)&gen_args[1]),1,&(*(int *)(gen_frame + 0x4)),((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  uVar2 = 0xffff;
  if (-1 < iVar1) {
    uVar2 = (uint)(ushort)((wchar_t *)(gen_frame + 0x8))[0];
  }
  return uVar2;
}

/* ref: ctype_G_std::vf9 */
GEN_FRAME uint GEN_THISCALL F_00eaf1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaf1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined1 * puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined2 * puVar5;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[2]);
  puVar4 = (*(undefined1 * PTR32 *)&gen_args[1]);
  if ((*(undefined1 * PTR32 *)&gen_args[1]) != (*(undefined1 * PTR32 *)&gen_args[2])) {
    puVar5 = (*(undefined2 * PTR32 *)&gen_args[3]);
    do {
      (*(undefined1 * PTR32 *)&gen_args[1]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[1]), 1, 3),*puVar4)));
      (*(undefined2 * PTR32 *)&gen_args[3]) = (undefined2 *)0x0;
      iVar3 = F_010512d7((wchar_t *)&(*(undefined1 * PTR32 *)&gen_args[2]),(char *)&(*(undefined1 * PTR32 *)&gen_args[1]),1,(int *)&(*(undefined2 * PTR32 *)&gen_args[3]),
                        ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
      uVar2 = 0xffff;
      if (-1 < iVar3) {
        uVar2 = (*((undefined2 *)GEN_TOP(((char *)&(*(undefined1 * PTR32 *)&gen_args[2]) + 0))));
      }
      *puVar5 = uVar2;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar4 != puVar1);
  }
  return (uint)puVar4;
}

/* ref: FUN_00eaf220 */
GEN_FRAME byte GEN_THISCALL F_00eaf220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaf220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(int *)(gen_frame + 0xc)) = 0;
  iVar2 = F_01050fec((char *)((byte *)(gen_frame + 0x10)),(wchar_t)param_1,&(*(int *)(gen_frame + 0xc)),(undefined *)((int)this + 0x18));
  bVar1 = (byte)param_2;
  if (iVar2 == 1) {
    bVar1 = ((byte *)(gen_frame + 0x10))[0];
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: ctype_G_std::vf12 */
GEN_FRAME byte GEN_THISCALL F_00eaf270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaf270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(int *)(gen_frame + 0xc)) = 0;
  iVar2 = F_01050fec((char *)((byte *)(gen_frame + 0x10)),(wchar_t)param_1,&(*(int *)(gen_frame + 0xc)),(undefined *)((int)this + 0x18));
  bVar1 = (byte)param_2;
  if (iVar2 == 1) {
    bVar1 = ((byte *)(gen_frame + 0x10))[0];
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: ctype_G_std::vf11 */
GEN_FRAME uint GEN_THISCALL F_00eaf2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xeaf2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  wchar_t * pwVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pwVar4 = param_1;
  if (param_1 != param_2) {
    pcVar5 = param_4;
    do {
      wVar1 = *pwVar4;
      (*(int *)(gen_frame + 0xc)) = 0;
      iVar3 = F_01050fec(((char *)(gen_frame + 0x10)),wVar1,&(*(int *)(gen_frame + 0xc)),(undefined *)((int)this + 0x18));
      cVar2 = (char)param_3;
      if (iVar3 == 1) {
        cVar2 = ((char *)(gen_frame + 0x10))[0];
      }
      *pcVar5 = cVar2;
      pwVar4 = pwVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (pwVar4 != param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return (uint)pwVar4;
}

/* ref: ctype_G_std::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaf330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x115cab8));
  if (*(int *)((int)this + 0x14) != 0) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaf3b0 */
GEN_FRAME uint GEN_THISCALL F_00eaf3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x38);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x115caf4));
  if (puVar1 != (uint *)0x0) {
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,0);
      iVar2 = *(int *)(uVar3 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar3 + 4) = iVar2 - 1;
      }
      iVar2 = *(int *)(uVar3 + 4);
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & uVar3)));
      if (puVar4 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      }
    }
    this = (*(undefined * PTR32 *)(gen_frame + 0x8));
    F_00406ad0(puVar1);
  }
  uVar3 = F_00c465bd((undefined *)((int)this + 4) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00eaf430 */
GEN_FRAME ushort F_00eaf430(unsigned int gen_a0)
{
  GEN_ENTER(0xeaf430u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eaf440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c465d4((undefined *)((int)this + 4) GEN_EDX_FWD);
  return;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00eaf450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c465dd((undefined *)((int)this + 4) GEN_EDX_FWD);
  return uVar1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00eaf460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00eaf470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf5 */
GEN_NOFRAME uint F_00eaf480(void)
{
  GEN_ENTER(0xeaf480u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf6 */
GEN_NOFRAME uint F_00eaf490(void)
{
  GEN_ENTER(0xeaf490u, 0u, 0u, 0u, 0u);
  return 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00eaf4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaf4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return in_ecx;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf13 */
GEN_NOFRAME uint F_00eaf4b0(void)
{
  GEN_ENTER(0xeaf4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf14 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eaf4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00eaf4d0 */
GEN_FRAME uint GEN_THISCALL F_00eaf4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - param_1;
  **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + param_1 * 2;
  return param_1 * 2;
}

/* ref: FUN_00eaf500 */
GEN_NOFRAME ulonglong GEN_THISCALL F_00eaf500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (**(int * PTR32 *)((int)this + 0x20) != 0) {
    return (ulonglong)**(int * PTR32 *)((int)this + 0x30);
  }
  return 0;
}

/* ref: FUN_00eaf520 */
GEN_FRAME uint GEN_THISCALL F_00eaf520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - param_1;
  **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + param_1 * 2;
  return param_1 * 2;
}

/* ref: FUN_00eaf540 */
GEN_FRAME uint GEN_THISCALL F_00eaf540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined2 * puVar2;
  uint uVar3;
  
  if ((**(int * PTR32 *)((int)this + 0x24) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 0x34), 0 < *piVar1)) {
    *piVar1 = *piVar1 - 1;
    puVar2 = ((undefined2 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
    **(int * PTR32 *)((int)this + 0x24) = (int)(puVar2 + 1);
    *puVar2 = (short)param_1;
    return param_1 & 0xffff;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,param_1);
  return uVar3 & 0xffff;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00eaf580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeaf580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD);
  if ((short)uVar2 == -1) {
    return 0xffff;
  }
  **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - 1;
  puVar1 = ((ushort *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  **(int * PTR32 *)((int)this + 0x20) = (int)(puVar1 + 1);
  return (uint)*puVar1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf8 */
GEN_FRAME uint GEN_THISCALL F_00eaf5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaf5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong local_10;
  
  local_10 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        uVar3 = F_00eaf500(this GEN_EDX_FWD);
        if (((longlong)uVar3 < 0) || (uVar3 == 0)) {
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG);
          if ((short)uVar1 == -1) {
            return (uint)local_10;
          }
          *param_1 = (short)uVar1;
          local_10 = (ulonglong)((uint)local_10 + 1);
          bVar2 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 - 1 + (uint)bVar2;
          param_1 = param_1 + 1;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar3) {
            uVar3 = CONCAT44(param_3,param_2);
          }
          uVar1 = (uint)uVar3;
          F_00c46aa0(param_1,**(undefined4 * PTR32 *)((int)this + 0x20),uVar1 * 2);
          local_10 = uVar3 + local_10;
          bVar2 = param_2 < uVar1;
          param_2 = param_2 - uVar1;
          param_3 = (param_3 - (int)(uVar3 >> 0x20)) - (uint)bVar2;
          **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - uVar1;
          **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + uVar1 * 2;
          param_1 = param_1 + uVar1;
        }
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return (uint)local_10;
      }
    }
    return (uint)local_10;
  }
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf9 */
GEN_FRAME uint GEN_THISCALL F_00eaf6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaf6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong local_10;
  
  local_10 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        uVar3 = F_00eaaa70(this GEN_EDX_FWD);
        if (((longlong)uVar3 < 0) || (uVar3 == 0)) {
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,(uint)*param_1);
          if ((short)uVar1 == -1) {
            return (uint)local_10;
          }
          param_1 = param_1 + 1;
          local_10 = (ulonglong)((uint)local_10 + 1);
          bVar2 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 - 1 + (uint)bVar2;
        }
        else {
          if ((longlong)CONCAT44(param_3,param_2) < (longlong)uVar3) {
            uVar3 = CONCAT44(param_3,param_2);
          }
          uVar1 = (uint)uVar3;
          F_00c46aa0(**(undefined4 * PTR32 *)((int)this + 0x24),param_1,uVar1 * 2);
          param_1 = param_1 + uVar1;
          local_10 = uVar3 + local_10;
          bVar2 = param_2 < uVar1;
          param_2 = param_2 - uVar1;
          param_3 = (param_3 - (int)(uVar3 >> 0x20)) - (uint)bVar2;
          **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - uVar1;
          **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + uVar1 * 2;
        }
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return (uint)local_10;
      }
    }
    return (uint)local_10;
  }
  return 0;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf10 */
GEN_FRAME uint GEN_THISCALL F_00eaf790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeaf790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf11 */
GEN_FRAME uint GEN_THISCALL F_00eaf7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeaf7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 uVar1;
  
  uVar1 = REFG(undefined4, 0x1118764);
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00eaf810 */
GEN_FRAME uint GEN_THISCALL F_00eaf810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this - 8);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) - 8 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: basic_streambuf_GU_char_traits_G_std_std::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaf850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00eaf3b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaf880 */
GEN_FRAME uint GEN_THISCALL F_00eaf880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this - 0x18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) - 0x18 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 8) + 4))) - 8 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x18) + 4))) - 0x18 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00eaf8e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00eaf8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaf8e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = param_2;
  if (*(int *)(in_ecx + 0x38) == 0) {
    uVar1 = param_2 | 4;
  }
  *(uint *)(in_ecx + 0xc) = uVar1 & 0x17;
  uVar1 = *(uint *)(in_ecx + 0x10) & uVar1 & 0x17;
  if ((uVar1 != 0) && ((char)param_3 == '\0')) {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 2) == 0) {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
      }
    }
    else {
      uVar1 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00eaf990 */
GEN_FRAME uint GEN_THISCALL F_00eaf990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf990u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaf9a0 */
GEN_FRAME uint GEN_THISCALL F_00eaf9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaf9a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2;
}

/* ref: collate<>_00eaf9b0 */
GEN_FRAME uint GEN_THISCALL F_00eaf9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaf9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined8 _Var1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x115cb34));
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (uint)this;
}

/* ref: num_put_DV_ostreambuf_iterator_DU_char_traits_D::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eafa60 */
GEN_FRAME unsigned int F_00eafa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeafa60u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00eafae0 */
GEN_FRAME uint F_00eafae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeafae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00eafb70 */
GEN_FRAME uint GEN_THISCALL F_00eafb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (0xf < *(uint *)((int)this + 0x14)) {
    return param_1 + *(int *)this;
  }
  return (int)this + param_1;
}

/* ref: FUN_00eafbd0 */
GEN_NOFRAME uint GEN_THISCALL F_00eafbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeafbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00406b30(*(undefined4 *)((int)this + 8));
  F_00406b30(*(undefined4 *)((int)this + 0x10));
  uVar1 = F_00406b30(*(undefined4 *)((int)this + 0x14));
  return (uint)uVar1;
}

/* ref: FUN_00eafc00 */
GEN_FRAME byte F_00eafc00(unsigned int gen_a0)
{
  GEN_ENTER(0xeafc00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_00eafc10 */
GEN_FRAME uint F_00eafc10(unsigned int gen_a0)
{
  GEN_ENTER(0xeafc10u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  char * pcVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (1 - (int)(param_1 + 1));
  uVar3 = F_00406a50(pcVar2);
  if (pcVar2 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      pcVar4[uVar3 - (int)param_1] = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar2 - 1;
    } while (pcVar2 != (char *)0x0);
  }
  return uVar3;
}

/* ref: FUN_00eafc50 */
GEN_FRAME uint GEN_THISCALL F_00eafc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    if ((*(int *)piVar1[9] == 0) || (piVar2 = (int *)piVar1[0xd], *piVar2 < 1)) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(uint)(byte)param_1);
    }
    else {
      *piVar2 = *piVar2 - 1;
      pbVar3 = *(byte * PTR32 *)piVar1[9];
      *(byte * PTR32 *)piVar1[9] = pbVar3 + 1;
      *pbVar3 = (byte)param_1;
      uVar4 = (uint)(byte)param_1;
    }
    if (uVar4 != 0xffffffff) {
      return (uint)this;
    }
  }
  *(undefined1 *)this = 1;
  return (uint)this;
}

/* ref: FUN_00eafca0 */
GEN_FRAME uint GEN_THISCALL F_00eafca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeafca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined * plVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  undefined1 * puVar6;
  char * pcVar7;
  undefined8 _Var8;
  
  plVar2 = F_00c527f9();
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  pcVar7 = "";
  if ((char)param_2 == '\0') {
    pcVar7 = (*(char * PTR32 *)(((char *)(plVar2) + 8)));
  }
  F_01051073();
  pcVar3 = pcVar7;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (1 - (int)(pcVar7 + 1));
  uVar4 = F_00406a50(pcVar3);
  if (pcVar3 != (char *)0x0) {
    iVar5 = uVar4 - (int)pcVar7;
    do {
      pcVar7[iVar5] = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 - 1;
    } while (pcVar3 != (char *)0x0);
  }
  *(uint *)((int)this + 8) = uVar4;
  F_01051073();
  iVar5 = 6;
  pcVar7 = "false";
  uVar4 = F_00406a50(6);
  do {
    pcVar7[uVar4 + 0xfeec40e0] = *pcVar7;
    pcVar7 = pcVar7 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *(uint *)((int)this + 0x10) = uVar4;
  F_01051073();
  iVar5 = 5;
  puVar6 = &REFG(undefined1, 0x113bf28);
  uVar4 = F_00406a50(5);
  do {
    puVar6[uVar4 + 0xfeec40d8] = *puVar6;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *(uint *)((int)this + 0x14) = uVar4;
  F_01051073();
  *(char *)((int)this + 0xc) = *(*(char * PTR32 *)((char *)(plVar2)));
  _Var8 = F_01051073();
  uVar4 = CONCAT31(GEN_PIECE(&(*(uint *)((char *)&(_Var8))), 1, 3),*(*(char * PTR32 *)(((char *)(plVar2) + 4))));
  *(char *)((int)this + 0xd) = *(*(char * PTR32 *)(((char *)(plVar2) + 4)));
  if ((char)param_2 != '\0') {
    F_01051073();
    *(undefined1 *)((int)this + 0xc) = 0x2e;
    _Var8 = F_01051073();
    uVar4 = (*(uint *)((char *)&(_Var8)));
    *(undefined1 *)((int)this + 0xd) = 0x2c;
  }
  return uVar4;
}

/* ref: FUN_00eafda0 */
GEN_FRAME uint GEN_THISCALL F_00eafda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafe00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafe30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafe30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafe90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafe90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eafef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeafef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaff20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaff50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaff50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaff80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaff80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaffb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaffb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eaffe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeaffe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb00a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb00a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb00d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb00d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb01c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb01c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb01f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb01f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb02b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb02b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb02e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb02e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb03a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb03a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb03d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb03d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb04c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb04c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb04f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb04f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb05b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb05b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb05e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb06a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb06a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb06d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb07c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb07c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb07f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb07f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb08b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb08b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb08e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb08e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb09a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb09a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb09d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb09d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray_TypeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb0ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb0cd0 */
GEN_FRAME uint GEN_THISCALL F_00eb0cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) & 6) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_FWD,param_1,0,0,1,2);
    return (uint)param_1;
  }
  *param_1 = REFG(undefined4, 0x1118760);
  param_1[1] = REFG(undefined4, 0x1118764);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00eb0d30 */
GEN_FRAME byte GEN_THISCALL F_00eb0d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = *(uint *)((int)this + 8);
  if ((uVar2 + *(int *)this == uVar1 + *param_1) &&
     (((int)uVar2 >> 0x1f) + *(int *)((int)this + 4) + (uint)CARRY4(uVar2,*(uint *)this) ==
      ((int)uVar1 >> 0x1f) + param_1[1] + (uint)CARRY4(uVar1,*param_1))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00eb0d80 */
GEN_FRAME uint GEN_THISCALL F_00eb0d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)((*(int *)((int)this + 4) - *(int *)this) / 0x18) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 0x18;
}

/* ref: FUN_00eb0dc0 */
GEN_NOFRAME uint GEN_THISCALL F_00eb0dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb0dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00eacb60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00eb0e00 */
GEN_NOFRAME uint GEN_THISCALL F_00eb0e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb0e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  F_00eacbd0(this GEN_EDX_FWD);
  uVar1 = F_00eaf3b0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00eb0e20 */
GEN_FRAME byte F_00eb0e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0e20u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: FUN_00eb0e40 */
GEN_FRAME uint F_00eb0e40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb0e40u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (*param_1 == 0xffff) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: basic_stringbuf_GU_char_traits_G_std_V::vf3 */
GEN_FRAME uint GEN_THISCALL F_00eb0e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb0e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  short * psVar3;
  int iVar4;
  short * psVar5;
  uint in_EAX = 0;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if ((*(byte *)((int)this + 0x40) & 8) != 0) {
    in_EAX = **(uint * PTR32 *)((int)this + 0x24);
    if ((in_EAX != 0) && (uVar8 = *(uint *)((int)this + 0x3c), in_EAX < uVar8)) {
      iVar1 = **(int * PTR32 *)((int)this + 0x34);
      **(uint * PTR32 *)((int)this + 0x24) = uVar8;
      in_EAX = (int)((in_EAX + iVar1 * 2) - uVar8) >> 1;
      **(uint * PTR32 *)((int)this + 0x34) = in_EAX;
    }
  }
  if ((short)param_1 == -1) {
    return 0;
  }
  uVar8 = **(uint * PTR32 *)((int)this + 0x24);
  if ((uVar8 != 0) && (piVar2 = *(int * PTR32 *)((int)this + 0x34), uVar8 < uVar8 + *piVar2 * 2)) {
    *piVar2 = *piVar2 - 1;
    psVar3 = ((short *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
    **(int * PTR32 *)((int)this + 0x24) = (int)(psVar3 + 1);
    *psVar3 = (short)param_1;
    return CONCAT22((short)(in_EAX >> 0x10),(short)param_1);
  }
  if ((*(byte *)((int)this + 0x40) & 2) != 0) {
    return 0xffff;
  }
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (int)((**(int * PTR32 *)((int)this + 0x34) * 2 - **(int * PTR32 *)((int)this + 0x10)) + uVar8) >> 1;
  }
  uVar6 = uVar8 >> 1;
  if (uVar6 < 0x20) {
    uVar6 = 0x20;
  }
  else if (uVar6 == 0) {
    return 0xffff;
  }
  do {
    if (uVar8 <= 0x7fffffff - uVar6) break;
    uVar6 = uVar6 >> 1;
  } while (uVar6 != 0);
  if (uVar6 == 0) {
    return 0xffff;
  }
  iVar7 = uVar6 + uVar8;
  uVar6 = F_00b11dd0(iVar7);
  iVar1 = **(int * PTR32 *)((int)this + 0x10);
  if ((uVar8 == 0) || (F_00c46aa0(uVar6,iVar1,uVar8 * 2), uVar8 == 0)) {
    *(uint *)((int)this + 0x3c) = uVar6;
    **(uint * PTR32 *)((int)this + 0x14) = uVar6;
    **(uint * PTR32 *)((int)this + 0x24) = uVar6;
    **(int * PTR32 *)((int)this + 0x34) = iVar7 * 2 >> 1;
    if ((*(byte *)((int)this + 0x40) & 4) == 0) {
      **(uint * PTR32 *)((int)this + 0x10) = uVar6;
      **(uint * PTR32 *)((int)this + 0x20) = uVar6;
      **(undefined4 * PTR32 *)((int)this + 0x30) = 1;
      goto LAB_00eb101a;
    }
  }
  else {
    *(uint *)((int)this + 0x3c) = uVar6 + (*(int *)((int)this + 0x3c) - iVar1 >> 1) * 2;
    iVar4 = **(int * PTR32 *)((int)this + 0x24);
    **(int * PTR32 *)((int)this + 0x14) = uVar6 + (**(int * PTR32 *)((int)this + 0x14) - iVar1 >> 1) * 2;
    iVar4 = uVar6 + (iVar4 - iVar1 >> 1) * 2;
    **(int * PTR32 *)((int)this + 0x24) = iVar4;
    **(int * PTR32 *)((int)this + 0x34) = (int)((iVar7 * 2 - iVar4) + uVar6) >> 1;
    if ((*(byte *)((int)this + 0x40) & 4) == 0) {
      iVar4 = **(int * PTR32 *)((int)this + 0x24);
      iVar7 = uVar6 + (**(int * PTR32 *)((int)this + 0x20) - iVar1 >> 1) * 2;
      **(uint * PTR32 *)((int)this + 0x10) = uVar6;
      **(int * PTR32 *)((int)this + 0x20) = iVar7;
      **(int * PTR32 *)((int)this + 0x30) = (iVar4 - iVar7) + 2 >> 1;
      goto LAB_00eb101a;
    }
  }
  **(uint * PTR32 *)((int)this + 0x10) = uVar6;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(int * PTR32 *)((int)this + 0x30) = (int)uVar6 >> 1;
LAB_00eb101a: ;
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    F_00406ad0(iVar1);
  }
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) | 1;
  **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - 1;
  psVar5 = ((short *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
  psVar3 = psVar5 + 1;
  **(int * PTR32 *)((int)this + 0x24) = (int)psVar3;
  *psVar5 = (short)param_1;
  return CONCAT22((short)((uint)((int)(uintptr_t)psVar3) >> 0x10),(short)param_1);
}

/* ref: basic_stringbuf_GU_char_traits_G_std_V::vf4 */
GEN_FRAME uint GEN_THISCALL F_00eb1050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb1050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = **(uint * PTR32 *)((int)this + 0x20);
  if ((uVar1 != 0) && (**(uint * PTR32 *)((int)this + 0x10) < uVar1)) {
    if (((ushort)param_1 == 0xffff) ||
       (((ushort)param_1 == *(ushort *)(uVar1 - 2) || ((*(byte *)((int)this + 0x40) & 2) == 0)))) {
      **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) + 1;
      **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) - 2;
      if ((ushort)param_1 != 0xffff) {
        *((ushort *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x20))) = (ushort)param_1;
        return (uint)(ushort)param_1;
      }
      return 0;
    }
  }
  return 0xffff;
}

/* ref: basic_stringbuf_GU_char_traits_G_std_V::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00eb10c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb10c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = ((undefined2 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  if (puVar1 == (undefined2 *)0x0) {
    return 0xffff;
  }
  if (puVar1 < puVar1 + **(int * PTR32 *)((int)this + 0x30)) {
    return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),*puVar1);
  }
  if ((((*(byte *)((int)this + 0x40) & 4) == 0) &&
      (puVar2 = ((undefined2 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x24))), puVar2 != (undefined2 *)0x0)) &&
     ((puVar1 < puVar2 || (puVar1 < *(undefined2 * PTR32 *)((int)this + 0x3c))))) {
    if (*(undefined2 * PTR32 *)((int)this + 0x3c) < puVar2) {
      *(undefined2 * PTR32 *)((int)this + 0x3c) = puVar2;
    }
    **(int * PTR32 *)((int)this + 0x30) = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x20) >> 1;
    return CONCAT22((short)((uint)**(undefined4 * PTR32 *)((int)this + 0x20) >> 0x10),
                    *((undefined2 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x20))));
  }
  return 0xffff;
}

/* ref: basic_stringbuf_GU_char_traits_G_std_V::vf10 */
GEN_FRAME uint GEN_THISCALL F_00eb1130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeb1130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = **(uint * PTR32 *)((int)this + 0x24);
  if ((uVar3 != 0) && (*(uint *)((int)this + 0x3c) < uVar3)) {
    *(uint *)((int)this + 0x3c) = uVar3;
  }
  uVar3 = (*(uint *)&gen_a3);
  uVar6 = param_2;
  if ((((byte)param_5 & 1) == 0) || (iVar5 = **(int * PTR32 *)((int)this + 0x20), iVar5 == 0)) {
    if ((((byte)param_5 & 2) == 0) || (uVar1 = **(uint * PTR32 *)((int)this + 0x24), uVar1 == 0)) {
      if (param_2 == 0 && (*(uint *)&gen_a3) == 0) goto LAB_00eb12ea;
    }
    else {
      if (param_4 == 2) {
        iVar5 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
        uVar3 = iVar5 >> 1;
        uVar6 = param_2 + uVar3;
        uVar3 = (*(uint *)&gen_a3) + (iVar5 >> 0x1f) + (uint)CARRY4(param_2,uVar3);
      }
      else if (param_4 == 1) {
        iVar5 = uVar1 - **(int * PTR32 *)((int)this + 0x10);
        uVar3 = iVar5 >> 1;
        uVar6 = param_2 + uVar3;
        uVar3 = (*(uint *)&gen_a3) + (iVar5 >> 0x1f) + (uint)CARRY4(param_2,uVar3);
      }
      else if (param_4 != 0) {
        uVar3 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
      if (-1 < (int)uVar3) {
        iVar5 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
        iVar2 = iVar5 >> 0x1f;
        if (((int)uVar3 <= iVar2) && (((int)uVar3 < iVar2 || (uVar6 <= (uint)(iVar5 >> 1))))) {
          iVar5 = ((int)(**(int * PTR32 *)((int)this + 0x10) - uVar1) >> 1) + uVar6;
          **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - iVar5;
          **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + iVar5 * 2;
          goto LAB_00eb12ea;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      iVar2 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
      uVar3 = iVar2 >> 1;
      uVar6 = param_2 + uVar3;
      uVar3 = (*(uint *)&gen_a3) + (iVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar3);
    }
    else if (param_4 == 1) {
      if (((byte)param_5 & 2) == 0) {
        iVar2 = iVar5 - **(int * PTR32 *)((int)this + 0x10);
        uVar3 = iVar2 >> 1;
        uVar6 = param_2 + uVar3;
        uVar3 = (*(uint *)&gen_a3) + (iVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar3);
      }
      else {
LAB_00eb11a5: ;
        uVar3 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
    }
    else if (param_4 != 0) goto LAB_00eb11a5;
    if (-1 < (int)uVar3) {
      iVar2 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
      iVar4 = iVar2 >> 0x1f;
      if (((int)uVar3 <= iVar4) && (((int)uVar3 < iVar4 || (uVar6 <= (uint)(iVar2 >> 1))))) {
        iVar5 = (**(int * PTR32 *)((int)this + 0x10) - iVar5 >> 1) + uVar6;
        **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - iVar5;
        **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + iVar5 * 2;
        if ((((byte)param_5 & 2) != 0) && (iVar5 = **(int * PTR32 *)((int)this + 0x24), iVar5 != 0)) {
          iVar2 = **(int * PTR32 *)((int)this + 0x34);
          iVar4 = **(int * PTR32 *)((int)this + 0x20);
          **(int * PTR32 *)((int)this + 0x24) = iVar4;
          **(int * PTR32 *)((int)this + 0x34) = (iVar5 + iVar2 * 2) - iVar4 >> 1;
        }
        goto LAB_00eb12ea;
      }
    }
  }
  uVar3 = REFG(undefined4, 0x1118764);
  uVar6 = REFG(undefined4, 0x1118760);
LAB_00eb12ea: ;
  *param_1 = uVar6;
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_stringbuf_GU_char_traits_G_std_V::vf11 */
GEN_FRAME uint GEN_THISCALL F_00eb1310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeb1310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint param_8 = (uint)gen_a8;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_4 + param_2;
  uVar6 = **(uint * PTR32 *)((int)this + 0x24);
  uVar5 = ((int)param_4 >> 0x1f) + param_3 + (uint)CARRY4(param_4,param_2);
  if ((uVar6 != 0) && (*(uint *)((int)this + 0x3c) < uVar6)) {
    *(uint *)((int)this + 0x3c) = uVar6;
  }
  if ((uVar7 != REFG(undefined4, 0x1118760)) || (uVar6 = uVar5, uVar8 = uVar7, uVar5 != REFG(undefined4, 0x1118764))) {
    uVar6 = REFG(undefined4, 0x1118764);
    uVar8 = REFG(undefined4, 0x1118760);
    if (((param_8 & 1) == 0) || (**(int * PTR32 *)((int)this + 0x20) == 0)) {
      if ((((param_8 & 2) != 0) && (uVar2 = **(uint * PTR32 *)((int)this + 0x24), uVar2 != 0)) &&
         (-1 < (int)uVar5)) {
        iVar3 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
        iVar4 = iVar3 >> 0x1f;
        if (((int)uVar5 <= iVar4) && (((int)uVar5 < iVar4 || (uVar7 <= (uint)(iVar3 >> 1))))) {
          iVar3 = ((int)(**(int * PTR32 *)((int)this + 0x10) - uVar2) >> 1) + uVar7;
          **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - iVar3;
          **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + iVar3 * 2;
          uVar6 = uVar5;
          uVar8 = uVar7;
        }
      }
    }
    else if (-1 < (int)uVar5) {
      iVar3 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
      iVar4 = iVar3 >> 0x1f;
      if (((int)uVar5 <= iVar4) && (((int)uVar5 < iVar4 || (uVar7 <= (uint)(iVar3 >> 1))))) {
        iVar3 = (**(int * PTR32 *)((int)this + 0x10) - **(int * PTR32 *)((int)this + 0x20) >> 1) + uVar7;
        **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - iVar3;
        **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + iVar3 * 2;
        uVar6 = uVar5;
        uVar8 = uVar7;
        if (((param_8 & 2) != 0) && (iVar3 = **(int * PTR32 *)((int)this + 0x24), iVar3 != 0)) {
          iVar4 = **(int * PTR32 *)((int)this + 0x34);
          iVar1 = **(int * PTR32 *)((int)this + 0x20);
          **(int * PTR32 *)((int)this + 0x24) = iVar1;
          **(int * PTR32 *)((int)this + 0x34) = (iVar3 + iVar4 * 2) - iVar1 >> 1;
        }
      }
    }
  }
  *param_1 = uVar8;
  param_1[1] = uVar6;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: FUN_00eb14a0 */
GEN_NOFRAME uint GEN_THISCALL F_00eb14a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb14a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00eb14c0 */
GEN_NOFRAME uint GEN_THISCALL F_00eb14c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb14c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined4 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)this + 0x58) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: basic_stringbuf_GU_char_traits_G_std_V::vf0 */
GEN_FRAME uint GEN_THISCALL F_00eb14e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb14e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  F_00eacbd0(this GEN_EDX_FWD);
  F_00eaf3b0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb1510 */
GEN_FRAME uint GEN_THISCALL F_00eb1510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb1510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = **(uint * PTR32 *)((int)this + 0x20);
  if (((uVar2 != 0) && (**(uint * PTR32 *)((int)this + 0x10) < uVar2)) &&
     ((byte)param_1 == *(byte *)(uVar2 - 1))) {
    **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) + 1;
    pbVar1 = ((byte *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) - 1)));
    **(int * PTR32 *)((int)this + 0x20) = (int)pbVar1;
    return (uint)*pbVar1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,(uint)(byte)param_1);
  return uVar2;
}

/* ref: FUN_00eb15c0 */
GEN_FRAME uint F_00eb15c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb15c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00eb15e0 */
GEN_FRAME uint GEN_THISCALL F_00eb15e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb15e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eb1600 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0xb5) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xb5) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xb5);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0xb5);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xb5);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xb5);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00eb1690 */
GEN_FRAME uint GEN_THISCALL F_00eb1690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb1690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x81))) == '\0') {
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

/* ref: FUN_00eb1700 */
GEN_FRAME uint F_00eb1700(unsigned int gen_a0)
{
  GEN_ENTER(0xeb1700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00eb1730 */
GEN_FRAME uint GEN_THISCALL F_00eb1730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb1730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eb1740 */
GEN_FRAME byte GEN_THISCALL F_00eb1740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb1740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00eb1760 */
GEN_FRAME byte GEN_THISCALL F_00eb1760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xeb1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00eb1780 */
GEN_NOFRAME uint GEN_THISCALL F_00eb1780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 100);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x5c)) {
      if (_Memory[2] != 1) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
      in_EAX = extraout_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00eb17d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb17d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb17d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x104);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0xfc)) {
      if (_Memory[2] != 4) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1820 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xa4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x9c)) {
      if (_Memory[2] != 2) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1870 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x194);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x18c)) {
      if (_Memory[2] != 7) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb18c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb18c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb18c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xd4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0xcc)) {
      if (_Memory[2] != 3) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1910 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 500);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x1ec)) {
      if (_Memory[2] != 9) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1960 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x224);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x21c)) {
      if (_Memory[2] != 10) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb19b0 */
GEN_NOFRAME uint GEN_THISCALL F_00eb19b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb19b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xa4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x9c)) {
      if (_Memory[2] != 3) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
      in_EAX = extraout_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00eb1a00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x1bc)) {
      if (_Memory[2] != 8) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1a50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x164);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x15c)) {
      if (_Memory[2] != 6) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1aa0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0xbc)) {
      if (_Memory[2] != 4) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1af0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x974);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x96c)) {
      if (_Memory[2] != 0x31) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1b40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x84);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x7c)) {
      if (_Memory[2] != 2) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1b90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x344);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x33c)) {
      if (_Memory[2] != 0x10) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1be0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x5b4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x5ac)) {
      if (_Memory[2] != 0x1d) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1c30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2504);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x24fc)) {
      if (_Memory[2] != 0xc4) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1c90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x284);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x27c)) {
      if (_Memory[2] != 0xc) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1ce0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x404);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x3fc)) {
      if (_Memory[2] != 0x14) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1d30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3a4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x39c)) {
      if (_Memory[2] != 0x12) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1d80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2e4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x2dc)) {
      if (_Memory[2] != 0xe) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1dd0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x464);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x45c)) {
      if (_Memory[2] != 0x16) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1e20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x794);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x78c)) {
      if (_Memory[2] != 0x27) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1e70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x494);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x48c)) {
      if (_Memory[2] != 0x17) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1ec0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xa94);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0xa8c)) {
      if (_Memory[2] != 0x37) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1f10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x884);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x87c)) {
      if (_Memory[2] != 0x2c) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1f60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xbb4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0xbac)) {
      if (_Memory[2] != 0x3d) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb1fb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb1fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb1fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x314);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x30c)) {
      if (_Memory[2] != 0xf) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb2000 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb2000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb2000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x284);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x27c)) {
      if (_Memory[2] != 0x12) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

/* ref: FUN_00eb2050 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00eb2050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xeb2050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * _Memory;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x9a4);
  while (_Memory = puVar1, _Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[6];
    if (_Memory != *(undefined4 * PTR32 *)((int)this + 0x99c)) {
      if (_Memory[2] != 0x32) {
        _Memory[1] = 0;
      }
      if ((undefined *)*_Memory != (undefined *)0x0) {
        F_00c4c68f((undefined *)*_Memory);
        *_Memory = 0;
      }
      F_00c4c68f(_Memory);
    }
  }
  return;
}

