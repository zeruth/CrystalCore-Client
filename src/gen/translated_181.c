#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00e0f500 */
unsigned int F_00e0f500(unsigned int gen_a0)
{
  GEN_ENTER(0xe0f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e0f560 */
uint F_00e0f560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f560u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e0f5e0 */
uint F_00e0f5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f5e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f630 */
uint F_00e0f630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f630u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f680 */
uint F_00e0f680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f680u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f6a0 */
uint F_00e0f6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6c0 */
uint F_00e0f6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6d0 */
uint F_00e0f6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6e0 */
uint F_00e0f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd9f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6f0 */
uint F_00e0f6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e0f730 */
uint F_00e0f730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f760 */
uint F_00e0f760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f770 */
uint F_00e0f770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f790 */
uint F_00e0f790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f7e0 */
uint F_00e0f7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f820 */
uint F_00e0f820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00e0f860 */
uint F_00e0f860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e0f890 */
unsigned int F_00e0f890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00e0f900 */
unsigned int F_00e0f900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f950 */
unsigned int F_00e0f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f950u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f9c0 */
uint F_00e0f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f9f0 */
uint F_00e0f9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0fa10 */
uint F_00e0fa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fa10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e0fa20 */
uint F_00e0fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0fa40 */
uint F_00e0fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0fa90 */
uint F_00e0fa90(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fa90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e0fac0 */
uint F_00e0fac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e0faf0 */
uint F_00e0faf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0faf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0fb30 */
uint F_00e0fb30(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00d919e0(&REFG(undefined * PTR32, 0x1354948));
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1354948);
  return (uint)this;
}

/* ref: FUN_00e0fb60 */
uint F_00e0fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d919e0(&REFG(undefined * PTR32, 0x1354948));
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1354948);
  return uVar1;
}

/* ref: FUN_00e0fb80 */
uint F_00e0fb80(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fb80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e0fba0 */
unsigned int F_00e0fba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x7c);
  }
  return 0;
}

/* ref: FUN_00e0fbd0 */
uint F_00e0fbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190((undefined *)((int)this + 4),param_1,0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00e0fbf0 */
unsigned int F_00e0fbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fbf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00e0fc20 */
uint F_00e0fc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fc20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_2[1] - 1;
  if (-1 < (int)uVar1) {
    piVar2 = (int *)(*param_2 + uVar1 * 0x18);
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      piVar2 = piVar2 + -6;
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00e0fc50 */
uint F_00e0fc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x2c) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18)));
    do {
      if (*piVar2 == param_1) goto LAB_00e0fc73;
      piVar2 = piVar2 + -6;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = -1;
LAB_00e0fc73: ;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18))) = param_2;
  return iVar1 * 3;
}

/* ref: FUN_00e0fc90 */
uint F_00e0fc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x2c) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18)));
    do {
      if (*piVar2 == param_1) goto LAB_00e0fcb3;
      piVar2 = piVar2 + -6;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = -1;
LAB_00e0fcb3: ;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x14 + iVar1 * 0x18))) = param_2;
  return iVar1 * 3;
}

/* ref: FUN_00e0fcd0 */
unsigned int F_00e0fcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(int *)((int)this + 0x18) = param_1;
  return 0;
}

/* ref: FUN_00e0fd00 */
unsigned int F_00e0fd00(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e0fd40 */
uint F_00e0fd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(uint *)((int)this + 0x1c) = (uint)(byte)param_2;
  return (uint)this;
}

/* ref: FUN_00e0fd80 */
uint F_00e0fd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)this;
  param_2[1] = param_1;
  param_2[2] = *(undefined4 *)((int)this + 0x10);
  param_2[3] = *(undefined4 *)((int)this + 0x14);
  return (uint)param_2;
}

/* ref: FUN_00e0fda0 */
uint F_00e0fda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: hkDataObjectDict::vf27 */
uint F_00e0fdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fdc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: hkDataObjectDict::vf1 */
uint F_00e0fdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: hkDataObjectDict::vf5 */
uint F_00e0fdf0(void)
{
  GEN_ENTER(0xe0fdf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDataObjectDict::vf7 */
uint F_00e0fe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + 1;
}

/* ref: hkDataObjectDict::vf25 */
uint F_00e0fe10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fe10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *param_1;
  param_2[1] = 0;
  param_2[2] = param_1[4];
  param_2[3] = param_1[5];
  return (uint)param_2;
}

/* ref: FUN_00e0fe40 */
uint F_00e0fe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fe40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e0fe80 */
uint F_00e0fe80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fe80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    uVar2 = uVar1;
    piVar3 = *(int * PTR32 *)((int)this + 0x10);
    while (*piVar3 != param_1) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 4;
      if (*(int *)((int)this + 0x14) <= (int)uVar2) {
        return uVar2;
      }
    }
    uVar1 = uVar2 * 2;
    (*(int * PTR32 *)((int)this + 0x10))[uVar2 * 4] = param_2;
  }
  return uVar1;
}

/* ref: hkDataObjectDict::vf6 */
byte F_00e0fec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 < *(int *)(this + 0x14);
}

/* ref: hkDataObjectDict::vf8 */
uint F_00e0fee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 0x10)));
}

/* ref: hkDataObjectDict::vf9 */
uint F_00e0ff00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ff00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = this;
  param_1[1] = *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + param_2 * 0x10)));
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf26 */
uint F_00e0ff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (param_1[5] != 0) {
    return 1;
  }
  iVar1 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar2 = *(int * PTR32 *)(this + 0x10);
    do {
      if (*piVar2 == *param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(this + 0x14));
  }
  return 0;
}

/* ref: FUN_00e0ff60 */
uint F_00e0ff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ff60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x114d894));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined1 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: VariableIntArrayImplementation::vf1 */
uint F_00e0ffa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0ffa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2c)));
}

/* ref: VariableIntArrayImplementation::vf9 */
uint F_00e0ffb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0ffb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(int *)(in_ecx + 0x10) != 0) * 4 + 4;
}

/* ref: VariableIntArrayImplementation::vf7 */
uint F_00e0ffc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0ffc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: VariableIntArrayImplementation::vf30 */
unsigned int F_00e0ffd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ffd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_2);
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x58))
                (this,iVar1,*(undefined4 *)(param_1 + iVar1 * 8),
                 *(undefined4 *)(param_1 + 4 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: VariableIntArrayImplementation::vf6 */
uint F_00e10010(void)
{
  GEN_ENTER(0xe10010u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: VariableIntArrayImplementation::vf39 */
uint F_00e10020(unsigned int gen_a0)
{
  GEN_ENTER(0xe10020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10040 */
uint F_00e10040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10040u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10050 */
uint F_00e10050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10050u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10090 */
uint F_00e10090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e100c0 */
unsigned int F_00e100c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe100c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 8) = *param_3;
      *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_3[1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: VariableIntArrayImplementation::vf8 */
uint F_00e10100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    *param_1 = 7;
    param_1[3] = *(undefined4 *)(this + 0x18);
    uVar1 = *(undefined4 *)(this + 0x14);
    param_1[4] = 4;
    param_1[2] = uVar1;
    param_1[1] = 1;
    return 0;
  }
  *param_1 = 9;
  param_1[3] = *(undefined4 *)(this + 0x24);
  uVar1 = *(undefined4 *)(this + 0x20);
  param_1[4] = 8;
  param_1[2] = uVar1;
  param_1[1] = 1;
  return 0;
}

/* ref: VariableIntArrayImplementation::vf5 */
uint F_00e10160(unsigned int gen_a0)
{
  GEN_ENTER(0xe10160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x10) == 0) {
    return *(uint *)(in_ecx + 0x18);
  }
  if (*(int *)(in_ecx + 0x10) != 1) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x24);
}

/* ref: VariableIntArrayImplementation::vf19 */
uint F_00e10180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(this + 0x10) == 0) {
    return *((uint *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 4)));
  }
  if (*(int *)(this + 0x10) != 1) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x20) + param_1 * 8)));
}

/* ref: VariableIntArrayImplementation::vf21 */
uint F_00e101b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe101b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(this + 0x10) == 0) {
    return *((uint *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 4)));
  }
  if (*(int *)(this + 0x10) != 1) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x20) + param_1 * 8)));
}

/* ref: VariableIntArrayImplementation::vf20 */
uint F_00e101f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe101f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = *(uint *)(this + 0x14);
    *(int *)(uVar1 + param_1 * 4) = param_2;
    this[0x2c] = (undefined1)0x1;
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,param_1,param_2,param_2 >> 0x1f);
  this[0x2c] = (undefined1)0x1;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf10 */
uint F_00e10230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x28))))(*(int * PTR32 *)(this + 0xc),param_1);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),0x14)));
  *(undefined2 *)(puVar4 + 1) = 0x14;
  uVar1 = *(undefined4 *)(this + 0x10);
  puVar4[3] = uVar2;
  puVar4[4] = uVar1;
  *(undefined2 *)((int)puVar4 + 6) = 0;
  puVar4[2] = 0;
  *puVar4 = (*(undefined * PTR32 (*)[39])REFP(0x114d774));
  return (uint)puVar4;
}

/* ref: ArrayOfTuplesImplementation::vf10 */
uint F_00e10290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  if (*(int *)(this + 0x18) == 0) {
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar5 + 0x2c),0x1c)));
    *(undefined2 *)(puVar6 + 1) = 0x1c;
    uVar2 = *(undefined4 *)(this + 0x14);
    uVar3 = *(undefined4 *)(this + 0xc);
    *(undefined2 *)((int)puVar6 + 6) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
    puVar6[3] = uVar3;
    puVar6[4] = 0;
    puVar6[5] = uVar2;
    puVar6[6] = 0;
    *(undefined4 * PTR32 *)(this + 0x18) = puVar6;
    puVar6[2] = puVar6[2] + 1;
  }
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x28))))(*(int * PTR32 *)(this + 0x10),param_1);
  iVar4 = *(int *)(this + 0x18);
  if (uVar7 != 0) {
    *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
  }
  puVar6 = *(undefined4 * PTR32 *)(iVar4 + 0x10);
  if (puVar6 != (undefined4 *)0x0) {
    piVar1 = puVar6 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
  }
  *(uint *)(iVar4 + 0x10) = uVar7;
  return *(uint *)(this + 0x18);
}

/* ref: ArrayOfTuplesImplementation::vf25 */
uint F_00e10330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x14)));
  *(undefined2 *)(puVar3 + 1) = 0x14;
  iVar1 = *(int *)(this + 0x14);
  puVar3[3] = this;
  *(undefined2 *)((int)puVar3 + 6) = 0;
  puVar3[2] = 0;
  *puVar3 = (*(undefined * PTR32 (*)[39])REFP(0x114d774));
  puVar3[4] = iVar1 * param_1;
  return (uint)puVar3;
}

