#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: hkDynamicClassNameRegistry::vf8 */
unsigned int F_00df1bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,iVar2,0);
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  return 0;
}

/* ref: FUN_00df1bf0 */
uint F_00df1bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf1bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df1c00 */
uint F_00df1c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf1c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df1c20 */
uint F_00df1c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00df1c30 */
uint F_00df1c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00df1c40 */
uint F_00df1c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf1c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df1c90 */
uint F_00df1c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1c90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00df1cd0 */
uint F_00df1cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf1cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf4 */
uint F_00df1d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da4190(this + 0xc,param_1,0);
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf7 */
uint F_00df1d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf1d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    param_2 = F_00d92610(param_1);
  }
  uVar1 = F_00da3a20(this + 0xc,param_2,param_1);
  return uVar1;
}

/* ref: hkDynamicClassNameRegistry::vf10 */
uint F_00df1d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1d50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  uVar1 = F_00da3970((*(undefined * PTR32 *)&gen_args[1]));
  uVar2 = F_00da3e40(this_00,(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3,uVar1);
  while ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 3)))) != '\0') {
    uVar2 = F_00da39b0(this_00,uVar1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))((*(undefined * PTR32 *)&gen_args[0]),uVar2,0);
    uVar1 = F_00da39f0(this_00,uVar1);
    uVar2 = F_00da3e40(this_00,(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3,uVar1);
  }
  return uVar2;
}

/* ref: FUN_00df1dd0 */
uint F_00df1dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00df1e20 */
uint F_00df1e20(unsigned int gen_a0)
{
  GEN_ENTER(0xdf1e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkDynamicClassNameRegistry::vf0 */
uint F_00df1e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da3e20(this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df1e90 */
uint F_00df1e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1e90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df1ed0 */
uint F_00df1ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf1ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00df1f00 */
uint F_00df1f00(unsigned int gen_a0)
{
  GEN_ENTER(0xdf1f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114c4ec));
  *(char * PTR32 *)((int)this + 8) = "hk_2011.3.1-r1";
  F_00da3de0((undefined *)((int)this + 0xc),local_8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114c51c));
  return (uint)this;
}

/* ref: FUN_00df1f40 */
uint F_00df1f40(unsigned int gen_a0)
{
  GEN_ENTER(0xdf1f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00da3e20((undefined *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df1f60 */
uint F_00df1f60(unsigned int gen_a0)
{
  GEN_ENTER(0xdf1f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkDefaultClassNameRegistry::vf0 */
uint F_00df1f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf1f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da3e20(this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df1fd0 */
uint F_00df1fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf1fd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkDefaultBuiltinTypeRegistry::vf0 */
uint F_00df2000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df2040 */
uint F_00df2040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df2080 */
uint F_00df2080(unsigned int gen_a0)
{
  GEN_ENTER(0xdf2080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00df20d0 */
uint F_00df20d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf20d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkDynamicClassNameRegistry::vf5 */
uint F_00df2110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = this + 0xc;
  uVar2 = F_00da3970(this_00);
  uVar3 = F_00da3e40(this_00,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar2);
  while ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar3 = F_00da39b0(this_00,uVar2);
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
    }
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    *(uint *)(*param_1 + iVar1 * 4) = uVar3;
    uVar2 = F_00da39f0(this_00,uVar2);
    uVar3 = F_00da3e40(this_00,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar2);
  }
  return uVar3;
}

/* ref: FUN_00df21d0 */
uint F_00df21d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf21d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df21e0 */
unsigned int F_00df21e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf21e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df2210 */
uint F_00df2210(unsigned int gen_a0)
{
  GEN_ENTER(0xdf2210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkVtableClassRegistry::vf4 */
uint F_00df2240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8,param_1,0);
  return uVar1;
}

/* ref: hkVtableClassRegistry::vf5 */
uint F_00df2260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8,*param_1,0);
  return uVar1;
}

/* ref: FUN_00df2280 */
uint F_00df2280(unsigned int gen_a0)
{
  GEN_ENTER(0xdf2280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dbdb20((undefined *)((int)this + 8),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df22b0 */
uint F_00df22b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf22b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00df22c0 */
uint F_00df22c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf22c0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00df22e0 */
uint F_00df22e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf22e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkVtableClassRegistry::vf0 */
uint F_00df2320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dbdb20(this + 8,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df2370 */
uint F_00df2370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df23d0 */
unsigned int F_00df23d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf23d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: hkVtableClassRegistry::vf6 */
unsigned int F_00df2400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x10);
  iVar4 = 0;
  if (-1 < iVar1) {
    piVar3 = *(int * PTR32 *)(this + 8);
    do {
      if (*piVar3 != -1) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 <= iVar1);
  }
  if (iVar4 <= iVar1) {
    do {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4 + iVar4 * 8)));
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
      }
      *(undefined4 *)(*param_1 + param_1[1] * 4) = uVar2;
      param_1[1] = param_1[1] + 1;
      iVar1 = *(int *)(this + 0x10);
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar1) {
        piVar3 = ((int *)GEN_TOP((*(int *)(this + 8) + iVar4 * 8)));
        do {
          if (*piVar3 != -1) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 2;
        } while (iVar4 <= iVar1);
      }
    } while (iVar4 <= iVar1);
  }
  return 0;
}

/* ref: hkDefaultBuiltinTypeRegistry::vf7 */
unsigned int F_00df24a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf24a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  uint local_8;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
  uVar1 = local_8 >> 8;
  local_8 = uVar1 << 8;
  puVar3[1] = 0x10020;
  *puVar3 = (*(undefined * PTR32 (*)[11])REFP(0x114c4ec));
  puVar3[2] = "hk_2011.3.1-r1";
  F_00da3de0(puVar3 + 3,local_8);
  *puVar3 = (*(undefined * PTR32 (*)[11])REFP(0x114c51c));
  if (REFG(undefined4, 0x15e4028) != (undefined *)0x0) {
    F_00d91840(REFG(undefined4, 0x15e4028));
  }
  REFG(undefined4, 0x15e4028) = puVar3;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
  local_8 = uVar1 << 8;
  puVar3[1] = 0x10020;
  *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0(puVar3 + 2,local_8);
  puVar3[6] = 1;
  puVar3[7] = 1;
  if (REFG(undefined4, 0x15e402c) != (undefined *)0x0) {
    F_00d91840(REFG(undefined4, 0x15e402c));
  }
  REFG(undefined4, 0x15e402c) = puVar3;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x14)));
  puVar3[1] = 0x10014;
  *puVar3 = (*(undefined * PTR32 (*)[7])REFP(0x114c54c));
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0xffffffff;
  if (REFG(undefined4, 0x15e4030) != (undefined *)0x0) {
    F_00d91840(REFG(undefined4, 0x15e4030));
  }
  REFG(undefined4, 0x15e4030) = puVar3;
  F_00df1880();
  return 0;
}

/* ref: FUN_00df25b0 */
uint F_00df25b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf25b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df25f0 */
uint F_00df25f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf25f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkDynamicClassNameRegistry::vf9 */
uint F_00df2630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,&(*(int *)(gen_frame + 0x0)));
  iVar1 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,*(undefined4 *)((*(int *)(gen_frame + 0x0)) + iVar1 * 4),0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0x8)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4)
    ;
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: hkSerializeDeprecated::vf4 */
uint F_00df26c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf26c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkSerializeDeprecated::vf3 */
uint F_00df26d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xdf26d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 7;
    F_00d91520(param_6 + 1,
                 "XML packfile support is not linked. Perhaps you have HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700 in hkProductFeatures"
                );
  }
  return 1;
}

/* ref: hkSerializeDeprecated::vf5 */
uint F_00df2700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf2700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 7;
    F_00d91520(param_3 + 1,
                 "Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0.0.\nTo do so requires linking some deprecated code from Source/Common/Compat/Deprecated\nIf you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700.\nNote that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\nSome extra effort is required to strip the unused code and data but it will still cost several hundred Kb.\nAlternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest version before loading.\n"
                );
  }
  return 0;
}

/* ref: hkSerializeDeprecated::vf6 */
uint F_00df2730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf2730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 7;
    F_00d91520(param_3 + 1,
                 "Packfile versioning support is not linked. Versioning packfiles at runtime was deprecated in Havok-7.0.0.\nTo do so requires linking some deprecated code from Source/Common/Compat/Deprecated\nIf you are using hkProductFeatures.cxx, ensure you do not define HK_EXCLUDE_FEATURE_SerializeDeprecatedPre700.\nNote that by default this pulls in a lot of code and data (mainly previous versions of hkClasses).\nSome extra effort is required to strip the unused code and data but it will still cost several hundred Kb.\nAlternatively, you can use Tools/PackfileConvert/AsseetCc2 to convert your packfiles the the latest version before loading.\n"
                );
  }
  return 0;
}

/* ref: FUN_00df2760 */
uint F_00df2760(void)
{
  GEN_ENTER(0xdf2760u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x15e3760) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e3760) = *(uint *)&REFG(undefined, 0x15e3760) | 1;
    *(undefined2 *)&REFG(undefined, 0x15e375e) = 1;
    *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x15e3758) = (*(undefined * PTR32 (*)[7])REFP(0x114c7fc));
    F_00c47de6(((code *)REFP(0x107ccf0)));
  }
  return 0x15e3758;
}

/* ref: FUN_00df27d0 */
uint F_00df27d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf27d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSerializeDeprecated::vf0 */
uint F_00df2800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df2840 */
uint F_00df2840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf2840u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char * pcVar1;
  
  pcVar1 = (char *)F_0105a5b0((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[2]) + 3,(*(undefined4 *)&gen_args[2]));
  *(bool *)(*(uint *)&gen_args[1]) = *pcVar1 == '\0';
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00df2870 */
uint F_00df2870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(int *)this = param_1;
  uVar1 = F_00da0e60(param_1);
  *(uint *)((int)this + 4) = uVar1 + param_1;
  return (uint)this;
}

/* ref: FUN_00df28a0 */
uint F_00df28a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf28a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_2 + param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00df28d0 */
uint F_00df28d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf28d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 9;
  return param_2;
}

/* ref: FUN_00df28f0 */
uint F_00df28f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf28f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 8;
  return param_2;
}

/* ref: FUN_00df2910 */
uint F_00df2910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2910u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 2;
  return param_2;
}

/* ref: FUN_00df2930 */
uint F_00df2930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2930u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 3;
  return param_2;
}

/* ref: FUN_00df2960 */
uint F_00df2960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_00df2980 */
uint F_00df2980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdf2980u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00df29a0 */
uint F_00df29a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf29a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    *(short *)(uVar2 + 6) = *(short *)(uVar2 + 6) + 1;
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
  }
  puVar3 = *(undefined4 * PTR32 *)this;
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      uVar2 = *param_1;
      *(uint *)this = uVar2;
      return uVar2;
    }
    *(uint *)this = *param_1;
    return 0xffffffff;
  }
  *(uint *)this = *param_1;
  return uVar2;
}

/* ref: FUN_00df2a00 */
uint F_00df2a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x5c))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00df2a40 */
uint F_00df2a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf2a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x40))))
                    (*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2a60 */
uint F_00df2a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf2a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x48))))
                    (*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2a80 */
uint F_00df2a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x54))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00df2ad0 */
uint F_00df2ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf2ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))
                    (*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df2b10 */
uint F_00df2b10(unsigned int gen_a0)
{
  GEN_ENTER(0xdf2b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00e1bd60((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df2b30 */
uint F_00df2b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf2b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  char cVar2;
  undefined * this_00;
  uint uVar3;
  char * pcVar4;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x78) + 0x2c))))(*(int * PTR32 *)((int)this + 0x78))));
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0x62: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x114c8bc));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x14);
    }
    break;
  case 0x69: ;
    uVar3 = F_00da0d20(param_1,(*(undefined * PTR32 (*)[1])REFP(0x112673c)));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x1c);
    }
    break;
  case 0x72: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x114c8b4));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x18);
    }
    uVar3 = F_00da0d20(param_1,(*(undefined * PTR32 (*)[1])REFP(0x114c8b0)));
    if (uVar3 == 0) {
      uVar3 = F_00e1a240(this_00,param_2);
      uVar3 = F_00e1a640(this_00,uVar3);
      return uVar3;
    }
    break;
  case 0x73: ;
    uVar3 = F_00da0d20(param_1,"string");
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x20);
    }
    uVar3 = F_00da0d20(param_1,"struct");
    if (uVar3 == 0) {
      uVar3 = F_00e1a240(this_00,param_2);
      return uVar3;
    }
    break;
  case 0x76: ;
    uVar3 = F_00da0d20(param_1,&REFG(undefined, 0x1126468));
    if (uVar3 == 0) {
      return *(uint *)((int)this_00 + 0x10);
    }
    uVar3 = F_00da0d60(param_1,(*(undefined * PTR32 (*)[1])REFP(0x1147328)),3);
    if (uVar3 == 0) {
      cVar2 = param_1[3];
      pcVar1 = param_1 + 3;
      pcVar4 = pcVar1;
      if (cVar2 == '\0') {
LAB_00df2bb2: ;
        if (*pcVar4 != '\0') {
          return 0;
        }
      }
      else {
        do {
          if ((cVar2 < '0') || ('9' < cVar2)) goto LAB_00df2bb2;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
      }
      uVar3 = F_00da0e80(pcVar1,0);
      uVar3 = F_00e1a6a0(this_00,*(undefined4 *)((int)this_00 + 0x18),uVar3);
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00df2ce0 */
uint F_00df2ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf2ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char * pcVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00e1c430((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x4)));
  if (uVar1 == 0) {
    pcVar2 = (char *)F_0105a5b0(&(*(undefined4 *)(gen_frame + 0x4)),(int)&(*(undefined4 *)&gen_args[2]) + 3,"\"true\"");
    if (*pcVar2 != '\0') {
      *(*(undefined1 * PTR32 *)&gen_args[1]) = 1;
      return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
    }
    pcVar2 = (char *)F_0105a5b0(&(*(undefined4 *)(gen_frame + 0x4)),(int)&(*(undefined4 *)&gen_args[2]) + 3,"\"false\"");
    if (*pcVar2 != '\0') {
      *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
    }
  }
  *(*(undefined1 * PTR32 *)&gen_args[1]) = (undefined1)(*(undefined4 *)&gen_args[3]);
  return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00df2d60 */
uint F_00df2d60(unsigned int gen_a0)
{
  GEN_ENTER(0xdf2d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x74);
  while (uVar1 == 5) {
    uVar1 = F_00e1c9e0(this);
  }
  return uVar1;
}

/* ref: FUN_00df2d80 */
uint F_00df2d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da4190((undefined *)((int)this + 0xb4),param_1,0);
  return uVar1;
}

/* ref: FUN_00df2da0 */
uint F_00df2da0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf2da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  this_00 = (undefined *)((int)this + 0xb4);
  (*(uint *)(gen_frame + 0x4)) = F_00da3970(this_00);
  F_00da3e40(this_00,&(*(char *)(gen_frame + 0xb)),(*(uint *)(gen_frame + 0x4)));
  if ((*(char *)(gen_frame + 0xb)) == '\0') {
    return 0;
  }
  do {
    piVar4 = (int *)F_00da39b0(this_00,(*(uint *)(gen_frame + 0x4)));
    if (*piVar4 == 0) {
      return 1;
    }
    iVar5 = 0;
    if (0 < piVar4[2]) {
      do {
        puVar2 = (undefined4 *)*piVar4;
        if (puVar2 != (undefined4 *)0x0) {
          *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
          puVar2[2] = puVar2[2] + 1;
        }
        puVar1 = (undefined4 *)(piVar4[1] + iVar5 * 8);
        piVar3 = (int *)*puVar1;
        ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,puVar1[1],puVar2);
        if (puVar2 != (undefined4 *)0x0) {
          *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
          piVar3 = puVar2 + 2;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[2]);
    }
    iVar5 = 0;
    if (0 < piVar4[5]) {
      do {
        piVar3 = *(int * PTR32 *)(piVar4[4] + iVar5 * 8);
        ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(piVar4[4] + iVar5 * 8 + 4),*piVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[5]);
    }
    (*(uint *)(gen_frame + 0x4)) = F_00da39f0(this_00,(*(uint *)(gen_frame + 0x4)));
    F_00da3e40(this_00,&(*(char *)(gen_frame + 0xb)),(*(uint *)(gen_frame + 0x4)));
  } while ((*(char *)(gen_frame + 0xb)) != '\0');
  return 0;
}

/* ref: FUN_00df2eb0 */
uint F_00df2eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf2eb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  int * piVar2;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * this_00;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar7 = (*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1]);
  iVar1 = iVar7 + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x98)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x18));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000080;
  if (0x80 < iVar1) {
    iVar4 = 0x100;
    if (0xff < iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),iVar4,1);
  }
  (*(int *)(gen_frame + 0x10)) = iVar1;
  F_00da0e40((*(undefined1 * PTR32 *)(gen_frame + 0xc)),*piVar2,iVar7);
  puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0xc));
  (*(undefined1 * PTR32 *)(gen_frame + 0xc))[iVar7] = 0;
  this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x98)) + 0x98);
  uVar5 = F_00da3ae0(this_00,(*(undefined1 * PTR32 *)(gen_frame + 0xc)));
  F_00da3e40(this_00,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar5);
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '\0') {
    uVar6 = F_00da0f10(puVar3,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(this_00,uVar6,1);
  }
  else {
    uVar6 = F_00da3990(this_00,uVar5);
    F_00da39d0(this_00,uVar5,1);
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff)
    ;
  }
  return uVar6;
}

