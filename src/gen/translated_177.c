#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ddcf60 */
GEN_NOFRAME uint GEN_THISCALL F_00ddcf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddcf60u, gen_a0, 0u, 0u, 0u);
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
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
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

/* ref: FUN_00ddcff0 */
GEN_FRAME uint GEN_THISCALL F_00ddcff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddcff0u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
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

/* ref: FUN_00ddd060 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd060u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar3 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00ddd100 */
GEN_NOFRAME uint F_00ddd100(void)
{
  GEN_ENTER(0xddd100u, 0u, 0u, 0u, 0u);
  __time64_t _Var1;
  
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  return (uint)_Var1;
}

/* ref: FUN_00ddd110 */
GEN_FRAME uint F_00ddd110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd130 */
GEN_NOFRAME unsigned int F_00ddd130(void)
{
  GEN_ENTER(0xddd130u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ddd150 */
GEN_FRAME unsigned int F_00ddd150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd150u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de37f0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddd170 */
GEN_FRAME uint F_00ddd170(unsigned int gen_a0)
{
  GEN_ENTER(0xddd170u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00ddd1e0 */
GEN_FRAME uint GEN_THISCALL F_00ddd1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddd210 */
GEN_FRAME unsigned int F_00ddd210(unsigned int gen_a0)
{
  GEN_ENTER(0xddd210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00ddd250 */
GEN_FRAME uint GEN_THISCALL F_00ddd250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddd290 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd290u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddd2d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd2d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddd310 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd310u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddd350 */
GEN_FRAME uint GEN_THISCALL F_00ddd350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 << 4)
    ;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00ddd3c0 */
GEN_FRAME uint F_00ddd3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd3d0 */
GEN_FRAME uint F_00ddd3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd400 */
GEN_FRAME unsigned int F_00ddd400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de3cd0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddd420 */
GEN_FRAME uint F_00ddd420(unsigned int gen_a0)
{
  GEN_ENTER(0xddd420u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddd430 */
GEN_NOFRAME uint F_00ddd430(void)
{
  GEN_ENTER(0xddd430u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x80];
  
  F_00de3cd0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00ddd460 */
GEN_NOFRAME unsigned int F_00ddd460(void)
{
  GEN_ENTER(0xddd460u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ddd470 */
GEN_FRAME uint F_00ddd470(unsigned int gen_a0)
{
  GEN_ENTER(0xddd470u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ddd4c0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddd480 */
GEN_FRAME unsigned int F_00ddd480(unsigned int gen_a0)
{
  GEN_ENTER(0xddd480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x54);
  }
  return;
}

/* ref: FUN_00ddd4c0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00ddd5b0 */
GEN_FRAME uint GEN_THISCALL F_00ddd5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddd4c0(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x54);
  }
  return (uint)this;
}

/* ref: FUN_00ddd5f0 */
GEN_FRAME uint F_00ddd5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd600 */
GEN_FRAME uint F_00ddd600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd610 */
GEN_FRAME uint GEN_THISCALL F_00ddd610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd610u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4 GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00ddd640 */
GEN_FRAME uint F_00ddd640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ddd670 */
GEN_FRAME uint F_00ddd670(unsigned int gen_a0)
{
  GEN_ENTER(0xddd670u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddd680 */
GEN_FRAME uint F_00ddd680(unsigned int gen_a0)
{
  GEN_ENTER(0xddd680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddd690 */
GEN_FRAME unsigned int F_00ddd690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 0x10 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddd6c0 */
GEN_NOFRAME uint F_00ddd6c0(void)
{
  GEN_ENTER(0xddd6c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,0);
  return 0x1149c04;
}

/* ref: FUN_00ddd790 */
GEN_FRAME uint GEN_THISCALL F_00ddd790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddd7c0 */
GEN_FRAME uint GEN_THISCALL F_00ddd7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddd7f0 */
GEN_FRAME uint GEN_THISCALL F_00ddd7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00ddd820 */
GEN_FRAME uint GEN_THISCALL F_00ddd820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddd840 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ddd840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00ddd860 */
GEN_FRAME unsigned int F_00ddd860(unsigned int gen_a0)
{
  GEN_ENTER(0xddd860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddd890 */
GEN_FRAME unsigned int F_00ddd890(unsigned int gen_a0)
{
  GEN_ENTER(0xddd890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00ddd8c0 */
GEN_FRAME unsigned int F_00ddd8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd8c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddd8f0 */
GEN_FRAME uint GEN_THISCALL F_00ddd8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddd960 */
GEN_FRAME unsigned int F_00ddd960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd960u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 4 + iVar1 * 8);
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = (undefined *)((int)this - 8);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00ddd990 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddd9b0 */
GEN_FRAME unsigned int F_00ddd9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd9b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00ddd9e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 4 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00ddda10 */
GEN_FRAME uint GEN_THISCALL F_00ddda10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddda10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 0;
  F_00d91510(this GEN_EDX_ARG);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddda60 */
GEN_FRAME uint GEN_THISCALL F_00ddda60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddda60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00dddaa0 */
GEN_FRAME uint GEN_THISCALL F_00dddaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dddb00 */
GEN_FRAME unsigned int F_00dddb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddb00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 - 1;
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)(param_1 + 4 + iVar2 * 8);
    do {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar1 GEN_EDX_ARG);
      }
      *puVar1 = 0;
      F_00d91510(puVar1 - 1 GEN_EDX_ARG);
      puVar1 = puVar1 - 2;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: FUN_00dddb40 */
GEN_FRAME unsigned int F_00dddb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddb40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00dddb70 */
GEN_NOFRAME uint GEN_THISCALL F_00dddb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
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

/* ref: FUN_00dddbd0 */
GEN_NOFRAME uint GEN_THISCALL F_00dddbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(uVar1 + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      uVar1 = F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      puVar2 = puVar2 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dddc50 */
GEN_NOFRAME uint GEN_THISCALL F_00dddc50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
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

/* ref: FUN_00dddcb0 */
GEN_FRAME uint GEN_THISCALL F_00dddcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      puVar2 = puVar2 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dddd20 */
GEN_FRAME uint GEN_THISCALL F_00dddd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00ddde00 */
GEN_NOFRAME uint GEN_THISCALL F_00ddde00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddde00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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

/* ref: FUN_00dddee0 */
GEN_NOFRAME uint GEN_THISCALL F_00dddee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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

/* ref: FUN_00dddf50 */
GEN_NOFRAME uint GEN_THISCALL F_00dddf50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - 1;
  if (-1 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4 + iVar3 * 8)));
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      puVar2 = puVar2 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if (-1 < iVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),iVar3 * 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00dddfd0 */
GEN_FRAME uint GEN_THISCALL F_00dddfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dddf50(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00dde010 */
GEN_FRAME unsigned int F_00dde010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = (undefined *)(iVar1 * 0x10 + param_1);
    do {
      F_00dddf50(this GEN_EDX_ARG);
      this = (undefined *)((int)this - 0x10);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00dde040 */
GEN_NOFRAME uint GEN_THISCALL F_00dde040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + uVar1);
    do {
      uVar1 = F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dde070 */
GEN_FRAME uint GEN_THISCALL F_00dde070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde0d0 */
GEN_NOFRAME uint GEN_THISCALL F_00dde0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde130 */
GEN_NOFRAME uint GEN_THISCALL F_00dde130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde1a0 */
GEN_FRAME uint F_00dde1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde1a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxAttributeHolder::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dde1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de47a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dde210 */
GEN_FRAME uint GEN_THISCALL F_00dde210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 0x10 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dde240 */
GEN_FRAME uint F_00dde240(unsigned int gen_a0)
{
  GEN_ENTER(0xdde240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxNode::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dde270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de4e40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dde2b0 */
GEN_FRAME uint F_00dde2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde2c0 */
GEN_FRAME uint F_00dde2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde2d0 */
GEN_FRAME uint F_00dde2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde310 */
GEN_NOFRAME unsigned int F_00dde310(void)
{
  GEN_ENTER(0xdde310u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dde320 */
GEN_NOFRAME unsigned int F_00dde320(void)
{
  GEN_ENTER(0xdde320u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dde340 */
GEN_FRAME uint F_00dde340(unsigned int gen_a0)
{
  GEN_ENTER(0xdde340u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00dde350 */
GEN_NOFRAME unsigned int F_00dde350(void)
{
  GEN_ENTER(0xdde350u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dde360 */
GEN_FRAME unsigned int F_00dde360(unsigned int gen_a0)
{
  GEN_ENTER(0xdde360u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1 GEN_EDX_ARG);
  }
  *param_1 = 0;
  return;
}

/* ref: FUN_00dde380 */
GEN_FRAME uint F_00dde380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
    uVar1 = F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dde3a0 */
GEN_NOFRAME uint F_00dde3a0(void)
{
  GEN_ENTER(0xdde3a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  return 0x114a17c;
}

/* ref: FUN_00dde460 */
GEN_FRAME uint GEN_THISCALL F_00dde460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00dde490 */
GEN_FRAME uint GEN_THISCALL F_00dde490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dde4c0 */
GEN_FRAME uint GEN_THISCALL F_00dde4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dde4f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dde4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dde510 */
GEN_FRAME unsigned int F_00dde510(unsigned int gen_a0)
{
  GEN_ENTER(0xdde510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dde540 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dde540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dde5a0 */
GEN_FRAME unsigned int F_00dde5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde5a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00dde5e0 */
GEN_FRAME uint GEN_THISCALL F_00dde5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00dde620 */
GEN_FRAME uint GEN_THISCALL F_00dde620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde660 */
GEN_FRAME unsigned int F_00dde660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(param_1 + iVar1 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_ARG);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00dde690 */
GEN_FRAME uint GEN_THISCALL F_00dde690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00dde6d0 */
GEN_NOFRAME uint GEN_THISCALL F_00dde6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde750 */
GEN_FRAME unsigned int F_00dde750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00dde780 */
GEN_NOFRAME uint GEN_THISCALL F_00dde780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde7c0 */
GEN_FRAME uint GEN_THISCALL F_00dde7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde870 */
GEN_NOFRAME uint GEN_THISCALL F_00dde870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde8e0 */
GEN_FRAME uint GEN_THISCALL F_00dde8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dde950 */
GEN_NOFRAME uint GEN_THISCALL F_00dde950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde9c0 */
GEN_NOFRAME uint GEN_THISCALL F_00dde9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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

/* ref: FUN_00ddea30 */
GEN_NOFRAME uint GEN_THISCALL F_00ddea30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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

/* ref: FUN_00ddeaa0 */
GEN_FRAME uint GEN_THISCALL F_00ddeaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00ddeac0 */
GEN_FRAME uint F_00ddeac0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMaterial::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddeaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de5200(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddeb30 */
GEN_FRAME uint F_00ddeb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddeb40 */
GEN_FRAME uint F_00ddeb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddeb50 */
GEN_FRAME uint GEN_THISCALL F_00ddeb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb50u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return in_ecx;
}

/* ref: FUN_00ddeb90 */
GEN_FRAME unsigned int F_00ddeb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddebd0 */
GEN_FRAME unsigned int F_00ddebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddebd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de5db0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddebf0 */
GEN_FRAME uint F_00ddebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xddebf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddec00 */
GEN_NOFRAME uint F_00ddec00(void)
{
  GEN_ENTER(0xddec00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de5db0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00ddec30 */
GEN_FRAME uint F_00ddec30(unsigned int gen_a0)
{
  GEN_ENTER(0xddec30u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)param_1 + 4) GEN_EDX_ARG);
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddec50 */
GEN_NOFRAME uint GEN_THISCALL F_00ddec50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddec70 */
GEN_FRAME unsigned int F_00ddec70(unsigned int gen_a0)
{
  GEN_ENTER(0xddec70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddeca0 */
GEN_FRAME uint GEN_THISCALL F_00ddeca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00d91510(this GEN_EDX_ARG);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddece0 */
GEN_FRAME uint F_00ddece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddece0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddecf0 */
GEN_FRAME uint F_00ddecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dded00 */
GEN_FRAME uint GEN_THISCALL F_00dded00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdded00u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4 GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00dded20 */
GEN_FRAME uint F_00dded20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdded20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dded40 */
GEN_FRAME uint F_00dded40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdded40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dded70 */
GEN_FRAME uint F_00dded70(unsigned int gen_a0)
{
  GEN_ENTER(0xdded70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00dded90 */
GEN_FRAME uint F_00dded90(unsigned int gen_a0)
{
  GEN_ENTER(0xdded90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddeda0 */
GEN_FRAME uint F_00ddeda0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeda0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddedb0 */
GEN_FRAME uint F_00ddedb0(unsigned int gen_a0)
{
  GEN_ENTER(0xddedb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2e8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddedd0 */
GEN_NOFRAME uint F_00ddedd0(void)
{
  GEN_ENTER(0xddedd0u, 0u, 0u, 0u, 0u);
  return 0x114a2e8;
}

/* ref: FUN_00ddede0 */
GEN_FRAME uint F_00ddede0(unsigned int gen_a0)
{
  GEN_ENTER(0xddede0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2f8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddee00 */
GEN_NOFRAME uint F_00ddee00(void)
{
  GEN_ENTER(0xddee00u, 0u, 0u, 0u, 0u);
  return 0x114a2f8;
}

/* ref: FUN_00ddee60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ddee60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddee60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00ddee90 */
GEN_FRAME uint GEN_THISCALL F_00ddee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddee90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddeeb0 */
GEN_FRAME unsigned int F_00ddeeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeeb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddeee0 */
GEN_FRAME uint GEN_THISCALL F_00ddeee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddef40 */
GEN_FRAME unsigned int F_00ddef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddef40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 4 + iVar1 * 8);
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = (undefined *)((int)this - 8);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00ddef70 */
GEN_NOFRAME uint GEN_THISCALL F_00ddef70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 4 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00ddefa0 */
GEN_FRAME uint GEN_THISCALL F_00ddefa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddefa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddf000 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
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

/* ref: FUN_00ddf070 */
GEN_FRAME uint F_00ddf070(unsigned int gen_a0)
{
  GEN_ENTER(0xddf070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf0a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
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

/* ref: FUN_00ddf130 */
GEN_FRAME uint F_00ddf130(unsigned int gen_a0)
{
  GEN_ENTER(0xddf130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf160 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = F_00ddf0a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddf180 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
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

/* ref: hkxSparselyAnimatedInt::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddf0a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf230 */
GEN_FRAME uint F_00ddf230(unsigned int gen_a0)
{
  GEN_ENTER(0xddf230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf260 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xc) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
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

/* ref: hkxSparselyAnimatedEnum::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x20) GEN_EDX_FWD);
  }
  *(undefined4 *)(this + 0x20) = 0;
  F_00ddf0a0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkxEnum::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddf260(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf350 */
GEN_FRAME uint F_00ddf350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf370 */
GEN_FRAME unsigned int F_00ddf370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddf390 */
GEN_FRAME uint F_00ddf390(unsigned int gen_a0)
{
  GEN_ENTER(0xddf390u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dddf50(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddf3c0 */
GEN_FRAME uint GEN_THISCALL F_00ddf3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf3c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00ddf3e0 */
GEN_FRAME uint F_00ddf3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf400 */
GEN_FRAME unsigned int F_00ddf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de62f0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddf420 */
GEN_FRAME uint F_00ddf420(unsigned int gen_a0)
{
  GEN_ENTER(0xddf420u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)param_1 + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)param_1 + 4) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddf450 */
GEN_FRAME uint F_00ddf450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf470 */
GEN_FRAME uint F_00ddf470(unsigned int gen_a0)
{
  GEN_ENTER(0xddf470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf480 */
GEN_FRAME uint F_00ddf480(unsigned int gen_a0)
{
  GEN_ENTER(0xddf480u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a498));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf4a0 */
GEN_NOFRAME uint F_00ddf4a0(void)
{
  GEN_ENTER(0xddf4a0u, 0u, 0u, 0u, 0u);
  return 0x114a498;
}

/* ref: FUN_00ddf4c0 */
GEN_FRAME uint F_00ddf4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf4c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf4f0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf4f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkxVertexVectorDataChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 << 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf5b0 */
GEN_FRAME uint F_00ddf5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf5d0 */
GEN_FRAME uint F_00ddf5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf5e0 */
GEN_FRAME uint F_00ddf5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf5e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a4f0));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf600 */
GEN_NOFRAME uint F_00ddf600(void)
{
  GEN_ENTER(0xddf600u, 0u, 0u, 0u, 0u);
  return 0x114a4f0;
}

/* ref: FUN_00ddf620 */
GEN_FRAME uint F_00ddf620(unsigned int gen_a0)
{
  GEN_ENTER(0xddf620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf650 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf650u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkxVertexSelectionChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf710 */
GEN_FRAME uint F_00ddf710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf730 */
GEN_FRAME uint F_00ddf730(unsigned int gen_a0)
{
  GEN_ENTER(0xddf730u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf740 */
GEN_FRAME uint F_00ddf740(unsigned int gen_a0)
{
  GEN_ENTER(0xddf740u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a544));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf760 */
GEN_NOFRAME uint F_00ddf760(void)
{
  GEN_ENTER(0xddf760u, 0u, 0u, 0u, 0u);
  return 0x114a544;
}

/* ref: FUN_00ddf780 */
GEN_FRAME uint F_00ddf780(unsigned int gen_a0)
{
  GEN_ENTER(0xddf780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf7b0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf7b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf7b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkxVertexIntDataChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf870 */
GEN_FRAME uint F_00ddf870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf890 */
GEN_FRAME uint F_00ddf890(unsigned int gen_a0)
{
  GEN_ENTER(0xddf890u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf8a0 */
GEN_FRAME uint F_00ddf8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a5d8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf8c0 */
GEN_NOFRAME uint F_00ddf8c0(void)
{
  GEN_ENTER(0xddf8c0u, 0u, 0u, 0u, 0u);
  return 0x114a5d8;
}

/* ref: FUN_00ddf8f0 */
GEN_FRAME uint F_00ddf8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf8f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf920 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf920u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkxVertexFloatDataChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf9e0 */
GEN_FRAME uint F_00ddf9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfa00 */
GEN_FRAME uint F_00ddfa00(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfa10 */
GEN_FRAME uint F_00ddfa10(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a630));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddfa30 */
GEN_NOFRAME uint F_00ddfa30(void)
{
  GEN_ENTER(0xddfa30u, 0u, 0u, 0u, 0u);
  return 0x114a630;
}

/* ref: FUN_00ddfa50 */
GEN_FRAME uint F_00ddfa50(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddfa80 */
GEN_NOFRAME uint GEN_THISCALL F_00ddfa80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfa80u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkxTriangleSelectionChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddfad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfb40 */
GEN_FRAME uint F_00ddfb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfb60 */
GEN_FRAME uint F_00ddfb60(unsigned int gen_a0)
{
  GEN_ENTER(0xddfb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfb70 */
GEN_FRAME unsigned int F_00ddfb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfb70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 7 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddfba0 */
GEN_NOFRAME uint F_00ddfba0(void)
{
  GEN_ENTER(0xddfba0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  return 0x114a6e4;
}

/* ref: FUN_00ddfbe0 */
GEN_FRAME uint GEN_THISCALL F_00ddfbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
  F_00d91350(in_ecx + 6 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 7 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00ddfc10 */
GEN_FRAME uint F_00ddfc10(unsigned int gen_a0)
{
  GEN_ENTER(0xddfc10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddfc40 */
GEN_NOFRAME uint GEN_THISCALL F_00ddfc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x1c) GEN_EDX_FWD);
  F_00d91510((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxTextureInplace::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddfca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  F_00d91510(this + 0x1c GEN_EDX_FWD);
  F_00d91510(this + 0x18 GEN_EDX_ARG);
  uVar1 = *(uint *)(this + 0x14);
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0xc),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfd20 */
GEN_FRAME uint F_00ddfd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfd30 */
GEN_FRAME uint GEN_THISCALL F_00ddfd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  F_00d91350((int)this + 0xc GEN_EDX_ARG,param_1);
  F_00d91350((int)this + 0x10 GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00ddfd70 */
GEN_NOFRAME uint GEN_THISCALL F_00ddfd70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  F_00d91510((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  uVar1 = F_00d91510((undefined *)((int)this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00ddfdb0 */
GEN_FRAME unsigned int F_00ddfdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 3 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddfdf0 */
GEN_FRAME uint F_00ddfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xddfdf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfe00 */
GEN_NOFRAME uint F_00ddfe00(void)
{
  GEN_ENTER(0xddfe00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  return 0x114a754;
}

/* ref: FUN_00ddfe50 */
GEN_FRAME uint F_00ddfe50(unsigned int gen_a0)
{
  GEN_ENTER(0xddfe50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxTextureFile::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddfe80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x10 GEN_EDX_FWD);
  F_00d91510(this + 0xc GEN_EDX_ARG);
  F_00d91510(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfed0 */
GEN_FRAME uint F_00ddfed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfef0 */
GEN_FRAME uint F_00ddfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xddfef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddff00 */
GEN_FRAME uint F_00ddff00(unsigned int gen_a0)
{
  GEN_ENTER(0xddff00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a7ac));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddff20 */
GEN_NOFRAME uint F_00ddff20(void)
{
  GEN_ENTER(0xddff20u, 0u, 0u, 0u, 0u);
  return 0x114a7ac;
}

/* ref: FUN_00ddff40 */
GEN_FRAME uint F_00ddff40(unsigned int gen_a0)
{
  GEN_ENTER(0xddff40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddff70 */
GEN_NOFRAME uint GEN_THISCALL F_00ddff70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddff70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar2 = *(int *)((int)this + 0xc) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = (undefined *)((int)this_00 - 4);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
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

/* ref: hkxSparselyAnimatedString::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de0000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddff70(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0040 */
GEN_FRAME uint F_00de0040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de0060 */
GEN_FRAME uint F_00de0060(unsigned int gen_a0)
{
  GEN_ENTER(0xde0060u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de0070 */
GEN_FRAME uint F_00de0070(unsigned int gen_a0)
{
  GEN_ENTER(0xde0070u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2d8));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0090 */
GEN_NOFRAME uint F_00de0090(void)
{
  GEN_ENTER(0xde0090u, 0u, 0u, 0u, 0u);
  return 0x114a2d8;
}

/* ref: FUN_00de00a0 */
GEN_FRAME uint F_00de00a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde00a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de00c0 */
GEN_FRAME uint F_00de00c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde00c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de00d0 */
GEN_FRAME uint F_00de00d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde00d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a860));
  }
  return (uint)param_1;
}

/* ref: FUN_00de00f0 */
GEN_NOFRAME uint F_00de00f0(void)
{
  GEN_ENTER(0xde00f0u, 0u, 0u, 0u, 0u);
  return 0x114a860;
}

/* ref: FUN_00de0130 */
GEN_FRAME uint F_00de0130(unsigned int gen_a0)
{
  GEN_ENTER(0xde0130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de0160 */
GEN_NOFRAME uint GEN_THISCALL F_00de0160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxSparselyAnimatedBool::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de01d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde01d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de0160(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0210 */
GEN_FRAME uint F_00de0210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de0230 */
GEN_FRAME uint F_00de0230(unsigned int gen_a0)
{
  GEN_ENTER(0xde0230u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de0240 */
GEN_FRAME uint F_00de0240(unsigned int gen_a0)
{
  GEN_ENTER(0xde0240u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a90c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0260 */
GEN_NOFRAME uint F_00de0260(void)
{
  GEN_ENTER(0xde0260u, 0u, 0u, 0u, 0u);
  return 0x114a90c;
}

/* ref: FUN_00de0280 */
GEN_FRAME uint F_00de0280(unsigned int gen_a0)
{
  GEN_ENTER(0xde0280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de02b0 */
GEN_NOFRAME uint GEN_THISCALL F_00de02b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde02b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),iVar2 << 6);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x10) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = (undefined *)((int)this_00 - 4);
      iVar2 = iVar2 - 1;
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
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSkinBinding::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de0350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de02b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0390 */
GEN_FRAME uint F_00de0390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de03b0 */
GEN_FRAME uint F_00de03b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde03b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de03c0 */
GEN_FRAME unsigned int F_00de03c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde03c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 3 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de03f0 */
GEN_NOFRAME uint F_00de03f0(void)
{
  GEN_ENTER(0xde03f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  return 0x114ab70;
}

/* ref: FUN_00de0540 */
GEN_FRAME uint GEN_THISCALL F_00de0540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0570 */
GEN_FRAME uint GEN_THISCALL F_00de0570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05a0 */
GEN_FRAME uint GEN_THISCALL F_00de05a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde05a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05d0 */
GEN_FRAME uint GEN_THISCALL F_00de05d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde05d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0600 */
GEN_FRAME uint GEN_THISCALL F_00de0600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0630 */
GEN_FRAME uint GEN_THISCALL F_00de0630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0660 */
GEN_FRAME uint GEN_THISCALL F_00de0660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0680 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de0680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de06a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de06c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de06e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de0700 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de0700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de0720 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de0720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de07b0 */
GEN_FRAME unsigned int F_00de07b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde07b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de07e0 */
GEN_FRAME unsigned int F_00de07e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde07e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0810 */
GEN_FRAME unsigned int F_00de0810(unsigned int gen_a0)
{
  GEN_ENTER(0xde0810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0840 */
GEN_FRAME unsigned int F_00de0840(unsigned int gen_a0)
{
  GEN_ENTER(0xde0840u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0870 */
GEN_FRAME unsigned int F_00de0870(unsigned int gen_a0)
{
  GEN_ENTER(0xde0870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de08a0 */
GEN_FRAME unsigned int F_00de08a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde08a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de08d0 */
GEN_FRAME unsigned int F_00de08d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde08d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0900 */
GEN_FRAME uint GEN_THISCALL F_00de0900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0940 */
GEN_FRAME uint GEN_THISCALL F_00de0940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0980 */
GEN_FRAME uint GEN_THISCALL F_00de0980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de09c0 */
GEN_FRAME uint GEN_THISCALL F_00de09c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde09c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0a00 */
GEN_FRAME uint GEN_THISCALL F_00de0a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0a40 */
GEN_FRAME uint GEN_THISCALL F_00de0a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0a80 */
GEN_FRAME uint GEN_THISCALL F_00de0a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0ac0 */
GEN_FRAME unsigned int F_00de0ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0ac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0af0 */
GEN_FRAME unsigned int F_00de0af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0af0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0b20 */
GEN_FRAME unsigned int F_00de0b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0b50 */
GEN_FRAME unsigned int F_00de0b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0b80 */
GEN_FRAME unsigned int F_00de0b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0bb0 */
GEN_FRAME unsigned int F_00de0bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0bb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0be0 */
GEN_FRAME unsigned int F_00de0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0dd0 */
GEN_FRAME uint GEN_THISCALL F_00de0dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0e40 */
GEN_FRAME uint GEN_THISCALL F_00de0e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0eb0 */
GEN_FRAME uint GEN_THISCALL F_00de0eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0f20 */
GEN_FRAME uint GEN_THISCALL F_00de0f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0f90 */
GEN_FRAME uint GEN_THISCALL F_00de0f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1000 */
GEN_FRAME uint GEN_THISCALL F_00de1000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1070 */
GEN_FRAME uint GEN_THISCALL F_00de1070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de10e0 */
GEN_NOFRAME uint GEN_THISCALL F_00de10e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde10e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de11c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de12a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde12a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de13f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde13f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de14d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde14d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de15b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde15b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de1690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_FRAME uint GEN_THISCALL F_00de1700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 3 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1730 */
GEN_FRAME uint F_00de1730(unsigned int gen_a0)
{
  GEN_ENTER(0xde1730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxScene::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de1760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de6840(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de17a0 */
GEN_FRAME uint F_00de17a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde17a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de17c0 */
GEN_FRAME uint F_00de17c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde17c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de17d0 */
GEN_FRAME uint F_00de17d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde17d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
    uVar1 = F_00d91350(param_1 + 8 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de17f0 */
GEN_NOFRAME uint F_00de17f0(void)
{
  GEN_ENTER(0xde17f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x114abcc;
}

/* ref: FUN_00de1830 */
GEN_FRAME uint GEN_THISCALL F_00de1830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
  F_00d91350(in_ecx + 8 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1850 */
GEN_FRAME uint F_00de1850(unsigned int gen_a0)
{
  GEN_ENTER(0xde1850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de1880 */
GEN_NOFRAME uint GEN_THISCALL F_00de1880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  F_00d91510((undefined *)((int)this + 0x20) GEN_EDX_FWD);
  iVar3 = *(int *)((int)this + 0x18) - 1;
  iVar1 = *(int *)((int)this + 0x14);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = F_00de47a0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkxNodeSelectionSet::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de1900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de1880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de1940 */
GEN_FRAME uint F_00de1940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1950 */
GEN_FRAME uint F_00de1950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1970 */
GEN_FRAME uint F_00de1970(unsigned int gen_a0)
{
  GEN_ENTER(0xde1970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de1990 */
GEN_FRAME unsigned int F_00de1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de74e0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de19b0 */
GEN_FRAME uint F_00de19b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde19b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de19c0 */
GEN_NOFRAME uint F_00de19c0(void)
{
  GEN_ENTER(0xde19c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de74e0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de19f0 */
GEN_FRAME unsigned int F_00de19f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde19f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de1a20 */
GEN_NOFRAME uint F_00de1a20(void)
{
  GEN_ENTER(0xde1a20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  return 0x114ac88;
}

/* ref: FUN_00de1a60 */
GEN_FRAME uint GEN_THISCALL F_00de1a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 6 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1a90 */
GEN_NOFRAME uint GEN_THISCALL F_00de1a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  F_00d91510((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  uVar1 = F_00de47a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00de1ab0 */
GEN_FRAME uint F_00de1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xde1ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMesh::UserChannelInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de1ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x18 GEN_EDX_FWD);
  F_00d91510(this + 0x14 GEN_EDX_ARG);
  F_00de47a0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de1b30 */
GEN_FRAME uint F_00de1b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1b50 */
GEN_FRAME uint F_00de1b50(unsigned int gen_a0)
{
  GEN_ENTER(0xde1b50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de1b60 */
GEN_FRAME uint F_00de1b60(unsigned int gen_a0)
{
  GEN_ENTER(0xde1b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ad4c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de1b80 */
GEN_NOFRAME uint F_00de1b80(void)
{
  GEN_ENTER(0xde1b80u, 0u, 0u, 0u, 0u);
  return 0x114ad4c;
}

/* ref: FUN_00de1bc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de1bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de1c20 */
GEN_FRAME uint GEN_THISCALL F_00de1c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde1c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c50 */
GEN_FRAME uint GEN_THISCALL F_00de1c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde1c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de1c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de1c90 */
GEN_FRAME unsigned int F_00de1c90(unsigned int gen_a0)
{
  GEN_ENTER(0xde1c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de1ce0 */
GEN_FRAME uint GEN_THISCALL F_00de1ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de1d20 */
GEN_FRAME unsigned int F_00de1d20(unsigned int gen_a0)
{
  GEN_ENTER(0xde1d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de1d50 */
GEN_FRAME unsigned int F_00de1d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de1d80 */
GEN_FRAME uint GEN_THISCALL F_00de1d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de1e00 */
GEN_FRAME unsigned int F_00de1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1e00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de1e30 */
GEN_FRAME uint GEN_THISCALL F_00de1e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1ee0 */
GEN_NOFRAME uint GEN_THISCALL F_00de1ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_FRAME uint GEN_THISCALL F_00de1f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1fc0 */
GEN_NOFRAME uint GEN_THISCALL F_00de1fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de2030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_NOFRAME uint GEN_THISCALL F_00de20a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde20a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_FRAME uint F_00de2120(unsigned int gen_a0)
{
  GEN_ENTER(0xde2120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2150 */
GEN_NOFRAME uint GEN_THISCALL F_00de2150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  iVar4 = *(int *)((int)this + 0x20) - 1;
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar4 = *(int *)((int)this + 0x10) - 1;
  iVar1 = *(int *)((int)this + 0xc);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar3 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkxMeshSection::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de2250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de2150(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2290 */
GEN_FRAME uint F_00de2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de22b0 */
GEN_FRAME unsigned int F_00de22b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde22b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de7f70(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de22d0 */
GEN_FRAME uint F_00de22d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde22d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de22e0 */
GEN_NOFRAME uint F_00de22e0(void)
{
  GEN_ENTER(0xde22e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de7f70(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de2310 */
GEN_FRAME uint F_00de2310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2330 */
GEN_FRAME uint F_00de2330(unsigned int gen_a0)
{
  GEN_ENTER(0xde2330u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2340 */
GEN_FRAME unsigned int F_00de2340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ae9c));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de2380 */
GEN_NOFRAME uint F_00de2380(void)
{
  GEN_ENTER(0xde2380u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,0);
  return 0x114ae9c;
}

/* ref: FUN_00de23f0 */
GEN_FRAME uint GEN_THISCALL F_00de23f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde23f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ae9c));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  F_00d91350((int)this + 0x10 GEN_EDX_ARG,param_1);
  F_00d91350((int)this + 0x14 GEN_EDX_ARG,param_1);
  F_00d91350((int)this + 0x18 GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00de2440 */
GEN_FRAME uint F_00de2440(unsigned int gen_a0)
{
  GEN_ENTER(0xde2440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2470 */
GEN_NOFRAME uint GEN_THISCALL F_00de2470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  F_00d91510((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  F_00d91510((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  F_00d91510((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  uVar1 = F_00d91510((undefined *)((int)this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxMaterialShader::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de24e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde24e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de2470(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2520 */
GEN_FRAME uint F_00de2520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2540 */
GEN_FRAME uint F_00de2540(unsigned int gen_a0)
{
  GEN_ENTER(0xde2540u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2550 */
GEN_FRAME uint F_00de2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114afbc));
    uVar1 = F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de2570 */
GEN_NOFRAME uint F_00de2570(void)
{
  GEN_ENTER(0xde2570u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  return 0x114afbc;
}

/* ref: FUN_00de25c0 */
GEN_FRAME uint GEN_THISCALL F_00de25c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde25c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114afbc));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de25e0 */
GEN_FRAME uint F_00de25e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde25e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2610 */
GEN_NOFRAME uint GEN_THISCALL F_00de2610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = F_00d91510((undefined *)((int)this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxMaterialEffect::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de2660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)(this + 0x18);
  *(undefined4 *)(this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x10),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x80000000;
  F_00d91510(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de26e0 */
GEN_FRAME uint F_00de26e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde26e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2700 */
GEN_FRAME uint F_00de2700(unsigned int gen_a0)
{
  GEN_ENTER(0xde2700u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2710 */
GEN_FRAME uint F_00de2710(unsigned int gen_a0)
{
  GEN_ENTER(0xde2710u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b044));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2730 */
GEN_NOFRAME uint F_00de2730(void)
{
  GEN_ENTER(0xde2730u, 0u, 0u, 0u, 0u);
  return 0x114b044;
}

/* ref: FUN_00de2770 */
GEN_FRAME uint F_00de2770(unsigned int gen_a0)
{
  GEN_ENTER(0xde2770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxLight::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de27a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde27a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de27e0 */
GEN_FRAME uint F_00de27e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde27e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2800 */
GEN_FRAME uint F_00de2800(unsigned int gen_a0)
{
  GEN_ENTER(0xde2800u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2810 */
GEN_FRAME uint F_00de2810(unsigned int gen_a0)
{
  GEN_ENTER(0xde2810u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b124));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2830 */
GEN_NOFRAME uint F_00de2830(void)
{
  GEN_ENTER(0xde2830u, 0u, 0u, 0u, 0u);
  return 0x114b124;
}

/* ref: FUN_00de2860 */
GEN_FRAME uint F_00de2860(unsigned int gen_a0)
{
  GEN_ENTER(0xde2860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2890 */
GEN_NOFRAME uint GEN_THISCALL F_00de2890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
                       (uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxIndexBuffer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de2910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de2890(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2950 */
GEN_FRAME uint F_00de2950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2970 */
GEN_FRAME uint F_00de2970(unsigned int gen_a0)
{
  GEN_ENTER(0xde2970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2980 */
GEN_FRAME uint F_00de2980(unsigned int gen_a0)
{
  GEN_ENTER(0xde2980u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b188));
  }
  return (uint)param_1;
}

/* ref: FUN_00de29a0 */
GEN_NOFRAME uint F_00de29a0(void)
{
  GEN_ENTER(0xde29a0u, 0u, 0u, 0u, 0u);
  return 0x114b188;
}

/* ref: FUN_00de29c0 */
GEN_FRAME uint F_00de29c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde29c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de29f0 */
GEN_NOFRAME uint GEN_THISCALL F_00de29f0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00de2a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ab0 */
GEN_FRAME uint F_00de2ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2af0 */
GEN_FRAME uint F_00de2af0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2af0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b284));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2b10 */
GEN_FRAME uint F_00de2b10(unsigned int gen_a0)
{
  GEN_ENTER(0xde2b10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2b20 */
GEN_NOFRAME uint F_00de2b20(void)
{
  GEN_ENTER(0xde2b20u, 0u, 0u, 0u, 0u);
  return 0x114b284;
}

/* ref: FUN_00de2b30 */
GEN_FRAME uint F_00de2b30(unsigned int gen_a0)
{
  GEN_ENTER(0xde2b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxCamera::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de2b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ba0 */
GEN_FRAME uint F_00de2ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2bc0 */
GEN_FRAME uint F_00de2bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2bd0 */
GEN_FRAME uint F_00de2bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
    param_1[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
    uVar1 = F_00d91350(param_1 + 7 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de2c00 */
GEN_NOFRAME uint F_00de2c00(void)
{
  GEN_ENTER(0xde2c00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  return 0x114b2e0;
}

/* ref: FUN_00de2c50 */
GEN_FRAME uint F_00de2c50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2c80 */
GEN_NOFRAME uint GEN_THISCALL F_00de2c80(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00de2cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
  in_ecx[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  F_00d91350(in_ecx + 7 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: hkxBlobMeshShape::vf3 */
GEN_NOFRAME uint F_00de2d00(void)
{
  GEN_ENTER(0xde2d00u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkxBlobMeshShape::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de2d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde2d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: hkxBlobMeshShape::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de2d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: hkxBlobMeshShape::vf7 */
GEN_FRAME uint GEN_THISCALL F_00de2d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x1c GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkxBlobMeshShape::vf2 */
GEN_NOFRAME uint F_00de2d40(void)
{
  GEN_ENTER(0xde2d40u, 0u, 0u, 0u, 0u);
  return 0x15e32e4;
}

/* ref: FUN_00de2d50 */
GEN_FRAME uint F_00de2d50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxBlobMeshShape::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00de2d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c) & 0xfffffffe;
}

/* ref: FUN_00de2d90 */
GEN_NOFRAME uint GEN_THISCALL F_00de2d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x1c) GEN_EDX_FWD);
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
GEN_FRAME uint GEN_THISCALL F_00de2de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkxBlobMeshShape::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de2e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  F_00d91510(this + 0x1c GEN_EDX_FWD);
  uVar1 = *(uint *)(this + 0x18);
  *(undefined4 *)(this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x10),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ed0 */
GEN_FRAME uint F_00de2ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2ef0 */
GEN_FRAME uint F_00de2ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2f00 */
GEN_FRAME uint F_00de2f00(unsigned int gen_a0)
{
  GEN_ENTER(0xde2f00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2f20 */
GEN_NOFRAME uint F_00de2f20(void)
{
  GEN_ENTER(0xde2f20u, 0u, 0u, 0u, 0u);
  return 0x114b2d0;
}

/* ref: FUN_00de2f30 */
GEN_FRAME uint F_00de2f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