/* ref: ArrayOfTuplesImplementation::vf26 */
unsigned int F_00e10380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10380u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  float10 extraout_ST0;
  undefined8 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x14) * param_2;
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_3 + 4))(param_3)));
  switch((unsigned int)(uintptr_t)(*puVar1)) {
  case 2: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0x4c))(param_3,param_2);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x50))))
                  (*(int * PTR32 *)(param_1 + 0x10),param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 3: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)param_3 + 0x3c))(param_3,param_2);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x40))))
                  (*(int * PTR32 *)(param_1 + 0x10),param_2 + iVar3,
                   (undefined4)gen_fl2bits((float)extraout_ST0));
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 4: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0x9c))(param_3);
        if (uVar2 == 0) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0x4c))(param_3,param_2);
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x50))))
                    (*(int * PTR32 *)(param_1 + 0x10),param_2 + iVar3,uVar2);
        }
        else {
          uVar4 = ((gen_lcode *)*(gen_code32 *)(*(int *)param_3 + 0x54))(param_3,param_2);
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x58))))
                    (*(int * PTR32 *)(param_1 + 0x10),param_2 + iVar3,(int)uVar4,
                     (int)((ulonglong)uVar4 >> 0x20));
        }
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
    }
    break;
  case 5: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0x34))(param_3,param_2);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x38))))
                  (*(int * PTR32 *)(param_1 + 0x10),param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 6: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0x5c))(param_3,param_2);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x60))))
                  (*(int * PTR32 *)(param_1 + 0x10),param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 7: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0x5c))(param_3,param_2);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x60))))
                  (*(int * PTR32 *)(param_1 + 0x10),param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf0 */
uint F_00e105b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe105b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: ArrayOfTuplesImplementation::vf0 */
uint F_00e105f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe105f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  puVar2 = *(undefined4 * PTR32 *)(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e10660 */
uint F_00e10660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_00e106a0 */
uint F_00e106a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe106a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d9dc));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  return (uint)this;
}

/* ref: RealArrayView::vf15 */
uint F_00e106d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe106d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: RealArrayView::vf16 */
uint F_00e106e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe106e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x10);
  *(float *)(uVar1 + param_2 * 4) = param_3;
  return uVar1;
}

/* ref: RealArrayView::vf1 */
uint F_00e10700(unsigned int gen_a0)
{
  GEN_ENTER(0xe10700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x2c))))(*(int * PTR32 *)(this + 0xc));
  return *(uint *)(uVar1 + 0x18);
}

/* ref: RealArrayView::vf7 */
uint F_00e10710(unsigned int gen_a0)
{
  GEN_ENTER(0xe10710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: RealArrayView::vf5 */
uint F_00e10720(unsigned int gen_a0)
{
  GEN_ENTER(0xe10720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: RealArrayView::vf6 */
uint F_00e10730(void)
{
  GEN_ENTER(0xe10730u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: RealArrayView::vf3 */
unsigned int F_00e10740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: RealArrayView::vf4 */
unsigned int F_00e10750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: RealArrayView::vf2 */
unsigned int F_00e10760(void)
{
  GEN_ENTER(0xe10760u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: RealArrayView::vf8 */
uint F_00e10770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  param_1[2] = *(undefined4 *)(this + 0x10);
  param_1[3] = *(undefined4 *)(this + 0x14);
  param_1[4] = 4;
  param_1[1] = 1;
  *param_1 = 0xb;
  return 0;
}

/* ref: RealArrayView::vf28 */
uint F_00e107a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe107a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da1010(*(undefined4 *)(this + 0x10),param_1,param_2 * 4);
  return uVar1;
}

/* ref: VecArrayImplementation::vf1 */
uint F_00e107f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe107f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: VecArrayImplementation::vf7 */
uint F_00e10800(unsigned int gen_a0)
{
  GEN_ENTER(0xe10800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: VecArrayImplementation::vf6 */
uint F_00e10810(void)
{
  GEN_ENTER(0xe10810u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: VecArrayImplementation::vf38 */
unsigned int F_00e10820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf37 */
unsigned int F_00e10830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf36 */
unsigned int F_00e10840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf35 */
unsigned int F_00e10850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf34 */
unsigned int F_00e10860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf33 */
unsigned int F_00e10870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf32 */
unsigned int F_00e10880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf31 */
unsigned int F_00e10890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf30 */
unsigned int F_00e108a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe108a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf29 */
unsigned int F_00e108b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe108b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: VecArrayImplementation::vf27 */
unsigned int F_00e108c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe108c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: RealArrayView::vf0 */
uint F_00e108e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe108e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: VecArrayImplementation::vf11 */
uint F_00e10920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e19c70(*(undefined4 *)(in_ecx + 0x1c));
  return *(int *)(in_ecx + 0xc) + uVar1 * param_2 * 4;
}

/* ref: VecArrayImplementation::vf12 */
uint F_00e10940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar1 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  iVar6 = 0;
  if (3 < (int)uVar1) {
    iVar3 = (uVar1 - 4 >> 2) + 1;
    iVar6 = iVar3 * 4;
    puVar2 = (undefined4 *)(param_2 + 8);
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar1 * param_1 * 4)));
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8 + uVar1 * param_1 * 4)));
    do {
      puVar5[-2] = puVar2[-2];
      iVar3 = iVar3 + -1;
      *puVar4 = puVar2[-1];
      *puVar5 = *puVar2;
      puVar5[1] = puVar2[1];
      puVar2 = puVar2 + 4;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (iVar3 != 0);
  }
  if (iVar6 < (int)uVar1) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + (uVar1 * param_1 + iVar6) * 4)));
    do {
      iVar3 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *puVar2 = *(undefined4 *)(param_2 + iVar3);
      puVar2 = puVar2 + 1;
    } while (iVar6 < (int)uVar1);
  }
  return uVar1;
}

/* ref: VecArrayImplementation::vf5 */
uint F_00e109e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe109e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  return iVar1 / (int)uVar2;
}

/* ref: VecArrayImplementation::vf25 */
uint F_00e10a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  
  uVar3 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),0x18)));
  *(undefined2 *)(puVar5 + 1) = 0x18;
  iVar1 = *(int *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x18);
  puVar5[5] = uVar3;
  puVar5[3] = uVar2;
  *(undefined2 *)((int)puVar5 + 6) = 0;
  puVar5[2] = 0;
  *puVar5 = (*(undefined * PTR32 (*)[39])REFP(0x114d9dc));
  puVar5[4] = iVar1 + uVar3 * param_1 * 4;
  return (uint)puVar5;
}

/* ref: VecArrayImplementation::vf8 */
uint F_00e10a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  param_1[2] = *(undefined4 *)(this + 0xc);
  iVar1 = *(int *)(this + 0x10);
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  param_1[3] = iVar1 / (int)uVar2;
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  param_1[4] = uVar2 * 4;
  *param_1 = 0xb;
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  param_1[1] = uVar2;
  return 0;
}

/* ref: FUN_00e10ab0 */
uint F_00e10ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    puVar2 = *(uint * PTR32 *)((int)this + 0xc);
    while (*puVar2 != param_1) {
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 2;
      if (*(int *)((int)this + 0x10) <= (int)uVar1) {
        return uVar1;
      }
    }
    *puVar2 = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00e10b40 */
uint F_00e10b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = F_00da4190((undefined *)((int)this + 0x50),param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20((undefined *)((int)this + 0x50),uVar1,uVar1);
    }
    *param_1 = uVar1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e10b90 */
uint F_00e10b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e10bc0 */
unsigned int F_00e10bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 != param_2) {
    this_00 = (undefined *)((int)this + 0x60);
    uVar1 = F_00da4190(this_00,param_1,0);
    F_00da3f00(this_00,param_1);
    *(int *)(uVar1 + 8) = param_2;
    F_00da3a20(this_00,param_2,uVar1);
  }
  return 0;
}