/* ref: FUN_00df2fe0 */
uint F_00df2fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf2fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  
  uVar2 = F_00e1c480(this,((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00df2eb0(this,uVar2);
  if (*(uint *)((int)this + 0xac) == (*(uint *)((int)this + 0xb0) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xa8),4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xa8) + *(int *)((int)this + 0xac) * 4)));
  *puVar1 = uVar2;
  *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00df3040 */
uint F_00df3040(unsigned int gen_a0)
{
  GEN_ENTER(0xdf3040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00df2d60(this);
  uVar1 = F_00e1c480(this,((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00df2eb0(this,uVar1);
  if ((0 < *(int *)((int)this + 0xac)) &&
     (uVar1 == *((uint *)GEN_TOP((*(int *)((int)this + 0xa8) + -4 + *(int *)((int)this + 0xac) * 4))))) {
    F_00e1c9e0(this);
    *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + -1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00df30a0 */
uint F_00df30a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf30a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 1) {
    iVar3 = (int)&(*(undefined4 *)&gen_args[1]) + 3;
    uVar4 = (*(undefined4 *)&gen_args[1]);
    this_00 = (undefined *)F_00e1c480((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)));
    pcVar1 = (char *)F_0105a5b0(this_00,iVar3,uVar4);
    if (*pcVar1 != '\0') {
      F_00df2fe0((*(undefined * PTR32 *)&gen_args[0]));
      F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]));
      uVar2 = F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
      if (uVar2 == 4) {
        uVar4 = (*(undefined4 *)&gen_args[2]);
        uVar2 = F_00e1c4c0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)));
        uVar2 = F_00e1c0f0(uVar2,uVar4);
        if (uVar2 != 0) {
          return uVar2;
        }
        F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]));
        uVar2 = F_00df3040((*(undefined * PTR32 *)&gen_args[0]));
        return uVar2;
      }
    }
  }
  return 1;
}

/* ref: FUN_00df3130 */
uint F_00df3130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3130u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 1) {
    iVar3 = (int)&(*(undefined4 *)&gen_args[1]) + 3;
    uVar4 = (*(undefined4 *)&gen_args[1]);
    this_00 = (undefined *)F_00e1c480((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)));
    pcVar1 = (char *)F_0105a5b0(this_00,iVar3,uVar4);
    if (*pcVar1 != '\0') {
      F_00df2fe0((*(undefined * PTR32 *)&gen_args[0]));
      F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]));
      uVar2 = F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
      if (uVar2 == 4) {
        uVar4 = (*(undefined4 *)&gen_args[2]);
        uVar2 = F_00e1c4c0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)));
        uVar2 = F_00e1c170(uVar2,uVar4);
        if (uVar2 != 0) {
          return uVar2;
        }
        F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]));
        uVar2 = F_00df3040((*(undefined * PTR32 *)&gen_args[0]));
        return uVar2;
      }
    }
  }
  return 1;
}

/* ref: FUN_00df31c0 */
uint F_00df31c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf31c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  F_00df2fe0(this);
  F_00e1c9e0(this);
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = F_00df2d60(this);
      if (uVar1 != 4) {
        return 1;
      }
      F_00e1c4c0(this,((undefined1 *)(gen_frame + 0x4)));
      uVar1 = F_00e1c170((uint)((undefined1 *)(gen_frame + 0x4)),param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
      F_00e1c9e0(this);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < param_2);
  }
  uVar1 = F_00df3040(this);
  return uVar1;
}

/* ref: FUN_00df3240 */
uint F_00df3240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x14))((int *)*param_2);
  iVar3 = 0;
  if (0 < (int)uVar1) {
    do {
      F_00df2d60(this);
      if (*(int *)((int)this + 0x74) == 1) {
        uVar2 = F_00df30a0(this,param_1,&(*(undefined4 *)(gen_frame + 0x14)));
        if (uVar2 != 0) {
          return uVar2;
        }
        ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x58))((int *)*param_2,iVar3,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
      }
      else {
        if (*(int *)((int)this + 0x74) != 4) {
          return 1;
        }
        F_00e1c4c0(this,((undefined1 *)(gen_frame + 0x4)));
        uVar2 = F_00e1c0f0(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)));
        if (uVar2 != 0) {
          return uVar2;
        }
        ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x58))((int *)*param_2,iVar3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
        F_00e1c9e0(this);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00df3300 */
uint F_00df3300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3300u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = (*(uint *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x14)) = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(uint *)&gen_args[2]) + 0x14))))(*(int * PTR32 *)(*(uint *)&gen_args[2]));
  iVar3 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x14))) {
    do {
      F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 1) {
        uVar2 = F_00df3130((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(uint *)&gen_args[2]));
        if (uVar2 != 0) {
          return uVar2;
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar1 + 0x40))))(iVar3,(*(uint *)&gen_args[2]));
      }
      else {
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) != 4) {
          return 1;
        }
        puVar4 = &(*(undefined4 *)(gen_frame + 0x18));
        uVar2 = F_00e1c4c0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0xc)));
        uVar2 = F_00e1c170(uVar2,puVar4);
        if (uVar2 != 0) {
          return uVar2;
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar1 + 0x40))))(iVar3,(*(undefined4 *)(gen_frame + 0x18)));
        F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(*(uint *)(gen_frame + 0x14)));
  }
  return 0;
}

/* ref: FUN_00df33c0 */
uint F_00df33c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf33c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
  uVar1 = F_00e1c430(this,param_1,&(*(char * PTR32 *)(gen_frame + 0x4)));
  if (uVar1 == 0) {
    if (((1 < (int)(*(char * PTR32 *)(gen_frame + 0x8)) - (int)(*(char * PTR32 *)(gen_frame + 0x4))) && (*(*(char * PTR32 *)(gen_frame + 0x4)) == '\"')) &&
       (*(char *)((int)(*(char * PTR32 *)(gen_frame + 0x8)) + -1) == '\"')) {
      (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x8)) + -1);
      (*(char * PTR32 *)(gen_frame + 0x4)) = (*(char * PTR32 *)(gen_frame + 0x4)) + 1;
      uVar1 = F_00df2eb0(this,&(*(char * PTR32 *)(gen_frame + 0x4)));
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00df3420 */
uint F_00df3420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf3420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  
  puVar1 = (undefined4 *)F_00da4190((undefined *)((int)this + 0xb4),param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x1c)));
    puVar1 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0x80000000;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0x80000000;
      puVar1 = puVar3;
    }
    F_00da3a20((undefined *)((int)this + 0xb4),param_1,puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00df3490 */
uint F_00df3490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  piVar1 = (int *)F_00df3420(this,param_1);
  if (*piVar1 != 0) {
    return 1;
  }
  *piVar1 = *param_2;
  return 0;
}

/* ref: FUN_00df36c0 */
uint F_00df36c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf36c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  char * pcVar1;
  uint uVar2;
  undefined1 * puVar3;
  
  *param_1 = 0;
  F_00e1c480(this,((undefined1 *)(gen_frame + 0x118)));
  pcVar1 = (char *)F_0105a5b0(((undefined1 *)(gen_frame + 0x118)),&(*(char *)(gen_frame + 0x12b)),&REFG(undefined, 0x114c8d4));
  if (*pcVar1 != '\0') {
    F_00e1c9e0(this);
    return 0;
  }
  pcVar1 = (char *)F_0105a5b0(((undefined1 *)(gen_frame + 0x118)),&(*(char *)(gen_frame + 0x12b)),"string");
  if (*pcVar1 == '\0') {
    return 1;
  }
  if (*(int *)((int)this + 0x74) == 2) {
    F_00e1c9e0(this);
    *param_1 = (uint)&REFG(undefined1, 0x107fc63);
    return 0;
  }
  if (*(int *)((int)this + 0x74) != 1) {
    return 1;
  }
  F_00df2fe0(this);
  uVar2 = F_00e1c9e0(this);
  if (uVar2 == 3) {
    *param_1 = (uint)&REFG(undefined1, 0x107fc63);
    uVar2 = F_00df3040(this);
    return uVar2;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) = ((undefined1 *)(gen_frame + 0x98));
  (*(undefined4 *)(gen_frame + 0x94)) = 0x80000080;
  (*(int *)(gen_frame + 0x90)) = 1;
  ((undefined1 *)(gen_frame + 0x98))[0] = 0;
  while ((uVar2 == 4 || (uVar2 == 5))) {
    F_00e1c4c0(this,&(*(undefined1 * PTR32 *)(gen_frame + 0x120)));
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(undefined1 * PTR32 *)(gen_frame + 0x120)),(int)(*(undefined1 * PTR32 *)(gen_frame + 0x124)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x120)));
    uVar2 = F_00e1c9e0(this);
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x120)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c));
  (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) + (*(int *)(gen_frame + 0x90)) + -1;
  pcVar1 = (char *)F_00e1c210(&(*(char *)(gen_frame + 0x12b)),&(*(undefined1 * PTR32 *)(gen_frame + 0x120)));
  if (*pcVar1 != '\0') {
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
    (*(undefined1 * PTR32 *)(gen_frame + 0x120)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c));
    (*(undefined4 *)(gen_frame + 0x8)) = 0x80000080;
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    ((undefined1 *)(gen_frame + 0xc))[0] = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) + (*(int *)(gen_frame + 0x90)) + -1;
    F_00e1c240(&(*(undefined1 * PTR32 *)(gen_frame + 0x120)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    F_00da4cf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    F_00d877b0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = (*(undefined1 * PTR32 *)(gen_frame + 0x8c));
  uVar2 = F_00da3ae0((undefined *)((int)this + 0x98),(*(undefined1 * PTR32 *)(gen_frame + 0x8c)));
  F_00da3e40((int)this + 0x98,&(*(char *)(gen_frame + 0x12b)),uVar2);
  if ((*(char *)(gen_frame + 0x12b)) == '\0') {
    puVar3 = (undefined1 *)F_00da0f10((*(undefined1 * PTR32 *)(gen_frame + 0x124)),&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20((undefined *)((int)this + 0x98),puVar3,1);
  }
  else {
    (*(undefined1 * PTR32 *)(gen_frame + 0x124)) = (undefined1 *)F_00da3990((int)this + 0x98,uVar2);
    F_00da39d0((undefined *)((int)this + 0x98),uVar2,1);
    puVar3 = (*(undefined1 * PTR32 *)(gen_frame + 0x124));
  }
  *param_1 = (uint)puVar3;
  uVar2 = F_00df3040(this);
  F_00d877b0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)));
  return uVar2;
}

/* ref: FUN_00df3910 */
uint F_00df3910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3910u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  undefined * PTR32 * ppuVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  
  puVar7 = (*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (*(undefined * PTR32 *)&gen_args[0]);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))))));
  iVar5 = (*(int *)&gen_args[1]);
  iVar6 = *piVar1;
  switch((unsigned int)(uintptr_t)(iVar6)) {
  case 2: ;
  case 4: ;
    ppuVar2 = (undefined * PTR32 *)&REFG(undefined, 0x114c8bc);
    if (iVar6 != 2) {
      ppuVar2 = (*(undefined * PTR32 (*)[1])REFP(0x112673c));
    }
    uVar3 = F_00df3240((*(undefined * PTR32 *)&gen_args[0]),ppuVar2,puVar7);
    return uVar3;
  case 3: ;
    uVar3 = F_00df3300((*(undefined * PTR32 *)&gen_args[0]),&REFG(undefined, 0x114c8b4),(uint)puVar7);
    return uVar3;
  case 5: ;
    iVar6 = 0;
    if (0 < (*(int *)&gen_args[1])) {
      do {
        F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
        uVar3 = F_00df36c0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]));
        if (uVar3 != 0) {
          return 1;
        }
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x38))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar6,(*(int *)&gen_args[1]));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
      F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
      return 0;
    }
    break;
  case 6: ;
    (*(int *)(gen_frame + 0x54)) = 0;
    if (0 < (*(int *)&gen_args[1])) {
      do {
        F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
        (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar7 + 0x5c))((int *)*puVar7,(*(int *)(gen_frame + 0x54)))));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) + 1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x58))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x58))[2] + 1;
        }
        if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))),4);
        }
        puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) * 4)));
        if ((puVar7 != (undefined4 *)0x0) && (*puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)), (*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0)) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) + 1;
          (*(undefined4 * PTR32 *)(gen_frame + 0x58))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x58))[2] + 1;
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) + 1;
        uVar3 = F_00df4100((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
        if (uVar3 != 0) {
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) + -1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x58)))((*(undefined4 * PTR32 *)(gen_frame + 0x58)),1);
            }
          }
          return uVar3;
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6) + -1;
          piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x58)))((*(undefined4 * PTR32 *)(gen_frame + 0x58)),1);
          }
        }
        (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
        puVar7 = (*(undefined4 * PTR32 *)&gen_args[2]);
      } while ((*(int *)(gen_frame + 0x54)) < (*(int *)&gen_args[1]));
      F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
      return 0;
    }
    break;
  case 7: ;
    iVar6 = 0;
    if (0 < (*(int *)&gen_args[1])) {
      do {
        (*(undefined4 *)(gen_frame + 0x50)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
        (*(int *)(gen_frame + 0x54)) = iVar6;
        F_00df5cf0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x50)));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
      F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
      return 0;
    }
    break;
  default: ;
    return 1;
  case 9: ;
    if (((iVar6 == 9) && (*(int *)piVar1[1] == 3)) &&
       ((iVar6 = piVar1[2], iVar6 == 4 || (((iVar6 == 8 || (iVar6 == 0xc)) || (iVar6 == 0x10)))))) {
      uVar3 = F_00e19c70(piVar1);
      (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = ((undefined1 *)(gen_frame + 0x10));
      (*(uint *)(gen_frame + 0x8)) = 0;
      (*(int *)(gen_frame + 0xc)) = -0x7ffffff0;
      if (0x10 < (int)uVar3) {
        uVar4 = 0x20;
        if (0x1f < (int)uVar3) {
          uVar4 = uVar3;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar4,4);
      }
      iVar6 = (*(int *)&gen_args[1]);
      iVar5 = 0;
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (0 < (*(int *)&gen_args[1])) {
        do {
          F_00df2d60((*(undefined4 * PTR32 *)(gen_frame + 0x58)));
          uVar4 = F_00df31c0((*(undefined4 * PTR32 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),uVar3);
          if (uVar4 != 0) {
            (*(uint *)(gen_frame + 0x8)) = 0;
            if ((*(int *)(gen_frame + 0xc)) < 0) {
              return 1;
            }
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0xc)) * 4);
            return 1;
          }
          ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x30))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar5,(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      (*(uint *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
      if (-1 < (*(int *)(gen_frame + 0xc))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0xc)) * 4);
        (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
      }
    }
  }
  F_00df2d60((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_00df3c50 */
uint F_00df3c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf3c50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * this;
  int * piVar7;
  uint * puVar8;
  
  uVar3 = (*(uint *)&gen_args[1]);
  piVar7 = *(int * PTR32 *)((*(uint *)&gen_args[1]) + 8);
  iVar2 = *piVar7;
  (*(int * PTR32 *)(gen_frame + 0x54)) = piVar7;
  if (iVar2 == 9) {
    (*(uint *)(gen_frame + 0x58)) = F_00e19c70(piVar7);
    if (((*piVar7 == 9) && (*(int *)piVar7[1] == 3)) &&
       ((iVar2 = piVar7[2], iVar2 == 4 || (((iVar2 == 8 || (iVar2 == 0xc)) || (iVar2 == 0x10)))))) {
      uVar3 = F_00df31c0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x58)));
      if (uVar3 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0x48))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),(*(int * PTR32 *)&gen_args[2])[1],((undefined1 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x58)));
        return 0;
      }
    }
    else {
      pcVar4 = (char *)F_00e1c5d0((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(uint *)&gen_args[1]) + 3,&REFG(undefined, 0x114c8f4));
      if (*pcVar4 != '\0') {
        uVar5 = F_00e1c560((*(undefined * PTR32 *)&gen_args[0]),&REFG(undefined, 0x114c8f4),&(*(uint *)(gen_frame + 0x58)));
        if (uVar5 != 0) {
          return uVar5;
        }
        uVar5 = F_00e19c70(piVar7);
        if ((*(uint *)(gen_frame + 0x58)) != uVar5) {
          return 1;
        }
      }
      piVar7 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2])));
      if (piVar7 != (int *)0x0) {
        *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
        piVar7[2] = piVar7[2] + 1;
      }
      ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,&(*(int * PTR32 *)(gen_frame + 0x4c)),*(undefined4 *)uVar3);
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4c)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)))));
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      (*(uint *)&gen_args[1]) = (uint)puVar6;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) == 1) {
        this = (undefined *)F_00e1c480((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x4c)));
        pcVar4 = (char *)F_0105a5b0(this,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,"tuple");
        if (*pcVar4 != '\0') {
          F_00df2fe0((*(undefined * PTR32 *)&gen_args[0]));
          F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]));
          puVar8 = &(*(uint *)&gen_args[1]);
          uVar3 = F_00e19c70((*(int * PTR32 *)(gen_frame + 0x54)));
          (*(int * PTR32 *)&gen_args[2]) = (int *)F_00df3910((*(undefined * PTR32 *)&gen_args[0]),uVar3,puVar8);
          if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
            (*(int * PTR32 *)&gen_args[2]) = (int *)F_00df3040((*(undefined * PTR32 *)&gen_args[0]));
          }
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
            }
          }
          *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + -1;
          piVar1 = piVar7 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*piVar7)(piVar7,1);
          }
          return (uint)(*(int * PTR32 *)&gen_args[2]);
        }
      }
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar1 = puVar6 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
        }
      }
      *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + -1;
      piVar1 = piVar7 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*piVar7)(piVar7,1);
      }
    }
  }
  else {
    if (iVar2 == 8) {
      uVar5 = F_00e1c560((*(undefined * PTR32 *)&gen_args[0]),&REFG(undefined, 0x114c8f4),&(*(uint *)(gen_frame + 0x58)));
      if (uVar5 != 0) {
        return uVar5;
      }
      (*(uint *)&gen_args[1]) = *(*(int * PTR32 *)&gen_args[2]);
      if ((int *)(*(uint *)&gen_args[1]) != (int *)0x0) {
        *(short *)((*(uint *)&gen_args[1]) + 6) = *(short *)((*(uint *)&gen_args[1]) + 6) + 1;
        *(int *)((*(uint *)&gen_args[1]) + 8) = *(int *)((*(uint *)&gen_args[1]) + 8) + 1;
      }
      ((code *)*(gen_code32 *)(*(int *)(*(uint *)&gen_args[1]) + 0xc))((*(uint *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x4c)),*(undefined4 *)uVar3);
      piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) + 0x14))))
                                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))),&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x50)),uVar3)));
      if (piVar7 != (int *)0x0) {
        *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
        piVar7[2] = piVar7[2] + 1;
      }
      (*(int * PTR32 *)&gen_args[2]) = piVar7;
      ((code *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7,(*(uint *)(gen_frame + 0x58)));
      F_00df2fe0((*(undefined * PTR32 *)&gen_args[0]));
      F_00e1c9e0((*(undefined * PTR32 *)&gen_args[0]));
      uVar3 = F_00df3910((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x58)),&(*(int * PTR32 *)&gen_args[2]));
      if (uVar3 == 0) {
        uVar3 = F_00df3040((*(undefined * PTR32 *)&gen_args[0]));
        *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + -1;
        piVar1 = piVar7 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*piVar7)(piVar7,1);
        }
        if ((*(uint *)&gen_args[1]) != 0) {
          *(short *)((*(uint *)&gen_args[1]) + 6) = *(short *)((*(uint *)&gen_args[1]) + 6) + -1;
          piVar7 = (int *)((*(uint *)&gen_args[1]) + 8);
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(uint *)&gen_args[1]))))((*(uint *)&gen_args[1]),1);
          }
        }
        return uVar3;
      }
      *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + -1;
      piVar1 = piVar7 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*piVar7)(piVar7,1);
      }
      if ((*(uint *)&gen_args[1]) != 0) {
        *(short *)((*(uint *)&gen_args[1]) + 6) = *(short *)((*(uint *)&gen_args[1]) + 6) + -1;
        piVar7 = (int *)((*(uint *)&gen_args[1]) + 8);
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(uint *)&gen_args[1]))))((*(uint *)&gen_args[1]),1);
        }
      }
      return 1;
    }
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 2: ;
      uVar3 = F_00df30a0((*(undefined * PTR32 *)&gen_args[0]),&REFG(undefined, 0x114c8bc),&(*(int * PTR32 *)(gen_frame + 0x4c)));
      if (uVar3 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0x40))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),(*(int * PTR32 *)&gen_args[2])[1],(*(int * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)));
        return 0;
      }
      return uVar3;
    case 3: ;
      uVar3 = F_00df3130((*(undefined * PTR32 *)&gen_args[0]),&REFG(undefined, 0x114c8b4),&(*(uint *)&gen_args[1]));
      if (uVar3 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0x50))))((*(int * PTR32 *)&gen_args[2])[1],(*(uint *)&gen_args[1]));
        return 0;
      }
      return uVar3;
    case 4: ;
      uVar3 = F_00df30a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 (*)[1])REFP(0x112673c)),&(*(int * PTR32 *)(gen_frame + 0x4c)));
      if (uVar3 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0x40))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),(*(int * PTR32 *)&gen_args[2])[1],(*(int * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)));
        return 0;
      }
      return uVar3;
    case 5: ;
      uVar3 = F_00df36c0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
      if (uVar3 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0x54))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),(*(int * PTR32 *)&gen_args[2])[1],(*(uint *)&gen_args[1]));
        return 0;
      }
      break;
    case 6: ;
      iVar2 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78)));
      uVar3 = F_00e19c80(piVar7);
      uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0x24))(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))),uVar3);
      if (uVar3 != 0) {
        (*(uint *)&gen_args[1]) = 0;
        uVar3 = F_00df4520((*(undefined * PTR32 *)&gen_args[0]),uVar3,&(*(uint *)&gen_args[1]));
        if (uVar3 != 0) {
          if ((*(uint *)&gen_args[1]) != 0) {
            *(short *)((*(uint *)&gen_args[1]) + 6) = *(short *)((*(uint *)&gen_args[1]) + 6) + -1;
            piVar7 = (int *)((*(uint *)&gen_args[1]) + 8);
            *piVar7 = *piVar7 + -1;
            if (*piVar7 == 0) {
              (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(uint *)&gen_args[1]))))((*(uint *)&gen_args[1]),1);
            }
          }
          return uVar3;
        }
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0x5c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),(*(int * PTR32 *)&gen_args[2])[1],(*(uint *)&gen_args[1]));
        if ((*(uint *)&gen_args[1]) != 0) {
          *(short *)((*(uint *)&gen_args[1]) + 6) = *(short *)((*(uint *)&gen_args[1]) + 6) + -1;
          piVar7 = (int *)((*(uint *)&gen_args[1]) + 8);
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(uint *)&gen_args[1]))))((*(uint *)&gen_args[1]),1);
            return 0;
          }
          return 0;
        }
        return 0;
      }
      break;
    case 7: ;
      uVar3 = F_00df5e00((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[2]));
      return uVar3;
    }
  }
  return 1;
}

/* ref: FUN_00df4100 */
uint F_00df4100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  F_00df2fe0(this);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1)));
  F_00e1c9e0(this);
  uVar2 = F_00df2d60(this);
  while( true ) {
    if (uVar2 != 1) {
      uVar2 = F_00df3040(this);
      return (uint)(uVar2 != 0);
    }
    uVar2 = F_00df33c0(this,&REFG(undefined, 0x1135940));
    if ((uVar2 == 0) || (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,uVar2), (int)uVar2 < 0))
    break;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,uVar2,&(*(undefined4 *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc))((int *)*param_1,((undefined1 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x4)));
    uVar2 = F_00df3c50(this,(uint)&(*(undefined4 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
    if (uVar2 != 0) {
      return uVar2;
    }
    uVar2 = F_00df2d60(this);
  }
  return 1;
}

/* ref: FUN_00df41d0 */
uint F_00df41d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf41d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  F_00e1c6b0(this,param_1);
  *(undefined4 *)((int)this + 0x78) = param_2;
  piVar1 = (int *)((int)this + 0x7c);
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x80000000;
  piVar2 = (int *)((int)this + 0x88);
  uVar3 = param_1 >> 8;
  param_1 = uVar3 << 8;
  *(undefined4 *)((int)this + 0x90) = 0x80000000;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  F_00da3de0((undefined *)((int)this + 0x98),param_1);
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  param_1 = uVar3 << 8;
  *(undefined4 *)((int)this + 0xb0) = 0x80000000;
  F_00da3de0((undefined *)((int)this + 0xb4),param_1);
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0x80000000;
  if (*(uint *)((int)this + 0x80) == (*(uint *)((int)this + 0x84) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x80) * 4))) = 0;
  *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
  if (*(uint *)((int)this + 0x8c) == (*(uint *)((int)this + 0x90) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
  }
  *((undefined1 * PTR32 *)GEN_TOP((*piVar2 + *(int *)((int)this + 0x8c) * 4))) = &REFG(undefined1, 0x107fc63);
  *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + 1;
  if (*(uint *)((int)this + 0x8c) == (*(uint *)((int)this + 0x90) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
  }
  *((undefined4 *)GEN_TOP((*piVar2 + *(int *)((int)this + 0x8c) * 4))) = 0;
  *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + 1;
  *(undefined4 *)((int)this + 0x94) = 2;
  (*(char * PTR32 *)(gen_frame + 0x4)) = "#0000";
  uVar3 = F_00da0e60("#0000");
  (*(char * PTR32 *)(gen_frame + 0x8)) = "#0000" + uVar3;
  uVar3 = F_00df2eb0(this,&(*(char * PTR32 *)(gen_frame + 0x4)));
  *(uint *)((int)this + 0xd0) = uVar3;
  return (uint)this;
}

/* ref: FUN_00df4340 */
uint F_00df4340(unsigned int gen_a0)
{
  GEN_ENTER(0xdf4340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * this_00;
  LPVOID pvVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar5 = F_00da3970((undefined *)((int)this + 0xb4));
  F_00da3e40((int)this + 0xb4,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar5);
  while ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    this_00 = (undefined *)F_00da39b0((int)this + 0xb4,uVar5);
    if (this_00 != (undefined *)0x0) {
      F_00df5c70(this_00);
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar6 + 0x2c),this_00,0x1c);
    }
    uVar5 = F_00da39f0((undefined *)((int)this + 0xb4),uVar5);
    F_00da3e40((int)this + 0xb4,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar5);
  }
  iVar2 = *(int *)((int)this + 200);
  iVar3 = *(int *)((int)this + 0xc4);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar4 = *(undefined4 * PTR32 *)(iVar3 + iVar2 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      }
    }
  }
  *(undefined4 *)((int)this + 200) = 0;
  if ((*(uint *)((int)this + 0xcc) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc4),
               *(uint *)((int)this + 0xcc) * 4);
  }
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0x80000000;
  F_00da3e20((undefined *)((int)this + 0xb4));
  *(undefined4 *)((int)this + 0xac) = 0;
  if ((*(uint *)((int)this + 0xb0) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xa8),
               *(uint *)((int)this + 0xb0) * 4);
  }
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0x80000000;
  F_00df5070((undefined *)((int)this + 0x98));
  F_00da3e20((undefined *)((int)this + 0x98));
  *(undefined4 *)((int)this + 0x8c) = 0;
  if ((*(uint *)((int)this + 0x90) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x88),
               *(uint *)((int)this + 0x90) * 4);
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x90) = 0x80000000;
  *(undefined4 *)((int)this + 0x80) = 0;
  if ((*(uint *)((int)this + 0x84) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x7c),
               *(uint *)((int)this + 0x84) * 4);
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x80000000;
  uVar5 = F_00df5bb0(this);
  return uVar5;
}

/* ref: FUN_00df4520 */
uint F_00df4520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4520u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x8)) = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
    uVar4 = F_00df33c0((*(undefined * PTR32 *)&gen_args[0]),&REFG(undefined, 0x1134e40));
    if (uVar4 != 0) {
      (*(uint *)(gen_frame + 0x8)) = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) + 0x24))))
                          (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))),uVar4);
      if ((*(uint *)(gen_frame + 0x8)) != 0) goto LAB_00df455d;
    }
    return 1;
  }
LAB_00df455d: ;
  uVar4 = F_00df33c0((*(undefined * PTR32 *)&gen_args[0]),&REFG(undefined, 0x11393c4));
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) + 0x10))))
                     (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))),&(*(uint *)(gen_frame + 0x8)),0)));
  if (puVar5 != (undefined4 *)0x0) {
    *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
    puVar5[2] = puVar5[2] + 1;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  uVar6 = F_00df4100((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
  if (uVar6 == 0) {
    if (uVar4 != 0) {
      uVar4 = F_00df3490((*(undefined * PTR32 *)&gen_args[0]),uVar4,&(*(undefined4 * PTR32 *)&gen_args[1]));
      if (uVar4 != 0) {
        if (puVar5 != (undefined4 *)0x0) {
          *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
          piVar1 = puVar5 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
          }
        }
        return uVar4;
      }
    }
    piVar1 = (*(int * PTR32 *)&gen_args[2]);
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
      puVar5[2] = puVar5[2] + 1;
    }
    puVar3 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2])));
    if (puVar3 != (undefined4 *)0x0) {
      *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
      piVar2 = puVar3 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      }
    }
    *piVar1 = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      }
    }
    uVar6 = 0;
  }
  else if (puVar5 != (undefined4 *)0x0) {
    *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
    piVar1 = puVar5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      return uVar6;
    }
  }
  return uVar6;
}

/* ref: FUN_00df4660 */
uint F_00df4660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pvVar5;
  char * pcVar6;
  undefined4 * puVar7;
  
  F_00e1c9e0(this);
  uVar4 = F_00df2d60(this);
  if (uVar4 == 0) {
    F_00e1c9e0(this);
  }
  uVar4 = F_00df2d60(this);
  if (uVar4 != 1) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0x8)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)),"Didn\'t find the root \'hktagfile\' block");
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xfeed00aa,((undefined1 *)(gen_frame + 0x8)),"Tagfile\\Xml\\hkXmlTagfileReader.cpp",0x46c);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)));
    return 1;
  }
  pvVar5 = (undefined *)F_00e1c480(this,((undefined1 *)(gen_frame + 0x210)));
  pcVar6 = (char *)F_0105a5b0(pvVar5,&(*(undefined1 *)(gen_frame + 0x21b)),"hktagfile");
  if (*pcVar6 == '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0x8)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)),"Expecting \'hktagfile\' block");
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xfeed00aa,((undefined1 *)(gen_frame + 0x8)),"Tagfile\\Xml\\hkXmlTagfileReader.cpp",0x472);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)));
    return 1;
  }
  puVar7 = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  F_00e1c560(this,"version",&(*(undefined4 *)(gen_frame + 0x208)));
  F_00df2fe0(this);
  F_00e1c9e0(this);
  uVar4 = F_00df2d60(this);
  while (uVar4 == 1) {
    pvVar5 = (undefined *)F_00e1c480(this,((undefined1 *)(gen_frame + 0x210)));
    pcVar6 = (char *)F_0105a5b0(pvVar5,&(*(undefined1 *)(gen_frame + 0x21b)),"class");
    if (*pcVar6 == '\0') break;
    F_00df34c0(this);
    uVar4 = F_00df2d60(this);
  }
  do {
    uVar4 = F_00df2d60(this);
    if ((uVar4 != 1) && (uVar4 != 2)) {
      uVar4 = F_00df3040(this);
      if ((uVar4 == 0) && (uVar4 = F_00df2d60(this), uVar4 == 7)) {
        uVar4 = F_00df2da0(this);
        if (uVar4 == 0) {
          if (puVar7 != (undefined4 *)0x0) {
            *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + 1;
            puVar7[2] = puVar7[2] + 1;
          }
          puVar3 = (undefined4 *)*param_1;
          if (puVar3 != (undefined4 *)0x0) {
            *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
            piVar1 = puVar3 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
            }
          }
          *param_1 = (int)puVar7;
          if (puVar7 != (undefined4 *)0x0) {
            *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + -1;
            piVar1 = puVar7 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
            }
          }
          return 0;
        }
        if (puVar7 != (undefined4 *)0x0) {
          *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + -1;
          piVar1 = puVar7 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
          }
        }
        return uVar4;
      }
      if (puVar7 == (undefined4 *)0x0) {
        return 1;
      }
      *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + -1;
      piVar1 = puVar7 + 2;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      goto LAB_00df4917;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x214)) = (undefined4 *)0x0;
    uVar4 = F_00df4520(this,0,&(*(undefined4 * PTR32 *)(gen_frame + 0x214)));
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x214));
    if (uVar4 == 1) {
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x214)) != (undefined4 *)0x0) {
        *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x214)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x214)) + 6) + -1;
        piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x214)) + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x214)))((*(undefined4 * PTR32 *)(gen_frame + 0x214)),1);
        }
      }
      if (puVar7 != (undefined4 *)0x0) {
        *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + -1;
        piVar1 = puVar7 + 2;
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
LAB_00df4917: ;
        if (iVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
        }
      }
      return 1;
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x214)) != (undefined4 *)0x0) {
      *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x214)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x214)) + 6) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x214))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x214))[2] + 1;
    }
    if (puVar7 != (undefined4 *)0x0) {
      *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + -1;
      piVar1 = puVar7 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
      }
    }
    puVar7 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
      piVar1 = puVar3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      }
    }
  } while( true );
}