/* ref: FUN_00e10c00 */
uint F_00e10c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3ae0(this,param_2);
  F_00da3e40(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00e10c40 */
uint F_00e10c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10c50 */
uint F_00e10c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e10c60 */
uint F_00e10c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10c70 */
uint F_00e10c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e10c80 */
uint F_00e10c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e10ca0 */
uint F_00e10ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe10ca0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e10cb0 */
uint F_00e10cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10cb0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e10cd0 */
uint F_00e10cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_E::vf1 */
uint F_00e10d10(unsigned int gen_a0)
{
  GEN_ENTER(0xe10d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_E::vf7 */
uint F_00e10d20(unsigned int gen_a0)
{
  GEN_ENTER(0xe10d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_E::vf6 */
uint F_00e10d30(void)
{
  GEN_ENTER(0xe10d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_E::vf5 */
uint F_00e10d40(unsigned int gen_a0)
{
  GEN_ENTER(0xe10d40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10d50 */
uint F_00e10d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_M::vf1 */
uint F_00e10d90(unsigned int gen_a0)
{
  GEN_ENTER(0xe10d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_M::vf7 */
uint F_00e10da0(unsigned int gen_a0)
{
  GEN_ENTER(0xe10da0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_M::vf6 */
uint F_00e10db0(void)
{
  GEN_ENTER(0xe10db0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_M::vf5 */
uint F_00e10dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe10dc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10dd0 */
uint F_00e10dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf1 */
uint F_00e10e10(unsigned int gen_a0)
{
  GEN_ENTER(0xe10e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf7 */
uint F_00e10e20(unsigned int gen_a0)
{
  GEN_ENTER(0xe10e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf6 */
uint F_00e10e30(void)
{
  GEN_ENTER(0xe10e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf5 */
uint F_00e10e40(unsigned int gen_a0)
{
  GEN_ENTER(0xe10e40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10e50 */
uint F_00e10e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAD::vf1 */
uint F_00e10e90(unsigned int gen_a0)
{
  GEN_ENTER(0xe10e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_PAD::vf7 */
uint F_00e10ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xe10ea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_PAD::vf6 */
uint F_00e10eb0(void)
{
  GEN_ENTER(0xe10eb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_PAD::vf5 */
uint F_00e10ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe10ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10ed0 */
uint F_00e10ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf1 */
uint F_00e10f10(unsigned int gen_a0)
{
  GEN_ENTER(0xe10f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf7 */
uint F_00e10f20(unsigned int gen_a0)
{
  GEN_ENTER(0xe10f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf6 */
uint F_00e10f30(void)
{
  GEN_ENTER(0xe10f30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e10f40 */
unsigned int F_00e10f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10f40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf5 */
uint F_00e10f70(unsigned int gen_a0)
{
  GEN_ENTER(0xe10f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10f80 */
uint F_00e10f80(unsigned int gen_a0)
{
  GEN_ENTER(0xe10f80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e10fa0 */
unsigned int F_00e10fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe10fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e10fd0 */
uint F_00e10fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e11000 */
uint F_00e11000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_00e11010 */
uint F_00e11010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11010u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e110d0 */
uint F_00e110d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe110d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e110f0 */
uint F_00e110f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe110f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e11130 */
uint F_00e11130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11130u, gen_a0, gen_a1, gen_a2, 0u);
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
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e11170 */
unsigned int F_00e11170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe11170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
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
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00e111e0 */
uint F_00e111e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe111e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11220 */
uint F_00e11220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11220u, gen_a0, gen_a1, gen_a2, 0u);
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
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e11260 */
unsigned int F_00e11260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe11260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
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
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00e112c0 */
uint F_00e112c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe112c0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00d95690(param_1,this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e11310 */
uint F_00e11310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd970((undefined *)((int)this + 0xc),param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e11330 */
uint F_00e11330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00dbd930((undefined *)((int)this + 0xc),param_1);
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar6 * 8)));
  uVar6 = F_00dbd9f0((undefined *)((int)this + 0xc),uVar6);
  if (iVar2 != -1) {
    iVar3 = *(int *)this;
    iVar1 = iVar2 * 8;
    iVar4 = *(int *)(iVar1 + 4 + iVar3);
    iVar5 = iVar2;
    while (iVar4 != -1) {
      iVar5 = *(int *)(iVar3 + 4 + iVar1);
      iVar1 = iVar5 * 8;
      iVar4 = *(int *)(iVar3 + 4 + iVar5 * 8);
    }
    uVar6 = *(uint *)((int)this + 0x18);
    *(uint *)(iVar3 + 4 + iVar5 * 8) = uVar6;
    *(int *)((int)this + 0x18) = iVar2;
  }
  return uVar6;
}

/* ref: FUN_00e113a0 */
uint F_00e113a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe113a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd970((undefined *)((int)this + 0xc),param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e113c0 */
uint F_00e113c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe113c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00dbd930((undefined *)((int)this + 0xc),param_1);
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar6 * 8)));
  uVar6 = F_00dbd9f0((undefined *)((int)this + 0xc),uVar6);
  if (iVar2 != -1) {
    iVar3 = *(int *)this;
    iVar1 = iVar2 * 8;
    iVar4 = *(int *)(iVar1 + 4 + iVar3);
    iVar5 = iVar2;
    while (iVar4 != -1) {
      iVar5 = *(int *)(iVar3 + 4 + iVar1);
      iVar1 = iVar5 * 8;
      iVar4 = *(int *)(iVar3 + 4 + iVar5 * 8);
    }
    uVar6 = *(uint *)((int)this + 0x18);
    *(uint *)(iVar3 + 4 + iVar5 * 8) = uVar6;
    *(int *)((int)this + 0x18) = iVar2;
  }
  return uVar6;
}

/* ref: FUN_00e11440 */
unsigned int F_00e11440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  iVar2 = (*(int *)((int)this + 4) - param_1) * 0x18;
  puVar1 = (undefined4 *)(*(int *)this + param_1 * 0x18);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 3) + 1;
    do {
      *puVar1 = puVar1[6];
      puVar1[1] = puVar1[7];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e114a0 */
unsigned int F_00e114a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe114a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(param_1 * 0x10 + *(int *)this);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 0x10) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00e114e0 */
uint F_00e114e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe114e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11520 */
uint F_00e11520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe11520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < (int)param_2) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_2) {
      uVar2 = param_2;
    }
    F_00d95690(param_1,this,uVar2,8);
  }
  iVar3 = param_2 - *(int *)((int)this + 4);
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  uVar2 = 0;
  if (iVar3 < 1) {
    *(uint *)((int)this + 4) = param_2;
    return uVar2;
  }
  do {
    *(undefined4 *)(iVar1 + uVar2 * 8) = *param_3;
    *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = param_3[1];
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < iVar3);
  *(uint *)((int)this + 4) = param_2;
  return param_2;
}

/* ref: FUN_00e11590 */
uint F_00e11590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11590u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00e115d0 */
unsigned int F_00e115d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe115d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
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
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00e11630 */
unsigned int F_00e11630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  iVar1 = (*(int *)((int)this + 4) - param_1) * 8;
  puVar2 = (undefined4 *)(*(int *)this + param_1 * 8);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[2];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00e11680 */
uint F_00e11680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11680u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e116d0 */
uint F_00e116d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe116d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11710 */
uint F_00e11710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e11730 */
uint F_00e11730(unsigned int gen_a0)
{
  GEN_ENTER(0xe11730u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e11770 */
uint F_00e11770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e117c0 */
uint F_00e117c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe117c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e11800 */
uint F_00e11800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11800u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e11850 */
uint F_00e11850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_00e11870 */
uint F_00e11870(unsigned int gen_a0)
{
  GEN_ENTER(0xe11870u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e118c0 */
uint F_00e118c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe118c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11930 */
unsigned int F_00e11930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x10) {
        puVar1[-4] = *param_3;
        puVar1[-2] = param_3[2];
        puVar1[-1] = param_3[3];
        *puVar1 = param_3[4];
        puVar1[1] = param_3[5];
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e11980 */
unsigned int F_00e11980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e119c0 */
unsigned int F_00e119c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe119c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e119f0 */
uint F_00e119f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe119f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11a30 */
uint F_00e11a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11a30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11a70 */
uint F_00e11a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11a70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11ac0 */
uint F_00e11ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11ac0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11b00 */
uint F_00e11b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e11b60 */
unsigned int F_00e11b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1 + param_1[1] * 4;
  for (; this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x18)) {
    iVar2 = *(int *)((int)this + 0x2c);
    iVar4 = *(int *)((int)this + 0x28);
    iVar1 = iVar1 + iVar2 * -4;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        *(int *)(iVar1 + iVar3 * 4) = iVar4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}

/* ref: FUN_00e11bb0 */
uint F_00e11bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  iVar3 = param_1 - uVar1;
  pvVar2 = this;
  do {
    iVar3 = iVar3 + *(int *)((int)pvVar2 + 0x2c);
    if (-1 < iVar3) {
      return *(int *)((int)pvVar2 + 0x28) + iVar3 * 0x18;
    }
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  } while (pvVar2 != (undefined *)0x0);
  return *(int *)((int)this + 0x28) - 0x18;
}

/* ref: FUN_00e11bf0 */
uint F_00e11bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  do {
    if (this == (undefined *)0x0) {
      return 0;
    }
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0x2c)) {
      piVar2 = *(int * PTR32 *)((int)this + 0x28);
      do {
        if (*piVar2 == param_1) {
          return *(int *)((int)this + 0x28) + iVar1 * 0x18;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 6;
      } while (iVar1 < *(int *)((int)this + 0x2c));
    }
    this = *(undefined * PTR32 *)((int)this + 0x18);
  } while( true );
}

/* ref: FUN_00e11c40 */
uint F_00e11c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: hkDataObjectDict::vf2 */
uint F_00e11c70(unsigned int gen_a0)
{
  GEN_ENTER(0xe11c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkDataObjectDict::vf29 */
unsigned int F_00e11c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e11b60(*(undefined * PTR32 *)(this + 0xc),param_1);
  return 0;
}

/* ref: FUN_00e11c90 */
uint F_00e11c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP((param_1 * 0x10 + *(int *)((int)this + 0x10))));
  uVar1 = F_00e11bf0(*(undefined * PTR32 *)((int)this + 0xc),*puVar3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00e0ceb0(*(undefined4 *)(uVar1 + 0x10),puVar3 + 2,1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00e11cd0 */
uint F_00e11cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e11d30 */
uint F_00e11d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar3 = *(int * PTR32 *)((int)this + 0x10);
    do {
      if (*piVar3 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar1 < *(int *)((int)this + 0x14));
  }
  iVar1 = *(int *)((int)this + 0xc);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x2c)) {
      piVar3 = *(int * PTR32 *)(iVar1 + 0x28);
      do {
        if (*piVar3 == param_1) {
          iVar1 = *(int *)(iVar1 + 0x28) + iVar2 * 0x18;
          if (iVar1 == 0) {
            return 0;
          }
          return (uint)(*(int *)(iVar1 + 0x14) != 0);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *(int *)(iVar1 + 0x2c));
    }
    iVar1 = *(int *)(iVar1 + 0x18);
  } while( true );
}

/* ref: hkDataObjectDict::vf4 */
uint F_00e11db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 8)));
  if (param_1 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
    uVar2 = F_00e11d30(this,uVar2);
    return uVar2;
  }
  uVar2 = F_00e11d30(this,0);
  return uVar2;
}

/* ref: hkDataObjectDict::vf3 */
uint F_00e11e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 8))) + 0x50)));
    uVar1 = F_00da4190(this_00,param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20(this_00,uVar1,uVar1);
    }
  }
  uVar1 = F_00e11bf0(*(undefined * PTR32 *)(this + 0xc),uVar1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: VariableIntArrayImplementation::vf3 */
uint F_00e11eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar2 = *(uint *)(this + 0x1c) & 0x3fffffff;
    if ((int)uVar2 < param_1) {
      iVar3 = uVar2 * 2;
      if (iVar3 <= param_1) {
        iVar3 = param_1;
      }
      bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x14,iVar3,4);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
    }
  }
  else {
    uVar2 = *(int *)(this + 0x10) - 1;
    if (uVar2 == 0) {
      uVar2 = *(uint *)(this + 0x28) & 0x3fffffff;
      if ((int)uVar2 < param_1) {
        iVar3 = uVar2 * 2;
        if (iVar3 <= param_1) {
          iVar3 = param_1;
        }
        bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x20,iVar3,8);
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf4 */
uint F_00e11f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (*(int *)(this + 0x10) == 0) {
    if ((int)(*(uint *)(this + 0x1c) & 0x3fffffff) < param_1) {
      iVar2 = (*(uint *)(this + 0x1c) & 0x3fffffff) * 2;
      if (iVar2 <= param_1) {
        iVar2 = param_1;
      }
      F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x14,iVar2,4);
    }
    uVar1 = *(uint *)(this + 0x18);
    iVar4 = param_1 - uVar1;
    iVar2 = uVar1 * 4;
    if (0 < iVar4) {
      uVar1 = 0;
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + iVar2)));
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    *(int *)(this + 0x18) = param_1;
  }
  else {
    uVar1 = *(int *)(this + 0x10) - 1;
    if (uVar1 == 0) {
      if ((int)(*(uint *)(this + 0x28) & 0x3fffffff) < param_1) {
        iVar2 = (*(uint *)(this + 0x28) & 0x3fffffff) * 2;
        if (iVar2 <= param_1) {
          iVar2 = param_1;
        }
        F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x20,iVar2,8);
      }
      uVar1 = param_1 - *(int *)(this + 0x24);
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + *(int *)(this + 0x24) * 8)));
      if (0 < (int)uVar1) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar6 = puVar5 + 2;
        for (uVar3 = uVar1 * 8 - 5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      *(int *)(this + 0x24) = param_1;
    }
  }
  if (param_1 == 0) {
    this[0x2c] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: FUN_00e12010 */
uint F_00e12010(unsigned int gen_a0)
{
  GEN_ENTER(0xe12010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)((int)this + 0x2c) != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),
                 "Converting DataObjectArray from 32-bit to 64-bit. If this is intended, always use 64-bit values"
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78),1,0x3599e1ed,((undefined1 *)(gen_frame + 0x0)),"Data\\Dict\\hkDataObjectDict.cpp",0x5cb);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  }
  iVar1 = *(int *)((int)this + 0x18);
  uVar4 = *(uint *)((int)this + 0x28) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))),(int *)((int)this + 0x20),iVar5,8)
    ;
  }
  iVar5 = 0;
  *(int *)((int)this + 0x24) = iVar1;
  if (0 < *(int *)((int)this + 0x18)) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + iVar5 * 4)));
      iVar2 = *(int *)((int)this + 0x20);
      *(int *)(iVar2 + iVar5 * 8) = iVar1;
      *(int *)(iVar2 + 4 + iVar5 * 8) = iVar1 >> 0x1f;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0x18));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  uVar4 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < (int)uVar4) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,*(undefined4 *)((int)this + 0x14),uVar4 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 1;
  return uVar4;
}