/* ref: hkXmlTagfileReader::vf3 */
uint F_00df4940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf4940u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  F_00df41d0(((undefined1 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[2]),(*(undefined4 * PTR32 *)&gen_args[3]));
  (*(undefined4 * PTR32 *)&gen_args[3]) = (undefined4 *)0x0;
  uVar3 = F_00df4660(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)&gen_args[3]));
  if (uVar3 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 * PTR32 *)&gen_args[3]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == (undefined4 *)0x0) goto LAB_00df49bc;
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + 1;
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(undefined4 * PTR32 *)&gen_args[3])[2] + 1;
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + -1;
    piVar1 = (*(undefined4 * PTR32 *)&gen_args[3]) + 2;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == (undefined4 *)0x0) goto LAB_00df49bc;
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + -1;
    piVar1 = (*(undefined4 * PTR32 *)&gen_args[3]) + 2;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    ((code *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))((*(undefined4 * PTR32 *)&gen_args[3]),1);
  }
LAB_00df49bc: ;
  F_00df4340(((undefined1 *)(gen_frame + 0x8)));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00df49d0 */
uint F_00df49d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf49d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00df49f0 */
uint F_00df49f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf49f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df4a00 */
uint F_00df4a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df4a20 */
uint F_00df4a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00df4a30 */
uint F_00df4a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00df4a40 */
uint F_00df4a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df4a60 */
uint F_00df4a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3ae0(this,param_1);
  return uVar1;
}

/* ref: FUN_00df4a70 */
uint F_00df4a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00df4a80 */
uint F_00df4a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da39d0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df4a90 */
uint F_00df4a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df4ac0 */
uint F_00df4ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00df4b20 */
uint F_00df4b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4b20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df4b70 */
uint F_00df4b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4b70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df4c00 */
unsigned int F_00df4c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4c00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df4c70 */
unsigned int F_00df4c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df4cb0 */
uint F_00df4cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf4cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00df4ce0 */
uint F_00df4ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df4d00 */
uint F_00df4d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df4d20 */
uint F_00df4d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4d20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00df4d30 */
uint F_00df4d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df4d50 */
uint F_00df4d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00df4d60 */
uint F_00df4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00df4d80 */
uint F_00df4d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00df4da0 */
uint F_00df4da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00df4df0 */
uint F_00df4df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf4df0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (((*in_ecx == 9) && (*(int *)in_ecx[1] == 3)) &&
     ((iVar1 = in_ecx[2], iVar1 == 4 || (((iVar1 == 8 || (iVar1 == 0xc)) || (iVar1 == 0x10)))))) {
    *param_2 = 1;
    return (uint)param_2;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_00df4e30 */
unsigned int F_00df4e30(unsigned int gen_a0)
{
  GEN_ENTER(0xdf4e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00df4e60 */
uint F_00df4e60(unsigned int gen_a0)
{
  GEN_ENTER(0xdf4e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00df4e80 */
unsigned int F_00df4e80(unsigned int gen_a0)
{
  GEN_ENTER(0xdf4e80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x1c);
  }
  return 0;
}

/* ref: FUN_00df4eb0 */
unsigned int F_00df4eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf4eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      puVar1 = *(undefined4 * PTR32 *)this;
      if (puVar1 != (undefined4 *)0x0) {
        *(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + 1;
        puVar1[2] = puVar1[2] + 1;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 8)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x60))
                (piVar2,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 8 + 4))),puVar1);
      if (puVar1 != (undefined4 *)0x0) {
        *(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1;
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 8));
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar3 * 8)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))
                (piVar2,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar3 * 8 + 4))),
                 *(undefined4 *)this);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x14));
  }
  return 0;
}

/* ref: FUN_00df4f40 */
uint F_00df4f40(unsigned int gen_a0)
{
  GEN_ENTER(0xdf4f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00df4fe0 */
uint F_00df4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar2 = F_00da3ae0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  F_00da3e40((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) == '\0') {
    uVar2 = F_00da0f10(uVar1,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20((*(undefined * PTR32 *)&gen_args[0]),uVar2,(*(undefined4 *)&gen_args[2]));
    return uVar2;
  }
  uVar3 = F_00da3990((*(undefined * PTR32 *)&gen_args[0]),uVar2);
  F_00da39d0((*(undefined * PTR32 *)&gen_args[0]),uVar2,(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00df5070 */
unsigned int F_00df5070(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00da3970(this);
  F_00da3e40(this,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar1);
  while ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar2 = F_00da3990(this,uVar1);
    F_00da0f40(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    uVar1 = F_00da39f0(this,uVar1);
    F_00da3e40(this,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar1);
  }
  F_00da3cd0(this);
  return 0;
}

/* ref: FUN_00df50d0 */
uint F_00df50d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf50d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00df50e0 */
uint F_00df50e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf50e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00df5120 */
uint F_00df5120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf5120u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df5160 */
uint F_00df5160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf5160u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df51a0 */
uint F_00df51a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf51a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00df51c0 */
unsigned int F_00df51c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf51c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00df51f0 */
unsigned int F_00df51f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf51f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00df5220 */
unsigned int F_00df5220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf5220u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (0 < param_2) {
    do {
      if (param_1 != (int *)0x0) {
        iVar1 = *param_3;
        *param_1 = iVar1;
        if (iVar1 != 0) {
          *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00df52a0 */
uint F_00df52a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf52a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  if ((param_1 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00df52f0 */
uint F_00df52f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf52f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00df5330 */
uint F_00df5330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5330u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df5370 */
uint F_00df5370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df53b0 */
uint F_00df53b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf53b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00df5070(this);
  uVar1 = F_00da3e20(this);
  return uVar1;
}

/* ref: FUN_00df53c0 */
unsigned int F_00df53c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf53c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00df5410 */
unsigned int F_00df5410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf5410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00df5460 */
unsigned int F_00df5460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf5460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (piVar1 != (int *)0x0) {
    iVar2 = *param_2;
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00df54c0 */
uint F_00df54c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf54c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5500 */
uint F_00df5500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5540 */
uint F_00df5540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df5580 */
uint F_00df5580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5580u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df55c0 */
unsigned int F_00df55c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf55c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  while (param_2 = param_2 + -1, -1 < param_2) {
    puVar2 = *(undefined4 * PTR32 *)(param_1 + param_2 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00df5600 */
unsigned int F_00df5600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00df5650 */
unsigned int F_00df5650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00df56a0 */
uint F_00df56a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf56a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar3) {
    uVar3 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (uint *)0x0) {
    uVar2 = *param_1;
    *puVar1 = uVar2;
    uVar3 = 0;
    if (uVar2 != 0) {
      *(short *)(uVar2 + 6) = *(short *)(uVar2 + 6) + 1;
      *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return uVar2;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar3;
}

/* ref: FUN_00df5700 */
uint F_00df5700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  return (uint)this;
}

/* ref: FUN_00df5720 */
uint F_00df5720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000010;
  return (uint)this;
}

/* ref: FUN_00df5740 */
uint F_00df5740(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5740u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5780 */
uint F_00df5780(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5780u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df57c0 */
uint F_00df57c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf57c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5800 */
uint F_00df5800(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5800u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5840 */
uint F_00df5840(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5840u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df58c0 */
unsigned int F_00df58c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf58c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x14) == (*(uint *)((int)this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x10),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + *(int *)((int)this + 0x14) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return 0;
}

/* ref: FUN_00df5910 */
unsigned int F_00df5910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf5910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 8) == (*(uint *)((int)this + 0xc) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 4),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 8) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return 0;
}

/* ref: FUN_00df5960 */
uint F_00df5960(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00df59a0 */
uint F_00df59a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf59a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df59e0 */
uint F_00df59e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf59e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5a20 */
uint F_00df5a20(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5a20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5a60 */
uint F_00df5a60(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5a60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5aa0 */
uint F_00df5aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5aa0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5ae0 */
uint F_00df5ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5ae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00df5b20 */
uint F_00df5b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)((int)this + 4);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar4 = *(undefined4 * PTR32 *)(iVar2 + iVar3 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      }
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar5 & 0x80000000) == 0) {
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar5 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar5;
}

/* ref: FUN_00df5bb0 */
uint F_00df5bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x6c) = 0;
  if (-1 < *(int *)((int)this + 0x70)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x68),
               *(int *)((int)this + 0x70) * 8);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  F_00e1bd60((undefined *)((int)this + 0x38));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x2c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               *(uint *)((int)this + 0x2c) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < *(int *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(int *)((int)this + 0x20) * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar1 = F_00da3e20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00df5c70 */
uint F_00df5c70(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < *(int *)((int)this + 0x18)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),
               *(int *)((int)this + 0x18) * 8);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00df5cf0 */
uint F_00df5cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  char * pcVar2;
  uint uVar3;
  undefined1 * puVar4;
  undefined * PTR32 * ppuVar5;
  undefined * puVar6;
  
  F_00df2d60(this);
  if (*(int *)((int)this + 0x74) == 1) {
    ppuVar5 = (*(undefined * PTR32 (*)[1])REFP(0x114c8b0));
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = (undefined *)F_00e1c480(this,((undefined1 *)(gen_frame + 0x0)));
    pcVar2 = (char *)F_0105a5b0(pvVar1,puVar4,ppuVar5);
    if (*pcVar2 != '\0') {
      F_00df2fe0(this);
      F_00e1c9e0(this);
      uVar3 = F_00df2d60(this);
      if (uVar3 == 4) {
        uVar3 = F_00e1c4c0(this,((undefined1 *)(gen_frame + 0x0)));
        uVar3 = F_00df2eb0(this,uVar3);
        if (uVar3 == *(uint *)((int)this + 0xd0)) {
          ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x60))((int *)*param_1,param_1[1],0);
        }
        else {
          pvVar1 = (undefined *)F_00df3420(this,uVar3);
          F_00df5910(pvVar1,*param_1,param_1[1]);
        }
        F_00e1c9e0(this);
        F_00df2d60(this);
        uVar3 = F_00df3040(this);
        return uVar3;
      }
    }
  }
  else if (*(int *)((int)this + 0x74) == 2) {
    puVar6 = &REFG(undefined, 0x114c8d4);
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = (undefined *)F_00e1c480(this,((undefined1 *)(gen_frame + 0x0)));
    pcVar2 = (char *)F_0105a5b0(pvVar1,puVar4,puVar6);
    if (*pcVar2 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x60))((int *)*param_1,param_1[1],0);
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00df5e00 */
uint F_00df5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  char * pcVar2;
  uint uVar3;
  undefined1 * puVar4;
  undefined * PTR32 * ppuVar5;
  undefined * puVar6;
  
  F_00df2d60(this);
  if (*(int *)((int)this + 0x74) == 1) {
    ppuVar5 = (*(undefined * PTR32 (*)[1])REFP(0x114c8b0));
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = (undefined *)F_00e1c480(this,((undefined1 *)(gen_frame + 0x0)));
    pcVar2 = (char *)F_0105a5b0(pvVar1,puVar4,ppuVar5);
    if (*pcVar2 != '\0') {
      F_00df2fe0(this);
      F_00e1c9e0(this);
      uVar3 = F_00df2d60(this);
      if (uVar3 == 4) {
        uVar3 = F_00e1c4c0(this,((undefined1 *)(gen_frame + 0x0)));
        uVar3 = F_00df2eb0(this,uVar3);
        if (uVar3 == *(uint *)((int)this + 0xd0)) {
          ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x44))((int *)*param_1,param_1[1],0);
        }
        else {
          pvVar1 = (undefined *)F_00df3420(this,uVar3);
          F_00df58c0(pvVar1,*param_1,param_1[1]);
        }
        F_00e1c9e0(this);
        F_00df2d60(this);
        uVar3 = F_00df3040(this);
        return uVar3;
      }
    }
  }
  else if (*(int *)((int)this + 0x74) == 2) {
    puVar6 = &REFG(undefined, 0x114c8d4);
    puVar4 = &(*(undefined1 *)(gen_frame + 0xb));
    pvVar1 = (undefined *)F_00e1c480(this,((undefined1 *)(gen_frame + 0x0)));
    pcVar2 = (char *)F_0105a5b0(pvVar1,puVar4,puVar6);
    if (*pcVar2 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x44))((int *)*param_1,param_1[1],0);
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00df5f10 */
uint F_00df5f10(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)((int)this + 4);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar4 = *(undefined4 * PTR32 *)(iVar2 + iVar3 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      }
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar5 & 0x80000000) == 0) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar5 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar5;
}

/* ref: FUN_00df5f80 */
uint F_00df5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00df5cf0(this,param_1);
  return uVar1;
}

/* ref: FUN_00df5f90 */
uint F_00df5f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00df5e00(this,param_1);
  return uVar1;
}

/* ref: FUN_00df5fa0 */
uint F_00df5fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf5fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00df5c70(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x1c);
  }
  return (uint)this;
}

/* ref: FUN_00df5fe0 */
uint F_00df5fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf5fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  iVar2 = *(int *)this;
  iVar3 = *(int *)((int)this + 4);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar4 = *(undefined4 * PTR32 *)(iVar2 + iVar3 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      }
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar5 & 0x80000000) == 0) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar5 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar5;
}

/* ref: hkDataWorldNative::vf24 */
uint F_00df6140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdf6140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00e06280(this + 0x30,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: hkDataWorldNative::vf3 */
uint F_00df6170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkDataWorldNative::vf5 */
uint F_00df6180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf6180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00df6190 */
uint F_00df6190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  char * pcVar7;
  char * pcVar8;
  
  if (in_edi[1] != 0) {
    iVar1 = *param_2;
    uVar2 = F_00d92610(in_edi[1]);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(param_2,uVar2);
    if (uVar2 == 0) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar8 = "\' is not registered in the provided hkDataWorldNative.";
      uVar2 = F_00d92610(in_edi[1]);
      uVar6 = *in_edi;
      pcVar7 = ". Class \'";
      pvVar3 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Ignore object at 0x");
      pvVar3 = (undefined *)F_00d9fde0(pvVar3,uVar6);
      pvVar3 = (undefined *)F_00d9fe80(pvVar3,pcVar7);
      pvVar3 = (undefined *)F_00d9fe80(pvVar3,uVar2);
      F_00d9fe80(pvVar3,pcVar8);
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(undefined4, 0x15dff78),1,0x1800473a,((undefined1 *)(gen_frame + 0x0)),"Data\\Native\\hkDataObjectNative.cpp",800);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
      *in_edi = 0;
      in_edi[1] = 0;
    }
    else {
      in_edi[1] = *(undefined4 *)(uVar2 + 0xc);
    }
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),0x1c)));
  puVar5[1] = 0x1c;
  puVar5[2] = 0;
  *puVar5 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  F_0105a950(puVar5 + 3,in_edi);
  puVar5[5] = param_2;
  *(undefined1 *)(puVar5 + 6) = (undefined1)param_3;
  return (uint)puVar5;
}

/* ref: hkDataArrayNative::vf24 */
uint F_00df62a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf62a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10);
  if (*(int *)(this + 0x1c) != 0x19) {
    uVar1 = F_00dbaed0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xc),uVar1,
                         CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),1));
  }
  return uVar1;
}

/* ref: FUN_00df62e0 */
unsigned int F_00df62e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf62e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00df6310 */
unsigned int F_00df6310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0xc));
  }
  *(undefined * PTR32 *)((int)this + 0xc) = param_1;
  return 0;
}

/* ref: FUN_00df6340 */
uint F_00df6340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  uVar1 = F_00df6190(&(*(undefined4 *)(gen_frame + 0x4)),this,(uint)this & 0xffffff00);
  return uVar1;
}

/* ref: hkDataWorldNative::vf9 */
uint F_00df6370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = F_00da4190(this + 0x14,param_1,0);
    if (uVar2 != 0) {
      return uVar2;
    }
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8),param_1);
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),0x14)));
  puVar4[1] = 0x14;
  puVar4[2] = 0;
  *puVar4 = (*(undefined * PTR32 (*)[13])REFP(0x114cab8));
  puVar4[3] = param_1;
  puVar4[4] = this;
  F_00da3a20(this + 0x14,iVar1,puVar4);
  return (uint)puVar4;
}

/* ref: hkDataWorldNative::vf10 */
unsigned int F_00df63f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf63f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  LPVOID pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  puVar2[1] = 0x1c;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  uVar3 = param_2[1];
  if (uVar3 == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x14))))(*(int * PTR32 *)(this + 0xc),*param_2);
  }
  F_0105a930(puVar2 + 3,*param_2,uVar3);
  puVar2[5] = this;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
  puVar2[2] = puVar2[2] + 1;
  *param_1 = puVar2;
  return 0;
}

/* ref: hkDataWorldNative::vf6 */
uint F_00df6470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkDataWorldNative::vf7 */
uint F_00df6480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  puVar2[1] = 0x1c;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  F_0105a950(puVar2 + 3,this + 0x24);
  puVar2[5] = this;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
  puVar2[2] = puVar2[2] + 1;
  *param_1 = puVar2;
  return (uint)param_1;
}

/* ref: FUN_00df64e0 */
uint F_00df64e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf64e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  
  uVar3 = (*(undefined4 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = (*(undefined4 *)&gen_args[1]);
  pcVar4 = (char *)F_00d929e0((*(undefined4 *)&gen_args[2]),(int)&(*(undefined4 *)&gen_args[1]) + 3);
  if (*pcVar4 == '\0') {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    iVar2 = *piVar1;
    uVar5 = F_00d92610((*(undefined4 *)&gen_args[2]));
    uVar5 = ((code *)*(gen_code32 *)(iVar2 + 0x10))(piVar1,uVar5);
  }
  else {
    uVar5 = F_00dbaea0(uVar3,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar5;
  if (uVar5 == 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  }
  return uVar5;
}

/* ref: hkDataWorldNative::vf4 */
uint F_00df6540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint in_ecx;
  LPVOID pvVar2;
  int * piVar3;
  undefined * this_00;
  uint extraout_ECX = 0;
  uint extraout_ECX_00 = 0;
  uint extraout_ECX_01 = 0;
  
  piVar3 = *(int * PTR32 *)(this + 8);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
  in_ecx = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,uVar1);
  uVar1 = F_00d929c0(in_ecx);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(uint *)(gen_frame + 0x4)) = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),uVar1);
  (*(uint *)(gen_frame + 0x8)) = in_ecx;
  uVar1 = extraout_ECX;
  if ((*(uint *)(gen_frame + 0x4)) != 0) {
    uVar1 = F_00d929c0(in_ecx);
    F_00da1030((*(uint *)(gen_frame + 0x4)),0,uVar1);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738))));
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,uVar1)));
    uVar1 = extraout_ECX_00;
    if (this_00 != (undefined *)0x0) {
      F_00dc25d0(this_00,(*(uint *)(gen_frame + 0x4)),0);
      uVar1 = extraout_ECX_01;
    }
  }
  uVar1 = F_00df6190(&(*(uint *)(gen_frame + 0x4)),this,uVar1 & 0xffffff00);
  return uVar1;
}

/* ref: FUN_00df6600 */
uint F_00df6600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint local_8;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x114cd54));
  local_8 = (uint)this & 0xffffff00;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00da3de0((undefined *)((int)this + 0x14),local_8);
  *(undefined1 *)((int)this + 0x2c) = (undefined1)param_1;
  F_00e1ae10((undefined *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(undefined4, 0x15e3738))));
  if (pvVar1 != (undefined *)0x0) {
    F_00d919e0(pvVar1);
  }
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0xc));
  }
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(undefined4, 0x15e3738))));
  if (pvVar1 != (undefined *)0x0) {
    F_00d919e0(pvVar1);
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined * PTR32 *)((int)this + 8) = pvVar1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738))));
  if (pvVar1 != (undefined *)0x0) {
    F_00d919e0(pvVar1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
  return (uint)this;
}

/* ref: FUN_00df66f0 */
uint F_00df66f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf66f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x114cd54));
  uVar1 = F_00da3970((undefined *)((int)this + 0x14));
  F_00da3e40((int)this + 0x14,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar1);
  while ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    puVar2 = (undefined4 *)F_00da39b0((int)this + 0x14,uVar1);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    uVar1 = F_00da39f0((undefined *)((int)this + 0x14),uVar1);
    F_00da3e40((int)this + 0x14,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar1);
  }
  *(undefined4 *)((int)this + 0xbc) = 0;
  if (-1 < (int)*(uint *)((int)this + 0xc0)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xb8),
               *(uint *)((int)this + 0xc0) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0x80000000;
  F_00e1a370((undefined *)((int)this + 0x30));
  uVar1 = F_00da3e20((undefined *)((int)this + 0x14));
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkDataWorldNative::vf8 */
unsigned int F_00df67e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf67e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  if (piVar1 != (int *)0x0) {
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
    ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,&(*(int *)(gen_frame + 0xc)));
    (*(int *)(gen_frame + 0x18)) = 0;
    if (0 < (*(int *)(gen_frame + 0x10))) {
      do {
        iVar4 = (*(int *)(gen_frame + 0x18));
        pbVar2 = (byte *)F_00d92c20(*(undefined4 *)((*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x18)) * 4));
        if ((*pbVar2 & 1) == 0) {
          iVar4 = *(int *)this;
          uVar3 = F_00d92610(*(undefined4 *)((*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x18)) * 4));
          uVar3 = ((code *)*(gen_code32 *)(iVar4 + 0x24))(this,uVar3);
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_1,4);
          }
          *(uint *)(*param_1 + param_1[1] * 4) = uVar3;
          param_1[1] = param_1[1] + 1;
          iVar4 = (*(int *)(gen_frame + 0x18));
        }
        (*(int *)(gen_frame + 0x18)) = iVar4 + 1;
      } while (iVar4 + 1 < (*(int *)(gen_frame + 0x10)));
    }
    (*(int *)(gen_frame + 0x10)) = 0;
    if (-1 < (*(int *)(gen_frame + 0x14))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
    }
  }
  return 0;
}

/* ref: FUN_00df68c0 */
byte F_00df68c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf68c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)(*(undefined * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]);
}

/* ref: FUN_00df68e0 */
uint F_00df68e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00df6900 */
uint F_00df6900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df6910 */
uint F_00df6910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df6930 */
uint F_00df6930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00df6940 */
uint F_00df6940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00df6950 */
uint F_00df6950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00df6970 */
uint F_00df6970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00df6990 */
unsigned int F_00df6990(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00df69b0 */
unsigned int F_00df69b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf69b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00df6a00 */
unsigned int F_00df6a00(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00df6a20 */
unsigned int F_00df6a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00df6a70 */
uint F_00df6a70(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6a70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00df6aa0 */
uint F_00df6aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6aa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkDataRefCounted::vf0 */
uint F_00df6ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df6b10 */
uint F_00df6b10(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00df6b40 */
unsigned int F_00df6b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114cab8));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return 0;
}

/* ref: hkDataClassNative::vf1 */
uint F_00df6b70(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6b70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: hkDataClassNative::vf2 */
uint F_00df6b80(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d92610(*(undefined4 *)(in_ecx + 0xc));
  return uVar1;
}

/* ref: hkDataClassNative::vf3 */
uint F_00df6b90(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d92a10(*(undefined4 *)(in_ecx + 0xc));
  return uVar1;
}

/* ref: hkDataClassNative::vf4 */
uint F_00df6ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00d92620(*(undefined4 *)(this + 0xc));
  if (uVar2 != 0) {
    iVar1 = **(int * PTR32 *)(this + 0x10);
    uVar2 = F_00d92610(uVar2);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(*(undefined4 *)(this + 0x10),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: hkDataClassNative::vf5 */
uint F_00df6bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    if (param_2 == (int *)0x0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 8))(uVar1);
    uVar1 = F_00da0d20(uVar2,uVar1);
    if (uVar1 == 0) break;
    param_2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2)));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataClassNative::vf6 */
uint F_00df6c30(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d92850(*(undefined4 *)(in_ecx + 0xc));
  return uVar1;
}

/* ref: hkDataClassNative::vf8 */
uint F_00df6c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d92970(*(undefined * PTR32 *)(this + 0xc),param_1);
  return uVar1;
}

/* ref: hkDataClassNative::vf9 */
uint F_00df6c50(unsigned int gen_a0)
{
  GEN_ENTER(0xdf6c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d927e0(*(undefined * PTR32 *)(this + 0xc));
  return uVar1;
}

/* ref: hkDataClassNative::vf11 */
uint F_00df6c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d92920(*(undefined * PTR32 *)(this + 0xc),param_1);
  return uVar1;
}

/* ref: hkDataClassNative::vf0 */
uint F_00df6c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df6cd0 */
uint F_00df6cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df6d10 */
uint F_00df6d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf6d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  F_0105a950((undefined *)((int)this + 0xc),param_1);
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return (uint)this;
}

/* ref: FUN_00df6d50 */
uint F_00df6d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00df6d70 */
uint F_00df6d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0105a6d0(param_1,this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00df6d90 */
uint F_00df6d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0105a6b0(param_1,*(undefined4 *)this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00df6dd0 */
uint F_00df6dd0(void)
{
  GEN_ENTER(0xdf6dd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00df6de0 */
uint F_00df6de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6df0 */
uint F_00df6df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6e00 */
unsigned int F_00df6e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6e10 */
uint F_00df6e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6e20 */
unsigned int F_00df6e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6e30 */
unsigned int F_00df6e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6e40 */
unsigned int F_00df6e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6e50 */
uint F_00df6e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00df6e70 */
unsigned int F_00df6e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6e80 */
uint F_00df6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6e90 */
unsigned int F_00df6e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6ea0 */
uint F_00df6ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6eb0 */
unsigned int F_00df6eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf6eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00df6ec0 */
uint F_00df6ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6ed0 */
unsigned int F_00df6ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6ee0 */
uint F_00df6ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00df6ef0 */
unsigned int F_00df6ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f00 */
unsigned int F_00df6f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f10 */
unsigned int F_00df6f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f20 */
unsigned int F_00df6f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f30 */
unsigned int F_00df6f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f40 */
unsigned int F_00df6f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f50 */
unsigned int F_00df6f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f60 */
unsigned int F_00df6f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f70 */
unsigned int F_00df6f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f80 */
unsigned int F_00df6f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6f90 */
unsigned int F_00df6f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6fa0 */
unsigned int F_00df6fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00df6fb0 */
unsigned int F_00df6fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf6fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataObjectNative::vf1 */
uint F_00df6fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf6fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint in_ecx;
  undefined4 * puVar1;
  char * pcVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  in_ecx = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  pcVar2 = (char *)F_00d929e0(in_ecx,(int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3);
  puVar1[1] = (*pcVar2 != '\0') - 1 & in_ecx;
  return (uint)puVar1;
}

/* ref: hkDataObjectNative::vf2 */
uint F_00df7000(unsigned int gen_a0)
{
  GEN_ENTER(0xdf7000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    iVar1 = **(int * PTR32 *)(this + 0x14);
    uVar2 = F_00d92610(*(int *)(this + 0x10));
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(*(undefined4 *)(this + 0x14),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: hkDataObjectNative::vf3 */
uint F_00df7030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7030u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  uint uVar2;
  
  F_0105a6d0(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(undefined4 *)&gen_args[2]));
  pcVar1 = (char *)F_0105a720(((undefined1 *)(gen_frame + 0x4)),(int)&(*(undefined4 *)&gen_args[2]) + 3);
  if (*pcVar1 != '\0') {
    uVar2 = F_0105a8f0(((undefined1 *)(gen_frame + 0x4)));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = uVar2;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: hkDataObjectNative::vf4 */
uint F_00df7090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7090u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  
  F_0105a6d0(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(undefined4 *)&gen_args[1]));
  pcVar1 = (char *)F_0105a720(((undefined1 *)(gen_frame + 0x4)),(int)&(*(undefined4 *)&gen_args[1]) + 3);
  return (uint)(*pcVar1 != '\0');
}

/* ref: hkDataObjectNative::vf26 */
uint F_00df70d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf70d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]));
  pcVar1 = (char *)F_0105a720(((undefined1 *)(gen_frame + 0x4)),(int)&(*(undefined4 *)&gen_args[1]) + 3);
  return (uint)(*pcVar1 != '\0');
}

/* ref: hkDataObjectNative::vf5 */
uint F_00df7110(void)
{
  GEN_ENTER(0xdf7110u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDataObjectNative::vf6 */
uint F_00df7120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d927e0(*(undefined * PTR32 *)(this + 0x10));
  return (uint)(param_1 < (int)uVar1);
}

/* ref: hkDataObjectNative::vf7 */
uint F_00df7140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + 1;
}

/* ref: hkDataObjectNative::vf9 */
uint F_00df7150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d92800(*(undefined * PTR32 *)(this + 0x10),param_2);
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: hkDataObjectNative::vf28 */
unsigned int F_00df7180(void)
{
  GEN_ENTER(0xdf7180u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDataObjectNative::vf24 */
uint F_00df7190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e1d060(this,param_1,param_2);
  return uVar1;
}

/* ref: hkDataObjectNative::vf22 */
unsigned int F_00df71b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf71b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataObjectNative::vf27 */
uint F_00df71c0(void)
{
  GEN_ENTER(0xdf71c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00df7200 */
uint F_00df7200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  this_00 = *(undefined * PTR32 *)((int)this + 0xc);
  iVar3 = uVar1 + param_1[1] * 4;
  if (this_00 != (undefined *)0x0) {
    do {
      uVar1 = F_00d92850(this_00);
      iVar3 = iVar3 + uVar1 * -4;
      iVar4 = 0;
      if (0 < (int)uVar1) {
        do {
          uVar2 = F_00d92800(this_00,iVar4);
          *(uint *)(iVar3 + iVar4 * 4) = uVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar1);
      }
      this_00 = (undefined *)F_00d92620(this_00);
    } while (this_00 != (undefined *)0x0);
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00df7270 */
uint F_00df7270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xdf7270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_4;
  *(undefined4 *)((int)this + 0x2c) = param_8;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  *(int * PTR32 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_6;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined4 *)((int)this + 0x30) = param_9;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,param_5,param_6,param_7,param_8);
  *(uint *)((int)this + 0x28) = uVar1;
  return (uint)this;
}

/* ref: hkDataArrayNative::vf1 */
uint F_00df72e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf72e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: hkDataArrayNative::vf7 */
uint F_00df72f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf72f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkDataArrayNative::vf3 */
uint F_00df7300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbb4c0(*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x24),param_1);
  *(uint *)(this + 0x10) = uVar1;
  return uVar1;
}

/* ref: hkDataArrayNative::vf5 */
uint F_00df7330(unsigned int gen_a0)
{
  GEN_ENTER(0xdf7330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x30) != 0) {
    uVar1 = F_00dbb4b0(*(int *)(in_ecx + 0x30));
    return uVar1;
  }
  return *(uint *)(in_ecx + 0x14);
}

/* ref: hkDataArrayNative::vf9 */
uint F_00df7350(unsigned int gen_a0)
{
  GEN_ENTER(0xdf7350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((*(int *)(in_ecx + 0x1c) == 9) || (uVar1 = 4, *(int *)(in_ecx + 0x1c) == 10)) {
    uVar1 = 8;
  }
  return uVar1;
}

/* ref: hkDataArrayNative::vf6 */
uint F_00df7370(unsigned int gen_a0)
{
  GEN_ENTER(0xdf7370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x24) != 0) {
    iVar1 = **(int * PTR32 *)(this + 0xc);
    uVar2 = F_00d92610(*(int *)(this + 0x24));
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(*(undefined4 *)(this + 0xc),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: hkDataArrayNative::vf8 */
uint F_00df73a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf73a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  param_1[1] = 1;
  *param_1 = *(undefined4 *)(this + 0x1c);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x1c))) {
  case 0xc: ;
  case 0xd: ;
    param_1[1] = 4;
    break;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    param_1[1] = 0xc;
    break;
  case 0x11: ;
  case 0x12: ;
    param_1[1] = 0x10;
    break;
  default: ;
    goto switchD_00df73c9_caseD_13;
  case 0x18: ;
  case 0x1f: ;
    *param_1 = *(undefined4 *)(this + 0x20);
    param_1[1] = 1;
    goto switchD_00df73c9_caseD_13;
  }
  *param_1 = 0xb;
switchD_00df73c9_caseD_13: ;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  param_1[3] = uVar1;
  param_1[4] = *(undefined4 *)(this + 0x18);
  param_1[2] = *(undefined4 *)(this + 0x10);
  return 0;
}

/* ref: FUN_00df7450 */
unsigned int F_00df7450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf7450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (((param_1 == 4) && (iVar1 = *(int *)((int)this + 0x1c), iVar3 = iVar1, iVar1 != 1)) &&
     (iVar3 = param_1, iVar1 == 2)) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)((int)this + 0x1c)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_3);
    uVar2 = F_00da5f30(iVar3);
    F_00da1010(*(undefined4 *)((int)this + 0x10),param_2,*(short *)(uVar2 + 8) * param_3);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf38 */
unsigned int F_00df74b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf74b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(1);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf37 */
unsigned int F_00df74f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf74f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 2) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(2);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf36 */
unsigned int F_00df7530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 3) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(3);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf35 */
uint F_00df7570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x1c);
  uVar2 = uVar1;
  if ((uVar1 != 1) && (uVar2 = 4, uVar1 == 2)) {
    uVar2 = uVar1;
  }
  if (uVar2 == uVar1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(uVar2);
    uVar1 = F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return uVar1;
}