/* ref: VariableIntArrayImplementation::vf22 */
uint F_00e12110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe12110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  if (*(int *)(this + 0x10) != 1) {
    F_00e12010(this);
  }
  this[0x2c] = (undefined1)0x1;
  iVar1 = *(int *)(this + 0x20);
  *(undefined4 *)(iVar1 + param_1 * 8) = param_2;
  *(undefined4 *)(iVar1 + 4 + param_1 * 8) = param_3;
  return param_1;
}

/* ref: FUN_00e12140 */
uint F_00e12140(unsigned int gen_a0)
{
  GEN_ENTER(0xe12140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: VecArrayImplementation::vf2 */
unsigned int F_00e12190(unsigned int gen_a0)
{
  GEN_ENTER(0xe12190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: VecArrayImplementation::vf3 */
uint F_00e121a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe121a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  iVar3 = uVar2 * param_1;
  uVar2 = *(uint *)(this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < iVar3) {
    iVar4 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar3) {
      iVar4 = iVar3;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar4,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: VecArrayImplementation::vf4 */
uint F_00e121f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe121f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  uVar1 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  iVar2 = uVar1 * param_1;
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < iVar2) {
    iVar3 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar3,4);
  }
  uVar1 = *(uint *)(this + 0x10);
  iVar4 = iVar2 - uVar1;
  iVar3 = uVar1 * 4;
  if (0 < iVar4) {
    uVar1 = 0;
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + iVar3)));
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x10) = iVar2;
  return uVar1;
}

/* ref: VecArrayImplementation::vf28 */
uint F_00e12250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe12250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pVVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c));
  iVar4 = uVar2 * param_2;
  pVVar1 = this + 0xc;
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < iVar4) {
    iVar3 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),pVVar1,iVar3,4);
  }
  iVar3 = iVar4 - *(int *)(this + 0x10);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)pVVar1 + *(int *)(this + 0x10) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x10) = iVar4;
  uVar2 = F_00da1010(*(int *)pVVar1,param_1,iVar4 * 4);
  return uVar2;
}

/* ref: VecArrayImplementation::vf0 */
uint F_00e122d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe122d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < *(int *)(this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xc),*(int *)(this + 0x14) * 4);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e12350 */
unsigned int F_00e12350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    while (*piVar2 != param_1) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 2;
      if (*(int *)((int)this + 0x10) <= iVar4) {
        return 0;
      }
    }
    puVar3 = (undefined4 *)piVar2[1];
    piVar2 = puVar3 + 2;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    iVar1 = (*(int *)((int)this + 0x10) - iVar4) * 8;
    puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 8)));
    if (0 < iVar1) {
      iVar4 = (iVar1 - 1U >> 2) + 1;
      do {
        *puVar3 = puVar3[2];
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e123d0 */
uint F_00e123d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe123d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dbdb20(this,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00e12420 */
uint F_00e12420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe12420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint local_8;
  
  uVar2 = 0;
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = F_00da4190((undefined *)((int)this + 4),param_1,0);
  }
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)((int)this + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)((int)this + 0x50),uVar2,uVar2);
    }
  }
  if (param_1 != uVar2) {
    this_00 = (undefined *)((int)this + 0x60);
    uVar1 = F_00da4190(this_00,param_1,0);
    F_00da3f00(this_00,param_1);
    *(uint *)(uVar1 + 8) = uVar2;
    F_00da3a20(this_00,uVar2,uVar1);
  }
  F_00da3f00((undefined *)((int)this + 4),param_1);
  uVar2 = F_00da3a20((undefined *)((int)this + 4),uVar2,local_8);
  return uVar2;
}

/* ref: FUN_00e124d0 */
uint F_00e124d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe124d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined4 * this_00;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  F_00d919e0(&REFG(undefined * PTR32, 0x1354948));
  if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) != (undefined *)0x0) {
    F_00d91a80(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))));
  }
  iVar2 = (*(int *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = &REFG(undefined * PTR32, 0x1354948);
  if ((*(int *)&gen_args[2]) != 0) {
    this_00 = (undefined4 *)F_00da4190(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))),(*(int *)&gen_args[2]),0);
    if (this_00 == (undefined4 *)0x0) {
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      this_00 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),0xc)))
      ;
      *(undefined2 *)(this_00 + 1) = 0xc;
      puVar4 = (undefined4 *)F_00e10b40((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[2]),iVar2);
      *(undefined2 *)((int)this_00 + 6) = 1;
      *this_00 = (*(undefined * PTR32 (*)[3])REFP(0x114d6c0));
      uVar1 = *puVar4;
      this_00[2] = uVar1;
      F_00da3a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))),uVar1,this_00);
    }
    F_00d919e0(this_00);
    if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) != (undefined *)0x0) {
      F_00d91a80(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))));
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = this_00;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e125a0 */
uint F_00e125a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe125a0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e12620 */
unsigned int F_00e12620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12620u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12650 */
uint F_00e12650(unsigned int gen_a0)
{
  GEN_ENTER(0xe12650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                      (piVar1,*(undefined4 *)((int)this + 0xc),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_E::vf2 */
unsigned int F_00e126a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe126a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: BasicArrayImplementation_E::vf3 */
uint F_00e126b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe126b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_E::vf4 */
uint F_00e126f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe126f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * _Size;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,1)
    ;
  }
  _Size = ((undefined *)GEN_TOP((param_1 - *(int *)((int)this + 0x10))));
  if (0 < (int)_Size) {
    _Size = F_00c48350(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10)))),0,(gen_size32)_Size
                   );
  }
  *(int *)((int)this + 0x10) = param_1;
  return (uint)_Size;
}

/* ref: FUN_00e12750 */
uint F_00e12750(unsigned int gen_a0)
{
  GEN_ENTER(0xe12750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_M::vf2 */
unsigned int F_00e127a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe127a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: BasicArrayImplementation_M::vf3 */
uint F_00e127b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe127b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_M::vf4 */
uint F_00e127f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe127f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12850 */
uint F_00e12850(unsigned int gen_a0)
{
  GEN_ENTER(0xe12850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf2 */
unsigned int F_00e128a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe128a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf3 */
uint F_00e128b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe128b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf4 */
uint F_00e128f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe128f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12950 */
uint F_00e12950(unsigned int gen_a0)
{
  GEN_ENTER(0xe12950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAD::vf2 */
unsigned int F_00e129a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe129a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: BasicArrayImplementation_PAD::vf3 */
uint F_00e129b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe129b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAD::vf4 */
uint F_00e129f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe129f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12a50 */
uint F_00e12a50(unsigned int gen_a0)
{
  GEN_ENTER(0xe12a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf2 */
unsigned int F_00e12aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe12aa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf3 */
uint F_00e12ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf4 */
uint F_00e12af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12b50 */
uint F_00e12b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12b90 */
uint F_00e12b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12b90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12c10 */
unsigned int F_00e12c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12c10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12c40 */
uint F_00e12c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12c40u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e12c90 */
uint F_00e12c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12c90u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e12cd0 */
uint F_00e12cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12cd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: BasicArrayImplementation_E::vf0 */
uint F_00e12d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0xc),*(uint *)((int)this + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_M::vf0 */
uint F_00e12d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf0 */
uint F_00e12e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAD::vf0 */
uint F_00e12e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf0 */
uint F_00e12f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe12f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e12fa0 */
uint F_00e12fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe12fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00dbdaf0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e12fc0 */
uint F_00e12fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe12fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = *(uint *)(iVar3 + 4 + param_2 * 8);
  if (uVar5 == 0xffffffff) {
    uVar5 = F_00dbd930((undefined *)((int)this + 0xc),param_1);
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar5 * 8)));
    uVar5 = *puVar1;
    if (uVar5 == param_2) {
      *puVar1 = 0xffffffff;
      uVar5 = param_2;
    }
    else {
      puVar2 = (uint *)(*(int *)this + 4 + uVar5 * 8);
      uVar4 = *puVar2;
      if (uVar4 == param_2) {
        *puVar2 = 0xffffffff;
        uVar5 = param_2;
      }
      else {
        *puVar1 = uVar4;
        *(undefined4 *)(*(int *)this + param_2 * 8) = *(undefined4 *)(*(int *)this + uVar5 * 8);
      }
    }
    param_2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar3 + param_2 * 8) = *(undefined4 *)(iVar3 + uVar5 * 8);
    *(undefined4 *)(iVar3 + 4 + param_2 * 8) = *(undefined4 *)(iVar3 + 4 + uVar5 * 8);
  }
  *(undefined4 *)(*(int *)this + 4 + uVar5 * 8) = *(undefined4 *)((int)this + 0x18);
  *(uint *)((int)this + 0x18) = uVar5;
  return param_2;
}

/* ref: FUN_00e13050 */
uint F_00e13050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e11310(this,param_1);
  if (uVar1 != 0xffffffff) {
    while (*(int *)(*(int *)this + uVar1 * 8) != *param_2) {
      uVar1 = *(uint *)(*(int *)this + 4 + uVar1 * 8);
      if (uVar1 == 0xffffffff) {
        return 0xffffffff;
      }
    }
    uVar1 = F_00e12fc0(this,param_1,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00e130a0 */
uint F_00e130a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe130a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = *(uint *)(iVar3 + 4 + param_2 * 8);
  if (uVar5 == 0xffffffff) {
    uVar5 = F_00dbd930((undefined *)((int)this + 0xc),param_1);
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar5 * 8)));
    uVar5 = *puVar1;
    if (uVar5 == param_2) {
      *puVar1 = 0xffffffff;
      uVar5 = param_2;
    }
    else {
      puVar2 = (uint *)(*(int *)this + 4 + uVar5 * 8);
      uVar4 = *puVar2;
      if (uVar4 == param_2) {
        *puVar2 = 0xffffffff;
        uVar5 = param_2;
      }
      else {
        *puVar1 = uVar4;
        *(undefined4 *)(*(int *)this + param_2 * 8) = *(undefined4 *)(*(int *)this + uVar5 * 8);
      }
    }
    param_2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar3 + param_2 * 8) = *(undefined4 *)(iVar3 + uVar5 * 8);
    *(undefined4 *)(iVar3 + 4 + param_2 * 8) = *(undefined4 *)(iVar3 + 4 + uVar5 * 8);
  }
  *(undefined4 *)(*(int *)this + 4 + uVar5 * 8) = *(undefined4 *)((int)this + 0x18);
  *(uint *)((int)this + 0x18) = uVar5;
  return param_2;
}