/* ref: hkDataArrayNative::vf34 */
unsigned int F_00df75d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf75d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 5) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(5);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf33 */
unsigned int F_00df7610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 6) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(6);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf32 */
unsigned int F_00df7650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 7) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(7);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf31 */
unsigned int F_00df7690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 8) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(8);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf30 */
unsigned int F_00df76d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf76d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 9) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(9);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf29 */
unsigned int F_00df7710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 10) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(10);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf28 */
unsigned int F_00df7750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 0xb) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(0xb);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf27 */
unsigned int F_00df7790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x1c) == 0x20) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
    uVar1 = F_00da5f30(0x20);
    F_00da1010(*(undefined4 *)(this + 0x10),param_1,*(short *)(uVar1 + 8) * param_2);
  }
  return 0;
}

/* ref: hkDataArrayNative::vf26 */
unsigned int F_00df77d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf77d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataArrayNative::vf11 */
uint F_00df7810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbc000(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x2c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),
                       *(int *)(this + 0xc) + 0xb8);
  return uVar1;
}

/* ref: hkDataArrayNative::vf13 */
uint F_00df7840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbb320(*(undefined4 *)(in_ecx + 0x1c),
                       *(int *)(in_ecx + 0x18) * param_2 + *(int *)(in_ecx + 0x10));
  return uVar1;
}

/* ref: hkDataArrayNative::vf15 */
uint F_00df7860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dba840(*(uint *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  return uVar1;
}

/* ref: hkDataArrayNative::vf19 */
uint F_00df7880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dba980(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  return uVar1;
}

/* ref: hkDataArrayNative::vf21 */
uint F_00df78b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf78b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dba980(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  return uVar1;
}

/* ref: hkDataArrayNative::vf25 */
uint F_00df78e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf78e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10))));
  if (*(int *)(this + 0x2c) != 0) {
    if (*(int *)(this + 0x1c) == 0x19) {
      uVar1 = F_00d929c0(*(undefined4 *)(this + 0x24));
    }
    else {
      uVar1 = F_00da5f30(*(int *)(this + 0x1c));
      uVar1 = (uint)*(short *)(uVar1 + 8);
    }
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x34)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x34;
    uVar1 = F_00df7270(pvVar3,*(undefined4 *)(this + 0xc),puVar4,*(undefined4 *)(this + 0x2c),
                         uVar1,*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                         *(undefined4 *)(this + 0x24),0,0);
    return uVar1;
  }
  if (*(int *)(this + 0x1c) == 0x16) {
    uVar1 = F_00dbaf60(*(undefined4 *)(this + 0x20),0,*(undefined4 *)(this + 0x24),0);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x34)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x34;
    uVar1 = F_00df7270(pvVar3,*(undefined4 *)(this + 0xc),*puVar4,puVar4[1],uVar1,
                         *(undefined4 *)(this + 0x20),0,*(undefined4 *)(this + 0x24),0,0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00df79e0 */
uint F_00df79e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf79e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x18) * param_2 + *(int *)(in_ecx + 0x10);
}

/* ref: hkDataArrayNative::vf0 */
uint F_00df7a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df7a40 */
uint F_00df7a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df7a80 */
uint F_00df7a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 0xc) + 0x14))))(*(int * PTR32 *)(param_2 + 0xc),*param_1);
  }
  F_0105a930((undefined *)((int)this + 0xc),*param_1,uVar1);
  *(int *)((int)this + 0x14) = param_2;
  *(undefined1 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00df7ad0 */
unsigned int F_00df7ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf7ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0xc));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return 0;
}

/* ref: hkDataObjectNative::vf8 */
uint F_00df7af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00d92800(*(undefined * PTR32 *)(this + 0x10),param_1);
  return *puVar1;
}

/* ref: hkDataObjectNative::vf29 */
uint F_00df7b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 8))(this)));
  uVar1 = F_00df7200(this_00,param_1);
  return uVar1;
}

/* ref: hkDataObjectNative::vf23 */
uint F_00df7b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7b30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  in_ecx = (*(int *)&gen_args[1]);
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),(*(ushort *)((*(int *)&gen_args[1]) + 0x10) & 0x200) != 0x200);
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))),in_ecx);
  if ((*(int *)&gen_args[2]) != 0) {
    uVar4 = *(undefined4 *)((*(int *)&gen_args[2]) + 0xc);
    uVar1 = *(undefined4 *)((*(int *)&gen_args[2]) + 0x10);
    uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = F_00dbaed0(uVar1,uVar4,uVar2,(*(int *)&gen_args[1]));
    return uVar2;
  }
  uVar3 = F_00da5fd0(in_ecx);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    uVar4 = 0;
    uVar3 = F_00da5fd0(in_ecx);
    uVar2 = F_00dbaed0(uVar3,uVar4,uVar2,(*(int *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: hkDataObjectNative::vf0 */
uint F_00df7bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114caf4));
  if (this[0x18] != (undefined1)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0xc));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df7c10 */
uint F_00df7c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df7c50 */
uint F_00df7c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7c50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df7cc0 */
uint F_00df7cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf7cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00df7ce0 */
uint F_00df7ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf7ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  code * pcVar7;
  int * piVar8;
  char * pcVar9;
  
  uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x2c))(param_2);
  *param_4 = *param_3;
  param_4[1] = param_1;
  if (((*(ushort *)(param_3 + 4) & 0x400) == 0x400) && ((char)param_2[0xb] == '\0')) {
    uVar4 = *(uint *)(uVar4 + 0x10);
    param_4[2] = uVar4;
    return uVar4;
  }
  uVar4 = F_00da5fd0(param_3);
  if (uVar4 != 0) {
    uVar5 = F_00da6010(param_3,REFG(undefined * PTR32, 0x1354738));
    if (uVar5 == 0) {
      pcVar9 = "hkpMaxSizeMotion";
      uVar5 = F_00d92610(uVar4);
      uVar5 = F_00da0d20(uVar5,pcVar9);
      if (uVar5 != 0) goto LAB_00df7d9d;
      piVar8 = (int *)param_2[2];
      pcVar7 = *(gen_code32 *)(*piVar8 + 0x10);
      pcVar9 = "hkpMotion";
    }
    else {
      F_0105a6d0(((undefined1 *)(gen_frame + 0x4)),uVar5,"typeName");
      piVar8 = (int *)param_2[2];
      iVar3 = *piVar8;
      puVar6 = (undefined4 *)F_0105a770(((undefined1 *)(gen_frame + 0x4)),0);
      pcVar9 = (char *)*puVar6;
      pcVar7 = *(gen_code32 *)(iVar3 + 0x10);
    }
    uVar4 = (*pcVar7)(piVar8,pcVar9);
  }
LAB_00df7d9d: ;
  bVar1 = *(byte *)((int)param_3 + 0xd);
  bVar2 = *(byte *)(param_3 + 3);
  iVar3 = *param_2;
  uVar5 = F_00da5ff0(param_3);
  uVar4 = ((code *)*(gen_code32 *)(iVar3 + 0x60))(param_2,(uint)bVar2,(uint)bVar1,uVar4,uVar5);
  param_4[2] = uVar4;
  return uVar4;
}

/* ref: FUN_00df7de0 */
uint F_00df7de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00df7ce0(this,*(undefined4 *)((int)this + 0x10),param_1,param_2);
  return uVar1;
}

/* ref: hkDataClassNative::vf7 */
uint F_00df7e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d92860(*(undefined4 *)(this + 0xc),param_1);
  F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar1,param_2);
  uVar1 = F_00d92bc0(*(undefined4 *)(this + 0xc),param_1);
  *(uint *)(param_2 + 0xc) = uVar1;
  return uVar1;
}

/* ref: hkDataClassNative::vf10 */
uint F_00df7e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf7e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d92800(*(undefined * PTR32 *)(this + 0xc),param_1);
  F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar1,param_2);
  uVar1 = F_00d92ae0(*(undefined * PTR32 *)(this + 0xc),param_1);
  *(uint *)(param_2 + 0xc) = uVar1;
  return uVar1;
}

/* ref: hkDataClassNative::vf12 */
uint F_00df7e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint in_ecx;
  int iVar3;
  int iVar4;
  int iVar5;
  
  in_ecx = *(uint *)(this + 0xc);
  iVar4 = param_1[1] * 0x10 + *param_1;
  if (in_ecx != 0) {
    do {
      uVar1 = F_00d92850(in_ecx);
      iVar4 = iVar4 + uVar1 * -0x10;
      iVar3 = 0;
      iVar5 = iVar4;
      if (0 < (int)uVar1) {
        do {
          uVar2 = F_00d92860(in_ecx,iVar3);
          F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar2,iVar5);
          uVar2 = F_00d92bc0(in_ecx,iVar3);
          *(uint *)(iVar5 + 0xc) = uVar2;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar3 < (int)uVar1);
      }
      in_ecx = F_00d92620(in_ecx);
    } while (in_ecx != 0);
    param_1 = (int *)0x0;
  }
  return (uint)param_1;
}

/* ref: hkDataArrayNative::vf2 */
unsigned int F_00df7f10(unsigned int gen_a0)
{
  GEN_ENTER(0xdf7f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00dbbf10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(undefined4 *)(this + 0x30),
               *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x24));
  return 0;
}

/* ref: hkDataArrayNative::vf4 */
uint F_00df7f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  if (param_1 != uVar1) {
    uVar1 = F_00dbbf50(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(undefined4 *)(this + 0x30),
                         *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x24),param_1);
    *(uint *)(this + 0x10) = uVar1;
  }
  return uVar1;
}

/* ref: hkDataArrayNative::vf10 */
uint F_00df7fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf7fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  LPVOID pvVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  uVar8 = F_00d928d0(*(undefined * PTR32 *)(this + 0x24),param_1);
  uVar3 = *(ushort *)(uVar8 + 0x12);
  bVar1 = *(byte *)(uVar8 + 0xc);
  iVar4 = *(int *)(this + 0x10);
  pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar10 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar9 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar9 + 0x2c),0x34)));
  *(undefined2 *)(puVar10 + 1) = 0x34;
  bVar2 = *(byte *)(uVar8 + 0xd);
  uVar11 = F_00da5ff0(uVar8);
  uVar8 = F_00da5fd0(uVar8);
  uVar5 = *(undefined4 *)(this + 0x18);
  uVar6 = *(undefined4 *)(this + 0x14);
  piVar7 = *(int * PTR32 *)(this + 0xc);
  *(undefined2 *)((int)puVar10 + 6) = 0;
  puVar10[2] = 0;
  puVar10[5] = uVar6;
  puVar10[6] = uVar5;
  puVar10[4] = (uint)uVar3 + iVar4;
  puVar10[7] = (uint)bVar1;
  puVar10[8] = (uint)bVar2;
  *puVar10 = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  puVar10[3] = piVar7;
  puVar10[9] = uVar8;
  puVar10[0xb] = uVar11;
  puVar10[0xc] = 0;
  uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x60))(piVar7,(uint)bVar1,(uint)bVar2,uVar8,uVar11);
  puVar10[10] = uVar8;
  return (uint)puVar10;
}

/* ref: hkDataArrayNative::vf12 */
uint F_00df80b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf80b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbada0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x2c),param_2,
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),0xffffffff);
  return uVar1;
}

/* ref: hkDataArrayNative::vf14 */
uint F_00df80e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf80e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbaaf0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: hkDataArrayNative::vf16 */
uint F_00df8110(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xdf8110u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dba870(*(undefined4 *)(param_1 + 0x1c),
                       *(int *)(param_1 + 0x18) * param_2 + *(int *)(param_1 + 0x10),
                       (uint)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: hkDataArrayNative::vf18 */
uint F_00df8140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dba8a0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: hkDataArrayNative::vf20 */
uint F_00df8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dba9c0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2,
                       param_2 >> 0x1f);
  return uVar1;
}

/* ref: hkDataArrayNative::vf22 */
uint F_00df81a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf81a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dba9c0(*(undefined4 *)(this + 0x1c),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2,param_3);
  return uVar1;
}

/* ref: hkDataObjectNative::vf10 */
uint F_00df81d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf81d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  ushort * puVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x0;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0xc))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x14: ;
  case 0x19: ;
  case 0x1e: ;
  case 0x20: ;
    (*(uint *)(gen_frame + 0x18)) = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    uVar7 = F_0105a8f0(((undefined1 *)(gen_frame + 0x4)));
    (*(uint *)(gen_frame + 0x14)) = F_00da5ff0(uVar7);
    uVar8 = (uint)*(byte *)(param_1 + 0xc);
    uVar7 = F_00da5fd0(param_1);
    if (uVar8 != 0x19) {
      uVar3 = F_00da5f30(uVar8);
      param_1 = (uint)*(short *)(uVar3 + 8);
      goto LAB_00df8339;
    }
    goto LAB_00df82cb;
  default: ;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0;
    uVar7 = 0;
    break;
  case 0x16: ;
  case 0x1a: ;
    (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    (*(uint *)(gen_frame + 0x18)) = *(*(uint * PTR32 *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0xc))[1];
    goto LAB_00df825f;
  case 0x1b: ;
    uVar7 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)(uVar7 + 4);
    (*(uint *)(gen_frame + 0x18)) = *(uint *)(uVar7 + 4);
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(uVar7 + 8);
    puVar2 = (uint *)F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    uVar7 = *puVar2;
    if (uVar7 != 0) {
      param_1 = F_00d929c0(uVar7);
      uVar8 = 0x19;
      goto LAB_00df8339;
    }
    break;
  case 0x22: ;
    puVar4 = (ushort *)F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    (*(uint *)(gen_frame + 0x14)) = (uint)*puVar4;
    (*(uint *)(gen_frame + 0x18)) = (uint)puVar4[1] + (int)puVar4;
LAB_00df825f: ;
    uVar7 = F_00da5fd0(param_1);
    uVar8 = (uint)*(byte *)(param_1 + 0xd);
    uVar3 = F_00da5f30(uVar8);
    param_1 = (uint)*(short *)(uVar3 + 8);
    if (uVar8 == 0) {
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                                  (*(int * PTR32 *)((int)pvVar5 + 0x2c),0x34)));
      *(undefined2 *)((int)this_00 + 4) = 0x34;
      uVar7 = F_00df7270(this_00,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x14),0,0,0,0,0,0,0,0);
      return uVar7;
    }
    if (param_1 == 0xffffffff) {
LAB_00df82cb: ;
      param_1 = F_00d929c0(uVar7);
    }
    goto LAB_00df8339;
  }
  uVar8 = 0;
  param_1 = 0;
LAB_00df8339: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar6 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar5 + 0x2c),0x34)));
  *(undefined2 *)(puVar6 + 1) = 0x34;
  piVar1 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x14);
  puVar6[4] = (*(uint *)(gen_frame + 0x18));
  puVar6[5] = (*(uint *)(gen_frame + 0x14));
  puVar6[6] = param_1;
  *(undefined2 *)((int)puVar6 + 6) = 0;
  puVar6[2] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  *puVar6 = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  puVar6[3] = piVar1;
  puVar6[7] = uVar8;
  puVar6[9] = uVar7;
  puVar6[0xc] = (*(uint * PTR32 *)(gen_frame + 0xc));
  uVar7 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar8,0,uVar7,0);
  puVar6[10] = uVar7;
  return (uint)puVar6;
}

/* ref: hkDataObjectNative::vf11 */
uint F_00df83f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf83f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00dbb320((uint)bVar1,uVar2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf12 */
uint F_00df8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xd);
  bVar2 = *(byte *)(param_1 + 0xc);
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_00dba980((uint)bVar2,(uint)bVar1,uVar3);
  return uVar3;
}

/* ref: hkDataObjectNative::vf14 */
uint F_00df8500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xc);
  iVar4 = *(int *)(this + 0x14) + 0xb8;
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_00da5ff0(param_1);
  uVar2 = F_00dbc000((uint)bVar1,uVar3,uVar2,iVar4);
  return uVar2;
}

/* ref: hkDataObjectNative::vf15 */
uint F_00df8550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00dba840((uint)bVar1,uVar2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf21 */
uint F_00df8590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00dbaaf0((uint)bVar1,uVar2,param_2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf20 */
uint F_00df85d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xdf85d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0xc),param_2);
  bVar1 = *(byte *)(param_2 + 0xc);
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00dba870((uint)bVar1,uVar2,(uint)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: hkDataObjectNative::vf19 */
uint F_00df8610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(param_1 + 0xc),param_2);
  bVar1 = *(byte *)(param_2 + 0xc);
  uVar3 = (int)(short)param_3 << 0x10;
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_00dba870((uint)bVar1,uVar2,uVar3);
  return uVar2;
}

/* ref: hkDataObjectNative::vf18 */
uint F_00df8660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf8660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_00da5ff0(param_1);
  uVar2 = F_00dbada0((uint)bVar1,uVar3,param_2,uVar2,param_3);
  return uVar2;
}

/* ref: hkDataObjectNative::vf16 */
uint F_00df86b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf86b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xd);
  bVar2 = *(byte *)(param_1 + 0xc);
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_00dbaaa0((uint)bVar2,(uint)bVar1,uVar3,param_2,param_3);
  return uVar3;
}

/* ref: hkDataObjectNative::vf17 */
uint F_00df8700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *(byte *)(param_1 + 0xd);
  bVar2 = *(byte *)(param_1 + 0xc);
  iVar4 = param_2 >> 0x1f;
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_00dbaaa0((uint)bVar2,(uint)bVar1,uVar3,param_2,iVar4);
  return uVar3;
}

/* ref: hkDataObjectNative::vf25 */
uint F_00df8750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00df7ce0(0,*(undefined4 *)(this + 0x14),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df8770 */
uint F_00df8770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: hkDataWorldNative::vf11 */
uint F_00df87b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf87b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: FUN_00df87c0 */
uint F_00df87c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf87c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkDataWorldNative::vf0 */
uint F_00df87f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00df66f0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00df8860 */
uint F_00df8860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00df8880 */
uint F_00df8880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dfbc00(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cdcc));
  F_00dfb5e0(this,REFG(undefined * PTR32, 0x135485c));
  F_00dfb620(this,&REFG(undefined, 0x15da330),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this,&REFG(undefined, 0x15da2a0),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this,&REFG(undefined, 0x15da300),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this,&REFG(undefined, 0x15da2d0),REFG(undefined * PTR32, 0x13548cc));
  return (uint)this;
}

/* ref: FUN_00df8900 */
uint F_00df8900(unsigned int gen_a0)
{
  GEN_ENTER(0xdf8900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cdcc));
  uVar1 = F_00dfb710(this);
  return uVar1;
}

/* ref: FUN_00df8910 */
uint F_00df8910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8910u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * in_ecx;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  in_ecx = (*(undefined * PTR32 *)&gen_args[1]);
  uVar3 = F_00d93010((*(undefined * PTR32 *)&gen_args[1]),0);
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)uVar3;
  if (*(char *)((*(int *)&gen_args[0]) + 0x4c) != '\0') {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)) = (undefined1)(uVar3 >> 0x18);
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 2)))) = (undefined1)(uVar3 >> 0x10);
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 1)))) = (undefined1)(uVar3 >> 8);
    uVar2 = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 1))));
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = CONCAT11((*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 2)))),(*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)));
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(CONCAT13((char)uVar3,CONCAT12(uVar2,(*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0))))))));
  }
  (*(uint *)(gen_frame + 0x0)) = (uint)(*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined1 *)(gen_frame + 0x4)) = 9;
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c) + 0x10))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c),&(*(uint *)(gen_frame + 0x0)),5);
  uVar3 = F_00d92610(in_ecx);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c) + 0x20))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c));
  F_00da3a20((undefined *)((*(int *)&gen_args[0]) + 0x30),uVar3,uVar4 - (*(int *)&gen_args[2]));
  iVar1 = **(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c);
  uVar4 = F_00da0e60(uVar3);
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(*(undefined4 *)((*(int *)&gen_args[0]) + 0x1c),uVar3,uVar4 + 1);
  return uVar3;
}

/* ref: FUN_00df89b0 */
uint F_00df89b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf89b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar5 = param_1;
  iVar6 = *(int *)((int)this + 0x68);
  piVar7 = (int *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar4 = uVar2 * 2;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar7,iVar4,0x30);
  }
  piVar1 = (int *)(param_1 + 8);
  param_1 = iVar6 - *piVar1;
  iVar4 = *piVar1 * 0x30 + *piVar7;
  if (0 < param_1) {
    do {
      if (iVar4 != 0) {
        F_00da1030(iVar4,0,4);
      }
      iVar4 = iVar4 + 0x30;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *(int *)(iVar5 + 8) = iVar6;
  uVar2 = F_00df9bf0(piVar7);
  pvVar3 = (undefined *)F_00da1030(*piVar7,0xffffffff,uVar2);
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x68)) {
    iVar5 = 0;
    do {
      F_00da0e40(*piVar7 + iVar5,*((undefined4 *)GEN_TOP((*(int *)((int)this + 100) + iVar6 * 4))),0x13);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x30;
      pvVar3 = this;
    } while (iVar6 < *(int *)((int)this + 0x68));
  }
  return (uint)pvVar3;
}

/* ref: FUN_00df8a70 */
uint F_00df8a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdf8a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x8)),0xffffffff,0x40);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x10c0c010;
  ((undefined1 *)(gen_frame + 0x30))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = *in_eax;
  (*(undefined4 *)(gen_frame + 0x14)) = 9;
  F_00da1010(((undefined1 *)(gen_frame + 0x18)),in_eax + 1,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_4;
  F_00da1030(((undefined1 *)(gen_frame + 0x44)),0xffffffff,4);
  if (in_eax[3] == 0) {
    F_00dfb200(((undefined1 *)(gen_frame + 0x30)),0x10);
  }
  else {
    F_00da0e40(((undefined1 *)(gen_frame + 0x30)),in_eax[3],0x10);
  }
  (*(undefined4 *)(gen_frame + 0x50)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x68)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x74)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  ((code *)*(gen_code32 *)(*in_edi + 0xc))(in_edi,param_3,&(*(undefined4 *)(gen_frame + 0x8)),&REFG(undefined, 0x15e3704),&(*(undefined4 *)(gen_frame + 0x48)));
  uVar1 = F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x48)));
  return uVar1;
}

/* ref: FUN_00df8b50 */
uint F_00df8b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8b50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  undefined4 in_ecx;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00da68d0(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((*(int *)&gen_args[1]) + 0x1c),(uint)*(byte *)((*(int *)&gen_args[1]) + 0x4c));
  (*(int *)(gen_frame + 0x60)) = 0;
  if (0 < *(int *)((*(int *)&gen_args[1]) + 8)) {
    (*(int *)(gen_frame + 0x6c)) = 0;
    (*(int *)(gen_frame + 0x68)) = 0;
    do {
      iVar7 = *(int *)(iVar2 + 4) + (*(int *)(gen_frame + 0x68));
      piVar1 = ((int *)GEN_TOP((*(int *)(iVar2 + 0x40) + 0xc + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(uint *)(gen_frame + 0x80)) = 0;
      (*(int *)(gen_frame + 0x84)) = ((int)0x80000000);
      uVar3 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x5c)) = iVar7;
      uVar5 = 0;
      if (0 < (int)uVar3) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x7c)),uVar3 & ((int)uVar3 < 0) - 1,4);
        uVar5 = (*(uint *)(gen_frame + 0x80));
      }
      (*(int *)(gen_frame + 0x88)) = uVar3 - uVar5;
      puVar4 = (undefined4 *)((*(int *)(gen_frame + 0x7c)) + uVar5 * 4);
      if (0 < (*(int *)(gen_frame + 0x88))) {
        for (; iVar7 = (*(int *)(gen_frame + 0x5c)), (*(int *)(gen_frame + 0x88)) != 0; (*(int *)(gen_frame + 0x88)) = (*(int *)(gen_frame + 0x88)) + -1) {
          *puVar4 = 0xffffffff;
          puVar4 = puVar4 + 1;
        }
      }
      (*(uint *)(gen_frame + 0x80)) = uVar3;
      (*(int *)(gen_frame + 0x88)) = 0;
      if (0 < piVar1[1]) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x14);
        (*(int *)(gen_frame + 0x58)) = 0;
        (*(int *)&gen_args[1]) = 0;
        do {
          uVar3 = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x54)),*(undefined4 *)(*piVar1 + 4 + (*(int *)&gen_args[1])),0xfffffffd);
          if ((-1 < (int)uVar3) && (-1 < *((int *)GEN_TOP((*(int *)(iVar2 + 0x10) + uVar3 * 8))))) {
            *(int *)((*(int *)(gen_frame + 0x58)) + (*(int *)(gen_frame + 0x7c))) = *(int *)(*piVar1 + (*(int *)&gen_args[1])) - *(int *)(iVar7 + 0x14);
            *(undefined4 *)((*(int *)(gen_frame + 0x58)) + 4 + (*(int *)(gen_frame + 0x7c))) =
                 *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x10) + uVar3 * 8)));
            *(undefined4 *)((*(int *)(gen_frame + 0x58)) + 8 + (*(int *)(gen_frame + 0x7c))) =
                 *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x10) + 4 + uVar3 * 8)));
            (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 0xc;
            iVar7 = (*(int *)(gen_frame + 0x5c));
          }
          (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 0x10;
          (*(int *)(gen_frame + 0x88)) = (*(int *)(gen_frame + 0x88)) + 1;
        } while ((*(int *)(gen_frame + 0x88)) < piVar1[1]);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x1c) + 0x1c))))
                (*(int * PTR32 *)(iVar2 + 0x1c),*(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0x14),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)));
      (*(uint *)(gen_frame + 0x80)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x84))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x7c)),(*(int *)(gen_frame + 0x84)) * 4);
      }
      iVar7 = *(int *)(iVar2 + 4) + (*(int *)(gen_frame + 0x68));
      piVar1 = ((int *)GEN_TOP((*(int *)(iVar2 + 0x40) + 0x18 + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(uint *)(gen_frame + 0x74)) = 0;
      (*(int *)(gen_frame + 0x78)) = ((int)0x80000000);
      uVar3 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x84)) = 0x80000000;
      (*(int *)(gen_frame + 0x88)) = iVar7;
      if (0 < (int)uVar3) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x70)),((int)uVar3 < 0) - 1 & uVar3,4);
      }
      (*(uint *)(gen_frame + 0x74)) = uVar3;
      iVar6 = 0;
      if (0 < piVar1[1]) {
        iVar8 = 0;
        do {
          *(int *)((*(int *)(gen_frame + 0x70)) + iVar8) = *(int *)(*piVar1 + iVar6 * 8) - *(int *)((*(int *)(gen_frame + 0x88)) + 0x14);
          *(undefined4 *)((*(int *)(gen_frame + 0x70)) + 4 + iVar8) = 0;
          uVar3 = F_00da4190((undefined *)(iVar2 + 0x30),*(undefined4 *)(*piVar1 + 4 + iVar6 * 8),
                               0xffffffff);
          *(uint *)((*(int *)(gen_frame + 0x70)) + 8 + iVar8) = uVar3;
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 0xc;
          iVar7 = (*(int *)(gen_frame + 0x88));
        } while (iVar6 < piVar1[1]);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x1c) + 0x1c))))
                (*(int * PTR32 *)(iVar2 + 0x1c),*(int *)(iVar7 + 0x20) + *(int *)(iVar7 + 0x14),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x74)));
      (*(uint *)(gen_frame + 0x74)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x78))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x70)),(*(int *)(gen_frame + 0x78)) * 4);
      }
      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x30;
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x34;
      (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(int *)(gen_frame + 0x78)) = 0x80000000;
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while ((*(int *)(gen_frame + 0x60)) < *(int *)(iVar2 + 8));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x1c) + 0x1c))))(*(int * PTR32 *)(iVar2 + 0x1c),(*(undefined4 *)&gen_args[2]),0);
  (*(int *)&gen_args[1]) = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    iVar7 = 0;
    do {
      (*(undefined4 *)(gen_frame + 0x18)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x24)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x30)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xc))))
                (iVar2 + 0x20,*(undefined4 *)(iVar2 + 0x1c),*(int *)(iVar2 + 4) + iVar7,
                 &REFG(undefined, 0x15e36d4),&(*(undefined4 *)(gen_frame + 0x10)));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x10)));
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 1;
      iVar7 = iVar7 + 0x30;
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while ((*(int *)&gen_args[1]) < *(int *)(iVar2 + 8));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x1c) + 0x1c))))(*(int * PTR32 *)(iVar2 + 0x1c),0x18,0);
  puVar4 = (undefined4 *)F_00e1d7a0(iVar2 + 0x20);
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),(char)((uint)*puVar4 >> 8) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)));
  F_00da68d0(((undefined1 *)(gen_frame + 0x44)),*(undefined4 *)(iVar2 + 0x1c),(*(int *)&gen_args[1]));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x10) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * 8))));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x10) + 4 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * 8)))
              );
  in_ecx = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) * 0x18)));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),0);
  uVar3 = F_00d92610(in_ecx);
  uVar3 = F_00da4190((undefined *)(iVar2 + 0x30),uVar3,0xffffffff);
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),uVar3);
  F_00da6900(((undefined1 *)(gen_frame + 0x44)));
  uVar3 = F_00da6900(((undefined1 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00df8f30 */
uint F_00df8f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8f30u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x38)) = ((code *)*(gen_code32 *)(*in_edi + 0x20))(in_edi);
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x18));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000020;
  if (0x20 < in_eax) {
    iVar1 = 0x40;
    if (0x3f < in_eax) {
      iVar1 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),iVar1,1);
  }
  if (0 < in_eax - (*(int *)(gen_frame + 0x10))) {
    F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10)),-1,in_eax - (*(int *)(gen_frame + 0x10)));
  }
  uVar2 = in_eax - 1U & (*(uint *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x10)) = in_eax;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi,(*(undefined1 * PTR32 *)(gen_frame + 0xc)),in_eax - uVar2);
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
  }
  return uVar3;
}