/* ref: FUN_00e13130 */
uint F_00e13130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13130u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e13170 */
uint F_00e13170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13170u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e131b0 */
uint F_00e131b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe131b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e13200 */
uint F_00e13200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x18)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e13260 */
uint F_00e13260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e132a0 */
uint F_00e132a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe132a0u, gen_a0, gen_a1, 0u, 0u);
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
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e132f0 */
uint F_00e132f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe132f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e13330 */
uint F_00e13330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00e13380 */
uint F_00e13380(unsigned int gen_a0)
{
  GEN_ENTER(0xe13380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e133c0 */
uint F_00e133c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe133c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13400 */
uint F_00e13400(unsigned int gen_a0)
{
  GEN_ENTER(0xe13400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13440 */
uint F_00e13440(unsigned int gen_a0)
{
  GEN_ENTER(0xe13440u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13480 */
uint F_00e13480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13480u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e134c0 */
uint F_00e134c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe134c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e134f0 */
uint F_00e134f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe134f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e13520 */
uint F_00e13520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e124d0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))),param_1,param_2);
  return param_1;
}

/* ref: FUN_00e13540 */
uint F_00e13540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe13540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  *(int *)((int)this + 0xc) = param_1;
  F_00e124d0(*(undefined * PTR32 *)(param_1 + 8),(int)this + 0x10,param_2);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  return (uint)this;
}

/* ref: hkDataClassDict::vf1 */
uint F_00e135a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkDataClassDict::vf3 */
uint F_00e135b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: hkDataClassDict::vf2 */
uint F_00e135e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + 8)));
}

/* ref: hkDataClassDict::vf6 */
uint F_00e135f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: hkDataClassDict::vf7 */
uint F_00e13600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x28) + param_1 * 0x18)));
  *param_2 = *puVar1;
  param_2[1] = this;
  param_2[2] = puVar1[4];
  uVar2 = puVar1[5];
  param_2[3] = uVar2;
  return uVar2;
}

/* ref: hkDataClassDict::vf4 */
uint F_00e13630(unsigned int gen_a0)
{
  GEN_ENTER(0xe13630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: hkDataClassDict::vf5 */
uint F_00e13640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = param_2;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 8))) + 0x50)));
      uVar2 = F_00da4190(this_00,uVar1,0);
      if (uVar2 == 0) {
        uVar2 = F_00da1210(uVar1);
        F_00da3a20(this_00,uVar2,uVar2);
      }
    }
    if (uVar2 == *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8)))) break;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3)));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataClassDict::vf8 */
uint F_00e136d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe136d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 8)));
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x2c)) {
    puVar4 = *(uint * PTR32 *)(this + 0x28);
    do {
      if (*puVar4 == uVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
    } while ((int)uVar3 < *(int *)(this + 0x2c));
  }
  return 0xffffffff;
}

/* ref: hkDataClassDict::vf9 */
int F_00e13740(unsigned int gen_a0)
{
  GEN_ENTER(0xe13740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2c);
  for (iVar1 = *(int *)(this + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x2c);
  }
  return iVar2;
}

/* ref: hkDataClassDict::vf11 */
uint F_00e13760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 8)));
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00da4190((undefined *)(iVar4 + 0x50),param_1,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar4 + 0x50),uVar1,uVar1);
    }
  }
  do {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x2c)) {
      puVar2 = *(uint * PTR32 *)(this + 0x28);
      do {
        if (*puVar2 == uVar1) {
          uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
          uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
          return uVar3 + (iVar4 - uVar1);
        }
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 6;
      } while (iVar4 < *(int *)(this + 0x2c));
    }
    this = *(undefined * PTR32 *)(this + 0x18);
  } while (this != (undefined *)0x0);
  return 0xffffffff;
}

/* ref: hkDataClassDict::vf10 */
uint F_00e13800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  iVar3 = param_1 - uVar2;
  do {
    iVar3 = iVar3 + *(int *)(this + 0x2c);
    if (-1 < iVar3) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x28) + iVar3 * 0x18)));
      iVar3 = *(int *)(this + 0x28) + iVar3 * 0x18;
      param_2[1] = this;
      *param_2 = uVar1;
      param_2[2] = *(undefined4 *)(iVar3 + 0x10);
      uVar2 = *(uint *)(iVar3 + 0x14);
      param_2[3] = uVar2;
      return uVar2;
    }
    this = *(undefined * PTR32 *)(this + 0x18);
  } while (this != (undefined *)0x0);
  return uVar2;
}

/* ref: hkDataClassDict::vf12 */
unsigned int F_00e13850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * phVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[1] * 0x10 + *param_1;
  for (phVar1 = this; phVar1 != (undefined *)0x0;
      phVar1 = *(undefined * PTR32 *)(phVar1 + 0x18)) {
    iVar4 = *(int *)(phVar1 + 0x2c);
    iVar5 = iVar5 + iVar4 * -0x10;
    if (0 < iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(phVar1 + 0x28) + 0x14)));
      puVar2 = (undefined4 *)(iVar5 + 8);
      do {
        puVar2[-2] = puVar3[-5];
        puVar2[-1] = this;
        *puVar2 = puVar3[-1];
        puVar2[1] = *puVar3;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e138c0 */
uint F_00e138c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe138c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))),(int *)((int)this + 0x28),0x18);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + *(int *)((int)this + 0x2c) * 0x18)));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
  }
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e13930 */
uint F_00e13930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  iVar2 = *(int *)((int)this + 0x2c) + -1;
  if (-1 < iVar2) {
    piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 0x18)));
    do {
      if (*piVar5 == param_1) goto LAB_00e13954;
      piVar5 = piVar5 + -6;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = -1;
LAB_00e13954: ;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
  iVar1 = (*(int *)((int)this + 0x2c) - iVar2) * 0x18;
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 0x18)));
  if (0 < iVar1) {
    iVar2 = (iVar1 - 1U >> 3) + 1;
    do {
      *puVar3 = puVar3[6];
      puVar3[1] = puVar3[7];
      puVar3 = puVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar4 = F_00e11bf0(this,param_1);
  return (uint)(uVar4 != 0);
}

/* ref: FUN_00e139b0 */
uint F_00e139b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe139b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_8;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x30)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0x28),
               (*(uint *)((int)this + 0x30) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + local_8 * 4)));
      *(undefined4 *)(iVar2 + 8) = 0;
      if (-1 < *(int *)(iVar2 + 0xc)) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(iVar2 + 4),*(int *)(iVar2 + 0xc) * 8);
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0x80000000;
      if (iVar2 != 0) {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),iVar2,0x10);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < *(int *)((int)this + 0x24)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0x1c),*(int *)((int)this + 0x24) * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar4 = F_00d919e0(&REFG(undefined * PTR32, 0x1354948));
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar4 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x1354948);
  return uVar4;
}

/* ref: FUN_00e13ac0 */
uint F_00e13ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe13ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    local_c = 0;
    do {
      piVar2 = ((int *)GEN_TOP((local_c + *(int *)((int)this + 0x10))));
      for (iVar1 = *(int *)((int)this + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 0x2c)) {
          piVar5 = *(int * PTR32 *)(iVar1 + 0x28);
          do {
            if (*piVar5 == *piVar2) {
              iVar1 = *(int *)(iVar1 + 0x28) + iVar3 * 0x18;
              if (iVar1 != 0) {
                F_00e0ceb0(*(undefined4 *)(iVar1 + 0x10),piVar2 + 2,1,0);
              }
              goto LAB_00e13b39;
            }
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 6;
          } while (iVar3 < *(int *)(iVar1 + 0x2c));
        }
      }
LAB_00e13b39: ;
      local_8 = local_8 + 1;
      local_c = local_c + 0x10;
    } while (local_8 < *(int *)((int)this + 0x14));
  }
  uVar4 = *(uint *)((int)this + 0x18);
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 0xc)));
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 0x10),uVar4 << 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar4;
}

/* ref: hkDataObjectDict::vf28 */
uint F_00e13b90(unsigned int gen_a0)
{
  GEN_ENTER(0xe13b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(this + 0x14)) {
    local_c = 0;
    do {
      for (iVar1 = *(int *)(this + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        iVar2 = 0;
        if (0 < *(int *)(iVar1 + 0x2c)) {
          piVar4 = *(int * PTR32 *)(iVar1 + 0x28);
          do {
            if (*piVar4 == *((int *)GEN_TOP((local_c + *(int *)(this + 0x10))))) {
              iVar1 = *(int *)(iVar1 + 0x28) + iVar2 * 0x18;
              if (iVar1 != 0) {
                F_00e0ceb0(*(undefined4 *)(iVar1 + 0x10),
                             ((int *)GEN_TOP((local_c + *(int *)(this + 0x10)))) + 2,1,1);
              }
              goto LAB_00e13c09;
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 6;
          } while (iVar2 < *(int *)(iVar1 + 0x2c));
        }
      }
LAB_00e13c09: ;
      local_8 = local_8 + 1;
      local_c = local_c + 0x10;
    } while (local_8 < *(int *)(this + 0x14));
  }
  uVar3 = *(uint *)(this + 0x18);
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 0xc)));
  *(undefined4 *)(this + 0x14) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,*(undefined4 *)(this + 0x10),uVar3 << 4);
  }
  *(undefined4 *)(this + 0x18) = 0x80000000;
  *(undefined4 *)(this + 0x10) = 0;
  return uVar3;
}