/* ref: FUN_00df8ff0 */
unsigned int F_00df8ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8ff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  int * piVar7;
  undefined * pvVar8;
  int iVar9;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar9 = (*(int * PTR32 *)&gen_args[1])[1];
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[7])) + 0x20))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[7])));
  *(uint *)(iVar9 + 0x14) = uVar3;
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff00)));
  F_00da3de0(((undefined1 *)(gen_frame + 0x38)),(*(int * PTR32 *)&gen_args[1]));
  ((undefined * PTR32 *)(gen_frame + 0x48))[0] = &REFG(undefined, 0x15da330);
  ((undefined * PTR32 *)(gen_frame + 0x48))[1] = &REFG(undefined, 0x15da2a0);
  ((undefined * PTR32 *)(gen_frame + 0x48))[2] = &REFG(undefined, 0x15da300);
  ((undefined * PTR32 *)(gen_frame + 0x48))[3] = &REFG(undefined, 0x15da2d0);
  (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  do {
    uVar3 = F_00d92610(((undefined * PTR32 *)(gen_frame + 0x48))[(int)(*(int * PTR32 *)&gen_args[1])]);
    F_00da3a20(((undefined1 *)(gen_frame + 0x38)),uVar3,1);
    F_00df8910(piVar2,((undefined * PTR32 *)(gen_frame + 0x48))[(int)(*(int * PTR32 *)&gen_args[1])],*(undefined4 *)(iVar9 + 0x14));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 1)));
  } while ((int)(*(int * PTR32 *)&gen_args[1]) < 4);
  (*(int *)(gen_frame + 0x68)) = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
    (*(uint *)(gen_frame + 0x74)) = 0;
    do {
      uVar3 = F_00d92610(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + (*(uint *)(gen_frame + 0x74)) + 4))));
      uVar3 = F_00da3ae0(((undefined1 *)(gen_frame + 0x38)),uVar3);
      F_00da3e40(((undefined1 *)(gen_frame + 0x38)),(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar3);
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '\0') {
        uVar3 = F_00d92610(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + (*(uint *)(gen_frame + 0x74)) + 4))));
        F_00da3a20(((undefined1 *)(gen_frame + 0x38)),uVar3,1);
        F_00df8910(piVar2,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4 + (*(uint *)(gen_frame + 0x74))))),
                     *(undefined4 *)(iVar9 + 0x14));
      }
      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 0x18;
      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 1;
    } while ((*(int *)(gen_frame + 0x68)) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
  }
  F_00df8f30(0x10,piVar2[7]);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
  iVar4 = uVar3 - *(int *)(iVar9 + 0x14);
  *(int *)(iVar9 + 0x18) = iVar4;
  *(int *)(iVar9 + 0x1c) = iVar4;
  *(int *)(iVar9 + 0x20) = iVar4;
  *(int *)(iVar9 + 0x24) = iVar4;
  *(int *)(iVar9 + 0x28) = iVar4;
  *(int *)(iVar9 + 0x2c) = iVar4;
  F_00da3e20(((undefined1 *)(gen_frame + 0x38)));
  iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc);
  if ((int)(piVar2[6] & 0x3fffffffU) < iVar9) {
    iVar4 = (piVar2[6] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar9) {
      iVar4 = iVar9;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2 + 4,iVar4,8);
  }
  iVar4 = 0;
  if (iVar9 != piVar2[5] && -1 < iVar9 - piVar2[5]) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar9 - piVar2[5]);
  }
  piVar2[5] = iVar9;
  (*(int * PTR32 *)&gen_args[1]) = (int *)piVar2[2];
  if ((int)(piVar2[0x12] & 0x3fffffffU) < (int)(*(int * PTR32 *)&gen_args[1])) {
    iVar9 = (piVar2[0x12] & 0x3fffffffU) * 2;
    iVar4 = (int)(*(int * PTR32 *)&gen_args[1]);
    if ((int)(*(int * PTR32 *)&gen_args[1]) < iVar9) {
      iVar4 = iVar9;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2 + 0x10,iVar4,0x34);
  }
  iVar9 = (piVar2[0x11] - (int)(*(int * PTR32 *)&gen_args[1])) + -1;
  if (-1 < iVar9) {
    pvVar8 = ((undefined *)GEN_TOP((iVar9 * 0x34 + (int)(*(int * PTR32 *)&gen_args[1]) * 0x34 + piVar2[0x10])));
    do {
      F_00e1d4f0(pvVar8);
      pvVar8 = (undefined *)((int)pvVar8 + -0x34);
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  iVar9 = (int)(*(int * PTR32 *)&gen_args[1]) - piVar2[0x11];
  if (0 < iVar9) {
    puVar5 = (undefined4 *)(piVar2[0x11] * 0x34 + piVar2[0x10] + 0x14);
    do {
      if (puVar5 != (undefined4 *)0x14) {
        puVar5[-5] = 0;
        puVar5[-4] = 0;
        puVar5[-3] = 0x80000000;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x80000000;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0x80000000;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0x80000000;
        puVar5[7] = 0;
      }
      puVar5 = puVar5 + 0xd;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  piVar2[0x11] = (int)(*(int * PTR32 *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x5c)) = F_00dfb4e0((*(undefined * PTR32 *)(gen_frame + 0x78)),REFG(undefined * PTR32, 0x13548cc));
  (*(uint *)(gen_frame + 0x74)) = 1;
  if (1 < piVar2[2]) {
    (*(int *)(gen_frame + 0x70)) = 0x34;
    (*(int *)(gen_frame + 0x68)) = 0x30;
    do {
      iVar4 = piVar2[1] + (*(int *)(gen_frame + 0x68));
      uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
      *(uint *)(iVar4 + 0x14) = uVar3;
      iVar9 = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x18)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x24)) = 0x80000000;
      (*(uint *)(gen_frame + 0x30)) = 0x80000000;
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(uint *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      if ((*(char *)(*piVar2 + 8) == '\0') && ((*(uint *)(gen_frame + 0x74)) == (*(uint *)(gen_frame + 0x5c)))) {
        if (0 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc)) {
          iVar6 = 0;
          do {
            if (*((uint *)GEN_TOP((iVar6 + 0x10 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 8)))) == (*(uint *)(gen_frame + 0x5c))) {
              *(undefined4 *)(piVar2[4] + iVar9 * 8) = 0xffffffff;
              *(undefined4 *)(piVar2[4] + 4 + iVar9 * 8) = 0xffffffff;
            }
            iVar9 = iVar9 + 1;
            iVar6 = iVar6 + 0x18;
          } while (iVar9 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc));
        }
      }
      else {
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
        if (0 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc)) {
          (*(int *)(gen_frame + 0x6c)) = 0;
          do {
            (*(int * PTR32 *)(gen_frame + 0x60)) = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 8) + (*(int *)(gen_frame + 0x6c)))));
            if ((*(int * PTR32 *)(gen_frame + 0x60))[4] == (*(uint *)(gen_frame + 0x74))) {
              (*(uint *)(gen_frame + 0x64)) = (*(int * PTR32 *)(gen_frame + 0x60))[1];
              (*(undefined * PTR32 *)(gen_frame + 0x58)) = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x60));
              iVar6 = (int)(*(int * PTR32 *)&gen_args[1]) * 8;
              *(uint *)(iVar6 + piVar2[4]) = (*(uint *)(gen_frame + 0x74));
              iVar9 = piVar2[4];
              uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
              *(uint *)(iVar9 + iVar6 + 4) = uVar3 - *(int *)(iVar4 + 0x14);
              if ((*(uint *)(gen_frame + 0x64)) == 0) {
                ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x10))((int *)piVar2[7],*(*(int * PTR32 *)(gen_frame + 0x60)),(*(int * PTR32 *)(gen_frame + 0x60))[5]);
              }
              else {
                ((code *)*(gen_code32 *)(piVar2[8] + 0xc))(piVar2 + 8,piVar2[7],(*(undefined * PTR32 *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x64)),&(*(int *)(gen_frame + 0x4)));
              }
            }
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x18;
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 1)));
          } while ((int)(*(int * PTR32 *)&gen_args[1]) < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc));
        }
      }
      iVar9 = 0;
      if (0 < (*(int *)(gen_frame + 0x8))) {
        do {
          piVar7 = (int *)((*(int *)(gen_frame + 0x4)) + iVar9 * 8);
          *piVar7 = *piVar7 - *(int *)(iVar4 + 0x14);
          piVar7 = (int *)((*(int *)(gen_frame + 0x4)) + 4 + iVar9 * 8);
          *piVar7 = *piVar7 - *(int *)(iVar4 + 0x14);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (*(int *)(gen_frame + 0x8)));
      }
      (*(int * PTR32 *)&gen_args[1]) = (int *)((*(uint *)(gen_frame + 0x14)) - 1);
      if (-1 < (int)(*(int * PTR32 *)&gen_args[1])) {
        (*(undefined * PTR32 *)(gen_frame + 0x58)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x20);
        iVar9 = (int)(*(int * PTR32 *)&gen_args[1]) * 0x10;
        do {
          (*(uint *)(gen_frame + 0x64)) = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x58)),*(undefined4 *)((*(int *)(gen_frame + 0x10)) + 4 + iVar9),0);
          if ((*(uint *)(gen_frame + 0x64)) != 0) {
            (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)((*(int *)(gen_frame + 0x10)) + iVar9);
            if ((*(uint *)(gen_frame + 0x2c)) == ((*(uint *)(gen_frame + 0x30)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x28)),8);
            }
            piVar7 = (int *)((*(int *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x2c)) * 8);
            (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
            *piVar7 = *(*(int * PTR32 *)(gen_frame + 0x60)) - *(int *)(iVar4 + 0x14);
            piVar7[1] = (*(uint *)(gen_frame + 0x64));
            (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) - 1;
            if ((int *)(*(uint *)(gen_frame + 0x14)) != (*(int * PTR32 *)&gen_args[1])) {
              puVar5 = (undefined4 *)((*(int *)(gen_frame + 0x10)) + iVar9);
              iVar6 = ((*(uint *)(gen_frame + 0x14)) * 0x10 + (*(int *)(gen_frame + 0x10))) - (int)puVar5;
              (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)&REFG(undefined, 0x4);
              do {
                *puVar5 = *(undefined4 *)(iVar6 + (int)puVar5);
                puVar5 = puVar5 + 1;
                (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x60)) + -1);
              } while ((*(int * PTR32 *)(gen_frame + 0x60)) != (int *)0x0);
            }
          }
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) - 1)));
          iVar9 = iVar9 + -0x10;
        } while (-1 < (int)(*(int * PTR32 *)&gen_args[1]));
      }
      F_00da68d0(((undefined * PTR32 *)(gen_frame + 0x48)),piVar2[7],(uint)*(byte *)(piVar2 + 0x13));
      uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
      *(uint *)(iVar4 + 0x18) = uVar3 - *(int *)(iVar4 + 0x14);
      F_00da6970(((undefined * PTR32 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x4)),4,(*(int *)(gen_frame + 0x8)) * 2);
      F_00df8f30(0x10,piVar2[7]);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
      *(uint *)(iVar4 + 0x1c) = uVar3 - *(int *)(iVar4 + 0x14);
      ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x1c))((int *)piVar2[7],(*(uint *)(gen_frame + 0x14)) * 0xc,1);
      F_00df99d0((undefined *)((*(int *)(gen_frame + 0x70)) + 0xc + piVar2[0x10]),&(*(int *)(gen_frame + 0x10)));
      F_00df8f30(0x10,piVar2[7]);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
      *(uint *)(iVar4 + 0x20) = uVar3 - *(int *)(iVar4 + 0x14);
      ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x1c))((int *)piVar2[7],(*(int *)(gen_frame + 0x20)) * 0xc,1);
      F_00df9a50((undefined *)((*(int *)(gen_frame + 0x70)) + 0x18 + piVar2[0x10]),&(*(undefined4 *)(gen_frame + 0x1c)));
      F_00df8f30(0x10,piVar2[7]);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
      *(uint *)(iVar4 + 0x24) = uVar3 - *(int *)(iVar4 + 0x14);
      (*(int *)(gen_frame + 0x6c)) = 0;
      if (-1 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x34)) {
        piVar7 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x2c);
        do {
          if (*piVar7 != -1) break;
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
          piVar7 = piVar7 + 2;
        } while ((*(int *)(gen_frame + 0x6c)) <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x34));
      }
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x78));
      if ((*(int *)(gen_frame + 0x6c)) <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x34)) {
        do {
          uVar3 = F_00dbd970((undefined *)((int)pvVar8 + 0x14),
                               *((undefined4 *)GEN_TOP((*(int *)((int)pvVar8 + 0x2c) + (*(int *)(gen_frame + 0x6c)) * 8))),
                               0xffffffff);
          if ((-1 < (int)uVar3) &&
             (*((uint *)GEN_TOP((*(int *)((int)pvVar8 + 8) + 0x10 + uVar3 * 0x18))) == (*(uint *)(gen_frame + 0x74)))) {
            uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x2c) + 4 + (*(int *)(gen_frame + 0x6c)) * 8)));
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
            F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),*(undefined4 *)(piVar2[4] + 4 + uVar3 * 8));
            F_00da0e60(uVar1);
            F_00da6ae0(((undefined * PTR32 *)(gen_frame + 0x48)));
            F_00df8f30(4,piVar2[7]);
            pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x78));
          }
          iVar9 = *(int *)((int)pvVar8 + 0x34);
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
          if ((*(int *)(gen_frame + 0x6c)) <= iVar9) {
            piVar7 = ((int *)GEN_TOP((*(int *)((int)pvVar8 + 0x2c) + (*(int *)(gen_frame + 0x6c)) * 8)));
            do {
              if (*piVar7 != -1) break;
              (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
              piVar7 = piVar7 + 2;
            } while ((*(int *)(gen_frame + 0x6c)) <= iVar9);
          }
        } while ((*(int *)(gen_frame + 0x6c)) <= iVar9);
        if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '\0') {
          F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),0xffffffff);
          F_00df8f30(0x10,piVar2[7]);
        }
      }
      uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      *(uint *)(iVar4 + 0x28) = uVar3 - *(int *)(iVar4 + 0x14);
      if (0 < (int)(*(uint *)(gen_frame + 0x2c))) {
        do {
          iVar9 = (*(int *)(gen_frame + 0x28)) + (int)(*(int * PTR32 *)&gen_args[1]) * 8;
          F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + (int)(*(int * PTR32 *)&gen_args[1]) * 8))));
          F_00da0e60(*(undefined4 *)(iVar9 + 4));
          F_00da6ae0(((undefined * PTR32 *)(gen_frame + 0x48)));
          F_00df8f30(4,piVar2[7]);
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 1)));
        } while ((int)(*(int * PTR32 *)&gen_args[1]) < (int)(*(uint *)(gen_frame + 0x2c)));
      }
      if ((*(uint *)(gen_frame + 0x2c)) != 0) {
        F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),0xffffffff);
        F_00df9ad0((undefined *)((*(int *)(gen_frame + 0x70)) + 0x24 + piVar2[0x10]),&(*(int *)(gen_frame + 0x28)));
        F_00df8f30(0x10,piVar2[7]);
      }
      uVar3 = ((code *)*(gen_code32 *)(*(int *)piVar2[7] + 0x20))((int *)piVar2[7]);
      *(uint *)(iVar4 + 0x2c) = uVar3 - *(int *)(iVar4 + 0x14);
      F_00da6900(((undefined * PTR32 *)(gen_frame + 0x48)));
      F_00e1d4f0(&(*(int *)(gen_frame + 0x4)));
      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x30;
      (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 0x34;
      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x74)) < piVar2[2]);
  }
  return 0;
}

/* ref: hkBinaryPackfileWriter::vf7 */
uint F_00df9700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  int * piVar2;
  undefined4 in_eax;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  pcVar3 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x18))))((*(int * PTR32 *)&gen_args[1]),(int)&(*(int * PTR32 *)&gen_args[1]) + 3)));
  in_eax = (*(undefined4 *)&gen_args[2]);
  if (*pcVar3 == '\0') {
    return 1;
  }
  F_00dfafb0(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[2]));
  (*(undefined2 *)(gen_frame + 0x62)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)) = (*(undefined * PTR32 (*)[9])REFP(0x114cdfc));
  (*(int * PTR32 *)(gen_frame + 0x64)) = piVar2;
  (*(uint *)(gen_frame + 0x68)) = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c));
  F_00df89b0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0xc)));
  F_00df8a70(in_eax,((undefined1 *)(gen_frame + 0x2c)),(*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x14)));
  uVar4 = (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[8])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  uVar5 = F_00df9bf0(((undefined1 *)(gen_frame + 0x10)));
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[7])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),uVar5);
  F_00df8ff0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0xc)));
  uVar5 = (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[8])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  F_00df8b50((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0xc)),uVar4);
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[7])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),uVar5,0);
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[5])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  pcVar3 = ((char *)GEN_TOP((*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[3])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),(int)&(*(int * PTR32 *)&gen_args[1]) + 3)));
  cVar1 = *pcVar3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  F_00dfb020(((undefined1 *)(gen_frame + 0xc)));
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00df9830 */
uint F_00df9830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df9840 */
uint F_00df9840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9840u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 *)&gen_args[1]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00df9870 */
uint F_00df9870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df9880 */
uint F_00df9880(unsigned int gen_a0)
{
  GEN_ENTER(0xdf9880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00df98a0 */
uint F_00df98a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf98a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df98b0 */
uint F_00df98b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf98b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00df98c0 */
uint F_00df98c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf98c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00df98f0 */
uint F_00df98f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf98f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00df9940 */
uint F_00df9940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9940u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df99a0 */
uint F_00df99a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf99a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00df99b0 */
uint F_00df99b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf99b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00df99d0 */
unsigned int F_00df99d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf99d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar1;
  return 0;
}

/* ref: FUN_00df9a30 */
uint F_00df9a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9a30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9a50 */
unsigned int F_00df9a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar1;
  return 0;
}

/* ref: FUN_00df9ab0 */
uint F_00df9ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9ab0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9ad0 */
unsigned int F_00df9ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar1;
  return 0;
}

/* ref: FUN_00df9b30 */
uint F_00df9b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9b30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00df9ba0 */
uint F_00df9ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9ba0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9be0 */
uint F_00df9be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9be0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x34 + *in_ecx;
}

/* ref: FUN_00df9bf0 */
uint F_00df9bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf9bf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(int *)(param_1 + 4) * 0x30;
}

/* ref: FUN_00df9c30 */
unsigned int F_00df9c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00df9c70 */
uint F_00df9c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df9cc0 */
unsigned int F_00df9cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - (int)param_1;
  iVar2 = 4;
  do {
    *param_1 = *(undefined4 *)(iVar1 + (int)param_1);
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00df9d50 */
uint F_00df9d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if (0 < (int)param_2) {
    do {
      if (param_1 != 0) {
        param_2 = F_00da1030(param_1,0,4);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return param_2;
}

/* ref: FUN_00df9da0 */
uint F_00df9da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9dc0 */
uint F_00df9dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00df9de0 */
uint F_00df9de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9e00 */
uint F_00df9e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9e40 */
uint F_00df9e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_00df9e80 */
uint F_00df9e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00df9eb0 */
uint F_00df9eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x34);
  return uVar1;
}

/* ref: FUN_00df9ed0 */
uint F_00df9ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x114cdfc));
  *(int * PTR32 *)((int)this + 8) = param_1;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1);
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: hkSubStreamWriter::vf3 */
uint F_00df9f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8),param_1);
  return param_1;
}

/* ref: hkSubStreamWriter::vf4 */
uint F_00df9f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdf9f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))
                    (*(int * PTR32 *)(this + 8),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf5 */
uint F_00df9f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdf9f30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
                    (*(int * PTR32 *)(this + 8),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf6 */
uint F_00df9f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf9f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))(*(int * PTR32 *)(this + 8),param_1);
  return param_1;
}

/* ref: hkSubStreamWriter::vf7 */
uint F_00df9f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))
                      (*(int * PTR32 *)(this + 8),*(int *)(this + 0xc) + param_1,0);
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))(*(int * PTR32 *)(this + 8),param_1,param_2);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf8 */
uint F_00df9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf9fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x20))))(*(int * PTR32 *)(this + 8));
  return uVar1 - *(int *)(this + 0xc);
}

/* ref: FUN_00df9fd0 */
unsigned int F_00df9fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdf9fd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x34);
  }
  return 0;
}

/* ref: FUN_00dfa000 */
uint F_00dfa000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_00dfa010 */
uint F_00dfa010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa010u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00dfa020 */
uint F_00dfa020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa020u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00dfa040 */
uint F_00dfa040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3ae0(this,param_2);
  F_00da3e40(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00dfa160 */
uint F_00dfa160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfa1b0 */
unsigned int F_00dfa1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(param_1 * 0x10 + *(int *)this);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 0x10) - (int)puVar1;
    iVar3 = 4;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00dfa1f0 */
uint F_00dfa1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa1f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    if ((int)(uVar2 * 2) <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dfa250 */
uint F_00dfa250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dfa290 */
uint F_00dfa290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa2d0 */
uint F_00dfa2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa2d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa310 */
uint F_00dfa310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa350 */
uint F_00dfa350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa390 */
uint F_00dfa390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa3d0 */
uint F_00dfa3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa3d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dfa410 */
uint F_00dfa410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