/* ref: FUN_00e13c60 */
unsigned int F_00e13c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x10);
    while (*piVar1 != param_1) {
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 4;
      if (*(int *)((int)this + 0x14) <= iVar5) {
        return 0;
      }
    }
    for (iVar3 = *(int *)((int)this + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
      iVar2 = 0;
      if (0 < *(int *)(iVar3 + 0x2c)) {
        piVar1 = *(int * PTR32 *)(iVar3 + 0x28);
        do {
          if (*piVar1 == *((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5 * 0x10)))) {
            iVar3 = *(int *)(iVar3 + 0x28) + iVar2 * 0x18;
            if (iVar3 != 0) {
              F_00e0ceb0(*(undefined4 *)(iVar3 + 0x10),
                           *(int *)((int)this + 0x10) + 8 + iVar5 * 0x10,1,0);
            }
            goto LAB_00e13d09;
          }
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 6;
        } while (iVar2 < *(int *)(iVar3 + 0x2c));
      }
    }
LAB_00e13d09: ;
    iVar3 = *(int *)((int)this + 0x14) + -1;
    *(int *)((int)this + 0x14) = iVar3;
    if (iVar3 != iVar5) {
      puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5 * 0x10)));
      iVar5 = (*(int *)((int)this + 0x10) + iVar3 * 0x10) - (int)puVar4;
      iVar3 = 2;
      do {
        *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
        puVar4 = puVar4 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e13d50 */
uint F_00e13d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe13d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x14);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = *(int * PTR32 *)((int)this + 0x10);
    do {
      if (*piVar3 == *param_2) {
        F_00e0ceb0(param_2[4],*(int *)((int)this + 0x10) + 8 + iVar4 * 0x10,1,0);
        param_1[1] = iVar4;
        *param_1 = param_2;
        return (uint)param_1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar4 < iVar1);
  }
  piVar3 = (int *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) == (*(uint *)((int)this + 0x18) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 0xc))),piVar3,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) * 0x10 + *piVar3)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x14) * 0x10 + *piVar3)));
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  *piVar3 = *param_2;
  piVar3[2] = 0;
  piVar3[3] = 0;
  param_1[1] = iVar1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf23 */
uint F_00e13e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  F_00e13d50(this,((undefined1 *)(gen_frame + 0x4)),param_1,6);
  uVar1 = *(uint *)(this + 0x10);
  *(int *)(uVar1 + 8 + (*(int *)(gen_frame + 0x8)) * 0x10) = param_2;
  return uVar1;
}

/* ref: hkDataObjectDict::vf22 */
uint F_00e13e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13e40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
  F_00e13d50((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)(gen_frame + 0x4)),(*(undefined4 *)&gen_args[1]),1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x10) + 4)));
  piVar3 = (int *)F_00e19f20(this_00,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,piVar2);
  if ((char)*piVar3 == '\0') {
    if (*this_00 != 6) {
      return (uint)piVar3;
    }
    uVar4 = F_00e19c80(this_00);
    if (uVar4 != 0) {
      return uVar4;
    }
    piVar3 = piVar2;
    if (*piVar2 != 6) {
      return (uint)piVar2;
    }
  }
  *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = piVar1;
  return (uint)piVar3;
}

/* ref: hkDataObjectDict::vf21 */
uint F_00e13ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00e13d50(this,((undefined1 *)(gen_frame + 0x4)),param_1,5);
  if (param_2 != 0) {
    uVar1 = F_00da1210(param_2);
    *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = 0;
  return 0;
}

/* ref: hkDataObjectDict::vf20 */
uint F_00e13f20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe13f20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00e13d50(param_1,((undefined1 *)(gen_frame + 0x4)),param_2,3);
  uVar1 = *(uint *)((int)param_1 + 0x10);
  *(float *)(uVar1 + 8 + (*(int *)(gen_frame + 0x8)) * 0x10) = param_3;
  return uVar1;
}

/* ref: hkDataObjectDict::vf19 */
uint F_00e13f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00e13d50(param_1,((undefined1 *)(gen_frame + 0x4)),param_2,3);
  *((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = (int)(short)param_3 << 0x10;
  return (*(int *)(gen_frame + 0x8)) * 2;
}

/* ref: hkDataObjectDict::vf16 */
uint F_00e13fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe13fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  F_00e13d50(this,&(*(int *)(gen_frame + 0x4)),param_1,1);
  iVar1 = **(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  uVar2 = (*(int *)(gen_frame + 0x8)) * 0x10 + *(int *)(this + 0x10);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *(float *)(uVar2 + 8) = (float)(longlong)CONCAT44(param_3,param_2);
      return uVar2;
    }
    if (iVar1 != 4) {
      return uVar2;
    }
  }
  *(undefined4 *)(uVar2 + 8) = param_2;
  *(undefined4 *)(uVar2 + 0xc) = param_3;
  return uVar2;
}

/* ref: hkDataObjectDict::vf17 */
uint F_00e14000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  F_00e13d50(this,&(*(int *)(gen_frame + 0x4)),param_1,1);
  iVar1 = **(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  iVar2 = (*(int *)(gen_frame + 0x8)) * 0x10 + *(int *)(this + 0x10);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *(float *)(iVar2 + 8) = (float)(int)param_2;
      return 0;
    }
    if (iVar1 - 4U != 0) {
      return iVar1 - 4U;
    }
  }
  *(uint *)(iVar2 + 8) = param_2;
  *(int *)(iVar2 + 0xc) = (int)param_2 >> 0x1f;
  return param_2;
}

/* ref: FUN_00e14060 */
uint F_00e14060(unsigned int gen_a0)
{
  GEN_ENTER(0xe14060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x114d894));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0x20),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf2 */
uint F_00e140e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe140e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x18) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
  uVar2 = *(uint *)(this + 0x28);
  *(undefined4 *)(this + 0x24) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x20),uVar2 * 8);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x80000000;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x2c] = (undefined1)0x0;
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf32 */
uint F_00e14130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pVVar4;
  undefined4 * puVar5;
  
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x10) = 0;
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    *(undefined4 *)(this + 0x24) = 0;
    if (-1 < *(int *)(this + 0x28)) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x20),*(int *)(this + 0x28) * 8);
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x28) = 0x80000000;
  }
  pVVar4 = this + 0x14;
  if ((int)(*(uint *)(this + 0x1c) & 0x3fffffff) < param_2) {
    iVar3 = (*(uint *)(this + 0x1c) & 0x3fffffff) * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),pVVar4,iVar3,4);
  }
  iVar3 = param_2 - *(int *)(this + 0x18);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)pVVar4 + *(int *)(this + 0x18) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x18) = param_2;
  uVar2 = F_00da1010(*(int *)pVVar4,param_1,param_2 * 4);
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf0 */
uint F_00e141e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe141e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e14060(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e14220 */
uint F_00e14220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114de54));
  return (uint)this;
}

/* ref: ByteArrayImplementation::vf19 */
uint F_00e14260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2)));
}

/* ref: ByteArrayImplementation::vf20 */
uint F_00e14280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xc);
  *(undefined1 *)(param_1 + uVar1) = (undefined1)param_2;
  return uVar1;
}

/* ref: ByteArrayImplementation::vf22 */
uint F_00e142a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe142a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xc);
  *(undefined1 *)(param_1 + uVar1) = (undefined1)param_2;
  return uVar1;
}

/* ref: ByteArrayImplementation::vf8 */
uint F_00e142c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe142c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 4;
  param_1[3] = *(undefined4 *)(this + 0x10);
  param_1[2] = *(undefined4 *)(this + 0xc);
  param_1[1] = 1;
  param_1[4] = 1;
  return 0;
}

/* ref: ByteArrayImplementation::vf35 */
uint F_00e142f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe142f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_2) {
    iVar1 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar1,1);
  }
  *(int *)(this + 0x10) = param_2;
  uVar2 = F_00da1010(*(undefined4 *)(this + 0xc),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e14340 */
uint F_00e14340(unsigned int gen_a0)
{
  GEN_ENTER(0xe14340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                      (piVar1,*(undefined4 *)((int)this + 0xc),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: FUN_00e14390 */
uint F_00e14390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114def4));
  return (uint)this;
}

/* ref: RealArrayImplementation::vf15 */
uint F_00e143d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe143d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: RealArrayImplementation::vf16 */
uint F_00e143e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe143e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc);
  *(float *)(uVar1 + param_2 * 4) = param_3;
  return uVar1;
}

/* ref: RealArrayImplementation::vf8 */
uint F_00e14400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  param_1[2] = *(undefined4 *)(this + 0xc);
  param_1[3] = *(undefined4 *)(this + 0x10);
  param_1[4] = 4;
  *param_1 = 0xb;
  param_1[1] = 1;
  return 0;
}

/* ref: RealArrayImplementation::vf28 */
uint F_00e14430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_2) {
    iVar1 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar1,4);
  }
  *(int *)(this + 0x10) = param_2;
  uVar2 = F_00da1010(*(undefined4 *)(this + 0xc),param_1,param_2 * 4);
  return uVar2;
}

/* ref: FUN_00e14490 */
uint F_00e14490(unsigned int gen_a0)
{
  GEN_ENTER(0xe14490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: FUN_00e144e0 */
uint F_00e144e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe144e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114df94));
  return (uint)this;
}

/* ref: PointerArrayImplementation::vf8 */
uint F_00e14520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e14530 */
uint F_00e14530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14530u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: PointerArrayImplementation::vf23 */
uint F_00e14540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: PointerArrayImplementation::vf24 */
uint F_00e14550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) != 0) {
    puVar3 = (undefined4 *)*piVar2;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar4 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
      return uVar4;
    }
    *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
    return (uint)piVar2;
  }
  uVar4 = *(uint *)(this + 0xc);
  *(int *)(uVar4 + param_1 * 4) = param_2;
  return uVar4;
}

/* ref: FUN_00e145b0 */
uint F_00e145b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe145b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114df94));
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4)));
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  uVar3 = *(uint *)((int)this + 0x14);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 0xc),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: PointerArrayImplementation::vf0 */
uint F_00e14630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e145b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e14670 */
uint F_00e14670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e034));
  return (uint)this;
}

/* ref: CstringArrayImplementation::vf8 */
uint F_00e146b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe146b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e146c0 */
uint F_00e146c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe146c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: CstringArrayImplementation::vf13 */
uint F_00e146d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe146d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: CstringArrayImplementation::vf14 */
uint F_00e146e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe146e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00da11e0(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))));
  if (param_2 != 0) {
    uVar1 = F_00da1210(param_2);
    *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = 0;
  return 0;
}

/* ref: FUN_00e14730 */
uint F_00e14730(unsigned int gen_a0)
{
  GEN_ENTER(0xe14730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e034));
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      F_00da11e0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  uVar2 = *(uint *)((int)this + 0x14);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: CstringArrayImplementation::vf0 */
uint F_00e147a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe147a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e14730(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e147e0 */
uint F_00e147e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe147e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e0d4));
  return (uint)this;
}

/* ref: ArrayArrayImplementation::vf8 */
uint F_00e14820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e14830 */
uint F_00e14830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: ArrayArrayImplementation::vf2 */
unsigned int F_00e14840(unsigned int gen_a0)
{
  GEN_ENTER(0xe14840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + iVar3 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x10));
  }
  return 0;
}

/* ref: ArrayArrayImplementation::vf26 */
uint F_00e14870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) != 0) {
    puVar3 = (undefined4 *)*piVar2;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar4 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
      return uVar4;
    }
    *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
    return (uint)piVar2;
  }
  uVar4 = *(uint *)(this + 0xc);
  *(int *)(uVar4 + param_1 * 4) = param_2;
  return uVar4;
}

/* ref: FUN_00e148d0 */
uint F_00e148d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe148d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e0d4));
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  uVar3 = *(uint *)((int)this + 0x14);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 0xc),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: ArrayArrayImplementation::vf4 */
uint F_00e14950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar4 = param_1;
  if (param_1 < *(int *)(this + 0x10)) {
    do {
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + iVar4 * 4)));
      if (puVar5 != (undefined4 *)0x0) {
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x10));
  }
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_1) {
    iVar4 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar4,4);
  }
  uVar2 = *(uint *)(this + 0x10);
  iVar3 = param_1 - uVar2;
  iVar4 = uVar2 * 4;
  if (0 < iVar3) {
    uVar2 = 0;
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + iVar4)));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x10) = param_1;
  return uVar2;
}

/* ref: ArrayArrayImplementation::vf0 */
uint F_00e149d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe149d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e148d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e14a10 */
uint F_00e14a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * in_ecx;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (*(int *)param_1[4] != 1) {
    piVar1 = (int *)((int)this + 0xc);
    if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
      F_00d95710(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))),piVar1,8);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x10) * 8)));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x10) * 8)));
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *puVar2 = *param_1;
    piVar1 = (int *)param_1[4];
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar1;
    in_ecx = (int *)F_00e19d40(piVar1);
    if (*in_ecx == 6) {
      F_00e19c80(in_ecx);
    }
    uVar4 = F_00e0dd10(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24),piVar1,0);
    puVar2[1] = uVar4;
    *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
    ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x10))((int *)puVar2[1],param_2);
    if (((param_1[5] != 0) || (*piVar1 == 6)) && ((*(int *)(gen_frame + 0x18)) = 0, 0 < param_2)) {
      do {
        iVar7 = (*(int *)(gen_frame + 0x18));
        iVar3 = *(*(int * PTR32 *)(gen_frame + 0x10));
        if ((iVar3 == 4) || (iVar3 == 2)) {
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x58))
                    ((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),*(undefined4 *)param_1[5],
                     ((undefined4 *)param_1[5])[1]);
        }
        else if (iVar3 == 3) {
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x40))
                    ((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),*(undefined4 *)param_1[5]);
        }
        else if (iVar3 == 9) {
          if (*(int *)(*(int * PTR32 *)(gen_frame + 0x10))[1] == 3) {
            ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x30))((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),param_1[5]);
          }
        }
        else if (iVar3 == 6) {
          piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x18);
          uVar4 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0x10)));
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = F_00da4190(((undefined *)GEN_TOP((*(int *)(uVar5 + 8) + 4))),uVar4,0);
          }
          iVar3 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x18);
          (*(uint *)(gen_frame + 0xc)) = uVar4;
          piVar1 = *(int * PTR32 *)(iVar3 + 0xc);
          puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,&(*(uint *)(gen_frame + 0xc)),0)));
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
            puVar6[2] = puVar6[2] + 1;
          }
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x60))((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),puVar6);
          iVar7 = (*(int *)(gen_frame + 0x18));
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
              iVar7 = (*(int *)(gen_frame + 0x18));
            }
          }
        }
        else if (iVar3 == 5) {
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x38))((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),param_1[5]);
        }
        (*(int *)(gen_frame + 0x18)) = iVar7 + 1;
      } while (iVar7 + 1 < param_2);
    }
    return *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10) - 1;
  }
  return 0xffffffff;
}

/* ref: FUN_00e14c10 */
uint F_00e14c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  LPVOID pvVar2;
  undefined4 * puVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  this_00 = (undefined4 *)F_00dbd970((undefined *)((int)this + 0x70),uVar1,0);
  if (this_00 == (undefined4 *)0x0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0xc)));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0xffffffff;
      this_00 = puVar3;
    }
    F_00dbd8b0((undefined *)((int)this + 0x70),&REFG(undefined * PTR32, 0x13516ac),uVar1,this_00);
  }
  uVar1 = F_00dbd8b0(this_00,&REFG(undefined * PTR32, 0x13516ac),param_1,0);
  return uVar1;
}

/* ref: FUN_00e14c90 */
uint F_00e14c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe14c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  piVar3 = (int *)F_00dbd970((undefined *)((int)this + 0x70),param_1,0);
  piVar4 = piVar3;
  if ((piVar3 != (int *)0x0) && (uVar7 = piVar3[1] & 0x7fffffff, uVar7 != 0)) {
    iVar1 = param_3[1];
    iVar6 = iVar1 + uVar7;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar6) {
      iVar2 = (param_3[2] & 0x3fffffffU) * 2;
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_3,iVar6,4);
    }
    param_3[1] = param_3[1] + uVar7;
    puVar8 = (undefined4 *)(*param_3 + iVar1 * 4);
    iVar6 = piVar3[2];
    piVar4 = (int *)0x0;
    if (-1 < iVar6) {
      piVar5 = (int *)*piVar3;
      do {
        if (*piVar5 != -1) break;
        piVar4 = (int *)((int)piVar4 + 1);
        piVar5 = piVar5 + 2;
      } while ((int)piVar4 <= iVar6);
    }
    if ((int)piVar4 <= iVar6) {
      do {
        *puVar8 = *(undefined4 *)(*piVar3 + (int)((int)(uintptr_t)piVar4) * 8);
        iVar6 = piVar3[2];
        piVar4 = (int *)((int)piVar4 + 1);
        puVar8 = puVar8 + 1;
        if (iVar6 < (int)piVar4) break;
        piVar5 = (int *)(*piVar3 + (int)((int)(uintptr_t)piVar4) * 8);
        do {
          if (*piVar5 != -1) break;
          piVar4 = (int *)((int)piVar4 + 1);
          piVar5 = piVar5 + 2;
        } while ((int)piVar4 <= iVar6);
      } while ((int)piVar4 <= iVar6);
    }
  }
  if (param_2 != 0) {
    piVar4 = (int *)F_00e11310((undefined *)((int)this + 0x14),param_1);
    if (piVar4 != (int *)0xffffffff) {
      piVar5 = *(int * PTR32 *)((int)this + 0x14);
      piVar3 = piVar4;
      do {
        F_00e14c90(this,piVar5[(int)((int)(uintptr_t)piVar3) * 2],param_2,param_3);
        piVar4 = *(int * PTR32 *)((int)this + 0x14);
        piVar3 = (int *)piVar4[(int)((int)(uintptr_t)piVar3) * 2 + 1];
        piVar5 = piVar4;
      } while (piVar3 != (int *)0xffffffff);
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00e14d90 */
uint F_00e14d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14d90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  int iVar1;
  char cVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)((*(int * PTR32 *)&gen_args[1])[2] & 0x3fffffffU) < iVar1) {
    iVar4 = ((*(int * PTR32 *)&gen_args[1])[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),(*(int * PTR32 *)&gen_args[1]),iVar4,4);
  }
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar5 = F_00da3970(this_00);
  uVar6 = F_00da3e40(this_00,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar5);
  cVar2 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
  while (cVar2 != '\0') {
    uVar6 = F_00da39b0(this_00,uVar5);
    *(uint *)(*piVar3 + piVar3[1] * 4) = uVar6;
    piVar3[1] = piVar3[1] + 1;
    uVar5 = F_00da39f0(this_00,uVar5);
    uVar6 = F_00da3e40(this_00,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar5);
    cVar2 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
  }
  return uVar6;
}

/* ref: FUN_00e14e20 */
uint F_00e14e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe14e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  
  piVar3 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    uVar2 = F_00da4190((undefined *)((int)this + 4),param_1,0);
    piVar3 = (int *)0x0;
    if (uVar2 != 0) {
      piVar3 = (int *)F_00e113a0((undefined *)((int)this + 0x34),uVar2);
      for (piVar4 = piVar3; piVar4 != (int *)0xffffffff; piVar4 = (int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2 + 1]
          ) {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + (int)((int)(uintptr_t)piVar4) * 8)));
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_4,4);
        }
        *(undefined4 *)(*param_4 + param_4[1] * 4) = uVar1;
        param_4[1] = param_4[1] + 1;
        piVar3 = *(int * PTR32 *)((int)this + 0x34);
      }
      if (((param_3 != 0) &&
          (piVar4 = (int *)F_00dbd970((undefined *)((int)this + 0x70),uVar2,0), piVar3 = piVar4,
          piVar4 != (int *)0x0)) && ((piVar4[1] & 0x7fffffffU) != 0)) {
        iVar7 = piVar4[2];
        piVar6 = (int *)0x0;
        if (-1 < iVar7) {
          piVar8 = (int *)*piVar4;
          do {
            if (*piVar8 != -1) break;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar8 = piVar8 + 2;
          } while ((int)piVar6 <= iVar7);
        }
        param_1 = piVar6;
        if ((int)piVar6 <= iVar7) {
          do {
            piVar3 = *(int * PTR32 *)(*piVar4 + (int)((int)(uintptr_t)param_1) * 8);
            uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
            if (0 < (int)uVar5) {
              iVar7 = 0;
              do {
                uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,iVar7);
                if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_4,4);
                }
                *(uint *)(*param_4 + param_4[1] * 4) = uVar5;
                param_4[1] = param_4[1] + 1;
                iVar7 = iVar7 + 1;
                uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
              } while (iVar7 < (int)uVar5);
            }
            iVar7 = piVar4[2];
            piVar3 = (int *)((int)param_1 + 1);
            if ((int)piVar3 <= iVar7) {
              piVar6 = (int *)(*piVar4 + (int)((int)(uintptr_t)piVar3) * 8);
              do {
                if (*piVar6 != -1) break;
                piVar3 = (int *)((int)piVar3 + 1);
                piVar6 = piVar6 + 2;
              } while ((int)piVar3 <= iVar7);
            }
            param_1 = piVar3;
          } while ((int)piVar3 <= iVar7);
        }
      }
      if ((param_2 != 0) &&
         (piVar4 = (int *)F_00e11310((undefined *)((int)this + 0x14),uVar2), piVar3 = piVar4,
         piVar4 != (int *)0xffffffff)) {
        piVar3 = *(int * PTR32 *)((int)this + 0x14);
        do {
          iVar7 = param_2;
          iVar9 = param_3;
          piVar6 = param_4;
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2] + 8))))((int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2])
          ;
          F_00e14e20(this,(int *)uVar2,iVar7,iVar9,piVar6);
          piVar3 = *(int * PTR32 *)((int)this + 0x14);
          piVar4 = (int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2 + 1];
        } while (piVar4 != (int *)0xffffffff);
      }
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00e14ff0 */
uint F_00e14ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe14ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  *(undefined4 *)(param_4 + 4) = 0;
  uVar1 = F_00e14e20(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e15020 */
uint F_00e15020(unsigned int gen_a0)
{
  GEN_ENTER(0xe15020u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e15060 */
uint F_00e15060(unsigned int gen_a0)
{
  GEN_ENTER(0xe15060u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e150a0 */
uint F_00e150a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe150a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e150e0 */
uint F_00e150e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe150e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e15120 */
uint F_00e15120(unsigned int gen_a0)
{
  GEN_ENTER(0xe15120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00e15160 */
uint F_00e15160(unsigned int gen_a0)
{
  GEN_ENTER(0xe15160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00e151a0 */
uint F_00e151a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe151a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  uVar3 = F_00e139b0(this);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar3 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: hkDataClassDict::vf0 */
uint F_00e151f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe151f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  F_00e139b0(this);
  puVar2 = *(undefined4 * PTR32 *)(this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(this + 0x18) = 0;
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e15260 */
uint F_00e15260(unsigned int gen_a0)
{
  GEN_ENTER(0xe15260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  uVar3 = F_00e13ac0(this);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: hkDataObjectDict::vf0 */
uint F_00e152a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe152a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  F_00e13ac0(this);
  puVar2 = *(undefined4 * PTR32 *)(this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: ByteArrayImplementation::vf0 */
uint F_00e15300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < (int)*(uint *)(this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(this + 0xc),*(uint *)(this + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: RealArrayImplementation::vf0 */
uint F_00e15370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < *(int *)(this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xc),*(int *)(this + 0x14) * 4);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e153f0 */
uint F_00e153f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe153f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * this_01;
  LPVOID pvVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  
  *(undefined2 *)((int)this + 6) = 0;
  iVar7 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e174));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  *(int *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_4;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))(*(int * PTR32 *)((int)this + 0x18));
  if (0 < (int)uVar2) {
    do {
      piVar1 = *(int * PTR32 *)((int)this + 0x18);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
      iVar6 = iVar7 - uVar2;
      piVar3 = piVar1;
      do {
        iVar6 = iVar6 + piVar3[0xb];
        if (-1 < iVar6) {
          iVar6 = piVar3[10] + iVar6 * 0x18;
          goto LAB_00e1546b;
        }
        piVar3 = (int *)piVar3[6];
      } while (piVar3 != (int *)0x0);
      iVar6 = piVar1[10] + -0x18;
LAB_00e1546b: ;
      F_00e14a10(this,iVar6,*(undefined4 *)((int)this + 0x20));
      iVar7 = iVar7 + 1;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))(*(int * PTR32 *)((int)this + 0x18));
    } while (iVar7 < (int)uVar2);
  }
  iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x24) + 8)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  this_00 = (undefined *)(iVar7 + 0x70);
  this_01 = (undefined4 *)F_00dbd970(this_00,uVar2,0);
  if (this_01 == (undefined4 *)0x0) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),0xc)));
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0xffffffff;
      this_01 = puVar5;
    }
    F_00dbd8b0(this_00,&REFG(undefined * PTR32, 0x13516ac),uVar2,this_01);
  }
  F_00dbd8b0(this_01,&REFG(undefined * PTR32, 0x13516ac),this,0);
  return (uint)this;
}

/* ref: StructArrayImplementation::vf8 */
uint F_00e15510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e15520 */
uint F_00e15520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x114e214));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return (uint)this;
}

/* ref: StructArrayImplementation::Object::vf2 */
uint F_00e15550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe15550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x18))))
                    (*(int * PTR32 *)(this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf1 */
uint F_00e15560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: StructArrayImplementation::Object::vf5 */
uint F_00e15580(void)
{
  GEN_ENTER(0xe15580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf7 */
uint F_00e15590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + 1;
}

/* ref: StructArrayImplementation::Object::vf31 */
unsigned int F_00e155a0(void)
{
  GEN_ENTER(0xe155a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf28 */
unsigned int F_00e155b0(void)
{
  GEN_ENTER(0xe155b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf25 */
uint F_00e155c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe155c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *param_1;
  param_2[1] = 0;
  param_2[2] = param_1[4];
  param_2[3] = param_1[5];
  return (uint)param_2;
}

/* ref: StructArrayImplementation::Object::vf27 */
uint F_00e155f0(void)
{
  GEN_ENTER(0xe155f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::vf1 */
uint F_00e15600(unsigned int gen_a0)
{
  GEN_ENTER(0xe15600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: StructArrayImplementation::vf7 */
uint F_00e15610(unsigned int gen_a0)
{
  GEN_ENTER(0xe15610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: StructArrayImplementation::vf5 */
uint F_00e15620(unsigned int gen_a0)
{
  GEN_ENTER(0xe15620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: FUN_00e15640 */
uint F_00e15640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbe420(this,param_1);
  return uVar1;
}

/* ref: FUN_00e15650 */
uint F_00e15650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15650u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e15660 */
uint F_00e15660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: CWiauPropertyList::LookupPropId */
int F_00e15680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulong param_1 = (ulong)gen_a1;
  int iVar1;
  ulong * puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x10)) {
    puVar2 = *(ulong * PTR32 *)(this + 0xc);
    do {
      if (*puVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 < *(int *)(this + 0x10));
  }
  return -1;
}

/* ref: FUN_00e156b0 */
uint F_00e156b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe156b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *(int *)((int)this + 0x10));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::vf4 */
uint F_00e156e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe156e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x10)));
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0xc)));
    do {
      if ((*(int *)&gen_args[1]) == *piVar3) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf26 */
uint F_00e15730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10)));
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    do {
      if (*param_1 == *piVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf6 */
uint F_00e15770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(param_1 < *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))));
}

/* ref: StructArrayImplementation::Object::vf8 */
uint F_00e15790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_1 * 8)));
}

/* ref: StructArrayImplementation::Object::vf9 */
uint F_00e157b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe157b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = this;
  param_1[1] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_2 * 8)));
  return (uint)param_1;
}

/* ref: StructArrayImplementation::vf23 */
uint F_00e157d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe157d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x14)));
  puVar2[3] = this;
  puVar2[1] = 0x14;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[36])REFP(0x114e214));
  puVar2[4] = param_1;
  return (uint)puVar2;
}

/* ref: StructArrayImplementation::vf24 */
unsigned int F_00e15810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  param_2[2] = param_2[2] + 1;
  iVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc) + iVar4 * 8)));
      uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0xc))(param_2,((undefined1 *)(gen_frame + 0x0)),*puVar2);
      F_00e1d1b0(puVar2[1],param_1,uVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
  }
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ((code *)*(gen_code32 *)*param_2)(param_2,1);
  }
  return 0;
}

/* ref: StructArrayImplementation::vf2 */
unsigned int F_00e15880(unsigned int gen_a0)
{
  GEN_ENTER(0xe15880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x10) < 1) {
    *(undefined4 *)(this + 0x20) = 0;
    return 0;
  }
  do {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(this + 0x10));
  *(undefined4 *)(this + 0x20) = 0;
  return 0;
}

/* ref: StructArrayImplementation::vf3 */
unsigned int F_00e158c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe158c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return 0;
}

/* ref: StructArrayImplementation::vf4 */
unsigned int F_00e158f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe158f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(this + 0x20) = param_1;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf0 */
uint F_00e15930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15930u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e15970 */
uint F_00e15970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  this_00 = (undefined *)F_00dbd970((undefined *)((int)this + 0x70),uVar1,0);
  uVar1 = F_00dbe420(this_00,param_1);
  return uVar1;
}

/* ref: FUN_00e159b0 */
uint F_00e159b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe159b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e15a10 */
uint F_00e15a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))) + 8)));
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
  }
  uVar3 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    puVar4 = *(uint * PTR32 *)((int)this + 0xc);
    do {
      if (*puVar4 == uVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while ((int)uVar3 < *(int *)((int)this + 0x10));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::vf3 */
uint F_00e15a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8))) + 0x50)));
    uVar1 = F_00da4190(this_00,param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20(this_00,uVar1,uVar1);
    }
  }
  uVar1 = F_00e11bf0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))),uVar1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::Object::vf29 */
unsigned int F_00e15b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e11b60(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))),param_1);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf30 */
uint F_00e15b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::vf6 */
uint F_00e15b80(unsigned int gen_a0)
{
  GEN_ENTER(0xe15b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: StructArrayImplementation::vf10 */
uint F_00e15b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e15a10(this,param_1);
  return *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar1 * 8)));
}

/* ref: FUN_00e15bb0 */
uint F_00e15bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15bb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e15bf0 */
uint F_00e15bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  uVar1 = F_00e14a10(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e15c10 */
uint F_00e15c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    do {
      if (*piVar2 == *param_1) {
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *(int *)((int)this + 0x10));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  uVar1 = F_00e14a10(this,param_1,uVar1);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf14 */
uint F_00e15c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf11 */
uint F_00e15c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf10 */
uint F_00e15cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf12 */
uint F_00e15cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf32 */
uint F_00e15d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf15 */
uint F_00e15d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf33 */
uint F_00e15d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1,param_1,*(undefined4 *)(this + 0x10));
  return param_1;
}

/* ref: StructArrayImplementation::Object::vf13 */
uint F_00e15dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf24 */
uint F_00e15df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  uVar1 = F_00e1d1b0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar1 * 8))),
                       *(undefined4 *)(this + 0x10),param_2);
  return uVar1;
}

